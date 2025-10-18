/**********************************************************************
	STM32F446RE
Author:   <sergio.salazar.santos@gmail.com>
License:  GNU General Public License
Hardware: STM32F446RE
Date:     18102025
**********************************************************************/
#ifndef STM32F446RE_H
#define STM32F446RE_H

#include <stdint.h>
#include <inttypes.h>
#include <stddef.h>
#include "stm32f4xx.h"
#include "stm32fxxxtool.h"

/*** Clock sources ***/
#ifndef HSI_RC
#define HSI_RC 16000000UL
#endif
#ifndef HSE_OSC
#define HSE_OSC 25000000UL
#endif
#ifndef LSI
#define LSI 32000UL
#endif
#ifndef LSE
#define LSE 32768UL
#endif
#ifndef HSE_RTC
#define HSE_RTC 4000000UL
#endif

/****************************************/
/*******   0 -> HSI    1->HSE   *********/
#define H_Clock_Source 1
/****   PLL ON -> 1    PLL OFF = 0   ****/
#define PLL_ON_OFF 0
/****************************************/
/****************************************/
typedef union{
	struct UN8bit{
		uint8_t bit0:1;
		uint8_t bit1:1;
		uint8_t bit2:1;
		uint8_t bit3:1;
		uint8_t bit4:1;
		uint8_t bit5:1;
		uint8_t bit6:1;
		uint8_t bit7:1;
	}par;
	uint8_t var;
}_UN8_var;

typedef union{
	struct UN16byte{
		_UN8_var b0;
		_UN8_var b1;
	}par;
	uint16_t var;
}_UN16_var;

typedef union{
	struct UN32word{
		_UN16_var w0;
		_UN16_var w1;
	}par;
	uint32_t var;
}_UN32_var;

typedef union{
	struct UN64dword{
		_UN32_var dw0;
		_UN32_var dw1;
	}par;
	uint64_t var;
}_UN64_var;

/*******************************************************************/
/********************* MAIN HARDWARE LAYER *************************/
/*******************************************************************/
typedef struct {
    NVIC_Type* const nvic;
    SCB_Type* const scb;
    SCnSCB_Type* const scnscb;
    SysTick_Type* const systick;
    ITM_Type* const itm;
    DWT_Type* const dwt;
    TPI_Type* const tpi;
    MPU_Type* const mpu;
    FPU_Type* const fpu;
    CoreDebug_Type* const coredebug;
} STM32F446RE_CORE_Handler;

