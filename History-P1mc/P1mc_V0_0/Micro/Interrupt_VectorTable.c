/*============================================================================*/
/* Project      = AUTOSAR Renesas P1x MCAL Components                         */
/* Module       = Interrupt_VectorTable.c                                     */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015 Renesas Electronics Corporation                          */
/*============================================================================*/
/* Purpose:                                                                   */
/* This file defines the interrupt vector table for the MCAL Driver Component */
/*                                                                            */
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
/*              Devices:        P1x-C                                         */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:  06-Aug-2015    : Initial Version
 */
/******************************************************************************/

/*****************************************************************************/
/*                Header file inclusions                                     */
/*****************************************************************************/

#include "TargetMap.h"

/* Set the linker to place in the opportune location (Deafult=0x200)  */


/*****************************************************************************/
/*                         ISR Definition                                    */
/*****************************************************************************/

#pragma ghs interrupt
__interrupt void Dummy(void)
{
/* If any unmapped interrupt occurs the control stays here */
while(1);

}


#pragma ghs interrupt
__interrupt void Reserved(void)
{
/* Control should not come here at any case */
while(1);

}

#pragma ghs interrupt
__interrupt void INTSTM01(void)
{
/* Control should not come here at any case */
while(1);

}

/*****************************************************************************/
/*                         Interrupt Vector Table                        */
/*****************************************************************************/

