/*===========================================================================*/
/* Project      = AUTOSAR Renesas P1x-C MCAL Components                      */
/* Module       = App_MCU_Device_Sample.h                                    */
/* $Revision: 818712 $                                                       */
/* $Date: 2021-07-09 13:51:54 +0900 (Fri, 09 Jul 2021) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright(c) 2015-2021 Renesas Electronics Corporation                    */
/*===========================================================================*/
/* Purpose:                                                                  */
/* Header file information for sample application.                           */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Unless otherwise agreed upon in writing between your company and          */
/* Renesas Electronics Corporation the following shall apply!                */
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* There is no warranty of any kind whatsoever granted by Renesas. Any       */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed*/
/* or implied, including but not limited to those for non-infringement of    */
/* intellectual property, merchantability and/or fitness for the particular  */
/* purpose.                                                                  */
/*                                                                           */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Devices:        P1x-C                                        */
/*===========================================================================*/

/******************************************************************************
**                      Revision Control History                             **
******************************************************************************/
/*
 * V1.0.0:  14-Aug-2015 : Initial Version.
 * V1.0.1:  09-Apr-2020 : As part of ARDAAAF-2485, the following changes are
 *                        made:
 *                        a) Copyright information updated.
 *                        b) Added functions Det_Error_Check and
 *                           Dem_Error_Check.
 * V1.0.2:  09-Jul-2021 : As part of ARDAAAF-4636, the following changes are
 *                        made:
 *                        a) Added the macro EIC0 in section Global Symbols.
 *                        b) Updated the copyright information.
 */
/*****************************************************************************/

#ifndef APP_MCU_DEVICE_SAMPLE_H
#define APP_MCU_DEVICE_SAMPLE_H

/******************************************************************************
**                      Include Section                                      **
******************************************************************************/
#include "dr7f701373.dvf.h"
/******************************************************************************
**                      Version Information                                 **
******************************************************************************/
/* AUTOSAR specification version information */

/* File version information */

/******************************************************************************
**                      Global Symbols                                       **
******************************************************************************/
/*Register Definitions for configuring ports (P3) in Alternate mode(Alt3)
 * for External Clock output 0.*/
#define APPL_PMCSR2           *((volatile uint32 *)0xFFC100A4UL)

#define APPL_PMSR2           *((volatile uint32 *)0xFFC100A0UL)

#define APPL_PFC2            *((volatile uint16 *)0xFFC10098UL)

#define APPL_PFCE2           *((volatile uint16 *)0xFFC1009CUL)

#define APPL_PMCSR0          *((volatile uint32 *)0xFFC10024UL)

#define APPL_PMSR0           *((volatile uint32 *)0xFFC10020UL)

#define APPL_PFC0            *((volatile uint16 *)0xFFC10018UL)

#define APPL_PFCE0           *((volatile uint16 *)0xFFC1001CUL)

#define SAFETY_MECH_INIT_ERROR       0x00000010

#define LOCKSTEP_NMI_ERROR           0x00000002

#define APPL_BSEQ0CTL                *((volatile uint8 *)0xFFF80200)

#define EIC0                  *((volatile uint16 *)0xFFFEEA00U)

/******************************************************************************
**                      Global Data Types                                    **
******************************************************************************/

/******************************************************************************
**                      Global Function Prototypes                           **
******************************************************************************/
void Port_Init(void);
void Wdg_Init(void);
/* Function to get the global DET error count */
uint8 Det_Error_Check(void);
/* Function to get the global DEM error count */
uint8 Dem_Error_Check(void);
#endif /* APP_MCU_DEVICE_SAMPLE_H */
/******************************************************************************
**                      End of File                                          **
******************************************************************************/
