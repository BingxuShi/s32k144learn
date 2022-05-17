/*==================================================================================================
* Project :             RTD AUTOSAR 4.4
* Platform :            CORTEXM
* Peripheral :          Ftm_Srtc_Lptmr_LPit
* Dependencies :        none
*
* Autosar Version :     4.4.0
* Autosar Revision :    ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version :          1.0.0
* Build Version :       S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
*
* (c) Copyright 2020-2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/

#ifndef FTM_GPT_IP_BOARD_INITPERIPHERALS_PBCFG_H
#define FTM_GPT_IP_BOARD_INITPERIPHERALS_PBCFG_H

/**
*   @file          Ftm_Gpt_Ip_PBcfg.h
*
*   @addtogroup    Ftm_Gpt_Ip Ftm_Gpt_Ip IPL
*
*   @{
*/

#ifdef __cplusplus
extern "C"
{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Ftm_Gpt_Ip_Types.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
/* Inclusion of incompatible header files shall be avoided */
#define FTM_GPT_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H                    43
#define FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H     4
#define FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H     4
#define FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H  0
#define FTM_GPT_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H             1
#define FTM_GPT_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H             0
#define FTM_GPT_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H             0

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_GPT_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_VENDOR_ID)
    #error "Ftm_Gpt_Ip_BOARD_InitPeripherals_PBcfg.h and Ftm_Gpt_Ip_Types.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Ftm_Gpt_Ip_BOARD_InitPeripherals_PBcfg.h and Ftm_Gpt_Ip_Types.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((FTM_GPT_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_SW_MAJOR_VERSION) || \
     (FTM_GPT_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_SW_MINOR_VERSION) || \
     (FTM_GPT_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H != FTM_GPT_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Ftm_Gpt_Ip_BOARD_InitPeripherals_PBcfg.h and Ftm_Gpt_Ip_Types.h are different"
#endif
/*==================================================================================================
*                                          CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/
#define FTM_0_CH_1 &FTM_0_ChannelConfig_PB[0]

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/


/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"
extern Ftm_Gpt_Ip_InstanceConfigType FTM_0_InitConfig_PB;
extern Ftm_Gpt_Ip_ChannelConfigType FTM_0_ChannelConfig_PB[1U];
#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */
#endif /* FTM_GPT_IP_PBCFG_H */

