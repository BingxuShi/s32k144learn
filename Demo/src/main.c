/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K14X
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
*   (c) Copyright 2020-2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/

/**
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Clock_Ip.h"
#include "Port_Ci_Port_Ip.h"
#include "lpuart_init.h"
#include "ftm_pwm_init.h"
#include "Ftm_Pwm_Ip.h"
#include "PlatformTypes.h"
#include "ftm_init.h"
#include "flexcan_init.h"
#include "interruptions_init.h"



volatile int exit_code = 0;
/* User includes */


/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main(void)
{
    /* Write your code here */
	Clock_Ip_Init(&Mcu_aClockConfigPB[0]);

	/* Initialize all pins */
	Port_Ci_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);

	INTERRUPT_INIT();

	LPUART_INIT();
	U1_printf("hello hello hello\r\n");

	FTM0_PWM_INIT();

	//FTM_INIT();

	FLEXCAN0_INIT();
	FLEXCAN0_RX_INIT();

	FLEXCAN0_SEND();

    for(;;)
    {


        if(exit_code != 0)
        {
            break;
        }
    }
    return exit_code;
}

/** @} */
