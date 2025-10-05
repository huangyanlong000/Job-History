/*===========================================================================*/
/* Device     : RH/RH850G3M/R7F701370AEEBG                                    */
/* File Name  : TargetMap.h                                                  */
/* $Revision: 205136 $                                                       */
/* $Date: 2015-08-14 15:56:24 +0900 (Fri, 14 Aug 2015) $                     */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2015 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:      Definition of ISR routines                                  */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* Because the Product(s) is licensed free of charge, there is no warranty   */
/* of any kind whatsoever and expressly disclaimed and excluded by Renesas,  */
/* either expressed or implied, including but not limited to those for       */
/* non-infringement of intellectual property, merchantability and/or         */
/* fitness for the particular purpose.                                       */
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
/*              Device:         RH850 core devices                           */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/
/******************************************************************************
**                      Revision Control History                             **
******************************************************************************/
/*
 * V1.0.0:  14-Aug-2015 : Initial Version.
 */
/*****************************************************************************/
#ifndef TARGETMAP_H
#define TARGETMAP_H

// #include "Mcu_Irq.h"
#include "App_MCU_Device_Sample.h"

/* 0 Mask-able interrupt from ECM */
#define INTECM0MI Dummy
/* 1 IPIR_CH1 (between PE interrupt) */
#define INTIPIR0 Dummy
/* 2 IPIR_CH2 (between PE interrupt) */
#define INTIPIR1 Dummy
/* 3 Interrupt from ICUMC */
#define INTICUP1 Dummy
/* 4 Reserved */

/* 5 Reserved*/

/* 6 Reserved */

/* 7 Reserved */

/* 8 Interval timer interrupt(75% interrupt) */
#define INTWDTAx Dummy
/* 9 Software interrupt0 */
#define INTSW0 Dummy
/* 10 Reserved */

/* 11 Reserved */

/* 12 Reserved */
#define INTSTM02 Dummy

/* 13 Reserved */

/* 14 Reserved */

/* 15 Reserved */

/* 16 DMA transfer completion for ch0/DMA count match interrupt for ch0 */
#define INTDMA0 Dummy
/* 17 DMA transfer completion for ch1/DMA count match interrupt for ch1 */
#define INTDMA1 Dummy
/* 18 DMA transfer completion for ch2/DMA count match interrupt for ch2 */
#define INTDMA2 Dummy
/* 19 DMA transfer completion for ch3/DMA count match interrupt for ch3 */
#define INTDMA3 Dummy
/* 20 DMA transfer completion for ch4/DMA count match interrupt for ch4 */
#define INTDMA4 Dummy
/* 21 DMA transfer completion for ch5/DMA count match interrupt for ch5 */
#define INTDMA5 Dummy
/* 22 DMA transfer completion for ch6/DMA count match interrupt for ch6 */
#define INTDMA6 Dummy
/* 23 DMA transfer completion for ch7/DMA count match interrupt for ch7 */
#define INTDMA7 Dummy
/* 24 DMA transfer completion for ch8/DMA count match interrupt for ch8 */
#define INTDMA8 Dummy
/* 25 DMA transfer completion for ch9/DMA count match interrupt for ch9 */
#define INTDMA9 Dummy
/* 26 DMA transfer completion for ch10/DMA count match interrupt for ch10 */
#define INTDMA10 Dummy
/* 27 DMA transfer completion for ch11/DMA count match interrupt for ch11 */
#define INTDMA11 Dummy
/* 28 DMA transfer completion for ch12/DMA count match interrupt for ch12 */
#define INTDMA12 Dummy
/* 29 DMA transfer completion for ch13/DMA count match interrupt for ch13 */
#define INTDMA13 Dummy
/* 30 DMA transfer completion for ch14/DMA count match interrupt for ch14 */
#define INTDMA14 Dummy
/* 31 DMA transfer completion for ch15/DMA count match interrupt for ch15 */
#define INTDMA15 Dummy

/* 32 External Interrupt0  */
#define INTP0 Dummy
/* 33 External Interrupt1  */
#define INTP1 Dummy
/* 34 External Interrupt2  */
#define INTP2 Dummy
/* 35 External Interrupt3  */
#define INTP3 Dummy
/* 36 External Interrupt4  */
#define INTP4 Dummy
/* 37 Temperature sensor error interrupt */
#define INTOTS0OTE Dummy
/* 38 Temperature measurement end interrupt */
#define INTOTS0OTI Dummy
/* 39 Triggered if state machine change the stage by the temperature rising
   or falling in the guaranteed temperature range */
