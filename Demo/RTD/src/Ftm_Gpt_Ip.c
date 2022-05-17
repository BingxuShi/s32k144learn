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
*   @file       Ftm_Gpt_Ip.c
*
*   @addtogroup ftm_ip Ftm IPL
*
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Ftm_Gpt_Ip.h"

#if (STD_ON == FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT)
    #define USER_MODE_REG_PROT_ENABLED      (FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT)
    #include "RegLockMacros.h"
#endif
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/

#define FTM_GPT_IP_VENDOR_ID_C                    43
#define FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_C     4
#define FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_C     4
#define FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_C  0
#define FTM_GPT_IP_SW_MAJOR_VERSION_C             1
#define FTM_GPT_IP_SW_MINOR_VERSION_C             0
#define FTM_GPT_IP_SW_PATCH_VERSION_C             0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#if (FTM_GPT_IP_VENDOR_ID != FTM_GPT_IP_VENDOR_ID_C)
    #error "Ftm_Gpt_Ip.h and Ftm_Gpt_Ip.c have different vendor ids"
#endif
/* Check if header file and Gpt header file are of the same Autosar version */
#if ((FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION != FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_C) || \
     (FTM_GPT_IP_AR_RELEASE_MINOR_VERSION != FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_C) || \
     (FTM_GPT_IP_AR_RELEASE_REVISION_VERSION != FTM_GPT_IP_AR_RELEASE_REVISION_VERSION_C) \
    )
    #error "AutoSar Version Numbers of Ftm_Gpt_Ip.h and Ftm_Gpt_Ip.c are different"
#endif
/* Check if source file and GPT header file are of the same Software version */
#if ((FTM_GPT_IP_SW_MAJOR_VERSION != FTM_GPT_IP_SW_MAJOR_VERSION_C) || \
     (FTM_GPT_IP_SW_MINOR_VERSION != FTM_GPT_IP_SW_MINOR_VERSION_C) || \
     (FTM_GPT_IP_SW_PATCH_VERSION != FTM_GPT_IP_SW_PATCH_VERSION_C) \
    )
    #error "Software Version Numbers of Ftm_Gpt_Ip.h and Ftm_Gpt_Ip.c are different"
#endif

#if (STD_ON == FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT)
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Platform_Types.h header file are of the same Autosar version */
    #if ((REGLOCKMACROS_AR_RELEASE_MAJOR_VERSION != FTM_GPT_IP_AR_RELEASE_MAJOR_VERSION_C) || \
         (REGLOCKMACROS_AR_RELEASE_MINOR_VERSION != FTM_GPT_IP_AR_RELEASE_MINOR_VERSION_C))
        #error "AutoSar Version Numbers of RegLockMacros.h and Ftm_Gpt_Ip.c are different"
    #endif
#endif
#endif
/*==================================================================================================
*                                          LOCAL DEFINIES
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL VARIABLES
==================================================================================================*/
#if (FTM_GPT_IP_USED == STD_ON)

#define GPT_START_SEC_VAR_CLEARED_32
#include "Gpt_MemMap.h"
/** @brief Global array variable used to store the runtime target time value. */
uint32 Ftm_Gpt_Ip_u32TargetValue[FTM_INSTANCE_COUNT][FTM_CONTROLS_COUNT];
#define GPT_STOP_SEC_VAR_CLEARED_32
#include "Gpt_MemMap.h"

#define GPT_START_SEC_CONST_UNSPECIFIED
#include "Gpt_MemMap.h"
/* Table of base pointers for FTM instances. */
FTM_Type * const ftmGptBase[FTM_INSTANCE_COUNT] = IP_FTM_BASE_PTRS;
#define GPT_STOP_SEC_CONST_UNSPECIFIED
#include "Gpt_MemMap.h"

#define GPT_START_SEC_VAR_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"

#if ((defined FTM_0_ISR_USED) || (defined FTM_1_ISR_USED) || (defined FTM_0_CH_0_CH_1_ISR_USED) || (defined FTM_0_CH_2_CH_3_ISR_USED) || (defined FTM_0_CH_4_CH_5_ISR_USED) || (defined FTM_0_CH_6_CH_7_ISR_USED) || (defined FTM_1_CH_0_CH_1_ISR_USED) || (defined FTM_1_CH_2_CH_3_ISR_USED) || (defined FTM_1_CH_4_CH_5_ISR_USED) || (defined FTM_1_CH_6_CH_7_ISR_USED) || (defined FTM_2_CH_0_CH_1_ISR_USED) || (defined FTM_2_CH_2_CH_3_ISR_USED) || (defined FTM_2_CH_4_CH_5_ISR_USED) || (defined FTM_2_CH_6_CH_7_ISR_USED) || (defined FTM_3_CH_0_CH_1_ISR_USED) || (defined FTM_3_CH_2_CH_3_ISR_USED) || (defined FTM_3_CH_4_CH_5_ISR_USED) || (defined FTM_3_CH_6_CH_7_ISR_USED) || (defined FTM_4_CH_0_CH_1_ISR_USED) || (defined FTM_4_CH_2_CH_3_ISR_USED) || (defined FTM_4_CH_4_CH_5_ISR_USED) || (defined FTM_4_CH_6_CH_7_ISR_USED) || (defined FTM_5_CH_0_CH_1_ISR_USED) || (defined FTM_5_CH_2_CH_3_ISR_USED) || (defined FTM_5_CH_4_CH_5_ISR_USED) || (defined FTM_5_CH_6_CH_7_ISR_USED) || (defined FTM_6_CH_0_CH_1_ISR_USED) || (defined FTM_6_CH_2_CH_3_ISR_USED) || (defined FTM_6_CH_4_CH_5_ISR_USED) || (defined FTM_6_CH_6_CH_7_ISR_USED) || (defined FTM_7_CH_0_CH_1_ISR_USED) || (defined FTM_7_CH_2_CH_3_ISR_USED) || (defined FTM_7_CH_4_CH_5_ISR_USED) || (defined FTM_7_CH_6_CH_7_ISR_USED))
static Ftm_Gpt_Ip_ChState Ftm_Gpt_Ip_u32ChState[FTM_INSTANCE_COUNT][FTM_CONTROLS_COUNT] =   {
                                                                                                {
                                                                                                    {
                                                                                                        (boolean)FALSE,
                                                                                                        NULL_PTR,
                                                                                                        0U
                                                                                                    }
                                                                                                }
                                                                                            };
#endif
#if (FTM_GPT_IP_SET_CLOCK_MODE == STD_ON)
static Ftm_Gpt_Ip_InstanceState Ftm_Gpt_Ip_u32InstanceState[FTM_INSTANCE_COUNT] =   {
                                                                                        {
                                                                                            0U,
                                                                                            0U
                                                                                        }
                                                                                    };
