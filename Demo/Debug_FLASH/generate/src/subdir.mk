################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.c \
../generate/src/Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.c \
../generate/src/IntCtrl_Ip_Cfg.c \
../generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.c \
../generate/src/OsIf_Cfg.c 

OBJS += \
./generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.o \
./generate/src/Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.o \
./generate/src/IntCtrl_Ip_Cfg.o \
./generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.o \
./generate/src/OsIf_Cfg.o 

C_DEPS += \
./generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.d \
./generate/src/Ftm_Pwm_Ip_BOARD_InitPeripherals_PBcfg.d \
./generate/src/IntCtrl_Ip_Cfg.d \
./generate/src/Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.d \
./generate/src/OsIf_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
generate/src/%.o: ../generate/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@generate/src/FlexCAN_Ip_Sa_BOARD_InitPeripherals_PBcfg.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


