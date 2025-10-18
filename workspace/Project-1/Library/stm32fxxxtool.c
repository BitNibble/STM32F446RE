/*****************************************
	STM32FXXX TOOL
Author:   <sergio.salazar.santos@gmail.com>
License:  GNU General Public License
Hardware: STM32FXXX
Update:   07/01/2024
*****************************************/
#include "stm32fxxxtool.h"
#include <stdarg.h>
#include <math.h>

/*** Define and Macro ***/
#define FTDELAY_SIZE 255
unsigned int ft_Delay_Lock[FTDELAY_SIZE] = {0};
volatile unsigned int ftCounter[FTDELAY_SIZE] = {0};
/*** Local ***/
uint32_t _size_to_block(uint32_t size_block);
uint32_t _block_to_size(uint32_t block);
uint32_t _get_mask(uint32_t size_block, uint32_t Pos);
uint32_t _get_pos(uint32_t size_block, uint32_t block_n);
uint32_t _mask_pos(uint32_t Msk);
/*** SUB Tools ***/
uint32_t _size_to_block(uint32_t size_block){
	return (size_block > 31) ? 0xFFFFFFFFU : ((1U << size_block) - 1);
}
uint32_t _block_to_size(uint32_t block) {
    return block ? (32 - __builtin_clz(block)) : 0U;
}
uint32_t _get_mask(uint32_t size_block, uint32_t Pos){
	return _size_to_block(size_block) << Pos;
}
uint32_t _get_pos(uint32_t size_block, uint32_t block_n){
	return size_block * block_n;
}
uint32_t _mask_pos(uint32_t Msk){
	return Msk ? __builtin_ctz(Msk) : 0U;
}
// --- Generic helpers ---
uint32_t _reg_get(volatile uint32_t *reg, uint32_t mask) {
    return (*reg & mask) >> _mask_pos(mask);
}

void _reg_set(volatile uint32_t *reg, uint32_t mask, uint32_t val) {
    *reg = (*reg & ~mask) | ((val << _mask_pos(mask)) & mask);
}
/*** Tools ***/
inline void set_reg(volatile uint32_t* reg, uint32_t hbits){
	*reg |= hbits;
}
inline void clear_reg(volatile uint32_t* reg, uint32_t hbits){
	*reg &= ~hbits;
}
inline uint32_t get_reg_Msk(uint32_t reg, uint32_t Msk)
{
	return (reg & Msk) >> _mask_pos(Msk);
}
inline void write_reg_Msk(volatile uint32_t* reg, uint32_t Msk, uint32_t data)
{
	uint32_t value = *reg;
	uint32_t Pos = _mask_pos(Msk);
	data = (data << Pos) & Msk; value &= ~(Msk); value |= data; *reg = value;
}
inline void set_reg_Msk(volatile uint32_t* reg, uint32_t Msk, uint32_t data)
{
	uint32_t Pos = _mask_pos(Msk);
	data = (data << Pos) & Msk; *reg &= ~(Msk); *reg |= data;
}
uint32_t get_reg_block(uint32_t reg, uint8_t size_block, uint8_t bit_n)
{
	if(bit_n < DWORD_BITS && size_block != 0 && bit_n + size_block <= DWORD_BITS) {
		uint32_t Msk = _get_mask(size_block, bit_n);
		reg = (reg & Msk) >> bit_n;
	}
	return reg;
}
void write_reg_block(volatile uint32_t* reg, uint8_t size_block, uint8_t bit_n, uint32_t data)
{
	uint32_t value = *reg;
	if(bit_n < DWORD_BITS && size_block != 0 && bit_n + size_block <= DWORD_BITS) {
		uint32_t block = _size_to_block(size_block);
		data &= block; value &= ~(block << bit_n);
		data = (data << bit_n);
		value |= data;
		*reg = value;
	}
}
void set_reg_block(volatile uint32_t* reg, uint8_t size_block, uint8_t bit_n, uint32_t data)
{
	if(bit_n < DWORD_BITS && size_block != 0 && bit_n + size_block <= DWORD_BITS) {
		uint32_t block = _size_to_block(size_block);
		data &= block;
		*reg &= ~(block << bit_n);
		*reg |= (data << bit_n);
	}
}
uint32_t get_bit_block(volatile uint32_t* reg, uint8_t size_block, uint8_t bit_n)
{
	uint32_t n = bit_n / DWORD_BITS; bit_n = bit_n % DWORD_BITS;
	uint32_t value = *(reg + n );
	if(size_block != 0 && bit_n + size_block <= DWORD_BITS){
		uint32_t Msk = _get_mask(size_block, bit_n);
		value = (value & Msk) >> bit_n;
	}
	return value;
}
void set_bit_block(volatile uint32_t* reg, uint8_t size_block, uint8_t bit_n, uint32_t data)
{
	uint32_t n = bit_n / DWORD_BITS; bit_n = bit_n % DWORD_BITS;
	if(size_block != 0 && bit_n + size_block <= DWORD_BITS) {
		uint32_t block = _size_to_block(size_block);
		data &= block;
		*(reg + n ) &= ~(block << bit_n);
		*(reg + n ) |= (data << bit_n);
	}
}