#endif
#if (FTM_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON) && ((defined FTM_0_ISR_USED) || (defined FTM_1_ISR_USED) || (defined FTM_0_CH_0_CH_1_ISR_USED) || (defined FTM_0_CH_2_CH_3_ISR_USED) || (defined FTM_0_CH_4_CH_5_ISR_USED) || (defined FTM_0_CH_6_CH_7_ISR_USED) || (defined FTM_1_CH_0_CH_1_ISR_USED) || (defined FTM_1_CH_2_CH_3_ISR_USED) || (defined FTM_1_CH_4_CH_5_ISR_USED) || (defined FTM_1_CH_6_CH_7_ISR_USED) || (defined FTM_2_CH_0_CH_1_ISR_USED) || (defined FTM_2_CH_2_CH_3_ISR_USED) || (defined FTM_2_CH_4_CH_5_ISR_USED) || (defined FTM_2_CH_6_CH_7_ISR_USED) || (defined FTM_3_CH_0_CH_1_ISR_USED) || (defined FTM_3_CH_2_CH_3_ISR_USED) || (defined FTM_3_CH_4_CH_5_ISR_USED) || (defined FTM_3_CH_6_CH_7_ISR_USED) || (defined FTM_4_CH_0_CH_1_ISR_USED) || (defined FTM_4_CH_2_CH_3_ISR_USED) || (defined FTM_4_CH_4_CH_5_ISR_USED) || (defined FTM_4_CH_6_CH_7_ISR_USED) || (defined FTM_5_CH_0_CH_1_ISR_USED) || (defined FTM_5_CH_2_CH_3_ISR_USED) || (defined FTM_5_CH_4_CH_5_ISR_USED) || (defined FTM_5_CH_6_CH_7_ISR_USED) || (defined FTM_6_CH_0_CH_1_ISR_USED) || (defined FTM_6_CH_2_CH_3_ISR_USED) || (defined FTM_6_CH_4_CH_5_ISR_USED) || (defined FTM_6_CH_6_CH_7_ISR_USED) || (defined FTM_7_CH_0_CH_1_ISR_USED) || (defined FTM_7_CH_2_CH_3_ISR_USED) || (defined FTM_7_CH_4_CH_5_ISR_USED) || (defined FTM_7_CH_6_CH_7_ISR_USED))
static uint32 Ftm_Gpt_Ip_u32NextTargetValue[FTM_INSTANCE_COUNT][FTM_CONTROLS_COUNT] =   {{(uint32)0}};
#endif
#define GPT_STOP_SEC_VAR_INIT_UNSPECIFIED
#include "Gpt_MemMap.h"
/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/
#define GPT_START_SEC_CODE
#include "Gpt_MemMap.h"

static inline void Ftm_Gpt_Ip_SetFreezebit(uint8 instance, boolean freezeBit);
static inline void Ftm_Gpt_Ip_SetClockSource(uint8 instance, Ftm_Gpt_Ip_ClockSource clocksource);
#if (FTM_GPT_IP_SET_CLOCK_MODE == STD_ON)
static inline void Ftm_Gpt_Ip_SetPrescaler(uint8 instance, uint8 prescalerValue);
#endif
static inline void Ftm_Gpt_Ip_ClearInterruptFlag(uint8 instance, uint8 channel);
static inline void Ftm_Gpt_Ip_FTMEnable(uint8 instance, boolean enable);
static inline void Ftm_Gpt_Ip_SetCompareValue(uint8 instance, uint8 channel, uint32 value);
static inline uint32 Ftm_Gpt_Ip_GetCntValue(uint8 instance);

uint32 Ftm_Gpt_Ip_GetInterruptBit(uint8 instance, uint8 channel);
static inline void Ftm_Gpt_Ip_EnableInterrupt(uint8 instance, uint8 channel, boolean enable);

static inline void Ftm_Gpt_Ip_SetHalfCycleValue(FTM_Type * const base, uint16 value);
static inline void Ftm_Gpt_Ip_Configure(FTM_Type * const base,
                                        Ftm_Gpt_Ip_ClockSource clocksource,
                                        uint8 prescalerValue);
static inline void Ftm_Gpt_Ip_SetCounter(uint8 instance, uint16 value);

#if (defined (FTM_GPT_IP_MODULE_SINGLE_INTERRUPT) && (STD_ON == FTM_GPT_IP_MODULE_SINGLE_INTERRUPT))
#ifdef FTM_0_ISR_USED
ISR(FTM_0_ISR);
#endif
#ifdef FTM_1_ISR_USED
ISR(FTM_1_ISR);
#endif
#else
#ifdef FTM_0_CH_0_CH_1_ISR_USED
ISR(FTM_0_CH_0_CH_1_ISR);
#endif
#ifdef FTM_0_CH_2_CH_3_ISR_USED
ISR(FTM_0_CH_2_CH_3_ISR);
#endif
#ifdef FTM_0_CH_4_CH_5_ISR_USED
ISR(FTM_0_CH_4_CH_5_ISR);
#endif
#ifdef FTM_0_CH_6_CH_7_ISR_USED
ISR(FTM_0_CH_6_CH_7_ISR);
#endif
#ifdef FTM_1_CH_0_CH_1_ISR_USED
ISR(FTM_1_CH_0_CH_1_ISR);
#endif
#ifdef FTM_1_CH_2_CH_3_ISR_USED
ISR(FTM_1_CH_2_CH_3_ISR);
#endif
#ifdef FTM_1_CH_4_CH_5_ISR_USED
ISR(FTM_1_CH_4_CH_5_ISR);
#endif
#ifdef FTM_1_CH_6_CH_7_ISR_USED
ISR(FTM_1_CH_6_CH_7_ISR);
#endif
#ifdef FTM_2_CH_0_CH_1_ISR_USED
ISR(FTM_2_CH_0_CH_1_ISR);
#endif
#ifdef FTM_2_CH_2_CH_3_ISR_USED
ISR(FTM_2_CH_2_CH_3_ISR);
#endif
#ifdef FTM_2_CH_4_CH_5_ISR_USED
ISR(FTM_2_CH_4_CH_5_ISR);
#endif
#ifdef FTM_2_CH_6_CH_7_ISR_USED
ISR(FTM_2_CH_6_CH_7_ISR);
#endif
#ifdef FTM_3_CH_0_CH_1_ISR_USED
ISR(FTM_3_CH_0_CH_1_ISR);
#endif
#ifdef FTM_3_CH_2_CH_3_ISR_USED
ISR(FTM_3_CH_2_CH_3_ISR);
#endif
#ifdef FTM_3_CH_4_CH_5_ISR_USED
ISR(FTM_3_CH_4_CH_5_ISR);
#endif
#ifdef FTM_3_CH_6_CH_7_ISR_USED
ISR(FTM_3_CH_6_CH_7_ISR);
#endif
#ifdef FTM_4_CH_0_CH_1_ISR_USED
ISR(FTM_4_CH_0_CH_1_ISR);
#endif
#ifdef FTM_4_CH_2_CH_3_ISR_USED
ISR(FTM_4_CH_2_CH_3_ISR);
#endif
#ifdef FTM_4_CH_4_CH_5_ISR_USED
ISR(FTM_4_CH_4_CH_5_ISR);
#endif
#ifdef FTM_4_CH_6_CH_7_ISR_USED
ISR(FTM_4_CH_6_CH_7_ISR);
#endif
#ifdef FTM_5_CH_0_CH_1_ISR_USED
ISR(FTM_5_CH_0_CH_1_ISR);
#endif
#ifdef FTM_5_CH_2_CH_3_ISR_USED
ISR(FTM_5_CH_2_CH_3_ISR);
#endif
#ifdef FTM_5_CH_4_CH_5_ISR_USED
ISR(FTM_5_CH_4_CH_5_ISR);
#endif
#ifdef FTM_5_CH_6_CH_7_ISR_USED
ISR(FTM_5_CH_6_CH_7_ISR);
#endif
#ifdef FTM_6_CH_0_CH_1_ISR_USED
ISR(FTM_6_CH_0_CH_1_ISR);
#endif
#ifdef FTM_6_CH_2_CH_3_ISR_USED
ISR(FTM_6_CH_2_CH_3_ISR);
#endif
#ifdef FTM_6_CH_4_CH_5_ISR_USED
ISR(FTM_6_CH_4_CH_5_ISR);
#endif
#ifdef FTM_6_CH_6_CH_7_ISR_USED
ISR(FTM_6_CH_6_CH_7_ISR);
#endif
#ifdef FTM_7_CH_0_CH_1_ISR_USED
ISR(FTM_7_CH_0_CH_1_ISR);
#endif
#ifdef FTM_7_CH_2_CH_3_ISR_USED
ISR(FTM_7_CH_2_CH_3_ISR);
#endif
#ifdef FTM_7_CH_4_CH_5_ISR_USED
ISR(FTM_7_CH_4_CH_5_ISR);
#endif
#ifdef FTM_7_CH_6_CH_7_ISR_USED
ISR(FTM_7_CH_6_CH_7_ISR);
#endif
#endif /*FTM_GPT_IP_MODULE_SINGLE_INTERRUPT == STD_ON*/
#if ((defined FTM_0_ISR_USED) || (defined FTM_1_ISR_USED) || (defined FTM_0_CH_0_CH_1_ISR_USED) || (defined FTM_0_CH_2_CH_3_ISR_USED) || (defined FTM_0_CH_4_CH_5_ISR_USED) || (defined FTM_0_CH_6_CH_7_ISR_USED) || (defined FTM_1_CH_0_CH_1_ISR_USED) || (defined FTM_1_CH_2_CH_3_ISR_USED) || (defined FTM_1_CH_4_CH_5_ISR_USED) || (defined FTM_1_CH_6_CH_7_ISR_USED) || (defined FTM_2_CH_0_CH_1_ISR_USED) || (defined FTM_2_CH_2_CH_3_ISR_USED) || (defined FTM_2_CH_4_CH_5_ISR_USED) || (defined FTM_2_CH_6_CH_7_ISR_USED) || (defined FTM_3_CH_0_CH_1_ISR_USED) || (defined FTM_3_CH_2_CH_3_ISR_USED) || (defined FTM_3_CH_4_CH_5_ISR_USED) || (defined FTM_3_CH_6_CH_7_ISR_USED) || (defined FTM_4_CH_0_CH_1_ISR_USED) || (defined FTM_4_CH_2_CH_3_ISR_USED) || (defined FTM_4_CH_4_CH_5_ISR_USED) || (defined FTM_4_CH_6_CH_7_ISR_USED) || (defined FTM_5_CH_0_CH_1_ISR_USED) || (defined FTM_5_CH_2_CH_3_ISR_USED) || (defined FTM_5_CH_4_CH_5_ISR_USED) || (defined FTM_5_CH_6_CH_7_ISR_USED) || (defined FTM_6_CH_0_CH_1_ISR_USED) || (defined FTM_6_CH_2_CH_3_ISR_USED) || (defined FTM_6_CH_4_CH_5_ISR_USED) || (defined FTM_6_CH_6_CH_7_ISR_USED) || (defined FTM_7_CH_0_CH_1_ISR_USED) || (defined FTM_7_CH_2_CH_3_ISR_USED) || (defined FTM_7_CH_4_CH_5_ISR_USED) || (defined FTM_7_CH_6_CH_7_ISR_USED))
static void Ftm_Gpt_Ip_ProcessCommonInterrupt(uint8 instance, uint8 channel);
#endif