#define INTOTS0OTULI Dummy

/* 40 Reserved */

/* 41 STM interrupt 0 */
#define INTSTM00 Dummy
/* 42 STM interrupt 1 */
// #define INTSTM01 Dummy
/* 43 Reserved */

/* 44 Reserved */

/* 45 Reserved */

/* 46 Reserved */

/* 47 Reserved */

/* 48 Reserved */

/* 49 Reserved */

/* 50 Reserved */

/* 51 Reserved */

/* 52 Reserved */

/* 53 TIM Shared interrupts (TIM0_IRQ0)  */
#define INTGTM0TIM00 Dummy
/* 54 TIM Shared interrupts (TIM0_IRQ2)  */
#define INTGTM0TIM02 Dummy
/* 55 Reserved */

/* 56 Reserved */

/* 57 Reserved */

/* 58 Reserved */

/* 59 Reserved */

/* 60 Reserved */

/* 61 MCS Interrupt for channel (MCS0_IRQ0) */
#define INTGTM0MCS00 Dummy
/* 62 MCS Interrupt for channel (MCS0_IRQ2) */
#define INTGTM0MCS02 Dummy
/* 63 Reserved */

/* 64 Reserved */

/* 65 Reserved */

/* 66 Reserved */

/* 67 Reserved */

/* 68 Reserved */

/* 69 Reserved */

/* 70 Reserved */

/* 71 Reserved */

/* 72 Reserved */

/* 73 Reserved */

/* 74 Reserved */

/* 75 Reserved */

/* 76 Reserved */

/* 77 Reserved */

/* 78 Reserved */

/* 79 Reserved */

/* 80 Error Interrupt for ADCF0 */
#define INTADCF0ERR  Dummy

/* 81 Trigger group for SG0 of ADCF0 */
#define INTADCF0I0  Dummy

/* 82 Trigger group for SG1 of ADCF0 */
#define INTADCF0I1  Dummy

/* 83 Trigger group for SG2 of ADCF0 */
#define INTADCF0I2  Dummy

/* 84 Trigger group for SG3 of ADCF0 */
#define INTADCF0I3  Dummy

/* 85 Trigger group for SG4 of ADCF0 */
#define INTADCF0I4  Dummy

/* 86 Transmission Interrupt Reception Error signal for CSIH0 */
#define INTCSIH0TIRE Dummy

/* 87 Transmission Interrupt Reception signal for CSIH0 */
#define INTCSIH0TIR Dummy

/* 88 Transmission Interrupt Communication signal for CSIH0 */
#define INTCSIH0TIC Dummy

/* 89 Transmission Interrupt  for JOB Completion for CSIH0 */
#define INTCSIH0TIJC Dummy

/* 90 Transmission Interrupt Reception Error signal for CSIH1 */
#define INTCSIH1TIRE Dummy

/* 91 Transmission Interrupt Reception signal for CSIH1 */
#define INTCSIH1TIR Dummy

/* 92 Transmission Interrupt Communication signal for CSIH1 */
#define INTCSIH1TIC Dummy

/* 93 Transmission Interrupt  for JOB Completion for CSIH1 */
#define INTCSIH1TIJC Dummy

/* 94 Transmission Interrupt Reception Error signal for CSIH2 */
#define INTCSIH2TIRE Dummy

/* 95 Transmission Interrupt Reception signal for CSIH2 */
#define INTCSIH2TIR Dummy

/* 96 Transmission Interrupt Communication signal for CSIH2 */
#define INTCSIH2TIC Dummy

/* 97 Transmission Interrupt  for JOB Completion for CSIH2 */
#define INTCSIH2TIJC Dummy

/* 98 Transmission Interrupt Reception Error signal for CSIH3 */
#define INTCSIH3TIRE Dummy

/* 99 Transmission Interrupt Reception signal for CSIH3 */
#define INTCSIH3TIR Dummy

/* 100 Transmission Interrupt Communication signal for CSIH3 */
#define INTCSIH3TIC Dummy