#pragma ghs section sdata=".inttable"
void (*IntVectors[])(void) = {

/* 0 Mask-able interrupt from ECM */
   INTECM0MI,
/* 1 IPIR_CH1 (between PE interrupt) */
   INTIPIR0,
/* 2 IPIR_CH2 (between PE interrupt) */
   INTIPIR1,
/* 3 Interrupt from ICUMC */
   INTICUP1,
/* 4 */
   Dummy,
/* 5 */
   Dummy,
/* 6 */
   Dummy,
/* 7 */
   Dummy,
/* 8 Interval timer interrupt(75% interrupt) */
   INTWDTAx,
/* 9 Software interrupt0 */
   INTSW0,
/* 10 */
   Dummy,
/* 11 */
   Dummy,
/* 12*/
   INTSTM02,
/* 13 */
   Dummy,
/* 14 */
   Dummy,
/* 15 */
   Dummy,
/* 16 DMA transfer completion for ch0/DMA count match interrupt for ch0 */
   INTDMA0,
/* 17 DMA transfer completion for ch1/DMA count match interrupt for ch1 */
   INTDMA1,
/* 18 DMA transfer completion for ch2/DMA count match interrupt for ch2 */
   INTDMA2,
/* 19 DMA transfer completion for ch3/DMA count match interrupt for ch3 */
   INTDMA3,
/* 20 DMA transfer completion for ch4/DMA count match interrupt for ch4 */
   INTDMA4,
/* 21 DMA transfer completion for ch5/DMA count match interrupt for ch5 */
   INTDMA5,
/* 22 DMA transfer completion for ch6/DMA count match interrupt for ch6 */
   INTDMA6,
/* 23 DMA transfer completion for ch7/DMA count match interrupt for ch7 */
   INTDMA7,
/* 24 DMA transfer completion for ch8/DMA count match interrupt for ch8 */
   INTDMA8,
/* 25 DMA transfer completion for ch9/DMA count match interrupt for ch9 */
   INTDMA9,
/* 26 DMA transfer completion for ch10/DMA count match interrupt for ch10 */
   INTDMA10,
/* 27 DMA transfer completion for ch11/DMA count match interrupt for ch11 */
   INTDMA11,
/* 28 DMA transfer completion for ch12/DMA count match interrupt for ch12 */
   INTDMA12,
/* 29 DMA transfer completion for ch13/DMA count match interrupt for ch13 */
   INTDMA13,
/* 30 DMA transfer completion for ch14/DMA count match interrupt for ch14 */
   INTDMA14,
/* 31 DMA transfer completion for ch15/DMA count match interrupt for ch15 */
   INTDMA15,
/* 32 External Interrupt0 */
   INTP0,
/* 33 External Interrupt1 */
   INTP1,
/* 34 External Interrupt2 */
   INTP2,
/* 35 External Interrupt3 */
   INTP3,
/* 36 External Interrupt4 */
   INTP4,
/* 37 Temperature sensor error interrupt */
   INTOTS0OTE,
/* 38 Temperature measurement end interrupt */
   INTOTS0OTI,
/* 39 Triggered if state machine change the stage by the temperature rising
   or falling in the guaranteed temperature range */
   INTOTS0OTULI,
/* 40 */
   Dummy,
/* 41 STM interrupt 0 */
   INTSTM00,
/* 42 STM interrupt 1 */
   INTSTM01,
/* 43 */
   Dummy,
/* 44 */
   Dummy,
/* 45 */
   Dummy,
/* 46 */
   Dummy,
/* 47 */
   Dummy,
/* 48 */
   Dummy,
/* 49 */
   Dummy,
/* 50 */
   Dummy,
/* 51 */
   Dummy,
/* 52 */
   Dummy,
/* 53 TIM Shared interrupts (TIM0_IRQ0) */
   INTGTM0TIM00,
/* 54 TIM Shared interrupts (TIM0_IRQ2) */
   INTGTM0TIM02,
/* 55 */
#ifdef ICU_GTM_TIM0_CH04_ISR_API
   INTGTM0TIM04,
#else
   Dummy,
#endif
/* 56 */
#ifdef ICU_GTM_TIM0_CH06_ISR_API
   INTGTM0TIM06,
#else
   Dummy,
#endif
/* 57 */
#ifdef ICU_GTM_TIM1_CH00_ISR_API
   INTGTM0TIM10,
#else
   Dummy,
#endif
/* 58 */
#ifdef ICU_GTM_TIM1_CH02_ISR_API
   INTGTM0TIM12,
#else
   Dummy,
#endif
/* 59 */
#ifdef ICU_GTM_TIM1_CH04_ISR_API
   INTGTM0TIM14,
#else
   Dummy,
#endif
/* 60 */
#ifdef ICU_GTM_TIM1_CH06_ISR_API
   INTGTM0TIM16,
#else
   Dummy,
#endif
/* 61 MCS Interrupt for channel (MCS0_IRQ0) */
   INTGTM0MCS00,
/* 62 MCS Interrupt for channel (MCS0_IRQ2) */
   INTGTM0MCS02,
/* 63 */
   Dummy,
/* 64 */
   Dummy,
/* 65 */
   Dummy,
/* 66 */
   Dummy,
/* 67 */
   Dummy,
/* 68 */
   Dummy,
/* 69 */
#if defined (GPT_GTM_ATOM0_CH00_ISR_API)
  #if (GPT_GTM_ATOM0_CH00_ISR_API == STD_ON)
  INTGTM0ATOM00,
  #else
  #if defined (PWM_ATOM0_CH00_ISR_API)
    #if(PWM_ATOM0_CH00_ISR_API == STD_ON)
      INTGTM0ATOM00,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH00_ISR_API)
    #if(PWM_ATOM0_CH00_ISR_API == STD_ON)
     INTGTM0ATOM00,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 70 */
#if defined (GPT_GTM_ATOM0_CH02_ISR_API)
  #if (GPT_GTM_ATOM0_CH02_ISR_API == STD_ON)
  INTGTM0ATOM02,
  #else
  #if defined (PWM_ATOM0_CH02_ISR_API)
    #if(PWM_ATOM0_CH02_ISR_API == STD_ON)
      INTGTM0ATOM02,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH02_ISR_API)
    #if(PWM_ATOM0_CH02_ISR_API == STD_ON)
     INTGTM0ATOM02,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 71 */
#if defined (GPT_GTM_ATOM0_CH04_ISR_API)
  #if (GPT_GTM_ATOM0_CH04_ISR_API == STD_ON)
  INTGTM0ATOM04,
  #else
  #if defined (PWM_ATOM0_CH04_ISR_API)
    #if(PWM_ATOM0_CH04_ISR_API == STD_ON)
      INTGTM0ATOM04,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH04_ISR_API)
    #if(PWM_ATOM0_CH04_ISR_API == STD_ON)
     INTGTM0ATOM04,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 72 */