#if (STD_ON == FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT)
    void Ftm_Gpt_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr);
#endif

#if (defined (MCAL_FTM_REG_PROT_AVAILABLE) && (STD_ON == FTM_GPT_IP_ENABLE_USER_MODE_SUPPORT))
    #define Call_Ftm_Gpt_Ip_SetUserAccessAllowed(BaseAddr) OsIf_Trusted_Call1param(Ftm_Gpt_Ip_SetUserAccessAllowed,(BaseAddr))
#else
    #define Call_Ftm_Gpt_Ip_SetUserAccessAllowed(BaseAddr)
#endif
/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/
#ifdef MCAL_FTM_REG_PROT_AVAILABLE
/**
 * @brief        Enables FTM registers writing in User Mode by configuring REG_PROT
 * @details      Sets the UAA (User Access Allowed) bit of the FTM IP allowing FTM registers writing in User Mode
 *
 * @param[in]    FtmBaseAddr
 *
 * @return       none
 *
 * @pre          Should be executed in supervisor mode
 */
void Ftm_Gpt_Ip_SetUserAccessAllowed(uint32 FtmBaseAddr)
{
    SET_USER_ACCESS_ALLOWED(FtmBaseAddr, FTM_PROT_MEM_U32);
}
#endif /* MCAL_FTM_REG_PROT_AVAILABLE */
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetFreezebit
* Description   : Configure the register CONF
*
* @param[in]     instance     FTM hardware instance number
* @param[in]     freezeBit    true or false
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetFreezebit(uint8 instance, boolean freezeBit)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17();
    ftmGptBase[instance]->CONF &= ~((FTM_CONF_BDMMODE_MASK) << FTM_CONF_BDMMODE_SHIFT);
if (TRUE == freezeBit)
    {
       ftmGptBase[instance]->CONF |= (0UL << FTM_CONF_BDMMODE_SHIFT);
    }
else
    {
       ftmGptBase[instance]->CONF |= (3UL << FTM_CONF_BDMMODE_SHIFT);
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17();
}

