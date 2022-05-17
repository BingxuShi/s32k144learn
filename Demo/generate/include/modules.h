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

/** 
* @page misra_violations MISRA-C:2012 violations
*
* @section modules_h_REF_1
* Violates MISRA 2012 Advisory Rule 2.5, A project should not contain unused macro declaration.
* Macro are required to make code easier in maintainability. Some macro are required by ASR even they are not use in MCAL layer
*/

#ifndef MODULES_H
#define MODULES_H

/**
*   @file    modules.h

*   @addtogroup BASE_COMPONENT
*   @{
*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/** 
* @file        modules.h
* @brief Include Standard types & defines
*/
#include "StandardTypes.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/** 
@{
* @brief Parameters that shall be published within the modules header file.
*       The integration of incompatible files shall be avoided.
*/
/** @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro.*/
#define MODULES_VENDOR_ID                       43
/** @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro.*/
#define MODULES_MODULE_ID                       0
#define MODULES_AR_RELEASE_MAJOR_VERSION_H      4
#define MODULES_AR_RELEASE_MINOR_VERSION_H      4
/** @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro.*/
#define MODULES_AR_RELEASE_REVISION_VERSION_H   0
/** @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro.*/
#define MODULES_SW_MAJOR_VERSION_H              1
/** @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro.*/

#define MODULES_SW_MINOR_VERSION_H              0
/** @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro.*/
#define MODULES_SW_PATCH_VERSION_H              0
/**@}*/
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and StandardTypes.h header file are of the same Autosar version */
    #if ((MODULES_AR_RELEASE_MAJOR_VERSION_H != STD_AR_RELEASE_MAJOR_VERSION) || \
         (MODULES_AR_RELEASE_MINOR_VERSION_H != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of modules.h and StandardTypes.h are different"
    #endif
#endif

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/
/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/** 
* @brief This constant used for other modules to check if ADC is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
/** 
* @brief This constant used for other modules to check if ADC is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_ADC_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if CAN is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_CAN_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if CAN_43_LLCE is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_CAN_43_LLCE_MODULE      (STD_OFF)

/** 
* @brief This constant used for other modules to check if CRCU is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_CRCU_MODULE             (STD_OFF)

/** 
* @brief This constant used for other modules to check if CRYPTO is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_CRYPTO_MODULE           (STD_OFF)

/** 
* @brief This constant used for other modules to check if CSEC is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_CSEC_MODULE             (STD_OFF)

/** 
* @brief This constant used for other modules to check if DIO is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_DIO_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if EEP is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_EEP_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if ETH is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_ETH_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if FEE is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_FEE_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if FLS is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_FLS_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if FR_43_LLCE is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_FR_MODULE               (STD_OFF)

/** 
* @brief This constant used for other modules to check if CAN_43_LLCE is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_FR_43_LLCE_MODULE       (STD_OFF)

/** 
* @brief This constant used for other modules to check if GPT is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_GPT_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if I2C is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_I2C_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if ICU is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_ICU_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if LIN is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_LIN_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if LIN_43_LLCE is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_LIN_43_LLCE_MODULE      (STD_OFF)

/** 
* @brief This constant used for other modules to check if MCEM is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_MCEM_MODULE             (STD_OFF)

/** 
* @brief This constant used for other modules to check if MCL is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_MCL_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if MCU is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_MCU_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if OCU is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_OCU_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if PORT is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_PORT_MODULE             (STD_OFF)

/** 
* @brief This constant used for other modules to check if PWM is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_PWM_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if SENT is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_SENT_MODULE             (STD_OFF)

/** 
* @brief This constant used for other modules to check if SPI is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_SPI_MODULE              (STD_OFF)

/** 
* @brief This constant used for other modules to check if WDG is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_MODULE              (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 1 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE1           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 2 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE2           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 3 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE3           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 4 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE4           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 5 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE5           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 6 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE6           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 7 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE7           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 8 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE8           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 9 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE9           (STD_OFF)
/** 
* @brief This constant used for other modules to check if WDG Instance 10 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_INSTANCE10           (STD_OFF)
/** 
* @brief This constant used for other modules to check if Wdg_43_VR5510 is present in the project.  
* @violates @ref modules_h_REF_1 MISRA 2012 Advisory Rule 2.5, unused macro. 
*/
#define USE_WDG_43_VR5510_MODULE    (STD_OFF)

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* MODULES_H */

/** @} */


