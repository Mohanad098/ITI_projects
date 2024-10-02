################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/Src/HAL/Push_Button/PB_Control.c 

OBJS += \
./Core/Src/HAL/Push_Button/PB_Control.o 

C_DEPS += \
./Core/Src/HAL/Push_Button/PB_Control.d 


# Each subdirectory must supply rules for building sources it contributes
Core/Src/HAL/Push_Button/%.o Core/Src/HAL/Push_Button/%.su Core/Src/HAL/Push_Button/%.cyclo: ../Core/Src/HAL/Push_Button/%.c Core/Src/HAL/Push_Button/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F401xC -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-Src-2f-HAL-2f-Push_Button

clean-Core-2f-Src-2f-HAL-2f-Push_Button:
	-$(RM) ./Core/Src/HAL/Push_Button/PB_Control.cyclo ./Core/Src/HAL/Push_Button/PB_Control.d ./Core/Src/HAL/Push_Button/PB_Control.o ./Core/Src/HAL/Push_Button/PB_Control.su

.PHONY: clean-Core-2f-Src-2f-HAL-2f-Push_Button