/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_Configure
* Description   : Configure the clock source and prescalerValue (SC register)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     clocksource
* @param[in]     prescalerValue
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_Configure(FTM_Type * const base,
                                        Ftm_Gpt_Ip_ClockSource clocksource,
                                        uint8 prescalerValue)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21();
    base->SC = (base->SC & ~FTM_SC_CLKS_MASK) | FTM_SC_CLKS(clocksource);
    base->SC = (base->SC & ~FTM_SC_PS_MASK) | FTM_SC_PS(prescalerValue);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21();
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetCounterInitVal
* Description   : Set the CounterInitVal
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     value
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetCounterInitVal(uint8 instance, uint16 value)
{
    ftmGptBase[instance]->CNTIN = (uint32)(((uint32)value << FTM_CNTIN_INIT_SHIFT) & FTM_CNTIN_INIT_MASK);
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetCounter
* Description   : Set the Ftm_Gpt_Ip_SetCounter
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     value
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetCounter(uint8 instance, uint16 value)
{
    ftmGptBase[instance]->CNT = (uint32)(((uint32)value << FTM_CNT_COUNT_SHIFT) & FTM_CNT_COUNT_MASK);
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_ClearInterruptFlag
* Description   : ClearInterruptFlag (CSC_CHF)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_ClearInterruptFlag(uint8 instance, uint8 channel)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22();
    ftmGptBase[instance]-> CONTROLS[channel].CSC &= (~(FTM_CSC_CHF_MASK));
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22();
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_EnableInterrupt
* Description   : Enable/Disable (CSC_CHIE)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
* @param[in]     enable
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_EnableInterrupt(uint8 instance, uint8 channel, boolean enable)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23();
    if (TRUE == enable)
    {
    ftmGptBase[instance]-> CONTROLS[channel].CSC |= FTM_CSC_CHIE_MASK;
    }
    else
    {
    ftmGptBase[instance]-> CONTROLS[channel].CSC &= (~(FTM_CSC_CHIE_MASK));
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23();
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetClockSource
* Description   : SetClocksource (SC_Register)
* @param[in]    : Clock The FTM peripheral clock selection
*                               - 00: No clock
*                               - 01: system clock
*                               - 10: fixed clock
*                               - 11: External clock
* @param[in]     instance       FTM hardware instance number
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetClockSource(uint8 instance, Ftm_Gpt_Ip_ClockSource clocksource)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24();
    ftmGptBase[instance]->SC = (ftmGptBase[instance]->SC & ~FTM_SC_CLKS_MASK) | FTM_SC_CLKS(clocksource);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24();
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_FTMEnable
* Description   : Enable/Disable FTMEN (MODE)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     enable
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_FTMEnable(uint8 instance, boolean enable)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25();
    if (TRUE == enable)
    {
        ftmGptBase[instance]->MODE  |= FTM_MODE_FTMEN_MASK;
    }
    else
    {
        ftmGptBase[instance]->MODE  &= (~(FTM_MODE_FTMEN_MASK));
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25();
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetCompareValue
* Description   : Set compare value (CV)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
* @param[in]     value
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetCompareValue(uint8 instance, uint8 channel, uint32 value)
{
    ftmGptBase[instance]-> CONTROLS[channel].CV = (uint32)((((uint32)value << FTM_CV_VAL_SHIFT) & FTM_CV_VAL_MASK));

}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_WriteModulo
* Description   : Set value (MOD)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
* @param[in]     value
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_WriteModulo(uint8 instance, uint16 value)
{
    ftmGptBase[instance]-> MOD = value;

}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_GetCounter
* Description   : Get current counter value
*
* @param[in]     instance       FTM hardware instance number
*
* @return        currentCounterValue
*
*/
uint32 Ftm_Gpt_Ip_GetCounter(uint8 instance)
{
    uint32 currentCounterValue;
    currentCounterValue = 0;
    currentCounterValue = Ftm_Gpt_Ip_GetCntValue(instance);
    return currentCounterValue;

}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_GetCntValue
* Description   : Get current counter value (base->CNT)
*
* @param[in]     instance       FTM hardware instance number
*
* @return        currentCntValue
*
*/
static inline uint32 Ftm_Gpt_Ip_GetCntValue(uint8 instance)
{
    uint32 currentCntValue;
    currentCntValue = ftmGptBase[instance]->CNT;
    return currentCntValue;
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_ModeSelectA
* Description   : Select mode MSA
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel        FTM hardware channel number
* @param[in]     enable
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_ModeSelectA(uint8 instance, uint8 channel, boolean enable)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26();
    if (TRUE == enable)
    {
        ftmGptBase[instance]->CONTROLS[channel].CSC |= FTM_CSC_MSA_MASK;
    }
    else
    {
        ftmGptBase[instance]->CONTROLS[channel].CSC &= (~(FTM_CSC_MSA_MASK));
    }
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26();
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetHalfCycleValue
* Description   : Ftm_Gpt_Ip_SetHalfCycleValue
*
* @param[in]     value
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetHalfCycleValue(FTM_Type * const base, uint16 value)
{
    ((base)->HCR) = value;
}
/*================================================================================================*/
#if (FTM_GPT_IP_SET_CLOCK_MODE == STD_ON)
/**
* @brief
* Function Name : Ftm_Gpt_Ip_SetPrescaler
* Description   : SetPrescaler - (SC)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     prescalerValue
*
* @return        void
*
*/
static inline void Ftm_Gpt_Ip_SetPrescaler(uint8 instance, uint8 prescalerValue)
{
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_27();
    ftmGptBase[instance]->SC = (ftmGptBase[instance]->SC & ~FTM_SC_PS_MASK) | FTM_SC_PS(prescalerValue);
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_27();
}
#endif
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_GetCompareValue
* Description   : SetPrescaler (SC)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
*
* @return        currentCmpValue
*
*/
uint32 Ftm_Gpt_Ip_GetCompareValue(uint8 instance, uint8 channel)
{
    uint32 currentCmpValue;
    currentCmpValue = ftmGptBase[instance]-> CONTROLS[channel].CV;
    return currentCmpValue;
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_GetInterruptFlag
* Description   : Get the status CSC_CHF (CSC)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
*
* @return        flag
*
*/
uint32 Ftm_Gpt_Ip_GetInterruptFlag(uint8 instance, uint8 channel)
{
    uint32 flag = 0U;
    flag = ((ftmGptBase[instance]->CONTROLS[channel].CSC) &FTM_CSC_CHF_MASK) >> FTM_CSC_CHF_SHIFT;
    return flag;
}
/*================================================================================================*/
/**
* @brief
* Function Name : Ftm_Gpt_Ip_GetInterruptBit
* Description   : Get the bit CSC_CHIE (CSC)
*
* @param[in]     instance       FTM hardware instance number
* @param[in]     channel
*
* @return        flag
*
*/
uint32 Ftm_Gpt_Ip_GetInterruptBit(uint8 instance, uint8 channel)
{
    uint32 flag = 0U;
    flag = ((ftmGptBase[instance]->CONTROLS[channel].CSC) &FTM_CSC_CHIE_MASK) >> FTM_CSC_CHIE_SHIFT;
    return flag;
}
/*================================================================================================*/
#if ((defined FTM_0_ISR_USED) || (defined FTM_1_ISR_USED) || (defined FTM_0_CH_0_CH_1_ISR_USED) || (defined FTM_0_CH_2_CH_3_ISR_USED) || (defined FTM_0_CH_4_CH_5_ISR_USED) || (defined FTM_0_CH_6_CH_7_ISR_USED) || (defined FTM_1_CH_0_CH_1_ISR_USED) || (defined FTM_1_CH_2_CH_3_ISR_USED) || (defined FTM_1_CH_4_CH_5_ISR_USED) || (defined FTM_1_CH_6_CH_7_ISR_USED) || (defined FTM_2_CH_0_CH_1_ISR_USED) || (defined FTM_2_CH_2_CH_3_ISR_USED) || (defined FTM_2_CH_4_CH_5_ISR_USED) || (defined FTM_2_CH_6_CH_7_ISR_USED) || (defined FTM_3_CH_0_CH_1_ISR_USED) || (defined FTM_3_CH_2_CH_3_ISR_USED) || (defined FTM_3_CH_4_CH_5_ISR_USED) || (defined FTM_3_CH_6_CH_7_ISR_USED) || (defined FTM_4_CH_0_CH_1_ISR_USED) || (defined FTM_4_CH_2_CH_3_ISR_USED) || (defined FTM_4_CH_4_CH_5_ISR_USED) || (defined FTM_4_CH_6_CH_7_ISR_USED) || (defined FTM_5_CH_0_CH_1_ISR_USED) || (defined FTM_5_CH_2_CH_3_ISR_USED) || (defined FTM_5_CH_4_CH_5_ISR_USED) || (defined FTM_5_CH_6_CH_7_ISR_USED) || (defined FTM_6_CH_0_CH_1_ISR_USED) || (defined FTM_6_CH_2_CH_3_ISR_USED) || (defined FTM_6_CH_4_CH_5_ISR_USED) || (defined FTM_6_CH_6_CH_7_ISR_USED) || (defined FTM_7_CH_0_CH_1_ISR_USED) || (defined FTM_7_CH_2_CH_3_ISR_USED) || (defined FTM_7_CH_4_CH_5_ISR_USED) || (defined FTM_7_CH_6_CH_7_ISR_USED))
/**
* @brief   Driver routine to process all the interrupts of FTM.
* @details Support function used by interrupt service routines to implement FTM specific operations
*          and call the upper layer handler to implement non-hardware specific operations.
*
* @param[in]     instance     FTM hardware instance number
* @param[in]     channel      FTM hardware channel number
* @implements    Ftm_Gpt_Ip_ProcessCommonInterrupt_Activity
*/
static void Ftm_Gpt_Ip_ProcessCommonInterrupt(uint8 instance, uint8 channel)
{
    uint32 flag;
    uint32 interruptEnabled;
    uint32 oldCmpValue = 0U;
    uint32 targetValue = 0U;

    /*Checks for spurious interrupts*/
    flag = Ftm_Gpt_Ip_GetInterruptFlag(instance, channel);
    interruptEnabled = Ftm_Gpt_Ip_GetInterruptBit(instance, channel);

    /* Clear interrupt flag */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance,channel);

    if ((1U == flag) && (1U == interruptEnabled))
    {
        oldCmpValue = Ftm_Gpt_Ip_GetCompareValue(instance, channel);

#if (FTM_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
        if(Ftm_Gpt_Ip_u32NextTargetValue[instance][channel] != 0x0U)
        {
            Ftm_Gpt_Ip_u32TargetValue[instance][channel] = Ftm_Gpt_Ip_u32NextTargetValue[instance][channel];
            Ftm_Gpt_Ip_u32NextTargetValue[instance][channel] = 0x0U;
        }
#endif
        targetValue = Ftm_Gpt_Ip_u32TargetValue[instance][channel];

        if ((uint32)(oldCmpValue + targetValue) > FTM_CNT_MAX_VALUE)
        {
            Ftm_Gpt_Ip_SetCompareValue(instance, channel,  (uint32)(targetValue - (FTM_CNT_MAX_VALUE - oldCmpValue)));
        }
        else
        {
            /*Set new CMP value*/
            Ftm_Gpt_Ip_SetCompareValue(instance, channel, (uint32)(oldCmpValue + targetValue));
        }


        /* Call upper layer handler */
        if((TRUE == Ftm_Gpt_Ip_u32ChState[instance][channel].chInit) && \
                (NULL_PTR != Ftm_Gpt_Ip_u32ChState[instance][channel].callback))
        {
            Ftm_Gpt_Ip_u32ChState[instance][channel].callback(Ftm_Gpt_Ip_u32ChState[instance][channel].callbackParam);
        }
    }
}
#endif

/*================================================================================================*/
/**
* @brief         Function Name : Ftm_Gpt_Ip_Init
* @details       Initializes the FTM instance. This functions is called for each FTM hardware Instance and:
*
* @param[in]     instance     FTM hardware instance number
* @param[in]     configPtr    Pointer to a selected configuration structure
* @return        void
* @pre           The data structure including the configuration set required for initializing the GPT driver
* @implements    Ftm_Gpt_Ip_Init_Activity
*/
void Ftm_Gpt_Ip_Init(uint8 instance, const Ftm_Gpt_Ip_InstanceConfigType *configPtr)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
    DevAssert(FTM_INSTANCE_COUNT > instance);
    DevAssert(NULL_PTR != configPtr);
#endif
        /* Enable register access from user mode, if enabled from configuration file */
        Call_Ftm_Gpt_Ip_SetUserAccessAllowed((uint32)ftmGptBase[instance]);

         /* Check the FTM counter modes */
    if (FTM_GPT_IP_MODE_UP_TIMER == configPtr->mode)
    {
        /* Set clock and prescalerValue FTM */
        Ftm_Gpt_Ip_Configure(ftmGptBase[instance],
                             configPtr->clocksource,
                             configPtr->clockPrescaler);
        /*Set freeze bit*/
        Ftm_Gpt_Ip_SetFreezebit(instance, configPtr->freezeBit);

        /*Set Counter register and Initial Counter Value*/
        Ftm_Gpt_Ip_SetCounterInitVal(instance, 1U);

        /* write the Ftm Modulo Register with 0xFFFF */
        Ftm_Gpt_Ip_WriteModulo(instance, 0xFFFFU);

        /*Enable FTMEnable*/
        Ftm_Gpt_Ip_FTMEnable(instance, TRUE);
    }
    else
    {
        /* TODO: DO NOTHING */
    }
#if (FTM_GPT_IP_SET_CLOCK_MODE == STD_ON)
    Ftm_Gpt_Ip_u32InstanceState[instance].clockPrescaler = configPtr->clockPrescaler;
    Ftm_Gpt_Ip_u32InstanceState[instance].clockAlternatePrescaler = configPtr->clockAlternatePrescaler;
#endif
}

/*================================================================================================*/
/**
* @brief         Function Name : Ftm_Gpt_Ip_InitChannel
* @details       Initializes the FTM channels. This functions is called for each FTM hardware channel and:
*
* @param[in]     instance     FTM hardware instance number
* @param[in]     configPtr    Pointer to a selected configuration structure
* @return        void
* @pre           The data structure including the configuration set required for initializing the GPT driver
* @implements    Ftm_Gpt_Ip_InitChannel_Activity
*/
void Ftm_Gpt_Ip_InitChannel(uint8 instance, const Ftm_Gpt_Ip_ChannelConfigType *configPtr)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
    DevAssert(NULL_PTR != configPtr);
    DevAssert(FTM_INSTANCE_COUNT > instance);
    DevAssert(FTM_CONTROLS_COUNT > configPtr->hwChannel);
#endif

    /* Disable channels interrupt bit */
    Ftm_Gpt_Ip_EnableInterrupt(instance, configPtr->hwChannel, FALSE);
    /* Clear ClearInterruptFlag */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance, configPtr->hwChannel);
    /* Set Compare Value register to 0xFFFF */
    Ftm_Gpt_Ip_SetCompareValue(instance, configPtr->hwChannel, 0xFFFFU);
    /* Set bit MSA */
    Ftm_Gpt_Ip_ModeSelectA(instance, configPtr->hwChannel, TRUE);
#if ((defined FTM_0_ISR_USED) || (defined FTM_1_ISR_USED) || (defined FTM_0_CH_0_CH_1_ISR_USED) || (defined FTM_0_CH_2_CH_3_ISR_USED) || (defined FTM_0_CH_4_CH_5_ISR_USED) || (defined FTM_0_CH_6_CH_7_ISR_USED) || (defined FTM_1_CH_0_CH_1_ISR_USED) || (defined FTM_1_CH_2_CH_3_ISR_USED) || (defined FTM_1_CH_4_CH_5_ISR_USED) || (defined FTM_1_CH_6_CH_7_ISR_USED) || (defined FTM_2_CH_0_CH_1_ISR_USED) || (defined FTM_2_CH_2_CH_3_ISR_USED) || (defined FTM_2_CH_4_CH_5_ISR_USED) || (defined FTM_2_CH_6_CH_7_ISR_USED) || (defined FTM_3_CH_0_CH_1_ISR_USED) || (defined FTM_3_CH_2_CH_3_ISR_USED) || (defined FTM_3_CH_4_CH_5_ISR_USED) || (defined FTM_3_CH_6_CH_7_ISR_USED) || (defined FTM_4_CH_0_CH_1_ISR_USED) || (defined FTM_4_CH_2_CH_3_ISR_USED) || (defined FTM_4_CH_4_CH_5_ISR_USED) || (defined FTM_4_CH_6_CH_7_ISR_USED) || (defined FTM_5_CH_0_CH_1_ISR_USED) || (defined FTM_5_CH_2_CH_3_ISR_USED) || (defined FTM_5_CH_4_CH_5_ISR_USED) || (defined FTM_5_CH_6_CH_7_ISR_USED) || (defined FTM_6_CH_0_CH_1_ISR_USED) || (defined FTM_6_CH_2_CH_3_ISR_USED) || (defined FTM_6_CH_4_CH_5_ISR_USED) || (defined FTM_6_CH_6_CH_7_ISR_USED) || (defined FTM_7_CH_0_CH_1_ISR_USED) || (defined FTM_7_CH_2_CH_3_ISR_USED) || (defined FTM_7_CH_4_CH_5_ISR_USED) || (defined FTM_7_CH_6_CH_7_ISR_USED))
    Ftm_Gpt_Ip_u32ChState[instance][configPtr->hwChannel].chInit = TRUE;
    Ftm_Gpt_Ip_u32ChState[instance][configPtr->hwChannel].callback = configPtr->callback;
    Ftm_Gpt_Ip_u32ChState[instance][configPtr->hwChannel].callbackParam = configPtr->callbackParam;
#endif
}

/*================================================================================================*/
/**
* @brief        Function Name : Ftm_Gpt_Ip_Deinit
* @details      De-Initializes the FTM module. This functions is called for each FTM hardware instance and:
*                    - resets all channels to default
*                    - disables the timer compare interrupts corresponding to Ftm channel
*                    - clears the timer compare interrupt flags corresponding to Ftm channel
*                    - resets the counter register and the counter initial value register.
*                    - resets the channel value register and the modulo register
*                    - disables the freeze mode
*
* @param[in]     instance     FTM hardware instance number
* @return        void
* @pre           The data structure including the configuration set required for initializing the GPT driver.
* @implements    Ftm_Gpt_Ip_Deinit_Activity
*/
void Ftm_Gpt_Ip_Deinit(uint8 instance)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
#endif

    uint8 channelIndex;
    /*Reset all channels to default*/
    for (channelIndex = 0; channelIndex < FTM_CONTROLS_COUNT; channelIndex++)
    {
        /* Disable interrupts */
        Ftm_Gpt_Ip_EnableInterrupt(instance, channelIndex, FALSE );
        /*Clear interrupt flags*/
        Ftm_Gpt_Ip_ClearInterruptFlag(instance, channelIndex);
    }
    /* Disable clockSoure */
    Ftm_Gpt_Ip_SetClockSource(instance, FTM_GPT_IP_CLOCK_SOURCE_NONE);
    /* Disable FTMEnable */
    Ftm_Gpt_Ip_FTMEnable(instance, FALSE);
    /* Disable freeze */
    Ftm_Gpt_Ip_SetFreezebit(instance, FALSE);
    /* Set Counter register to 0 and Initial Counter Value to 0 */
    Ftm_Gpt_Ip_SetCounterInitVal(instance, 0U);
    Ftm_Gpt_Ip_SetCounter(instance, 0U);

}

/*================================================================================================*/
/**
* @brief        Function Name : Ftm_Gpt_Ip_StartCounting
* @details      This function is called for starting the Ftm timer channel
*
* @param[in]     instance        FTM hardware instance
* @param[in]     channel         FTM hardware channel
* @param[in]     compareValue    Compare value
* @return        void
* @pre           The driver needs to be initialized. This function is called for starting the FTM timer channel.
* @implements    Ftm_Gpt_Ip_StartCounting_Activity
*/
void Ftm_Gpt_Ip_StartCounting(uint8 instance, uint8 channel, uint16 compareValue)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
    DevAssert(FTM_INSTANCE_COUNT > instance);
    DevAssert(FTM_CONTROLS_COUNT > channel);
#endif

uint32 currentCntValue;
uint32 counterValue;

    currentCntValue = Ftm_Gpt_Ip_GetCntValue(instance);

    if ((uint32)(currentCntValue + compareValue) > FTM_CNT_MAX_VALUE)
    {
        counterValue = (uint32)(compareValue - (FTM_CNT_MAX_VALUE - currentCntValue));
    }
    else
    {
        counterValue = (uint32)(currentCntValue + compareValue);
    }
    /* Set new compare value */
    Ftm_Gpt_Ip_SetCompareValue(instance, channel, counterValue);
    /* Save compare value */
    Ftm_Gpt_Ip_u32TargetValue[instance][channel] = compareValue;
    /* Clear CHF flag */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance,channel);
    /* Enable interrupt */
    Ftm_Gpt_Ip_EnableInterrupt(instance, channel, TRUE);

}

