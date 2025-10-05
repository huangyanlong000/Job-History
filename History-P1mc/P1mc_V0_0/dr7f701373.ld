/*===========================================================================*/
/* Module       = dr7f701373.ld                                              */
/* Version      = V1.21                                                      */
/*                extracted from device file dr7f701373.dvf                  */
/*                by DeFiXRH850 0.9.1.0                                      */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2017 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:     Template of linker directive file                            */
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
/*              Device:         R7F701373xABG                                */
/*              IDE:            GHS Multi for V800  V6.xx or later           */
/*===========================================================================*/

CONSTANTS
{
  zero_start = 0xffff8000
}

MEMORY
 {
  iROM_0         : ORIGIN = 0x00000000,  LENGTH = 2048k
  iRAM_0         : ORIGIN = 0xFEBE0000,  LENGTH = 128k
  gRAM_0         : ORIGIN = 0xFEED8000,  LENGTH = 320k
 }

SECTIONS
 {

/* Start of internal ROM area (iROM_0) */

  .intvect  ALIGN(0x200)   :>iROM_0   /* start of interrupt vector */
  .inttable MIN_SIZE(0x480)             :>.

  .inttable_end                         :>.

  .rozdata                              :>.      /* constant datas in ZDA area */
  .robase   align(4)                    :>.      /* initialize textpointer TP for SDA addressing */
  .rosdata  align(4)                    :>.      /* constant datas in SDA area */
  .ICU_CFG_DATA_UNSPECIFIED             :> .
  .DIO_CFG_DATA_UNSPECIFIED             :> .
  .FLS_CFG_DATA_UNSPECIFIED             :> .
  .ICU_CFG_DBTOC_UNSPECIFIED            :> .
  .GPT_CFG_DBTOC_UNSPECIFIED            :>.
  .GPT_CFG_DATA_UNSPECIFIED             :>.
  .rodata   align(4)                    :>.      /* constant datas in normal area */

  .text     align(4)                    :>.      /* program code area */

  #define OS_LINK_CALLOUT_CODE
  #define OS_LINK_INTVEC_CODE
  #define OS_LINK_CONST
  #define OS_LINK_CODE

  #define OS_LINK_CALLOUT_CODE
  #define OS_LINK_EXCVEC_CODE
  #define OS_LINK_INTVEC_CODE
  #define OS_LINK_CONST

  .CONST_ROM_1BIT      align(4)         : > .
  .CONST_ROM_8BIT      align(4)         : > .
  .CONST_ROM_16BIT     align(4)         : > .
  .CONST_ROM_32BIT     align(4)         : > .
  .CONST_ROM_UNSPECIFIED                : > .
  .PORT_CFG_DATA_UNSPECIFIED            : > .
  .ICU_PUBLIC_CODE_ROM             :> .
  .ICU_PRIVATE_CODE_ROM             :> .
  .ICU_APPL_CODE_ROM             :> .
  .ICU_FAST_CODE_ROM             :> .
  .DEFAULT_CODE_ROM                     : > .
  .pe1text  align(4)             :>.      /* program code area */
  .SPI_PUBLIC_CODE_ROM           align(4)       :>.
  .SPI_PRIVATE_CODE_ROM          align(4)       :>.
  .SPI_APPL_CODE_ROM             align(4)       :>.
  .SPI_FAST_CODE_ROM              align(4)      :>.
  .SPI_CFG_DBTOC_UNSPECIFIED      align(4)      :>.
  .SPI_CFG_DATA_8BIT              align(4)              :>.
  .SPI_CFG_DATA_16BIT             align(4)      :>.
  .SPI_CFG_DATA_UNSPECIFIED       align(4)      :>.
  .ADC_APPL_CODE_ROM             :>.
  .FLS_PUBLIC_CODE_ROM           :>.
  .FLS_PRIVATE_CODE_ROM          :>.
  .PWM_PUBLIC_CODE_ROM           :>.
  .PWM_PRIVATE_CODE_ROM          :>.
  .PWM_APPL_CODE_ROM             :>.
  .PWM_FAST_CODE_ROM             :>.
  .GPT_PUBLIC_CODE_ROM                      :>.
  .GPT_PRIVATE_CODE_ROM                     :>.
  .GPT_APPL_CODE_ROM                        :>.
  .GPT_FAST_CODE_ROM                        :>.
  .ADC_PUBLIC_CODE_ROM                  :>.
  .ADC_PRIVATE_CODE_ROM                 :>.
  .ADC_FAST_CODE_ROM                    :>.
  .MCU_PRIVATE_CODE_ROM                 :>.
  .MCU_PUBLIC_CODE_ROM                  :>.
  .MCU_FAST_CODE_ROM                    :>.
  .PORT_PUBLIC_CODE_ROM                 :>.
  .PORT_PRIVATE_CODE_ROM                :>.
  .DIO_PUBLIC_CODE_ROM                 :>.
  .DIO_PRIVATE_CODE_ROM                :>.

  .fixaddr  align(4)                    :>.      /* ghs internal (compiler) */
  .fixtype  align(4)                    :>.      /* ghs internal (compiler) */
  .secinfo  align(4)                    :>.      /* ghs internal (runtime library) */
  .syscall  align(4)                    :>.      /* ghs internal (linker) */

  .romdata  ROM(.data)                  :>.      /* constant data to initialize variables (copied to RAM at startup)*/
  .romzdata ROM(.zdata)                 :>.      /* constant data to initialize variables in ZDA area (copied to RAM at startup)*/
  .romsdata ROM(.sdata)                 :>.      /* constant data to initialize variables in SDA area (copied to RAM at startup)*/
  .romtdata ROM(.tdata)                 :>.      /* constant data to initialize variables in TDA area (copied to RAM at startup)*/
  .romsldata ROM(.sldata)               :>.      /* constant data to initialize variables in LSDA area (copied to GRAM at startup)*/
  
  .ROM.SPI_DMA_DATA ROM(.SPI_DMA_DATA) :>.
  .ROM.J3_DATA ROM(.J3_DATA) :>.
  .ROM.RAM_1BIT ROM(.RAM_1BIT) :>.
  .ROM.RAM_UNSPECIFIED ROM(.RAM_UNSPECIFIED) :>.
  .ROM.RAM_8BIT ROM(.RAM_8BIT)          : > .
  .ROM.RAM_16BIT ROM(.RAM_16BIT)          : > .
  .ROM.RAM_32BIT ROM(.RAM_32BIT)          : > .
  .ADC_CFG_DATA_UNSPECIFIED             : > .
  
  __top_of_iROM_0 = MEMENDADDR(iROM_0);

/* Start of internal RAM area (iRAM) */
  .SPI_DMA_DATA                   : >iRAM_0

#define OS_LINK_VAR_KERNEL
#define OS_LINK_KERNEL_BARRIERS
#define OS_LINK_KERNEL_CORESTATUS
#define OS_LINK_VAR_GLOBALSHARED
#define OS_LINK_VAR_APP_OSAPPLICATION_NONTRUSTED_CORE0
#define OS_LINK_VAR_APP_OSAPPLICATION_TRUSTED_CORE0
#define OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
#define OS_LINK_VAR_KERNEL
#define OS_LINK_VAR_TASK
#define OS_LINK_VAR_ISR
#define OS_LINK_KERNEL_BARRIERS
#define OS_LINK_KERNEL_TRACE
#define OS_LINK_KERNEL_CORESTATUS

 #define OS_LINK_KERNEL_STACKS
  
  .stack     align(4) pad(0x0800)       :>.         /* definition of stack size */
  .heapbase  align(4)                   :>.
  .heap      align(4)
  	        pad(endaddr(iRAM_0)-addr(.heapbase))
  	        NOCLEAR	                    :>.         /* definition of heap size */ 
  __top_of_iRAM_0 = MEMENDADDR( iRAM_0);

/* Start of internal global RAM area (gRAM_0) */

  .slsync   min_size(4)                 :>gRAM_0    /* user defined segment for semaphore data located in global RAM */

  .data                                 :>.    /* initialized data */
  .bss       align(4)                   :>.         /* zero initialized data*/

  .sda_start align(4)                   :>.         /* initialize globalpointer GP for SDA addressing */
  .sdata     align(4)                   :>.         /* initialized data in SDA area*/
  .sbss      align(4)                   :>.         /* zero initialized data in SDA area*/

  .RAM_1BIT                   : > .
  .RAM_8BIT                   : > .
  .RAM_16BIT                  : > .
  .RAM_32BIT                  : > .
  .RAM_UNSPECIFIED            : > .
  .FAST_RAM_1BIT              : > .
  .FAST_RAM_8BIT              : > .
  .FAST_RAM_16BIT             : > .
  .FAST_RAM_32BIT             : > .
  .FAST_RAM_UNSPECIFIED       : > .
  .NOINIT_RAM_1BIT            : > .
  .NOINIT_RAM_8BIT            : > .
  .NOINIT_RAM_16BIT           : > .
  .NOINIT_RAM_32BIT           : > .
  .NOINIT_RAM_UNSPECIFIED     : > .
  .GPT_CFG_RAM_UNSPECIFIED    : > .
  .ICU_CFG_RAM_UNSPECIFIED    : > .
  .ADC_CFG_RAM_UNSPECIFIED    : > .

  .sda_end   align(4)                   :>.         /* end of SDA addressing */
  .zdata     align(4)                   :>.         /* initialized data in ZDA area*/
  .zbss      align(4)                   :>.         /* zero initialized data in ZDA area*/
  .tdata     align(4) MAX_SIZE(0x0100)  :>.         /* initialized and zero-initialized data in TDA area */
  

  .J3_DATA                              :>.
  .J3_BSS                               :>.
  .sldata   align(4)                    :>.         /* user defined segment for initialized data located in global RAM */
  .slbss    align(4)                    :>.         /* user defined segment for initialized data located in global RAM */
  __top_of_gRAM_0 = MEMENDADDR(gRAM_0);

/*  Symbols for compiler references */

  ___ghs_romstart   = MEMADDR(iROM_0);
  ___ghs_romend     = MEMENDADDR(iROM_0);

  ___ghs_ramstart   = MEMADDR(iRAM_0);
  ___ghs_ramend     = MEMENDADDR(iRAM_0);

  ___ghs_gramstart0 = MEMADDR(gRAM_0);
  ___ghs_gramend0   = MEMENDADDR(gRAM_0);

 }

/*===========================================================================*/
/*      End of File                                                          */
/*===========================================================================*/
