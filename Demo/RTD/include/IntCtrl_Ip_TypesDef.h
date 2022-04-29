/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
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

#ifndef INTCTRL_IP_TYPESDEF_H_
#define INTCTRL_IP_TYPESDEF_H_

/**
*   @file
*
*   @addtogroup IntCtrl_Ip
*   @{
*/

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "IntCtrl_Ip_CfgDefines.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID                    43
#define PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION                   1
#define PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION                   0
#define PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION                   0
/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
/* Check if current file and IntCtrl_Ip_CfgDefines header file are of the same vendor */
#if (PLATFORM_INTCTRL_IP_TYPESDEF_TYPES_VENDOR_ID != PLATFORM_INTCTRL_IP_CFG_DEFINES_VENDOR_ID)
    #error "IIntCtrl_Ip_TypesDef.h and IntCtrl_Ip_CfgDefines.h have different vendor ids"
#endif

/* Check if current file and Fls header file are of the same Software version */
#if ((PLATFORM_INTCTRL_IP_TYPESDEF_SW_MAJOR_VERSION != PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_TYPESDEF_SW_MINOR_VERSION != PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (PLATFORM_INTCTRL_IP_TYPESDEF_SW_PATCH_VERSION != PLATFORM_INTCTRL_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of IntCtrl_Ip_TypesDef.h and IntCtrl_Ip_CfgDefines.h are different"
#endif

/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/
/**
* @brief          Interrupt handler type.
* @implements     IntCtrl_Ip_IrqHandlerType_typedef
*/
typedef void (*IntCtrl_Ip_IrqHandlerType)(void);

/**
* @brief          Structure storing the routing and handler configuration for an interrupt request.
* @implements     IntCtrl_Ip_IrqRouteConfigType_typedef
*/
typedef struct
{
    /** @brief Interrupt number */
    IRQn_Type eIrqNumber;
    /** @brief Target cores for the interrupt */
    uint8 u8TargetCores;
    /** @brief Interrupt handler */
    IntCtrl_Ip_IrqHandlerType pfHandler;
}IntCtrl_Ip_IrqRouteConfigType;

/**
* @brief          Structure storing the list of routing configurations for all configured interrupts.
* @implements     IntCtrl_Ip_GlobalRouteConfigType_typedef
*/
typedef struct
{
    /** @brief Number of configured interrupts */
    uint32 u32ConfigIrqCount;
    /** @brief List of interrupts configurations */
    const IntCtrl_Ip_IrqRouteConfigType *aIrqConfig;
}IntCtrl_Ip_GlobalRouteConfigType;

/**
* @brief          Structure storing the state and priority configuration for an interrupt request.
* @implements     IntCtrl_Ip_IrqConfigType_typedef
*/
typedef struct
{
    /** @brief Interrupt number */
    IRQn_Type eIrqNumber;
    /** @brief Interrupt state (enabled/disabled) */
    boolean bIrqEnabled;
    /** @brief Interrupt priority */
    uint8 u8IrqPriority;
}IntCtrl_Ip_IrqConfigType;

/**
* @brief          Structure storing the list of state configurations for all configured interrupts.
* @implements     IntCtrl_Ip_CtrlConfigType_typedef
*/
typedef struct
{
    /** @brief Number of configured interrupts */
    uint32 u32ConfigIrqCount;
    /** @brief List of interrupts configurations */
    const IntCtrl_Ip_IrqConfigType *aIrqConfig;
}IntCtrl_Ip_CtrlConfigType;

/**
* @brief          Enumeration listing the possible error codes returned by IntCtrl_Ip API.
* @implements     IntCtrl_Ip_StatusType_typedef
*/
typedef enum
{
    /** @brief Status SUCCESS */
    INTCTRL_IP_STATUS_SUCCESS = 0U,
    /** @brief Status ERROR */
    INTCTRL_IP_STATUS_ERROR   = 1U
}IntCtrl_Ip_StatusType;

#if (INT_CTRL_IP_CORTEXR == STD_ON)
/**
* @brief          Enumeration listing the edge and level type by IntCtrl_Ip API.
* @implements     IntCtrl_Ip_TriggerType_typedef
*/
typedef enum
{
    /** @brief EDGE_TRIGGER */
    INTCTRL_IP_EDGE_TRIGGER = 0U,
    /** @brief LEVEL_TRIGGER */
    INTCTRL_IP_LEVEL_TRIGGER   = 1U
}IntCtrl_Ip_TriggerType;

/**
* @brief          Enumeration listing the interrupt routing mode type by IntCtrl_Ip API.
* @implements     IntCtrl_Ip_Routing_ModeType_typedef
*/
typedef enum
{
    /** @brief EDGE_TRIGGER */
    INTCTRL_IP_ROUTING_MODE0 = 0U,
    /** @brief LEVEL_TRIGGER */
    INTCTRL_IP_ROUTING_MODE1   = 1U
}IntCtrl_Ip_Routing_ModeType;
#endif

#if (INT_CTRL_IP_MSI_AVAILABLE == STD_ON)
/**
* @brief          Enumeration listing the available target cores for an inter-core interrupt.
* @implements     IntCtrl_Ip_IrqTargetType_typedef
*/
typedef enum
{
    /** @brief Interrupt request targeted to the same core that triggers it */
    INTCTRL_IP_TARGET_SELF       = -2,
    /** @brief Interrupt request targeted to all the other cores */
    INTCTRL_IP_TARGET_OTHERS     = -1,
    /** @brief Interrupt request targeted to core 0 */
    INTCTRL_IP_TARGET_CP0        =  0,
    /** @brief Interrupt request targeted to core 1 */
    INTCTRL_IP_TARGET_CP1        =  1,
    #if (INTCTRL_IP_MSI_CORE_CNT > 2)
    /** @brief Interrupt request targeted to core 2 */
    INTCTRL_IP_TARGET_CP2        =  2,
    #endif
    #if (INTCTRL_IP_MSI_CORE_CNT > 3)
    /** @brief Interrupt request targeted to core 3 */
    INTCTRL_IP_TARGET_CP3        =  3,
    #endif
    #if (INTCTRL_IP_MSI_CORE_CNT > 4)
    /** @brief Interrupt request targeted to core 4 */
    INTCTRL_IP_TARGET_CP4        =  4,
    #endif
    #if (INTCTRL_IP_MSI_CORE_CNT > 5)
    /** @brief Interrupt request targeted to core 5 */
    INTCTRL_IP_TARGET_CP5        =  5,
    #endif
    #if (INTCTRL_IP_MSI_CORE_CNT > 6)
    /** @brief Interrupt request targeted to core 6 */
    INTCTRL_IP_TARGET_CP6        =  6
    #endif
} IntCtrl_Ip_IrqTargetType;
#endif /* (INT_CTRL_IP_MSI_AVAILABLE == STD_ON) */

#endif /* INTCTRL_IP_TYPESDEF_H_ */


/** @} */