/* 101 Transmission Interrupt  for JOB Completion for CSIH3 */
#define INTCSIH3TIJC Dummy

/* 102 RLIN30 interrupt 0 status */
#define INTRLIN30UR2 Dummy

/* 103 RLIN30 interrupt 0 receive */
#define INTRLIN30UR1 Dummy

/* 104 RLIN30 interrupt 0  transfer */
#define INTRLIN30UR0 Dummy

/* 105 RLIN31 interrupt 0 status */
#define INTRLIN31UR2 Dummy

/* 106 RLIN31 interrupt 0 receive */
#define INTRLIN31UR1 Dummy

/* 107 RLIN31 interrupt 0  transfer */
#define INTRLIN31UR0 Dummy

/* 108 RLIN32 interrupt 0 status */
#define INTRLIN32UR2 Dummy

/* 109 RLIN32 interrupt 0 receive */
#define INTRLIN32UR1 Dummy

/* 110 RLIN32 interrupt 0  transfer */
#define INTRLIN32UR0 Dummy

/* 111 RLIN33 interrupt 0 status */
#define INTRLIN33UR2 Dummy

/* 112 RLIN33 interrupt 0 receive */
#define INTRLIN33UR1 Dummy

/* 113 RLIN33 interrupt 0  transfer */
#define INTRLIN33UR0 Dummy

/* 114 Reserved */

/* 115 Reserved */

/* 116 Reserved */

/* 117 Reserved */

/* 118 Reserved */

/* 119 Reserved */

/* 120 Reserved */

/* 121 Reserved */

/* 122 Reserved */

/* 123 Reserved */

/* 124 Reserved */

/* 125 Reserved */

/* 126 Reserved */

/* 127 Reserved */

/* 128 External Interrupt5  */
#define INTP5 Dummy
/* 129 External Interrupt6  */
#define INTP6 Dummy
/* 130 External Interrupt7  */
#define INTP7 Dummy
/* 131 External Interrupt8  */
#define INTP8 Dummy
/* 132 External Interrupt9  */
#define INTP9 Dummy
/* 133 Reserved */

/* 134 Reserved */

/* 135 Reserved */

/* 136 Reserved */

/* 137 Reserved */

/* 138 Reserved */

/* 139 Reserved */

/* 140 Reserved */

/* 141 TIM Shared interrupts (TIM0_IRQ1) */
#define INTGTM0TIM01 Dummy
/* 142 TIM Shared interrupts (TIM0_IRQ3) */
#define INTGTM0TIM03 Dummy
/* 143 Reserved */

/* 144 Reserved */

/* 145 Reserved */

/* 146 Reserved */

/* 147 Reserved */

/* 148 Reserved */

/* 149 Reserved */

/* 150 Reserved */

/* 151 Reserved */

/* 152 Reserved */

/* 153 Reserved */

/* 154 Reserved */

/* 155 Reserved */

/* 156 Reserved */

/* 157 Reserved */

/* 158 Reserved */

/* 159 Reserved */

/* 160 Reserved */

/* 161 Reserved */

/* 162 Reserved */

/* 163 Reserved */

/* 164 Reserved */

/* 165 Reserved */

/* 166 Error Interrupt for ADCF1 */
#define INTADCF1ERR Dummy

/* 167 Trigger group for SG0 of ADCF1 */
#define INTADCF1I0  Dummy

/* 168 Trigger group for SG1 of ADCF1 */
#define INTADCF1I1  Dummy

/* 169 Trigger group for SG2 of ADCF1 */
#define INTADCF1I2  Dummy

/* 170 Trigger group for SG3 of ADCF1 */
#define INTADCF1I3  Dummy

/* 171 Trigger group for SG4 of ADCF1 */
#define INTADCF1I4  Dummy

/* 172 Reserved */

/* 173 Reserved */

/* 174 Filter event for MTTCAN0 */
#define INTMTTCANFE  Dummy
/* 175 Reserved */

/* 176 Reserved */

/* 177 Filter event for MCAN0 */
#define INTMCAN0FE  Dummy
/* 178 Reserved */

/* 179 Reserved */

/* 180 Reserved */

/* 181 Reserved */

/* 182 Reserved */

/* 183 Reserved */

/* 184 Ethernet interrupt for ETNA0 port 0 */
#define INTETNA0 Dummy