#if defined (GPT_GTM_ATOM0_CH06_ISR_API)
  #if (GPT_GTM_ATOM0_CH06_ISR_API == STD_ON)
  INTGTM0ATOM06,
  #else
  #if defined (PWM_ATOM0_CH06_ISR_API)
    #if(PWM_ATOM0_CH06_ISR_API == STD_ON)
      INTGTM0ATOM06,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH06_ISR_API)
    #if(PWM_ATOM0_CH06_ISR_API == STD_ON)
     INTGTM0ATOM06,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 73 */
#if defined (GPT_GTM_ATOM1_CH00_ISR_API)
  #if (GPT_GTM_ATOM1_CH00_ISR_API == STD_ON)
  INTGTM0ATOM10,
  #else
  #if defined (PWM_ATOM1_CH00_ISR_API)
    #if(PWM_ATOM1_CH00_ISR_API == STD_ON)
      INTGTM0ATOM10,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH00_ISR_API)
    #if(PWM_ATOM1_CH00_ISR_API == STD_ON)
     INTGTM0ATOM10,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 74 */
#if defined (GPT_GTM_ATOM1_CH02_ISR_API)
  #if (GPT_GTM_ATOM1_CH02_ISR_API == STD_ON)
  INTGTM0ATOM12,
  #else
  #if defined (PWM_ATOM1_CH02_ISR_API)
    #if(PWM_ATOM1_CH02_ISR_API == STD_ON)
      INTGTM0ATOM12,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH02_ISR_API)
    #if(PWM_ATOM1_CH02_ISR_API == STD_ON)
     INTGTM0ATOM12,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 75 */
#if defined (GPT_GTM_ATOM1_CH04_ISR_API)
  #if (GPT_GTM_ATOM1_CH04_ISR_API == STD_ON)
  INTGTM0ATOM14,
  #else
  #if defined (PWM_ATOM1_CH04_ISR_API)
    #if(PWM_ATOM1_CH04_ISR_API == STD_ON)
      INTGTM0ATOM14,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH04_ISR_API)
    #if(PWM_ATOM1_CH04_ISR_API == STD_ON)
     INTGTM0ATOM14,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 76 */
#if defined (GPT_GTM_ATOM1_CH06_ISR_API)
  #if (GPT_GTM_ATOM1_CH06_ISR_API == STD_ON)
  INTGTM0ATOM16,
  #else
  #if defined (PWM_ATOM1_CH06_ISR_API)
    #if(PWM_ATOM1_CH06_ISR_API == STD_ON)
      INTGTM0ATOM16,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH06_ISR_API)
    #if(PWM_ATOM1_CH06_ISR_API == STD_ON)
     INTGTM0ATOM16,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 77 */
#if defined (GPT_GTM_ATOM2_CH00_ISR_API)
  #if (GPT_GTM_ATOM2_CH00_ISR_API == STD_ON)
  INTGTM0ATOM20,
  #else
  #if defined (PWM_ATOM2_CH00_ISR_API)
    #if(PWM_ATOM2_CH00_ISR_API == STD_ON)
      INTGTM0ATOM20,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM2_CH00_ISR_API)
    #if(PWM_ATOM2_CH00_ISR_API == STD_ON)
     INTGTM0ATOM20,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 78 */
#if defined (GPT_GTM_ATOM2_CH02_ISR_API)
  #if (GPT_GTM_ATOM2_CH02_ISR_API == STD_ON)
  INTGTM0ATOM22,
  #else
  #if defined (PWM_ATOM2_CH02_ISR_API)
    #if(PWM_ATOM2_CH02_ISR_API == STD_ON)
      INTGTM0ATOM22,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM2_CH02_ISR_API)
    #if(PWM_ATOM2_CH02_ISR_API == STD_ON)
     INTGTM0ATOM22,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 79 */
#if defined (GPT_GTM_ATOM2_CH04_ISR_API)
  #if (GPT_GTM_ATOM2_CH04_ISR_API == STD_ON)
  INTGTM0ATOM24,
  #else
  #if defined (PWM_ATOM2_CH04_ISR_API)
    #if(PWM_ATOM2_CH04_ISR_API == STD_ON)
      INTGTM0ATOM24,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM2_CH04_ISR_API)
    #if(PWM_ATOM2_CH04_ISR_API == STD_ON)
     INTGTM0ATOM24,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif
/* 80 Error Interrupt for ADCF0 */
   INTADCF0ERR,
/* 81 Trigger group for SG0 of ADCF0 */
   INTADCF0I0,