/*================================================================================================*/
/**
* @brief             Function Name : Ftm_Gpt_Ip_StartTimer
* @details           This function is called for setting a new start counter value and enables the FTM counter and
*                           - sets the new counter value
*                           - enables the FTM counter
* @implements    Ftm_Gpt_Ip_StartTimer_Activity
*/
void Ftm_Gpt_Ip_StartTimer(uint8 instance, uint16 counterValue)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
    DevAssert(FTM_INSTANCE_COUNT > instance);
#endif

    /* Enable Ftm counter */
    Ftm_Gpt_Ip_SetClockSource(instance, FTM_GPT_IP_CLOCK_SOURCE_SYSTEMCLK);
    /* Set the new value counter */
    Ftm_Gpt_Ip_SetCounterInitVal(instance, counterValue);
    /* Disable FTMEnable */
    Ftm_Gpt_Ip_FTMEnable(instance, TRUE);

}

/*================================================================================================*/
/**
* @brief        Function Name : Ftm_Gpt_Ip_StopTimer
* @details      This function is callded for stopping the Ftm counter.
*                   - disables the FTM counter
*
* @param[in]     instance        FTM hardware instance
* @return        void
* @pre           The driver needs to be initialized. This function is called for stoping the FTM timer channel.
* @implements    Ftm_Gpt_Ip_StopTimer_Activity
*/
void Ftm_Gpt_Ip_StopTimer(uint8 instance)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
#endif
    /* Disable FTMEnable */
    Ftm_Gpt_Ip_FTMEnable(instance, FALSE);
    /* Disable Ftm counter */
    Ftm_Gpt_Ip_SetClockSource(instance, FTM_GPT_IP_CLOCK_SOURCE_NONE);
}