typedef struct {
    STM32F446RE_CORE_Handler* core;

    ADC_TypeDef* const adc1;
    ADC_TypeDef* const adc2;
    ADC_TypeDef* const adc3;
    ADC_Common_TypeDef* const adc123_common;
	CAN_TypeDef* const can1;
    CAN_TypeDef* const can2;
	CEC_TypeDef* const cec;
    CRC_TypeDef* const crc;
    DAC_TypeDef* const dac1;
    DBGMCU_TypeDef* const dbgmcu;
    DCMI_TypeDef* const dcmi;
    DMA_Stream_TypeDef* const dma1_stream0;
    DMA_Stream_TypeDef* const dma1_stream1;
    DMA_Stream_TypeDef* const dma1_stream2;
    DMA_Stream_TypeDef* const dma1_stream3;
    DMA_Stream_TypeDef* const dma1_stream4;
    DMA_Stream_TypeDef* const dma1_stream5;
    DMA_Stream_TypeDef* const dma1_stream6;
    DMA_Stream_TypeDef* const dma1_stream7;
    DMA_Stream_TypeDef* const dma2_stream0;
    DMA_Stream_TypeDef* const dma2_stream1;
    DMA_Stream_TypeDef* const dma2_stream2;
    DMA_Stream_TypeDef* const dma2_stream3;
    DMA_Stream_TypeDef* const dma2_stream4;
    DMA_Stream_TypeDef* const dma2_stream5;
    DMA_Stream_TypeDef* const dma2_stream6;
    DMA_Stream_TypeDef* const dma2_stream7;
    DMA_TypeDef* const dma1;
    DMA_TypeDef* const dma2;
    EXTI_TypeDef* const exti;
    FLASH_TypeDef* const flash;
    FMC_Bank1_TypeDef* const fmc_bank1;
	FMC_Bank1E_TypeDef* const fmc_bank1e;
	FMC_Bank3_TypeDef* const fmc_bank3;
	FMC_Bank5_6_TypeDef* const fmc_bank5_6;
    GPIO_TypeDef* const gpioa;
    GPIO_TypeDef* const gpiob;
    GPIO_TypeDef* const gpioc;
    GPIO_TypeDef* const gpiod;
    GPIO_TypeDef* const gpioe;
    GPIO_TypeDef* const gpiof;
    GPIO_TypeDef* const gpiog;
    GPIO_TypeDef* const gpioh;
    SYSCFG_TypeDef* const syscfg;
    I2C_TypeDef* const i2c1;
    I2C_TypeDef* const i2c2;
    I2C_TypeDef* const i2c3;
    FMPI2C_TypeDef* const fmpi2c1;
    IWDG_TypeDef* const iwdg;
    PWR_TypeDef* const pwr;
    RCC_TypeDef* const rcc;
    RTC_TypeDef* const rtc;
    SAI_TypeDef* const sai1;
	SAI_Block_TypeDef* const sai1_block_a;
	SAI_Block_TypeDef* const sai1_block_b;
    SAI_TypeDef* const sai2;
	SAI_Block_TypeDef* const sai2_block_a;
	SAI_Block_TypeDef* const sai2_block_b;
    SDIO_TypeDef* const sdio;
    SPI_TypeDef* const spi1;
    SPI_TypeDef* const spi2;
    SPI_TypeDef* const spi3;
    SPI_TypeDef* const spi4;
    QUADSPI_TypeDef* const quadspi;
	SPDIFRX_TypeDef* const spdifrx;
    TIM_TypeDef* const tim1;
    TIM_TypeDef* const tim2;
    TIM_TypeDef* const tim3;
    TIM_TypeDef* const tim4;
    TIM_TypeDef* const tim5;
    TIM_TypeDef* const tim6;
    TIM_TypeDef* const tim7;
    TIM_TypeDef* const tim8;
    TIM_TypeDef* const tim9;
    TIM_TypeDef* const tim10;
    TIM_TypeDef* const tim11;
    TIM_TypeDef* const tim12;
    TIM_TypeDef* const tim13;
    TIM_TypeDef* const tim14;
    USART_TypeDef* const usart1;
    USART_TypeDef* const usart2;
    USART_TypeDef* const usart3;
    USART_TypeDef* const uart4;
    USART_TypeDef* const uart5;
    USART_TypeDef* const usart6;
    WWDG_TypeDef* const wwdg;
    USB_OTG_GlobalTypeDef* const usb_otg_global;
    USB_OTG_DeviceTypeDef* const usb_otg_device;
    USB_OTG_INEndpointTypeDef* const usb_otg_inendpoint;
    USB_OTG_OUTEndpointTypeDef* const usb_otg_outendpoint;
    USB_OTG_HostTypeDef* const usb_otg_host;
    USB_OTG_HostChannelTypeDef* const usb_otg_hostchannel;

} STM32F446RE_Handler;

STM32F446RE_Handler* stm32f446re(void);

/*******************************************************************/
/************************** CLOCK GETTERS **************************/
/*******************************************************************/
uint16_t get_hpre(void);
uint8_t get_hppre1(void);
uint8_t get_hppre2(void);
uint8_t get_rtcpre(void);
uint8_t get_hmco1pre(void);
uint8_t get_hmco2pre(void);
uint8_t get_pllm(void);
uint16_t get_plln(void);
uint8_t get_pllp(void);
uint8_t get_pllq(void);
uint8_t get_pllr(void); // F446 only

uint32_t get_pllsourceclk(void);
uint32_t get_pllclk(void);
uint32_t get_sysclk(void);
uint32_t get_hclk(void);
uint32_t get_pclk1(void);
uint32_t get_pclk2(void);

/*******************************************************************/
/************************** GPIO & USART ***************************/
/*******************************************************************/
void set_hpins(GPIO_TypeDef* reg, uint16_t hpins);
void clear_hpins(GPIO_TypeDef* reg, uint16_t hpins);
void set_pin(GPIO_TypeDef* reg, uint8_t pin);
void clear_pin(GPIO_TypeDef* reg, uint8_t pin);

void Usart_WordLength(USART_TypeDef* usart, uint8_t wordlength);
void Usart_StopBits(USART_TypeDef* usart, double stopbits);
void Usart_SamplingMode(USART_TypeDef* usart, uint8_t samplingmode, uint32_t baudrate);

void fpu_enable(void);

#endif

/*** EOF ***/