/* 82 Trigger group for SG1 of ADCF0 */
   INTADCF0I1,
/* 83 Trigger group for SG2 of ADCF0 */
   INTADCF0I2,
/* 84 Trigger group for SG3 of ADCF0 */
   INTADCF0I3,
/* 85 Trigger group for SG4 of ADCF0 */
   INTADCF0I4,
/* 86 Transmission Interrupt Reception Error signal for CSIH0 */
   INTCSIH0TIRE,
/* 87 Transmission Interrupt Reception signal for CSIH0 */
   INTCSIH0TIR,
/* 88 Transmission Interrupt Communication signal for CSIH0 */
   INTCSIH0TIC,
/* 89 Transmission Interrupt  for JOB Completion for CSIH0 */
   INTCSIH0TIJC,
/* 90 Transmission Interrupt Reception Error signal for CSIH1 */
   INTCSIH1TIRE,
/* 91 Transmission Interrupt Reception signal for CSIH1 */
   INTCSIH1TIR,
/* 92 Transmission Interrupt Communication signal for CSIH1 */
   INTCSIH1TIC,
/* 93 Transmission Interrupt  for JOB Completion for CSIH1 */
   INTCSIH1TIJC,
/* 94 Transmission Interrupt Reception Error signal for CSIH2 */
   INTCSIH2TIRE,
/* 95 Transmission Interrupt Reception signal for CSIH2 */
   INTCSIH2TIR,
/* 96 Transmission Interrupt Communication signal for CSIH2 */
   INTCSIH2TIC,
/* 97 Transmission Interrupt  for JOB Completion for CSIH2 */
   INTCSIH2TIJC,
/* 98 Transmission Interrupt Reception Error signal for CSIH3 */
   INTCSIH3TIRE,
/* 99 Transmission Interrupt Reception signal for CSIH3 */
   INTCSIH3TIR,
/* 100 Transmission Interrupt Communication signal for CSIH3 */
   INTCSIH3TIC,
/* 101 Transmission Interrupt  for JOB Completion for CSIH3 */
   INTCSIH3TIJC,
/* 102 RLIN30 interrupt 0 status */
   INTRLIN30UR2,
/* 103 RLIN30 interrupt 0 receive */
   INTRLIN30UR1,
/* 104 RLIN30 interrupt 0  transfer */
   INTRLIN30UR0,
/* 105 RLIN31 interrupt 0 status */
   INTRLIN31UR2,
/* 106 RLIN31 interrupt 0 receive */
   INTRLIN31UR1,
/* 107 RLIN31 interrupt 0  transfer */
   INTRLIN31UR0,
/* 108 RLIN32 interrupt 0 status */
   INTRLIN32UR2,
/* 109 RLIN32 interrupt 0 receive */
   INTRLIN32UR1,
/* 110 RLIN32 interrupt 0  transfer */
   INTRLIN32UR0,
/* 111 RLIN33 interrupt 0 status */
   INTRLIN33UR2,
/* 112 RLIN33 interrupt 0 receive */
   INTRLIN33UR1,
/* 113 RLIN33 interrupt 0  transfer */
   INTRLIN33UR0,
/* 114 Reserved */
   Reserved,
/* 115 Reserved */
   Reserved,
/* 116 */
   Dummy,
/* 117 */
   Dummy,
/* 118 */
   Dummy,
/* 119 */
   Dummy,
/* 120 */
   Dummy,
/* 121 */
   Dummy,
/* 122 */
   Dummy,
/* 123 */
   Dummy,
/* 124 */
   Dummy,
/* 125 */
   Dummy,
/* 126 */
   Dummy,
/* 127 */
   Dummy,
/* 128 External Interrupt5 */
   INTP5,
/* 129 External Interrupt6 */
   INTP6,
/* 130 External Interrupt7 */
   INTP7,
/* 131 External Interrupt8 */
   INTP8,
/* 132 External Interrupt9 */
   INTP9,
/* 133 */
#ifdef ICU_EXT_INTP_CH10_ISR_API
   INTP10,
#else
   Dummy,
#endif
/* 134 */
#if defined (ICU_EXT_INTP_CH11_ISR_API) || defined (PWM_TEST_APP)
   INTP11,
#else
   Dummy,
