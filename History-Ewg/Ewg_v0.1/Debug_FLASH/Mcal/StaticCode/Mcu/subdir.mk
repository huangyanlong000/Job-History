################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Mcal/StaticCode/Mcu/Mcu.c \
../Mcal/StaticCode/Mcu/Mcu_CMU.c \
../Mcal/StaticCode/Mcu/Mcu_CMU_Irq.c \
../Mcal/StaticCode/Mcu/Mcu_CortexM4.c \
../Mcal/StaticCode/Mcu/Mcu_IPW.c \
../Mcal/StaticCode/Mcu/Mcu_IPW_Irq.c \
../Mcal/StaticCode/Mcu/Mcu_PCC.c \
../Mcal/StaticCode/Mcu/Mcu_PMC.c \
../Mcal/StaticCode/Mcu/Mcu_PMC_Irq.c \
../Mcal/StaticCode/Mcu/Mcu_RCM.c \
../Mcal/StaticCode/Mcu/Mcu_RCM_Irq.c \
../Mcal/StaticCode/Mcu/Mcu_SCG.c \
../Mcal/StaticCode/Mcu/Mcu_SIM.c \
../Mcal/StaticCode/Mcu/Mcu_SMC.c 

OBJS += \
./Mcal/StaticCode/Mcu/Mcu.o \
./Mcal/StaticCode/Mcu/Mcu_CMU.o \
./Mcal/StaticCode/Mcu/Mcu_CMU_Irq.o \
./Mcal/StaticCode/Mcu/Mcu_CortexM4.o \
./Mcal/StaticCode/Mcu/Mcu_IPW.o \
./Mcal/StaticCode/Mcu/Mcu_IPW_Irq.o \
./Mcal/StaticCode/Mcu/Mcu_PCC.o \
./Mcal/StaticCode/Mcu/Mcu_PMC.o \
./Mcal/StaticCode/Mcu/Mcu_PMC_Irq.o \
./Mcal/StaticCode/Mcu/Mcu_RCM.o \
./Mcal/StaticCode/Mcu/Mcu_RCM_Irq.o \
./Mcal/StaticCode/Mcu/Mcu_SCG.o \
./Mcal/StaticCode/Mcu/Mcu_SIM.o \
./Mcal/StaticCode/Mcu/Mcu_SMC.o 

C_DEPS += \
./Mcal/StaticCode/Mcu/Mcu.d \
./Mcal/StaticCode/Mcu/Mcu_CMU.d \
./Mcal/StaticCode/Mcu/Mcu_CMU_Irq.d \
./Mcal/StaticCode/Mcu/Mcu_CortexM4.d \
./Mcal/StaticCode/Mcu/Mcu_IPW.d \
./Mcal/StaticCode/Mcu/Mcu_IPW_Irq.d \
./Mcal/StaticCode/Mcu/Mcu_PCC.d \
./Mcal/StaticCode/Mcu/Mcu_PMC.d \
./Mcal/StaticCode/Mcu/Mcu_PMC_Irq.d \
./Mcal/StaticCode/Mcu/Mcu_RCM.d \
./Mcal/StaticCode/Mcu/Mcu_RCM_Irq.d \
./Mcal/StaticCode/Mcu/Mcu_SCG.d \
./Mcal/StaticCode/Mcu/Mcu_SIM.d \
./Mcal/StaticCode/Mcu/Mcu_SMC.d 


# Each subdirectory must supply rules for building sources it contributes
Mcal/StaticCode/Mcu/%.o: ../Mcal/StaticCode/Mcu/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Mcal/StaticCode/Mcu/Mcu.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


