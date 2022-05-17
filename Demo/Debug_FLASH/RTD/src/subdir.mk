################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RTD/src/Clock_Ip.c \
../RTD/src/Clock_Ip_Data.c \
../RTD/src/Clock_Ip_Divider.c \
../RTD/src/Clock_Ip_DividerTrigger.c \
../RTD/src/Clock_Ip_ExtOsc.c \
../RTD/src/Clock_Ip_FracDiv.c \
../RTD/src/Clock_Ip_Frequency.c \
../RTD/src/Clock_Ip_Gate.c \
../RTD/src/Clock_Ip_IntOsc.c \
../RTD/src/Clock_Ip_Irq.c \
../RTD/src/Clock_Ip_Monitor.c \
../RTD/src/Clock_Ip_Pll.c \
../RTD/src/Clock_Ip_ProgFreqSwitch.c \
../RTD/src/Clock_Ip_Selector.c \
../RTD/src/Clock_Ip_Specific.c \
../RTD/src/Det.c \
../RTD/src/Det_stub.c \
../RTD/src/FlexCAN_Ip.c \
../RTD/src/FlexCAN_Ip_HwAccess.c \
../RTD/src/FlexCAN_Ip_Irq.c \
../RTD/src/Ftm_Gpt_Ip.c \
../RTD/src/Ftm_Pwm_Ip.c \
../RTD/src/Ftm_Pwm_Ip_Irq.c \
../RTD/src/IntCtrl_Ip.c \
../RTD/src/Lpuart_Uart_Ip.c \
../RTD/src/Lpuart_Uart_Ip_Irq.c \
../RTD/src/OsIf_Timer.c \
../RTD/src/OsIf_Timer_System.c \
../RTD/src/Port_Ci_Port_Ip.c \
../RTD/src/SchM_Can.c \
../RTD/src/SchM_Gpt.c \
../RTD/src/SchM_Mcu.c \
../RTD/src/SchM_Port.c \
../RTD/src/SchM_Pwm.c \
../RTD/src/SchM_Uart.c 

OBJS += \
./RTD/src/Clock_Ip.o \
./RTD/src/Clock_Ip_Data.o \
./RTD/src/Clock_Ip_Divider.o \
./RTD/src/Clock_Ip_DividerTrigger.o \
./RTD/src/Clock_Ip_ExtOsc.o \
./RTD/src/Clock_Ip_FracDiv.o \
./RTD/src/Clock_Ip_Frequency.o \
./RTD/src/Clock_Ip_Gate.o \
./RTD/src/Clock_Ip_IntOsc.o \
./RTD/src/Clock_Ip_Irq.o \
./RTD/src/Clock_Ip_Monitor.o \
./RTD/src/Clock_Ip_Pll.o \
./RTD/src/Clock_Ip_ProgFreqSwitch.o \
./RTD/src/Clock_Ip_Selector.o \
./RTD/src/Clock_Ip_Specific.o \
./RTD/src/Det.o \
./RTD/src/Det_stub.o \
./RTD/src/FlexCAN_Ip.o \
./RTD/src/FlexCAN_Ip_HwAccess.o \
./RTD/src/FlexCAN_Ip_Irq.o \
./RTD/src/Ftm_Gpt_Ip.o \
./RTD/src/Ftm_Pwm_Ip.o \
./RTD/src/Ftm_Pwm_Ip_Irq.o \
./RTD/src/IntCtrl_Ip.o \
./RTD/src/Lpuart_Uart_Ip.o \
./RTD/src/Lpuart_Uart_Ip_Irq.o \
./RTD/src/OsIf_Timer.o \
./RTD/src/OsIf_Timer_System.o \
./RTD/src/Port_Ci_Port_Ip.o \
./RTD/src/SchM_Can.o \
./RTD/src/SchM_Gpt.o \
./RTD/src/SchM_Mcu.o \
./RTD/src/SchM_Port.o \
./RTD/src/SchM_Pwm.o \
./RTD/src/SchM_Uart.o 

C_DEPS += \
./RTD/src/Clock_Ip.d \
./RTD/src/Clock_Ip_Data.d \
./RTD/src/Clock_Ip_Divider.d \
./RTD/src/Clock_Ip_DividerTrigger.d \
./RTD/src/Clock_Ip_ExtOsc.d \
./RTD/src/Clock_Ip_FracDiv.d \
./RTD/src/Clock_Ip_Frequency.d \
./RTD/src/Clock_Ip_Gate.d \
./RTD/src/Clock_Ip_IntOsc.d \
./RTD/src/Clock_Ip_Irq.d \
./RTD/src/Clock_Ip_Monitor.d \
./RTD/src/Clock_Ip_Pll.d \
./RTD/src/Clock_Ip_ProgFreqSwitch.d \
./RTD/src/Clock_Ip_Selector.d \
./RTD/src/Clock_Ip_Specific.d \
./RTD/src/Det.d \
./RTD/src/Det_stub.d \
./RTD/src/FlexCAN_Ip.d \
./RTD/src/FlexCAN_Ip_HwAccess.d \
./RTD/src/FlexCAN_Ip_Irq.d \
./RTD/src/Ftm_Gpt_Ip.d \
./RTD/src/Ftm_Pwm_Ip.d \
./RTD/src/Ftm_Pwm_Ip_Irq.d \
./RTD/src/IntCtrl_Ip.d \
./RTD/src/Lpuart_Uart_Ip.d \
./RTD/src/Lpuart_Uart_Ip_Irq.d \
./RTD/src/OsIf_Timer.d \
./RTD/src/OsIf_Timer_System.d \
./RTD/src/Port_Ci_Port_Ip.d \
./RTD/src/SchM_Can.d \
./RTD/src/SchM_Gpt.d \
./RTD/src/SchM_Mcu.d \
./RTD/src/SchM_Port.d \
./RTD/src/SchM_Pwm.d \
./RTD/src/SchM_Uart.d 


# Each subdirectory must supply rules for building sources it contributes
RTD/src/%.o: ../RTD/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@RTD/src/Clock_Ip.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


