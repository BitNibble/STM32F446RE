################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Library/74hc595.c \
../Library/armfunction.c \
../Library/armlcd.c \
../Library/armquery.c \
../Library/armsystick.c \
../Library/buffer.c \
../Library/circbuffer.c \
../Library/explode.c \
../Library/stm32446adc.c \
../Library/stm32446adc1.c \
../Library/stm32446adc2.c \
../Library/stm32446adc3.c \
../Library/stm32446crc.c \
../Library/stm32446dma.c \
../Library/stm32446flash.c \
../Library/stm32446gpio.c \
../Library/stm32446mapping.c \
../Library/stm32446nvic.c \
../Library/stm32446pwr.c \
../Library/stm32446rtc.c \
../Library/stm32446sram.c \
../Library/stm32446syscfg.c \
../Library/stm32446tim1and8.c \
../Library/stm32446tim2to5.c \
../Library/stm32446tim6and7.c \
../Library/stm32446tim9to14.c \
../Library/stm32446usart.c \
../Library/stm32fxxxhandler.c \
../Library/stm32fxxxinstance.c \
../Library/stm32fxxxrcc.c \
../Library/znpid.c 

OBJS += \
./Library/74hc595.o \
./Library/armfunction.o \
./Library/armlcd.o \
./Library/armquery.o \
./Library/armsystick.o \
./Library/buffer.o \
./Library/circbuffer.o \
./Library/explode.o \
./Library/stm32446adc.o \
./Library/stm32446adc1.o \
./Library/stm32446adc2.o \
./Library/stm32446adc3.o \
./Library/stm32446crc.o \
./Library/stm32446dma.o \
./Library/stm32446flash.o \
./Library/stm32446gpio.o \
./Library/stm32446mapping.o \
./Library/stm32446nvic.o \
./Library/stm32446pwr.o \
./Library/stm32446rtc.o \
./Library/stm32446sram.o \
./Library/stm32446syscfg.o \
./Library/stm32446tim1and8.o \
./Library/stm32446tim2to5.o \
./Library/stm32446tim6and7.o \
./Library/stm32446tim9to14.o \
./Library/stm32446usart.o \
./Library/stm32fxxxhandler.o \
./Library/stm32fxxxinstance.o \
./Library/stm32fxxxrcc.o \
./Library/znpid.o 

C_DEPS += \
./Library/74hc595.d \
./Library/armfunction.d \
./Library/armlcd.d \
./Library/armquery.d \
./Library/armsystick.d \
./Library/buffer.d \
./Library/circbuffer.d \
./Library/explode.d \
./Library/stm32446adc.d \
./Library/stm32446adc1.d \
./Library/stm32446adc2.d \
./Library/stm32446adc3.d \
./Library/stm32446crc.d \
./Library/stm32446dma.d \
./Library/stm32446flash.d \
./Library/stm32446gpio.d \
./Library/stm32446mapping.d \
./Library/stm32446nvic.d \
./Library/stm32446pwr.d \
./Library/stm32446rtc.d \
./Library/stm32446sram.d \
./Library/stm32446syscfg.d \
./Library/stm32446tim1and8.d \
./Library/stm32446tim2to5.d \
./Library/stm32446tim6and7.d \
./Library/stm32446tim9to14.d \
./Library/stm32446usart.d \
./Library/stm32fxxxhandler.d \
./Library/stm32fxxxinstance.d \
./Library/stm32fxxxrcc.d \
./Library/znpid.d 


# Each subdirectory must supply rules for building sources it contributes
Library/%.o Library/%.su Library/%.cyclo: ../Library/%.c Library/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I"D:/Embedded/STM32F446RE/workspace/Project-1/Library" -I"D:/Embedded/STM32F446RE/workspace/Project-1/Core/Inc" -I"D:/Embedded/STM32F446RE/workspace/Project-1/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"D:/Embedded/STM32F446RE/workspace/Project-1/Drivers/STM32F4xx_HAL_Driver/Inc" -I"D:/Embedded/STM32F446RE/workspace/Project-1/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/Embedded/STM32F446RE/workspace/Project-1/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Library