#endif
/* 135 */
   Dummy,
/* 136 */
   Dummy,
/* 137 */
   Dummy,
/* 138 */
   Dummy,
/* 139 */
   Dummy,
/* 140 */
   Dummy,
/* 141 TIM Shared interrupts (TIM0_IRQ1) */
   INTGTM0TIM01,
/* 142 TIM Shared interrupts (TIM0_IRQ3) */
   INTGTM0TIM03,
/* 143 */
#ifdef ICU_GTM_TIM0_CH05_ISR_API
   INTGTM0TIM05,
#else
   Dummy,
#endif
/* 144 */
#ifdef ICU_GTM_TIM0_CH07_ISR_API
   INTGTM0TIM07,
#else
   Dummy,
#endif
/* 145 */
#ifdef ICU_GTM_TIM1_CH01_ISR_API
   INTGTM0TIM11,
#else
   Dummy,
#endif
/* 146 */
#ifdef ICU_GTM_TIM1_CH03_ISR_API
   INTGTM0TIM13,
#else
   Dummy,
#endif
/* 147 */
#ifdef ICU_GTM_TIM1_CH05_ISR_API
   INTGTM0TIM15,
#else
   Dummy,
#endif
/* 148 */
#ifdef ICU_GTM_TIM1_CH07_ISR_API
   INTGTM0TIM17,
#else
   Dummy,
#endif
/* 149 */
   Dummy,
/* 150 */
   Dummy,
/* 151 */
   Dummy,
/* 152 */
   Dummy,
/* 153 */
   Dummy,
/* 154 */
   Dummy,
/* 155 */
   Dummy,
/* 156 */
#if defined (GPT_GTM_ATOM0_CH01_ISR_API)
  #if (GPT_GTM_ATOM0_CH01_ISR_API == STD_ON)
  INTGTM0ATOM01,
  #else
  #if defined (PWM_ATOM0_CH01_ISR_API)
    #if(PWM_ATOM0_CH01_ISR_API == STD_ON)
      INTGTM0ATOM01,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH01_ISR_API)
    #if(PWM_ATOM0_CH01_ISR_API == STD_ON)
     INTGTM0ATOM01,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 157 */
#if defined (GPT_GTM_ATOM0_CH03_ISR_API)
  #if (GPT_GTM_ATOM0_CH03_ISR_API == STD_ON)
  INTGTM0ATOM03,
  #else
  #if defined (PWM_ATOM0_CH03_ISR_API)
    #if(PWM_ATOM0_CH03_ISR_API == STD_ON)
      INTGTM0ATOM03,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH03_ISR_API)
    #if(PWM_ATOM0_CH03_ISR_API == STD_ON)
     INTGTM0ATOM03,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 158 */
#if defined (GPT_GTM_ATOM0_CH05_ISR_API)
  #if (GPT_GTM_ATOM0_CH05_ISR_API == STD_ON)
  INTGTM0ATOM05,
  #else
  #if defined (PWM_ATOM0_CH05_ISR_API)
    #if(PWM_ATOM0_CH05_ISR_API == STD_ON)
      INTGTM0ATOM05,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH05_ISR_API)
    #if(PWM_ATOM0_CH05_ISR_API == STD_ON)
     INTGTM0ATOM05,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 159 */
#if defined (GPT_GTM_ATOM0_CH07_ISR_API)
  #if (GPT_GTM_ATOM0_CH07_ISR_API == STD_ON)
  INTGTM0ATOM07,
  #else
  #if defined (PWM_ATOM0_CH07_ISR_API)
    #if(PWM_ATOM0_CH07_ISR_API == STD_ON)
      INTGTM0ATOM07,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM0_CH07_ISR_API)
    #if(PWM_ATOM0_CH07_ISR_API == STD_ON)
     INTGTM0ATOM07,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 160 */
#if defined (GPT_GTM_ATOM1_CH01_ISR_API)
  #if (GPT_GTM_ATOM1_CH01_ISR_API == STD_ON)
  INTGTM0ATOM11,
  #else
  #if defined (PWM_ATOM1_CH01_ISR_API)
    #if(PWM_ATOM1_CH01_ISR_API == STD_ON)
      INTGTM0ATOM11,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH01_ISR_API)
    #if(PWM_ATOM1_CH01_ISR_API == STD_ON)
     INTGTM0ATOM11,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 161 */
