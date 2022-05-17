/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : FLEXIO
*   Dependencies         : 
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
#ifndef LPUART_UART_IP_SA_BOARD_INITPERIPHERALS_PBCFG_H
#define LPUART_UART_IP_SA_BOARD_INITPERIPHERALS_PBCFG_H


/**
*   @file Lpuart_Uart_Ip_PBcfg.h
*   @defgroup lpuart_uart_ip Lpuart UART IPL
*   @addtogroup  lpuart_uart_ip Lpuart UART IPL
*   @{
*/


#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Lpuart_Uart_Ip_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID                     43
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION      4
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION      4
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION   0
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION              1
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION              0
#define LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION              0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Lpuart_Uart_Ip_Types.h */
#if (LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID != LPUART_UART_IP_TYPES_VENDOR_ID)
    #error "Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.h and Lpuart_Uart_Ip_Types.h have different vendor ids"
#endif
#if ((LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION   != LPUART_UART_IP_TYPES_AR_RELEASE_MAJOR_VERSION)|| \
     (LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION   != LPUART_UART_IP_TYPES_AR_RELEASE_MINOR_VERSION)|| \
     (LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION!= LPUART_UART_IP_TYPES_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.h and Lpuart_Uart_Ip_Types.h are different"
#endif
#if ((LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION!= LPUART_UART_IP_TYPES_SW_MAJOR_VERSION)|| \
     (LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION!= LPUART_UART_IP_TYPES_SW_MINOR_VERSION)|| \
     (LPUART_UART_IP_SA_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION!= LPUART_UART_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Lpuart_Uart_Ip_Sa_BOARD_InitPeripherals_PBcfg.h and Lpuart_Uart_Ip_Types.h are different"
#endif

/*==================================================================================================
                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL MACROS
==================================================================================================*/
/**
* @brief          Link Uart channels symbolic names with Uart hardware channel IDs.
* @details        Link Uart channels symbolic names with Uart hardware channel IDs.
*
* @api
*/

#ifndef LPUART_UART_IP_INSTANCE_USING_1
    #define LPUART_UART_IP_INSTANCE_USING_1   1U
#endif

/*==================================================================================================
                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                        GLOBAL VARIABLES AND GLOBAL FUNCTION PROTOTYPES
==================================================================================================*/
/**
* @brief    Declare callback functions if any .
*/
#define UART_START_SEC_CODE
#include "Uart_MemMap.h"
/* Define User Receive callback function */
extern void Lpuart1_Callback(const uint8 HwInstance, const Lpuart_Uart_Ip_EventType Event, void *UserData);
#define UART_STOP_SEC_CODE
#include "Uart_MemMap.h"
    /**
* @brief    Hardware configuration for Lpuart Uart Hardware - Configuration.
*/
#define LPUART_UART_IP_SA_CONFIG_BOARD_INITPERIPHERALS_PB \
extern const Lpuart_Uart_Ip_UserConfigType Lpuart_Uart_Ip_xHwConfigPB_1_BOARD_INITPERIPHERALS;
/*==================================================================================================
                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif
/** @} */

#endif /* LPUART_UART_IP_SA_BOARD_INITPERIPHERALS_PBCFG_H */

