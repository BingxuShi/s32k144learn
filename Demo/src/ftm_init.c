/*
 * ftm_init.c
 *
 *  Created on: 2022Äê5ÔÂ7ÈÕ
 *      Author: bingxushi
 */


#include "Ftm_Gpt_Ip.h"
#include "IntCtrl_Ip.h"
#include "lpuart_init.h"

#define FTM_INSTACE_0 0U
#define CH_1 1U
#define COUNTER_VALUE 37500




void FTM_INIT(void)
{
	//IntCtrl_Ip_InstallHandler(FTM0_Ch0_Ch1_IRQn, &FTM_0_CH_0_CH_1_ISR, NULL_PTR);
	IntCtrl_Ip_EnableIrq(FTM0_Ch0_Ch1_IRQn);
	/* Initial FTM instance 0 - Channel 1 */
    Ftm_Gpt_Ip_Init(FTM_INSTACE_0, &FTM_0_InitConfig_PB);
    /* Initial channel 1 */
    Ftm_Gpt_Ip_InitChannel(FTM_INSTACE_0, FTM_0_CH_1);
    /* Enable channel interrupt FTM0 - CH_1 */
    Ftm_Gpt_Ip_EnableChannelInterrupt(FTM_INSTACE_0, CH_1);
    /* Start channel CH_1 */
    Ftm_Gpt_Ip_StartTimer(FTM_INSTACE_0, COUNTER_VALUE);
}



void Ftm0_ch1_int(void)
{
	static uint16 index = 0u;
    ++index;
    if (index >= 1000u)
    {
    	U1_printf("ftm_int\r\n");

    	index = 0;
    }
}
