/*============================================================================*/
/* Project      = AUTOSAR Renesas X1x MCAL Components                         */
/* File name    = Compiler.h                                                  */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 - 2016  Renesas Electronics Corporation                  */
/*============================================================================*/
/* Purpose:                                                                   */
/* Provision for compiler macros                                              */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        X1x                                           */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  03-Aug-2015  : Initial Version
 * V1.0.1:  15-May-2016  : As part of P1x-C 4.01.00 release the following
 *                         changes were made:
 *                         1. Copyright information is updated.
 *                         2. Software patch version updated.
 *                         3. Macro 'EXECUTE_SYNCP' added.
 *                         4. Added asm functions MCU_FEINT_ENTRY and
 *                            MCU_FEINT_LEAVE.
 *                         5. Macros 'EXECUTE_SYNCI' &'EXECUTE_SYNCI' are added.
 *                         6. Macros 'LDSR' & 'STSR' are added.
 */
/******************************************************************************/

#ifndef COMPILER_H
#define COMPILER_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

#include "Compiler_Cfg.h"    /* Module specific memory and pointer */
                                  /* classes    */

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/* ##V_CFG_MANAGEMENT ##CQProject : CommonAsr_Rh850 CQComponent : Impl_CompAbstract_GreenHills */
# define COMMONASR_RH850_IMPL_COMPABSTRACT_VERSION 0x0101
# define COMMONASR_RH850_IMPL_COMPABSTRACT_RELEASE_VERSION 0x01

# define COMPILER_VENDOR_ID    30u  /* SREQ00015523 */
# define COMPILER_MODULE_ID    198u /* SREQ00015523 */

/* AUTOSAR Software Specification Document Version Information */
#   define COMPILER_AR_RELEASE_MAJOR_VERSION       (4u)
#   define COMPILER_AR_RELEASE_MINOR_VERSION       (0u)
#   define COMPILER_AR_RELEASE_REVISION_VERSION    (3u)

/* Component Version Information */
# define COMPILER_SW_MAJOR_VERSION       (1u)
# define COMPILER_SW_MINOR_VERSION       (1u)
# define COMPILER_SW_PATCH_VERSION       (1u)

# define _GREENHILLS_C_RH850_

/* AUTOMATIC used for the declaration of local pointers */
# define AUTOMATIC

/* TYPEDEF shall be used within type definitions, where no memory qualifier can be specified */
# define TYPEDEF

/* NULL_PTR define with a void pointer to zero (the usage does not lead to compile warnings about implicit casts) */
# ifndef NULL_PTR
#  define NULL_PTR ((void *)0)
# endif

/* INLINE define for abstraction of the keyword inline */
# define INLINE __inline

/* LOCAL_INLINE define for abstraction of the keyword inline for functions with static scope */
# define LOCAL_INLINE static inline

/* FUNC macro for the declaration and definition of functions
   rettype     return type of the function
   memclass    classification of the function itself
 */
# define FUNC(rettype, memclass) rettype /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* FUNC_P2CONST macro for declaration and definition of functions returning a pointer to a constant
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance 
   memclass    classification of the function itself
 */
# define FUNC_P2CONST(rettype, ptrclass, memclass) const rettype* /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* FUNC_P2VAR macro for the declaration and definition of functions returning a pointer to a variable
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance 
   memclass    classification of the function itself
 */
# define FUNC_P2VAR(rettype, ptrclass, memclass) rettype* /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* P2VAR macro for the declaration and definition of pointers in RAM, pointing to variables
   ptrtype     type of the referenced variable memory class
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define P2VAR(ptrtype, memclass, ptrclass) ptrtype* /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* P2CONST macro for the declaration and definition of pointers in RAM, pointing to constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define P2CONST(ptrtype, memclass, ptrclass) const ptrtype* /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* CONSTP2VAR macro for the declaration and definition of constant pointers accessing variables
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrtype *const /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* CONSTP2CONST macro for the declaration and definition of constant pointers accessing constants
   ptrtype     type of the referenced data
   memclass    classification of the pointer's variable itself
   ptrclass    defines the classification of the pointer's distance
 */
# define CONSTP2CONST(ptrtype, memclass, ptrclass) const ptrtype *const /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* P2FUNC macro for the type definition of pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectively name of the defined type
 */
# define P2FUNC(rettype, ptrclass, fctname) rettype (* fctname) /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* CONSTP2FUNC macro for the type definition of constant pointers to functions
   rettype     return type of the function
   ptrclass    defines the classification of the pointer's distance
   fctname     function name respectively name of the defined type
 */
# define CONSTP2FUNC(rettype, ptrclass, fctname) rettype (*const fctname) /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* CONST macro for the declaration and definition of constants
   type        type of the constant
   memclass    classification of the constant itself
 */
# define CONST(type, memclass) const type /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/* VAR macro for the declaration and definition of variables
   vartype     type of the variable
   memclass    classification of the variable itself
 */
# define VAR(vartype, memclass) vartype /* PRQA S 3410 */ /* MD_Compiler_19.10 */

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/* PRQA L:COMPILER_3453_TAG */

/**********************************************************************************************************************
 *  MISRA deviations
 *********************************************************************************************************************/
/* Justification for module-specific MISRA deviations:

MD_Compiler_19.10:
  Reason: The macro is used in a scope that does not allow brackets, e.g. declaration of functions and variables.
  Risk: Non-atomic parameters lead to compile errors.
  Prevention: Used parameters are always atomic.

*/

#endif  /* COMPILER_H */

/**********************************************************************************************************************
 *  END OF FILE: Compiler.h
 *********************************************************************************************************************/

