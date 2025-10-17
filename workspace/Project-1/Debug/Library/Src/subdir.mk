################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Library/Src/74hc595.c \
../Library/Src/armfunction.c \
../Library/Src/armlcd.c \
../Library/Src/armquery.c \
../Library/Src/armsystick.c \
../Library/Src/buffer.c \
../Library/Src/circbuffer.c \
../Library/Src/explode.c \
../Library/Src/stm32446adc.c \
../Library/Src/stm32446adc1.c \
../Library/Src/stm32446adc2.c \
../Library/Src/stm32446adc3.c \
../Library/Src/stm32446crc.c \
../Library/Src/stm32446dma.c \
../Library/Src/stm32446flash.c \
../Library/Src/stm32446gpio.c \
../Library/Src/stm32446mapping.c \
../Library/Src/stm32446nvic.c \
../Library/Src/stm32446pwr.c \
../Library/Src/stm32446rtc.c \
../Library/Src/stm32446sram.c \
../Library/Src/stm32446syscfg.c \
../Library/Src/stm32446tim1and8.c \
../Library/Src/stm32446tim2to5.c \
../Library/Src/stm32446tim6and7.c \
../Library/Src/stm32446tim9to14.c \
../Library/Src/stm32446usart.c \
../Library/Src/stm32fxxxrcc.c \
../Library/Src/znpid.c 

OBJS += \
./Library/Src/74hc595.o \
./Library/Src/armfunction.o \
./Library/Src/armlcd.o \
./Library/Src/armquery.o \
./Library/Src/armsystick.o \
./Library/Src/buffer.o \
./Library/Src/circbuffer.o \
./Library/Src/explode.o \
./Library/Src/stm32446adc.o \
./Library/Src/stm32446adc1.o \
./Library/Src/stm32446adc2.o \
./Library/Src/stm32446adc3.o \
./Library/Src/stm32446crc.o \
./Library/Src/stm32446dma.o \
./Library/Src/stm32446flash.o \
./Library/Src/stm32446gpio.o \
./Library/Src/stm32446mapping.o \
./Library/Src/stm32446nvic.o \
./Library/Src/stm32446pwr.o \
./Library/Src/stm32446rtc.o \
./Library/Src/stm32446sram.o \
./Library/Src/stm32446syscfg.o \
./Library/Src/stm32446tim1and8.o \
./Library/Src/stm32446tim2to5.o \
./Library/Src/stm32446tim6and7.o \
./Library/Src/stm32446tim9to14.o \
./Library/Src/stm32446usart.o \
./Library/Src/stm32fxxxrcc.o \
./Library/Src/znpid.o 

C_DEPS += \
./Library/Src/74hc595.d \
./Library/Src/armfunction.d \
./Library/Src/armlcd.d \
./Library/Src/armquery.d \
./Library/Src/armsystick.d \
./Library/Src/buffer.d \
./Library/Src/circbuffer.d \
./Library/Src/explode.d \
./Library/Src/stm32446adc.d \
./Library/Src/stm32446adc1.d \
./Library/Src/stm32446adc2.d \
./Library/Src/stm32446adc3.d \
./Library/Src/stm32446crc.d \
./Library/Src/stm32446dma.d \
./Library/Src/stm32446flash.d \
./Library/Src/stm32446gpio.d \
./Library/Src/stm32446mapping.d \
./Library/Src/stm32446nvic.d \
./Library/Src/stm32446pwr.d \
./Library/Src/stm32446rtc.d \
./Library/Src/stm32446sram.d \
./Library/Src/stm32446syscfg.d \
./Library/Src/stm32446tim1and8.d \
./Library/Src/stm32446tim2to5.d \
./Library/Src/stm32446tim6and7.d \
./Library/Src/stm32446tim9to14.d \
./Library/Src/stm32446usart.d \
./Library/Src/stm32fxxxrcc.d \
./Library/Src/znpid.d 


# Each subdirectory must supply rules for building sources it contributes
Library/Src/%.o Library/Src/%.su Library/Src/%.cyclo: ../Library/Src/%.c Library/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I"D:/Embedded/STM32-F446RE/workspace/Project-2/Library/Inc" -I"D:/Embedded/STM32-F446RE/workspace/Project-2/Core/Inc" -I"D:/Embedded/STM32-F446RE/workspace/Project-2/Drivers/STM32F4xx_HAL_Driver/Inc" -I"D:/Embedded/STM32-F446RE/workspace/Project-2/Drivers/STM32F4xx_HAL_Driver/Inc/Legacy" -I"D:/Embedded/STM32-F446RE/workspace/Project-2/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"D:/Embedded/STM32-F446RE/workspace/Project-2/Drivers/CMSIS/Include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Library-2f-Src

