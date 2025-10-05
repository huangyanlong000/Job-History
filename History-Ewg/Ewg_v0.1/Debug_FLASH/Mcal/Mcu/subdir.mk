################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Mcal/Mcu/Mcu.c \
../Mcal/Mcu/Mcu_CMU.c \
../Mcal/Mcu/Mcu_CMU_Irq.c \
../Mcal/Mcu/Mcu_Cfg.c \
../Mcal/Mcu/Mcu_CortexM4.c \
../Mcal/Mcu/Mcu_IPW.c \
../Mcal/Mcu/Mcu_IPW_Irq.c \
../Mcal/Mcu/Mcu_PBcfg.c \
../Mcal/Mcu/Mcu_PCC.c \
../Mcal/Mcu/Mcu_PMC.c \
../Mcal/Mcu/Mcu_PMC_Irq.c \
../Mcal/Mcu/Mcu_RCM.c \
../Mcal/Mcu/Mcu_RCM_Irq.c \
../Mcal/Mcu/Mcu_SCG.c \
../Mcal/Mcu/Mcu_SIM.c \
../Mcal/Mcu/Mcu_SMC.c 

OBJS += \
./Mcal/Mcu/Mcu.o \
./Mcal/Mcu/Mcu_CMU.o \
./Mcal/Mcu/Mcu_CMU_Irq.o \
./Mcal/Mcu/Mcu_Cfg.o \
./Mcal/Mcu/Mcu_CortexM4.o \
./Mcal/Mcu/Mcu_IPW.o \
./Mcal/Mcu/Mcu_IPW_Irq.o \
./Mcal/Mcu/Mcu_PBcfg.o \
./Mcal/Mcu/Mcu_PCC.o \
./Mcal/Mcu/Mcu_PMC.o \
./Mcal/Mcu/Mcu_PMC_Irq.o \
./Mcal/Mcu/Mcu_RCM.o \
./Mcal/Mcu/Mcu_RCM_Irq.o \
./Mcal/Mcu/Mcu_SCG.o \
./Mcal/Mcu/Mcu_SIM.o \
./Mcal/Mcu/Mcu_SMC.o 

C_DEPS += \
./Mcal/Mcu/Mcu.d \
./Mcal/Mcu/Mcu_CMU.d \
./Mcal/Mcu/Mcu_CMU_Irq.d \
./Mcal/Mcu/Mcu_Cfg.d \
./Mcal/Mcu/Mcu_CortexM4.d \
./Mcal/Mcu/Mcu_IPW.d \
./Mcal/Mcu/Mcu_IPW_Irq.d \
./Mcal/Mcu/Mcu_PBcfg.d \
./Mcal/Mcu/Mcu_PCC.d \
./Mcal/Mcu/Mcu_PMC.d \
./Mcal/Mcu/Mcu_PMC_Irq.d \
./Mcal/Mcu/Mcu_RCM.d \
./Mcal/Mcu/Mcu_RCM_Irq.d \
./Mcal/Mcu/Mcu_SCG.d \
./Mcal/Mcu/Mcu_SIM.d \
./Mcal/Mcu/Mcu_SMC.d 


# Each subdirectory must supply rules for building sources it contributes
Mcal/Mcu/%.o: ../Mcal/Mcu/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@Mcal/Mcu/Mcu.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


