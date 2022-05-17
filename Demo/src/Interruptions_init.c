/*
 * Interruptions_init.c
 *
 *  Created on: 2022Äê5ÔÂ16ÈÕ
 *      Author: bingxushi
 */
#include "IntCtrl_Ip.h"
#include "FlexCAN_Ip_Types.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "Ftm_Gpt_Ip.h"

extern void CAN0_ORED_0_15_MB_IRQHandler(void);


void INTERRUPT_INIT(void)
{

	IntCtrl_Ip_Init(&IntCtrlConfig_0);
	//ftm
	//IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);
	//IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, &FTM_0_CH_0_CH_1_ISR, NULL_PTR);

	//uart
	IntCtrl_Ip_EnableIrq(LPUART1_RxTx_IRQn);
	IntCtrl_Ip_InstallHandler(LPUART1_RxTx_IRQn, LPUART_UART_IP_1_IRQHandler, NULL_PTR);

	//flexcan
	IntCtrl_Ip_EnableIrq(CAN0_ORed_0_15_MB_IRQn);
	IntCtrl_Ip_InstallHandler(CAN0_ORed_0_15_MB_IRQn, CAN0_ORED_0_15_MB_IRQHandler, NULL_PTR);


}