clean-Library-2f-Src:
	-$(RM) ./Library/Src/74hc595.cyclo ./Library/Src/74hc595.d ./Library/Src/74hc595.o ./Library/Src/74hc595.su ./Library/Src/armfunction.cyclo ./Library/Src/armfunction.d ./Library/Src/armfunction.o ./Library/Src/armfunction.su ./Library/Src/armlcd.cyclo ./Library/Src/armlcd.d ./Library/Src/armlcd.o ./Library/Src/armlcd.su ./Library/Src/armquery.cyclo ./Library/Src/armquery.d ./Library/Src/armquery.o ./Library/Src/armquery.su ./Library/Src/armsystick.cyclo ./Library/Src/armsystick.d ./Library/Src/armsystick.o ./Library/Src/armsystick.su ./Library/Src/buffer.cyclo ./Library/Src/buffer.d ./Library/Src/buffer.o ./Library/Src/buffer.su ./Library/Src/circbuffer.cyclo ./Library/Src/circbuffer.d ./Library/Src/circbuffer.o ./Library/Src/circbuffer.su ./Library/Src/explode.cyclo ./Library/Src/explode.d ./Library/Src/explode.o ./Library/Src/explode.su ./Library/Src/stm32446adc.cyclo ./Library/Src/stm32446adc.d ./Library/Src/stm32446adc.o ./Library/Src/stm32446adc.su ./Library/Src/stm32446adc1.cyclo ./Library/Src/stm32446adc1.d ./Library/Src/stm32446adc1.o ./Library/Src/stm32446adc1.su ./Library/Src/stm32446adc2.cyclo ./Library/Src/stm32446adc2.d ./Library/Src/stm32446adc2.o ./Library/Src/stm32446adc2.su ./Library/Src/stm32446adc3.cyclo ./Library/Src/stm32446adc3.d ./Library/Src/stm32446adc3.o ./Library/Src/stm32446adc3.su ./Library/Src/stm32446crc.cyclo ./Library/Src/stm32446crc.d ./Library/Src/stm32446crc.o ./Library/Src/stm32446crc.su ./Library/Src/stm32446dma.cyclo ./Library/Src/stm32446dma.d ./Library/Src/stm32446dma.o ./Library/Src/stm32446dma.su ./Library/Src/stm32446flash.cyclo ./Library/Src/stm32446flash.d ./Library/Src/stm32446flash.o ./Library/Src/stm32446flash.su ./Library/Src/stm32446gpio.cyclo ./Library/Src/stm32446gpio.d ./Library/Src/stm32446gpio.o ./Library/Src/stm32446gpio.su ./Library/Src/stm32446mapping.cyclo ./Library/Src/stm32446mapping.d ./Library/Src/stm32446mapping.o ./Library/Src/stm32446mapping.su ./Library/Src/stm32446nvic.cyclo ./Library/Src/stm32446nvic.d ./Library/Src/stm32446nvic.o ./Library/Src/stm32446nvic.su ./Library/Src/stm32446pwr.cyclo ./Library/Src/stm32446pwr.d ./Library/Src/stm32446pwr.o ./Library/Src/stm32446pwr.su ./Library/Src/stm32446rtc.cyclo ./Library/Src/stm32446rtc.d ./Library/Src/stm32446rtc.o ./Library/Src/stm32446rtc.su ./Library/Src/stm32446sram.cyclo ./Library/Src/stm32446sram.d ./Library/Src/stm32446sram.o ./Library/Src/stm32446sram.su ./Library/Src/stm32446syscfg.cyclo ./Library/Src/stm32446syscfg.d ./Library/Src/stm32446syscfg.o ./Library/Src/stm32446syscfg.su ./Library/Src/stm32446tim1and8.cyclo ./Library/Src/stm32446tim1and8.d ./Library/Src/stm32446tim1and8.o ./Library/Src/stm32446tim1and8.su ./Library/Src/stm32446tim2to5.cyclo ./Library/Src/stm32446tim2to5.d ./Library/Src/stm32446tim2to5.o ./Library/Src/stm32446tim2to5.su ./Library/Src/stm32446tim6and7.cyclo ./Library/Src/stm32446tim6and7.d ./Library/Src/stm32446tim6and7.o ./Library/Src/stm32446tim6and7.su ./Library/Src/stm32446tim9to14.cyclo ./Library/Src/stm32446tim9to14.d ./Library/Src/stm32446tim9to14.o ./Library/Src/stm32446tim9to14.su ./Library/Src/stm32446usart.cyclo ./Library/Src/stm32446usart.d ./Library/Src/stm32446usart.o ./Library/Src/stm32446usart.su ./Library/Src/stm32fxxxrcc.cyclo ./Library/Src/stm32fxxxrcc.d ./Library/Src/stm32fxxxrcc.o ./Library/Src/stm32fxxxrcc.su ./Library/Src/znpid.cyclo ./Library/Src/znpid.d ./Library/Src/znpid.o ./Library/Src/znpid.su

.PHONY: clean-Library-2f-Src

