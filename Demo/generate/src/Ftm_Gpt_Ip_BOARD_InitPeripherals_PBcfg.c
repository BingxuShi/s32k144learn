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
/**
 *   @file          Ftm_Gpt_Ip_PBcfg.c
 *
 *   @addtogroup    Ftm_Gpt_Ip Ftm_Gpt_Ip IPL
 *
 *   @{
 */

/*==================================================================================================
 *                              GENERATION MACRO DEFINTION
 *================================================================================================*/


/*==================================================================================================*/
#ifdef __cplusplus
extern "C"{
#endif

 /*==================================================================================================
 *                                         INCLUDE FILES
 * 1) system and project includes
 * 2) needed interfaces from external units
 * 3) internal and external interfaces from this unit
 *================================================================================================*/
#include "Ftm_Gpt_Ip_BOARD_InitPeripherals_PBcfg.h"

/*==================================================================================================
 *                              SOURCE FILE VERSION INFORMATION
 *================================================================================================*/
#define FTM_GPT_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C                    43
#define FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     4
#define FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C     4
#define FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C  0
#define FTM_GPT_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C             1
#define FTM_GPT_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C             0
#define FTM_GPT_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C             0
/*==================================================================================================
 *                                      FILE VERSION CHECKS
 *================================================================================================*/
#if (FTM_GPT_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_VENDOR_ID_BOARD_INITPERIPHERALS_PBCFG_H)
    #error "Ftm_Gpt_Ip_PBcfg.c and Ftm_Gpt_Ip_PBcfg.h have different vendor ids"
#endif
/* Check if this header file and header file are of the same Autosar version */
#if ((FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "AutoSar Version Numbers of Ftm_Gpt_Ip_PBcfg.c and Ftm_Gpt_Ip_PBcfg.h are different"
#endif
/* Check if this header file and header file are of the same Software version */
#if ((FTM_GPT_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_SW_MAJOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (FTM_GPT_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_SW_MINOR_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) || \
     (FTM_GPT_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_C != FTM_GPT_IP_SW_PATCH_VERSION_BOARD_INITPERIPHERALS_PBCFG_H) \
    )
    #error "Software Version Numbers of Ftm_Gpt_Ip_PBcfg.c and Ftm_Gpt_Ip_PBcfg.h are different"
#endif
/*================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL VARIABLES
 *================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"
extern void Ftm0_ch1_int(uint8 channel); 
#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

/*==================================================================================================
 *                                       GLOBAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       GLOBAL FUNCTIONS
 *================================================================================================*/
#define GPT_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

Ftm_Gpt_Ip_InstanceConfigType FTM_0_InitConfig_PB =
{
    /** @brief FTM Freeze Enable */
    (boolean)FALSE,
    /** @brief FTM Clock Source */
    FTM_GPT_IP_CLOCK_SOURCE_SYSTEMCLK,
#if (FTM_GPT_IP_SET_CLOCK_MODE == STD_ON)
    /** @brief FTM Alternate Prescaler Value */
    0U,
#endif
    /** @brief FTM Prescaler Value */
    2U,
    /** @brief FTM Counting Mode */
    FTM_GPT_IP_MODE_UP_TIMER
};
Ftm_Gpt_Ip_ChannelConfigType FTM_0_ChannelConfig_PB[1] =
{
    {
        /** @brief FTM Channel Id */
        1U,
        /** @brief FTM callback name */
        &Ftm0_ch1_int,
        /** @brief FTM callbackparam */
        (uint8)0U
    }
};
#define GPT_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Gpt_MemMap.h"

/*==================================================================================================
 *                                       LOCAL VARIABLES
 *================================================================================================*/

/*==================================================================================================
 *                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL MACROS
 *================================================================================================*/

/*==================================================================================================
 *                                      LOCAL CONSTANTS
 *================================================================================================*/

/*==================================================================================================
 *                                       LOCAL FUNCTIONS
 *================================================================================================*/

/*==================================================================================================
 *                                   LOCAL FUNCTION PROTOTYPES
 *================================================================================================*/

#ifdef __cplusplus
}
#endif  /*FTM_IP_PBCFG_C*/
/** @} */
