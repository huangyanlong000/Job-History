################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Micro/main.c \
../Micro/startup.c \
../Micro/system_S32K116.c 

S_UPPER_SRCS += \
../Micro/startup_S32K116.S 

OBJS += \
./Micro/main.o \
./Micro/startup.o \
./Micro/startup_S32K116.o \
./Micro/system_S32K116.o 

C_DEPS += \
./Micro/main.d \
./Micro/startup.d \
./Micro/system_S32K116.d 


# Each subdirectory must supply rules for building sources it contributes
Micro/%.o: ../Micro/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Micro/main.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Micro/%.o: ../Micro/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS Assembler'
	arm-none-eabi-gcc "@Micro/startup_S32K116.args" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