#if defined (GPT_GTM_ATOM1_CH03_ISR_API)
  #if (GPT_GTM_ATOM1_CH03_ISR_API == STD_ON)
  INTGTM0ATOM13,
  #else
  #if defined (PWM_ATOM1_CH03_ISR_API)
    #if(PWM_ATOM1_CH03_ISR_API == STD_ON)
      INTGTM0ATOM13,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH03_ISR_API)
    #if(PWM_ATOM1_CH03_ISR_API == STD_ON)
     INTGTM0ATOM13,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 162 */
#if defined (GPT_GTM_ATOM1_CH05_ISR_API)
  #if (GPT_GTM_ATOM1_CH05_ISR_API == STD_ON)
  INTGTM0ATOM15,
  #else
  #if defined (PWM_ATOM1_CH05_ISR_API)
    #if(PWM_ATOM1_CH05_ISR_API == STD_ON)
      INTGTM0ATOM15,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH05_ISR_API)
    #if(PWM_ATOM1_CH05_ISR_API == STD_ON)
     INTGTM0ATOM15,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 163 */
#if defined (GPT_GTM_ATOM1_CH07_ISR_API)
  #if (GPT_GTM_ATOM1_CH07_ISR_API == STD_ON)
  INTGTM0ATOM17,
  #else
  #if defined (PWM_ATOM1_CH07_ISR_API)
    #if(PWM_ATOM1_CH07_ISR_API == STD_ON)
      INTGTM0ATOM17,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM1_CH07_ISR_API)
    #if(PWM_ATOM1_CH07_ISR_API == STD_ON)
     INTGTM0ATOM17,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 164 */
#if defined (GPT_GTM_ATOM2_CH01_ISR_API)
  #if (GPT_GTM_ATOM2_CH01_ISR_API == STD_ON)
  INTGTM0ATOM21,
  #else
  #if defined (PWM_ATOM2_CH01_ISR_API)
    #if(PWM_ATOM2_CH01_ISR_API == STD_ON)
      INTGTM0ATOM21,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM2_CH01_ISR_API)
    #if(PWM_ATOM2_CH01_ISR_API == STD_ON)
     INTGTM0ATOM21,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif

/* 165 */
#if defined (GPT_GTM_ATOM2_CH03_ISR_API)
  #if (GPT_GTM_ATOM2_CH03_ISR_API == STD_ON)
  INTGTM0ATOM23,
  #else
  #if defined (PWM_ATOM2_CH03_ISR_API)
    #if(PWM_ATOM2_CH03_ISR_API == STD_ON)
      INTGTM0ATOM23,
    #else
       Dummy,
    #endif
  #else
    Dummy,
  #endif
 #endif
#else
  #if defined (PWM_ATOM2_CH03_ISR_API)
    #if(PWM_ATOM2_CH03_ISR_API == STD_ON)
     INTGTM0ATOM23,
    #else
      Dummy,
    #endif
   #else
     Dummy,
  #endif
#endif
/* 166 Error Interrupt for ADCF1 */
   INTADCF1ERR,
/* 167 Trigger group for SG0 of ADCF1 */
   INTADCF1I0,
/* 168 Trigger group for SG1 of ADCF1 */
   INTADCF1I1,
/* 169 Trigger group for SG2 of ADCF1 */
   INTADCF1I2,
/* 170 Trigger group for SG3 of ADCF1 */
   INTADCF1I3,
/* 171 Trigger group for SG4 of ADCF1 */
   INTADCF1I4,
/* 172 */
   Dummy,
/* 173 */
   Dummy,
/* 174 Filter event for MTTCAN0 */
   INTMTTCANFE,
/* 175 */
   Dummy,
/* 176 */
   Dummy,
/* 177 Filter event for MCAN0 */
   INTMCAN0FE,
/* 178 */
   Dummy,
/* 179 */
   Dummy,
/* 180 */
   Dummy,
/* 181 */
   Dummy,
/* 182 */
   Dummy,
 /* 183 */
   Dummy,
/* 184 Ethernet interrupt for ETNA0 port 0 */
   INTETNA0,
/* 185 Ethernet interrupt for ETNA0 port 1 */
   INTETNA1,
