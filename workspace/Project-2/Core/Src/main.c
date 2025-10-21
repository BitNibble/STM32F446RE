/* USER CODE BEGIN CODE */
/*****************************************************************************
Author: <sergio.salazar.santos@gmail.com>
License: GNU General Public License
File: MAIN 21/10/2025
Software: STM32CubeIDE Version: 1.14.0 Build: 19471_20231121_1200 (UTC)
Hardware: Nucleo-F446RE
	Comment:
PC 0,1,2 		---> 74HC595
PB 0...7 		---> LCD 4x20
PA 5     		---> Led indicator
PC 13    		---> user button
PA9 and PA10 	---> USART1
******************************************************************************/
#include "main.h"

#include "stm32fxxxrcc.h"
#include "stm32fxxxnvic.h"
#include "stm32fxxxgpio.h"
#include "stm32fxxxtim1and8.h"
#include "explode.h"

void cc1_callback(void){
	dev()->gpioa->ODR ^= (1 << 5);
}
EXPLODE_Handler PC;

int main(void)
{
rcc()->inic();
gpioa()->clock(1);
gpioa()->moder(5,1);
tim1()->clock(1);
nvic()->set_enable(TIM1_CC_IRQn);
set_reg_Msk(&dev()->tim1->DIER, TIM_DIER_CC1IE_Msk, 1);
tim1()->callback->cc1 = cc1_callback;

gpioc()->clock(1);
PC = EXPLODE_enable();

dev()->tim1->PSC = 30;
dev()->tim1->ARR = 65535;
dev()->tim1->CCR1 = 32767;
tim1()->start();

while(1)
{
	PC.update(&PC.par,dev()->gpioc->IDR);
	if(PC.par.LH & (1 << 13)) tim1()->start();
	if(PC.par.HL & (1 << 13)) tim1()->stop();
}}
/* USER CODE END CODE */

void Error_Handler(void)
{
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
void assert_failed(uint8_t *file, uint32_t line)
{

}
#endif

