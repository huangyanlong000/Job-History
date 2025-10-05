################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Mcal/DynamicCode/Mcu_Cfg.c \
../Mcal/DynamicCode/Mcu_PBcfg.c 

OBJS += \
./Mcal/DynamicCode/Mcu_Cfg.o \
./Mcal/DynamicCode/Mcu_PBcfg.o 

C_DEPS += \
./Mcal/DynamicCode/Mcu_Cfg.d \
./Mcal/DynamicCode/Mcu_PBcfg.d 


# Each subdirectory must supply rules for building sources it contributes
Mcal/DynamicCode/%.o: ../Mcal/DynamicCode/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Mcal/DynamicCode/Mcu_Cfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


