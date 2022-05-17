/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : S32K14X
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K1_RTD_1_0_0_D2108_ASR_REL_4_4_REV_0000_20210810
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
#ifndef OSIF_H
#define OSIF_H

/**
*   @file
*
*   @addtogroup osif_drv
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "OsIf_Internal.h"
#include "OsIf_Cfg.h"

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_VENDOR_ID                    43
#define OSIF_AR_RELEASE_MAJOR_VERSION     4
#define OSIF_AR_RELEASE_MINOR_VERSION     4
#define OSIF_AR_RELEASE_REVISION_VERSION  0
#define OSIF_SW_MAJOR_VERSION             1
#define OSIF_SW_MINOR_VERSION             0
#define OSIF_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Checks against OsIf_Internal.h */
#if (OSIF_VENDOR_ID != OSIF_INTERNAL_VENDOR_ID)
    #error "OsIf.h and OsIf_Internal.h have different vendor ids"
#endif
#if ((OSIF_AR_RELEASE_MAJOR_VERSION    != OSIF_INTERNAL_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_AR_RELEASE_MINOR_VERSION    != OSIF_INTERNAL_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_AR_RELEASE_REVISION_VERSION != OSIF_INTERNAL_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf.h and OsIf_Internal.h are different"
#endif
#if ((OSIF_SW_MAJOR_VERSION != OSIF_INTERNAL_SW_MAJOR_VERSION) || \
     (OSIF_SW_MINOR_VERSION != OSIF_INTERNAL_SW_MINOR_VERSION) || \
     (OSIF_SW_PATCH_VERSION != OSIF_INTERNAL_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf.h and OsIf_Internal.h are different"
#endif

/* Checks against OsIf_Cfg.h */
#if (OSIF_VENDOR_ID != OSIF_CFG_VENDOR_ID)
    #error "OsIf.h and OsIf_Cfg.h have different vendor ids"
#endif
#if ((OSIF_AR_RELEASE_MAJOR_VERSION    != OSIF_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_AR_RELEASE_MINOR_VERSION    != OSIF_CFG_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_AR_RELEASE_REVISION_VERSION != OSIF_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf.h and OsIf_Cfg.h are different"
#endif
#if ((OSIF_SW_MAJOR_VERSION != OSIF_CFG_SW_MAJOR_VERSION) || \
     (OSIF_SW_MINOR_VERSION != OSIF_CFG_SW_MINOR_VERSION) || \
     (OSIF_SW_PATCH_VERSION != OSIF_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf.h and OsIf_Cfg.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
/*!
 * @brief OsIf Counter type
 *
 * Counter type.
 *
 */
typedef enum
{
    OSIF_COUNTER_DUMMY, /**< dummy counter */
#if (OSIF_USE_SYSTEM_TIMER == STD_ON)
    OSIF_COUNTER_SYSTEM, /**< system counter */
#endif /* (OSIF_USE_SYSTEM_TIMER == STD_ON) */
#if (OSIF_USE_CUSTOM_TIMER == STD_ON)
    OSIF_COUNTER_CUSTOM /**< custom counter */
#endif /* (OSIF_USE_CUSTOM_TIMER == STD_ON) */
} OsIf_CounterType;

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/
#define BASE_START_SEC_CODE
#include "Base_MemMap.h"

/*!
 * @brief Initialize OsIf
 *
 * This function initializes the OsIf module and should be called during startup, before every
 * other intialization other than Mcu.
 *
 */
void OsIf_Init(const void* Config);

/*!
 * @brief Get the current value counter
 *
 * This function returns the current value of the counter.
 *
 * @param[in] SelectedCounter the type of counter to use
 * @return the current value of the counter
 */
uint32 OsIf_GetCounter(OsIf_CounterType SelectedCounter);

/*!
 * @brief Get the elapsed value from a reference point
 *
 * This function returns the delta time in ticks compared to a reference, and updates the reference.
 *
 * @param[inout] CurrentRef reference counter value, updated to current counter value
 * @param[in] SelectedCounter the type of counter to use
 * @return the elapsed time
 */
uint32 OsIf_GetElapsed(uint32 * const CurrentRef, OsIf_CounterType SelectedCounter);

/*!
 * @brief Set a new frequency used for time conversion (microseconds to ticks)
 *
 * This function stores a new timer frequency used for time conversion computations
 *
 * @param[in] Freq the new frequency
 * @param[in] SelectedCounter the type of counter to use
 */
void OsIf_SetTimerFrequency(uint32 Freq, OsIf_CounterType SelectedCounter);

/*!
 * @brief Convert microseconds to ticks
 *
 * This function converts a value from microsecond units to ticks units.
 *
 * @param[in] Micros microseconds value
 * @param[in] SelectedCounter the type of counter to use
 * @return the equivalent value in ticks
 */
uint32 OsIf_MicrosToTicks(uint32 Micros, OsIf_CounterType SelectedCounter);

#define BASE_STOP_SEC_CODE
#include "Base_MemMap.h"

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* OSIF_H */