/*================================================================================================*/
/**
* @brief        Function Name : Ftm_Gpt_Ip_EnableChannelInterrupt
* @details      This function allows enabling interrupt generation of timer channel
*               when time-out occurs
*
* @param[in]    instance        FTM hardware instance
* @param[in]    channel         FTM hardware channel
* @return       void
* @pre          The driver needs to be initialized.
* @implements   Ftm_Gpt_Ip_EnableChannelInterrupt_Activity
*/
void Ftm_Gpt_Ip_EnableChannelInterrupt(uint8 instance, uint8 channel)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
DevAssert(FTM_CONTROLS_COUNT > channel);
#endif

     /* Clear interrupt flag */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance, channel);
    /* Enable channel interrupt */
    Ftm_Gpt_Ip_EnableInterrupt(instance, channel, TRUE);
}

/*================================================================================================*/
/**
* @brief        Function Name : Ftm_Gpt_Ip_DisableChannelInterrupt
* @details      This function allows disabling interrupt generation of timer channel
*               when time-out occurs
*
* @param[in]     instance        FTM hardware instance
* @param[in]     channel         FTM hardware channel
* @return        void
* @pre           The driver needs to be initialized.
* @implements    Ftm_Gpt_Ip_DisableChannelInterrupt_Activity
*/
void Ftm_Gpt_Ip_DisableChannelInterrupt(uint8 instance, uint8 channel)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
DevAssert(FTM_CONTROLS_COUNT > channel);
#endif

    /* Disable interrupt */
    Ftm_Gpt_Ip_EnableInterrupt(instance, channel, FALSE);
    /* Clear interrupt flag */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance, channel);
}

/*================================================================================================*/
/**
* @brief         Function Name : Ftm_Gpt_Ip_SetHalfCycleReloadPoint
* @details       Configures the value of the counter with half cycle of reload point.
*
* @param[in]     instance                  FTM hardware instance
* @param[in]     reloadPoint               Reload value

* @return
* @pre           The driver needs to be initialized.
* @implements    Ftm_Gpt_Ip_SetHalfCycleReloadPoint_Activity
*/
void Ftm_Gpt_Ip_SetHalfCycleReloadPoint(uint8 instance, uint16 reloadPoint)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
#endif
    Ftm_Gpt_Ip_SetHalfCycleValue(ftmGptBase[instance], reloadPoint);
}

