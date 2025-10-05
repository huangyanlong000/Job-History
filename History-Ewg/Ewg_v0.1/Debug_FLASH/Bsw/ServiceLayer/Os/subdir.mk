################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Bsw/ServiceLayer/Os/Os_counter_api.c 

OBJS += \
./Bsw/ServiceLayer/Os/Os_counter_api.o 

C_DEPS += \
./Bsw/ServiceLayer/Os/Os_counter_api.d 


# Each subdirectory must supply rules for building sources it contributes
Bsw/ServiceLayer/Os/%.o: ../Bsw/ServiceLayer/Os/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Bsw/ServiceLayer/Os/Os_counter_api.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


