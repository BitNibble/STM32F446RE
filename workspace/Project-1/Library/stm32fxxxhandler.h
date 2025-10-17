/************************************************************************
	STM32FXXX
Author: Sergio Manuel Santos
	<sergio.salazar.santos@gmail.com>
License: GNU General Public License
Hardware: STM32FXXX
Update: 07/01/2024
Comment:
	
************************************************************************/
#ifndef _STM32FXXXHANDLER_H_
	#define _STM32FXXXHANDLER_H_

/*** CMSIS BASE ***/
#include <stm32f446xx.h>

/*** HARDWARE HANDLER ***/
IRQn_Type irq(void);
ADC_TypeDef* adc1_handle(void);
ADC_TypeDef* adc2_handle(void);
ADC_TypeDef* adc3_handle(void);
ADC_Common_TypeDef* adc_common_handle(void);
CAN_TypeDef* can1_handle(void);
CAN_TypeDef* can2_handle(void);
CEC_TypeDef* cec_handle(void);
CRC_TypeDef* crc_handle(void);
DAC_TypeDef* dac_handle(void);
DBGMCU_TypeDef* dbgmcu_handle(void);
DCMI_TypeDef* dcmi_handle(void);
DMA_TypeDef* dma1_handle(void);
DMA_Stream_TypeDef* dma1_stream0_handle(void);
DMA_Stream_TypeDef* dma1_stream1_handle(void);
DMA_Stream_TypeDef* dma1_stream2_handle(void);
DMA_Stream_TypeDef* dma1_stream3_handle(void);
DMA_Stream_TypeDef* dma1_stream4_handle(void);
DMA_Stream_TypeDef* dma1_stream5_handle(void);
DMA_Stream_TypeDef* dma1_stream6_handle(void);
DMA_Stream_TypeDef* dma1_stream7_handle(void);
DMA_TypeDef* dma2_handle(void);
DMA_Stream_TypeDef* dma2_stream0_handle(void);
DMA_Stream_TypeDef* dma2_stream1_handle(void);
DMA_Stream_TypeDef* dma2_stream2_handle(void);
DMA_Stream_TypeDef* dma2_stream3_handle(void);
DMA_Stream_TypeDef* dma2_stream4_handle(void);
DMA_Stream_TypeDef* dma2_stream5_handle(void);
DMA_Stream_TypeDef* dma2_stream6_handle(void);
DMA_Stream_TypeDef* dma2_stream7_handle(void);
EXTI_TypeDef* exti_handle(void);
FLASH_TypeDef* flash_handle;
FMC_Bank1_TypeDef* fmc_bank1_handle(void);
FMC_Bank1E_TypeDef* fmc_bank1e_handle(void);
FMC_Bank3_TypeDef* fmc_bank3_handle(void);
FMC_Bank5_6_TypeDef* fmc_bank5_6_handle(void);
GPIO_TypeDef* gpioa_handle(void);
GPIO_TypeDef* gpiob_handle(void);
GPIO_TypeDef* gpioc_handle(void);
GPIO_TypeDef* gpiod_handle(void);
GPIO_TypeDef* gpioe_handle(void);
GPIO_TypeDef* gpiof_handle(void);
GPIO_TypeDef* gpiog_handle(void);
GPIO_TypeDef* gpioh_handle(void);
SYSCFG_TypeDef* syscfg_handle(void);
I2C_TypeDef* i2c1_handle(void);
I2C_TypeDef* i2c2_handle(void);
I2C_TypeDef* i2c3_handle(void);
FMPI2C_TypeDef* fmpi2c1_handle(void);
IWDG_TypeDef* iwdg_handle(void);
PWR_TypeDef* pwr_handle(void);
RCC_TypeDef* rcc_handle(void);
RTC_TypeDef* rtc_handle(void);
SAI_TypeDef* sai1_handle(void){return (SAI_TypeDef*) SAI1_BASE;}
SAI_Block_TypeDef* sai1_block_a_handle(void);
SAI_Block_TypeDef* sai1_block_b_handle(void);
SAI_TypeDef* sai2_handle(void);
SAI_Block_TypeDef* sai2_block_a_handle(void);
SAI_Block_TypeDef* sai2_block_b_handle(void);
SDIO_TypeDef* sdio_handle(void);
SPI_TypeDef* spi1_handle(void);
SPI_TypeDef* spi2_handle(void);
SPI_TypeDef* spi3_handle(void);
SPI_TypeDef* spi4_handle(void);
QUADSPI_TypeDef* quadspi_handle(void);
SPDIFRX_TypeDef* spdifrx_handle(void);
TIM_TypeDef* tim1_handle(void);
TIM_TypeDef* tim2_handle(void);
TIM_TypeDef* tim3_handle(void);
TIM_TypeDef* tim4_handle(void);
TIM_TypeDef* tim5_handle(void);
TIM_TypeDef* tim6_handle(void);
TIM_TypeDef* tim7_handle(void);
TIM_TypeDef* tim8_handle(void);
TIM_TypeDef* tim9_handle(void);
TIM_TypeDef* tim10_handle(void);
TIM_TypeDef* tim11_handle(void);
TIM_TypeDef* tim12_handle(void);
TIM_TypeDef* tim13_handle(void);
TIM_TypeDef* tim14_handle(void);
USART_TypeDef* usart1_handle(void);
USART_TypeDef* usart2_handle(void);
USART_TypeDef* usart3_handle(void);
USART_TypeDef* uart4_handle(void);
USART_TypeDef* uart5_handle(void);
USART_TypeDef* usart6_handle(void);
WWDG_TypeDef* wwdg_handle(void);
USB_OTG_GlobalTypeDef* usb_otg_global_handle(void);
USB_OTG_DeviceTypeDef* usb_otg_device_handle(void);
USB_OTG_INEndpointTypeDef* usb_otg_inendpoint_handle(void);
USB_OTG_OUTEndpointTypeDef* usb_otg_outendpoint_handle(void);
USB_OTG_HostTypeDef* usb_otg_host_handle(void);
USB_OTG_HostChannelTypeDef* usb_otg_hotchannel_handle(void);

#endif

/*** EOF ***/