clean-Library:
	-$(RM) ./Library/74hc595.cyclo ./Library/74hc595.d ./Library/74hc595.o ./Library/74hc595.su ./Library/armfunction.cyclo ./Library/armfunction.d ./Library/armfunction.o ./Library/armfunction.su ./Library/armlcd.cyclo ./Library/armlcd.d ./Library/armlcd.o ./Library/armlcd.su ./Library/armquery.cyclo ./Library/armquery.d ./Library/armquery.o ./Library/armquery.su ./Library/armsystick.cyclo ./Library/armsystick.d ./Library/armsystick.o ./Library/armsystick.su ./Library/buffer.cyclo ./Library/buffer.d ./Library/buffer.o ./Library/buffer.su ./Library/circbuffer.cyclo ./Library/circbuffer.d ./Library/circbuffer.o ./Library/circbuffer.su ./Library/explode.cyclo ./Library/explode.d ./Library/explode.o ./Library/explode.su ./Library/stm32446adc.cyclo ./Library/stm32446adc.d ./Library/stm32446adc.o ./Library/stm32446adc.su ./Library/stm32446adc1.cyclo ./Library/stm32446adc1.d ./Library/stm32446adc1.o ./Library/stm32446adc1.su ./Library/stm32446adc2.cyclo ./Library/stm32446adc2.d ./Library/stm32446adc2.o ./Library/stm32446adc2.su ./Library/stm32446adc3.cyclo ./Library/stm32446adc3.d ./Library/stm32446adc3.o ./Library/stm32446adc3.su ./Library/stm32446crc.cyclo ./Library/stm32446crc.d ./Library/stm32446crc.o ./Library/stm32446crc.su ./Library/stm32446dma.cyclo ./Library/stm32446dma.d ./Library/stm32446dma.o ./Library/stm32446dma.su ./Library/stm32446flash.cyclo ./Library/stm32446flash.d ./Library/stm32446flash.o ./Library/stm32446flash.su ./Library/stm32446gpio.cyclo ./Library/stm32446gpio.d ./Library/stm32446gpio.o ./Library/stm32446gpio.su ./Library/stm32446mapping.cyclo ./Library/stm32446mapping.d ./Library/stm32446mapping.o ./Library/stm32446mapping.su ./Library/stm32446nvic.cyclo ./Library/stm32446nvic.d ./Library/stm32446nvic.o ./Library/stm32446nvic.su ./Library/stm32446pwr.cyclo ./Library/stm32446pwr.d ./Library/stm32446pwr.o ./Library/stm32446pwr.su ./Library/stm32446rtc.cyclo ./Library/stm32446rtc.d ./Library/stm32446rtc.o ./Library/stm32446rtc.su ./Library/stm32446sram.cyclo ./Library/stm32446sram.d ./Library/stm32446sram.o ./Library/stm32446sram.su ./Library/stm32446syscfg.cyclo ./Library/stm32446syscfg.d ./Library/stm32446syscfg.o ./Library/stm32446syscfg.su ./Library/stm32446tim1and8.cyclo ./Library/stm32446tim1and8.d ./Library/stm32446tim1and8.o ./Library/stm32446tim1and8.su ./Library/stm32446tim2to5.cyclo ./Library/stm32446tim2to5.d ./Library/stm32446tim2to5.o ./Library/stm32446tim2to5.su ./Library/stm32446tim6and7.cyclo ./Library/stm32446tim6and7.d ./Library/stm32446tim6and7.o ./Library/stm32446tim6and7.su ./Library/stm32446tim9to14.cyclo ./Library/stm32446tim9to14.d ./Library/stm32446tim9to14.o ./Library/stm32446tim9to14.su ./Library/stm32446usart.cyclo ./Library/stm32446usart.d ./Library/stm32446usart.o ./Library/stm32446usart.su ./Library/stm32fxxxhandler.cyclo ./Library/stm32fxxxhandler.d ./Library/stm32fxxxhandler.o ./Library/stm32fxxxhandler.su ./Library/stm32fxxxinstance.cyclo ./Library/stm32fxxxinstance.d ./Library/stm32fxxxinstance.o ./Library/stm32fxxxinstance.su ./Library/stm32fxxxrcc.cyclo ./Library/stm32fxxxrcc.d ./Library/stm32fxxxrcc.o ./Library/stm32fxxxrcc.su ./Library/znpid.cyclo ./Library/znpid.d ./Library/znpid.o ./Library/znpid.su

.PHONY: clean-Library