/* 186 Universal interrupt chA for FLXA0 */
   INTFLX0LINE0,
/* 187 Universal interrupt chB for FLXA0 */
   INTFLX0LINE1,
/* 188 Timer 0 interrupt for FLXA0 */
   INTFLX0TIM0,
/* 189 */
   Dummy,
/* 190 Timer 2 interrupt for FLXA0 */
   INTFLX0TIM2,
/* 191 */
   Dummy,
/* 192 */
   Dummy,
/* 193 */
   Dummy,
/* 194 */
   Dummy,
/* 195 */
   Dummy,
/* 196 */
   Dummy,
/* 197 Universal interrupt chA for FLXA1 */
   INTFLX1LINE0,
/* 198 Universal interrupt chB for FLXA1 */
   INTFLX1LINE1,
/* 199 Timer 0 interrupt for FLXA1 */
   INTFLX1TIM0,
/* 200 */
   Dummy,
/* 201 Timer 2 interrupt for FLXA1 */
   INTFLX1TIM2,
/* 202 */
   Dummy,
/* 203 */
   Dummy,
/* 204 */
   Dummy,
/* 205 */
   Dummy,
/* 206 */
   Dummy,
/* 207 */
   Dummy,
/* 208 */
   Dummy,
/* 209 Receive interrupt for RSENT0 */
   INTSENT0RI,
/* 210 */
   Dummy,
/* 211 Receive interrupt for RSENT1 */
   INTSENT1RI,
/* 212 */
   Dummy,
/* 213 */
   Dummy,
/* 214 */
   Dummy,
/* 215 */
   Dummy,
/* 216 */
   Dummy,
/* 217 */
   Dummy,
/* 218 */
   Dummy,
/* 219 */
   Dummy,
/* 220 */
   Dummy,
/* 221 */
   Dummy,
/* 222 */
   Dummy,
/* 223 */
   Dummy,
/* 224 */
   Dummy,
/* 225 */
   Dummy,
/* 226 */
   Dummy,
/* 227 */
   Dummy,
/* 228 DTS transmission complete interrupt for ch0 - 31 */
   INTDTSTC0,
/* 229 DTS transmission complete interrupt for ch32 - 63 */
   INTDTSTC1,
/* 230 DTS transmission complete interrupt for ch64 - 95 */
   INTDTSTC2,
/* 231 DTS transmission complete interrupt for ch96 - 127 */
   INTDTSTC3,
/* 232 DTS count match interrupt for ch0 - 31 */
   INTDTSCM0,
/* 233 DTS count match interrupt for ch32 - 63 */
   INTDTSCM1,
/* 234 DTS count match interrupt for ch64 - 95 */
   INTDTSCM2,
/* 235 DTS count match interrupt for ch96 - 127 */
   INTDTSCM3,
/* 236 */
   Dummy,
/* 237 FENTRYC bit update interrupt for FICUIF_0 */
   INTFICUIF0CFRQPE,
/* 238 FENTRYD bit update interrupt for FICUIF_0 */
   INTFICUIF0DFRQPE,
/* 239 FENTRYC bit update interrupt for FICUIF_1 */
   INTFICUIF1CFRQP,
/* 240 Edge detect of RLIN3 0 received data */
   INTDNFA2WUF0,
/* 241 Edge detect of RLIN3 1 received data */
   INTDNFA2WUF1,
/* 242 Edge detect of MTTCAN0 received data */
   INTDNFA3WUF0,
/* 243 Edge detect of MCAN0 received data */
   INTDNFA3WUF1,
/* 244 Edge detect of FlexRay 0 ch A received data */
   INTDNFA4WUF0,
/* 245 Edge detect of FlexRay 1 ch A received data */
   INTDNFA4WUF1,
/* 246 Reserved */
   Reserved,
/* 247 Reserved */
   Reserved,
/* 248 Reserved */
   Reserved,
/* 249 Reserved */
   Reserved,
/* 250 Reserved */
   Reserved,
/* 251 Reserved */
   Reserved,
/* 252 Reserved */
   Reserved,
/* 253 Reserved */
   Reserved,
/* 254 Reserved */
   Reserved,
/* 255 Reserved */
   Reserved
};
#pragma ghs section sdata


/******************************************************************************
**                          End of File                                      **
*******************************************************************************/