#if (FTM_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE == STD_ON)
/*================================================================================================*/
/**
* @brief      The function changes the Ftm compare register value.
* @details This function:
*          - Write next timeout to local variable
*
* @param[in]     instance        FTM hardware instance
* @param[in]     channel         Channel
* @param[in]     value           Channel timeout value
* @return        void
* @pre           The driver needs to be initialized.
* @implements    Ftm_Gpt_Ip_ChangeNextTimeoutValue_Activity
*/
void Ftm_Gpt_Ip_ChangeNextTimeoutValue(uint8 instance, uint8 channel, uint16 value)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
    DevAssert(FTM_INSTANCE_COUNT > instance);
    DevAssert(FTM_CONTROLS_COUNT > channel);
#endif
#if ((defined FTM_0_ISR_USED) || (defined FTM_1_ISR_USED) || (defined FTM_0_CH_0_CH_1_ISR_USED) || (defined FTM_0_CH_2_CH_3_ISR_USED) || (defined FTM_0_CH_4_CH_5_ISR_USED) || (defined FTM_0_CH_6_CH_7_ISR_USED) || (defined FTM_1_CH_0_CH_1_ISR_USED) || (defined FTM_1_CH_2_CH_3_ISR_USED) || (defined FTM_1_CH_4_CH_5_ISR_USED) || (defined FTM_1_CH_6_CH_7_ISR_USED) || (defined FTM_2_CH_0_CH_1_ISR_USED) || (defined FTM_2_CH_2_CH_3_ISR_USED) || (defined FTM_2_CH_4_CH_5_ISR_USED) || (defined FTM_2_CH_6_CH_7_ISR_USED) || (defined FTM_3_CH_0_CH_1_ISR_USED) || (defined FTM_3_CH_2_CH_3_ISR_USED) || (defined FTM_3_CH_4_CH_5_ISR_USED) || (defined FTM_3_CH_6_CH_7_ISR_USED) || (defined FTM_4_CH_0_CH_1_ISR_USED) || (defined FTM_4_CH_2_CH_3_ISR_USED) || (defined FTM_4_CH_4_CH_5_ISR_USED) || (defined FTM_4_CH_6_CH_7_ISR_USED) || (defined FTM_5_CH_0_CH_1_ISR_USED) || (defined FTM_5_CH_2_CH_3_ISR_USED) || (defined FTM_5_CH_4_CH_5_ISR_USED) || (defined FTM_5_CH_6_CH_7_ISR_USED) || (defined FTM_6_CH_0_CH_1_ISR_USED) || (defined FTM_6_CH_2_CH_3_ISR_USED) || (defined FTM_6_CH_4_CH_5_ISR_USED) || (defined FTM_6_CH_6_CH_7_ISR_USED) || (defined FTM_7_CH_0_CH_1_ISR_USED) || (defined FTM_7_CH_2_CH_3_ISR_USED) || (defined FTM_7_CH_4_CH_5_ISR_USED) || (defined FTM_7_CH_6_CH_7_ISR_USED))

    /* Update the target time value to be used on next cycle */
    Ftm_Gpt_Ip_u32NextTargetValue[instance][channel] = (uint32)value;

#endif
}
#endif /*FTM_GPT_IP_CHANGE_NEXT_TIMEOUT_VALUE*/

#if (FTM_GPT_IP_SET_CLOCK_MODE == STD_ON)
/*================================================================================================*/
/**
* @brief        The function changes the FTM prescaler value.
* @details      This function sets the FTM prescaler based on the input mode.
*
* @param[in]    instance     FTM hardware instance
* @param[in]    prescalerMode    FTM_GPT_IP_CLOCKMODE_NORMAL or FTM_GPT_IP_CLOCKMODE_ALTERNATE
*
* @return       void
* @pre          The driver needs to be initialized.On/Off by the configuration parameter: GPT_DUAL_CLOCK_MODE
* @implements   Ftm_Gpt_Ip_SetClockMode_Activity
*/
void Ftm_Gpt_Ip_SetClockMode(uint8 instance, Ftm_Gpt_Ip_ClockModeType prescalerMode)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
#endif

    /* Set Prescaler */
    if(FTM_GPT_IP_CLOCKMODE_NORMAL == prescalerMode)
    {
        Ftm_Gpt_Ip_SetPrescaler(instance, Ftm_Gpt_Ip_u32InstanceState[instance].clockPrescaler);
    }
    else
    {
        Ftm_Gpt_Ip_SetPrescaler(instance, Ftm_Gpt_Ip_u32InstanceState[instance].clockAlternatePrescaler);
    }

}
#endif/*FTM_GPT_IP_SET_CLOCK_MODE*/

#if(FTM_GPT_IP_PREDEFTIMER_FUNCTIONALITY_API == STD_ON)
/*================================================================================================*/
/**
* @brief      The function starts the FTM channel.
* @details
*
* @param[in]  instance        FTM hardware instance
* @param[in]  channel         Channel
* @return     void
* @pre        The driver needs to be initialized
*
*/
void Ftm_Gpt_Ip_StartPredefTimer (uint8 instance,uint8 channel, uint8 uPrescaler, uint8 clocksource, boolean bFreezeEnable)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
    DevAssert(FTM_INSTANCE_COUNT > instance);
    DevAssert(FTM_CONTROLS_COUNT > channel);
