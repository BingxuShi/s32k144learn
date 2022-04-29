#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdint.h>
#include <stdbool.h>

#include "Lpuart_Uart_Ip.h"
#include "Lpuart_Uart_Ip_Irq.h"
#include "IntCtrl_Ip.h"


#define UART_LPUART_INTERNAL_CHANNEL_1  1




char USART1_TX_BUF[200];
char rxbuffer[200];


void LPUART_INIT(void)
{
	/* Initialize IRQs */
	IntCtrl_Ip_Init(&IntCtrlConfig_0);
	IntCtrl_Ip_EnableIrq(LPUART1_RxTx_IRQn);
	IntCtrl_Ip_InstallHandler(LPUART1_RxTx_IRQn, LPUART_UART_IP_1_IRQHandler, NULL_PTR);

	/* Initializes an UART driver*/
	Lpuart_Uart_Ip_Init(UART_LPUART_INTERNAL_CHANNEL_1, &Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS);

	Lpuart_Uart_Ip_AsyncReceive(UART_LPUART_INTERNAL_CHANNEL_1,rxbuffer,(uint32)1);//callback

}

void LPUART_DEINIT(void)
{
	Lpuart_Uart_Ip_Deinit(UART_LPUART_INTERNAL_CHANNEL_1);
}

void U1_printf(char* fmt)
{
	memcpy(USART1_TX_BUF,fmt,200);
	Lpuart_Uart_Ip_SyncSend(UART_LPUART_INTERNAL_CHANNEL_1,(const uint8 *)USART1_TX_BUF,strlen(USART1_TX_BUF),0xffffffff);
	memset(USART1_TX_BUF,0,sizeof(USART1_TX_BUF));
}



void Lpuart1_Callback(const uint8 HwInstance, const Lpuart_Uart_Ip_EventType Event, void *UserData)
{
	while(1);
}