/* 185 Ethernet interrupt for ETNA0 port 1 */
#define INTETNA1 Dummy

/* 186 Universal interrupt chA for FLXA0 */
#define INTFLX0LINE0 Dummy

/* 187 Universal interrupt chB for FLXA0 */
#define INTFLX0LINE1 Dummy

/* 188 Timer 0 interrupt for FLXA0 */
#define INTFLX0TIM0 Dummy

/* 189 Reserved */

/* 190 Timer 2 interrupt for FLXA0 */
#define INTFLX0TIM2 Dummy

/* 191 Reserved */

/* 192 Reserved */

/* 193 Reserved */

/* 194 Reserved */

/* 195 Reserved */

/* 196 Reserved */

/* 197 Universal interrupt chA for FLXA1 */
#define INTFLX1LINE0 Dummy

/* 198 Universal interrupt chB for FLXA1 */
#define INTFLX1LINE1 Dummy

/* 199 Timer 0 interrupt for FLXA1 */
#define INTFLX1TIM0 Dummy

/* 200 Reserved */

/* 201 Timer 2 interrupt for FLXA1 */
#define INTFLX1TIM2 Dummy

/* 202 Reserved */

/* 203 Reserved */

/* 204 Reserved */

/* 205 Reserved */

/* 206 Reserved */

/* 207 Reserved */

/* 208 Reserved */

/* 209 Receive interrupt for RSENT0 */
#define INTSENT0RI Dummy
/* 210 Reserved */

/* 211 Receive interrupt for RSENT1 */
#define INTSENT1RI Dummy
/* 212 Reserved */

/* 213 Reserved */

/* 214 Reserved */

/* 215 Reserved */

/* 216 Reserved */

/* 217 Reserved */

/* 218 Reserved */

/* 219 Reserved */

/* 220 Reserved */

/* 221 Reserved */

/* 222 Reserved */

/* 223 Reserved */

/* 224 Reserved */

/* 225 Reserved */

/* 226 Reserved */

/* 227 Reserved */

/* 228 DTS transmission complete interrupt for ch0 - 31 */
#define INTDTSTC0 Dummy
/* 229 DTS transmission complete interrupt for ch32 - 63 */
#define INTDTSTC1 Dummy
/* 230 DTS transmission complete interrupt for ch64 - 95 */
#define INTDTSTC2 Dummy
/* 231 DTS transmission complete interrupt for ch96 - 127 */
#define INTDTSTC3 Dummy
/* 232 DTS count match interrupt for ch0 - 31 */
#define INTDTSCM0 Dummy
/* 233 DTS count match interrupt for ch32 - 63 */
#define INTDTSCM1 Dummy
/* 234 DTS count match interrupt for ch64 - 95 */
#define INTDTSCM2 Dummy
/* 235 DTS count match interrupt for ch96 - 127 */
#define INTDTSCM3 Dummy

/* 236 Reserved */

/* 237 FENTRYC bit update interrupt for FICUIF_0 */
#define INTFICUIF0CFRQPE Dummy
/* 238 FENTRYD bit update interrupt for FICUIF_0 */
#define INTFICUIF0DFRQPE Dummy
/* 239 FENTRYC bit update interrupt for FICUIF_1 */
#define INTFICUIF1CFRQP Dummy

/* 240 Edge detect of RLIN3 0 received data */
#define INTDNFA2WUF0 Dummy
/* 241 Edge detect of RLIN3 1 received data */
#define INTDNFA2WUF1 Dummy
/* 242 Edge detect of MTTCAN0 received data */
#define INTDNFA3WUF0 Dummy
/* 243 Edge detect of MCAN0 received data */
#define INTDNFA3WUF1 Dummy
/* 244 Edge detect of FlexRay 0 ch A received data */
#define INTDNFA4WUF0 Dummy
/* 245 Edge detect of FlexRay 1 ch A received data */
#define INTDNFA4WUF1 Dummy
/* 246 Reserved */

/* 247 Reserved */

/* 248 Reserved */

/* 249 Reserved */

/* 250 Reserved */

/* 251 Reserved */

/* 252 Reserved */

/* 253 Reserved */

/* 254 Reserved */

/* 255 Reserved */

#endif/* TARGETMAP_H */
/* End of File */