#endif

    /* Enable register access from user mode, if enabled from configuration file */
    Call_Ftm_Gpt_Ip_SetUserAccessAllowed((uint32)ftmGptBase[instance]);
    /* Disable the FTM timer */
    Ftm_Gpt_Ip_SetClockSource(instance, FTM_GPT_IP_CLOCK_SOURCE_NONE);
    /* Disable all interrupts on this channel */
    Ftm_Gpt_Ip_EnableInterrupt(instance, channel, FALSE);
    /* Clear interrupt flags */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance, channel);
    /* Disable TOIE flags */
    ftmGptBase[instance]-> SC &= (~(FTM_SC_TOIE_MASK));
    /* Configure FTM as a Free-Running Timer by setting FTMEN=1, CTNIN=0, MOD=0xFFFF, QUADEN=0, CPWMS=0*/
    Ftm_Gpt_Ip_FTMEnable(instance, TRUE);
    /* Initial Counter Value to 0 */
    Ftm_Gpt_Ip_SetCounterInitVal(instance, 0U);
    /* write the Ftm Modulo Register with 0xFFFF */
    Ftm_Gpt_Ip_WriteModulo(instance, 0xFFFFU);
    /* Set Compare Value register to 0xFFFF */
    Ftm_Gpt_Ip_SetCompareValue(instance, channel, 0xFFFFU);
    /* Enter EA_28*/
    SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_28();
    /* Clear bit QUADEN */
    ftmGptBase[instance]->QDCTRL &= (~(FTM_QDCTRL_QUADEN_MASK));
    /* Clear bit CPWMS */
    ftmGptBase[instance]->SC &= (~(FTM_SC_CPWMS_MASK));
    /*Configure Predef*/
    ftmGptBase[instance]->SC = (ftmGptBase[instance]->SC & ~FTM_SC_CLKS_MASK) | FTM_SC_CLKS(clocksource);
    ftmGptBase[instance]->SC = (ftmGptBase[instance]->SC & ~FTM_SC_PS_MASK) | FTM_SC_PS(uPrescaler);
    ftmGptBase[instance]->CONF &= ~((FTM_CONF_BDMMODE_MASK) << FTM_CONF_BDMMODE_SHIFT);
    if (TRUE == bFreezeEnable)
    {
       ftmGptBase[instance]->CONF |= (0UL << FTM_CONF_BDMMODE_SHIFT);
    }
    else
    {
       ftmGptBase[instance]->CONF |= (3UL << FTM_CONF_BDMMODE_SHIFT);
    }
    /* Exit EA_28*/
    SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_28();
    /* Intialize FTM timer by writing any value to CNT register when CLKS not equal 0 */
    ftmGptBase[instance]->CNT = (uint32)(((uint32)1U << FTM_CNT_COUNT_SHIFT) & FTM_CNT_COUNT_MASK);
}
/*================================================================================================*/
/**
* @brief      The function stops the FTM channel.
* @details    This function stops the FTM channel.
*
* @param[in]  channel      hardware channel
* @param[in]  instance     FTM hardware instance
*
*
* @return     void
* @pre        The driver needs to be initialized
*
*/
void Ftm_Gpt_Ip_StopPredefTimer (uint8 instance, uint8 channel)
{
#if FTM_GPT_IP_DEV_ERROR_DETECT == STD_ON
DevAssert(FTM_INSTANCE_COUNT > instance);
DevAssert(FTM_CONTROLS_COUNT > channel);
#endif
    /* Disable the FTM timer */
    Ftm_Gpt_Ip_SetClockSource(instance, FTM_GPT_IP_CLOCK_SOURCE_NONE);
    /* Disable all interrupts on this channel */
    Ftm_Gpt_Ip_EnableInterrupt(instance, channel, FALSE);
    /* Clear interrupt flags */
    Ftm_Gpt_Ip_ClearInterruptFlag(instance, channel);
    Ftm_Gpt_Ip_FTMEnable(instance, FALSE);
    /* Set Counter register to 0 and Initial Counter Value to 0 */
    Ftm_Gpt_Ip_SetCounterInitVal(instance, 0U);
    Ftm_Gpt_Ip_SetCounter(instance, 0U);
    Ftm_Gpt_Ip_SetCompareValue(instance, channel, 0U);
    Ftm_Gpt_Ip_WriteModulo(instance, 0U );
    /* Set bit MSA */
    Ftm_Gpt_Ip_ModeSelectA(instance, channel, FALSE);
}
#endif/* FTM_GPT_IP_PREDEFTIMER_FUNCTIONALITY_API */

/*================================================================================================*/
#if (defined (FTM_GPT_IP_MODULE_SINGLE_INTERRUPT) && (STD_ON == FTM_GPT_IP_MODULE_SINGLE_INTERRUPT))
#ifdef FTM_0_ISR_USED
/**
* @brief   Interrupt handler for FTM channels.
* @details Interrupt Service Routine corresponding to common FTM_0 module.
* @param[in] none
* @return  none
* @isr
* @pre      The driver needs to be initialized.
*/
ISR(FTM_0_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel < FTM_CONTROLS_COUNT; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(0U, channel);
    }

    EXIT_INTERRUPT();
}
#endif
/*================================================================================================*/
#ifdef FTM_1_ISR_USED
/**
* @brief   Interrupt handler for FTM channels.
* @details Interrupt Service Routine corresponding to common FTM_1 module.
* @param[in] none
* @return  none
* @isr
* @pre      The driver needs to be initialized.
*/
ISR(FTM_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel < FTM_CONTROLS_COUNT; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(1U, channel);
    }

    EXIT_INTERRUPT();
}
#endif
#else /*FTM_GPT_IP_MODULE_SINGLE_INTERRUPT*/
/*================================================================================================*/
#if (defined FTM_0_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 0 - channel 1.
 */
ISR(FTM_0_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(0U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_0_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 2 - channel 3.
 */
ISR(FTM_0_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(0U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_0_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 4 - channel 5.
 */
ISR(FTM_0_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(0U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_0_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 0 channel 6 - channel 7.
 */
ISR(FTM_0_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(0U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_1_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 0 - channel 1.
 */
ISR(FTM_1_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(1U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_1_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 2 - channel 3.
 */
ISR(FTM_1_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(1U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_1_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 4 - channel 5.
 */
ISR(FTM_1_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(1U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_1_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 1 channel 6 - channel 7.
 */
ISR(FTM_1_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(1U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_2_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 0 - channel 1.
 */
ISR(FTM_2_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(2U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_2_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 2 - channel 3.
 */
ISR(FTM_2_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(2U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_2_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 4 - channel 5.
 */
ISR(FTM_2_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(2U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_2_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 2 channel 6 - channel 7.
 */
ISR(FTM_2_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(2U, channel);
    }
}
#endif

#if (defined FTM_3_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 0 - channel 1.
 */
ISR(FTM_3_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(3U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_3_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 2 - channel 3.
 */
ISR(FTM_3_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(3U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_3_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 4 - channel 5.
 */
ISR(FTM_3_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(3U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_3_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 3 channel 6 - channel 7.
 */
ISR(FTM_3_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(3U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_4_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 0 - channel 1.
 */
ISR(FTM_4_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(4U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_4_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 2 - channel 3.
 */
ISR(FTM_4_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(4U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_4_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 4 - channel 5.
 */
ISR(FTM_4_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(4U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_4_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 4 channel 6 - channel 7.
 */
ISR(FTM_4_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(4U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_5_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 0 - channel 1.
 */
ISR(FTM_5_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(5U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_5_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 2 - channel 3.
 */
ISR(FTM_5_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(5U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_5_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 4 - channel 5.
 */
ISR(FTM_5_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(5U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_5_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 5 channel 6 - channel 7.
 */
ISR(FTM_5_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(5U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_6_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 0 - channel 1.
 */
ISR(FTM_6_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(6U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_6_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 2 - channel 3.
 */
ISR(FTM_6_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(6U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_6_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 4 - channel 5.
 */
ISR(FTM_6_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(6U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_6_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 6 channel 6 - channel 7.
 */
ISR(FTM_6_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(6U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_7_CH_0_CH_1_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 0 - channel 1.
 */
ISR(FTM_7_CH_0_CH_1_ISR)
{
    uint8 channel = 0U;

    for (channel = 0U; channel <= 1U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(7U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_7_CH_2_CH_3_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 2 - channel 3.
 */
ISR(FTM_7_CH_2_CH_3_ISR)
{
    uint8 channel = 0U;

    for (channel = 2U; channel <= 3U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(7U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_7_CH_4_CH_5_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 4 - channel 5.
 */
ISR(FTM_7_CH_4_CH_5_ISR)
{
    uint8 channel = 0U;

    for (channel = 4U; channel <= 5U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(7U, channel);
    }

    EXIT_INTERRUPT();
}
#endif

#if (defined FTM_7_CH_6_CH_7_ISR_USED)
/**
 * @brief          Independent interrupt handler.
 * @details        Interrupt handler for FTM module 7 channel 6 - channel 7.
 */
ISR(FTM_7_CH_6_CH_7_ISR)
{
    uint8 channel = 0U;

    for (channel = 6U; channel <= 7U; channel++)
    {
        Ftm_Gpt_Ip_ProcessCommonInterrupt(7U, channel);
    }

    EXIT_INTERRUPT();
}
#endif
#endif

#define GPT_STOP_SEC_CODE
#include "Gpt_MemMap.h"

#endif /* FTM_IP_USED == STD_ON */
#ifdef __cplusplus
}
#endif  /*FTM_GPT_IP_C*/
/** @} */