/****************************************/
// UNUSED
void STM32446SetRegBits( uint32_t* reg, uint8_t n_bits, ... )
{
	uint8_t i;
	if(n_bits > 0 && n_bits <= DWORD_BITS){ // Filter input
		va_list list;
		va_start(list, n_bits);
		for(i = 0; i < n_bits; i++){
			*reg |= (uint32_t)(1 << va_arg(list, int));
		}
		va_end(list);
	}
}
void STM32446ResetRegBits( uint32_t* reg, uint8_t n_bits, ... )
{
	uint8_t i;
	if(n_bits > 0 && n_bits <= DWORD_BITS){ // Filter input
		va_list list;
		va_start(list, n_bits);
		for(i = 0; i < n_bits; i++){
			*reg &= (uint32_t)~(1 << va_arg(list, int));
		}
		va_end(list);
	}
}
void STM32446VecSetup( volatile uint32_t vec[], unsigned int size_block, unsigned int block_n, unsigned int data )
{
	const unsigned int n_bits = sizeof(data) * BYTE_BITS;
	if(size_block > n_bits){ size_block = n_bits; }
	const unsigned int block = _size_to_block(size_block);
	unsigned int index = _get_pos(size_block, block_n) / n_bits;
	data &= block;
	vec[index] &= ~( block << (_get_pos(size_block, block_n) - (index * n_bits)) );
	vec[index] |= ( data << (_get_pos(size_block, block_n) - (index * n_bits)) );
}

/****************************************/
/*** NULL Check ***/
int isPtrNull(void* ptr) {
    return ptr ? 0 : 1; // Returns 1 if NULL, 0 otherwise
}
int isCharPtrFlush(void* ptr) {
    // Cast the void pointer to a char pointer to dereference it
    return *((unsigned char*)ptr) ? 0 : 1; // Returns 1 if '\0', 0 otherwise
}

/*** ADC ***/
float CalculateTemperature(uint16_t adc_value) {
    const float V_25 = 0.76f;  // Voltage at 25°C (in volts)
    const float Avg_slope = 0.0025f;  // Average slope (in volts/°C)
    const float V_ref = 3.3f;  // Reference voltage, typically 3.0V or 3.3V

    float V_sense = ((float)adc_value / 4096) * V_ref;
    return ((V_sense - V_25) / Avg_slope) + 25.0f;
}

/*** Fall Threw Delay ***/
int ftdelayCycles(uint8_t lock_ID, unsigned int n_cycle, void (*execute)(void)) {
    int ret = 0;
    if (lock_ID >= FTDELAY_SIZE) return 0; // safety check

    if (ft_Delay_Lock[lock_ID] != lock_ID) {
        ft_Delay_Lock[lock_ID] = lock_ID;
        ftCounter[lock_ID] = n_cycle;
        if(execute){ execute (); }
        ftCounter[lock_ID]--;
    } else {
        if (--ftCounter[lock_ID] > 0U) {
            // still counting down, do nothing
        } else {
            ft_Delay_Lock[lock_ID] = 0U;
            ret = 1; // delay expired
        }
    }
    return ret;
}

void ftdelayReset(uint8_t ID) {
    if (ID >= FTDELAY_SIZE) return; // safety check
    ft_Delay_Lock[ID] = 0U;
    ftCounter[ID] = 0U;
}
/****************************************/
/***
TypeDef -> Instance -> Handler
bit_n = bit_n % DWORD_BITS; is the same as bit_n = bit_n & (DWORD_BITS - 1);, for power of two numbers.
General behavior for filtering inputs, is if does not pass the filter it is to be ignored and not make
any changes, leaving everything as was. Maybe think later to just give a signal warning.
***/

/*** EOF ***/

