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
#ifndef OSIF_INTERNAL_H
#define OSIF_INTERNAL_H

/**
*   @file
*   @implements OsIf_Internal.h_Artifact
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
#include "StandardTypes.h"
#include "Soc_Ips.h"
#include "OsIf_Cfg.h"

#if defined(USING_OS_AUTOSAROS)
#include "Os.h"
#endif /* defined(USING_OS_AUTOSAROS) */

#if !defined(USING_OS_AUTOSAROS)
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
/* prototypes defined in system.h*/
uint32 Sys_GoToUser_Return(uint32 u32SwitchToSupervisor, uint32 u32returnValue);
uint32 Sys_GoToSupervisor(void);
uint32 Sys_GoToUser(void);
void Sys_SuspendInterrupts(void);
void Sys_ResumeInterrupts(void);
#endif /* def MCAL_ENABLE_USER_MODE_SUPPORT */
uint8 Sys_GetCoreID(void);
#endif /* !defined(USING_OS_AUTOSAROS) */

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_INTERNAL_VENDOR_ID                    43
#define OSIF_INTERNAL_AR_RELEASE_MAJOR_VERSION     4
#define OSIF_INTERNAL_AR_RELEASE_MINOR_VERSION     4
#define OSIF_INTERNAL_AR_RELEASE_REVISION_VERSION  0
#define OSIF_INTERNAL_SW_MAJOR_VERSION             1
#define OSIF_INTERNAL_SW_MINOR_VERSION             0
#define OSIF_INTERNAL_SW_PATCH_VERSION             0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/
/* Checks against StandardTypes.h */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((OSIF_INTERNAL_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
         (OSIF_INTERNAL_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of OsIf_Internal.h and StandardTypes.h are different"
    #endif
#endif

/* Checks against Soc_Ips.h */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((OSIF_INTERNAL_AR_RELEASE_MAJOR_VERSION != SOC_IPS_AR_RELEASE_MAJOR_VERSION) || \
         (OSIF_INTERNAL_AR_RELEASE_MINOR_VERSION != SOC_IPS_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of OsIf_Internal.h and Soc_Ips.h are different"
    #endif
#endif

#if defined(USING_OS_AUTOSAROS)
/* Checks against Os.h */
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    #if ((OSIF_INTERNAL_AR_RELEASE_MAJOR_VERSION != OS_AR_RELEASE_MAJOR_VERSION) || \
         (OSIF_INTERNAL_AR_RELEASE_MINOR_VERSION != OS_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of OsIf_Internal.h and Os.h are different"
    #endif
#endif
#endif /* defined(USING_OS_AUTOSAROS) */

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*
 * OsIf_Trusted_Call*
 */
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
#ifdef USING_OS_AUTOSAROS
#define OsIf_Trusted_Call(name)                                                  Call_##name##_TRUSTED()
#define OsIf_Trusted_Call1param(name,param)                                      Call_##name##_TRUSTED(param)
#define OsIf_Trusted_Call2params(name,param1,param2)                             Call_##name##_TRUSTED(param1,param2)
#define OsIf_Trusted_Call3params(name,param1,param2,param3)                      Call_##name##_TRUSTED(param1,param2,param3)
#define OsIf_Trusted_Call4params(name,param1,param2,param3,param4)               Call_##name##_TRUSTED(param1,param2,param3,param4)
#define OsIf_Trusted_Call5params(name,param1,param2,param3,param4,param5)        Call_##name##_TRUSTED(param1,param2,param3,param4,param5)
#define OsIf_Trusted_Call6params(name,param1,param2,param3,param4,param5,param6) Call_##name##_TRUSTED(param1,param2,param3,param4,param5,param6)

#define OsIf_Trusted_Call_Return(name)                                                 Call_##name##_TRUSTED()
#define OsIf_Trusted_Call_Return1param(name,param1)                                    Call_##name##_TRUSTED(param1)
#define OsIf_Trusted_Call_Return2param(name,param1,param2)                             Call_##name##_TRUSTED(param1,param2)
#define OsIf_Trusted_Call_Return3param(name,param1,param2,param3)                      Call_##name##_TRUSTED(param1,param2,param3)
#define OsIf_Trusted_Call_Return4param(name,param1,param2,param3,param4)               Call_##name##_TRUSTED(param1,param2,param3,param4)
#define OsIf_Trusted_Call_Return5param(name,param1,param2,param3,param4,param5)        Call_##name##_TRUSTED(param1,param2,param3,param4,param5)
#define OsIf_Trusted_Call_Return6param(name,param1,param2,param3,param4,param5,param6) Call_##name##_TRUSTED(param1,param2,param3,param4,param5,param6)

#else /* USING_OS_AUTOSAROS */
/* Baremetal and FreeRTOS */
#define OsIf_Trusted_Call(name)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(), (void)Sys_GoToUser()) : (name(),(void)0U))
#define OsIf_Trusted_Call1param(name,param)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(param), (void)Sys_GoToUser()) : (name(param),(void)0U))
#define OsIf_Trusted_Call2params(name,param1,param2)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2), (void)Sys_GoToUser()) : (name(param1,param2),(void)0U))
#define OsIf_Trusted_Call3params(name,param1,param2,param3)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2,param3), (void)Sys_GoToUser()) : (name(param1,param2,param3),(void)0U))
#define OsIf_Trusted_Call4params(name,param1,param2,param3,param4)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2,param3,param4), (void)Sys_GoToUser()) : (name(param1,param2,param3,param4),(void)0U))
#define OsIf_Trusted_Call5params(name,param1,param2,param3,param4,param5)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2,param3,param4,param5), (void)Sys_GoToUser()) : (name(param1,param2,param3,param4,param5),(void)0U))
#define OsIf_Trusted_Call6params(name,param1,param2,param3,param4,param5,param6)  \
    ((1UL == Sys_GoToSupervisor()) ? (name(param1,param2,param3,param4,param5,param6), (void)Sys_GoToUser()) : (name(param1,param2,param3,param4,param5,param6),(void)0U))

#define OsIf_Trusted_Call_Return(name)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name()) :  Sys_GoToUser_Return(0U, name()))
#define OsIf_Trusted_Call_Return1param(name,param)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name(param)) :  Sys_GoToUser_Return(0U, name(param)))
#define OsIf_Trusted_Call_Return2param(name,param1,param2)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name(param1,param2)) : Sys_GoToUser_Return(0U, name(param1,param2)))
#define OsIf_Trusted_Call_Return3param(name,param1,param2,param3)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name(param1,param2,param3)) :  Sys_GoToUser_Return(0U, name(param1,param2,param3)))
#define OsIf_Trusted_Call_Return4param(name,param1,param2,param3,param4)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name(param1,param2,param3,param4)) :  Sys_GoToUser_Return(0U, name(param1,param2,param3,param4)))
#define OsIf_Trusted_Call_Return5param(name,param1,param2,param3,param4,param5)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name(param1,param2,param3,param4,param5)) :  Sys_GoToUser_Return(0U, name(param1,param2,param3,param4,param5)))
#define OsIf_Trusted_Call_Return6param(name,param1,param2,param3,param4,param5,param6)  \
    ((1UL == Sys_GoToSupervisor()) ?  Sys_GoToUser_Return(1U, name(param1,param2,param3,param4,param5,param6)) :  Sys_GoToUser_Return(0U, name(param1,param2,param3,param4,param5,param6)))
#endif /* USING_OS_AUTOSAROS */
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */

/*
 * OsIf_GetCoreID
 */
#ifdef USING_OS_AUTOSAROS
    #if STD_ON == OSIF_ENABLE_MULTICORE_SUPPORT
        #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
            #define OsIf_GetCoreID()    OsIf_Trusted_Call_Return(GetCoreID)
        #else
            #define OsIf_GetCoreID()    GetCoreID()
        #endif
    #else
        #define OsIf_GetCoreID()        (0U)
    #endif
#else /* USING_OS_AUTOSAROS */
    /* Baremetal and FreeRTOS */
    #if STD_ON == OSIF_ENABLE_MULTICORE_SUPPORT
        #ifdef MCAL_ENABLE_USER_MODE_SUPPORT
            #define OsIf_GetCoreID()    OsIf_Trusted_Call_Return(Sys_GetCoreID)
        #else
            /* @implements OsIf_GetCoreID_define */
            #define OsIf_GetCoreID()    Sys_GetCoreID()
        #endif
    #else
        #define OsIf_GetCoreID()        (0U)
    #endif
#endif

/*
 * OsIf_SuspendAllInterrupts
 * OsIf_ResumeAllInterrupts
 */
#if !defined(USING_OS_AUTOSAROS)
/* Baremetal or FreeRTOS case */
#if (MCAL_PLATFORM_ARM  == MCAL_ARM_AARCH64)
    #define ResumeAllInterrupts()       ASM_KEYWORD(" msr DAIFClr,#0xf")
    #define SuspendAllInterrupts()      ASM_KEYWORD(" msr DAIFSet,#0xf")
#else
#ifdef MCAL_ENABLE_USER_MODE_SUPPORT
    #define ResumeAllInterrupts()   Sys_ResumeInterrupts()  /* BASEPRI will be set to 0x0 from SVC handler */
    #define SuspendAllInterrupts()  Sys_SuspendInterrupts() /* BASEPRI will be set to 0x10 from SVC handler */
#else
    #define ResumeAllInterrupts()       ASM_KEYWORD(" cpsie i")
    #define SuspendAllInterrupts()      ASM_KEYWORD(" cpsid i")
#endif /* MCAL_ENABLE_USER_MODE_SUPPORT */
#endif /* MCAL_PLATFORM_ARM  == MCAL_ARM_AARCH64 */
#endif /* !defined(USING_OS_AUTOSAROS) */

/* @implements OsIf_SuspendAllInterrupts_define */
#define OsIf_SuspendAllInterrupts()     SuspendAllInterrupts()
/* @implements OsIf_ResumeAllInterrupts_define */
#define OsIf_ResumeAllInterrupts()      ResumeAllInterrupts()

/*
 * ISR macro definition
 */
#ifdef USING_OS_AUTOSAROS
/* ISR() macro defined by Autosar OS*/
#else
/* Baremetal or FreeRTOS case */
#if defined (USE_SW_VECTOR_MODE)
    #define ISR(IsrName)       void IsrName(void)
#else
    #define ISR(IsrName)       INTERRUPT_FUNC void IsrName(void)
#endif /* defined (USE_SW_VECTOR_MODE) */
#endif /* USING_OS_AUTOSAROS */

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* OSIF_INTERNAL_H */
