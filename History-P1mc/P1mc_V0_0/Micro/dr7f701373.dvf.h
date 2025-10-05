/******************************************************************************/
/* DISCLAIMER                                                                 */
/* This software is supplied by Renesas Electronics Corporation and is only   */
/* intended for use with Renesas products. No other uses are authorized.This  */
/* software is owned by Renesas Electronics Corporation and is protected      */
/* under all applicable laws, including copyright laws.                       */
/* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES          */
/* REGARDING THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING  */
/* BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR */
/* PURPOSE AND NON-INFRINGEMENT.  ALL SUCH WARRANTIES ARE EXPRESSLY           */
/* DISCLAIMED.                                                                */
/* TO THE MAXIMUM EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS     */
/* ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES SHALL BE       */
/* LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL      */
/* DAMAGES FOR ANY REASON RELATED TO THIS SOFTWARE, EVEN IF RENESAS OR ITS    */
/* AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.           */
/* Renesas reserves the right, without notice, to make changes to this        */
/* software and to discontinue the availability of this software.             */
/* By using this software, you agree to the additional terms and conditions   */
/* found by accessing the following link:                                     */
/* http://www.renesas.com/disclaimer                                          */
/*                                                                            */
/* Device     : RH/RH850G3M/R7F701373xABG                                     */
/* File Name  : dr7f701373.dvf.h                                              */
/* Abstract   : Definition of I/O Register                                    */
/* History    : V1.30  [Device File version]                                  */
/* Options    : -ghs_pragma_io=off -anonymous=off -indent=4 -structure=on -ty */
/*              pedef=on -def=on -autosar=on -modulearray=on -const=off -bitf */
/*              ield=on -bitsfr=on -df=.\dr7f701373.dvf -o=..\output\update\i */
/*              nc_ansiplus\dr7f701373.dvf.h                                  */
/* Date       : 25.09.2018                                                    */
/* Version    : E1.09.00.07  [df2iodef.exe version]                           */
/* This is a typical example.                                                 */
/*                                                                            */
/******************************************************************************/
#ifndef __R7F701373xABGIODEFINE_HEADER__
#define __R7F701373xABGIODEFINE_HEADER__

#ifndef _IODEF_AUTOSAR_TYPEDEF_
#define _IODEF_AUTOSAR_TYPEDEF_
typedef unsigned char   uint8;
typedef unsigned short  uint16;
typedef unsigned long   uint32;
#endif

typedef struct
{
    uint8 bit00:1;
    uint8 bit01:1;
    uint8 bit02:1;
    uint8 bit03:1;
    uint8 bit04:1;
    uint8 bit05:1;
    uint8 bit06:1;
    uint8 bit07:1;
} __bitf_T;

#define  L 0
#define  H 1
#define LL 0
#define LH 1
#define HL 2
#define HH 3

typedef struct 
{                                                          /* Bit Access       */
    uint8  PRS0:1;                                         /* PRS0             */
    uint8  PRS1:1;                                         /* PRS1             */
    uint8  PRS2:1;                                         /* PRS2             */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  NFSTS0:1;                                       /* NFSTS0           */
    uint8  NFSTS1:1;                                       /* NFSTS1           */
    uint8  :1;                                             /* Reserved Bits    */
} __type0;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  :6;                                             /* Reserved Bits    */
} __type1;
typedef struct 
{                                                          /* Bit Access       */
    uint8  NFENL0:1;                                       /* NFENL0           */
    uint8  NFENL1:1;                                       /* NFENL1           */
    uint8  NFENL2:1;                                       /* NFENL2           */
    uint8  NFENL3:1;                                       /* NFENL3           */
    uint8  NFENL4:1;                                       /* NFENL4           */
    uint8  NFENL5:1;                                       /* NFENL5           */
    uint8  NFENL6:1;                                       /* NFENL6           */
    uint8  NFENL7:1;                                       /* NFENL7           */
} __type2;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR0:1;                                        /* INTR0            */
    uint8  INTF0:1;                                        /* INTF0            */
    uint8  INTL0:1;                                        /* INTL0            */
    uint8  :5;                                             /* Reserved Bits    */
} __type3;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR1:1;                                        /* INTR1            */
    uint8  INTF1:1;                                        /* INTF1            */
    uint8  INTL1:1;                                        /* INTL1            */
    uint8  :5;                                             /* Reserved Bits    */
} __type4;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR2:1;                                        /* INTR2            */
    uint8  INTF2:1;                                        /* INTF2            */
    uint8  INTL2:1;                                        /* INTL2            */
    uint8  :5;                                             /* Reserved Bits    */
} __type5;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR3:1;                                        /* INTR3            */
    uint8  INTF3:1;                                        /* INTF3            */
    uint8  INTL3:1;                                        /* INTL3            */
    uint8  :5;                                             /* Reserved Bits    */
} __type6;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR4:1;                                        /* INTR4            */
    uint8  INTF4:1;                                        /* INTF4            */
    uint8  INTL4:1;                                        /* INTL4            */
    uint8  :5;                                             /* Reserved Bits    */
} __type7;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR5:1;                                        /* INTR5            */
    uint8  INTF5:1;                                        /* INTF5            */
    uint8  INTL5:1;                                        /* INTL5            */
    uint8  :5;                                             /* Reserved Bits    */
} __type8;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR6:1;                                        /* INTR6            */
    uint8  INTF6:1;                                        /* INTF6            */
    uint8  INTL6:1;                                        /* INTL6            */
    uint8  :5;                                             /* Reserved Bits    */
} __type9;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR7:1;                                        /* INTR7            */
    uint8  INTF7:1;                                        /* INTF7            */
    uint8  INTL7:1;                                        /* INTL7            */
    uint8  :5;                                             /* Reserved Bits    */
} __type10;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR0:1;                                        /* INTR0            */
    uint8  INTF0:1;                                        /* INTF0            */
    uint8  :6;                                             /* Reserved Bits    */
} __type11;
typedef struct 
{                                                          /* Bit Access       */
    uint8  INTR1:1;                                        /* INTR1            */
    uint8  INTF1:1;                                        /* INTF1            */
    uint8  :6;                                             /* Reserved Bits    */
} __type12;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS0:1;                                        /* BYPS0            */
} __type13;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS1:1;                                        /* BYPS1            */
} __type14;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS2:1;                                        /* BYPS2            */
} __type15;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS3:1;                                        /* BYPS3            */
} __type16;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS4:1;                                        /* BYPS4            */
} __type17;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS5:1;                                        /* BYPS5            */
} __type18;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS6:1;                                        /* BYPS6            */
} __type19;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :7;                                             /* Reserved Bits    */
    uint8  BYPS7:1;                                        /* BYPS7            */
} __type20;
typedef struct 
{                                                          /* Bit Access       */
    uint8  MBS:1;                                          /* MBS              */
    uint8  JOBE:1;                                         /* JOBE             */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  RXE:1;                                          /* RXE              */
    uint8  TXE:1;                                          /* TXE              */
    uint8  PWR:1;                                          /* PWR              */
} __type21;
typedef struct 
{                                                          /* Bit Access       */
    uint8  E:1;                                            /* E                */
    uint8  IRE:1;                                          /* IRE              */
    uint8  :6;                                             /* Reserved Bits    */
} __type22;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  X0:1;                                           /* X0               */
    uint8  :1;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  X1:1;                                           /* X1               */
    uint8  :1;                                             /* Reserved Bits    */
} __type23;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  X0:1;                                           /* X0               */
    uint8  :3;                                             /* Reserved Bits    */
    uint8  X1:1;                                           /* X1               */
    uint8  :1;                                             /* Reserved Bits    */
} __type24;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  :2;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  :2;                                             /* Reserved Bits    */
} __type25;
typedef struct 
{                                                          /* Bit Access       */
    uint8  :4;                                             /* Reserved Bits    */
    uint8  R1:1;                                           /* R1               */
    uint8  W1:1;                                           /* W1               */
    uint8  :2;                                             /* Reserved Bits    */
} __type26;
typedef struct 
{                                                          /* Bit Access       */
    uint8  R0:1;                                           /* R0               */
    uint8  W0:1;                                           /* W0               */
    uint8  :6;                                             /* Reserved Bits    */
} __type27;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
} __type28;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type0 BIT;                                           /* Bit Access       */
} __type29;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type1 BIT;                                           /* Bit Access       */
} __type30;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type2 BIT;                                           /* Bit Access       */
} __type31;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type3 BIT;                                           /* Bit Access       */
} __type32;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type4 BIT;                                           /* Bit Access       */
} __type33;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type5 BIT;                                           /* Bit Access       */
} __type34;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type6 BIT;                                           /* Bit Access       */
} __type35;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type7 BIT;                                           /* Bit Access       */
} __type36;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type8 BIT;                                           /* Bit Access       */
} __type37;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type9 BIT;                                           /* Bit Access       */
} __type38;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type10 BIT;                                          /* Bit Access       */
} __type39;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type11 BIT;                                          /* Bit Access       */
} __type40;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type12 BIT;                                          /* Bit Access       */
} __type41;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type13 BIT;                                          /* Bit Access       */
} __type42;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type14 BIT;                                          /* Bit Access       */
} __type43;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type15 BIT;                                          /* Bit Access       */
} __type44;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type16 BIT;                                          /* Bit Access       */
} __type45;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type17 BIT;                                          /* Bit Access       */
} __type46;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type18 BIT;                                          /* Bit Access       */
} __type47;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type19 BIT;                                          /* Bit Access       */
} __type48;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type20 BIT;                                          /* Bit Access       */
} __type49;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type21 BIT;                                          /* Bit Access       */
} __type50;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /*  8-bit Access    */
        } LBRP0;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /*  8-bit Access    */
        } LBRP1;
    } REGS8;
} __type51;
typedef union
{                                                          /* IOR              */
    uint16 UINT16;                                         /* 16-bit Access    */
    uint8  UINT8[2];                                       /* 8-bit Access     */
} __type52;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } FBTPL;
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } FBTPH;
    } REGS16;
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPLL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPLH;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPHL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } FBTPHH;
    } REGS8;
} __type53;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
    struct 
    {
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } NBTPL;
        union
        {                                                  /* IOR              */
            uint16 UINT16;                                 /* 16-bit Access    */
        } NBTPH;
    } REGS16;
    struct 
    {
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPLL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPLH;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPHL;
        union
        {                                                  /* IOR              */
            uint8  UINT8;                                  /* 8-bit Access     */
        } NBTPHH;
    } REGS8;
} __type54;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint8  UINT8[4];                                       /* 8-bit Access     */
} __type55;
typedef union
{                                                          /* IOR              */
    uint32 UINT32;                                         /* 32-bit Access    */
    uint16 UINT16[2];                                      /* 16-bit Access    */
} __type56;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type22 BIT;                                          /* Bit Access       */
} __type57;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type23 BIT;                                          /* Bit Access       */
} __type58;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type24 BIT;                                          /* Bit Access       */
} __type59;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type25 BIT;                                          /* Bit Access       */
} __type60;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type26 BIT;                                          /* Bit Access       */
} __type61;
typedef union
{                                                          /* IOR              */
    uint8  UINT8;                                          /* 8-bit Access     */
    __type27 BIT;                                          /* Bit Access       */
} __type62;

typedef struct 
{                                                          /* Module           */
    uint32 FRPV;                                           /* FRPV             */
    __type28 FROC;                                         /* FROC             */
    uint8  dummy0[4];                                      /* Reserved         */
    __type28 FROS;                                         /* FROS             */
    __type28 FRTEST1;                                      /* FRTEST1          */
    __type28 FRTEST2;                                      /* FRTEST2          */
    uint8  dummy1[4];                                      /* Reserved         */
    __type28 FRLCK;                                        /* FRLCK            */
    __type28 FREIR;                                        /* FREIR            */
    __type28 FRSIR;                                        /* FRSIR            */
    __type28 FREILS;                                       /* FREILS           */
    __type28 FRSILS;                                       /* FRSILS           */
    __type28 FREIES;                                       /* FREIES           */
    __type28 FREIER;                                       /* FREIER           */
    __type28 FRSIES;                                       /* FRSIES           */
    __type28 FRSIER;                                       /* FRSIER           */
    __type28 FRILE;                                        /* FRILE            */
    __type28 FRT0C;                                        /* FRT0C            */
    __type28 FRT1C;                                        /* FRT1C            */
    __type28 FRSTPW1;                                      /* FRSTPW1          */
    __type28 FRSTPW2;                                      /* FRSTPW2          */
    uint8  dummy2[44];                                     /* Reserved         */
    __type28 FRSUCC1;                                      /* FRSUCC1          */
    __type28 FRSUCC2;                                      /* FRSUCC2          */
    __type28 FRSUCC3;                                      /* FRSUCC3          */
    __type28 FRNEMC;                                       /* FRNEMC           */
    __type28 FRPRTC1;                                      /* FRPRTC1          */
    __type28 FRPRTC2;                                      /* FRPRTC2          */
    __type28 FRMHDC;                                       /* FRMHDC           */
    uint8  dummy3[4];                                      /* Reserved         */
    __type28 FRGTUC1;                                      /* FRGTUC1          */
    __type28 FRGTUC2;                                      /* FRGTUC2          */
    __type28 FRGTUC3;                                      /* FRGTUC3          */
    __type28 FRGTUC4;                                      /* FRGTUC4          */
    __type28 FRGTUC5;                                      /* FRGTUC5          */
    __type28 FRGTUC6;                                      /* FRGTUC6          */
    __type28 FRGTUC7;                                      /* FRGTUC7          */
    __type28 FRGTUC8;                                      /* FRGTUC8          */
    __type28 FRGTUC9;                                      /* FRGTUC9          */
    __type28 FRGTUC10;                                     /* FRGTUC10         */
    __type28 FRGTUC11;                                     /* FRGTUC11         */
    uint8  dummy4[52];                                     /* Reserved         */
    __type28 FRCCSV;                                       /* FRCCSV           */
    __type28 FRCCEV;                                       /* FRCCEV           */
    uint8  dummy5[8];                                      /* Reserved         */
    __type28 FRSCV;                                        /* FRSCV            */
    __type28 FRMTCCV;                                      /* FRMTCCV          */
    __type28 FRRCV;                                        /* FRRCV            */
    __type28 FROCV;                                        /* FROCV            */
    __type28 FRSFS;                                        /* FRSFS            */
    __type28 FRSWNIT;                                      /* FRSWNIT          */
    __type28 FRACS;                                        /* FRACS            */
    uint8  dummy6[4];                                      /* Reserved         */
    __type28 FRESID1;                                      /* FRESID1          */
    __type28 FRESID2;                                      /* FRESID2          */
    __type28 FRESID3;                                      /* FRESID3          */
    __type28 FRESID4;                                      /* FRESID4          */
    __type28 FRESID5;                                      /* FRESID5          */
    __type28 FRESID6;                                      /* FRESID6          */
    __type28 FRESID7;                                      /* FRESID7          */
    __type28 FRESID8;                                      /* FRESID8          */
    __type28 FRESID9;                                      /* FRESID9          */
    __type28 FRESID10;                                     /* FRESID10         */
    __type28 FRESID11;                                     /* FRESID11         */
    __type28 FRESID12;                                     /* FRESID12         */
    __type28 FRESID13;                                     /* FRESID13         */
    __type28 FRESID14;                                     /* FRESID14         */
    __type28 FRESID15;                                     /* FRESID15         */
    uint8  dummy7[4];                                      /* Reserved         */
    __type28 FROSID1;                                      /* FROSID1          */
    __type28 FROSID2;                                      /* FROSID2          */
    __type28 FROSID3;                                      /* FROSID3          */
    __type28 FROSID4;                                      /* FROSID4          */
    __type28 FROSID5;                                      /* FROSID5          */
    __type28 FROSID6;                                      /* FROSID6          */
    __type28 FROSID7;                                      /* FROSID7          */
    __type28 FROSID8;                                      /* FROSID8          */
    __type28 FROSID9;                                      /* FROSID9          */
    __type28 FROSID10;                                     /* FROSID10         */
    __type28 FROSID11;                                     /* FROSID11         */
    __type28 FROSID12;                                     /* FROSID12         */
    __type28 FROSID13;                                     /* FROSID13         */
    __type28 FROSID14;                                     /* FROSID14         */
    __type28 FROSID15;                                     /* FROSID15         */
    uint8  dummy8[4];                                      /* Reserved         */
    __type28 FRNMV1;                                       /* FRNMV1           */
    __type28 FRNMV2;                                       /* FRNMV2           */
    __type28 FRNMV3;                                       /* FRNMV3           */
    uint8  dummy9[324];                                    /* Reserved         */
    __type28 FRMRC;                                        /* FRMRC            */
    __type28 FRFRF;                                        /* FRFRF            */
    __type28 FRFRFM;                                       /* FRFRFM           */
    __type28 FRFCL;                                        /* FRFCL            */
    __type28 FRMHDS;                                       /* FRMHDS           */
    __type28 FRLDTS;                                       /* FRLDTS           */
    __type28 FRFSR;                                        /* FRFSR            */
    __type28 FRMHDF;                                       /* FRMHDF           */
    __type28 FRTXRQ1;                                      /* FRTXRQ1          */
    __type28 FRTXRQ2;                                      /* FRTXRQ2          */
    __type28 FRTXRQ3;                                      /* FRTXRQ3          */
    __type28 FRTXRQ4;                                      /* FRTXRQ4          */
    __type28 FRNDAT1;                                      /* FRNDAT1          */
    __type28 FRNDAT2;                                      /* FRNDAT2          */
    __type28 FRNDAT3;                                      /* FRNDAT3          */
    __type28 FRNDAT4;                                      /* FRNDAT4          */
    __type28 FRMBSC1;                                      /* FRMBSC1          */
    __type28 FRMBSC2;                                      /* FRMBSC2          */
    __type28 FRMBSC3;                                      /* FRMBSC3          */
    __type28 FRMBSC4;                                      /* FRMBSC4          */
    uint8  dummy10[176];                                   /* Reserved         */
    __type28 FRWRDS1;                                      /* FRWRDS1          */
    __type28 FRWRDS2;                                      /* FRWRDS2          */
    __type28 FRWRDS3;                                      /* FRWRDS3          */
    __type28 FRWRDS4;                                      /* FRWRDS4          */
    __type28 FRWRDS5;                                      /* FRWRDS5          */
    __type28 FRWRDS6;                                      /* FRWRDS6          */
    __type28 FRWRDS7;                                      /* FRWRDS7          */
    __type28 FRWRDS8;                                      /* FRWRDS8          */
    __type28 FRWRDS9;                                      /* FRWRDS9          */
    __type28 FRWRDS10;                                     /* FRWRDS10         */
    __type28 FRWRDS11;                                     /* FRWRDS11         */
    __type28 FRWRDS12;                                     /* FRWRDS12         */
    __type28 FRWRDS13;                                     /* FRWRDS13         */
    __type28 FRWRDS14;                                     /* FRWRDS14         */
    __type28 FRWRDS15;                                     /* FRWRDS15         */
    __type28 FRWRDS16;                                     /* FRWRDS16         */
    __type28 FRWRDS17;                                     /* FRWRDS17         */
    __type28 FRWRDS18;                                     /* FRWRDS18         */
    __type28 FRWRDS19;                                     /* FRWRDS19         */
    __type28 FRWRDS20;                                     /* FRWRDS20         */
    __type28 FRWRDS21;                                     /* FRWRDS21         */
    __type28 FRWRDS22;                                     /* FRWRDS22         */
    __type28 FRWRDS23;                                     /* FRWRDS23         */
    __type28 FRWRDS24;                                     /* FRWRDS24         */
    __type28 FRWRDS25;                                     /* FRWRDS25         */
    __type28 FRWRDS26;                                     /* FRWRDS26         */
    __type28 FRWRDS27;                                     /* FRWRDS27         */
    __type28 FRWRDS28;                                     /* FRWRDS28         */
    __type28 FRWRDS29;                                     /* FRWRDS29         */
    __type28 FRWRDS30;                                     /* FRWRDS30         */
    __type28 FRWRDS31;                                     /* FRWRDS31         */
    __type28 FRWRDS32;                                     /* FRWRDS32         */
    __type28 FRWRDS33;                                     /* FRWRDS33         */
    __type28 FRWRDS34;                                     /* FRWRDS34         */
    __type28 FRWRDS35;                                     /* FRWRDS35         */
    __type28 FRWRDS36;                                     /* FRWRDS36         */
    __type28 FRWRDS37;                                     /* FRWRDS37         */
    __type28 FRWRDS38;                                     /* FRWRDS38         */
    __type28 FRWRDS39;                                     /* FRWRDS39         */
    __type28 FRWRDS40;                                     /* FRWRDS40         */
    __type28 FRWRDS41;                                     /* FRWRDS41         */
    __type28 FRWRDS42;                                     /* FRWRDS42         */
    __type28 FRWRDS43;                                     /* FRWRDS43         */
    __type28 FRWRDS44;                                     /* FRWRDS44         */
    __type28 FRWRDS45;                                     /* FRWRDS45         */
    __type28 FRWRDS46;                                     /* FRWRDS46         */
    __type28 FRWRDS47;                                     /* FRWRDS47         */
    __type28 FRWRDS48;                                     /* FRWRDS48         */
    __type28 FRWRDS49;                                     /* FRWRDS49         */
    __type28 FRWRDS50;                                     /* FRWRDS50         */
    __type28 FRWRDS51;                                     /* FRWRDS51         */
    __type28 FRWRDS52;                                     /* FRWRDS52         */
    __type28 FRWRDS53;                                     /* FRWRDS53         */
    __type28 FRWRDS54;                                     /* FRWRDS54         */
    __type28 FRWRDS55;                                     /* FRWRDS55         */
    __type28 FRWRDS56;                                     /* FRWRDS56         */
    __type28 FRWRDS57;                                     /* FRWRDS57         */
    __type28 FRWRDS58;                                     /* FRWRDS58         */
    __type28 FRWRDS59;                                     /* FRWRDS59         */
    __type28 FRWRDS60;                                     /* FRWRDS60         */
    __type28 FRWRDS61;                                     /* FRWRDS61         */
    __type28 FRWRDS62;                                     /* FRWRDS62         */
    __type28 FRWRDS63;                                     /* FRWRDS63         */
    __type28 FRWRDS64;                                     /* FRWRDS64         */
    __type28 FRWRHS1;                                      /* FRWRHS1          */
    __type28 FRWRHS2;                                      /* FRWRHS2          */
    __type28 FRWRHS3;                                      /* FRWRHS3          */
    uint8  dummy11[4];                                     /* Reserved         */
    __type28 FRIBCM;                                       /* FRIBCM           */
    __type28 FRIBCR;                                       /* FRIBCR           */
    uint8  dummy12[232];                                   /* Reserved         */
    __type28 FRRDDS1;                                      /* FRRDDS1          */
    __type28 FRRDDS2;                                      /* FRRDDS2          */
    __type28 FRRDDS3;                                      /* FRRDDS3          */
    __type28 FRRDDS4;                                      /* FRRDDS4          */
    __type28 FRRDDS5;                                      /* FRRDDS5          */
    __type28 FRRDDS6;                                      /* FRRDDS6          */
    __type28 FRRDDS7;                                      /* FRRDDS7          */
    __type28 FRRDDS8;                                      /* FRRDDS8          */
    __type28 FRRDDS9;                                      /* FRRDDS9          */
    __type28 FRRDDS10;                                     /* FRRDDS10         */
    __type28 FRRDDS11;                                     /* FRRDDS11         */
    __type28 FRRDDS12;                                     /* FRRDDS12         */
    __type28 FRRDDS13;                                     /* FRRDDS13         */
    __type28 FRRDDS14;                                     /* FRRDDS14         */
    __type28 FRRDDS15;                                     /* FRRDDS15         */
    __type28 FRRDDS16;                                     /* FRRDDS16         */
    __type28 FRRDDS17;                                     /* FRRDDS17         */
    __type28 FRRDDS18;                                     /* FRRDDS18         */
    __type28 FRRDDS19;                                     /* FRRDDS19         */
    __type28 FRRDDS20;                                     /* FRRDDS20         */
    __type28 FRRDDS21;                                     /* FRRDDS21         */
    __type28 FRRDDS22;                                     /* FRRDDS22         */
    __type28 FRRDDS23;                                     /* FRRDDS23         */
    __type28 FRRDDS24;                                     /* FRRDDS24         */
    __type28 FRRDDS25;                                     /* FRRDDS25         */
    __type28 FRRDDS26;                                     /* FRRDDS26         */
    __type28 FRRDDS27;                                     /* FRRDDS27         */
    __type28 FRRDDS28;                                     /* FRRDDS28         */
    __type28 FRRDDS29;                                     /* FRRDDS29         */
    __type28 FRRDDS30;                                     /* FRRDDS30         */
    __type28 FRRDDS31;                                     /* FRRDDS31         */
    __type28 FRRDDS32;                                     /* FRRDDS32         */
    __type28 FRRDDS33;                                     /* FRRDDS33         */
    __type28 FRRDDS34;                                     /* FRRDDS34         */
    __type28 FRRDDS35;                                     /* FRRDDS35         */
    __type28 FRRDDS36;                                     /* FRRDDS36         */
    __type28 FRRDDS37;                                     /* FRRDDS37         */
    __type28 FRRDDS38;                                     /* FRRDDS38         */
    __type28 FRRDDS39;                                     /* FRRDDS39         */
    __type28 FRRDDS40;                                     /* FRRDDS40         */
    __type28 FRRDDS41;                                     /* FRRDDS41         */
    __type28 FRRDDS42;                                     /* FRRDDS42         */
    __type28 FRRDDS43;                                     /* FRRDDS43         */
    __type28 FRRDDS44;                                     /* FRRDDS44         */
    __type28 FRRDDS45;                                     /* FRRDDS45         */
    __type28 FRRDDS46;                                     /* FRRDDS46         */
    __type28 FRRDDS47;                                     /* FRRDDS47         */
    __type28 FRRDDS48;                                     /* FRRDDS48         */
    __type28 FRRDDS49;                                     /* FRRDDS49         */
    __type28 FRRDDS50;                                     /* FRRDDS50         */
    __type28 FRRDDS51;                                     /* FRRDDS51         */
    __type28 FRRDDS52;                                     /* FRRDDS52         */
    __type28 FRRDDS53;                                     /* FRRDDS53         */
    __type28 FRRDDS54;                                     /* FRRDDS54         */
    __type28 FRRDDS55;                                     /* FRRDDS55         */
    __type28 FRRDDS56;                                     /* FRRDDS56         */
    __type28 FRRDDS57;                                     /* FRRDDS57         */
    __type28 FRRDDS58;                                     /* FRRDDS58         */
    __type28 FRRDDS59;                                     /* FRRDDS59         */
    __type28 FRRDDS60;                                     /* FRRDDS60         */
    __type28 FRRDDS61;                                     /* FRRDDS61         */
    __type28 FRRDDS62;                                     /* FRRDDS62         */
    __type28 FRRDDS63;                                     /* FRRDDS63         */
    __type28 FRRDDS64;                                     /* FRRDDS64         */
    __type28 FRRDHS1;                                      /* FRRDHS1          */
    __type28 FRRDHS2;                                      /* FRRDHS2          */
    __type28 FRRDHS3;                                      /* FRRDHS3          */
    __type28 FRMBS;                                        /* FRMBS            */
    __type28 FROBCM;                                       /* FROBCM           */
    __type28 FROBCR;                                       /* FROBCR           */
    uint8  dummy13[232];                                   /* Reserved         */
    __type28 FRITC;                                        /* FRITC            */
    __type28 FROTC;                                        /* FROTC            */
    __type28 FRIBA;                                        /* FRIBA            */
    __type28 FRFBA;                                        /* FRFBA            */
    __type28 FROBA;                                        /* FROBA            */
    __type28 FRIQC;                                        /* FRIQC            */
    __type28 FRUIR;                                        /* FRUIR            */
    __type28 FRUOR;                                        /* FRUOR            */
    __type28 FRITS;                                        /* FRITS            */
    __type28 FROTS;                                        /* FROTS            */
    __type28 FRAES;                                        /* FRAES            */
    __type28 FRAEA;                                        /* FRAEA            */
    __type28 FRDA0;                                        /* FRDA0            */
    __type28 FRDA1;                                        /* FRDA1            */
    __type28 FRDA2;                                        /* FRDA2            */
    __type28 FRDA3;                                        /* FRDA3            */
    uint8  dummy14[4];                                     /* Reserved         */
    __type28 FRT2C;                                        /* FRT2C            */
} __type63;
typedef struct 
{                                                          /* Module           */
    uint32 EDSR0;                                          /* EDSR0            */
    uint8  dummy15[12];                                    /* Reserved         */
    uint32 TDLAR0;                                         /* TDLAR0           */
    uint32 TDFAR0;                                         /* TDFAR0           */
    uint32 TDFXR0;                                         /* TDFXR0           */
    uint32 TDFFR0;                                         /* TDFFR0           */
    uint8  dummy16[16];                                    /* Reserved         */
    uint32 RDLAR0;                                         /* RDLAR0           */
    uint32 RDFAR0;                                         /* RDFAR0           */
    uint32 RDFXR0;                                         /* RDFXR0           */
    uint32 RDFFR0;                                         /* RDFFR0           */
    uint8  dummy17[960];                                   /* Reserved         */
    uint32 EDMR0;                                          /* EDMR0            */
    uint8  dummy18[4];                                     /* Reserved         */
    uint32 EDTRR0;                                         /* EDTRR0           */
    uint8  dummy19[4];                                     /* Reserved         */
    uint32 EDRRR0;                                         /* EDRRR0           */
    uint8  dummy20[20];                                    /* Reserved         */
    uint32 EESR0;                                          /* EESR0            */
    uint8  dummy21[4];                                     /* Reserved         */
    uint32 EESIPR0;                                        /* EESIPR0          */
    uint8  dummy22[4];                                     /* Reserved         */
    uint32 TRSCER0;                                        /* TRSCER0          */
    uint8  dummy23[4];                                     /* Reserved         */
    uint32 RMFCR0;                                         /* RMFCR0           */
    uint8  dummy24[12];                                    /* Reserved         */
    uint32 FDR0;                                           /* FDR0             */
    uint8  dummy25[4];                                     /* Reserved         */
    uint32 RMCR0;                                          /* RMCR0            */
    uint8  dummy26[4];                                     /* Reserved         */
    uint32 RPADIR0;                                        /* RPADIR0          */
    uint8  dummy27[4];                                     /* Reserved         */
    uint32 FCFTR0;                                         /* FCFTR0           */
    uint8  dummy28[20];                                    /* Reserved         */
    uint32 TFSR0;                                          /* TFSR0            */
    uint8  dummy29[4];                                     /* Reserved         */
    uint32 RFSR0;                                          /* RFSR0            */
    uint8  dummy30[116];                                   /* Reserved         */
    uint32 ECMR0;                                          /* ECMR0            */
    uint8  dummy31[4];                                     /* Reserved         */
    uint32 RFLR0;                                          /* RFLR0            */
    uint8  dummy32[4];                                     /* Reserved         */
    uint32 ECSR0;                                          /* ECSR0            */
    uint8  dummy33[4];                                     /* Reserved         */
    uint32 ECSIPR0;                                        /* ECSIPR0          */
    uint8  dummy34[4];                                     /* Reserved         */
    uint32 PIR0;                                           /* PIR0             */
    uint8  dummy35[4];                                     /* Reserved         */
    uint32 PLSR0;                                          /* PLSR0            */
    uint32 PIPR0;                                          /* PIPR0            */
    uint8  dummy36[36];                                    /* Reserved         */
    uint32 APR0;                                           /* APR0             */
    uint32 MPR0;                                           /* MPR0             */
    uint32 PFTCR0;                                         /* PFTCR0           */
    uint32 PFRCR0;                                         /* PFRCR0           */
    uint32 TPAUSER0;                                       /* TPAUSER0         */
    uint32 TPFRCR0;                                        /* TPFRCR0          */
    uint32 BCFRR0;                                         /* BCFRR0           */
    uint32 CRBCFRR0;                                       /* CRBCFRR0         */
    uint8  dummy37[60];                                    /* Reserved         */
    uint32 EMR0;                                           /* EMR0             */
    uint8  dummy38[12];                                    /* Reserved         */
    uint32 MAHR0;                                          /* MAHR0            */
    uint8  dummy39[4];                                     /* Reserved         */
    uint32 MALR0;                                          /* MALR0            */
    uint8  dummy40[308];                                   /* Reserved         */
    uint32 TROCR0;                                         /* TROCR0           */
    uint8  dummy41[4];                                     /* Reserved         */
    uint32 CDCR0;                                          /* CDCR0            */
    uint8  dummy42[4];                                     /* Reserved         */
    uint32 LCCR0;                                          /* LCCR0            */
    uint8  dummy43[44];                                    /* Reserved         */
    uint32 CEFCR0;                                         /* CEFCR0           */
    uint8  dummy44[4];                                     /* Reserved         */
    uint32 FRECR0;                                         /* FRECR0           */
    uint8  dummy45[4];                                     /* Reserved         */
    uint32 TSFRCR0;                                        /* TSFRCR0          */
    uint8  dummy46[4];                                     /* Reserved         */
    uint32 TLFRCR0;                                        /* TLFRCR0          */
    uint8  dummy47[4];                                     /* Reserved         */
    uint32 RFCR0;                                          /* RFCR0            */
    uint8  dummy48[20];                                    /* Reserved         */
    uint32 MAFCR0;                                         /* MAFCR0           */
    uint8  dummy49[132];                                   /* Reserved         */
    uint32 ARSTR;                                          /* ARSTR            */
    uint32 TSU_CTRST;                                      /* TSU_CTRST        */
    uint8  dummy50[40];                                    /* Reserved         */
    uint32 TSU_FWSL0;                                      /* TSU_FWSL0        */
    uint32 TSU_FWSL1;                                      /* TSU_FWSL1        */
    uint32 TSU_FWSLC;                                      /* TSU_FWSLC        */
    uint8  dummy51[20];                                    /* Reserved         */
    uint32 TSU_FWSR;                                       /* TSU_FWSR         */
    uint32 TSU_FWINMK;                                     /* TSU_FWINMK       */
    uint32 TSU_VTAG0;                                      /* TSU_VTAG0        */
    uint32 TSU_VTAG1;                                      /* TSU_VTAG1        */
    uint32 TSU_ADSBSY;                                     /* TSU_ADSBSY       */
    uint32 TSU_TEN;                                        /* TSU_TEN          */
    uint8  dummy52[8];                                     /* Reserved         */
    uint32 TSU_POST1;                                      /* TSU_POST1        */
    uint32 TSU_POST2;                                      /* TSU_POST2        */
    uint32 TSU_POST3;                                      /* TSU_POST3        */
    uint32 TSU_POST4;                                      /* TSU_POST4        */
    uint32 TXNLCR0;                                        /* TXNLCR0          */
    uint32 TXALCR0;                                        /* TXALCR0          */
    uint32 RXNLCR0;                                        /* RXNLCR0          */
    uint32 RXALCR0;                                        /* RXALCR0          */
    uint8  dummy53[16];                                    /* Reserved         */
    uint32 TXNLCR1;                                        /* TXNLCR1          */
    uint32 TXALCR1;                                        /* TXALCR1          */
    uint32 RXNLCR1;                                        /* RXNLCR1          */
    uint32 RXALCR1;                                        /* RXALCR1          */
    uint8  dummy54[80];                                    /* Reserved         */
    uint32 TSU_ADRH0;                                      /* TSU_ADRH0        */
    uint32 TSU_ADRL0;                                      /* TSU_ADRL0        */
    uint32 TSU_ADRH1;                                      /* TSU_ADRH1        */
    uint32 TSU_ADRL1;                                      /* TSU_ADRL1        */
    uint32 TSU_ADRH2;                                      /* TSU_ADRH2        */
    uint32 TSU_ADRL2;                                      /* TSU_ADRL2        */
    uint32 TSU_ADRH3;                                      /* TSU_ADRH3        */
    uint32 TSU_ADRL3;                                      /* TSU_ADRL3        */
    uint32 TSU_ADRH4;                                      /* TSU_ADRH4        */
    uint32 TSU_ADRL4;                                      /* TSU_ADRL4        */
    uint32 TSU_ADRH5;                                      /* TSU_ADRH5        */
    uint32 TSU_ADRL5;                                      /* TSU_ADRL5        */
    uint32 TSU_ADRH6;                                      /* TSU_ADRH6        */
    uint32 TSU_ADRL6;                                      /* TSU_ADRL6        */
    uint32 TSU_ADRH7;                                      /* TSU_ADRH7        */
    uint32 TSU_ADRL7;                                      /* TSU_ADRL7        */
    uint32 TSU_ADRH8;                                      /* TSU_ADRH8        */
    uint32 TSU_ADRL8;                                      /* TSU_ADRL8        */
    uint32 TSU_ADRH9;                                      /* TSU_ADRH9        */
    uint32 TSU_ADRL9;                                      /* TSU_ADRL9        */
    uint32 TSU_ADRH10;                                     /* TSU_ADRH10       */
    uint32 TSU_ADRL10;                                     /* TSU_ADRL10       */
    uint32 TSU_ADRH11;                                     /* TSU_ADRH11       */
    uint32 TSU_ADRL11;                                     /* TSU_ADRL11       */
    uint32 TSU_ADRH12;                                     /* TSU_ADRH12       */
    uint32 TSU_ADRL12;                                     /* TSU_ADRL12       */
    uint32 TSU_ADRH13;                                     /* TSU_ADRH13       */
    uint32 TSU_ADRL13;                                     /* TSU_ADRL13       */
    uint32 TSU_ADRH14;                                     /* TSU_ADRH14       */
    uint32 TSU_ADRL14;                                     /* TSU_ADRL14       */
    uint32 TSU_ADRH15;                                     /* TSU_ADRH15       */
    uint32 TSU_ADRL15;                                     /* TSU_ADRL15       */
    uint32 TSU_ADRH16;                                     /* TSU_ADRH16       */
    uint32 TSU_ADRL16;                                     /* TSU_ADRL16       */
    uint32 TSU_ADRH17;                                     /* TSU_ADRH17       */
    uint32 TSU_ADRL17;                                     /* TSU_ADRL17       */
    uint32 TSU_ADRH18;                                     /* TSU_ADRH18       */
    uint32 TSU_ADRL18;                                     /* TSU_ADRL18       */
    uint32 TSU_ADRH19;                                     /* TSU_ADRH19       */
    uint32 TSU_ADRL19;                                     /* TSU_ADRL19       */
    uint32 TSU_ADRH20;                                     /* TSU_ADRH20       */
    uint32 TSU_ADRL20;                                     /* TSU_ADRL20       */
    uint32 TSU_ADRH21;                                     /* TSU_ADRH21       */
    uint32 TSU_ADRL21;                                     /* TSU_ADRL21       */
    uint32 TSU_ADRH22;                                     /* TSU_ADRH22       */
    uint32 TSU_ADRL22;                                     /* TSU_ADRL22       */
    uint32 TSU_ADRH23;                                     /* TSU_ADRH23       */
    uint32 TSU_ADRL23;                                     /* TSU_ADRL23       */
    uint32 TSU_ADRH24;                                     /* TSU_ADRH24       */
    uint32 TSU_ADRL24;                                     /* TSU_ADRL24       */
    uint32 TSU_ADRH25;                                     /* TSU_ADRH25       */
    uint32 TSU_ADRL25;                                     /* TSU_ADRL25       */
    uint32 TSU_ADRH26;                                     /* TSU_ADRH26       */
    uint32 TSU_ADRL26;                                     /* TSU_ADRL26       */
    uint32 TSU_ADRH27;                                     /* TSU_ADRH27       */
    uint32 TSU_ADRL27;                                     /* TSU_ADRL27       */
    uint32 TSU_ADRH28;                                     /* TSU_ADRH28       */
    uint32 TSU_ADRL28;                                     /* TSU_ADRL28       */
    uint32 TSU_ADRH29;                                     /* TSU_ADRH29       */
    uint32 TSU_ADRL29;                                     /* TSU_ADRL29       */
    uint32 TSU_ADRH30;                                     /* TSU_ADRH30       */
    uint32 TSU_ADRL30;                                     /* TSU_ADRL30       */
    uint32 TSU_ADRH31;                                     /* TSU_ADRH31       */
    uint32 TSU_ADRL31;                                     /* TSU_ADRL31       */
    uint8  dummy55[516];                                   /* Reserved         */
    uint32 HDMMDR0;                                        /* HDMMDR0          */
    uint8  dummy56[8];                                     /* Reserved         */
    uint32 HDMISR0;                                        /* HDMISR0          */
    uint32 HDMIER0;                                        /* HDMIER0          */
} __type64;
typedef struct 
{                                                          /* Module           */
    uint32 CNT;                                            /* CNT              */
    uint32 PCMD;                                           /* PCMD             */
    uint32 PS;                                             /* PS               */
} __type65;
typedef struct 
{                                                          /* Module           */
    uint8  FPMON;                                          /* FPMON            */
    uint8  dummy57[15];                                    /* Reserved         */
    uint8  FASTAT;                                         /* FASTAT           */
    uint8  dummy58[3];                                     /* Reserved         */
    uint8  FAEINT;                                         /* FAEINT           */
    uint8  dummy59[27];                                    /* Reserved         */
    uint32 FSADDR;                                         /* FSADDR           */
    uint32 FEADDR;                                         /* FEADDR           */
    uint8  dummy60[28];                                    /* Reserved         */
    uint16 FCURAME;                                        /* FCURAME          */
    uint8  dummy61[2];                                     /* Reserved         */
    uint16 FRAMMCR;                                        /* FRAMMCR          */
    uint8  dummy62[6];                                     /* Reserved         */
    uint16 FPROTDR0;                                       /* FPROTDR0         */
    uint8  dummy63[2];                                     /* Reserved         */
    uint32 FPROTCR0;                                       /* FPROTCR0         */
    uint32 FPROTCR1;                                       /* FPROTCR1         */
    uint32 FPROTCR2;                                       /* FPROTCR2         */
    uint32 FPROTCR3;                                       /* FPROTCR3         */
    uint32 FPROTCR4;                                       /* FPROTCR4         */
    uint8  dummy64[8];                                     /* Reserved         */
    uint32 FSTATR;                                         /* FSTATR           */
    uint16 FENTRYR;                                        /* FENTRYR          */
    uint8  dummy65[6];                                     /* Reserved         */
    uint16 FSUINITR;                                       /* FSUINITR         */
    uint8  dummy66[2];                                     /* Reserved         */
    uint8  FLKSTAT;                                        /* FLKSTAT          */
    uint8  dummy67[3];                                     /* Reserved         */
    uint32 FRFSTEADR;                                      /* FRFSTEADR        */
    uint8  FRTSTAT;                                        /* FRTSTAT          */
    uint8  dummy68[3];                                     /* Reserved         */
    uint8  FRTEINT;                                        /* FRTEINT          */
    uint8  dummy69[3];                                     /* Reserved         */
    uint16 FCMDR;                                          /* FCMDR            */
    uint8  dummy70[14];                                    /* Reserved         */
    uint16 FRAMECCR;                                       /* FRAMECCR         */
    uint8  dummy71[14];                                    /* Reserved         */
    uint16 FPESTAT;                                        /* FPESTAT          */
    uint8  dummy72[2];                                     /* Reserved         */
    uint16 FCNFPRGCNT;                                     /* FCNFPRGCNT       */
    uint8  dummy73[10];                                    /* Reserved         */
    uint8  FBCCNT;                                         /* FBCCNT           */
    uint8  dummy74[3];                                     /* Reserved         */
    uint8  FBCSTAT;                                        /* FBCSTAT          */
    uint8  dummy75[3];                                     /* Reserved         */
    uint32 FPSADDR;                                        /* FPSADDR          */
    uint8  dummy76[4];                                     /* Reserved         */
    uint16 FCPSR;                                          /* FCPSR            */
    uint8  dummy77[2];                                     /* Reserved         */
    uint16 FPCKAR;                                         /* FPCKAR           */
    uint8  dummy78[26];                                    /* Reserved         */
    uint16 FECCEMON;                                       /* FECCEMON         */
    uint8  dummy79[2];                                     /* Reserved         */
    uint16 FECCTMD;                                        /* FECCTMD          */
    uint8  dummy80[2];                                     /* Reserved         */
    uint16 FDMYECC;                                        /* FDMYECC          */
    uint8  dummy81[32502];                                 /* Reserved         */
} __type66;
typedef struct 
{                                                          /* Module           */
    __type29 CTL;                                          /* CTL              */
    uint8  dummy82[3];                                     /* Reserved         */
    uint16 EN;                                             /* EN               */
    uint8  dummy83[6];                                     /* Reserved         */
    __type30 ENL;                                          /* ENL              */
} __type67;
typedef struct 
{                                                          /* Module           */
    __type29 CTL;                                          /* CTL              */
    uint8  dummy84[3];                                     /* Reserved         */
    uint16 EN;                                             /* EN               */
    uint8  dummy85[6];                                     /* Reserved         */
    __type31 ENL;                                          /* ENL              */
} __type68;
typedef struct 
{                                                          /* Module           */
    __type32 CTL0;                                         /* CTL0             */
    uint8  dummy86[3];                                     /* Reserved         */
    __type33 CTL1;                                         /* CTL1             */
    uint8  dummy87[3];                                     /* Reserved         */
    __type34 CTL2;                                         /* CTL2             */
    uint8  dummy88[3];                                     /* Reserved         */
    __type35 CTL3;                                         /* CTL3             */
    uint8  dummy89[3];                                     /* Reserved         */
    __type36 CTL4;                                         /* CTL4             */
    uint8  dummy90[3];                                     /* Reserved         */
    __type37 CTL5;                                         /* CTL5             */
    uint8  dummy91[3];                                     /* Reserved         */
    __type38 CTL6;                                         /* CTL6             */
    uint8  dummy92[3];                                     /* Reserved         */
    __type39 CTL7;                                         /* CTL7             */
} __type69;
typedef struct 
{                                                          /* Module           */
    __type32 CTL0;                                         /* CTL0             */
    uint8  dummy93[3];                                     /* Reserved         */
    __type33 CTL1;                                         /* CTL1             */
    uint8  dummy94[3];                                     /* Reserved         */
    __type34 CTL2;                                         /* CTL2             */
    uint8  dummy95[3];                                     /* Reserved         */
    __type35 CTL3;                                         /* CTL3             */
    uint8  dummy96[3];                                     /* Reserved         */
    __type36 CTL4;                                         /* CTL4             */
} __type70;
typedef struct 
{                                                          /* Module           */
    __type40 CTL0;                                         /* CTL0             */
    uint8  dummy97[3];                                     /* Reserved         */
    __type41 CTL1;                                         /* CTL1             */
} __type71;
typedef struct 
{                                                          /* Module           */
    __type42 CTL0;                                         /* CTL0             */
    uint8  dummy98[3];                                     /* Reserved         */
    __type43 CTL1;                                         /* CTL1             */
    uint8  dummy99[3];                                     /* Reserved         */
    __type44 CTL2;                                         /* CTL2             */
    uint8  dummy100[3];                                    /* Reserved         */
    __type45 CTL3;                                         /* CTL3             */
    uint8  dummy101[3];                                    /* Reserved         */
    __type46 CTL4;                                         /* CTL4             */
    uint8  dummy102[3];                                    /* Reserved         */
    __type47 CTL5;                                         /* CTL5             */
    uint8  dummy103[3];                                    /* Reserved         */
    __type48 CTL6;                                         /* CTL6             */
    uint8  dummy104[3];                                    /* Reserved         */
    __type49 CTL7;                                         /* CTL7             */
} __type72;
typedef struct 
{                                                          /* Module           */
    __type42 CTL0;                                         /* CTL0             */
    uint8  dummy105[3];                                    /* Reserved         */
    __type43 CTL1;                                         /* CTL1             */
} __type73;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
} __type74;
typedef struct 
{                                                          /* Module           */
    uint8  CTL;                                            /* CTL              */
    uint8  dummy106[3];                                    /* Reserved         */
    uint32 STAT;                                           /* STAT             */
    uint8  dummy107[4];                                    /* Reserved         */
    uint32 TYPE;                                           /* TYPE             */
} __type75;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
} __type76;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
} __type77;
typedef struct 
{                                                          /* Module           */
    uint32 CTL;                                            /* CTL              */
    uint32 TMC;                                            /* TMC              */
    uint32 TRC;                                            /* TRC              */
    uint32 TED;                                            /* TED              */
    uint32 EAD0;                                           /* EAD0             */
} __type78;
typedef struct 
{                                                          /* Module           */
    __type50 CTL0;                                         /* CTL0             */
    uint8  dummy108[15];                                   /* Reserved         */
    uint32 CTL1;                                           /* CTL1             */
    uint16 CTL2;                                           /* CTL2             */
    uint8  dummy109[4074];                                 /* Reserved         */
    uint32 MCTL1;                                          /* MCTL1            */
    uint32 MCTL2;                                          /* MCTL2            */
    uint32 TX0W;                                           /* TX0W             */
    uint16 TX0H;                                           /* TX0H             */
    uint8  dummy110[2];                                    /* Reserved         */
    uint32 RX0W;                                           /* RX0W             */
    uint16 RX0H;                                           /* RX0H             */
    uint8  dummy111[2];                                    /* Reserved         */
    uint32 MRWP0;                                          /* MRWP0            */
    uint32 STR0;                                           /* STR0             */
    uint16 STCR0;                                          /* STCR0            */
    uint8  dummy112[30];                                   /* Reserved         */
    uint16 MCTL0;                                          /* MCTL0            */
    uint8  dummy113[2];                                    /* Reserved         */
    uint32 CFG0;                                           /* CFG0             */
    uint32 CFG1;                                           /* CFG1             */
    uint32 CFG2;                                           /* CFG2             */
    uint32 CFG3;                                           /* CFG3             */
    uint32 CFG4;                                           /* CFG4             */
    uint32 CFG5;                                           /* CFG5             */
    uint32 CFG6;                                           /* CFG6             */
    uint32 CFG7;                                           /* CFG7             */
    uint8  dummy114[4];                                    /* Reserved         */
    uint16 BRS0;                                           /* BRS0             */
    uint8  dummy115[2];                                    /* Reserved         */
    uint16 BRS1;                                           /* BRS1             */
    uint8  dummy116[2];                                    /* Reserved         */
    uint16 BRS2;                                           /* BRS2             */
    uint8  dummy117[2];                                    /* Reserved         */
    uint16 BRS3;                                           /* BRS3             */
} __type79;
typedef struct 
{                                                          /* Module           */
    uint32 CTL;                                            /* CTL              */
    uint32 TCTL0;                                          /* TCTL0            */
    uint32 TCTL1;                                          /* TCTL1            */
    uint32 TCTL2;                                          /* TCTL2            */
    uint32 TCTL3;                                          /* TCTL3            */
    uint32 TCTL4;                                          /* TCTL4            */
    uint32 TCTL5;                                          /* TCTL5            */
    uint32 TCTL6;                                          /* TCTL6            */
    uint32 TCTL7;                                          /* TCTL7            */
    uint32 TTX0;                                           /* TTX0             */
    uint32 TTX1;                                           /* TTX1             */
    uint32 TTX2;                                           /* TTX2             */
    uint32 TTX3;                                           /* TTX3             */
    uint32 TTX4;                                           /* TTX4             */
    uint32 TTX5;                                           /* TTX5             */
    uint32 TTX6;                                           /* TTX6             */
    uint32 TTX7;                                           /* TTX7             */
    uint32 RX;                                             /* RX               */
    uint32 TCNT0;                                          /* TCNT0            */
    uint32 TCNT1;                                          /* TCNT1            */
    uint32 TCNT2;                                          /* TCNT2            */
    uint32 TCNT3;                                          /* TCNT3            */
    uint32 TCNT4;                                          /* TCNT4            */
    uint32 TCNT5;                                          /* TCNT5            */
    uint32 TCNT6;                                          /* TCNT6            */
    uint32 TCNT7;                                          /* TCNT7            */
    uint32 STR0;                                           /* STR0             */
    uint32 STR1;                                           /* STR1             */
    uint32 STC;                                            /* STC              */
} __type80;
typedef struct 
{                                                          /* Module           */
    uint32 CKEN;                                           /* CKEN             */
    uint32 SRST;                                           /* SRST             */
    uint32 EN;                                             /* EN               */
    uint32 MD;                                             /* MD               */
    uint32 CTL;                                            /* CTL              */
    uint32 TDIV;                                           /* TDIV             */
    uint32 TSAR;                                           /* TSAR             */
    uint32 TPFM;                                           /* TPFM             */
    uint32 RDAR;                                           /* RDAR             */
    uint32 RPFM;                                           /* RPFM             */
    uint32 RGFM;                                           /* RGFM             */
    uint32 IREN;                                           /* IREN             */
    uint32 IRST;                                           /* IRST             */
    __type28 IRCL;                                         /* IRCL             */
    uint32 CST;                                            /* CST              */
    uint32 CTFM;                                           /* CTFM             */
    uint32 CRFM;                                           /* CRFM             */
} __type81;
typedef struct 
{                                                          /* Module           */
    uint8  dummy118[1];                                    /* Reserved         */
    uint8  LWBR;                                           /* LWBR             */
    __type51 LBRP01;                                       /* LBRP01           */
    uint8  LSTC;                                           /* LSTC             */
    uint8  dummy119[3];                                    /* Reserved         */
    uint8  LMD;                                            /* LMD              */
    uint8  LBFC;                                           /* LBFC             */
    uint8  LSC;                                            /* LSC              */
    uint8  LWUP;                                           /* LWUP             */
    uint8  LIE;                                            /* LIE              */
    uint8  LEDE;                                           /* LEDE             */
    uint8  LCUC;                                           /* LCUC             */
    uint8  dummy120[1];                                    /* Reserved         */
    uint8  LTRC;                                           /* LTRC             */
    uint8  LMST;                                           /* LMST             */
    uint8  LST;                                            /* LST              */
    uint8  LEST;                                           /* LEST             */
    uint8  LDFC;                                           /* LDFC             */
    uint8  LIDB;                                           /* LIDB             */
    uint8  LCBR;                                           /* LCBR             */
    uint8  LUDB0;                                          /* LUDB0            */
    uint8  LDBR1;                                          /* LDBR1            */
    uint8  LDBR2;                                          /* LDBR2            */
    uint8  LDBR3;                                          /* LDBR3            */
    uint8  LDBR4;                                          /* LDBR4            */
    uint8  LDBR5;                                          /* LDBR5            */
    uint8  LDBR6;                                          /* LDBR6            */
    uint8  LDBR7;                                          /* LDBR7            */
    uint8  LDBR8;                                          /* LDBR8            */
    uint8  LUOER;                                          /* LUOER            */
    uint8  LUOR1;                                          /* LUOR1            */
    uint8  dummy121[2];                                    /* Reserved         */
    __type52 LUTDR;                                        /* LUTDR            */
    __type52 LURDR;                                        /* LURDR            */
    __type52 LUWTDR;                                       /* LUWTDR           */
} __type82;
typedef struct 
{                                                          /* Module           */
    __type28 TSPC;                                         /* TSPC             */
    __type28 TSC;                                          /* TSC              */
    uint8  dummy122[8];                                    /* Reserved         */
    __type28 CC;                                           /* CC               */
    __type28 BRP;                                          /* BRP              */
    __type28 IDE;                                          /* IDE              */
    __type28 MDC;                                          /* MDC              */
    __type28 SPCT;                                         /* SPCT             */
    __type28 MST;                                          /* MST              */
    __type28 CS;                                           /* CS               */
    __type28 CSC;                                          /* CSC              */
    __type28 SRTS;                                         /* SRTS             */
    uint32 SRXD;                                           /* SRXD             */
    __type28 CPL;                                          /* CPL              */
    __type28 ML;                                           /* ML               */
    __type28 FRTS;                                         /* FRTS             */
    uint32 FRXD;                                           /* FRXD             */
} __type83;
typedef struct 
{                                                          /* Module           */
    uint32 TSPC;                                           /* TSPC             */
} __type84;
typedef struct 
{                                                          /* Module           */
    uint8  R0;                                             /* R0               */
    uint8  dummy123[3];                                    /* Reserved         */
    uint8  R1;                                             /* R1               */
    uint8  dummy124[3];                                    /* Reserved         */
    uint8  R2;                                             /* R2               */
} __type85;
typedef struct 
{                                                          /* Module           */
    __type28 CREL;                                         /* CREL             */
    __type28 ENDN;                                         /* ENDN             */
    uint8  dummy125[4];                                    /* Reserved         */
    __type53 DBTP;                                         /* DBTP             */
    __type28 TEST;                                         /* TEST             */
    __type28 RWD;                                          /* RWD              */
    __type28 CCCR;                                         /* CCCR             */
    __type54 BTP;                                          /* BTP              */
    uint8  dummy126[4];                                    /* Reserved         */
    __type28 TSCV;                                         /* TSCV             */
    __type28 TOCC;                                         /* TOCC             */
    __type28 TOCV;                                         /* TOCV             */
    uint8  dummy127[16];                                   /* Reserved         */
    __type28 ECR;                                          /* ECR              */
    __type28 PSR;                                          /* PSR              */
    __type28 TDCR;                                         /* TDCR             */
    uint8  dummy128[4];                                    /* Reserved         */
    __type28 IR;                                           /* IR               */
    __type28 IE;                                           /* IE               */
    __type28 ILS;                                          /* ILS              */
    __type28 ILE;                                          /* ILE              */
    uint8  dummy129[32];                                   /* Reserved         */
    __type28 GFC;                                          /* GFC              */
    __type28 SIDFC;                                        /* SIDFC            */
    __type28 XIDFC;                                        /* XIDFC            */
    uint8  dummy130[4];                                    /* Reserved         */
    __type28 XIDAM;                                        /* XIDAM            */
    __type28 HPMS;                                         /* HPMS             */
    __type28 NDAT1;                                        /* NDAT1            */
    __type28 NDAT2;                                        /* NDAT2            */
    __type28 RXF0C;                                        /* RXF0C            */
    __type28 RXF0S;                                        /* RXF0S            */
    __type28 RXF0A;                                        /* RXF0A            */
    __type28 RXBC;                                         /* RXBC             */
    __type28 RXF1C;                                        /* RXF1C            */
    __type28 RXF1S;                                        /* RXF1S            */
    __type28 RXF1A;                                        /* RXF1A            */
    __type28 RXESC;                                        /* RXESC            */
    __type28 TXBC;                                         /* TXBC             */
    __type28 TXFQS;                                        /* TXFQS            */
    __type28 TXESC;                                        /* TXESC            */
    __type28 TXBRP;                                        /* TXBRP            */
    __type28 TXBAR;                                        /* TXBAR            */
    __type28 TXBCR;                                        /* TXBCR            */
    __type28 TXBTO;                                        /* TXBTO            */
    __type28 TXBCF;                                        /* TXBCF            */
    __type28 TXBTIE;                                       /* TXBTIE           */
    __type28 TXBCIE;                                       /* TXBCIE           */
    uint8  dummy131[8];                                    /* Reserved         */
    __type28 TXEFC;                                        /* TXEFC            */
    __type28 TXEFS;                                        /* TXEFS            */
    __type28 TXEFA;                                        /* TXEFA            */
    uint8  dummy132[4];                                    /* Reserved         */
    __type28 TTTMC;                                        /* TTTMC            */
    __type28 TTRMC;                                        /* TTRMC            */
    __type28 TTOCF;                                        /* TTOCF            */
    __type28 TTMLM;                                        /* TTMLM            */
    __type28 TURCF;                                        /* TURCF            */
    __type28 TTOCN;                                        /* TTOCN            */
    __type28 TTGTP;                                        /* TTGTP            */
    __type28 TTTMK;                                        /* TTTMK            */
    __type28 TTIR;                                         /* TTIR             */
    __type28 TTIE;                                         /* TTIE             */
    __type28 TTILS;                                        /* TTILS            */
    __type28 TTOST;                                        /* TTOST            */
    __type28 TURNA;                                        /* TURNA            */
    __type28 TTLGT;                                        /* TTLGT            */
    __type28 TTCTC;                                        /* TTCTC            */
    __type28 TTCPT;                                        /* TTCPT            */
    __type28 TTCSM;                                        /* TTCSM            */
} __type86;
typedef struct 
{                                                          /* Module           */
    __type28 CREL;                                         /* CREL             */
    __type28 ENDN;                                         /* ENDN             */
    uint8  dummy133[4];                                    /* Reserved         */
    __type53 DBTP;                                         /* DBTP             */
    uint8  dummy134[4];                                    /* Reserved         */
    __type28 RWD;                                          /* RWD              */
    __type28 CCCR;                                         /* CCCR             */
    __type54 BTP;                                          /* BTP              */
    __type28 TSCC;                                         /* TSCC             */
    __type28 TSCV;                                         /* TSCV             */
    __type28 TOCC;                                         /* TOCC             */
    __type28 TOCV;                                         /* TOCV             */
    uint8  dummy135[16];                                   /* Reserved         */
    __type28 ECR;                                          /* ECR              */
    __type28 PSR;                                          /* PSR              */
    __type28 TDCR;                                         /* TDCR             */
    uint8  dummy136[4];                                    /* Reserved         */
    __type28 IR;                                           /* IR               */
    __type28 IE;                                           /* IE               */
    __type28 ILS;                                          /* ILS              */
    __type28 ILE;                                          /* ILE              */
    uint8  dummy137[32];                                   /* Reserved         */
    __type28 GFC;                                          /* GFC              */
    __type28 SIDFC;                                        /* SIDFC            */
    __type28 XIDFC;                                        /* XIDFC            */
    uint8  dummy138[4];                                    /* Reserved         */
    __type28 XIDAM;                                        /* XIDAM            */
    __type28 HPMS;                                         /* HPMS             */
    __type28 NDAT1;                                        /* NDAT1            */
    __type28 NDAT2;                                        /* NDAT2            */
    __type28 RXF0C;                                        /* RXF0C            */
    __type28 RXF0S;                                        /* RXF0S            */
    __type28 RXF0A;                                        /* RXF0A            */
    __type28 RXBC;                                         /* RXBC             */
    __type28 RXF1C;                                        /* RXF1C            */
    __type28 RXF1S;                                        /* RXF1S            */
    __type28 RXF1A;                                        /* RXF1A            */
    __type28 RXESC;                                        /* RXESC            */
    __type28 TXBC;                                         /* TXBC             */
    __type28 TXFQS;                                        /* TXFQS            */
    __type28 TXESC;                                        /* TXESC            */
    __type28 TXBRP;                                        /* TXBRP            */
    __type28 TXBAR;                                        /* TXBAR            */
    __type28 TXBCR;                                        /* TXBCR            */
    __type28 TXBTO;                                        /* TXBTO            */
    __type28 TXBCF;                                        /* TXBCF            */
    __type28 TXBTIE;                                       /* TXBTIE           */
    __type28 TXBCIE;                                       /* TXBCIE           */
    uint8  dummy139[8];                                    /* Reserved         */
    __type28 TXEFC;                                        /* TXEFC            */
    __type28 TXEFS;                                        /* TXEFS            */
    __type28 TXEFA;                                        /* TXEFA            */
} __type87;
typedef struct 
{                                                          /* Module           */
    uint32 CIN;                                            /* CIN              */
    uint32 COUT;                                           /* COUT             */
    uint8  dummy140[24];                                   /* Reserved         */
    uint8  CTL;                                            /* CTL              */
} __type88;
typedef struct 
{                                                          /* Module           */
    uint32 ESET;                                           /* ESET             */
    uint32 ECLR;                                           /* ECLR             */
    uint32 ESSTR0;                                         /* ESSTR0           */
    uint32 ESSTR1;                                         /* ESSTR1           */
    uint32 ESSTR2;                                         /* ESSTR2           */
    uint32 PCMD0;                                          /* PCMD0            */
} __type89;
typedef struct 
{                                                          /* Module           */
    uint32 EPCFG;                                          /* EPCFG            */
    uint32 MICFG0;                                         /* MICFG0           */
    uint32 MICFG1;                                         /* MICFG1           */
    uint32 MICFG2;                                         /* MICFG2           */
    uint32 NMICFG0;                                        /* NMICFG0          */
    uint32 NMICFG1;                                        /* NMICFG1          */
    uint32 NMICFG2;                                        /* NMICFG2          */
    uint32 IRCFG0;                                         /* IRCFG0           */
    uint32 IRCFG1;                                         /* IRCFG1           */
    uint32 IRCFG2;                                         /* IRCFG2           */
    uint32 EMK0;                                           /* EMK0             */
    uint32 EMK1;                                           /* EMK1             */
    uint32 EMK2;                                           /* EMK2             */
    uint32 ESSTC0;                                         /* ESSTC0           */
    uint32 ESSTC1;                                         /* ESSTC1           */
    uint32 ESSTC2;                                         /* ESSTC2           */
    uint32 PCMD1;                                          /* PCMD1            */
    uint8  PS;                                             /* PS               */
    uint8  dummy141[3];                                    /* Reserved         */
    uint32 PE0;                                            /* PE0              */
    uint32 PE1;                                            /* PE1              */
    uint32 PE2;                                            /* PE2              */
    uint32 DTMCTL;                                         /* DTMCTL           */
    uint16 DTMR;                                           /* DTMR             */
    uint8  dummy142[2];                                    /* Reserved         */
    uint32 DTMCMP;                                         /* DTMCMP           */
    uint32 DTMCFG0;                                        /* DTMCFG0          */
    uint32 DTMCFG1;                                        /* DTMCFG1          */
    uint32 DTMCFG2;                                        /* DTMCFG2          */
    uint32 DTMCFG3;                                        /* DTMCFG3          */
    uint32 DTMCFG4;                                        /* DTMCFG4          */
    uint32 DTMCFG5;                                        /* DTMCFG5          */
    uint32 EOCCFG;                                         /* EOCCFG           */
    uint32 PEM;                                            /* PEM              */
} __type90;
typedef struct 
{                                                          /* Module           */
    uint32 TRGPREMUX0;                                     /* TRGPREMUX0       */
    uint32 TRGPREMUX1;                                     /* TRGPREMUX1       */
    uint8  dummy143[8];                                    /* Reserved         */
    uint32 TRGMUX0;                                        /* TRGMUX0          */
    uint32 TRGMUX1;                                        /* TRGMUX1          */
    uint32 EDGSEL0;                                        /* EDGSEL0          */
    uint32 EDGSEL1;                                        /* EDGSEL1          */
    uint32 ENP2TIM0;                                       /* ENP2TIM0         */
    uint32 ENP2TIM1;                                       /* ENP2TIM1         */
    uint32 ENHIZDTM;                                       /* ENHIZDTM         */
} __type91;
typedef struct 
{                                                          /* Module           */
    __type55 CKSEL;                                        /* CKSEL            */
    uint8  dummy144[12];                                   /* Reserved         */
    __type55 TS;                                           /* TS               */
    __type55 TT;                                           /* TT               */
    __type55 CSTR;                                         /* CSTR             */
    uint8  dummy145[4];                                    /* Reserved         */
    uint32 STR;                                            /* STR              */
    uint32 STC;                                            /* STC              */
    uint8  dummy146[8];                                    /* Reserved         */
    __type55 IS;                                           /* IS               */
    __type55 RM;                                           /* RM               */
    uint8  dummy147[8];                                    /* Reserved         */
    uint32 CNT0L;                                          /* CNT0L            */
    uint32 CNT0H;                                          /* CNT0H            */
    uint8  dummy148[8];                                    /* Reserved         */
    uint32 CMP0AL;                                         /* CMP0AL           */
    uint32 CMP0AH;                                         /* CMP0AH           */
    uint32 CMP0BL;                                         /* CMP0BL           */
    uint32 CMP0BH;                                         /* CMP0BH           */
    uint32 CMP0CL;                                         /* CMP0CL           */
    uint32 CMP0CH;                                         /* CMP0CH           */
    uint32 CMP0DL;                                         /* CMP0DL           */
    uint32 CMP0DH;                                         /* CMP0DH           */
    uint32 CNT1;                                           /* CNT1             */
    uint8  dummy149[12];                                   /* Reserved         */
    uint32 CMP1A;                                          /* CMP1A            */
    uint32 CMP1B;                                          /* CMP1B            */
    uint32 CMP1C;                                          /* CMP1C            */
    uint32 CMP1D;                                          /* CMP1D            */
    uint32 CNT2;                                           /* CNT2             */
    uint8  dummy150[12];                                   /* Reserved         */
    uint32 CMP2A;                                          /* CMP2A            */
    uint32 CMP2B;                                          /* CMP2B            */
    uint32 CMP2C;                                          /* CMP2C            */
    uint32 CMP2D;                                          /* CMP2D            */
    uint32 CNT3;                                           /* CNT3             */
    uint8  dummy151[12];                                   /* Reserved         */
    uint32 CMP3A;                                          /* CMP3A            */
    uint32 CMP3B;                                          /* CMP3B            */
    uint32 CMP3C;                                          /* CMP3C            */
    uint32 CMP3D;                                          /* CMP3D            */
} __type92;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    uint8  dummy152[16];                                   /* Reserved         */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
} __type93;
typedef struct 
{                                                          /* Module           */
    uint32 GTMREV;                                         /* GTMREV           */
    uint32 GTMRST;                                         /* GTMRST           */
    uint32 GTMCTRL;                                        /* GTMCTRL          */
    uint32 GTMAEIADDRXPT;                                  /* GTMAEIADDRXPT    */
    uint32 GTMIRQNOTIFY;                                   /* GTMIRQNOTIFY     */
    uint32 GTMIRQEN;                                       /* GTMIRQEN         */
    uint32 GTMIRQFORCINT;                                  /* GTMIRQFORCINT    */
    uint32 GTMIRQMODE;                                     /* GTMIRQMODE       */
    uint32 GTMEIRQEN;                                      /* GTMEIRQEN        */
    uint32 GTMHWCONF;                                      /* GTMHWCONF        */
    uint8  dummy153[8];                                    /* Reserved         */
    uint32 GTMBRIDGEMODE;                                  /* GTMBRIDGEMODE    */
    uint32 GTMBRIDGEPTR1;                                  /* GTMBRIDGEPTR1    */
    uint32 GTMBRIDGEPTR2;                                  /* GTMBRIDGEPTR2    */
    uint8  dummy154[4];                                    /* Reserved         */
    uint32 GTMTIM0AUXINSRC;                                /* GTMTIM0AUXINSRC  */
    uint32 GTMTIM1AUXINSRC;                                /* GTMTIM1AUXINSRC  */
    uint8  dummy155[20];                                   /* Reserved         */
    uint32 GTMEXTCAPEN0;                                   /* GTMEXTCAPEN0     */
    uint8  dummy156[56];                                   /* Reserved         */
    uint32 GTMATOM0OUT;                                    /* GTMATOM0OUT      */
    uint8  dummy157[100];                                  /* Reserved         */
    uint32 TBUCHEN;                                        /* TBUCHEN          */
    uint32 TBU0CTRL;                                       /* TBU0CTRL         */
    uint32 TBU0BASE;                                       /* TBU0BASE         */
    uint32 TBU1CTRL;                                       /* TBU1CTRL         */
    uint32 TBU1BASE;                                       /* TBU1BASE         */
    uint8  dummy158[108];                                  /* Reserved         */
    uint32 MONSTATUS;                                      /* MONSTATUS        */
    uint32 MONACTIVITY0;                                   /* MONACTIVITY0     */
    uint8  dummy159[4];                                    /* Reserved         */
    uint32 MONACTIVITYMCS0;                                /* MONACTIVITYMCS0  */
    uint8  dummy160[112];                                  /* Reserved         */
    uint32 CMPEN;                                          /* CMPEN            */
    uint32 CMPIRQNOTIFY;                                   /* CMPIRQNOTIFY     */
    uint32 CMPIRQEN;                                       /* CMPIRQEN         */
    uint32 CMPIRQFORCINT;                                  /* CMPIRQFORCINT    */
    uint32 CMPIRQMODE;                                     /* CMPIRQMODE       */
    uint32 CMPEIRQEN;                                      /* CMPEIRQEN        */
    uint8  dummy161[104];                                  /* Reserved         */
    uint32 ARUACCESS;                                      /* ARUACCESS        */
    uint32 ARUDATAH;                                       /* ARUDATAH         */
    uint32 ARUDATAL;                                       /* ARUDATAL         */
    uint32 ARUDBGACCESS0;                                  /* ARUDBGACCESS0    */
    uint32 ARUDBGDATA0H;                                   /* ARUDBGDATA0H     */
    uint32 ARUDBGDATA0L;                                   /* ARUDBGDATA0L     */
    uint32 ARUDBGACCESS1;                                  /* ARUDBGACCESS1    */
    uint32 ARUDBGDATA1H;                                   /* ARUDBGDATA1H     */
    uint32 ARUDBGDATA1L;                                   /* ARUDBGDATA1L     */
    uint32 ARUIRQNOTIFY;                                   /* ARUIRQNOTIFY     */
    uint32 ARUIRQEN;                                       /* ARUIRQEN         */
    uint32 ARUIRQFORCINT;                                  /* ARUIRQFORCINT    */
    uint32 ARUIRQMODE;                                     /* ARUIRQMODE       */
    uint32 ARUCADDREND;                                    /* ARUCADDREND      */
    uint8  dummy162[72];                                   /* Reserved         */
    uint32 CMUCLKEN;                                       /* CMUCLKEN         */
    uint32 CMUGCLKNUM;                                     /* CMUGCLKNUM       */
    uint32 CMUGCLKDEN;                                     /* CMUGCLKDEN       */
    uint32 CMUCLK0CTRL;                                    /* CMUCLK0CTRL      */
    uint32 CMUCLK1CTRL;                                    /* CMUCLK1CTRL      */
    uint32 CMUCLK2CTRL;                                    /* CMUCLK2CTRL      */
    uint32 CMUCLK3CTRL;                                    /* CMUCLK3CTRL      */
    uint32 CMUCLK4CTRL;                                    /* CMUCLK4CTRL      */
    uint32 CMUCLK5CTRL;                                    /* CMUCLK5CTRL      */
    uint32 CMUCLK6CTRL;                                    /* CMUCLK6CTRL      */
    uint32 CMUCLK7CTRL;                                    /* CMUCLK7CTRL      */
    uint8  dummy163[28];                                   /* Reserved         */
    uint32 CMUGLBCTRL;                                     /* CMUGLBCTRL       */
    uint8  dummy164[692];                                  /* Reserved         */
    uint32 ICMIRQG0;                                       /* ICMIRQG0         */
    uint8  dummy165[4];                                    /* Reserved         */
    uint32 ICMIRQG2;                                       /* ICMIRQG2         */
    uint8  dummy166[4];                                    /* Reserved         */
    uint32 ICMIRQG4;                                       /* ICMIRQG4         */
    uint8  dummy167[16];                                   /* Reserved         */
    uint32 ICMIRQG9;                                       /* ICMIRQG9         */
    uint8  dummy168[8];                                    /* Reserved         */
    uint32 ICMIRQGMEI;                                     /* ICMIRQGMEI       */
    uint8  dummy169[4];                                    /* Reserved         */
    uint32 ICMIRQGCEI1;                                    /* ICMIRQGCEI1      */
    uint8  dummy170[4];                                    /* Reserved         */
    uint32 ICMIRQGCEI3;                                    /* ICMIRQGCEI3      */
    uint8  dummy171[4];                                    /* Reserved         */
    uint32 ICMIRQGMCS0CI;                                  /* ICMIRQGMCS0CI    */
    uint8  dummy172[24];                                   /* Reserved         */
    uint32 ICMIRQGMCS0CEI;                                 /* ICMIRQGMCS0CEI   */
    uint8  dummy173[2456];                                 /* Reserved         */
    uint32 TIM00GPR0;                                      /* TIM00GPR0        */
    uint32 TIM00GPR1;                                      /* TIM00GPR1        */
    uint32 TIM00CNT;                                       /* TIM00CNT         */
    uint32 TIM00ECNT;                                      /* TIM00ECNT        */
    uint32 TIM00CNTS;                                      /* TIM00CNTS        */
    uint32 TIM00TDUC;                                      /* TIM00TDUC        */
    uint32 TIM00TDUV;                                      /* TIM00TDUV        */
    uint32 TIM00FLTRE;                                     /* TIM00FLTRE       */
    uint32 TIM00FLTFE;                                     /* TIM00FLTFE       */
    uint32 TIM00CTRL;                                      /* TIM00CTRL        */
    uint32 TIM00ECTRL;                                     /* TIM00ECTRL       */
    uint32 TIM00IRQNOTIFY;                                 /* TIM00IRQNOTIFY   */
    uint32 TIM00IRQEN;                                     /* TIM00IRQEN       */
    uint32 TIM00IRQFORCINT;                                /* TIM00IRQFORCINT  */
    uint32 TIM00IRQMODE;                                   /* TIM00IRQMODE     */
    uint32 TIM00EIRQEN;                                    /* TIM00EIRQEN      */
    uint8  dummy174[52];                                   /* Reserved         */
    uint32 TIM0INPVAL;                                     /* TIM0INPVAL       */
    uint32 TIM0INSRC;                                      /* TIM0INSRC        */
    uint32 TIM0RST;                                        /* TIM0RST          */
    uint32 TIM01GPR0;                                      /* TIM01GPR0        */
    uint32 TIM01GPR1;                                      /* TIM01GPR1        */
    uint32 TIM01CNT;                                       /* TIM01CNT         */
    uint32 TIM01ECNT;                                      /* TIM01ECNT        */
    uint32 TIM01CNTS;                                      /* TIM01CNTS        */
    uint32 TIM01TDUC;                                      /* TIM01TDUC        */
    uint32 TIM01TDUV;                                      /* TIM01TDUV        */
    uint32 TIM01FLTRE;                                     /* TIM01FLTRE       */
    uint32 TIM01FLTFE;                                     /* TIM01FLTFE       */
    uint32 TIM01CTRL;                                      /* TIM01CTRL        */
    uint32 TIM01ECTRL;                                     /* TIM01ECTRL       */
    uint32 TIM01IRQNOTIFY;                                 /* TIM01IRQNOTIFY   */
    uint32 TIM01IRQEN;                                     /* TIM01IRQEN       */
    uint32 TIM01IRQFORCINT;                                /* TIM01IRQFORCINT  */
    uint32 TIM01IRQMODE;                                   /* TIM01IRQMODE     */
    uint32 TIM01EIRQEN;                                    /* TIM01EIRQEN      */
    uint8  dummy175[64];                                   /* Reserved         */
    uint32 TIM02GPR0;                                      /* TIM02GPR0        */
    uint32 TIM02GPR1;                                      /* TIM02GPR1        */
    uint32 TIM02CNT;                                       /* TIM02CNT         */
    uint32 TIM02ECNT;                                      /* TIM02ECNT        */
    uint32 TIM02CNTS;                                      /* TIM02CNTS        */
    uint32 TIM02TDUC;                                      /* TIM02TDUC        */
    uint32 TIM02TDUV;                                      /* TIM02TDUV        */
    uint32 TIM02FLTRE;                                     /* TIM02FLTRE       */
    uint32 TIM02FLTFE;                                     /* TIM02FLTFE       */
    uint32 TIM02CTRL;                                      /* TIM02CTRL        */
    uint32 TIM02ECTRL;                                     /* TIM02ECTRL       */
    uint32 TIM02IRQNOTIFY;                                 /* TIM02IRQNOTIFY   */
    uint32 TIM02IRQEN;                                     /* TIM02IRQEN       */
    uint32 TIM02IRQFORCINT;                                /* TIM02IRQFORCINT  */
    uint32 TIM02IRQMODE;                                   /* TIM02IRQMODE     */
    uint32 TIM02EIRQEN;                                    /* TIM02EIRQEN      */
    uint8  dummy176[64];                                   /* Reserved         */
    uint32 TIM03GPR0;                                      /* TIM03GPR0        */
    uint32 TIM03GPR1;                                      /* TIM03GPR1        */
    uint32 TIM03CNT;                                       /* TIM03CNT         */
    uint32 TIM03ECNT;                                      /* TIM03ECNT        */
    uint32 TIM03CNTS;                                      /* TIM03CNTS        */
    uint32 TIM03TDUC;                                      /* TIM03TDUC        */
    uint32 TIM03TDUV;                                      /* TIM03TDUV        */
    uint32 TIM03FLTRE;                                     /* TIM03FLTRE       */
    uint32 TIM03FLTFE;                                     /* TIM03FLTFE       */
    uint32 TIM03CTRL;                                      /* TIM03CTRL        */
    uint32 TIM03ECTRL;                                     /* TIM03ECTRL       */
    uint32 TIM03IRQNOTIFY;                                 /* TIM03IRQNOTIFY   */
    uint32 TIM03IRQEN;                                     /* TIM03IRQEN       */
    uint32 TIM03IRQFORCINT;                                /* TIM03IRQFORCINT  */
    uint32 TIM03IRQMODE;                                   /* TIM03IRQMODE     */
    uint32 TIM03EIRQEN;                                    /* TIM03EIRQEN      */
    uint8  dummy177[64];                                   /* Reserved         */
    uint32 TIM04GPR0;                                      /* TIM04GPR0        */
    uint32 TIM04GPR1;                                      /* TIM04GPR1        */
    uint32 TIM04CNT;                                       /* TIM04CNT         */
    uint32 TIM04ECNT;                                      /* TIM04ECNT        */
    uint32 TIM04CNTS;                                      /* TIM04CNTS        */
    uint32 TIM04TDUC;                                      /* TIM04TDUC        */
    uint32 TIM04TDUV;                                      /* TIM04TDUV        */
    uint32 TIM04FLTRE;                                     /* TIM04FLTRE       */
    uint32 TIM04FLTFE;                                     /* TIM04FLTFE       */
    uint32 TIM04CTRL;                                      /* TIM04CTRL        */
    uint32 TIM04ECTRL;                                     /* TIM04ECTRL       */
    uint32 TIM04IRQNOTIFY;                                 /* TIM04IRQNOTIFY   */
    uint32 TIM04IRQEN;                                     /* TIM04IRQEN       */
    uint32 TIM04IRQFORCINT;                                /* TIM04IRQFORCINT  */
    uint32 TIM04IRQMODE;                                   /* TIM04IRQMODE     */
    uint32 TIM04EIRQEN;                                    /* TIM04EIRQEN      */
    uint8  dummy178[64];                                   /* Reserved         */
    uint32 TIM05GPR0;                                      /* TIM05GPR0        */
    uint32 TIM05GPR1;                                      /* TIM05GPR1        */
    uint32 TIM05CNT;                                       /* TIM05CNT         */
    uint32 TIM05ECNT;                                      /* TIM05ECNT        */
    uint32 TIM05CNTS;                                      /* TIM05CNTS        */
    uint32 TIM05TDUC;                                      /* TIM05TDUC        */
    uint32 TIM05TDUV;                                      /* TIM05TDUV        */
    uint32 TIM05FLTRE;                                     /* TIM05FLTRE       */
    uint32 TIM05FLTFE;                                     /* TIM05FLTFE       */
    uint32 TIM05CTRL;                                      /* TIM05CTRL        */
    uint32 TIM05ECTRL;                                     /* TIM05ECTRL       */
    uint32 TIM05IRQNOTIFY;                                 /* TIM05IRQNOTIFY   */
    uint32 TIM05IRQEN;                                     /* TIM05IRQEN       */
    uint32 TIM05IRQFORCINT;                                /* TIM05IRQFORCINT  */
    uint32 TIM05IRQMODE;                                   /* TIM05IRQMODE     */
    uint32 TIM05EIRQEN;                                    /* TIM05EIRQEN      */
    uint8  dummy179[64];                                   /* Reserved         */
    uint32 TIM06GPR0;                                      /* TIM06GPR0        */
    uint32 TIM06GPR1;                                      /* TIM06GPR1        */
    uint32 TIM06CNT;                                       /* TIM06CNT         */
    uint32 TIM06ECNT;                                      /* TIM06ECNT        */
    uint32 TIM06CNTS;                                      /* TIM06CNTS        */
    uint32 TIM06TDUC;                                      /* TIM06TDUC        */
    uint32 TIM06TDUV;                                      /* TIM06TDUV        */
    uint32 TIM06FLTRE;                                     /* TIM06FLTRE       */
    uint32 TIM06FLTFE;                                     /* TIM06FLTFE       */
    uint32 TIM06CTRL;                                      /* TIM06CTRL        */
    uint32 TIM06ECTRL;                                     /* TIM06ECTRL       */
    uint32 TIM06IRQNOTIFY;                                 /* TIM06IRQNOTIFY   */
    uint32 TIM06IRQEN;                                     /* TIM06IRQEN       */
    uint32 TIM06IRQFORCINT;                                /* TIM06IRQFORCINT  */
    uint32 TIM06IRQMODE;                                   /* TIM06IRQMODE     */
    uint32 TIM06EIRQEN;                                    /* TIM06EIRQEN      */
    uint8  dummy180[64];                                   /* Reserved         */
    uint32 TIM07GPR0;                                      /* TIM07GPR0        */
    uint32 TIM07GPR1;                                      /* TIM07GPR1        */
    uint32 TIM07CNT;                                       /* TIM07CNT         */
    uint32 TIM07ECNT;                                      /* TIM07ECNT        */
    uint32 TIM07CNTS;                                      /* TIM07CNTS        */
    uint32 TIM07TDUC;                                      /* TIM07TDUC        */
    uint32 TIM07TDUV;                                      /* TIM07TDUV        */
    uint32 TIM07FLTRE;                                     /* TIM07FLTRE       */
    uint32 TIM07FLTFE;                                     /* TIM07FLTFE       */
    uint32 TIM07CTRL;                                      /* TIM07CTRL        */
    uint32 TIM07ECTRL;                                     /* TIM07ECTRL       */
    uint32 TIM07IRQNOTIFY;                                 /* TIM07IRQNOTIFY   */
    uint32 TIM07IRQEN;                                     /* TIM07IRQEN       */
    uint32 TIM07IRQFORCINT;                                /* TIM07IRQFORCINT  */
    uint32 TIM07IRQMODE;                                   /* TIM07IRQMODE     */
    uint32 TIM07EIRQEN;                                    /* TIM07EIRQEN      */
    uint8  dummy181[1088];                                 /* Reserved         */
    uint32 TIM10GPR0;                                      /* TIM10GPR0        */
    uint32 TIM10GPR1;                                      /* TIM10GPR1        */
    uint32 TIM10CNT;                                       /* TIM10CNT         */
    uint32 TIM10ECNT;                                      /* TIM10ECNT        */
    uint32 TIM10CNTS;                                      /* TIM10CNTS        */
    uint32 TIM10TDUC;                                      /* TIM10TDUC        */
    uint32 TIM10TDUV;                                      /* TIM10TDUV        */
    uint32 TIM10FLTRE;                                     /* TIM10FLTRE       */
    uint32 TIM10FLTFE;                                     /* TIM10FLTFE       */
    uint32 TIM10CTRL;                                      /* TIM10CTRL        */
    uint32 TIM10ECTRL;                                     /* TIM10ECTRL       */
    uint32 TIM10IRQNOTIFY;                                 /* TIM10IRQNOTIFY   */
    uint32 TIM10IRQEN;                                     /* TIM10IRQEN       */
    uint32 TIM10IRQFORCINT;                                /* TIM10IRQFORCINT  */
    uint32 TIM10IRQMODE;                                   /* TIM10IRQMODE     */
    uint32 TIM10EIRQEN;                                    /* TIM10EIRQEN      */
    uint8  dummy182[52];                                   /* Reserved         */
    uint32 TIM1INPVAL;                                     /* TIM1INPVAL       */
    uint32 TIM1INSRC;                                      /* TIM1INSRC        */
    uint32 TIM1RST;                                        /* TIM1RST          */
    uint32 TIM11GPR0;                                      /* TIM11GPR0        */
    uint32 TIM11GPR1;                                      /* TIM11GPR1        */
    uint32 TIM11CNT;                                       /* TIM11CNT         */
    uint32 TIM11ECNT;                                      /* TIM11ECNT        */
    uint32 TIM11CNTS;                                      /* TIM11CNTS        */
    uint32 TIM11TDUC;                                      /* TIM11TDUC        */
    uint32 TIM11TDUV;                                      /* TIM11TDUV        */
    uint32 TIM11FLTRE;                                     /* TIM11FLTRE       */
    uint32 TIM11FLTFE;                                     /* TIM11FLTFE       */
    uint32 TIM11CTRL;                                      /* TIM11CTRL        */
    uint32 TIM11ECTRL;                                     /* TIM11ECTRL       */
    uint32 TIM11IRQNOTIFY;                                 /* TIM11IRQNOTIFY   */
    uint32 TIM11IRQEN;                                     /* TIM11IRQEN       */
    uint32 TIM11IRQFORCINT;                                /* TIM11IRQFORCINT  */
    uint32 TIM11IRQMODE;                                   /* TIM11IRQMODE     */
    uint32 TIM11EIRQEN;                                    /* TIM11EIRQEN      */
    uint8  dummy183[64];                                   /* Reserved         */
    uint32 TIM12GPR0;                                      /* TIM12GPR0        */
    uint32 TIM12GPR1;                                      /* TIM12GPR1        */
    uint32 TIM12CNT;                                       /* TIM12CNT         */
    uint32 TIM12ECNT;                                      /* TIM12ECNT        */
    uint32 TIM12CNTS;                                      /* TIM12CNTS        */
    uint32 TIM12TDUC;                                      /* TIM12TDUC        */
    uint32 TIM12TDUV;                                      /* TIM12TDUV        */
    uint32 TIM12FLTRE;                                     /* TIM12FLTRE       */
    uint32 TIM12FLTFE;                                     /* TIM12FLTFE       */
    uint32 TIM12CTRL;                                      /* TIM12CTRL        */
    uint32 TIM12ECTRL;                                     /* TIM12ECTRL       */
    uint32 TIM12IRQNOTIFY;                                 /* TIM12IRQNOTIFY   */
    uint32 TIM12IRQEN;                                     /* TIM12IRQEN       */
    uint32 TIM12IRQFORCINT;                                /* TIM12IRQFORCINT  */
    uint32 TIM12IRQMODE;                                   /* TIM12IRQMODE     */
    uint32 TIM12EIRQEN;                                    /* TIM12EIRQEN      */
    uint8  dummy184[64];                                   /* Reserved         */
    uint32 TIM13GPR0;                                      /* TIM13GPR0        */
    uint32 TIM13GPR1;                                      /* TIM13GPR1        */
    uint32 TIM13CNT;                                       /* TIM13CNT         */
    uint32 TIM13ECNT;                                      /* TIM13ECNT        */
    uint32 TIM13CNTS;                                      /* TIM13CNTS        */
    uint32 TIM13TDUC;                                      /* TIM13TDUC        */
    uint32 TIM13TDUV;                                      /* TIM13TDUV        */
    uint32 TIM13FLTRE;                                     /* TIM13FLTRE       */
    uint32 TIM13FLTFE;                                     /* TIM13FLTFE       */
    uint32 TIM13CTRL;                                      /* TIM13CTRL        */
    uint32 TIM13ECTRL;                                     /* TIM13ECTRL       */
    uint32 TIM13IRQNOTIFY;                                 /* TIM13IRQNOTIFY   */
    uint32 TIM13IRQEN;                                     /* TIM13IRQEN       */
    uint32 TIM13IRQFORCINT;                                /* TIM13IRQFORCINT  */
    uint32 TIM13IRQMODE;                                   /* TIM13IRQMODE     */
    uint32 TIM13EIRQEN;                                    /* TIM13EIRQEN      */
    uint8  dummy185[64];                                   /* Reserved         */
    uint32 TIM14GPR0;                                      /* TIM14GPR0        */
    uint32 TIM14GPR1;                                      /* TIM14GPR1        */
    uint32 TIM14CNT;                                       /* TIM14CNT         */
    uint32 TIM14ECNT;                                      /* TIM14ECNT        */
    uint32 TIM14CNTS;                                      /* TIM14CNTS        */
    uint32 TIM14TDUC;                                      /* TIM14TDUC        */
    uint32 TIM14TDUV;                                      /* TIM14TDUV        */
    uint32 TIM14FLTRE;                                     /* TIM14FLTRE       */
    uint32 TIM14FLTFE;                                     /* TIM14FLTFE       */
    uint32 TIM14CTRL;                                      /* TIM14CTRL        */
    uint32 TIM14ECTRL;                                     /* TIM14ECTRL       */
    uint32 TIM14IRQNOTIFY;                                 /* TIM14IRQNOTIFY   */
    uint32 TIM14IRQEN;                                     /* TIM14IRQEN       */
    uint32 TIM14IRQFORCINT;                                /* TIM14IRQFORCINT  */
    uint32 TIM14IRQMODE;                                   /* TIM14IRQMODE     */
    uint32 TIM14EIRQEN;                                    /* TIM14EIRQEN      */
    uint8  dummy186[64];                                   /* Reserved         */
    uint32 TIM15GPR0;                                      /* TIM15GPR0        */
    uint32 TIM15GPR1;                                      /* TIM15GPR1        */
    uint32 TIM15CNT;                                       /* TIM15CNT         */
    uint32 TIM15ECNT;                                      /* TIM15ECNT        */
    uint32 TIM15CNTS;                                      /* TIM15CNTS        */
    uint32 TIM15TDUC;                                      /* TIM15TDUC        */
    uint32 TIM15TDUV;                                      /* TIM15TDUV        */
    uint32 TIM15FLTRE;                                     /* TIM15FLTRE       */
    uint32 TIM15FLTFE;                                     /* TIM15FLTFE       */
    uint32 TIM15CTRL;                                      /* TIM15CTRL        */
    uint32 TIM15ECTRL;                                     /* TIM15ECTRL       */
    uint32 TIM15IRQNOTIFY;                                 /* TIM15IRQNOTIFY   */
    uint32 TIM15IRQEN;                                     /* TIM15IRQEN       */
    uint32 TIM15IRQFORCINT;                                /* TIM15IRQFORCINT  */
    uint32 TIM15IRQMODE;                                   /* TIM15IRQMODE     */
    uint32 TIM15EIRQEN;                                    /* TIM15EIRQEN      */
    uint8  dummy187[64];                                   /* Reserved         */
    uint32 TIM16GPR0;                                      /* TIM16GPR0        */
    uint32 TIM16GPR1;                                      /* TIM16GPR1        */
    uint32 TIM16CNT;                                       /* TIM16CNT         */
    uint32 TIM16ECNT;                                      /* TIM16ECNT        */
    uint32 TIM16CNTS;                                      /* TIM16CNTS        */
    uint32 TIM16TDUC;                                      /* TIM16TDUC        */
    uint32 TIM16TDUV;                                      /* TIM16TDUV        */
    uint32 TIM16FLTRE;                                     /* TIM16FLTRE       */
    uint32 TIM16FLTFE;                                     /* TIM16FLTFE       */
    uint32 TIM16CTRL;                                      /* TIM16CTRL        */
    uint32 TIM16ECTRL;                                     /* TIM16ECTRL       */
    uint32 TIM16IRQNOTIFY;                                 /* TIM16IRQNOTIFY   */
    uint32 TIM16IRQEN;                                     /* TIM16IRQEN       */
    uint32 TIM16IRQFORCINT;                                /* TIM16IRQFORCINT  */
    uint32 TIM16IRQMODE;                                   /* TIM16IRQMODE     */
    uint32 TIM16EIRQEN;                                    /* TIM16EIRQEN      */
    uint8  dummy188[64];                                   /* Reserved         */
    uint32 TIM17GPR0;                                      /* TIM17GPR0        */
    uint32 TIM17GPR1;                                      /* TIM17GPR1        */
    uint32 TIM17CNT;                                       /* TIM17CNT         */
    uint32 TIM17ECNT;                                      /* TIM17ECNT        */
    uint32 TIM17CNTS;                                      /* TIM17CNTS        */
    uint32 TIM17TDUC;                                      /* TIM17TDUC        */
    uint32 TIM17TDUV;                                      /* TIM17TDUV        */
    uint32 TIM17FLTRE;                                     /* TIM17FLTRE       */
    uint32 TIM17FLTFE;                                     /* TIM17FLTFE       */
    uint32 TIM17CTRL;                                      /* TIM17CTRL        */
    uint32 TIM17ECTRL;                                     /* TIM17ECTRL       */
    uint32 TIM17IRQNOTIFY;                                 /* TIM17IRQNOTIFY   */
    uint32 TIM17IRQEN;                                     /* TIM17IRQEN       */
    uint32 TIM17IRQFORCINT;                                /* TIM17IRQFORCINT  */
    uint32 TIM17IRQMODE;                                   /* TIM17IRQMODE     */
    uint32 TIM17EIRQEN;                                    /* TIM17EIRQEN      */
    uint8  dummy189[46144];                                /* Reserved         */
    uint32 ATOM00RDADDR;                                   /* ATOM00RDADDR     */
    uint32 ATOM00CTRL;                                     /* ATOM00CTRL       */
    uint32 ATOM00SR0;                                      /* ATOM00SR0        */
    uint32 ATOM00SR1;                                      /* ATOM00SR1        */
    uint32 ATOM00CM0;                                      /* ATOM00CM0        */
    uint32 ATOM00CM1;                                      /* ATOM00CM1        */
    uint32 ATOM00CN0;                                      /* ATOM00CN0        */
    uint32 ATOM00STAT;                                     /* ATOM00STAT       */
    uint32 ATOM00IRQNOTIFY;                                /* ATOM00IRQNOTIFY  */
    uint32 ATOM00IRQEN;                                    /* ATOM00IRQEN      */
    uint32 ATOM00IRQFORCINT;                               /* ATOM00IRQFORCINT */
    uint32 ATOM00IRQMODE;                                  /* ATOM00IRQMODE    */
    uint8  dummy190[16];                                   /* Reserved         */
    uint32 ATOM0AGCGLBCTRL;                                /* ATOM0AGCGLBCTRL  */
    uint32 ATOM0AGCENDISCTRL;                              /* ATOM0AGCENDISCTRL */
    uint32 ATOM0AGCENDISSTAT;                              /* ATOM0AGCENDISSTAT */
    uint32 ATOM0AGCACTTB;                                  /* ATOM0AGCACTTB    */
    uint32 ATOM0AGCOUTENCTRL;                              /* ATOM0AGCOUTENCTRL */
    uint32 ATOM0AGCOUTENSTAT;                              /* ATOM0AGCOUTENSTAT */
    uint32 ATOM0AGCFUPDCTRL;                               /* ATOM0AGCFUPDCTRL */
    uint32 ATOM0AGCINTTRIG;                                /* ATOM0AGCINTTRIG  */
    uint8  dummy191[32];                                   /* Reserved         */
    uint32 ATOM01RDADDR;                                   /* ATOM01RDADDR     */
    uint32 ATOM01CTRL;                                     /* ATOM01CTRL       */
    uint32 ATOM01SR0;                                      /* ATOM01SR0        */
    uint32 ATOM01SR1;                                      /* ATOM01SR1        */
    uint32 ATOM01CM0;                                      /* ATOM01CM0        */
    uint32 ATOM01CM1;                                      /* ATOM01CM1        */
    uint32 ATOM01CN0;                                      /* ATOM01CN0        */
    uint32 ATOM01STAT;                                     /* ATOM01STAT       */
    uint32 ATOM01IRQNOTIFY;                                /* ATOM01IRQNOTIFY  */
    uint32 ATOM01IRQEN;                                    /* ATOM01IRQEN      */
    uint32 ATOM01IRQFORCINT;                               /* ATOM01IRQFORCINT */
    uint32 ATOM01IRQMODE;                                  /* ATOM01IRQMODE    */
    uint8  dummy192[80];                                   /* Reserved         */
    uint32 ATOM02RDADDR;                                   /* ATOM02RDADDR     */
    uint32 ATOM02CTRL;                                     /* ATOM02CTRL       */
    uint32 ATOM02SR0;                                      /* ATOM02SR0        */
    uint32 ATOM02SR1;                                      /* ATOM02SR1        */
    uint32 ATOM02CM0;                                      /* ATOM02CM0        */
    uint32 ATOM02CM1;                                      /* ATOM02CM1        */
    uint32 ATOM02CN0;                                      /* ATOM02CN0        */
    uint32 ATOM02STAT;                                     /* ATOM02STAT       */
    uint32 ATOM02IRQNOTIFY;                                /* ATOM02IRQNOTIFY  */
    uint32 ATOM02IRQEN;                                    /* ATOM02IRQEN      */
    uint32 ATOM02IRQFORCINT;                               /* ATOM02IRQFORCINT */
    uint32 ATOM02IRQMODE;                                  /* ATOM02IRQMODE    */
    uint8  dummy193[80];                                   /* Reserved         */
    uint32 ATOM03RDADDR;                                   /* ATOM03RDADDR     */
    uint32 ATOM03CTRL;                                     /* ATOM03CTRL       */
    uint32 ATOM03SR0;                                      /* ATOM03SR0        */
    uint32 ATOM03SR1;                                      /* ATOM03SR1        */
    uint32 ATOM03CM0;                                      /* ATOM03CM0        */
    uint32 ATOM03CM1;                                      /* ATOM03CM1        */
    uint32 ATOM03CN0;                                      /* ATOM03CN0        */
    uint32 ATOM03STAT;                                     /* ATOM03STAT       */
    uint32 ATOM03IRQNOTIFY;                                /* ATOM03IRQNOTIFY  */
    uint32 ATOM03IRQEN;                                    /* ATOM03IRQEN      */
    uint32 ATOM03IRQFORCINT;                               /* ATOM03IRQFORCINT */
    uint32 ATOM03IRQMODE;                                  /* ATOM03IRQMODE    */
    uint8  dummy194[80];                                   /* Reserved         */
    uint32 ATOM04RDADDR;                                   /* ATOM04RDADDR     */
    uint32 ATOM04CTRL;                                     /* ATOM04CTRL       */
    uint32 ATOM04SR0;                                      /* ATOM04SR0        */
    uint32 ATOM04SR1;                                      /* ATOM04SR1        */
    uint32 ATOM04CM0;                                      /* ATOM04CM0        */
    uint32 ATOM04CM1;                                      /* ATOM04CM1        */
    uint32 ATOM04CN0;                                      /* ATOM04CN0        */
    uint32 ATOM04STAT;                                     /* ATOM04STAT       */
    uint32 ATOM04IRQNOTIFY;                                /* ATOM04IRQNOTIFY  */
    uint32 ATOM04IRQEN;                                    /* ATOM04IRQEN      */
    uint32 ATOM04IRQFORCINT;                               /* ATOM04IRQFORCINT */
    uint32 ATOM04IRQMODE;                                  /* ATOM04IRQMODE    */
    uint8  dummy195[80];                                   /* Reserved         */
    uint32 ATOM05RDADDR;                                   /* ATOM05RDADDR     */
    uint32 ATOM05CTRL;                                     /* ATOM05CTRL       */
    uint32 ATOM05SR0;                                      /* ATOM05SR0        */
    uint32 ATOM05SR1;                                      /* ATOM05SR1        */
    uint32 ATOM05CM0;                                      /* ATOM05CM0        */
    uint32 ATOM05CM1;                                      /* ATOM05CM1        */
    uint32 ATOM05CN0;                                      /* ATOM05CN0        */
    uint32 ATOM05STAT;                                     /* ATOM05STAT       */
    uint32 ATOM05IRQNOTIFY;                                /* ATOM05IRQNOTIFY  */
    uint32 ATOM05IRQEN;                                    /* ATOM05IRQEN      */
    uint32 ATOM05IRQFORCINT;                               /* ATOM05IRQFORCINT */
    uint32 ATOM05IRQMODE;                                  /* ATOM05IRQMODE    */
    uint8  dummy196[80];                                   /* Reserved         */
    uint32 ATOM06RDADDR;                                   /* ATOM06RDADDR     */
    uint32 ATOM06CTRL;                                     /* ATOM06CTRL       */
    uint32 ATOM06SR0;                                      /* ATOM06SR0        */
    uint32 ATOM06SR1;                                      /* ATOM06SR1        */
    uint32 ATOM06CM0;                                      /* ATOM06CM0        */
    uint32 ATOM06CM1;                                      /* ATOM06CM1        */
    uint32 ATOM06CN0;                                      /* ATOM06CN0        */
    uint32 ATOM06STAT;                                     /* ATOM06STAT       */
    uint32 ATOM06IRQNOTIFY;                                /* ATOM06IRQNOTIFY  */
    uint32 ATOM06IRQEN;                                    /* ATOM06IRQEN      */
    uint32 ATOM06IRQFORCINT;                               /* ATOM06IRQFORCINT */
    uint32 ATOM06IRQMODE;                                  /* ATOM06IRQMODE    */
    uint8  dummy197[80];                                   /* Reserved         */
    uint32 ATOM07RDADDR;                                   /* ATOM07RDADDR     */
    uint32 ATOM07CTRL;                                     /* ATOM07CTRL       */
    uint32 ATOM07SR0;                                      /* ATOM07SR0        */
    uint32 ATOM07SR1;                                      /* ATOM07SR1        */
    uint32 ATOM07CM0;                                      /* ATOM07CM0        */
    uint32 ATOM07CM1;                                      /* ATOM07CM1        */
    uint32 ATOM07CN0;                                      /* ATOM07CN0        */
    uint32 ATOM07STAT;                                     /* ATOM07STAT       */
    uint32 ATOM07IRQNOTIFY;                                /* ATOM07IRQNOTIFY  */
    uint32 ATOM07IRQEN;                                    /* ATOM07IRQEN      */
    uint32 ATOM07IRQFORCINT;                               /* ATOM07IRQFORCINT */
    uint32 ATOM07IRQMODE;                                  /* ATOM07IRQMODE    */
    uint8  dummy198[1104];                                 /* Reserved         */
    uint32 ATOM10RDADDR;                                   /* ATOM10RDADDR     */
    uint32 ATOM10CTRL;                                     /* ATOM10CTRL       */
    uint32 ATOM10SR0;                                      /* ATOM10SR0        */
    uint32 ATOM10SR1;                                      /* ATOM10SR1        */
    uint32 ATOM10CM0;                                      /* ATOM10CM0        */
    uint32 ATOM10CM1;                                      /* ATOM10CM1        */
    uint32 ATOM10CN0;                                      /* ATOM10CN0        */
    uint32 ATOM10STAT;                                     /* ATOM10STAT       */
    uint32 ATOM10IRQNOTIFY;                                /* ATOM10IRQNOTIFY  */
    uint32 ATOM10IRQEN;                                    /* ATOM10IRQEN      */
    uint32 ATOM10IRQFORCINT;                               /* ATOM10IRQFORCINT */
    uint32 ATOM10IRQMODE;                                  /* ATOM10IRQMODE    */
    uint8  dummy199[16];                                   /* Reserved         */
    uint32 ATOM1AGCGLBCTRL;                                /* ATOM1AGCGLBCTRL  */
    uint32 ATOM1AGCENDISCTRL;                              /* ATOM1AGCENDISCTRL */
    uint32 ATOM1AGCENDISSTAT;                              /* ATOM1AGCENDISSTAT */
    uint32 ATOM1AGCACTTB;                                  /* ATOM1AGCACTTB    */
    uint32 ATOM1AGCOUTENCTRL;                              /* ATOM1AGCOUTENCTRL */
    uint32 ATOM1AGCOUTENSTAT;                              /* ATOM1AGCOUTENSTAT */
    uint32 ATOM1AGCFUPDCTRL;                               /* ATOM1AGCFUPDCTRL */
    uint32 ATOM1AGCINTTRIG;                                /* ATOM1AGCINTTRIG  */
    uint8  dummy200[32];                                   /* Reserved         */
    uint32 ATOM11RDADDR;                                   /* ATOM11RDADDR     */
    uint32 ATOM11CTRL;                                     /* ATOM11CTRL       */
    uint32 ATOM11SR0;                                      /* ATOM11SR0        */
    uint32 ATOM11SR1;                                      /* ATOM11SR1        */
    uint32 ATOM11CM0;                                      /* ATOM11CM0        */
    uint32 ATOM11CM1;                                      /* ATOM11CM1        */
    uint32 ATOM11CN0;                                      /* ATOM11CN0        */
    uint32 ATOM11STAT;                                     /* ATOM11STAT       */
    uint32 ATOM11IRQNOTIFY;                                /* ATOM11IRQNOTIFY  */
    uint32 ATOM11IRQEN;                                    /* ATOM11IRQEN      */
    uint32 ATOM11IRQFORCINT;                               /* ATOM11IRQFORCINT */
    uint32 ATOM11IRQMODE;                                  /* ATOM11IRQMODE    */
    uint8  dummy201[80];                                   /* Reserved         */
    uint32 ATOM12RDADDR;                                   /* ATOM12RDADDR     */
    uint32 ATOM12CTRL;                                     /* ATOM12CTRL       */
    uint32 ATOM12SR0;                                      /* ATOM12SR0        */
    uint32 ATOM12SR1;                                      /* ATOM12SR1        */
    uint32 ATOM12CM0;                                      /* ATOM12CM0        */
    uint32 ATOM12CM1;                                      /* ATOM12CM1        */
    uint32 ATOM12CN0;                                      /* ATOM12CN0        */
    uint32 ATOM12STAT;                                     /* ATOM12STAT       */
    uint32 ATOM12IRQNOTIFY;                                /* ATOM12IRQNOTIFY  */
    uint32 ATOM12IRQEN;                                    /* ATOM12IRQEN      */
    uint32 ATOM12IRQFORCINT;                               /* ATOM12IRQFORCINT */
    uint32 ATOM12IRQMODE;                                  /* ATOM12IRQMODE    */
    uint8  dummy202[80];                                   /* Reserved         */
    uint32 ATOM13RDADDR;                                   /* ATOM13RDADDR     */
    uint32 ATOM13CTRL;                                     /* ATOM13CTRL       */
    uint32 ATOM13SR0;                                      /* ATOM13SR0        */
    uint32 ATOM13SR1;                                      /* ATOM13SR1        */
    uint32 ATOM13CM0;                                      /* ATOM13CM0        */
    uint32 ATOM13CM1;                                      /* ATOM13CM1        */
    uint32 ATOM13CN0;                                      /* ATOM13CN0        */
    uint32 ATOM13STAT;                                     /* ATOM13STAT       */
    uint32 ATOM13IRQNOTIFY;                                /* ATOM13IRQNOTIFY  */
    uint32 ATOM13IRQEN;                                    /* ATOM13IRQEN      */
    uint32 ATOM13IRQFORCINT;                               /* ATOM13IRQFORCINT */
    uint32 ATOM13IRQMODE;                                  /* ATOM13IRQMODE    */
    uint8  dummy203[23632];                                /* Reserved         */
    uint32 DTM24CTRL;                                      /* DTM24CTRL        */
    uint32 DTM24CHCTRL1;                                   /* DTM24CHCTRL1     */
    uint32 DTM24CHCTRL2;                                   /* DTM24CHCTRL2     */
    uint32 DTM24CHCTRL2SR;                                 /* DTM24CHCTRL2SR   */
    uint32 DTM24PSCTRL;                                    /* DTM24PSCTRL      */
    uint32 DTM240DTV;                                      /* DTM240DTV        */
    uint32 DTM241DTV;                                      /* DTM241DTV        */
    uint32 DTM242DTV;                                      /* DTM242DTV        */
    uint32 DTM243DTV;                                      /* DTM243DTV        */
    uint32 DTM24CHSR;                                      /* DTM24CHSR        */
    uint8  dummy204[88];                                   /* Reserved         */
    uint32 DTM26CTRL;                                      /* DTM26CTRL        */
    uint32 DTM26CHCTRL1;                                   /* DTM26CHCTRL1     */
    uint32 DTM26CHCTRL2;                                   /* DTM26CHCTRL2     */
    uint32 DTM26CHCTRL2SR;                                 /* DTM26CHCTRL2SR   */
    uint32 DTM26PSCTRL;                                    /* DTM26PSCTRL      */
    uint32 DTM260DTV;                                      /* DTM260DTV        */
    uint32 DTM261DTV;                                      /* DTM261DTV        */
    uint32 DTM262DTV;                                      /* DTM262DTV        */
    uint32 DTM263DTV;                                      /* DTM263DTV        */
    uint32 DTM26CHSR;                                      /* DTM26CHSR        */
    uint8  dummy205[117080];                               /* Reserved         */
    uint32 MCS00R0;                                        /* MCS00R0          */
    uint32 MCS00R1;                                        /* MCS00R1          */
    uint32 MCS00R2;                                        /* MCS00R2          */
    uint32 MCS00R3;                                        /* MCS00R3          */
    uint32 MCS00R4;                                        /* MCS00R4          */
    uint32 MCS00R5;                                        /* MCS00R5          */
    uint32 MCS00R6;                                        /* MCS00R6          */
    uint32 MCS00R7;                                        /* MCS00R7          */
    uint32 MCS00CTRL;                                      /* MCS00CTRL        */
    uint32 MCS00ACB;                                       /* MCS00ACB         */
    uint32 MCS0CTRG;                                       /* MCS0CTRG         */
    uint32 MCS0STRG;                                       /* MCS0STRG         */
    uint8  dummy206[12];                                   /* Reserved         */
    uint32 MCS00MHB;                                       /* MCS00MHB         */
    uint32 MCS00PC;                                        /* MCS00PC          */
    uint32 MCS00IRQNOTIFY;                                 /* MCS00IRQNOTIFY   */
    uint32 MCS00IRQEN;                                     /* MCS00IRQEN       */
    uint32 MCS00IRQFORCINT;                                /* MCS00IRQFORCINT  */
    uint32 MCS00IRQMODE;                                   /* MCS00IRQMODE     */
    uint32 MCS00EIRQEN;                                    /* MCS00EIRQEN      */
    uint8  dummy207[12];                                   /* Reserved         */
    uint32 MCS0CTRLSTAT;                                   /* MCS0CTRLSTAT     */
    uint32 MCS0RESET;                                      /* MCS0RESET        */
    uint32 MCS0CAT;                                        /* MCS0CAT          */
    uint32 MCS0CWT;                                        /* MCS0CWT          */
    uint8  dummy208[8];                                    /* Reserved         */
    uint32 MCS0ERR;                                        /* MCS0ERR          */
    uint32 MCS01R0;                                        /* MCS01R0          */
    uint32 MCS01R1;                                        /* MCS01R1          */
    uint32 MCS01R2;                                        /* MCS01R2          */
    uint32 MCS01R3;                                        /* MCS01R3          */
    uint32 MCS01R4;                                        /* MCS01R4          */
    uint32 MCS01R5;                                        /* MCS01R5          */
    uint32 MCS01R6;                                        /* MCS01R6          */
    uint32 MCS01R7;                                        /* MCS01R7          */
    uint32 MCS01CTRL;                                      /* MCS01CTRL        */
    uint32 MCS01ACB;                                       /* MCS01ACB         */
    uint8  dummy209[20];                                   /* Reserved         */
    uint32 MCS01MHB;                                       /* MCS01MHB         */
    uint32 MCS01PC;                                        /* MCS01PC          */
    uint32 MCS01IRQNOTIFY;                                 /* MCS01IRQNOTIFY   */
    uint32 MCS01IRQEN;                                     /* MCS01IRQEN       */
    uint32 MCS01IRQFORCINT;                                /* MCS01IRQFORCINT  */
    uint32 MCS01IRQMODE;                                   /* MCS01IRQMODE     */
    uint32 MCS01EIRQEN;                                    /* MCS01EIRQEN      */
    uint8  dummy210[40];                                   /* Reserved         */
    uint32 MCS02R0;                                        /* MCS02R0          */
    uint32 MCS02R1;                                        /* MCS02R1          */
    uint32 MCS02R2;                                        /* MCS02R2          */
    uint32 MCS02R3;                                        /* MCS02R3          */
    uint32 MCS02R4;                                        /* MCS02R4          */
    uint32 MCS02R5;                                        /* MCS02R5          */
    uint32 MCS02R6;                                        /* MCS02R6          */
    uint32 MCS02R7;                                        /* MCS02R7          */
    uint32 MCS02CTRL;                                      /* MCS02CTRL        */
    uint32 MCS02ACB;                                       /* MCS02ACB         */
    uint8  dummy211[20];                                   /* Reserved         */
    uint32 MCS02MHB;                                       /* MCS02MHB         */
    uint32 MCS02PC;                                        /* MCS02PC          */
    uint32 MCS02IRQNOTIFY;                                 /* MCS02IRQNOTIFY   */
    uint32 MCS02IRQEN;                                     /* MCS02IRQEN       */
    uint32 MCS02IRQFORCINT;                                /* MCS02IRQFORCINT  */
    uint32 MCS02IRQMODE;                                   /* MCS02IRQMODE     */
    uint32 MCS02EIRQEN;                                    /* MCS02EIRQEN      */
    uint8  dummy212[40];                                   /* Reserved         */
    uint32 MCS03R0;                                        /* MCS03R0          */
    uint32 MCS03R1;                                        /* MCS03R1          */
    uint32 MCS03R2;                                        /* MCS03R2          */
    uint32 MCS03R3;                                        /* MCS03R3          */
    uint32 MCS03R4;                                        /* MCS03R4          */
    uint32 MCS03R5;                                        /* MCS03R5          */
    uint32 MCS03R6;                                        /* MCS03R6          */
    uint32 MCS03R7;                                        /* MCS03R7          */
    uint32 MCS03CTRL;                                      /* MCS03CTRL        */
    uint32 MCS03ACB;                                       /* MCS03ACB         */
    uint8  dummy213[20];                                   /* Reserved         */
    uint32 MCS03MHB;                                       /* MCS03MHB         */
    uint32 MCS03PC;                                        /* MCS03PC          */
    uint32 MCS03IRQNOTIFY;                                 /* MCS03IRQNOTIFY   */
    uint32 MCS03IRQEN;                                     /* MCS03IRQEN       */
    uint32 MCS03IRQFORCINT;                                /* MCS03IRQFORCINT  */
    uint32 MCS03IRQMODE;                                   /* MCS03IRQMODE     */
    uint32 MCS03EIRQEN;                                    /* MCS03EIRQEN      */
    uint8  dummy214[40];                                   /* Reserved         */
    uint32 MCS04R0;                                        /* MCS04R0          */
    uint32 MCS04R1;                                        /* MCS04R1          */
    uint32 MCS04R2;                                        /* MCS04R2          */
    uint32 MCS04R3;                                        /* MCS04R3          */
    uint32 MCS04R4;                                        /* MCS04R4          */
    uint32 MCS04R5;                                        /* MCS04R5          */
    uint32 MCS04R6;                                        /* MCS04R6          */
    uint32 MCS04R7;                                        /* MCS04R7          */
    uint32 MCS04CTRL;                                      /* MCS04CTRL        */
    uint32 MCS04ACB;                                       /* MCS04ACB         */
    uint8  dummy215[20];                                   /* Reserved         */
    uint32 MCS04MHB;                                       /* MCS04MHB         */
    uint32 MCS04PC;                                        /* MCS04PC          */
    uint32 MCS04IRQNOTIFY;                                 /* MCS04IRQNOTIFY   */
    uint32 MCS04IRQEN;                                     /* MCS04IRQEN       */
    uint32 MCS04IRQFORCINT;                                /* MCS04IRQFORCINT  */
    uint32 MCS04IRQMODE;                                   /* MCS04IRQMODE     */
    uint32 MCS04EIRQEN;                                    /* MCS04EIRQEN      */
    uint8  dummy216[40];                                   /* Reserved         */
    uint32 MCS05R0;                                        /* MCS05R0          */
    uint32 MCS05R1;                                        /* MCS05R1          */
    uint32 MCS05R2;                                        /* MCS05R2          */
    uint32 MCS05R3;                                        /* MCS05R3          */
    uint32 MCS05R4;                                        /* MCS05R4          */
    uint32 MCS05R5;                                        /* MCS05R5          */
    uint32 MCS05R6;                                        /* MCS05R6          */
    uint32 MCS05R7;                                        /* MCS05R7          */
    uint32 MCS05CTRL;                                      /* MCS05CTRL        */
    uint32 MCS05ACB;                                       /* MCS05ACB         */
    uint8  dummy217[20];                                   /* Reserved         */
    uint32 MCS05MHB;                                       /* MCS05MHB         */
    uint32 MCS05PC;                                        /* MCS05PC          */
    uint32 MCS05IRQNOTIFY;                                 /* MCS05IRQNOTIFY   */
    uint32 MCS05IRQEN;                                     /* MCS05IRQEN       */
    uint32 MCS05IRQFORCINT;                                /* MCS05IRQFORCINT  */
    uint32 MCS05IRQMODE;                                   /* MCS05IRQMODE     */
    uint32 MCS05EIRQEN;                                    /* MCS05EIRQEN      */
    uint8  dummy218[40];                                   /* Reserved         */
    uint32 MCS06R0;                                        /* MCS06R0          */
    uint32 MCS06R1;                                        /* MCS06R1          */
    uint32 MCS06R2;                                        /* MCS06R2          */
    uint32 MCS06R3;                                        /* MCS06R3          */
    uint32 MCS06R4;                                        /* MCS06R4          */
    uint32 MCS06R5;                                        /* MCS06R5          */
    uint32 MCS06R6;                                        /* MCS06R6          */
    uint32 MCS06R7;                                        /* MCS06R7          */
    uint32 MCS06CTRL;                                      /* MCS06CTRL        */
    uint32 MCS06ACB;                                       /* MCS06ACB         */
    uint8  dummy219[20];                                   /* Reserved         */
    uint32 MCS06MHB;                                       /* MCS06MHB         */
    uint32 MCS06PC;                                        /* MCS06PC          */
    uint32 MCS06IRQNOTIFY;                                 /* MCS06IRQNOTIFY   */
    uint32 MCS06IRQEN;                                     /* MCS06IRQEN       */
    uint32 MCS06IRQFORCINT;                                /* MCS06IRQFORCINT  */
    uint32 MCS06IRQMODE;                                   /* MCS06IRQMODE     */
    uint32 MCS06EIRQEN;                                    /* MCS06EIRQEN      */
    uint8  dummy220[40];                                   /* Reserved         */
    uint32 MCS07R0;                                        /* MCS07R0          */
    uint32 MCS07R1;                                        /* MCS07R1          */
    uint32 MCS07R2;                                        /* MCS07R2          */
    uint32 MCS07R3;                                        /* MCS07R3          */
    uint32 MCS07R4;                                        /* MCS07R4          */
    uint32 MCS07R5;                                        /* MCS07R5          */
    uint32 MCS07R6;                                        /* MCS07R6          */
    uint32 MCS07R7;                                        /* MCS07R7          */
    uint32 MCS07CTRL;                                      /* MCS07CTRL        */
    uint32 MCS07ACB;                                       /* MCS07ACB         */
    uint8  dummy221[20];                                   /* Reserved         */
    uint32 MCS07MHB;                                       /* MCS07MHB         */
    uint32 MCS07PC;                                        /* MCS07PC          */
    uint32 MCS07IRQNOTIFY;                                 /* MCS07IRQNOTIFY   */
    uint32 MCS07IRQEN;                                     /* MCS07IRQEN       */
    uint32 MCS07IRQFORCINT;                                /* MCS07IRQFORCINT  */
    uint32 MCS07IRQMODE;                                   /* MCS07IRQMODE     */
    uint32 MCS07EIRQEN;                                    /* MCS07EIRQEN      */
    uint8  dummy222[40];                                   /* Reserved         */
    uint32 MCS08R0;                                        /* MCS08R0          */
    uint32 MCS08R1;                                        /* MCS08R1          */
    uint32 MCS08R2;                                        /* MCS08R2          */
    uint32 MCS08R3;                                        /* MCS08R3          */
    uint32 MCS08R4;                                        /* MCS08R4          */
    uint32 MCS08R5;                                        /* MCS08R5          */
    uint32 MCS08R6;                                        /* MCS08R6          */
    uint32 MCS08R7;                                        /* MCS08R7          */
    uint32 MCS08CTRL;                                      /* MCS08CTRL        */
    uint32 MCS08ACB;                                       /* MCS08ACB         */
    uint8  dummy223[20];                                   /* Reserved         */
    uint32 MCS08MHB;                                       /* MCS08MHB         */
    uint32 MCS08PC;                                        /* MCS08PC          */
    uint32 MCS08IRQNOTIFY;                                 /* MCS08IRQNOTIFY   */
    uint32 MCS08IRQEN;                                     /* MCS08IRQEN       */
    uint32 MCS08IRQFORCINT;                                /* MCS08IRQFORCINT  */
    uint32 MCS08IRQMODE;                                   /* MCS08IRQMODE     */
    uint32 MCS08EIRQEN;                                    /* MCS08EIRQEN      */
} __type94;
typedef struct 
{                                                          /* Module           */
    uint8  WDTE;                                           /* WDTE             */
    uint8  dummy224[3];                                    /* Reserved         */
    uint8  EVAC;                                           /* EVAC             */
    uint8  dummy225[3];                                    /* Reserved         */
    uint8  REF;                                            /* REF              */
    uint8  dummy226[3];                                    /* Reserved         */
    uint8  MD;                                             /* MD               */
} __type95;
typedef struct 
{                                                          /* Module           */
    uint32 CLR;                                            /* CLR              */
    uint32 STS0;                                           /* STS0             */
    uint32 STS1;                                           /* STS1             */
    uint32 STSC;                                           /* STSC             */
    uint32 WDTE;                                           /* WDTE             */
    uint32 MD;                                             /* MD               */
    uint8  dummy227[8];                                    /* Reserved         */
    uint32 PCAD;                                           /* PCAD             */
} __type96;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    uint8  dummy228[32];                                   /* Reserved         */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    uint8  dummy229[16];                                   /* Reserved         */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
} __type97;
typedef struct 
{                                                          /* Module           */
    __type28 CREL;                                         /* CREL             */
    __type28 ENDN;                                         /* ENDN             */
    uint8  dummy230[4];                                    /* Reserved         */
    __type53 DBTP;                                         /* DBTP             */
    __type28 TEST;                                         /* TEST             */
    __type28 RWD;                                          /* RWD              */
    __type28 CCCR;                                         /* CCCR             */
    __type54 BTP;                                          /* BTP              */
    __type28 TSCC;                                         /* TSCC             */
    __type28 TSCV;                                         /* TSCV             */
    __type28 TOCC;                                         /* TOCC             */
    __type28 TOCV;                                         /* TOCV             */
    uint8  dummy231[16];                                   /* Reserved         */
    __type28 ECR;                                          /* ECR              */
    __type28 PSR;                                          /* PSR              */
    __type28 TDCR;                                         /* TDCR             */
    uint8  dummy232[4];                                    /* Reserved         */
    __type28 IR;                                           /* IR               */
    __type28 IE;                                           /* IE               */
    __type28 ILS;                                          /* ILS              */
    __type28 ILE;                                          /* ILE              */
    uint8  dummy233[32];                                   /* Reserved         */
    __type28 GFC;                                          /* GFC              */
    __type28 SIDFC;                                        /* SIDFC            */
    __type28 XIDFC;                                        /* XIDFC            */
    uint8  dummy234[4];                                    /* Reserved         */
    __type28 XIDAM;                                        /* XIDAM            */
    __type28 HPMS;                                         /* HPMS             */
    __type28 NDAT1;                                        /* NDAT1            */
    __type28 NDAT2;                                        /* NDAT2            */
    __type28 RXF0C;                                        /* RXF0C            */
    __type28 RXF0S;                                        /* RXF0S            */
    __type28 RXF0A;                                        /* RXF0A            */
    __type28 RXBC;                                         /* RXBC             */
    __type28 RXF1C;                                        /* RXF1C            */
    __type28 RXF1S;                                        /* RXF1S            */
    __type28 RXF1A;                                        /* RXF1A            */
    __type28 RXESC;                                        /* RXESC            */
    __type28 TXBC;                                         /* TXBC             */
    __type28 TXFQS;                                        /* TXFQS            */
    __type28 TXESC;                                        /* TXESC            */
    __type28 TXBRP;                                        /* TXBRP            */
    __type28 TXBAR;                                        /* TXBAR            */
    __type28 TXBCR;                                        /* TXBCR            */
    __type28 TXBTO;                                        /* TXBTO            */
    __type28 TXBCF;                                        /* TXBCF            */
    __type28 TXBTIE;                                       /* TXBTIE           */
    __type28 TXBCIE;                                       /* TXBCIE           */
    uint8  dummy235[8];                                    /* Reserved         */
    __type28 TXEFC;                                        /* TXEFC            */
    __type28 TXEFS;                                        /* TXEFS            */
    __type28 TXEFA;                                        /* TXEFA            */
} __type98;
typedef struct 
{                                                          /* Module           */
    uint8  CTL0;                                           /* CTL0             */
    uint8  dummy236[7];                                    /* Reserved         */
    uint16 CMPL;                                           /* CMPL             */
    uint8  dummy237[2];                                    /* Reserved         */
    uint16 CMPH;                                           /* CMPH             */
    uint8  dummy238[2];                                    /* Reserved         */
    uint8  PCMD;                                           /* PCMD             */
    uint8  dummy239[3];                                    /* Reserved         */
    uint8  PS;                                             /* PS               */
    uint8  dummy240[3];                                    /* Reserved         */
    uint8  EMU0;                                           /* EMU0             */
} __type99;
typedef struct 
{                                                          /* Module           */
    uint8  CTL0;                                           /* CTL0             */
    uint8  dummy241[3];                                    /* Reserved         */
    uint8  CTL1;                                           /* CTL1             */
    uint8  dummy242[3];                                    /* Reserved         */
    uint16 CMPL;                                           /* CMPL             */
    uint8  dummy243[2];                                    /* Reserved         */
    uint16 CMPH;                                           /* CMPH             */
    uint8  dummy244[2];                                    /* Reserved         */
    uint8  PCMD;                                           /* PCMD             */
    uint8  dummy245[3];                                    /* Reserved         */
    uint8  PS;                                             /* PS               */
    uint8  dummy246[3];                                    /* Reserved         */
    uint8  EMU0;                                           /* EMU0             */
} __type100;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    __type28 PROT08;                                       /* PROT08           */
    __type28 SPID08;                                       /* SPID08           */
    __type28 PROT09;                                       /* PROT09           */
    __type28 SPID09;                                       /* SPID09           */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
    __type28 PROT14;                                       /* PROT14           */
    __type28 SPID14;                                       /* SPID14           */
    __type28 PROT15;                                       /* PROT15           */
    __type28 SPID15;                                       /* SPID15           */
} __type101;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    __type28 PROT04;                                       /* PROT04           */
    __type28 SPID04;                                       /* SPID04           */
    __type28 PROT05;                                       /* PROT05           */
    __type28 SPID05;                                       /* SPID05           */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    __type28 PROT08;                                       /* PROT08           */
    __type28 SPID08;                                       /* SPID08           */
    __type28 PROT09;                                       /* PROT09           */
    __type28 SPID09;                                       /* SPID09           */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
} __type102;
typedef struct 
{                                                          /* Module           */
    uint32 VCR0;                                           /* VCR0             */
    uint32 VCR1;                                           /* VCR1             */
    uint32 VCR2;                                           /* VCR2             */
    uint32 VCR3;                                           /* VCR3             */
    uint32 VCR4;                                           /* VCR4             */
    uint32 VCR5;                                           /* VCR5             */
    uint32 VCR6;                                           /* VCR6             */
    uint32 VCR7;                                           /* VCR7             */
    uint32 VCR8;                                           /* VCR8             */
    uint32 VCR9;                                           /* VCR9             */
    uint32 VCR10;                                          /* VCR10            */
    uint32 VCR11;                                          /* VCR11            */
    uint32 VCR12;                                          /* VCR12            */
    uint32 VCR13;                                          /* VCR13            */
    uint32 VCR14;                                          /* VCR14            */
    uint32 VCR15;                                          /* VCR15            */
    uint32 VCR16;                                          /* VCR16            */
    uint32 VCR17;                                          /* VCR17            */
    uint32 VCR18;                                          /* VCR18            */
    uint32 VCR19;                                          /* VCR19            */
    uint32 VCR20;                                          /* VCR20            */
    uint32 VCR21;                                          /* VCR21            */
    uint32 VCR22;                                          /* VCR22            */
    uint32 VCR23;                                          /* VCR23            */
    uint8  dummy247[160];                                  /* Reserved         */
    uint32 DR00;                                           /* DR00             */
    uint32 DR02;                                           /* DR02             */
    uint32 DR04;                                           /* DR04             */
    uint32 DR06;                                           /* DR06             */
    uint32 DR08;                                           /* DR08             */
    uint32 DR10;                                           /* DR10             */
    uint32 DR12;                                           /* DR12             */
    uint32 DR14;                                           /* DR14             */
    uint32 DR16;                                           /* DR16             */
    uint32 DR18;                                           /* DR18             */
    uint32 DR20;                                           /* DR20             */
    uint32 DR22;                                           /* DR22             */
    uint8  dummy248[208];                                  /* Reserved         */
    uint32 DIR0;                                           /* DIR0             */
    uint32 DIR1;                                           /* DIR1             */
    uint32 DIR2;                                           /* DIR2             */
    uint32 DIR3;                                           /* DIR3             */
    uint32 DIR4;                                           /* DIR4             */
    uint32 DIR5;                                           /* DIR5             */
    uint32 DIR6;                                           /* DIR6             */
    uint32 DIR7;                                           /* DIR7             */
    uint32 DIR8;                                           /* DIR8             */
    uint32 DIR9;                                           /* DIR9             */
    uint32 DIR10;                                          /* DIR10            */
    uint32 DIR11;                                          /* DIR11            */
    uint32 DIR12;                                          /* DIR12            */
    uint32 DIR13;                                          /* DIR13            */
    uint32 DIR14;                                          /* DIR14            */
    uint32 DIR15;                                          /* DIR15            */
    uint32 DIR16;                                          /* DIR16            */
    uint32 DIR17;                                          /* DIR17            */
    uint32 DIR18;                                          /* DIR18            */
    uint32 DIR19;                                          /* DIR19            */
    uint32 DIR20;                                          /* DIR20            */
    uint32 DIR21;                                          /* DIR21            */
    uint32 DIR22;                                          /* DIR22            */
    uint32 DIR23;                                          /* DIR23            */
    uint8  dummy249[160];                                  /* Reserved         */
    uint8  ADSYNSTCR;                                      /* ADSYNSTCR        */
    uint8  dummy250[3];                                    /* Reserved         */
    uint8  ADTSYNSTCR;                                     /* ADTSYNSTCR       */
    uint8  dummy251[123];                                  /* Reserved         */
    uint8  ADHALTR;                                        /* ADHALTR          */
    uint8  dummy252[3];                                    /* Reserved         */
    uint8  ADCR1;                                          /* ADCR1            */
    uint8  dummy253[3];                                    /* Reserved         */
    uint8  MPXCURCR;                                       /* MPXCURCR         */
    uint8  dummy254[3];                                    /* Reserved         */
    uint32 MPXCURR;                                        /* MPXCURR          */
    uint8  MPXOWR;                                         /* MPXOWR           */
    uint8  dummy255[7];                                    /* Reserved         */
    uint8  ADCR2;                                          /* ADCR2            */
    uint8  dummy256[7];                                    /* Reserved         */
    uint8  ADENDP0;                                        /* ADENDP0          */
    uint8  dummy257[31];                                   /* Reserved         */
    uint8  SFTCR;                                          /* SFTCR            */
    uint8  dummy258[3];                                    /* Reserved         */
    uint8  TDCR;                                           /* TDCR             */
    uint8  dummy259[7];                                    /* Reserved         */
    __type56 ULLMTBR0;                                     /* ULLMTBR0         */
    __type56 ULLMTBR1;                                     /* ULLMTBR1         */
    __type56 ULLMTBR2;                                     /* ULLMTBR2         */
    uint8  ECR;                                            /* ECR              */
    uint8  dummy260[3];                                    /* Reserved         */
    uint8  ULER;                                           /* ULER             */
    uint8  dummy261[3];                                    /* Reserved         */
    uint8  OWER;                                           /* OWER             */
    uint8  dummy262[3];                                    /* Reserved         */
    uint8  PER;                                            /* PER              */
    uint8  dummy263[3];                                    /* Reserved         */
    uint8  IDER;                                           /* IDER             */
    uint8  dummy264[151];                                  /* Reserved         */
    uint8  SGSTCR0;                                        /* SGSTCR0          */
    uint8  dummy265[15];                                   /* Reserved         */
    uint8  SGCR0;                                          /* SGCR0            */
    uint8  dummy266[3];                                    /* Reserved         */
    uint8  SGVCSP0;                                        /* SGVCSP0          */
    uint8  dummy267[3];                                    /* Reserved         */
    uint8  SGVCEP0;                                        /* SGVCEP0          */
    uint8  dummy268[3];                                    /* Reserved         */
    uint8  SGMCYCR0;                                       /* SGMCYCR0         */
    uint8  dummy269[7];                                    /* Reserved         */
    uint8  SGSR0;                                          /* SGSR0            */
    uint8  dummy270[11];                                   /* Reserved         */
    uint8  ULLMSR0;                                        /* ULLMSR0          */
    uint8  dummy271[79];                                   /* Reserved         */
    uint8  SGSTCR1;                                        /* SGSTCR1          */
    uint8  dummy272[15];                                   /* Reserved         */
    uint8  SGCR1;                                          /* SGCR1            */
    uint8  dummy273[3];                                    /* Reserved         */
    uint8  SGVCSP1;                                        /* SGVCSP1          */
    uint8  dummy274[3];                                    /* Reserved         */
    uint8  SGVCEP1;                                        /* SGVCEP1          */
    uint8  dummy275[3];                                    /* Reserved         */
    uint8  SGMCYCR1;                                       /* SGMCYCR1         */
    uint8  dummy276[7];                                    /* Reserved         */
    uint8  SGSR1;                                          /* SGSR1            */
    uint8  dummy277[11];                                   /* Reserved         */
    uint8  ULLMSR1;                                        /* ULLMSR1          */
    uint8  dummy278[79];                                   /* Reserved         */
    uint8  SGSTCR2;                                        /* SGSTCR2          */
    uint8  dummy279[15];                                   /* Reserved         */
    uint8  SGCR2;                                          /* SGCR2            */
    uint8  dummy280[3];                                    /* Reserved         */
    uint8  SGVCSP2;                                        /* SGVCSP2          */
    uint8  dummy281[3];                                    /* Reserved         */
    uint8  SGVCEP2;                                        /* SGVCEP2          */
    uint8  dummy282[3];                                    /* Reserved         */
    uint8  SGMCYCR2;                                       /* SGMCYCR2         */
    uint8  dummy283[7];                                    /* Reserved         */
    uint8  SGSR2;                                          /* SGSR2            */
    uint8  dummy284[11];                                   /* Reserved         */
    uint8  ULLMSR2;                                        /* ULLMSR2          */
    uint8  dummy285[79];                                   /* Reserved         */
    uint8  SGSTCR3;                                        /* SGSTCR3          */
    uint8  dummy286[7];                                    /* Reserved         */
    uint8  ADTSTCR3;                                       /* ADTSTCR3         */
    uint8  dummy287[3];                                    /* Reserved         */
    uint8  ADTENDCR3;                                      /* ADTENDCR3        */
    uint8  dummy288[3];                                    /* Reserved         */
    uint8  SGCR3;                                          /* SGCR3            */
    uint8  dummy289[3];                                    /* Reserved         */
    uint8  SGVCSP3;                                        /* SGVCSP3          */
    uint8  dummy290[3];                                    /* Reserved         */
    uint8  SGVCEP3;                                        /* SGVCEP3          */
    uint8  dummy291[3];                                    /* Reserved         */
    uint8  SGMCYCR3;                                       /* SGMCYCR3         */
    uint8  dummy292[7];                                    /* Reserved         */
    uint8  SGSR3;                                          /* SGSR3            */
    uint8  dummy293[3];                                    /* Reserved         */
    uint32 ADTIPR3;                                        /* ADTIPR3          */
    uint32 ADTPRR3;                                        /* ADTPRR3          */
    uint8  ULLMSR3;                                        /* ULLMSR3          */
    uint8  dummy294[79];                                   /* Reserved         */
    uint8  SGSTCR4;                                        /* SGSTCR4          */
    uint8  dummy295[7];                                    /* Reserved         */
    uint8  ADTSTCR4;                                       /* ADTSTCR4         */
    uint8  dummy296[3];                                    /* Reserved         */
    uint8  ADTENDCR4;                                      /* ADTENDCR4        */
    uint8  dummy297[3];                                    /* Reserved         */
    uint8  SGCR4;                                          /* SGCR4            */
    uint8  dummy298[3];                                    /* Reserved         */
    uint8  SGVCSP4;                                        /* SGVCSP4          */
    uint8  dummy299[3];                                    /* Reserved         */
    uint8  SGVCEP4;                                        /* SGVCEP4          */
    uint8  dummy300[3];                                    /* Reserved         */
    uint8  SGMCYCR4;                                       /* SGMCYCR4         */
    uint8  dummy301[7];                                    /* Reserved         */
    uint8  SGSR4;                                          /* SGSR4            */
    uint8  dummy302[3];                                    /* Reserved         */
    uint32 ADTIPR4;                                        /* ADTIPR4          */
    uint32 ADTPRR4;                                        /* ADTPRR4          */
    uint8  ULLMSR4;                                        /* ULLMSR4          */
} __type103;
typedef struct 
{                                                          /* Module           */
    uint32 VCR0;                                           /* VCR0             */
    uint32 VCR1;                                           /* VCR1             */
    uint32 VCR2;                                           /* VCR2             */
    uint32 VCR3;                                           /* VCR3             */
    uint32 VCR4;                                           /* VCR4             */
    uint32 VCR5;                                           /* VCR5             */
    uint32 VCR6;                                           /* VCR6             */
    uint32 VCR7;                                           /* VCR7             */
    uint32 VCR8;                                           /* VCR8             */
    uint32 VCR9;                                           /* VCR9             */
    uint32 VCR10;                                          /* VCR10            */
    uint32 VCR11;                                          /* VCR11            */
    uint32 VCR12;                                          /* VCR12            */
    uint32 VCR13;                                          /* VCR13            */
    uint32 VCR14;                                          /* VCR14            */
    uint32 VCR15;                                          /* VCR15            */
    uint32 VCR16;                                          /* VCR16            */
    uint32 VCR17;                                          /* VCR17            */
    uint32 VCR18;                                          /* VCR18            */
    uint32 VCR19;                                          /* VCR19            */
    uint8  dummy303[176];                                  /* Reserved         */
    uint32 DR00;                                           /* DR00             */
    uint32 DR02;                                           /* DR02             */
    uint32 DR04;                                           /* DR04             */
    uint32 DR06;                                           /* DR06             */
    uint32 DR08;                                           /* DR08             */
    uint32 DR10;                                           /* DR10             */
    uint32 DR12;                                           /* DR12             */
    uint32 DR14;                                           /* DR14             */
    uint32 DR16;                                           /* DR16             */
    uint32 DR18;                                           /* DR18             */
    uint8  dummy304[216];                                  /* Reserved         */
    uint32 DIR0;                                           /* DIR0             */
    uint32 DIR1;                                           /* DIR1             */
    uint32 DIR2;                                           /* DIR2             */
    uint32 DIR3;                                           /* DIR3             */
    uint32 DIR4;                                           /* DIR4             */
    uint32 DIR5;                                           /* DIR5             */
    uint32 DIR6;                                           /* DIR6             */
    uint32 DIR7;                                           /* DIR7             */
    uint32 DIR8;                                           /* DIR8             */
    uint32 DIR9;                                           /* DIR9             */
    uint32 DIR10;                                          /* DIR10            */
    uint32 DIR11;                                          /* DIR11            */
    uint32 DIR12;                                          /* DIR12            */
    uint32 DIR13;                                          /* DIR13            */
    uint32 DIR14;                                          /* DIR14            */
    uint32 DIR15;                                          /* DIR15            */
    uint32 DIR16;                                          /* DIR16            */
    uint32 DIR17;                                          /* DIR17            */
    uint32 DIR18;                                          /* DIR18            */
    uint32 DIR19;                                          /* DIR19            */
    uint8  dummy305[304];                                  /* Reserved         */
    uint8  ADHALTR;                                        /* ADHALTR          */
    uint8  dummy306[3];                                    /* Reserved         */
    uint8  ADCR1;                                          /* ADCR1            */
    uint8  dummy307[3];                                    /* Reserved         */
    uint8  MPXCURCR;                                       /* MPXCURCR         */
    uint8  dummy308[3];                                    /* Reserved         */
    uint32 MPXCURR;                                        /* MPXCURR          */
    uint8  MPXOWR;                                         /* MPXOWR           */
    uint8  dummy309[7];                                    /* Reserved         */
    uint8  ADCR2;                                          /* ADCR2            */
    uint8  dummy310[7];                                    /* Reserved         */
    uint8  ADENDP0;                                        /* ADENDP0          */
    uint8  dummy311[31];                                   /* Reserved         */
    uint8  SFTCR;                                          /* SFTCR            */
    uint8  dummy312[3];                                    /* Reserved         */
    uint8  TDCR;                                           /* TDCR             */
    uint8  dummy313[7];                                    /* Reserved         */
    __type56 ULLMTBR0;                                     /* ULLMTBR0         */
    __type56 ULLMTBR1;                                     /* ULLMTBR1         */
    __type56 ULLMTBR2;                                     /* ULLMTBR2         */
    uint8  ECR;                                            /* ECR              */
    uint8  dummy314[3];                                    /* Reserved         */
    uint8  ULER;                                           /* ULER             */
    uint8  dummy315[3];                                    /* Reserved         */
    uint8  OWER;                                           /* OWER             */
    uint8  dummy316[3];                                    /* Reserved         */
    uint8  PER;                                            /* PER              */
    uint8  dummy317[3];                                    /* Reserved         */
    uint8  IDER;                                           /* IDER             */
    uint8  dummy318[151];                                  /* Reserved         */
    uint8  SGSTCR0;                                        /* SGSTCR0          */
    uint8  dummy319[15];                                   /* Reserved         */
    uint8  SGCR0;                                          /* SGCR0            */
    uint8  dummy320[3];                                    /* Reserved         */
    uint8  SGVCSP0;                                        /* SGVCSP0          */
    uint8  dummy321[3];                                    /* Reserved         */
    uint8  SGVCEP0;                                        /* SGVCEP0          */
    uint8  dummy322[3];                                    /* Reserved         */
    uint8  SGMCYCR0;                                       /* SGMCYCR0         */
    uint8  dummy323[7];                                    /* Reserved         */
    uint8  SGSR0;                                          /* SGSR0            */
    uint8  dummy324[11];                                   /* Reserved         */
    uint8  ULLMSR0;                                        /* ULLMSR0          */
    uint8  dummy325[79];                                   /* Reserved         */
    uint8  SGSTCR1;                                        /* SGSTCR1          */
    uint8  dummy326[15];                                   /* Reserved         */
    uint8  SGCR1;                                          /* SGCR1            */
    uint8  dummy327[3];                                    /* Reserved         */
    uint8  SGVCSP1;                                        /* SGVCSP1          */
    uint8  dummy328[3];                                    /* Reserved         */
    uint8  SGVCEP1;                                        /* SGVCEP1          */
    uint8  dummy329[3];                                    /* Reserved         */
    uint8  SGMCYCR1;                                       /* SGMCYCR1         */
    uint8  dummy330[7];                                    /* Reserved         */
    uint8  SGSR1;                                          /* SGSR1            */
    uint8  dummy331[11];                                   /* Reserved         */
    uint8  ULLMSR1;                                        /* ULLMSR1          */
    uint8  dummy332[79];                                   /* Reserved         */
    uint8  SGSTCR2;                                        /* SGSTCR2          */
    uint8  dummy333[15];                                   /* Reserved         */
    uint8  SGCR2;                                          /* SGCR2            */
    uint8  dummy334[3];                                    /* Reserved         */
    uint8  SGVCSP2;                                        /* SGVCSP2          */
    uint8  dummy335[3];                                    /* Reserved         */
    uint8  SGVCEP2;                                        /* SGVCEP2          */
    uint8  dummy336[3];                                    /* Reserved         */
    uint8  SGMCYCR2;                                       /* SGMCYCR2         */
    uint8  dummy337[7];                                    /* Reserved         */
    uint8  SGSR2;                                          /* SGSR2            */
    uint8  dummy338[11];                                   /* Reserved         */
    uint8  ULLMSR2;                                        /* ULLMSR2          */
    uint8  dummy339[79];                                   /* Reserved         */
    uint8  SGSTCR3;                                        /* SGSTCR3          */
    uint8  dummy340[7];                                    /* Reserved         */
    uint8  ADTSTCR3;                                       /* ADTSTCR3         */
    uint8  dummy341[3];                                    /* Reserved         */
    uint8  ADTENDCR3;                                      /* ADTENDCR3        */
    uint8  dummy342[3];                                    /* Reserved         */
    uint8  SGCR3;                                          /* SGCR3            */
    uint8  dummy343[3];                                    /* Reserved         */
    uint8  SGVCSP3;                                        /* SGVCSP3          */
    uint8  dummy344[3];                                    /* Reserved         */
    uint8  SGVCEP3;                                        /* SGVCEP3          */
    uint8  dummy345[3];                                    /* Reserved         */
    uint8  SGMCYCR3;                                       /* SGMCYCR3         */
    uint8  dummy346[7];                                    /* Reserved         */
    uint8  SGSR3;                                          /* SGSR3            */
    uint8  dummy347[3];                                    /* Reserved         */
    uint32 ADTIPR3;                                        /* ADTIPR3          */
    uint32 ADTPRR3;                                        /* ADTPRR3          */
    uint8  ULLMSR3;                                        /* ULLMSR3          */
    uint8  dummy348[79];                                   /* Reserved         */
    uint8  SGSTCR4;                                        /* SGSTCR4          */
    uint8  dummy349[7];                                    /* Reserved         */
    uint8  ADTSTCR4;                                       /* ADTSTCR4         */
    uint8  dummy350[3];                                    /* Reserved         */
    uint8  ADTENDCR4;                                      /* ADTENDCR4        */
    uint8  dummy351[3];                                    /* Reserved         */
    uint8  SGCR4;                                          /* SGCR4            */
    uint8  dummy352[3];                                    /* Reserved         */
    uint8  SGVCSP4;                                        /* SGVCSP4          */
    uint8  dummy353[3];                                    /* Reserved         */
    uint8  SGVCEP4;                                        /* SGVCEP4          */
    uint8  dummy354[3];                                    /* Reserved         */
    uint8  SGMCYCR4;                                       /* SGMCYCR4         */
    uint8  dummy355[7];                                    /* Reserved         */
    uint8  SGSR4;                                          /* SGSR4            */
    uint8  dummy356[3];                                    /* Reserved         */
    uint32 ADTIPR4;                                        /* ADTIPR4          */
    uint32 ADTPRR4;                                        /* ADTPRR4          */
    uint8  ULLMSR4;                                        /* ULLMSR4          */
} __type104;
typedef struct 
{                                                          /* Module           */
    uint8  OTSTCR;                                         /* OTSTCR           */
    uint8  dummy357[3];                                    /* Reserved         */
    uint8  OTENDCR;                                        /* OTENDCR          */
    uint8  dummy358[3];                                    /* Reserved         */
    uint8  OTCR;                                           /* OTCR             */
    uint8  dummy359[3];                                    /* Reserved         */
    uint8  OTFCR;                                          /* OTFCR            */
    uint8  dummy360[3];                                    /* Reserved         */
    uint8  OTFR;                                           /* OTFR             */
    uint8  dummy361[3];                                    /* Reserved         */
    uint8  OTSTR;                                          /* OTSTR            */
    uint8  dummy362[3];                                    /* Reserved         */
    uint16 OTDR;                                           /* OTDR             */
    uint8  dummy363[2];                                    /* Reserved         */
    uint16 HTBRAU;                                         /* HTBRAU           */
    uint8  dummy364[2];                                    /* Reserved         */
    uint16 HTBRAL;                                         /* HTBRAL           */
    uint8  dummy365[2];                                    /* Reserved         */
    uint16 HTBRBU;                                         /* HTBRBU           */
    uint8  dummy366[2];                                    /* Reserved         */
    uint16 HTBRBL;                                         /* HTBRBL           */
    uint8  dummy367[2];                                    /* Reserved         */
    uint16 LTBRAU;                                         /* LTBRAU           */
    uint8  dummy368[2];                                    /* Reserved         */
    uint16 LTBRAL;                                         /* LTBRAL           */
    uint8  dummy369[2];                                    /* Reserved         */
    uint16 TDLR;                                           /* TDLR             */
    uint8  dummy370[2];                                    /* Reserved         */
    uint16 COEFFRA;                                        /* COEFFRA          */
    uint8  dummy371[2];                                    /* Reserved         */
    uint16 COEFFRB;                                        /* COEFFRB          */
    uint8  dummy372[2];                                    /* Reserved         */
    uint16 COEFFRC;                                        /* COEFFRC          */
} __type105;
typedef struct 
{                                                          /* Module           */
    __type28 PROT00;                                       /* PROT00           */
    __type28 SPID00;                                       /* SPID00           */
    __type28 PROT01;                                       /* PROT01           */
    __type28 SPID01;                                       /* SPID01           */
    __type28 PROT02;                                       /* PROT02           */
    __type28 SPID02;                                       /* SPID02           */
    __type28 PROT03;                                       /* PROT03           */
    __type28 SPID03;                                       /* SPID03           */
    uint8  dummy373[16];                                   /* Reserved         */
    __type28 PROT06;                                       /* PROT06           */
    __type28 SPID06;                                       /* SPID06           */
    __type28 PROT07;                                       /* PROT07           */
    __type28 SPID07;                                       /* SPID07           */
    uint8  dummy374[16];                                   /* Reserved         */
    __type28 PROT10;                                       /* PROT10           */
    __type28 SPID10;                                       /* SPID10           */
    __type28 PROT11;                                       /* PROT11           */
    __type28 SPID11;                                       /* SPID11           */
    __type28 PROT12;                                       /* PROT12           */
    __type28 SPID12;                                       /* SPID12           */
    __type28 PROT13;                                       /* PROT13           */
    __type28 SPID13;                                       /* SPID13           */
} __type106;
typedef struct 
{                                                          /* Module           */
    uint8  PRSCTL;                                         /* PRSCTL           */
    uint8  dummy375[3];                                    /* Reserved         */
    uint8  PRSCMP;                                         /* PRSCMP           */
    uint8  dummy376[251];                                  /* Reserved         */
    uint8  BPRSCTL;                                        /* BPRSCTL          */
    uint8  dummy377[3];                                    /* Reserved         */
    uint8  BPRSCMP;                                        /* BPRSCMP          */
    uint8  dummy378[251];                                  /* Reserved         */
    uint8  CPRSCTL;                                        /* CPRSCTL          */
    uint8  dummy379[3];                                    /* Reserved         */
    uint8  CPRSCMP;                                        /* CPRSCMP          */
    uint8  dummy380[1523];                                 /* Reserved         */
    uint8  CCTL0;                                          /* CCTL0            */
    uint8  dummy381[7];                                    /* Reserved         */
    uint16 CCMPL;                                          /* CCMPL            */
    uint8  dummy382[2];                                    /* Reserved         */
    uint16 CCMPH;                                          /* CCMPH            */
    uint8  dummy383[2];                                    /* Reserved         */
    uint8  CPCMD;                                          /* CPCMD            */
    uint8  dummy384[3];                                    /* Reserved         */
    uint8  CPS;                                            /* CPS              */
    uint8  dummy385[1003];                                 /* Reserved         */
    uint32 RST;                                            /* RST              */
    uint32 CFG;                                            /* CFG              */
    uint32 CLMEN;                                          /* CLMEN            */
    uint32 MON;                                            /* MON              */
} __type107;
typedef struct 
{                                                          /* Module           */
    uint32 RG0;                                            /* RG0              */
    uint32 RG1;                                            /* RG1              */
    uint32 RG2;                                            /* RG2              */
    uint32 RG3;                                            /* RG3              */
    uint32 RG4;                                            /* RG4              */
    uint32 RG5;                                            /* RG5              */
    uint32 RG6;                                            /* RG6              */
    uint32 RG7;                                            /* RG7              */
} __type108;
typedef struct 
{                                                          /* Module           */
    __type28 CTL;                                          /* CTL              */
    __type28 STAT;                                         /* STAT             */
} __type109;
typedef struct 
{                                                          /* Module           */
    uint8  dummy386[2];                                    /* Reserved         */
    uint16 ECRUM;                                          /* ECRUM            */
    uint8  dummy387[4];                                    /* Reserved         */
    uint32 ADRUM;                                          /* ADRUM            */
    uint8  dummy388[1];                                    /* Reserved         */
    __type57 ENUM;                                         /* ENUM             */
    uint8  dummy389[18];                                   /* Reserved         */
    __type58 PMTUM0;                                       /* PMTUM0           */
    __type59 PMTUM1;                                       /* PMTUM1           */
    __type60 PMTUM2;                                       /* PMTUM2           */
    __type61 PMTUM3;                                       /* PMTUM3           */
    __type62 PMTUM4;                                       /* PMTUM4           */
} __type110;
typedef struct 
{                                                          /* Module           */
    __type28 G0MK;                                         /* G0MK             */
    __type28 G0BA;                                         /* G0BA             */
    __type28 G0SP;                                         /* G0SP             */
    uint8  dummy390[4];                                    /* Reserved         */
    __type28 G1MK;                                         /* G1MK             */
    __type28 G1BA;                                         /* G1BA             */
    __type28 G1SP;                                         /* G1SP             */
    uint8  dummy391[4];                                    /* Reserved         */
    __type28 G2MK;                                         /* G2MK             */
    __type28 G2BA;                                         /* G2BA             */
    __type28 G2SP;                                         /* G2SP             */
    uint8  dummy392[4];                                    /* Reserved         */
    __type28 G3MK;                                         /* G3MK             */
    __type28 G3BA;                                         /* G3BA             */
    __type28 G3SP;                                         /* G3SP             */
    uint8  dummy393[4];                                    /* Reserved         */
    __type28 G4MK;                                         /* G4MK             */
    __type28 G4BA;                                         /* G4BA             */
    __type28 G4SP;                                         /* G4SP             */
    uint8  dummy394[4];                                    /* Reserved         */
    __type28 G5MK;                                         /* G5MK             */
    __type28 G5BA;                                         /* G5BA             */
    __type28 G5SP;                                         /* G5SP             */
    uint8  dummy395[4];                                    /* Reserved         */
    __type28 G6MK;                                         /* G6MK             */
    __type28 G6BA;                                         /* G6BA             */
    __type28 G6SP;                                         /* G6SP             */
    uint8  dummy396[4];                                    /* Reserved         */
    __type28 G7MK;                                         /* G7MK             */
    __type28 G7BA;                                         /* G7BA             */
    __type28 G7SP;                                         /* G7SP             */
} __type111;
typedef struct 
{                                                          /* Module           */
    uint16 CONT;                                           /* CONT             */
    uint16 FLAG;                                           /* FLAG             */
    uint16 TYPE;                                           /* TYPE             */
    uint16 SIDE;                                           /* SIDE             */
    __type56 ADDR;                                         /* ADDR             */
} __type112;

#define FBTP DBTP
#define FBTPL DBTPL
#define FBTPLL DBTPLL
#define FBTPLH DBTPLH
#define FBTPH DBTPH
#define FBTPHL DBTPHL
#define FBTPHH DBTPHH
#define NBTP BTP
#define NBTPL BTPL
#define NBTPLL BTPLL
#define NBTPLH BTPLH
#define NBTPH BTPH
#define NBTPHL BTPHL
#define NBTPHH BTPHH

#define ICUID                  (*(volatile uint32 *)0xFF1F0000)
#define ICUVER                 (*(volatile uint32 *)0xFF1F0004)
#define ICU2PES                (*(volatile uint32 *)0xFF1F0010)
#define ICU2PESL               (*(volatile uint16 *)0xFF1F0010)
#define ICU2PESLL              (*(volatile uint8  *)0xFF1F0010)
#define ICU2PESLH              (*(volatile uint8  *)0xFF1F0011)
#define ICU2PESH               (*(volatile uint16 *)0xFF1F0012)
#define ICU2PESHL              (*(volatile uint8  *)0xFF1F0012)
#define ICU2PESHH              (*(volatile uint8  *)0xFF1F0013)
#define PE2ICUS                (*(volatile uint32 *)0xFF1F0014)
#define PE2ICUSL               (*(volatile uint16 *)0xFF1F0014)
#define PE2ICUSLL              (*(volatile uint8  *)0xFF1F0014)
#define PE2ICUSLH              (*(volatile uint8  *)0xFF1F0015)
#define PE2ICUSH               (*(volatile uint16 *)0xFF1F0016)
#define PE2ICUSHL              (*(volatile uint8  *)0xFF1F0016)
#define PE2ICUSHH              (*(volatile uint8  *)0xFF1F0017)
#define ICUMACTFLAG            (*(volatile uint32 *)0xFF1F0018)
#define ICUMACTFLAGL           (*(volatile uint16 *)0xFF1F0018)
#define ICUMACTFLAGLL          (*(volatile uint8  *)0xFF1F0018)
#define PEFLPRG0REQ            (*(volatile uint32 *)0xFF1F0020)
#define PEFLPRG0REQL           (*(volatile uint16 *)0xFF1F0020)
#define PEFLPRG0REQLL          (*(volatile uint8  *)0xFF1F0020)
#define PEFLPRG1REQ            (*(volatile uint32 *)0xFF1F0024)
#define PEFLPRG1REQL           (*(volatile uint16 *)0xFF1F0024)
#define PEFLPRG1REQLL          (*(volatile uint8  *)0xFF1F0024)
#define PEFLPRG0AC             (*(volatile uint32 *)0xFF1F0028)
#define PEFLPRG0ACL            (*(volatile uint16 *)0xFF1F0028)
#define PEFLPRG0ACLL           (*(volatile uint8  *)0xFF1F0028)
#define PEFLPRG1AC             (*(volatile uint32 *)0xFF1F002C)
#define PEFLPRG1ACL            (*(volatile uint16 *)0xFF1F002C)
#define PEFLPRG1ACLL           (*(volatile uint8  *)0xFF1F002C)
#define PE2ICUF                (*(volatile uint32 *)0xFF1F0040)
#define PE2ICUFL               (*(volatile uint16 *)0xFF1F0040)
#define PE2ICUFLL              (*(volatile uint8  *)0xFF1F0040)
#define PE2ICUFLH              (*(volatile uint8  *)0xFF1F0041)
#define PE2ICUFH               (*(volatile uint16 *)0xFF1F0042)
#define PE2ICUFHL              (*(volatile uint8  *)0xFF1F0042)
#define PE2ICUFHH              (*(volatile uint8  *)0xFF1F0043)
#define PE2ICUFS               (*(volatile uint32 *)0xFF1F0044)
#define PE2ICUFSL              (*(volatile uint16 *)0xFF1F0044)
#define PE2ICUFSLL             (*(volatile uint8  *)0xFF1F0044)
#define PE2ICUFSLH             (*(volatile uint8  *)0xFF1F0045)
#define PE2ICUFSH              (*(volatile uint16 *)0xFF1F0046)
#define PE2ICUFSHL             (*(volatile uint8  *)0xFF1F0046)
#define PE2ICUFSHH             (*(volatile uint8  *)0xFF1F0047)
#define PE2ICUFC               (*(volatile uint32 *)0xFF1F0048)
#define PE2ICUFCL              (*(volatile uint16 *)0xFF1F0048)
#define PE2ICUFCLL             (*(volatile uint8  *)0xFF1F0048)
#define PE2ICUFCLH             (*(volatile uint8  *)0xFF1F0049)
#define PE2ICUFCH              (*(volatile uint16 *)0xFF1F004A)
#define PE2ICUFCHL             (*(volatile uint8  *)0xFF1F004A)
#define PE2ICUFCHH             (*(volatile uint8  *)0xFF1F004B)
#define PE2ICUIE               (*(volatile uint32 *)0xFF1F004C)
#define PE2ICUIEL              (*(volatile uint16 *)0xFF1F004C)
#define PE2ICUIELL             (*(volatile uint8  *)0xFF1F004C)
#define PE2ICUIELH             (*(volatile uint8  *)0xFF1F004D)
#define PE2ICUIEH              (*(volatile uint16 *)0xFF1F004E)
#define PE2ICUIEHL             (*(volatile uint8  *)0xFF1F004E)
#define PE2ICUIEHH             (*(volatile uint8  *)0xFF1F004F)
#define ICU2PEF                (*(volatile uint32 *)0xFF1F0050)
#define ICU2PEFL               (*(volatile uint16 *)0xFF1F0050)
#define ICU2PEFLL              (*(volatile uint8  *)0xFF1F0050)
#define ICU2PEFLH              (*(volatile uint8  *)0xFF1F0051)
#define ICU2PEFH               (*(volatile uint16 *)0xFF1F0052)
#define ICU2PEFHL              (*(volatile uint8  *)0xFF1F0052)
#define ICU2PEFHH              (*(volatile uint8  *)0xFF1F0053)
#define ICU2PEFS               (*(volatile uint32 *)0xFF1F0054)
#define ICU2PEFSL              (*(volatile uint16 *)0xFF1F0054)
#define ICU2PEFSLL             (*(volatile uint8  *)0xFF1F0054)
#define ICU2PEFSLH             (*(volatile uint8  *)0xFF1F0055)
#define ICU2PEFSH              (*(volatile uint16 *)0xFF1F0056)
#define ICU2PEFSHL             (*(volatile uint8  *)0xFF1F0056)
#define ICU2PEFSHH             (*(volatile uint8  *)0xFF1F0057)
#define ICU2PEFC               (*(volatile uint32 *)0xFF1F0058)
#define ICU2PEFCL              (*(volatile uint16 *)0xFF1F0058)
#define ICU2PEFCLL             (*(volatile uint8  *)0xFF1F0058)
#define ICU2PEFCLH             (*(volatile uint8  *)0xFF1F0059)
#define ICU2PEFCH              (*(volatile uint16 *)0xFF1F005A)
#define ICU2PEFCHL             (*(volatile uint8  *)0xFF1F005A)
#define ICU2PEFCHH             (*(volatile uint8  *)0xFF1F005B)
#define ICU2PEIE               (*(volatile uint32 *)0xFF1F005C)
#define ICU2PEIEL              (*(volatile uint16 *)0xFF1F005C)
#define ICU2PEIELL             (*(volatile uint8  *)0xFF1F005C)
#define ICU2PEIELH             (*(volatile uint8  *)0xFF1F005D)
#define ICU2PEIEH              (*(volatile uint16 *)0xFF1F005E)
#define ICU2PEIEHL             (*(volatile uint8  *)0xFF1F005E)
#define ICU2PEIEHH             (*(volatile uint8  *)0xFF1F005F)
#define ICU2PEIS               (*(volatile uint32 *)0xFF1F0060)
#define ICU2PEISL              (*(volatile uint16 *)0xFF1F0060)
#define ICU2PEISLL             (*(volatile uint8  *)0xFF1F0060)
#define SELFID0                (*(volatile uint32 *)0xFFA08000)
#define SELFID1                (*(volatile uint32 *)0xFFA08004)
#define SELFID2                (*(volatile uint32 *)0xFFA08008)
#define SELFID3                (*(volatile uint32 *)0xFFA0800C)
#define SELFID4                (*(volatile uint32 *)0xFFA08010)
#define SELFID5                (*(volatile uint32 *)0xFFA08014)
#define SELFID6                (*(volatile uint32 *)0xFFA08018)
#define SELFID7                (*(volatile uint32 *)0xFFA0801C)
#define CFRDID0                (*(volatile uint32 *)0xFFA08020)
#define CFRDID1                (*(volatile uint32 *)0xFFA08024)
#define CFRDID2                (*(volatile uint32 *)0xFFA08028)
#define CFRDID3                (*(volatile uint32 *)0xFFA0802C)
#define CFRDID4                (*(volatile uint32 *)0xFFA08030)
#define CFRDID5                (*(volatile uint32 *)0xFFA08034)
#define CFRDID6                (*(volatile uint32 *)0xFFA08038)
#define CFRDID7                (*(volatile uint32 *)0xFFA0803C)
#define DFRDID0                (*(volatile uint32 *)0xFFA08040)
#define DFRDID1                (*(volatile uint32 *)0xFFA08044)
#define DFRDID2                (*(volatile uint32 *)0xFFA08048)
#define DFRDID3                (*(volatile uint32 *)0xFFA0804C)
#define DFRDID4                (*(volatile uint32 *)0xFFA08050)
#define DFRDID5                (*(volatile uint32 *)0xFFA08054)
#define DFRDID6                (*(volatile uint32 *)0xFFA08058)
#define DFRDID7                (*(volatile uint32 *)0xFFA0805C)
#define CFPEID0                (*(volatile uint32 *)0xFFA08060)
#define CFPEID1                (*(volatile uint32 *)0xFFA08064)
#define CFPEID2                (*(volatile uint32 *)0xFFA08068)
#define CFPEID3                (*(volatile uint32 *)0xFFA0806C)
#define CFPEID4                (*(volatile uint32 *)0xFFA08070)
#define CFPEID5                (*(volatile uint32 *)0xFFA08074)
#define CFPEID6                (*(volatile uint32 *)0xFFA08078)
#define CFPEID7                (*(volatile uint32 *)0xFFA0807C)
#define DFPEID0                (*(volatile uint32 *)0xFFA08080)
#define DFPEID1                (*(volatile uint32 *)0xFFA08084)
#define DFPEID2                (*(volatile uint32 *)0xFFA08088)
#define DFPEID3                (*(volatile uint32 *)0xFFA0808C)
#define DFPEID4                (*(volatile uint32 *)0xFFA08090)
#define DFPEID5                (*(volatile uint32 *)0xFFA08094)
#define DFPEID6                (*(volatile uint32 *)0xFFA08098)
#define DFPEID7                (*(volatile uint32 *)0xFFA0809C)
#define DEGEMU                 (*(volatile uint32 *)0xFFA080A4)
#define SELSECLOCK             (*(volatile uint32 *)0xFFA080A8)
#define IDSTATUS               (*(volatile uint32 *)0xFFA080AC)
#define P0                     (*(volatile uint16 *)0xFFC10000)
#define PSR0                   (*(volatile uint32 *)0xFFC10004)
#define PNOT0                  (*(volatile uint16 *)0xFFC10008)
#define PPR0                   (*(volatile uint16 *)0xFFC1000C)
#define PM0                    (*(volatile uint16 *)0xFFC10010)
#define PMC0                   (*(volatile uint16 *)0xFFC10014)
#define PFC0                   (*(volatile uint16 *)0xFFC10018)
#define PFCE0                  (*(volatile uint16 *)0xFFC1001C)
#define PMSR0                  (*(volatile uint32 *)0xFFC10020)
#define PMCSR0                 (*(volatile uint32 *)0xFFC10024)
#define PINV0                  (*(volatile uint16 *)0xFFC10030)
#define P1                     (*(volatile uint16 *)0xFFC10040)
#define PSR1                   (*(volatile uint32 *)0xFFC10044)
#define PNOT1                  (*(volatile uint16 *)0xFFC10048)
#define PPR1                   (*(volatile uint16 *)0xFFC1004C)
#define PM1                    (*(volatile uint16 *)0xFFC10050)
#define PMC1                   (*(volatile uint16 *)0xFFC10054)
#define PFC1                   (*(volatile uint16 *)0xFFC10058)
#define PFCE1                  (*(volatile uint16 *)0xFFC1005C)
#define PMSR1                  (*(volatile uint32 *)0xFFC10060)
#define PMCSR1                 (*(volatile uint32 *)0xFFC10064)
#define PINV1                  (*(volatile uint16 *)0xFFC10070)
#define P2                     (*(volatile uint16 *)0xFFC10080)
#define PSR2                   (*(volatile uint32 *)0xFFC10084)
#define PNOT2                  (*(volatile uint16 *)0xFFC10088)
#define PPR2                   (*(volatile uint16 *)0xFFC1008C)
#define PM2                    (*(volatile uint16 *)0xFFC10090)
#define PMC2                   (*(volatile uint16 *)0xFFC10094)
#define PFC2                   (*(volatile uint16 *)0xFFC10098)
#define PFCE2                  (*(volatile uint16 *)0xFFC1009C)
#define PMSR2                  (*(volatile uint32 *)0xFFC100A0)
#define PMCSR2                 (*(volatile uint32 *)0xFFC100A4)
#define PINV2                  (*(volatile uint16 *)0xFFC100B0)
#define P3                     (*(volatile uint16 *)0xFFC100C0)
#define PSR3                   (*(volatile uint32 *)0xFFC100C4)
#define PNOT3                  (*(volatile uint16 *)0xFFC100C8)
#define PPR3                   (*(volatile uint16 *)0xFFC100CC)
#define PM3                    (*(volatile uint16 *)0xFFC100D0)
#define PMC3                   (*(volatile uint16 *)0xFFC100D4)
#define PFC3                   (*(volatile uint16 *)0xFFC100D8)
#define PFCE3                  (*(volatile uint16 *)0xFFC100DC)
#define PMSR3                  (*(volatile uint32 *)0xFFC100E0)
#define PMCSR3                 (*(volatile uint32 *)0xFFC100E4)
#define PINV3                  (*(volatile uint16 *)0xFFC100F0)
#define P4                     (*(volatile uint16 *)0xFFC10100)
#define PSR4                   (*(volatile uint32 *)0xFFC10104)
#define PNOT4                  (*(volatile uint16 *)0xFFC10108)
#define PPR4                   (*(volatile uint16 *)0xFFC1010C)
#define PM4                    (*(volatile uint16 *)0xFFC10110)
#define PMC4                   (*(volatile uint16 *)0xFFC10114)
#define PFC4                   (*(volatile uint16 *)0xFFC10118)
#define PFCE4                  (*(volatile uint16 *)0xFFC1011C)
#define PMSR4                  (*(volatile uint32 *)0xFFC10120)
#define PMCSR4                 (*(volatile uint32 *)0xFFC10124)
#define PINV4                  (*(volatile uint16 *)0xFFC10130)
#define P5                     (*(volatile uint16 *)0xFFC10140)
#define PSR5                   (*(volatile uint32 *)0xFFC10144)
#define PNOT5                  (*(volatile uint16 *)0xFFC10148)
#define PPR5                   (*(volatile uint16 *)0xFFC1014C)
#define PM5                    (*(volatile uint16 *)0xFFC10150)
#define PMC5                   (*(volatile uint16 *)0xFFC10154)
#define PFC5                   (*(volatile uint16 *)0xFFC10158)
#define PFCE5                  (*(volatile uint16 *)0xFFC1015C)
#define PMSR5                  (*(volatile uint32 *)0xFFC10160)
#define PMCSR5                 (*(volatile uint32 *)0xFFC10164)
#define PINV5                  (*(volatile uint16 *)0xFFC10170)
#define P6                     (*(volatile uint16 *)0xFFC10180)
#define PSR6                   (*(volatile uint32 *)0xFFC10184)
#define PNOT6                  (*(volatile uint16 *)0xFFC10188)
#define PPR6                   (*(volatile uint16 *)0xFFC1018C)
#define PM6                    (*(volatile uint16 *)0xFFC10190)
#define PMC6                   (*(volatile uint16 *)0xFFC10194)
#define PFC6                   (*(volatile uint16 *)0xFFC10198)
#define PFCE6                  (*(volatile uint16 *)0xFFC1019C)
#define PMSR6                  (*(volatile uint32 *)0xFFC101A0)
#define PMCSR6                 (*(volatile uint32 *)0xFFC101A4)
#define PINV6                  (*(volatile uint16 *)0xFFC101B0)
#define P7                     (*(volatile uint16 *)0xFFC101C0)
#define PSR7                   (*(volatile uint32 *)0xFFC101C4)
#define PNOT7                  (*(volatile uint16 *)0xFFC101C8)
#define PPR7                   (*(volatile uint16 *)0xFFC101CC)
#define PM7                    (*(volatile uint16 *)0xFFC101D0)
#define PMC7                   (*(volatile uint16 *)0xFFC101D4)
#define PFC7                   (*(volatile uint16 *)0xFFC101D8)
#define PFCE7                  (*(volatile uint16 *)0xFFC101DC)
#define PMSR7                  (*(volatile uint32 *)0xFFC101E0)
#define PMCSR7                 (*(volatile uint32 *)0xFFC101E4)
#define PINV7                  (*(volatile uint16 *)0xFFC101F0)
#define P8                     (*(volatile uint16 *)0xFFC10200)
#define PSR8                   (*(volatile uint32 *)0xFFC10204)
#define PNOT8                  (*(volatile uint16 *)0xFFC10208)
#define PPR8                   (*(volatile uint16 *)0xFFC1020C)
#define PM8                    (*(volatile uint16 *)0xFFC10210)
#define PMC8                   (*(volatile uint16 *)0xFFC10214)
#define PFC8                   (*(volatile uint16 *)0xFFC10218)
#define PFCE8                  (*(volatile uint16 *)0xFFC1021C)
#define PMSR8                  (*(volatile uint32 *)0xFFC10220)
#define PMCSR8                 (*(volatile uint32 *)0xFFC10224)
#define PINV8                  (*(volatile uint16 *)0xFFC10230)
#define P9                     (*(volatile uint16 *)0xFFC10240)
#define PSR9                   (*(volatile uint32 *)0xFFC10244)
#define PNOT9                  (*(volatile uint16 *)0xFFC10248)
#define PPR9                   (*(volatile uint16 *)0xFFC1024C)
#define PM9                    (*(volatile uint16 *)0xFFC10250)
#define PMC9                   (*(volatile uint16 *)0xFFC10254)
#define PFC9                   (*(volatile uint16 *)0xFFC10258)
#define PFCE9                  (*(volatile uint16 *)0xFFC1025C)
#define PMSR9                  (*(volatile uint32 *)0xFFC10260)
#define PMCSR9                 (*(volatile uint32 *)0xFFC10264)
#define PINV9                  (*(volatile uint16 *)0xFFC10270)
#define PCR0_0                 (*(volatile uint32 *)0xFFC12000)
#define PCR0_1                 (*(volatile uint32 *)0xFFC12004)
#define PCR0_2                 (*(volatile uint32 *)0xFFC12008)
#define PCR0_3                 (*(volatile uint32 *)0xFFC1200C)
#define PCR0_4                 (*(volatile uint32 *)0xFFC12010)
#define PCR0_5                 (*(volatile uint32 *)0xFFC12014)
#define PCR0_6                 (*(volatile uint32 *)0xFFC12018)
#define PCR0_7                 (*(volatile uint32 *)0xFFC1201C)
#define PCR0_8                 (*(volatile uint32 *)0xFFC12020)
#define PCR0_9                 (*(volatile uint32 *)0xFFC12024)
#define PCR0_10                (*(volatile uint32 *)0xFFC12028)
#define PCR0_13                (*(volatile uint32 *)0xFFC12034)
#define PCR0_14                (*(volatile uint32 *)0xFFC12038)
#define PCR1_1                 (*(volatile uint32 *)0xFFC12044)
#define PCR1_2                 (*(volatile uint32 *)0xFFC12048)
#define PCR1_3                 (*(volatile uint32 *)0xFFC1204C)
#define PCR1_4                 (*(volatile uint32 *)0xFFC12050)
#define PCR1_5                 (*(volatile uint32 *)0xFFC12054)
#define PCR1_6                 (*(volatile uint32 *)0xFFC12058)
#define PCR1_7                 (*(volatile uint32 *)0xFFC1205C)
#define PCR2_0                 (*(volatile uint32 *)0xFFC12080)
#define PCR2_1                 (*(volatile uint32 *)0xFFC12084)
#define PCR2_2                 (*(volatile uint32 *)0xFFC12088)
#define PCR2_3                 (*(volatile uint32 *)0xFFC1208C)
#define PCR2_4                 (*(volatile uint32 *)0xFFC12090)
#define PCR2_5                 (*(volatile uint32 *)0xFFC12094)
#define PCR2_6                 (*(volatile uint32 *)0xFFC12098)
#define PCR2_7                 (*(volatile uint32 *)0xFFC1209C)
#define PCR2_8                 (*(volatile uint32 *)0xFFC120A0)
#define PCR2_9                 (*(volatile uint32 *)0xFFC120A4)
#define PCR2_10                (*(volatile uint32 *)0xFFC120A8)
#define PCR2_11                (*(volatile uint32 *)0xFFC120AC)
#define PCR2_12                (*(volatile uint32 *)0xFFC120B0)
#define PCR2_13                (*(volatile uint32 *)0xFFC120B4)
#define PCR2_14                (*(volatile uint32 *)0xFFC120B8)
#define PCR2_15                (*(volatile uint32 *)0xFFC120BC)
#define PCR3_0                 (*(volatile uint32 *)0xFFC120C0)
#define PCR3_1                 (*(volatile uint32 *)0xFFC120C4)
#define PCR3_2                 (*(volatile uint32 *)0xFFC120C8)
#define PCR3_3                 (*(volatile uint32 *)0xFFC120CC)
#define PCR3_4                 (*(volatile uint32 *)0xFFC120D0)
#define PCR3_5                 (*(volatile uint32 *)0xFFC120D4)
#define PCR3_6                 (*(volatile uint32 *)0xFFC120D8)
#define PCR3_7                 (*(volatile uint32 *)0xFFC120DC)
#define PCR3_8                 (*(volatile uint32 *)0xFFC120E0)
#define PCR3_9                 (*(volatile uint32 *)0xFFC120E4)
#define PCR3_10                (*(volatile uint32 *)0xFFC120E8)
#define PCR3_11                (*(volatile uint32 *)0xFFC120EC)
#define PCR3_12                (*(volatile uint32 *)0xFFC120F0)
#define PCR3_13                (*(volatile uint32 *)0xFFC120F4)
#define PCR3_14                (*(volatile uint32 *)0xFFC120F8)
#define PCR4_0                 (*(volatile uint32 *)0xFFC12100)
#define PCR4_1                 (*(volatile uint32 *)0xFFC12104)
#define PCR4_2                 (*(volatile uint32 *)0xFFC12108)
#define PCR4_3                 (*(volatile uint32 *)0xFFC1210C)
#define PCR4_4                 (*(volatile uint32 *)0xFFC12110)
#define PCR4_5                 (*(volatile uint32 *)0xFFC12114)
#define PCR4_6                 (*(volatile uint32 *)0xFFC12118)
#define PCR4_7                 (*(volatile uint32 *)0xFFC1211C)
#define PCR4_8                 (*(volatile uint32 *)0xFFC12120)
#define PCR4_9                 (*(volatile uint32 *)0xFFC12124)
#define PCR4_10                (*(volatile uint32 *)0xFFC12128)
#define PCR4_11                (*(volatile uint32 *)0xFFC1212C)
#define PCR4_12                (*(volatile uint32 *)0xFFC12130)
#define PCR4_13                (*(volatile uint32 *)0xFFC12134)
#define PCR4_14                (*(volatile uint32 *)0xFFC12138)
#define PCR5_0                 (*(volatile uint32 *)0xFFC12140)
#define PCR5_1                 (*(volatile uint32 *)0xFFC12144)
#define PCR5_4                 (*(volatile uint32 *)0xFFC12150)
#define PCR5_5                 (*(volatile uint32 *)0xFFC12154)
#define PCR5_6                 (*(volatile uint32 *)0xFFC12158)
#define PCR5_7                 (*(volatile uint32 *)0xFFC1215C)
#define PCR5_8                 (*(volatile uint32 *)0xFFC12160)
#define PCR5_9                 (*(volatile uint32 *)0xFFC12164)
#define PCR5_10                (*(volatile uint32 *)0xFFC12168)
#define PCR5_11                (*(volatile uint32 *)0xFFC1216C)
#define PCR5_12                (*(volatile uint32 *)0xFFC12170)
#define PCR5_13                (*(volatile uint32 *)0xFFC12174)
#define PCR5_14                (*(volatile uint32 *)0xFFC12178)
#define PCR5_15                (*(volatile uint32 *)0xFFC1217C)
#define PCR6_0                 (*(volatile uint32 *)0xFFC12180)
#define PCR6_1                 (*(volatile uint32 *)0xFFC12184)
#define PCR6_2                 (*(volatile uint32 *)0xFFC12188)
#define PCR6_3                 (*(volatile uint32 *)0xFFC1218C)
#define PCR6_4                 (*(volatile uint32 *)0xFFC12190)
#define PCR6_5                 (*(volatile uint32 *)0xFFC12194)
#define PCR6_6                 (*(volatile uint32 *)0xFFC12198)
#define PCR6_7                 (*(volatile uint32 *)0xFFC1219C)
#define PCR6_8                 (*(volatile uint32 *)0xFFC121A0)
#define PCR6_9                 (*(volatile uint32 *)0xFFC121A4)
#define PCR6_10                (*(volatile uint32 *)0xFFC121A8)
#define PCR6_11                (*(volatile uint32 *)0xFFC121AC)
#define PCR6_12                (*(volatile uint32 *)0xFFC121B0)
#define PCR6_13                (*(volatile uint32 *)0xFFC121B4)
#define PCR6_14                (*(volatile uint32 *)0xFFC121B8)
#define PCR6_15                (*(volatile uint32 *)0xFFC121BC)
#define PCR7_0                 (*(volatile uint32 *)0xFFC121C0)
#define PCR7_1                 (*(volatile uint32 *)0xFFC121C4)
#define PCR7_2                 (*(volatile uint32 *)0xFFC121C8)
#define PCR7_3                 (*(volatile uint32 *)0xFFC121CC)
#define PCR7_4                 (*(volatile uint32 *)0xFFC121D0)
#define PCR7_5                 (*(volatile uint32 *)0xFFC121D4)
#define PCR7_6                 (*(volatile uint32 *)0xFFC121D8)
#define PCR7_7                 (*(volatile uint32 *)0xFFC121DC)
#define PCR7_8                 (*(volatile uint32 *)0xFFC121E0)
#define PCR7_9                 (*(volatile uint32 *)0xFFC121E4)
#define PCR8_0                 (*(volatile uint32 *)0xFFC12200)
#define PCR8_1                 (*(volatile uint32 *)0xFFC12204)
#define PCR8_2                 (*(volatile uint32 *)0xFFC12208)
#define PCR8_3                 (*(volatile uint32 *)0xFFC1220C)
#define PCR8_4                 (*(volatile uint32 *)0xFFC12210)
#define PCR8_5                 (*(volatile uint32 *)0xFFC12214)
#define PCR8_6                 (*(volatile uint32 *)0xFFC12218)
#define PCR8_7                 (*(volatile uint32 *)0xFFC1221C)
#define PCR8_8                 (*(volatile uint32 *)0xFFC12220)
#define PCR8_9                 (*(volatile uint32 *)0xFFC12224)
#define PCR8_10                (*(volatile uint32 *)0xFFC12228)
#define PCR8_11                (*(volatile uint32 *)0xFFC1222C)
#define PCR8_12                (*(volatile uint32 *)0xFFC12230)
#define PCR8_13                (*(volatile uint32 *)0xFFC12234)
#define PCR8_14                (*(volatile uint32 *)0xFFC12238)
#define PCR8_15                (*(volatile uint32 *)0xFFC1223C)
#define PCR9_0                 (*(volatile uint32 *)0xFFC12240)
#define PCR9_1                 (*(volatile uint32 *)0xFFC12244)
#define PCR9_2                 (*(volatile uint32 *)0xFFC12248)
#define PCR9_3                 (*(volatile uint32 *)0xFFC1224C)
#define PCR9_4                 (*(volatile uint32 *)0xFFC12250)
#define PCR9_5                 (*(volatile uint32 *)0xFFC12254)
#define PCR9_6                 (*(volatile uint32 *)0xFFC12258)
#define PCR9_7                 (*(volatile uint32 *)0xFFC1225C)
#define PCR9_8                 (*(volatile uint32 *)0xFFC12260)
#define PIBC0                  (*(volatile uint16 *)0xFFC14000)
#define PBDC0                  (*(volatile uint16 *)0xFFC14004)
#define PIPC0                  (*(volatile uint16 *)0xFFC14008)
#define PU0                    (*(volatile uint16 *)0xFFC1400C)
#define PD0                    (*(volatile uint16 *)0xFFC14010)
#define PODC0                  (*(volatile uint32 *)0xFFC14014)
#define PDSC0                  (*(volatile uint32 *)0xFFC14018)
#define PIS0                   (*(volatile uint16 *)0xFFC1401C)
#define PUCC0                  (*(volatile uint32 *)0xFFC14028)
#define PODCE0                 (*(volatile uint32 *)0xFFC14038)
#define PIBC1                  (*(volatile uint16 *)0xFFC14040)
#define PBDC1                  (*(volatile uint16 *)0xFFC14044)
#define PIPC1                  (*(volatile uint16 *)0xFFC14048)
#define PU1                    (*(volatile uint16 *)0xFFC1404C)
#define PD1                    (*(volatile uint16 *)0xFFC14050)
#define PODC1                  (*(volatile uint32 *)0xFFC14054)
#define PDSC1                  (*(volatile uint32 *)0xFFC14058)
#define PIS1                   (*(volatile uint16 *)0xFFC1405C)
#define PUCC1                  (*(volatile uint32 *)0xFFC14068)
#define PODCE1                 (*(volatile uint32 *)0xFFC14078)
#define PIBC2                  (*(volatile uint16 *)0xFFC14080)
#define PBDC2                  (*(volatile uint16 *)0xFFC14084)
#define PIPC2                  (*(volatile uint16 *)0xFFC14088)
#define PU2                    (*(volatile uint16 *)0xFFC1408C)
#define PD2                    (*(volatile uint16 *)0xFFC14090)
#define PODC2                  (*(volatile uint32 *)0xFFC14094)
#define PDSC2                  (*(volatile uint32 *)0xFFC14098)
#define PIS2                   (*(volatile uint16 *)0xFFC1409C)
#define PUCC2                  (*(volatile uint32 *)0xFFC140A8)
#define PODCE2                 (*(volatile uint32 *)0xFFC140B8)
#define PIBC3                  (*(volatile uint16 *)0xFFC140C0)
#define PBDC3                  (*(volatile uint16 *)0xFFC140C4)
#define PIPC3                  (*(volatile uint16 *)0xFFC140C8)
#define PU3                    (*(volatile uint16 *)0xFFC140CC)
#define PD3                    (*(volatile uint16 *)0xFFC140D0)
#define PODC3                  (*(volatile uint32 *)0xFFC140D4)
#define PDSC3                  (*(volatile uint32 *)0xFFC140D8)
#define PIS3                   (*(volatile uint16 *)0xFFC140DC)
#define PUCC3                  (*(volatile uint32 *)0xFFC140E8)
#define PODCE3                 (*(volatile uint32 *)0xFFC140F8)
#define PIBC4                  (*(volatile uint16 *)0xFFC14100)
#define PBDC4                  (*(volatile uint16 *)0xFFC14104)
#define PIPC4                  (*(volatile uint16 *)0xFFC14108)
#define PU4                    (*(volatile uint16 *)0xFFC1410C)
#define PD4                    (*(volatile uint16 *)0xFFC14110)
#define PODC4                  (*(volatile uint32 *)0xFFC14114)
#define PDSC4                  (*(volatile uint32 *)0xFFC14118)
#define PIS4                   (*(volatile uint16 *)0xFFC1411C)
#define PUCC4                  (*(volatile uint32 *)0xFFC14128)
#define PODCE4                 (*(volatile uint32 *)0xFFC14138)
#define PIBC5                  (*(volatile uint16 *)0xFFC14140)
#define PBDC5                  (*(volatile uint16 *)0xFFC14144)
#define PIPC5                  (*(volatile uint16 *)0xFFC14148)
#define PU5                    (*(volatile uint16 *)0xFFC1414C)
#define PD5                    (*(volatile uint16 *)0xFFC14150)
#define PODC5                  (*(volatile uint32 *)0xFFC14154)
#define PDSC5                  (*(volatile uint32 *)0xFFC14158)
#define PIS5                   (*(volatile uint16 *)0xFFC1415C)
#define PUCC5                  (*(volatile uint32 *)0xFFC14168)
#define PODCE5                 (*(volatile uint32 *)0xFFC14178)
#define PIBC6                  (*(volatile uint16 *)0xFFC14180)
#define PBDC6                  (*(volatile uint16 *)0xFFC14184)
#define PIPC6                  (*(volatile uint16 *)0xFFC14188)
#define PU6                    (*(volatile uint16 *)0xFFC1418C)
#define PD6                    (*(volatile uint16 *)0xFFC14190)
#define PODC6                  (*(volatile uint32 *)0xFFC14194)
#define PDSC6                  (*(volatile uint32 *)0xFFC14198)
#define PIS6                   (*(volatile uint16 *)0xFFC1419C)
#define PUCC6                  (*(volatile uint32 *)0xFFC141A8)
#define PODCE6                 (*(volatile uint32 *)0xFFC141B8)
#define PIBC7                  (*(volatile uint16 *)0xFFC141C0)
#define PBDC7                  (*(volatile uint16 *)0xFFC141C4)
#define PIPC7                  (*(volatile uint16 *)0xFFC141C8)
#define PU7                    (*(volatile uint16 *)0xFFC141CC)
#define PD7                    (*(volatile uint16 *)0xFFC141D0)
#define PODC7                  (*(volatile uint32 *)0xFFC141D4)
#define PDSC7                  (*(volatile uint32 *)0xFFC141D8)
#define PIS7                   (*(volatile uint16 *)0xFFC141DC)
#define PUCC7                  (*(volatile uint32 *)0xFFC141E8)
#define PODCE7                 (*(volatile uint32 *)0xFFC141F8)
#define PIBC8                  (*(volatile uint16 *)0xFFC14200)
#define PBDC8                  (*(volatile uint16 *)0xFFC14204)
#define PIPC8                  (*(volatile uint16 *)0xFFC14208)
#define PU8                    (*(volatile uint16 *)0xFFC1420C)
#define PD8                    (*(volatile uint16 *)0xFFC14210)
#define PODC8                  (*(volatile uint32 *)0xFFC14214)
#define PDSC8                  (*(volatile uint32 *)0xFFC14218)
#define PIS8                   (*(volatile uint16 *)0xFFC1421C)
#define PUCC8                  (*(volatile uint32 *)0xFFC14228)
#define PODCE8                 (*(volatile uint32 *)0xFFC14238)
#define PIBC9                  (*(volatile uint16 *)0xFFC14240)
#define PBDC9                  (*(volatile uint16 *)0xFFC14244)
#define PIPC9                  (*(volatile uint16 *)0xFFC14248)
#define PU9                    (*(volatile uint16 *)0xFFC1424C)
#define PD9                    (*(volatile uint16 *)0xFFC14250)
#define PODC9                  (*(volatile uint32 *)0xFFC14254)
#define PDSC9                  (*(volatile uint32 *)0xFFC14258)
#define PIS9                   (*(volatile uint16 *)0xFFC1425C)
#define PUCC9                  (*(volatile uint32 *)0xFFC14268)
#define PODCE9                 (*(volatile uint32 *)0xFFC14278)
#define JP0                    (*(volatile uint8  *)0xFFC20000)
#define JPSR0                  (*(volatile uint32 *)0xFFC20004)
#define JPNOT0                 (*(volatile uint8  *)0xFFC20008)
#define JPPR0                  (*(volatile uint8  *)0xFFC2000C)
#define JPM0                   (*(volatile uint8  *)0xFFC20010)
#define JPMC0                  (*(volatile uint8  *)0xFFC20014)
#define JPFCE0                 (*(volatile uint8  *)0xFFC2001C)
#define JPMSR0                 (*(volatile uint32 *)0xFFC20020)
#define JPMCSR0                (*(volatile uint32 *)0xFFC20024)
#define JPINV0                 (*(volatile uint8  *)0xFFC20030)
#define JPCR0_0                (*(volatile uint32 *)0xFFC22000)
#define JPCR0_1                (*(volatile uint32 *)0xFFC22004)
#define JPCR0_2                (*(volatile uint32 *)0xFFC22008)
#define JPCR0_3                (*(volatile uint32 *)0xFFC2200C)
#define JPCR0_4                (*(volatile uint32 *)0xFFC22010)
#define JPCR0_5                (*(volatile uint32 *)0xFFC22014)
#define JPIBC0                 (*(volatile uint8  *)0xFFC24000)
#define JPBDC0                 (*(volatile uint8  *)0xFFC24004)
#define JPU0                   (*(volatile uint8  *)0xFFC2400C)
#define JPD0                   (*(volatile uint8  *)0xFFC24010)
#define JPODC0                 (*(volatile uint32 *)0xFFC24014)
#define JPDSC0                 (*(volatile uint32 *)0xFFC24018)
#define JPIS0                  (*(volatile uint8  *)0xFFC2401C)
#define JPUCC0                 (*(volatile uint32 *)0xFFC24028)
#define JPODCE0                (*(volatile uint32 *)0xFFC24038)
#define MGDCFCTL_VCI2CFB       (*(volatile uint32 *)0xFFC48100)
#define MGDCFCTL_VCI2CFBL      (*(volatile uint16 *)0xFFC48100)
#define MGDCFCTL_VCI2CFBLL     (*(volatile uint8  *)0xFFC48100)
#define MGDCFSTAT_VCI2CFB      (*(volatile uint32 *)0xFFC48104)
#define MGDCFSTAT_VCI2CFBL     (*(volatile uint16 *)0xFFC48104)
#define MGDCFSTAT_VCI2CFBLL    (*(volatile uint8  *)0xFFC48104)
#define MGDCFTYPE_VCI2CFB      (*(volatile uint32 *)0xFFC4810C)
#define MGDCFTYPE_VCI2CFBL     (*(volatile uint16 *)0xFFC4810C)
#define MGDCFTYPE_VCI2CFBLL    (*(volatile uint8  *)0xFFC4810C)
#define MGDCFTYPE_VCI2CFBLH    (*(volatile uint8  *)0xFFC4810D)
#define MGDCFTYPE_VCI2CFBH     (*(volatile uint16 *)0xFFC4810E)
#define MGDCFTYPE_VCI2CFBHL    (*(volatile uint8  *)0xFFC4810E)
#define MGDCFTYPE_VCI2CFBHH    (*(volatile uint8  *)0xFFC4810F)
#define MGDCFCTL_PE1           (*(volatile uint32 *)0xFFC48200)
#define MGDCFCTL_PE1L          (*(volatile uint16 *)0xFFC48200)
#define MGDCFCTL_PE1LL         (*(volatile uint8  *)0xFFC48200)
#define MGDCFSTAT_PE1          (*(volatile uint32 *)0xFFC48204)
#define MGDCFSTAT_PE1L         (*(volatile uint16 *)0xFFC48204)
#define MGDCFSTAT_PE1LL        (*(volatile uint8  *)0xFFC48204)
#define MGDCFTYPE_PE1          (*(volatile uint32 *)0xFFC4820C)
#define MGDCFTYPE_PE1L         (*(volatile uint16 *)0xFFC4820C)
#define MGDCFTYPE_PE1LL        (*(volatile uint8  *)0xFFC4820C)
#define MGDCFTYPE_PE1LH        (*(volatile uint8  *)0xFFC4820D)
#define MGDCFTYPE_PE1H         (*(volatile uint16 *)0xFFC4820E)
#define MGDCFTYPE_PE1HL        (*(volatile uint8  *)0xFFC4820E)
#define MGDCFTYPE_PE1HH        (*(volatile uint8  *)0xFFC4820F)
#define MGDGRPROT0             (*(volatile uint32 *)0xFFC49000)
#define MGDGRPROT0L            (*(volatile uint16 *)0xFFC49000)
#define MGDGRPROT0LL           (*(volatile uint8  *)0xFFC49000)
#define MGDGRPROT0LH           (*(volatile uint8  *)0xFFC49001)
#define MGDGRPROT0H            (*(volatile uint16 *)0xFFC49002)
#define MGDGRPROT0HL           (*(volatile uint8  *)0xFFC49002)
#define MGDGRPROT0HH           (*(volatile uint8  *)0xFFC49003)
#define MGDGRSPID0             (*(volatile uint32 *)0xFFC49004)
#define MGDGRBAD0              (*(volatile uint32 *)0xFFC49008)
#define MGDGRBAD0L             (*(volatile uint16 *)0xFFC49008)
#define MGDGRBAD0LL            (*(volatile uint8  *)0xFFC49008)
#define MGDGRBAD0LH            (*(volatile uint8  *)0xFFC49009)
#define MGDGRBAD0H             (*(volatile uint16 *)0xFFC4900A)
#define MGDGRBAD0HL            (*(volatile uint8  *)0xFFC4900A)
#define MGDGRBAD0HH            (*(volatile uint8  *)0xFFC4900B)
#define MGDGRADV0              (*(volatile uint32 *)0xFFC4900C)
#define MGDGRADV0L             (*(volatile uint16 *)0xFFC4900C)
#define MGDGRADV0LL            (*(volatile uint8  *)0xFFC4900C)
#define MGDGRADV0LH            (*(volatile uint8  *)0xFFC4900D)
#define MGDGRADV0H             (*(volatile uint16 *)0xFFC4900E)
#define MGDGRADV0HL            (*(volatile uint8  *)0xFFC4900E)
#define MGDGRADV0HH            (*(volatile uint8  *)0xFFC4900F)
#define MGDGRPROT1             (*(volatile uint32 *)0xFFC49010)
#define MGDGRPROT1L            (*(volatile uint16 *)0xFFC49010)
#define MGDGRPROT1LL           (*(volatile uint8  *)0xFFC49010)
#define MGDGRPROT1LH           (*(volatile uint8  *)0xFFC49011)
#define MGDGRPROT1H            (*(volatile uint16 *)0xFFC49012)
#define MGDGRPROT1HL           (*(volatile uint8  *)0xFFC49012)
#define MGDGRPROT1HH           (*(volatile uint8  *)0xFFC49013)
#define MGDGRSPID1             (*(volatile uint32 *)0xFFC49014)
#define MGDGRBAD1              (*(volatile uint32 *)0xFFC49018)
#define MGDGRBAD1L             (*(volatile uint16 *)0xFFC49018)
#define MGDGRBAD1LL            (*(volatile uint8  *)0xFFC49018)
#define MGDGRBAD1LH            (*(volatile uint8  *)0xFFC49019)
#define MGDGRBAD1H             (*(volatile uint16 *)0xFFC4901A)
#define MGDGRBAD1HL            (*(volatile uint8  *)0xFFC4901A)
#define MGDGRBAD1HH            (*(volatile uint8  *)0xFFC4901B)
#define MGDGRADV1              (*(volatile uint32 *)0xFFC4901C)
#define MGDGRADV1L             (*(volatile uint16 *)0xFFC4901C)
#define MGDGRADV1LL            (*(volatile uint8  *)0xFFC4901C)
#define MGDGRADV1LH            (*(volatile uint8  *)0xFFC4901D)
#define MGDGRADV1H             (*(volatile uint16 *)0xFFC4901E)
#define MGDGRADV1HL            (*(volatile uint8  *)0xFFC4901E)
#define MGDGRADV1HH            (*(volatile uint8  *)0xFFC4901F)
#define MGDGRPROT2             (*(volatile uint32 *)0xFFC49020)
#define MGDGRPROT2L            (*(volatile uint16 *)0xFFC49020)
#define MGDGRPROT2LL           (*(volatile uint8  *)0xFFC49020)
#define MGDGRPROT2LH           (*(volatile uint8  *)0xFFC49021)
#define MGDGRPROT2H            (*(volatile uint16 *)0xFFC49022)
#define MGDGRPROT2HL           (*(volatile uint8  *)0xFFC49022)
#define MGDGRPROT2HH           (*(volatile uint8  *)0xFFC49023)
#define MGDGRSPID2             (*(volatile uint32 *)0xFFC49024)
#define MGDGRBAD2              (*(volatile uint32 *)0xFFC49028)
#define MGDGRBAD2L             (*(volatile uint16 *)0xFFC49028)
#define MGDGRBAD2LL            (*(volatile uint8  *)0xFFC49028)
#define MGDGRBAD2LH            (*(volatile uint8  *)0xFFC49029)
#define MGDGRBAD2H             (*(volatile uint16 *)0xFFC4902A)
#define MGDGRBAD2HL            (*(volatile uint8  *)0xFFC4902A)
#define MGDGRBAD2HH            (*(volatile uint8  *)0xFFC4902B)
#define MGDGRADV2              (*(volatile uint32 *)0xFFC4902C)
#define MGDGRADV2L             (*(volatile uint16 *)0xFFC4902C)
#define MGDGRADV2LL            (*(volatile uint8  *)0xFFC4902C)
#define MGDGRADV2LH            (*(volatile uint8  *)0xFFC4902D)
#define MGDGRADV2H             (*(volatile uint16 *)0xFFC4902E)
#define MGDGRADV2HL            (*(volatile uint8  *)0xFFC4902E)
#define MGDGRADV2HH            (*(volatile uint8  *)0xFFC4902F)
#define MGDGRPROT3             (*(volatile uint32 *)0xFFC49030)
#define MGDGRPROT3L            (*(volatile uint16 *)0xFFC49030)
#define MGDGRPROT3LL           (*(volatile uint8  *)0xFFC49030)
#define MGDGRPROT3LH           (*(volatile uint8  *)0xFFC49031)
#define MGDGRPROT3H            (*(volatile uint16 *)0xFFC49032)
#define MGDGRPROT3HL           (*(volatile uint8  *)0xFFC49032)
#define MGDGRPROT3HH           (*(volatile uint8  *)0xFFC49033)
#define MGDGRSPID3             (*(volatile uint32 *)0xFFC49034)
#define MGDGRBAD3              (*(volatile uint32 *)0xFFC49038)
#define MGDGRBAD3L             (*(volatile uint16 *)0xFFC49038)
#define MGDGRBAD3LL            (*(volatile uint8  *)0xFFC49038)
#define MGDGRBAD3LH            (*(volatile uint8  *)0xFFC49039)
#define MGDGRBAD3H             (*(volatile uint16 *)0xFFC4903A)
#define MGDGRBAD3HL            (*(volatile uint8  *)0xFFC4903A)
#define MGDGRBAD3HH            (*(volatile uint8  *)0xFFC4903B)
#define MGDGRADV3              (*(volatile uint32 *)0xFFC4903C)
#define MGDGRADV3L             (*(volatile uint16 *)0xFFC4903C)
#define MGDGRADV3LL            (*(volatile uint8  *)0xFFC4903C)
#define MGDGRADV3LH            (*(volatile uint8  *)0xFFC4903D)
#define MGDGRADV3H             (*(volatile uint16 *)0xFFC4903E)
#define MGDGRADV3HL            (*(volatile uint8  *)0xFFC4903E)
#define MGDGRADV3HH            (*(volatile uint8  *)0xFFC4903F)
#define MGDGRPROT4             (*(volatile uint32 *)0xFFC49040)
#define MGDGRPROT4L            (*(volatile uint16 *)0xFFC49040)
#define MGDGRPROT4LL           (*(volatile uint8  *)0xFFC49040)
#define MGDGRPROT4LH           (*(volatile uint8  *)0xFFC49041)
#define MGDGRPROT4H            (*(volatile uint16 *)0xFFC49042)
#define MGDGRPROT4HL           (*(volatile uint8  *)0xFFC49042)
#define MGDGRPROT4HH           (*(volatile uint8  *)0xFFC49043)
#define MGDGRSPID4             (*(volatile uint32 *)0xFFC49044)
#define MGDGRBAD4              (*(volatile uint32 *)0xFFC49048)
#define MGDGRBAD4L             (*(volatile uint16 *)0xFFC49048)
#define MGDGRBAD4LL            (*(volatile uint8  *)0xFFC49048)
#define MGDGRBAD4LH            (*(volatile uint8  *)0xFFC49049)
#define MGDGRBAD4H             (*(volatile uint16 *)0xFFC4904A)
#define MGDGRBAD4HL            (*(volatile uint8  *)0xFFC4904A)
#define MGDGRBAD4HH            (*(volatile uint8  *)0xFFC4904B)
#define MGDGRADV4              (*(volatile uint32 *)0xFFC4904C)
#define MGDGRADV4L             (*(volatile uint16 *)0xFFC4904C)
#define MGDGRADV4LL            (*(volatile uint8  *)0xFFC4904C)
#define MGDGRADV4LH            (*(volatile uint8  *)0xFFC4904D)
#define MGDGRADV4H             (*(volatile uint16 *)0xFFC4904E)
#define MGDGRADV4HL            (*(volatile uint8  *)0xFFC4904E)
#define MGDGRADV4HH            (*(volatile uint8  *)0xFFC4904F)
#define MGDGRPROT5             (*(volatile uint32 *)0xFFC49050)
#define MGDGRPROT5L            (*(volatile uint16 *)0xFFC49050)
#define MGDGRPROT5LL           (*(volatile uint8  *)0xFFC49050)
#define MGDGRPROT5LH           (*(volatile uint8  *)0xFFC49051)
#define MGDGRPROT5H            (*(volatile uint16 *)0xFFC49052)
#define MGDGRPROT5HL           (*(volatile uint8  *)0xFFC49052)
#define MGDGRPROT5HH           (*(volatile uint8  *)0xFFC49053)
#define MGDGRSPID5             (*(volatile uint32 *)0xFFC49054)
#define MGDGRBAD5              (*(volatile uint32 *)0xFFC49058)
#define MGDGRBAD5L             (*(volatile uint16 *)0xFFC49058)
#define MGDGRBAD5LL            (*(volatile uint8  *)0xFFC49058)
#define MGDGRBAD5LH            (*(volatile uint8  *)0xFFC49059)
#define MGDGRBAD5H             (*(volatile uint16 *)0xFFC4905A)
#define MGDGRBAD5HL            (*(volatile uint8  *)0xFFC4905A)
#define MGDGRBAD5HH            (*(volatile uint8  *)0xFFC4905B)
#define MGDGRADV5              (*(volatile uint32 *)0xFFC4905C)
#define MGDGRADV5L             (*(volatile uint16 *)0xFFC4905C)
#define MGDGRADV5LL            (*(volatile uint8  *)0xFFC4905C)
#define MGDGRADV5LH            (*(volatile uint8  *)0xFFC4905D)
#define MGDGRADV5H             (*(volatile uint16 *)0xFFC4905E)
#define MGDGRADV5HL            (*(volatile uint8  *)0xFFC4905E)
#define MGDGRADV5HH            (*(volatile uint8  *)0xFFC4905F)
#define MGDGRPROT6             (*(volatile uint32 *)0xFFC49060)
#define MGDGRPROT6L            (*(volatile uint16 *)0xFFC49060)
#define MGDGRPROT6LL           (*(volatile uint8  *)0xFFC49060)
#define MGDGRPROT6LH           (*(volatile uint8  *)0xFFC49061)
#define MGDGRPROT6H            (*(volatile uint16 *)0xFFC49062)
#define MGDGRPROT6HL           (*(volatile uint8  *)0xFFC49062)
#define MGDGRPROT6HH           (*(volatile uint8  *)0xFFC49063)
#define MGDGRSPID6             (*(volatile uint32 *)0xFFC49064)
#define MGDGRBAD6              (*(volatile uint32 *)0xFFC49068)
#define MGDGRBAD6L             (*(volatile uint16 *)0xFFC49068)
#define MGDGRBAD6LL            (*(volatile uint8  *)0xFFC49068)
#define MGDGRBAD6LH            (*(volatile uint8  *)0xFFC49069)
#define MGDGRBAD6H             (*(volatile uint16 *)0xFFC4906A)
#define MGDGRBAD6HL            (*(volatile uint8  *)0xFFC4906A)
#define MGDGRBAD6HH            (*(volatile uint8  *)0xFFC4906B)
#define MGDGRADV6              (*(volatile uint32 *)0xFFC4906C)
#define MGDGRADV6L             (*(volatile uint16 *)0xFFC4906C)
#define MGDGRADV6LL            (*(volatile uint8  *)0xFFC4906C)
#define MGDGRADV6LH            (*(volatile uint8  *)0xFFC4906D)
#define MGDGRADV6H             (*(volatile uint16 *)0xFFC4906E)
#define MGDGRADV6HL            (*(volatile uint8  *)0xFFC4906E)
#define MGDGRADV6HH            (*(volatile uint8  *)0xFFC4906F)
#define MGDGRPROT7             (*(volatile uint32 *)0xFFC49070)
#define MGDGRPROT7L            (*(volatile uint16 *)0xFFC49070)
#define MGDGRPROT7LL           (*(volatile uint8  *)0xFFC49070)
#define MGDGRPROT7LH           (*(volatile uint8  *)0xFFC49071)
#define MGDGRPROT7H            (*(volatile uint16 *)0xFFC49072)
#define MGDGRPROT7HL           (*(volatile uint8  *)0xFFC49072)
#define MGDGRPROT7HH           (*(volatile uint8  *)0xFFC49073)
#define MGDGRSPID7             (*(volatile uint32 *)0xFFC49074)
#define MGDGRBAD7              (*(volatile uint32 *)0xFFC49078)
#define MGDGRBAD7L             (*(volatile uint16 *)0xFFC49078)
#define MGDGRBAD7LL            (*(volatile uint8  *)0xFFC49078)
#define MGDGRBAD7LH            (*(volatile uint8  *)0xFFC49079)
#define MGDGRBAD7H             (*(volatile uint16 *)0xFFC4907A)
#define MGDGRBAD7HL            (*(volatile uint8  *)0xFFC4907A)
#define MGDGRBAD7HH            (*(volatile uint8  *)0xFFC4907B)
#define MGDGRADV7              (*(volatile uint32 *)0xFFC4907C)
#define MGDGRADV7L             (*(volatile uint16 *)0xFFC4907C)
#define MGDGRADV7LL            (*(volatile uint8  *)0xFFC4907C)
#define MGDGRADV7LH            (*(volatile uint8  *)0xFFC4907D)
#define MGDGRADV7H             (*(volatile uint16 *)0xFFC4907E)
#define MGDGRADV7HL            (*(volatile uint8  *)0xFFC4907E)
#define MGDGRADV7HH            (*(volatile uint8  *)0xFFC4907F)
#define MGDGRSCTL_VCI2GRAM     (*(volatile uint32 *)0xFFC49100)
#define MGDGRSSTAT_VCI2GRAM    (*(volatile uint32 *)0xFFC49104)
#define MGDGRSTYPE_VCI2GRAM    (*(volatile uint32 *)0xFFC4910C)
#define MGDGRSTYPE_VCI2GRAML   (*(volatile uint16 *)0xFFC4910C)
#define MGDGRSTYPE_VCI2GRAMLL  (*(volatile uint8  *)0xFFC4910C)
#define MGDGRSTYPE_VCI2GRAMLH  (*(volatile uint8  *)0xFFC4910D)
#define MGDGRSTYPE_VCI2GRAMH   (*(volatile uint16 *)0xFFC4910E)
#define MGDGRSTYPE_VCI2GRAMHL  (*(volatile uint8  *)0xFFC4910E)
#define MGDGRSTYPE_VCI2GRAMHH  (*(volatile uint8  *)0xFFC4910F)
#define MGDGRSCTL_PE1          (*(volatile uint32 *)0xFFC49200)
#define MGDGRSSTAT_PE1         (*(volatile uint32 *)0xFFC49204)
#define MGDGRSTYPE_PE1         (*(volatile uint32 *)0xFFC4920C)
#define MGDGRSTYPE_PE1L        (*(volatile uint16 *)0xFFC4920C)
#define MGDGRSTYPE_PE1LL       (*(volatile uint8  *)0xFFC4920C)
#define MGDGRSTYPE_PE1LH       (*(volatile uint8  *)0xFFC4920D)
#define MGDGRSTYPE_PE1H        (*(volatile uint16 *)0xFFC4920E)
#define MGDGRSTYPE_PE1HL       (*(volatile uint8  *)0xFFC4920E)
#define MGDGRSTYPE_PE1HH       (*(volatile uint8  *)0xFFC4920F)
#define MGDGRSCTL_AXI2GRAM     (*(volatile uint32 *)0xFFC49700)
#define MGDGRSSTAT_AXI2GRAM    (*(volatile uint32 *)0xFFC49704)
#define MGDGRSTYPE_AXI2GRAM    (*(volatile uint32 *)0xFFC4970C)
#define MGDGRSTYPE_AXI2GRAML   (*(volatile uint16 *)0xFFC4970C)
#define MGDGRSTYPE_AXI2GRAMLL  (*(volatile uint8  *)0xFFC4970C)
#define MGDGRSTYPE_AXI2GRAMLH  (*(volatile uint8  *)0xFFC4970D)
#define MGDGRSTYPE_AXI2GRAMH   (*(volatile uint16 *)0xFFC4970E)
#define MGDGRSTYPE_AXI2GRAMHL  (*(volatile uint8  *)0xFFC4970E)
#define MGDGRSTYPE_AXI2GRAMHH  (*(volatile uint8  *)0xFFC4970F)
#define PGERRSTATCTL_PE1       (*(volatile uint32 *)0xFFC4A200)
#define PGERRSTAT_PE1          (*(volatile uint32 *)0xFFC4A204)
#define PGERRINFO_PE1          (*(volatile uint32 *)0xFFC4A208)
#define PGERRSTATCTL_PE2       (*(volatile uint32 *)0xFFC4A300)
#define PGERRSTAT_PE2          (*(volatile uint32 *)0xFFC4A304)
#define PGERRINFO_PE2          (*(volatile uint32 *)0xFFC4A308)
#define APBFSGDPROT_PDMACM_A   (*(volatile uint32 *)0xFFC4C000)
#define APBFSGDPROT_PDMACM_AL  (*(volatile uint16 *)0xFFC4C000)
#define APBFSGDPROT_PDMACM_ALL (*(volatile uint8  *)0xFFC4C000)
#define APBFSGDPROT_PDMACM_ALH (*(volatile uint8  *)0xFFC4C001)
#define APBFSGDPROT_PDMACM_AH  (*(volatile uint16 *)0xFFC4C002)
#define APBFSGDPROT_PDMACM_AHL (*(volatile uint8  *)0xFFC4C002)
#define APBFSGDPROT_PDMACM_AHH (*(volatile uint8  *)0xFFC4C003)
#define APBFSGDSPID_PDMACM_A   (*(volatile uint32 *)0xFFC4C004)
#define APBFSGDSPID_PDMACM_AL  (*(volatile uint16 *)0xFFC4C004)
#define APBFSGDSPID_PDMACM_ALL (*(volatile uint8  *)0xFFC4C004)
#define APBFSGDSPID_PDMACM_ALH (*(volatile uint8  *)0xFFC4C005)
#define APBFSGDSPID_PDMACM_AH  (*(volatile uint16 *)0xFFC4C006)
#define APBFSGDSPID_PDMACM_AHL (*(volatile uint8  *)0xFFC4C006)
#define APBFSGDSPID_PDMACM_AHH (*(volatile uint8  *)0xFFC4C007)
#define APBFSGDPROT_PDMACM_B   (*(volatile uint32 *)0xFFC4C008)
#define APBFSGDPROT_PDMACM_BL  (*(volatile uint16 *)0xFFC4C008)
#define APBFSGDPROT_PDMACM_BLL (*(volatile uint8  *)0xFFC4C008)
#define APBFSGDPROT_PDMACM_BLH (*(volatile uint8  *)0xFFC4C009)
#define APBFSGDPROT_PDMACM_BH  (*(volatile uint16 *)0xFFC4C00A)
#define APBFSGDPROT_PDMACM_BHL (*(volatile uint8  *)0xFFC4C00A)
#define APBFSGDPROT_PDMACM_BHH (*(volatile uint8  *)0xFFC4C00B)
#define APBFSGDSPID_PDMACM_B   (*(volatile uint32 *)0xFFC4C00C)
#define APBFSGDSPID_PDMACM_BL  (*(volatile uint16 *)0xFFC4C00C)
#define APBFSGDSPID_PDMACM_BLL (*(volatile uint8  *)0xFFC4C00C)
#define APBFSGDSPID_PDMACM_BLH (*(volatile uint8  *)0xFFC4C00D)
#define APBFSGDSPID_PDMACM_BH  (*(volatile uint16 *)0xFFC4C00E)
#define APBFSGDSPID_PDMACM_BHL (*(volatile uint8  *)0xFFC4C00E)
#define APBFSGDSPID_PDMACM_BHH (*(volatile uint8  *)0xFFC4C00F)
#define APBFSGDPROT_PDMACH_A   (*(volatile uint32 *)0xFFC4C010)
#define APBFSGDPROT_PDMACH_AL  (*(volatile uint16 *)0xFFC4C010)
#define APBFSGDPROT_PDMACH_ALL (*(volatile uint8  *)0xFFC4C010)
#define APBFSGDPROT_PDMACH_ALH (*(volatile uint8  *)0xFFC4C011)
#define APBFSGDPROT_PDMACH_AH  (*(volatile uint16 *)0xFFC4C012)
#define APBFSGDPROT_PDMACH_AHL (*(volatile uint8  *)0xFFC4C012)
#define APBFSGDPROT_PDMACH_AHH (*(volatile uint8  *)0xFFC4C013)
#define APBFSGDSPID_PDMACH_A   (*(volatile uint32 *)0xFFC4C014)
#define APBFSGDSPID_PDMACH_AL  (*(volatile uint16 *)0xFFC4C014)
#define APBFSGDSPID_PDMACH_ALL (*(volatile uint8  *)0xFFC4C014)
#define APBFSGDSPID_PDMACH_ALH (*(volatile uint8  *)0xFFC4C015)
#define APBFSGDSPID_PDMACH_AH  (*(volatile uint16 *)0xFFC4C016)
#define APBFSGDSPID_PDMACH_AHL (*(volatile uint8  *)0xFFC4C016)
#define APBFSGDSPID_PDMACH_AHH (*(volatile uint8  *)0xFFC4C017)
#define APBFSGDPROT_PDMACH_B   (*(volatile uint32 *)0xFFC4C018)
#define APBFSGDPROT_PDMACH_BL  (*(volatile uint16 *)0xFFC4C018)
#define APBFSGDPROT_PDMACH_BLL (*(volatile uint8  *)0xFFC4C018)
#define APBFSGDPROT_PDMACH_BLH (*(volatile uint8  *)0xFFC4C019)
#define APBFSGDPROT_PDMACH_BH  (*(volatile uint16 *)0xFFC4C01A)
#define APBFSGDPROT_PDMACH_BHL (*(volatile uint8  *)0xFFC4C01A)
#define APBFSGDPROT_PDMACH_BHH (*(volatile uint8  *)0xFFC4C01B)
#define APBFSGDSPID_PDMACH_B   (*(volatile uint32 *)0xFFC4C01C)
#define APBFSGDSPID_PDMACH_BL  (*(volatile uint16 *)0xFFC4C01C)
#define APBFSGDSPID_PDMACH_BLL (*(volatile uint8  *)0xFFC4C01C)
#define APBFSGDSPID_PDMACH_BLH (*(volatile uint8  *)0xFFC4C01D)
#define APBFSGDSPID_PDMACH_BH  (*(volatile uint16 *)0xFFC4C01E)
#define APBFSGDSPID_PDMACH_BHL (*(volatile uint8  *)0xFFC4C01E)
#define APBFSGDSPID_PDMACH_BHH (*(volatile uint8  *)0xFFC4C01F)
#define APBFSGDPROT_INTC2_A    (*(volatile uint32 *)0xFFC4C020)
#define APBFSGDPROT_INTC2_AL   (*(volatile uint16 *)0xFFC4C020)
#define APBFSGDPROT_INTC2_ALL  (*(volatile uint8  *)0xFFC4C020)
#define APBFSGDPROT_INTC2_ALH  (*(volatile uint8  *)0xFFC4C021)
#define APBFSGDPROT_INTC2_AH   (*(volatile uint16 *)0xFFC4C022)
#define APBFSGDPROT_INTC2_AHL  (*(volatile uint8  *)0xFFC4C022)
#define APBFSGDPROT_INTC2_AHH  (*(volatile uint8  *)0xFFC4C023)
#define APBFSGDSPID_INTC2_A    (*(volatile uint32 *)0xFFC4C024)
#define APBFSGDSPID_INTC2_AL   (*(volatile uint16 *)0xFFC4C024)
#define APBFSGDSPID_INTC2_ALL  (*(volatile uint8  *)0xFFC4C024)
#define APBFSGDSPID_INTC2_ALH  (*(volatile uint8  *)0xFFC4C025)
#define APBFSGDSPID_INTC2_AH   (*(volatile uint16 *)0xFFC4C026)
#define APBFSGDSPID_INTC2_AHL  (*(volatile uint8  *)0xFFC4C026)
#define APBFSGDSPID_INTC2_AHH  (*(volatile uint8  *)0xFFC4C027)
#define APBFSGDPROT_INTC2_B    (*(volatile uint32 *)0xFFC4C028)
#define APBFSGDPROT_INTC2_BL   (*(volatile uint16 *)0xFFC4C028)
#define APBFSGDPROT_INTC2_BLL  (*(volatile uint8  *)0xFFC4C028)
#define APBFSGDPROT_INTC2_BLH  (*(volatile uint8  *)0xFFC4C029)
#define APBFSGDPROT_INTC2_BH   (*(volatile uint16 *)0xFFC4C02A)
#define APBFSGDPROT_INTC2_BHL  (*(volatile uint8  *)0xFFC4C02A)
#define APBFSGDPROT_INTC2_BHH  (*(volatile uint8  *)0xFFC4C02B)
#define APBFSGDSPID_INTC2_B    (*(volatile uint32 *)0xFFC4C02C)
#define APBFSGDSPID_INTC2_BL   (*(volatile uint16 *)0xFFC4C02C)
#define APBFSGDSPID_INTC2_BLL  (*(volatile uint8  *)0xFFC4C02C)
#define APBFSGDSPID_INTC2_BLH  (*(volatile uint8  *)0xFFC4C02D)
#define APBFSGDSPID_INTC2_BH   (*(volatile uint16 *)0xFFC4C02E)
#define APBFSGDSPID_INTC2_BHL  (*(volatile uint8  *)0xFFC4C02E)
#define APBFSGDSPID_INTC2_BHH  (*(volatile uint8  *)0xFFC4C02F)
#define APBFSGDPROT_PBG_A      (*(volatile uint32 *)0xFFC4C040)
#define APBFSGDPROT_PBG_AL     (*(volatile uint16 *)0xFFC4C040)
#define APBFSGDPROT_PBG_ALL    (*(volatile uint8  *)0xFFC4C040)
#define APBFSGDPROT_PBG_ALH    (*(volatile uint8  *)0xFFC4C041)
#define APBFSGDPROT_PBG_AH     (*(volatile uint16 *)0xFFC4C042)
#define APBFSGDPROT_PBG_AHL    (*(volatile uint8  *)0xFFC4C042)
#define APBFSGDPROT_PBG_AHH    (*(volatile uint8  *)0xFFC4C043)
#define APBFSGDSPID_PBG_A      (*(volatile uint32 *)0xFFC4C044)
#define APBFSGDSPID_PBG_AL     (*(volatile uint16 *)0xFFC4C044)
#define APBFSGDSPID_PBG_ALL    (*(volatile uint8  *)0xFFC4C044)
#define APBFSGDSPID_PBG_ALH    (*(volatile uint8  *)0xFFC4C045)
#define APBFSGDSPID_PBG_AH     (*(volatile uint16 *)0xFFC4C046)
#define APBFSGDSPID_PBG_AHL    (*(volatile uint8  *)0xFFC4C046)
#define APBFSGDSPID_PBG_AHH    (*(volatile uint8  *)0xFFC4C047)
#define APBFSGDPROT_PBG_B      (*(volatile uint32 *)0xFFC4C048)
#define APBFSGDPROT_PBG_BL     (*(volatile uint16 *)0xFFC4C048)
#define APBFSGDPROT_PBG_BLL    (*(volatile uint8  *)0xFFC4C048)
#define APBFSGDPROT_PBG_BLH    (*(volatile uint8  *)0xFFC4C049)
#define APBFSGDPROT_PBG_BH     (*(volatile uint16 *)0xFFC4C04A)
#define APBFSGDPROT_PBG_BHL    (*(volatile uint8  *)0xFFC4C04A)
#define APBFSGDPROT_PBG_BHH    (*(volatile uint8  *)0xFFC4C04B)
#define APBFSGDSPID_PBG_B      (*(volatile uint32 *)0xFFC4C04C)
#define APBFSGDSPID_PBG_BL     (*(volatile uint16 *)0xFFC4C04C)
#define APBFSGDSPID_PBG_BLL    (*(volatile uint8  *)0xFFC4C04C)
#define APBFSGDSPID_PBG_BLH    (*(volatile uint8  *)0xFFC4C04D)
#define APBFSGDSPID_PBG_BH     (*(volatile uint16 *)0xFFC4C04E)
#define APBFSGDSPID_PBG_BHL    (*(volatile uint8  *)0xFFC4C04E)
#define APBFSGDSPID_PBG_BHH    (*(volatile uint8  *)0xFFC4C04F)
#define APBFSGDPROT_SP1_A      (*(volatile uint32 *)0xFFC4C050)
#define APBFSGDPROT_SP1_AL     (*(volatile uint16 *)0xFFC4C050)
#define APBFSGDPROT_SP1_ALL    (*(volatile uint8  *)0xFFC4C050)
#define APBFSGDPROT_SP1_ALH    (*(volatile uint8  *)0xFFC4C051)
#define APBFSGDPROT_SP1_AH     (*(volatile uint16 *)0xFFC4C052)
#define APBFSGDPROT_SP1_AHL    (*(volatile uint8  *)0xFFC4C052)
#define APBFSGDPROT_SP1_AHH    (*(volatile uint8  *)0xFFC4C053)
#define APBFSGDSPID_SP1_A      (*(volatile uint32 *)0xFFC4C054)
#define APBFSGDSPID_SP1_AL     (*(volatile uint16 *)0xFFC4C054)
#define APBFSGDSPID_SP1_ALL    (*(volatile uint8  *)0xFFC4C054)
#define APBFSGDSPID_SP1_ALH    (*(volatile uint8  *)0xFFC4C055)
#define APBFSGDSPID_SP1_AH     (*(volatile uint16 *)0xFFC4C056)
#define APBFSGDSPID_SP1_AHL    (*(volatile uint8  *)0xFFC4C056)
#define APBFSGDSPID_SP1_AHH    (*(volatile uint8  *)0xFFC4C057)
#define APBFSGDPROT_SP1_B      (*(volatile uint32 *)0xFFC4C058)
#define APBFSGDPROT_SP1_BL     (*(volatile uint16 *)0xFFC4C058)
#define APBFSGDPROT_SP1_BLL    (*(volatile uint8  *)0xFFC4C058)
#define APBFSGDPROT_SP1_BLH    (*(volatile uint8  *)0xFFC4C059)
#define APBFSGDPROT_SP1_BH     (*(volatile uint16 *)0xFFC4C05A)
#define APBFSGDPROT_SP1_BHL    (*(volatile uint8  *)0xFFC4C05A)
#define APBFSGDPROT_SP1_BHH    (*(volatile uint8  *)0xFFC4C05B)
#define APBFSGDSPID_SP1_B      (*(volatile uint32 *)0xFFC4C05C)
#define APBFSGDSPID_SP1_BL     (*(volatile uint16 *)0xFFC4C05C)
#define APBFSGDSPID_SP1_BLL    (*(volatile uint8  *)0xFFC4C05C)
#define APBFSGDSPID_SP1_BLH    (*(volatile uint8  *)0xFFC4C05D)
#define APBFSGDSPID_SP1_BH     (*(volatile uint16 *)0xFFC4C05E)
#define APBFSGDSPID_SP1_BHL    (*(volatile uint8  *)0xFFC4C05E)
#define APBFSGDSPID_SP1_BHH    (*(volatile uint8  *)0xFFC4C05F)
#define APBFSGDPROT_SP4_A      (*(volatile uint32 *)0xFFC4C070)
#define APBFSGDPROT_SP4_AL     (*(volatile uint16 *)0xFFC4C070)
#define APBFSGDPROT_SP4_ALL    (*(volatile uint8  *)0xFFC4C070)
#define APBFSGDPROT_SP4_ALH    (*(volatile uint8  *)0xFFC4C071)
#define APBFSGDPROT_SP4_AH     (*(volatile uint16 *)0xFFC4C072)
#define APBFSGDPROT_SP4_AHL    (*(volatile uint8  *)0xFFC4C072)
#define APBFSGDPROT_SP4_AHH    (*(volatile uint8  *)0xFFC4C073)
#define APBFSGDSPID_SP4_A      (*(volatile uint32 *)0xFFC4C074)
#define APBFSGDSPID_SP4_AL     (*(volatile uint16 *)0xFFC4C074)
#define APBFSGDSPID_SP4_ALL    (*(volatile uint8  *)0xFFC4C074)
#define APBFSGDSPID_SP4_ALH    (*(volatile uint8  *)0xFFC4C075)
#define APBFSGDSPID_SP4_AH     (*(volatile uint16 *)0xFFC4C076)
#define APBFSGDSPID_SP4_AHL    (*(volatile uint8  *)0xFFC4C076)
#define APBFSGDSPID_SP4_AHH    (*(volatile uint8  *)0xFFC4C077)
#define APBFSGDPROT_SP4_B      (*(volatile uint32 *)0xFFC4C078)
#define APBFSGDPROT_SP4_BL     (*(volatile uint16 *)0xFFC4C078)
#define APBFSGDPROT_SP4_BLL    (*(volatile uint8  *)0xFFC4C078)
#define APBFSGDPROT_SP4_BLH    (*(volatile uint8  *)0xFFC4C079)
#define APBFSGDPROT_SP4_BH     (*(volatile uint16 *)0xFFC4C07A)
#define APBFSGDPROT_SP4_BHL    (*(volatile uint8  *)0xFFC4C07A)
#define APBFSGDPROT_SP4_BHH    (*(volatile uint8  *)0xFFC4C07B)
#define APBFSGDSPID_SP4_B      (*(volatile uint32 *)0xFFC4C07C)
#define APBFSGDSPID_SP4_BL     (*(volatile uint16 *)0xFFC4C07C)
#define APBFSGDSPID_SP4_BLL    (*(volatile uint8  *)0xFFC4C07C)
#define APBFSGDSPID_SP4_BLH    (*(volatile uint8  *)0xFFC4C07D)
#define APBFSGDSPID_SP4_BH     (*(volatile uint16 *)0xFFC4C07E)
#define APBFSGDSPID_SP4_BHL    (*(volatile uint8  *)0xFFC4C07E)
#define APBFSGDSPID_SP4_BHH    (*(volatile uint8  *)0xFFC4C07F)
#define ERRSLVCTL_PFSS0        (*(volatile uint32 *)0xFFC4C800)
#define ERRSLVSTAT_PFSS0       (*(volatile uint32 *)0xFFC4C804)
#define ERRSLVTYPE_PFSS0       (*(volatile uint32 *)0xFFC4C80C)
#define ERRSLVCTL_PFSS1        (*(volatile uint32 *)0xFFC4C810)
#define ERRSLVSTAT_PFSS1       (*(volatile uint32 *)0xFFC4C814)
#define ERRSLVTYPE_PFSS1       (*(volatile uint32 *)0xFFC4C81C)
#define ERRSLVCTL_PBAREA       (*(volatile uint32 *)0xFFC4C880)
#define ERRSLVCTL_PBAREAL      (*(volatile uint16 *)0xFFC4C880)
#define ERRSLVCTL_PBAREALL     (*(volatile uint8  *)0xFFC4C880)
#define ERRSLVSTAT_PBAREA      (*(volatile uint32 *)0xFFC4C884)
#define ERRSLVSTAT_PBAREAL     (*(volatile uint16 *)0xFFC4C884)
#define ERRSLVSTAT_PBAREALL    (*(volatile uint8  *)0xFFC4C884)
#define ERRSLVTYPE_PBAREA      (*(volatile uint32 *)0xFFC4C88C)
#define ERRSLVTYPE_PBAREAL     (*(volatile uint16 *)0xFFC4C88C)
#define ERRSLVTYPE_PBAREAH     (*(volatile uint16 *)0xFFC4C88E)
#define PDMA_COMP_CNTRL        (*(volatile uint32 *)0xFFC4CA00)
#define BOOTCTRL               (*(volatile uint32 *)0xFFC58000)
#define BOOTCTRLL              (*(volatile uint16 *)0xFFC58000)
#define BOOTCTRLLL             (*(volatile uint8  *)0xFFC58000)
#define EPC                    (*(volatile uint32 *)0xFFC58020)
#define FCUFAREA               (*(volatile uint8  *)0xFFC59008)
#define EEPRDCYCL0             (*(volatile uint8  *)0xFFC59810)
#define EEPRDCYCL1             (*(volatile uint8  *)0xFFC59910)
#define DFECCCTL0              (*(volatile uint32 *)0xFFC5B000)
#define DFECCCTL0L             (*(volatile uint16 *)0xFFC5B000)
#define DFERSTR0               (*(volatile uint32 *)0xFFC5B004)
#define DFERSTC0               (*(volatile uint32 *)0xFFC5B008)
#define DFERSTC0L              (*(volatile uint16 *)0xFFC5B008)
#define DFERSTC0LL             (*(volatile uint8  *)0xFFC5B008)
#define DFOVFSTR0              (*(volatile uint32 *)0xFFC5B00C)
#define DFOVFSTC0              (*(volatile uint32 *)0xFFC5B010)
#define DFOVFSTC0L             (*(volatile uint16 *)0xFFC5B010)
#define DFOVFSTC0LL            (*(volatile uint8  *)0xFFC5B010)
#define DFERRINT0              (*(volatile uint32 *)0xFFC5B014)
#define DFERRINT0L             (*(volatile uint16 *)0xFFC5B014)
#define DFERRINT0LL            (*(volatile uint8  *)0xFFC5B014)
#define DFEADR0                (*(volatile uint32 *)0xFFC5B018)
#define DFTSTCTL0              (*(volatile uint32 *)0xFFC5B01C)
#define DFTSTCTL0L             (*(volatile uint16 *)0xFFC5B01C)
#define DFECCCTL1              (*(volatile uint32 *)0xFFC5C000)
#define DFECCCTL1L             (*(volatile uint16 *)0xFFC5C000)
#define DFERSTR1               (*(volatile uint32 *)0xFFC5C004)
#define DFERSTC1               (*(volatile uint32 *)0xFFC5C008)
#define DFERSTC1L              (*(volatile uint16 *)0xFFC5C008)
#define DFERSTC1LL             (*(volatile uint8  *)0xFFC5C008)
#define DFOVFSTR1              (*(volatile uint32 *)0xFFC5C00C)
#define DFOVFSTC1              (*(volatile uint32 *)0xFFC5C010)
#define DFOVFSTC1L             (*(volatile uint16 *)0xFFC5C010)
#define DFOVFSTC1LL            (*(volatile uint8  *)0xFFC5C010)
#define DFERRINT1              (*(volatile uint32 *)0xFFC5C014)
#define DFERRINT1L             (*(volatile uint16 *)0xFFC5C014)
#define DFERRINT1LL            (*(volatile uint8  *)0xFFC5C014)
#define DFEADR1                (*(volatile uint32 *)0xFFC5C018)
#define DFTSTCTL1              (*(volatile uint32 *)0xFFC5C01C)
#define DFTSTCTL1L             (*(volatile uint16 *)0xFFC5C01C)
#define IDECCCTL_PE1           (*(volatile uint32 *)0xFFC60400)
#define IDECCCTL_PE1L          (*(volatile uint16 *)0xFFC60400)
#define IDERRINT_PE1           (*(volatile uint32 *)0xFFC60404)
#define IDERRINT_PE1L          (*(volatile uint16 *)0xFFC60404)
#define IDERRINT_PE1LL         (*(volatile uint8  *)0xFFC60404)
#define IDSERSTCLR_PE1         (*(volatile uint32 *)0xFFC60408)
#define IDSERSTCLR_PE1L        (*(volatile uint16 *)0xFFC60408)
#define IDSERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC60408)
#define IDDERSTCLR_PE1         (*(volatile uint32 *)0xFFC6040C)
#define IDDERSTCLR_PE1L        (*(volatile uint16 *)0xFFC6040C)
#define IDDERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC6040C)
#define IDOVFSTR_PE1           (*(volatile uint32 *)0xFFC60410)
#define IDOVFSTR_PE1L          (*(volatile uint16 *)0xFFC60410)
#define IDOVFSTR_PE1LL         (*(volatile uint8  *)0xFFC60410)
#define IDSERSTR_PE1           (*(volatile uint32 *)0xFFC60420)
#define IDSERSTR_PE1L          (*(volatile uint16 *)0xFFC60420)
#define IDSERSTR_PE1LL         (*(volatile uint8  *)0xFFC60420)
#define IDSERSTR_PE1LH         (*(volatile uint8  *)0xFFC60421)
#define IDDERSTR_PE1           (*(volatile uint32 *)0xFFC60450)
#define IDDERSTR_PE1L          (*(volatile uint16 *)0xFFC60450)
#define IDDERSTR_PE1LL         (*(volatile uint8  *)0xFFC60450)
#define IDDERSTR_PE1LH         (*(volatile uint8  *)0xFFC60451)
#define IDSEDADR0_PE1          (*(volatile uint32 *)0xFFC60460)
#define IDSEDADR1_PE1          (*(volatile uint32 *)0xFFC60464)
#define IDDEDADR0_PE1          (*(volatile uint32 *)0xFFC604E0)
#define IDDEDADR1_PE1          (*(volatile uint32 *)0xFFC604E4)
#define ITECCCTL_PE1           (*(volatile uint32 *)0xFFC61400)
#define ITECCCTL_PE1L          (*(volatile uint16 *)0xFFC61400)
#define ITERRINT_PE1           (*(volatile uint32 *)0xFFC61404)
#define ITERRINT_PE1L          (*(volatile uint16 *)0xFFC61404)
#define ITERRINT_PE1LL         (*(volatile uint8  *)0xFFC61404)
#define ITSERSTCLR_PE1         (*(volatile uint32 *)0xFFC61408)
#define ITSERSTCLR_PE1L        (*(volatile uint16 *)0xFFC61408)
#define ITSERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC61408)
#define ITDERSTCLR_PE1         (*(volatile uint32 *)0xFFC6140C)
#define ITDERSTCLR_PE1L        (*(volatile uint16 *)0xFFC6140C)
#define ITDERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC6140C)
#define ITOVFSTR_PE1           (*(volatile uint32 *)0xFFC61410)
#define ITOVFSTR_PE1L          (*(volatile uint16 *)0xFFC61410)
#define ITOVFSTR_PE1LL         (*(volatile uint8  *)0xFFC61410)
#define ITSERSTR_PE1           (*(volatile uint32 *)0xFFC61420)
#define ITSERSTR_PE1L          (*(volatile uint16 *)0xFFC61420)
#define ITSERSTR_PE1LL         (*(volatile uint8  *)0xFFC61420)
#define ITDERSTR_PE1           (*(volatile uint32 *)0xFFC61450)
#define ITDERSTR_PE1L          (*(volatile uint16 *)0xFFC61450)
#define ITDERSTR_PE1LL         (*(volatile uint8  *)0xFFC61450)
#define ITSEDADR_PE1           (*(volatile uint32 *)0xFFC61460)
#define ITDEDADR_PE1           (*(volatile uint32 *)0xFFC614E0)
#define UCFERRINT              (*(volatile uint32 *)0xFFC62000)
#define UCFERRINTL             (*(volatile uint16 *)0xFFC62000)
#define UCFERRINTLL            (*(volatile uint8  *)0xFFC62000)
#define UCFSERSTCLR            (*(volatile uint32 *)0xFFC62004)
#define UCFSERSTCLRL           (*(volatile uint16 *)0xFFC62004)
#define UCFSERSTCLRLL          (*(volatile uint8  *)0xFFC62004)
#define UCFDERSTCLR            (*(volatile uint32 *)0xFFC62008)
#define UCFDERSTCLRL           (*(volatile uint16 *)0xFFC62008)
#define UCFDERSTCLRLL          (*(volatile uint8  *)0xFFC62008)
#define UCFOVFSTR              (*(volatile uint32 *)0xFFC6200C)
#define UCFOVFSTRL             (*(volatile uint16 *)0xFFC6200C)
#define UCFOVFSTRLL            (*(volatile uint8  *)0xFFC6200C)
#define UCFSERSTR              (*(volatile uint32 *)0xFFC62020)
#define UCFSERSTRL             (*(volatile uint16 *)0xFFC62020)
#define UCFSERSTRLL            (*(volatile uint8  *)0xFFC62020)
#define UCFDERSTR              (*(volatile uint32 *)0xFFC62030)
#define UCFDERSTRL             (*(volatile uint16 *)0xFFC62030)
#define UCFDERSTRLL            (*(volatile uint8  *)0xFFC62030)
#define UCF1SEDADR             (*(volatile uint32 *)0xFFC62040)
#define UCF2SEDADR             (*(volatile uint32 *)0xFFC62044)
#define UCF3SEDADR             (*(volatile uint32 *)0xFFC62048)
#define UCF4SEDADR             (*(volatile uint32 *)0xFFC6204C)
#define UCFDEDADR              (*(volatile uint32 *)0xFFC620C0)
#define CFAPCTL                (*(volatile uint32 *)0xFFC62100)
#define CFAPCTLL               (*(volatile uint16 *)0xFFC62100)
#define CFECCCTL_VCI2CFBA      (*(volatile uint32 *)0xFFC62200)
#define CFECCCTL_VCI2CFBAL     (*(volatile uint16 *)0xFFC62200)
#define CFSTSTCTL_VCI2CFBA     (*(volatile uint32 *)0xFFC622F0)
#define CFSTSTCTL_VCI2CFBAL    (*(volatile uint16 *)0xFFC622F0)
#define CFECCCTL_PE1           (*(volatile uint32 *)0xFFC62400)
#define CFECCCTL_PE1L          (*(volatile uint16 *)0xFFC62400)
#define CFSTSTCTL_PE1          (*(volatile uint32 *)0xFFC624F0)
#define CFSTSTCTL_PE1L         (*(volatile uint16 *)0xFFC624F0)
#define CFECCCTL_VCI2CFBB      (*(volatile uint32 *)0xFFC62C00)
#define CFECCCTL_VCI2CFBBL     (*(volatile uint16 *)0xFFC62C02)
#define CFERRINT_VCI2CFBB      (*(volatile uint32 *)0xFFC62C04)
#define CFERRINT_VCI2CFBBL     (*(volatile uint16 *)0xFFC62C04)
#define CFERRINT_VCI2CFBBLL    (*(volatile uint8  *)0xFFC62C04)
#define CFERSTCLR_VCI2CFBB     (*(volatile uint32 *)0xFFC62C08)
#define CFERSTCLR_VCI2CFBBL    (*(volatile uint16 *)0xFFC62C08)
#define CFERSTCLR_VCI2CFBBLL   (*(volatile uint8  *)0xFFC62C08)
#define CFOVFSTR_VCI2CFBB      (*(volatile uint32 *)0xFFC62C0C)
#define CFOVFSTR_VCI2CFBBL     (*(volatile uint16 *)0xFFC62C0C)
#define CFOVFSTR_VCI2CFBBLL    (*(volatile uint8  *)0xFFC62C0C)
#define CFERSTR_VCI2CFBB       (*(volatile uint32 *)0xFFC62C10)
#define CFERSTR_VCI2CFBBL      (*(volatile uint16 *)0xFFC62C10)
#define CFERSTR_VCI2CFBBLL     (*(volatile uint8  *)0xFFC62C10)
#define CFEADR0_VCI2CFBB       (*(volatile uint32 *)0xFFC62C50)
#define IFECCCTL_PE1           (*(volatile uint32 *)0xFFC63400)
#define IFECCCTL_PE1L          (*(volatile uint16 *)0xFFC63402)
#define IFERRINT_PE1           (*(volatile uint32 *)0xFFC63404)
#define IFERRINT_PE1L          (*(volatile uint16 *)0xFFC63404)
#define IFERRINT_PE1LL         (*(volatile uint8  *)0xFFC63404)
#define IFERSTCLR_PE1          (*(volatile uint32 *)0xFFC63408)
#define IFERSTCLR_PE1L         (*(volatile uint16 *)0xFFC63408)
#define IFERSTCLR_PE1LL        (*(volatile uint8  *)0xFFC63408)
#define IFOVFSTR_PE1           (*(volatile uint32 *)0xFFC6340C)
#define IFOVFSTR_PE1L          (*(volatile uint16 *)0xFFC6340C)
#define IFOVFSTR_PE1LL         (*(volatile uint8  *)0xFFC6340C)
#define IFERSTR_PE1            (*(volatile uint32 *)0xFFC63410)
#define IFERSTR_PE1L           (*(volatile uint16 *)0xFFC63410)
#define IFERSTR_PE1LL          (*(volatile uint8  *)0xFFC63410)
#define IFERADR_PE1            (*(volatile uint32 *)0xFFC63450)
#define UGRERRINT              (*(volatile uint32 *)0xFFC64000)
#define UGRERRINTL             (*(volatile uint16 *)0xFFC64000)
#define UGRERRINTLL            (*(volatile uint8  *)0xFFC64000)
#define UGRSERSTCLR            (*(volatile uint32 *)0xFFC64004)
#define UGRSERSTCLRL           (*(volatile uint16 *)0xFFC64004)
#define UGRSERSTCLRLL          (*(volatile uint8  *)0xFFC64004)
#define UGRSERSTCLRLH          (*(volatile uint8  *)0xFFC64005)
#define UGRSERSTCLRH           (*(volatile uint16 *)0xFFC64006)
#define UGRSERSTCLRHL          (*(volatile uint8  *)0xFFC64006)
#define UGRSERSTCLRHH          (*(volatile uint8  *)0xFFC64007)
#define UGRDERSTCLR            (*(volatile uint32 *)0xFFC64008)
#define UGRDERSTCLRL           (*(volatile uint16 *)0xFFC64008)
#define UGRDERSTCLRLL          (*(volatile uint8  *)0xFFC64008)
#define UGROVFSTR              (*(volatile uint32 *)0xFFC6400C)
#define UGROVFSTRL             (*(volatile uint16 *)0xFFC6400C)
#define UGROVFSTRLL            (*(volatile uint8  *)0xFFC6400C)
#define UGRSERSTR              (*(volatile uint32 *)0xFFC64020)
#define UGRSERSTRL             (*(volatile uint16 *)0xFFC64020)
#define UGRSERSTRLL            (*(volatile uint8  *)0xFFC64020)
#define UGRSERSTRLH            (*(volatile uint8  *)0xFFC64021)
#define UGRSERSTRH             (*(volatile uint16 *)0xFFC64022)
#define UGRSERSTRHL            (*(volatile uint8  *)0xFFC64022)
#define UGRSERSTRHH            (*(volatile uint8  *)0xFFC64023)
#define UGRDERSTR              (*(volatile uint32 *)0xFFC64030)
#define UGRDERSTRL             (*(volatile uint16 *)0xFFC64030)
#define UGRDERSTRLL            (*(volatile uint8  *)0xFFC64030)
#define UGR1SEDADR             (*(volatile uint32 *)0xFFC64040)
#define UGR2SEDADR             (*(volatile uint32 *)0xFFC64044)
#define UGR3SEDADR             (*(volatile uint32 *)0xFFC64048)
#define UGR4SEDADR             (*(volatile uint32 *)0xFFC6404C)
#define UGR5SEDADR             (*(volatile uint32 *)0xFFC64050)
#define UGR6SEDADR             (*(volatile uint32 *)0xFFC64054)
#define UGR7SEDADR             (*(volatile uint32 *)0xFFC64058)
#define UGR8SEDADR             (*(volatile uint32 *)0xFFC6405C)
#define UGR9SEDADR             (*(volatile uint32 *)0xFFC64060)
#define UGR10SEDADR            (*(volatile uint32 *)0xFFC64064)
#define UGR11SEDADR            (*(volatile uint32 *)0xFFC64068)
#define UGR12SEDADR            (*(volatile uint32 *)0xFFC6406C)
#define UGR13SEDADR            (*(volatile uint32 *)0xFFC64070)
#define UGR14SEDADR            (*(volatile uint32 *)0xFFC64074)
#define UGR15SEDADR            (*(volatile uint32 *)0xFFC64078)
#define UGR16SEDADR            (*(volatile uint32 *)0xFFC6407C)
#define UGR17SEDADR            (*(volatile uint32 *)0xFFC64080)
#define UGR18SEDADR            (*(volatile uint32 *)0xFFC64084)
#define UGR19SEDADR            (*(volatile uint32 *)0xFFC64088)
#define UGR20SEDADR            (*(volatile uint32 *)0xFFC6408C)
#define UGR21SEDADR            (*(volatile uint32 *)0xFFC64090)
#define UGR22SEDADR            (*(volatile uint32 *)0xFFC64094)
#define UGR23SEDADR            (*(volatile uint32 *)0xFFC64098)
#define UGR24SEDADR            (*(volatile uint32 *)0xFFC6409C)
#define UGR25SEDADR            (*(volatile uint32 *)0xFFC640A0)
#define UGR26SEDADR            (*(volatile uint32 *)0xFFC640A4)
#define UGR27SEDADR            (*(volatile uint32 *)0xFFC640A8)
#define UGR28SEDADR            (*(volatile uint32 *)0xFFC640AC)
#define UGR29SEDADR            (*(volatile uint32 *)0xFFC640B0)
#define UGR30SEDADR            (*(volatile uint32 *)0xFFC640B4)
#define UGR31SEDADR            (*(volatile uint32 *)0xFFC640B8)
#define UGR32SEDADR            (*(volatile uint32 *)0xFFC640BC)
#define UGR00DEDADR            (*(volatile uint32 *)0xFFC640C0)
#define GRECCCTL_GRAMC         (*(volatile uint32 *)0xFFC64100)
#define GRECCCTL_GRAMCL        (*(volatile uint16 *)0xFFC64100)
#define GRTSTCTL               (*(volatile uint32 *)0xFFC64104)
#define GRTSTCTLL              (*(volatile uint16 *)0xFFC64104)
#define GRTDATBF0L             (*(volatile uint32 *)0xFFC64108)
#define GRTDATBF0LL            (*(volatile uint16 *)0xFFC64108)
#define GRTDATBF0LLL           (*(volatile uint8  *)0xFFC64108)
#define GRTDATBF0LLH           (*(volatile uint8  *)0xFFC64109)
#define GRTDATBF0LH            (*(volatile uint16 *)0xFFC6410A)
#define GRTDATBF0LHL           (*(volatile uint8  *)0xFFC6410A)
#define GRTDATBF0LHH           (*(volatile uint8  *)0xFFC6410B)
#define GRTDATBF0H             (*(volatile uint32 *)0xFFC6410C)
#define GRTDATBF0HL            (*(volatile uint16 *)0xFFC6410C)
#define GRTDATBF0HLL           (*(volatile uint8  *)0xFFC6410C)
#define GRTDATBF0HLH           (*(volatile uint8  *)0xFFC6410D)
#define GRTDATBF0HH            (*(volatile uint16 *)0xFFC6410E)
#define GRTDATBF0HHL           (*(volatile uint8  *)0xFFC6410E)
#define GRTDATBF0HHH           (*(volatile uint8  *)0xFFC6410F)
#define GRTDATBF1L             (*(volatile uint32 *)0xFFC64110)
#define GRTDATBF1LL            (*(volatile uint16 *)0xFFC64110)
#define GRTDATBF1LLL           (*(volatile uint8  *)0xFFC64110)
#define GRTDATBF1LLH           (*(volatile uint8  *)0xFFC64111)
#define GRTDATBF1LH            (*(volatile uint16 *)0xFFC64112)
#define GRTDATBF1LHL           (*(volatile uint8  *)0xFFC64112)
#define GRTDATBF1LHH           (*(volatile uint8  *)0xFFC64113)
#define GRTDATBF1H             (*(volatile uint32 *)0xFFC64114)
#define GRTDATBF1HL            (*(volatile uint16 *)0xFFC64114)
#define GRTDATBF1HLL           (*(volatile uint8  *)0xFFC64114)
#define GRTDATBF1HLH           (*(volatile uint8  *)0xFFC64115)
#define GRTDATBF1HH            (*(volatile uint16 *)0xFFC64116)
#define GRTDATBF1HHL           (*(volatile uint8  *)0xFFC64116)
#define GRTDATBF1HHH           (*(volatile uint8  *)0xFFC64117)
#define GRDECINBF0             (*(volatile uint32 *)0xFFC64118)
#define GRDECINBF0L            (*(volatile uint16 *)0xFFC64118)
#define GRDECINBF0LL           (*(volatile uint8  *)0xFFC64118)
#define GRDECINBF0LH           (*(volatile uint8  *)0xFFC64119)
#define GRDECINBF0H            (*(volatile uint16 *)0xFFC6411A)
#define GRDECINBF0HL           (*(volatile uint8  *)0xFFC6411A)
#define GRDECINBF0HH           (*(volatile uint8  *)0xFFC6411B)
#define GRDECINBF1             (*(volatile uint32 *)0xFFC6411C)
#define GRDECINBF1L            (*(volatile uint16 *)0xFFC6411C)
#define GRDECINBF1LL           (*(volatile uint8  *)0xFFC6411C)
#define GRDECINBF1LH           (*(volatile uint8  *)0xFFC6411D)
#define GRDECINBF1H            (*(volatile uint16 *)0xFFC6411E)
#define GRDECINBF1HL           (*(volatile uint8  *)0xFFC6411E)
#define GRDECINBF1HH           (*(volatile uint8  *)0xFFC6411F)
#define GRECCCTL_VCI2GRAM      (*(volatile uint32 *)0xFFC64200)
#define GRECCCTL_VCI2GRAML     (*(volatile uint16 *)0xFFC64200)
#define GRECCCTL_PE1           (*(volatile uint32 *)0xFFC64400)
#define GRECCCTL_PE1L          (*(volatile uint16 *)0xFFC64400)
#define GRECCCTL_AXI2GRAM      (*(volatile uint32 *)0xFFC64E00)
#define GRECCCTL_AXI2GRAML     (*(volatile uint16 *)0xFFC64E00)
#define LRECCCTL_PE1           (*(volatile uint32 *)0xFFC65400)
#define LRECCCTL_PE1L          (*(volatile uint16 *)0xFFC65400)
#define LRERRINT_PE1           (*(volatile uint32 *)0xFFC65404)
#define LRERRINT_PE1L          (*(volatile uint16 *)0xFFC65404)
#define LRERRINT_PE1LL         (*(volatile uint8  *)0xFFC65404)
#define LRSERSTCLR_PE1         (*(volatile uint32 *)0xFFC65408)
#define LRSERSTCLR_PE1L        (*(volatile uint16 *)0xFFC65408)
#define LRSERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC65408)
#define LRSERSTCLR_PE1LH       (*(volatile uint8  *)0xFFC65409)
#define LRSERSTCLR_PE1H        (*(volatile uint16 *)0xFFC6540A)
#define LRSERSTCLR_PE1HL       (*(volatile uint8  *)0xFFC6540A)
#define LRSERSTCLR_PE1HH       (*(volatile uint8  *)0xFFC6540B)
#define LRDERSTCLR_PE1         (*(volatile uint32 *)0xFFC6540C)
#define LRDERSTCLR_PE1L        (*(volatile uint16 *)0xFFC6540C)
#define LRDERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC6540C)
#define LROVFSTR_PE1           (*(volatile uint32 *)0xFFC65410)
#define LROVFSTR_PE1L          (*(volatile uint16 *)0xFFC65410)
#define LROVFSTR_PE1LL         (*(volatile uint8  *)0xFFC65410)
#define LRSERSTR_PE1           (*(volatile uint32 *)0xFFC65440)
#define LRSERSTR_PE1L          (*(volatile uint16 *)0xFFC65440)
#define LRSERSTR_PE1LL         (*(volatile uint8  *)0xFFC65440)
#define LRSERSTR_PE1LH         (*(volatile uint8  *)0xFFC65441)
#define LRSERSTR_PE1H          (*(volatile uint16 *)0xFFC65442)
#define LRSERSTR_PE1HL         (*(volatile uint8  *)0xFFC65442)
#define LRSERSTR_PE1HH         (*(volatile uint8  *)0xFFC65443)
#define LRDERSTR_PE1           (*(volatile uint32 *)0xFFC65450)
#define LRDERSTR_PE1L          (*(volatile uint16 *)0xFFC65450)
#define LRDERSTR_PE1LL         (*(volatile uint8  *)0xFFC65450)
#define LRDERSTR_PE1LH         (*(volatile uint8  *)0xFFC65451)
#define LRDERSTR_PE1H          (*(volatile uint16 *)0xFFC65452)
#define LRDERSTR_PE1HL         (*(volatile uint8  *)0xFFC65452)
#define LRDERSTR_PE1HH         (*(volatile uint8  *)0xFFC65453)
#define LR1SEDADR0_PE1         (*(volatile uint32 *)0xFFC65460)
#define LR1SEDADR1_PE1         (*(volatile uint32 *)0xFFC65464)
#define LR1SEDADR2_PE1         (*(volatile uint32 *)0xFFC65468)
#define LR1SEDADR3_PE1         (*(volatile uint32 *)0xFFC6546C)
#define LR2SEDADR0_PE1         (*(volatile uint32 *)0xFFC65470)
#define LR2SEDADR1_PE1         (*(volatile uint32 *)0xFFC65474)
#define LR2SEDADR2_PE1         (*(volatile uint32 *)0xFFC65478)
#define LR2SEDADR3_PE1         (*(volatile uint32 *)0xFFC6547C)
#define LR3SEDADR0_PE1         (*(volatile uint32 *)0xFFC65480)
#define LR3SEDADR1_PE1         (*(volatile uint32 *)0xFFC65484)
#define LR3SEDADR2_PE1         (*(volatile uint32 *)0xFFC65488)
#define LR3SEDADR3_PE1         (*(volatile uint32 *)0xFFC6548C)
#define LR4SEDADR0_PE1         (*(volatile uint32 *)0xFFC65490)
#define LR4SEDADR1_PE1         (*(volatile uint32 *)0xFFC65494)
#define LR4SEDADR2_PE1         (*(volatile uint32 *)0xFFC65498)
#define LR4SEDADR3_PE1         (*(volatile uint32 *)0xFFC6549C)
#define LR5SEDADR0_PE1         (*(volatile uint32 *)0xFFC654A0)
#define LR5SEDADR1_PE1         (*(volatile uint32 *)0xFFC654A4)
#define LR5SEDADR2_PE1         (*(volatile uint32 *)0xFFC654A8)
#define LR5SEDADR3_PE1         (*(volatile uint32 *)0xFFC654AC)
#define LR6SEDADR0_PE1         (*(volatile uint32 *)0xFFC654B0)
#define LR6SEDADR1_PE1         (*(volatile uint32 *)0xFFC654B4)
#define LR6SEDADR2_PE1         (*(volatile uint32 *)0xFFC654B8)
#define LR6SEDADR3_PE1         (*(volatile uint32 *)0xFFC654BC)
#define LR7SEDADR0_PE1         (*(volatile uint32 *)0xFFC654C0)
#define LR7SEDADR1_PE1         (*(volatile uint32 *)0xFFC654C4)
#define LR7SEDADR2_PE1         (*(volatile uint32 *)0xFFC654C8)
#define LR7SEDADR3_PE1         (*(volatile uint32 *)0xFFC654CC)
#define LR8SEDADR0_PE1         (*(volatile uint32 *)0xFFC654D0)
#define LR8SEDADR1_PE1         (*(volatile uint32 *)0xFFC654D4)
#define LR8SEDADR2_PE1         (*(volatile uint32 *)0xFFC654D8)
#define LR8SEDADR3_PE1         (*(volatile uint32 *)0xFFC654DC)
#define LRDEDADR0_PE1          (*(volatile uint32 *)0xFFC654E0)
#define LRDEDADR1_PE1          (*(volatile uint32 *)0xFFC654E4)
#define LRDEDADR2_PE1          (*(volatile uint32 *)0xFFC654E8)
#define LRDEDADR3_PE1          (*(volatile uint32 *)0xFFC654EC)
#define LRTSTCTL_PE1           (*(volatile uint32 *)0xFFC65604)
#define LRTDATBF0_PE1          (*(volatile uint32 *)0xFFC65608)
#define LRTDATBF1_PE1          (*(volatile uint32 *)0xFFC6560C)
#define LSSECCCTL_PE1          (*(volatile uint32 *)0xFFC66000)
#define LSSECCCTL_PE1L         (*(volatile uint16 *)0xFFC66000)
#define LSSERRINT_PE1          (*(volatile uint32 *)0xFFC66004)
#define LSSERRINT_PE1L         (*(volatile uint16 *)0xFFC66004)
#define LSSERRINT_PE1LL        (*(volatile uint8  *)0xFFC66004)
#define LSSERSTCLR_PE1         (*(volatile uint32 *)0xFFC66008)
#define LSSERSTCLR_PE1L        (*(volatile uint16 *)0xFFC66008)
#define LSSERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC66008)
#define LSSOVFSTR_PE1          (*(volatile uint32 *)0xFFC6600C)
#define LSSOVFSTR_PE1L         (*(volatile uint16 *)0xFFC6600C)
#define LSSOVFSTR_PE1LL        (*(volatile uint8  *)0xFFC6600C)
#define LSSERSTR_PE1           (*(volatile uint32 *)0xFFC66010)
#define LSSERSTR_PE1L          (*(volatile uint16 *)0xFFC66010)
#define LSSERSTR_PE1LL         (*(volatile uint8  *)0xFFC66010)
#define LSSEADR_PE1            (*(volatile uint32 *)0xFFC66050)
#define LSMECCCTL_PE1          (*(volatile uint32 *)0xFFC66400)
#define LSMECCCTL_PE1L         (*(volatile uint16 *)0xFFC66400)
#define LSMERRINT_PE1          (*(volatile uint32 *)0xFFC66404)
#define LSMERRINT_PE1L         (*(volatile uint16 *)0xFFC66404)
#define LSMERRINT_PE1LL        (*(volatile uint8  *)0xFFC66404)
#define LSMERSTCLR_PE1         (*(volatile uint32 *)0xFFC66408)
#define LSMERSTCLR_PE1L        (*(volatile uint16 *)0xFFC66408)
#define LSMERSTCLR_PE1LL       (*(volatile uint8  *)0xFFC66408)
#define LSMOVFSTR_PE1          (*(volatile uint32 *)0xFFC6640C)
#define LSMOVFSTR_PE1L         (*(volatile uint16 *)0xFFC6640C)
#define LSMOVFSTR_PE1LL        (*(volatile uint8  *)0xFFC6640C)
#define LSMERSTR_PE1           (*(volatile uint32 *)0xFFC66410)
#define LSMERSTR_PE1L          (*(volatile uint16 *)0xFFC66410)
#define LSMERSTR_PE1LL         (*(volatile uint8  *)0xFFC66410)
#define LSMEADR_PE1            (*(volatile uint32 *)0xFFC66450)
#define VPECCCTL_SG0           (*(volatile uint32 *)0xFFC67000)
#define VPECCCTL_SG0L          (*(volatile uint16 *)0xFFC67000)
#define VPERRINT_SG0           (*(volatile uint32 *)0xFFC67004)
#define VPERRINT_SG0L          (*(volatile uint16 *)0xFFC67004)
#define VPERRINT_SG0LL         (*(volatile uint8  *)0xFFC67004)
#define VPERSTCLR_SG0          (*(volatile uint32 *)0xFFC67008)
#define VPERSTCLR_SG0L         (*(volatile uint16 *)0xFFC67008)
#define VPERSTCLR_SG0LL        (*(volatile uint8  *)0xFFC67008)
#define VPOVFSTR_SG0           (*(volatile uint32 *)0xFFC6700C)
#define VPOVFSTR_SG0L          (*(volatile uint16 *)0xFFC6700C)
#define VPOVFSTR_SG0LL         (*(volatile uint8  *)0xFFC6700C)
#define VPERSTR_SG0            (*(volatile uint32 *)0xFFC67010)
#define VPERSTR_SG0L           (*(volatile uint16 *)0xFFC67010)
#define VPERSTR_SG0LL          (*(volatile uint8  *)0xFFC67010)
#define VPEADR_SG0             (*(volatile uint32 *)0xFFC67050)
#define VPECCCTL_SG1           (*(volatile uint32 *)0xFFC67400)
#define VPECCCTL_SG1L          (*(volatile uint16 *)0xFFC67400)
#define VPERRINT_SG1           (*(volatile uint32 *)0xFFC67404)
#define VPERRINT_SG1L          (*(volatile uint16 *)0xFFC67404)
#define VPERRINT_SG1LL         (*(volatile uint8  *)0xFFC67404)
#define VPERSTCLR_SG1          (*(volatile uint32 *)0xFFC67408)
#define VPERSTCLR_SG1L         (*(volatile uint16 *)0xFFC67408)
#define VPERSTCLR_SG1LL        (*(volatile uint8  *)0xFFC67408)
#define VPOVFSTR_SG1           (*(volatile uint32 *)0xFFC6740C)
#define VPOVFSTR_SG1L          (*(volatile uint16 *)0xFFC6740C)
#define VPOVFSTR_SG1LL         (*(volatile uint8  *)0xFFC6740C)
#define VPERSTR_SG1            (*(volatile uint32 *)0xFFC67410)
#define VPERSTR_SG1L           (*(volatile uint16 *)0xFFC67410)
#define VPERSTR_SG1LL          (*(volatile uint8  *)0xFFC67410)
#define VPEADR_SG1             (*(volatile uint32 *)0xFFC67450)
#define VPECCCTL_SG2           (*(volatile uint32 *)0xFFC67800)
#define VPECCCTL_SG2L          (*(volatile uint16 *)0xFFC67800)
#define VPERRINT_SG2           (*(volatile uint32 *)0xFFC67804)
#define VPERRINT_SG2L          (*(volatile uint16 *)0xFFC67804)
#define VPERRINT_SG2LL         (*(volatile uint8  *)0xFFC67804)
#define VPERSTCLR_SG2          (*(volatile uint32 *)0xFFC67808)
#define VPERSTCLR_SG2L         (*(volatile uint16 *)0xFFC67808)
#define VPERSTCLR_SG2LL        (*(volatile uint8  *)0xFFC67808)
#define VPOVFSTR_SG2           (*(volatile uint32 *)0xFFC6780C)
#define VPOVFSTR_SG2L          (*(volatile uint16 *)0xFFC6780C)
#define VPOVFSTR_SG2LL         (*(volatile uint8  *)0xFFC6780C)
#define VPERSTR_SG2            (*(volatile uint32 *)0xFFC67810)
#define VPERSTR_SG2L           (*(volatile uint16 *)0xFFC67810)
#define VPERSTR_SG2LL          (*(volatile uint8  *)0xFFC67810)
#define VPEADR_SG2             (*(volatile uint32 *)0xFFC67850)
#define VPECCCTL_SG3           (*(volatile uint32 *)0xFFC67C00)
#define VPECCCTL_SG3L          (*(volatile uint16 *)0xFFC67C00)
#define VPERRINT_SG3           (*(volatile uint32 *)0xFFC67C04)
#define VPERRINT_SG3L          (*(volatile uint16 *)0xFFC67C04)
#define VPERRINT_SG3LL         (*(volatile uint8  *)0xFFC67C04)
#define VPERSTCLR_SG3          (*(volatile uint32 *)0xFFC67C08)
#define VPERSTCLR_SG3L         (*(volatile uint16 *)0xFFC67C08)
#define VPERSTCLR_SG3LL        (*(volatile uint8  *)0xFFC67C08)
#define VPOVFSTR_SG3           (*(volatile uint32 *)0xFFC67C0C)
#define VPOVFSTR_SG3L          (*(volatile uint16 *)0xFFC67C0C)
#define VPOVFSTR_SG3LL         (*(volatile uint8  *)0xFFC67C0C)
#define VPERSTR_SG3            (*(volatile uint32 *)0xFFC67C10)
#define VPERSTR_SG3L           (*(volatile uint16 *)0xFFC67C10)
#define VPERSTR_SG3LL          (*(volatile uint8  *)0xFFC67C10)
#define VPEADR_SG3             (*(volatile uint32 *)0xFFC67C50)
#define VPECCCTL_SG5           (*(volatile uint32 *)0xFFC68400)
#define VPECCCTL_SG5L          (*(volatile uint16 *)0xFFC68400)
#define VPERRINT_SG5           (*(volatile uint32 *)0xFFC68404)
#define VPERRINT_SG5L          (*(volatile uint16 *)0xFFC68404)
#define VPERRINT_SG5LL         (*(volatile uint8  *)0xFFC68404)
#define VPERSTCLR_SG5          (*(volatile uint32 *)0xFFC68408)
#define VPERSTCLR_SG5L         (*(volatile uint16 *)0xFFC68408)
#define VPERSTCLR_SG5LL        (*(volatile uint8  *)0xFFC68408)
#define VPOVFSTR_SG5           (*(volatile uint32 *)0xFFC6840C)
#define VPOVFSTR_SG5L          (*(volatile uint16 *)0xFFC6840C)
#define VPOVFSTR_SG5LL         (*(volatile uint8  *)0xFFC6840C)
#define VPERSTR_SG5            (*(volatile uint32 *)0xFFC68410)
#define VPERSTR_SG5L           (*(volatile uint16 *)0xFFC68410)
#define VPERSTR_SG5LL          (*(volatile uint8  *)0xFFC68410)
#define VPEADR_SG5             (*(volatile uint32 *)0xFFC68450)
#define VPECCCTL_TERM_SG7      (*(volatile uint32 *)0xFFC68E00)
#define VPECCCTL_TERM_SG7L     (*(volatile uint16 *)0xFFC68E00)
#define VPERRINT_TERM_SG7      (*(volatile uint32 *)0xFFC68E04)
#define VPERRINT_TERM_SG7L     (*(volatile uint16 *)0xFFC68E04)
#define VPERRINT_TERM_SG7LL    (*(volatile uint8  *)0xFFC68E04)
#define VPERSTCLR_TERM_SG7     (*(volatile uint32 *)0xFFC68E08)
#define VPERSTCLR_TERM_SG7L    (*(volatile uint16 *)0xFFC68E08)
#define VPERSTCLR_TERM_SG7LL   (*(volatile uint8  *)0xFFC68E08)
#define VPOVFSTR_TERM_SG7      (*(volatile uint32 *)0xFFC68E0C)
#define VPOVFSTR_TERM_SG7L     (*(volatile uint16 *)0xFFC68E0C)
#define VPOVFSTR_TERM_SG7LL    (*(volatile uint8  *)0xFFC68E0C)
#define VPERSTR_TERM_SG7       (*(volatile uint32 *)0xFFC68E10)
#define VPERSTR_TERM_SG7L      (*(volatile uint16 *)0xFFC68E10)
#define VPERSTR_TERM_SG7LL     (*(volatile uint8  *)0xFFC68E10)
#define VPEADR_TERM_SG7        (*(volatile uint32 *)0xFFC68E50)
#define VPECCCTL_VCI2VPI       (*(volatile uint32 *)0xFFC69000)
#define VPECCCTL_VCI2VPIL      (*(volatile uint16 *)0xFFC69000)
#define VPERRINT_VCI2VPI       (*(volatile uint32 *)0xFFC69004)
#define VPERRINT_VCI2VPIL      (*(volatile uint16 *)0xFFC69004)
#define VPERRINT_VCI2VPILL     (*(volatile uint8  *)0xFFC69004)
#define VPERSTCLR_VCI2VPI      (*(volatile uint32 *)0xFFC69008)
#define VPERSTCLR_VCI2VPIL     (*(volatile uint16 *)0xFFC69008)
#define VPERSTCLR_VCI2VPILL    (*(volatile uint8  *)0xFFC69008)
#define VPOVFSTR_VCI2VPI       (*(volatile uint32 *)0xFFC6900C)
#define VPOVFSTR_VCI2VPIL      (*(volatile uint16 *)0xFFC6900C)
#define VPOVFSTR_VCI2VPILL     (*(volatile uint8  *)0xFFC6900C)
#define VPERSTR_VCI2VPI        (*(volatile uint32 *)0xFFC69010)
#define VPERSTR_VCI2VPIL       (*(volatile uint16 *)0xFFC69010)
#define VPERSTR_VCI2VPILL      (*(volatile uint8  *)0xFFC69010)
#define VPERADR0_VCI2VPI       (*(volatile uint32 *)0xFFC69050)
#define VCECCCTL_PDMA          (*(volatile uint32 *)0xFFC6A000)
#define VCECCCTL_PDMAL         (*(volatile uint16 *)0xFFC6A000)
#define VCERRINT_PDMA          (*(volatile uint32 *)0xFFC6A004)
#define VCERRINT_PDMAL         (*(volatile uint16 *)0xFFC6A004)
#define VCERRINT_PDMALL        (*(volatile uint8  *)0xFFC6A004)
#define VCERSTCLR_PDMA         (*(volatile uint32 *)0xFFC6A008)
#define VCERSTCLR_PDMAL        (*(volatile uint16 *)0xFFC6A008)
#define VCERSTCLR_PDMALL       (*(volatile uint8  *)0xFFC6A008)
#define VCOVFSTR_PDMA          (*(volatile uint32 *)0xFFC6A00C)
#define VCOVFSTR_PDMAL         (*(volatile uint16 *)0xFFC6A00C)
#define VCOVFSTR_PDMALL        (*(volatile uint8  *)0xFFC6A00C)
#define VCERSTR_PDMA           (*(volatile uint32 *)0xFFC6A010)
#define VCERSTR_PDMAL          (*(volatile uint16 *)0xFFC6A010)
#define VCERSTR_PDMALL         (*(volatile uint8  *)0xFFC6A010)
#define VCEADR_PDMA            (*(volatile uint32 *)0xFFC6A050)
#define APECCCTL_PFSS          (*(volatile uint32 *)0xFFC6C000)
#define APECCCTL_PFSSL         (*(volatile uint16 *)0xFFC6C000)
#define APERRINT_PFSS          (*(volatile uint32 *)0xFFC6C004)
#define APERRINT_PFSSL         (*(volatile uint16 *)0xFFC6C004)
#define APERRINT_PFSSLL        (*(volatile uint8  *)0xFFC6C004)
#define APERSTCLR_PFSS         (*(volatile uint32 *)0xFFC6C008)
#define APERSTCLR_PFSSL        (*(volatile uint16 *)0xFFC6C008)
#define APERSTCLR_PFSSLL       (*(volatile uint8  *)0xFFC6C008)
#define APOVFSTR_PFSS          (*(volatile uint32 *)0xFFC6C00C)
#define APOVFSTR_PFSSL         (*(volatile uint16 *)0xFFC6C00C)
#define APOVFSTR_PFSSLL        (*(volatile uint8  *)0xFFC6C00C)
#define APERSTR_PFSS           (*(volatile uint32 *)0xFFC6C010)
#define APERSTR_PFSSL          (*(volatile uint16 *)0xFFC6C010)
#define APERSTR_PFSSLL         (*(volatile uint8  *)0xFFC6C010)
#define APEADR_PFSS            (*(volatile uint32 *)0xFFC6C050)
#define APEC0ECCCTL            (*(volatile uint32 *)0xFFCB8000)
#define APEC0ECCCTLL           (*(volatile uint16 *)0xFFCB8000)
#define APEC0ERRINT            (*(volatile uint32 *)0xFFCB8004)
#define APEC0ERRINTL           (*(volatile uint16 *)0xFFCB8004)
#define APEC0ERRINTLL          (*(volatile uint8  *)0xFFCB8004)
#define APEC0STCLR             (*(volatile uint32 *)0xFFCB8008)
#define APEC0STCLRL            (*(volatile uint16 *)0xFFCB8008)
#define APEC0STCLRLL           (*(volatile uint8  *)0xFFCB8008)
#define APEC0OVFSTR            (*(volatile uint32 *)0xFFCB800C)
#define APEC0OVFSTRL           (*(volatile uint16 *)0xFFCB800C)
#define APEC0OVFSTRLL          (*(volatile uint8  *)0xFFCB800C)
#define APEC01STERSTR          (*(volatile uint32 *)0xFFCB8010)
#define APEC01STERSTRL         (*(volatile uint16 *)0xFFCB8010)
#define APEC01STERSTRLL        (*(volatile uint8  *)0xFFCB8010)
#define APEC01STEADR0          (*(volatile uint32 *)0xFFCB8050)
#define GREG8                  (*(volatile uint32 *)0xFFCD0020)
#define OPBT0                  (*(volatile uint32 *)0xFFCD0030)
#define OPBT1                  (*(volatile uint32 *)0xFFCD0034)
#define OPBT2                  (*(volatile uint32 *)0xFFCD0038)
#define OPBT13                 (*(volatile uint32 *)0xFFCD0064)
#define OPBT14                 (*(volatile uint32 *)0xFFCD0068)
#define OPBT15                 (*(volatile uint32 *)0xFFCD006C)
#define PRDNAME1               (*(volatile uint32 *)0xFFCD00D0)
#define PRDNAME2               (*(volatile uint32 *)0xFFCD00D4)
#define PRDNAME3               (*(volatile uint32 *)0xFFCD00D8)
#define PRDNAME4               (*(volatile uint32 *)0xFFCD00DC)
#define CHIPID1LL              (*(volatile uint32 *)0xFFCD00E0)
#define CHIPID1LH              (*(volatile uint32 *)0xFFCD00E4)
#define CHIPID1HL              (*(volatile uint32 *)0xFFCD00E8)
#define CHIPID1HH              (*(volatile uint32 *)0xFFCD00EC)
#define EMLK                   (*(volatile uint32 *)0xFFCD0140)
#define APEC4ECCCTL            (*(volatile uint32 *)0xFFCD8000)
#define APEC4ECCCTLL           (*(volatile uint16 *)0xFFCD8000)
#define APEC4ERRINT            (*(volatile uint32 *)0xFFCD8004)
#define APEC4ERRINTL           (*(volatile uint16 *)0xFFCD8004)
#define APEC4ERRINTLL          (*(volatile uint8  *)0xFFCD8004)
#define APEC4STCLR             (*(volatile uint32 *)0xFFCD8008)
#define APEC4STCLRL            (*(volatile uint16 *)0xFFCD8008)
#define APEC4STCLRLL           (*(volatile uint8  *)0xFFCD8008)
#define APEC4OVFSTR            (*(volatile uint32 *)0xFFCD800C)
#define APEC4OVFSTRL           (*(volatile uint16 *)0xFFCD800C)
#define APEC4OVFSTRLL          (*(volatile uint8  *)0xFFCD800C)
#define APEC41STERSTR          (*(volatile uint32 *)0xFFCD8010)
#define APEC41STERSTRL         (*(volatile uint16 *)0xFFCD8010)
#define APEC41STERSTRLL        (*(volatile uint8  *)0xFFCD8010)
#define APEC41STEADR0          (*(volatile uint32 *)0xFFCD8050)
#define APEC5ECCCTL            (*(volatile uint32 *)0xFFCD8200)
#define APEC5ECCCTLL           (*(volatile uint16 *)0xFFCD8200)
#define APEC5ERRINT            (*(volatile uint32 *)0xFFCD8204)
#define APEC5ERRINTL           (*(volatile uint16 *)0xFFCD8204)
#define APEC5ERRINTLL          (*(volatile uint8  *)0xFFCD8204)
#define APEC5STCLR             (*(volatile uint32 *)0xFFCD8208)
#define APEC5STCLRL            (*(volatile uint16 *)0xFFCD8208)
#define APEC5STCLRLL           (*(volatile uint8  *)0xFFCD8208)
#define APEC5OVFSTR            (*(volatile uint32 *)0xFFCD820C)
#define APEC5OVFSTRL           (*(volatile uint16 *)0xFFCD820C)
#define APEC5OVFSTRLL          (*(volatile uint8  *)0xFFCD820C)
#define APEC51STERSTR          (*(volatile uint32 *)0xFFCD8210)
#define APEC51STERSTRL         (*(volatile uint16 *)0xFFCD8210)
#define APEC51STERSTRLL        (*(volatile uint8  *)0xFFCD8210)
#define APEC51STEADR0          (*(volatile uint32 *)0xFFCD8250)
#define APEC6ECCCTL            (*(volatile uint32 *)0xFFCD8400)
#define APEC6ECCCTLL           (*(volatile uint16 *)0xFFCD8400)
#define APEC6ERRINT            (*(volatile uint32 *)0xFFCD8404)
#define APEC6ERRINTL           (*(volatile uint16 *)0xFFCD8404)
#define APEC6ERRINTLL          (*(volatile uint8  *)0xFFCD8404)
#define APEC6STCLR             (*(volatile uint32 *)0xFFCD8408)
#define APEC6STCLRL            (*(volatile uint16 *)0xFFCD8408)
#define APEC6STCLRLL           (*(volatile uint8  *)0xFFCD8408)
#define APEC6OVFSTR            (*(volatile uint32 *)0xFFCD840C)
#define APEC6OVFSTRL           (*(volatile uint16 *)0xFFCD840C)
#define APEC6OVFSTRLL          (*(volatile uint8  *)0xFFCD840C)
#define APEC61STERSTR          (*(volatile uint32 *)0xFFCD8410)
#define APEC61STERSTRL         (*(volatile uint16 *)0xFFCD8410)
#define APEC61STERSTRLL        (*(volatile uint8  *)0xFFCD8410)
#define APEC61STEADR0          (*(volatile uint32 *)0xFFCD8450)
#define LBISTREF1              (*(volatile uint32 *)0xFFCDA000)
#define LBISTREF2              (*(volatile uint32 *)0xFFCDA004)
#define MBISTREF1              (*(volatile uint32 *)0xFFCDA008)
#define MBISTREF2              (*(volatile uint32 *)0xFFCDA00C)
#define LBISTSIG1              (*(volatile uint32 *)0xFFCDA010)
#define LBISTSIG2              (*(volatile uint32 *)0xFFCDA014)
#define MBISTSIG1              (*(volatile uint32 *)0xFFCDA018)
#define MBISTSIG2              (*(volatile uint32 *)0xFFCDA01C)
#define MBISTFTAGL1            (*(volatile uint32 *)0xFFCDA020)
#define MBISTFTAGH1            (*(volatile uint32 *)0xFFCDA024)
#define MBISTFTAGL2            (*(volatile uint32 *)0xFFCDA028)
#define MBISTFTAGH2            (*(volatile uint32 *)0xFFCDA02C)
#define BSEQ0ST                (*(volatile uint32 *)0xFFCDA030)
#define BSEQ0STB               (*(volatile uint32 *)0xFFCDA034)
#define BISTST                 (*(volatile uint32 *)0xFFCDA038)
#define RSENT0TSSEL            (*(volatile uint32 *)0xFFCDCF00)
#define RSENT1TSSEL            (*(volatile uint32 *)0xFFCDCF04)
#define RSENT2TSSEL            (*(volatile uint32 *)0xFFCDCF08)
#define RSENT3TSSEL            (*(volatile uint32 *)0xFFCDCF0C)
#define RSENT4TSSEL            (*(volatile uint32 *)0xFFCDCF10)
#define RSENT5TSSEL            (*(volatile uint32 *)0xFFCDCF14)
#define PINT0                  (*(volatile uint32 *)0xFFD40000)
#define PINT1                  (*(volatile uint32 *)0xFFD40004)
#define PINT2                  (*(volatile uint32 *)0xFFD40008)
#define PINT3                  (*(volatile uint32 *)0xFFD4000C)
#define PINT4                  (*(volatile uint32 *)0xFFD40010)
#define PINT5                  (*(volatile uint32 *)0xFFD40014)
#define PINT6                  (*(volatile uint32 *)0xFFD40018)
#define PINT7                  (*(volatile uint32 *)0xFFD4001C)
#define PINTCLR0               (*(volatile uint32 *)0xFFD40020)
#define PINTCLR1               (*(volatile uint32 *)0xFFD40024)
#define PINTCLR2               (*(volatile uint32 *)0xFFD40028)
#define PINTCLR3               (*(volatile uint32 *)0xFFD4002C)
#define PINTCLR4               (*(volatile uint32 *)0xFFD40030)
#define PINTCLR5               (*(volatile uint32 *)0xFFD40034)
#define PINTCLR6               (*(volatile uint32 *)0xFFD40038)
#define PINTCLR7               (*(volatile uint32 *)0xFFD4003C)
#define DTSTRGSEL0             (*(volatile uint32 *)0xFFD41000)
#define DTSTRGSEL1             (*(volatile uint32 *)0xFFD41004)
#define DTSTRGSEL2             (*(volatile uint32 *)0xFFD41008)
#define DTSTRGSEL3             (*(volatile uint32 *)0xFFD4100C)
#define FEINTF0                (*(volatile uint32 *)0xFFD42000)
#define FEINTFMSK0             (*(volatile uint32 *)0xFFD42004)
#define FEINTFC0               (*(volatile uint32 *)0xFFD42008)
#define FEINTF1                (*(volatile uint32 *)0xFFD43000)
#define FEINTFMSK1             (*(volatile uint32 *)0xFFD43004)
#define FEINTFC1               (*(volatile uint32 *)0xFFD43008)
#define APEC1ECCCTL            (*(volatile uint32 *)0xFFE88000)
#define APEC1ECCCTLL           (*(volatile uint16 *)0xFFE88000)
#define APEC1ERRINT            (*(volatile uint32 *)0xFFE88004)
#define APEC1ERRINTL           (*(volatile uint16 *)0xFFE88004)
#define APEC1ERRINTLL          (*(volatile uint8  *)0xFFE88004)
#define APEC1STCLR             (*(volatile uint32 *)0xFFE88008)
#define APEC1STCLRL            (*(volatile uint16 *)0xFFE88008)
#define APEC1STCLRLL           (*(volatile uint8  *)0xFFE88008)
#define APEC1OVFSTR            (*(volatile uint32 *)0xFFE8800C)
#define APEC1OVFSTRL           (*(volatile uint16 *)0xFFE8800C)
#define APEC1OVFSTRLL          (*(volatile uint8  *)0xFFE8800C)
#define APEC11STERSTR          (*(volatile uint32 *)0xFFE88010)
#define APEC11STERSTRL         (*(volatile uint16 *)0xFFE88010)
#define APEC11STERSTRLL        (*(volatile uint8  *)0xFFE88010)
#define APEC11STEADR0          (*(volatile uint32 *)0xFFE88050)
#define APEC2ECCCTL            (*(volatile uint32 *)0xFFE88200)
#define APEC2ECCCTLL           (*(volatile uint16 *)0xFFE88200)
#define APEC2ERRINT            (*(volatile uint32 *)0xFFE88204)
#define APEC2ERRINTL           (*(volatile uint16 *)0xFFE88204)
#define APEC2ERRINTLL          (*(volatile uint8  *)0xFFE88204)
#define APEC2STCLR             (*(volatile uint32 *)0xFFE88208)
#define APEC2STCLRL            (*(volatile uint16 *)0xFFE88208)
#define APEC2STCLRLL           (*(volatile uint8  *)0xFFE88208)
#define APEC2OVFSTR            (*(volatile uint32 *)0xFFE8820C)
#define APEC2OVFSTRL           (*(volatile uint16 *)0xFFE8820C)
#define APEC2OVFSTRLL          (*(volatile uint8  *)0xFFE8820C)
#define APEC21STERSTR          (*(volatile uint32 *)0xFFE88210)
#define APEC21STERSTRL         (*(volatile uint16 *)0xFFE88210)
#define APEC21STERSTRLL        (*(volatile uint8  *)0xFFE88210)
#define APEC21STEADR0          (*(volatile uint32 *)0xFFE88250)
#define SELB0CALC              (*(volatile uint32 *)0xFFED8024)
#define MODE                   (*(volatile uint32 *)0xFFF80104)
#define BSEQ0CTL               (*(volatile uint32 *)0xFFF80200)
#define RESF                   (*(volatile uint32 *)0xFFF81000)
#define RESFC                  (*(volatile uint32 *)0xFFF81008)
#define SWSRESA0               (*(volatile uint32 *)0xFFF81100)
#define SWARESA0               (*(volatile uint32 *)0xFFF81200)
#define STAC_DTSRAM            (*(volatile uint32 *)0xFFF81320)
#define STAC_GRAM              (*(volatile uint32 *)0xFFF81420)
#define STAC_LM0               (*(volatile uint32 *)0xFFF81520)
#define STAC_LM1               (*(volatile uint32 *)0xFFF81620)
#define SWLRESA3               (*(volatile uint32 *)0xFFF81708)
#define SWLRESS3               (*(volatile uint32 *)0xFFF8170C)
#define MSR_LM3                (*(volatile uint32 *)0xFFF81710)
#define STAC_LM3               (*(volatile uint32 *)0xFFF81720)
#define SWLRESA4               (*(volatile uint32 *)0xFFF81808)
#define SWLRESS4               (*(volatile uint32 *)0xFFF8180C)
#define MSR_LM4                (*(volatile uint32 *)0xFFF81810)
#define STAC_LM4               (*(volatile uint32 *)0xFFF81820)
#define SWLRESA5               (*(volatile uint32 *)0xFFF81908)
#define SWLRESS5               (*(volatile uint32 *)0xFFF8190C)
#define MSR_LM5                (*(volatile uint32 *)0xFFF81910)
#define STAC_LM5               (*(volatile uint32 *)0xFFF81920)
#define SWLRESA6               (*(volatile uint32 *)0xFFF81A08)
#define SWLRESS6               (*(volatile uint32 *)0xFFF81A0C)
#define MSR_LM6                (*(volatile uint32 *)0xFFF81A10)
#define SWLRESA7               (*(volatile uint32 *)0xFFF81B08)
#define SWLRESS7               (*(volatile uint32 *)0xFFF81B0C)
#define MSR_LM7                (*(volatile uint32 *)0xFFF81B10)
#define SWLRESA8               (*(volatile uint32 *)0xFFF81C08)
#define SWLRESS8               (*(volatile uint32 *)0xFFF81C0C)
#define MSR_LM8                (*(volatile uint32 *)0xFFF81C10)
#define SWLRESA10              (*(volatile uint32 *)0xFFF81E08)
#define SWLRESS10              (*(volatile uint32 *)0xFFF81E0C)
#define MSR_LM10               (*(volatile uint32 *)0xFFF81E10)
#define STAC_LM10              (*(volatile uint32 *)0xFFF81E20)
#define SWLRESA11              (*(volatile uint32 *)0xFFF81F08)
#define SWLRESS11              (*(volatile uint32 *)0xFFF81F0C)
#define MSR_LM11               (*(volatile uint32 *)0xFFF81F10)
#define SWLRESA12              (*(volatile uint32 *)0xFFF82008)
#define SWLRESS12              (*(volatile uint32 *)0xFFF8200C)
#define MSR_LM12               (*(volatile uint32 *)0xFFF82010)
#define FHVE3                  (*(volatile uint32 *)0xFFF82410)
#define RESC                   (*(volatile uint32 *)0xFFF82800)
#define CVMF                   (*(volatile uint8  *)0xFFF82C00)
#define CVMDE                  (*(volatile uint8  *)0xFFF82C04)
#define CVMDMASK               (*(volatile uint8  *)0xFFF82C0C)
#define CVMDIAG                (*(volatile uint8  *)0xFFF82C10)
#define CVMMON                 (*(volatile uint8  *)0xFFF82C14)
#define CVMFC                  (*(volatile uint8  *)0xFFF82C18)
#define CVMDEW                 (*(volatile uint8  *)0xFFF82C1C)
#define CLMATEST               (*(volatile uint32 *)0xFFF83000)
#define CLMATESTS              (*(volatile uint32 *)0xFFF83004)
#define CKSC4C                 (*(volatile uint32 *)0xFFF84000)
#define CKSC4S                 (*(volatile uint32 *)0xFFF84008)
#define SWSRESA1               (*(volatile uint32 *)0xFFF86000)
#define SWARESA1               (*(volatile uint32 *)0xFFF86100)
#define SWLRESA2               (*(volatile uint32 *)0xFFF86208)
#define SWLRESS2               (*(volatile uint32 *)0xFFF8620C)
#define MSR_LM2                (*(volatile uint32 *)0xFFF86210)
#define STAC_LM2               (*(volatile uint32 *)0xFFF86220)
#define ICUMRESF               (*(volatile uint32 *)0xFFF86300)
#define ICUMRESFC              (*(volatile uint32 *)0xFFF86308)
#define CLKD0DIV               (*(volatile uint32 *)0xFFF88800)
#define CLKD0STAT              (*(volatile uint32 *)0xFFF88804)
#define CLKD1DIV               (*(volatile uint32 *)0xFFF88808)
#define CLKD1STAT              (*(volatile uint32 *)0xFFF8880C)
#define CLKD2DIV               (*(volatile uint32 *)0xFFF88810)
#define CLKD2STAT              (*(volatile uint32 *)0xFFF88814)
#define CLKD3DIV               (*(volatile uint32 *)0xFFF88818)
#define CLKD3STAT              (*(volatile uint32 *)0xFFF8881C)
#define CKSC0C                 (*(volatile uint32 *)0xFFF89000)
#define CKSC0S                 (*(volatile uint32 *)0xFFF89008)
#define CKSC2C                 (*(volatile uint32 *)0xFFF89080)
#define CKSC2S                 (*(volatile uint32 *)0xFFF89088)
#define CKSC3C                 (*(volatile uint32 *)0xFFF890C0)
#define CKSC3S                 (*(volatile uint32 *)0xFFF890C8)
#define FHVE15                 (*(volatile uint32 *)0xFFF8A430)
#define APEC3ECCCTL            (*(volatile uint32 *)0xFFF98000)
#define APEC3ECCCTLL           (*(volatile uint16 *)0xFFF98000)
#define APEC3ERRINT            (*(volatile uint32 *)0xFFF98004)
#define APEC3ERRINTL           (*(volatile uint16 *)0xFFF98004)
#define APEC3ERRINTLL          (*(volatile uint8  *)0xFFF98004)
#define APEC3STCLR             (*(volatile uint32 *)0xFFF98008)
#define APEC3STCLRL            (*(volatile uint16 *)0xFFF98008)
#define APEC3STCLRLL           (*(volatile uint8  *)0xFFF98008)
#define APEC3OVFSTR            (*(volatile uint32 *)0xFFF9800C)
#define APEC3OVFSTRL           (*(volatile uint16 *)0xFFF9800C)
#define APEC3OVFSTRLL          (*(volatile uint8  *)0xFFF9800C)
#define APEC31STERSTR          (*(volatile uint32 *)0xFFF98010)
#define APEC31STERSTRL         (*(volatile uint16 *)0xFFF98010)
#define APEC31STERSTRLL        (*(volatile uint8  *)0xFFF98010)
#define APEC31STEADR0          (*(volatile uint32 *)0xFFF98050)
#define EIC0                   (*(volatile uint16 *)0xFFFEEA00)
#define EIC0L                  (*(volatile uint8  *)0xFFFEEA00)
#define EIC0H                  (*(volatile uint8  *)0xFFFEEA01)
#define EIC1                   (*(volatile uint16 *)0xFFFEEA02)
#define EIC1L                  (*(volatile uint8  *)0xFFFEEA02)
#define EIC1H                  (*(volatile uint8  *)0xFFFEEA03)
#define EIC2                   (*(volatile uint16 *)0xFFFEEA04)
#define EIC2L                  (*(volatile uint8  *)0xFFFEEA04)
#define EIC2H                  (*(volatile uint8  *)0xFFFEEA05)
#define EIC3                   (*(volatile uint16 *)0xFFFEEA06)
#define EIC3L                  (*(volatile uint8  *)0xFFFEEA06)
#define EIC3H                  (*(volatile uint8  *)0xFFFEEA07)
#define EIC4                   (*(volatile uint16 *)0xFFFEEA08)
#define EIC4L                  (*(volatile uint8  *)0xFFFEEA08)
#define EIC4H                  (*(volatile uint8  *)0xFFFEEA09)
#define EIC5                   (*(volatile uint16 *)0xFFFEEA0A)
#define EIC5L                  (*(volatile uint8  *)0xFFFEEA0A)
#define EIC5H                  (*(volatile uint8  *)0xFFFEEA0B)
#define EIC6                   (*(volatile uint16 *)0xFFFEEA0C)
#define EIC6L                  (*(volatile uint8  *)0xFFFEEA0C)
#define EIC6H                  (*(volatile uint8  *)0xFFFEEA0D)
#define EIC7                   (*(volatile uint16 *)0xFFFEEA0E)
#define EIC7L                  (*(volatile uint8  *)0xFFFEEA0E)
#define EIC7H                  (*(volatile uint8  *)0xFFFEEA0F)
#define EIC8                   (*(volatile uint16 *)0xFFFEEA10)
#define EIC8L                  (*(volatile uint8  *)0xFFFEEA10)
#define EIC8H                  (*(volatile uint8  *)0xFFFEEA11)
#define EIC9                   (*(volatile uint16 *)0xFFFEEA12)
#define EIC9L                  (*(volatile uint8  *)0xFFFEEA12)
#define EIC9H                  (*(volatile uint8  *)0xFFFEEA13)
#define EIC10                  (*(volatile uint16 *)0xFFFEEA14)
#define EIC10L                 (*(volatile uint8  *)0xFFFEEA14)
#define EIC10H                 (*(volatile uint8  *)0xFFFEEA15)
#define EIC11                  (*(volatile uint16 *)0xFFFEEA16)
#define EIC11L                 (*(volatile uint8  *)0xFFFEEA16)
#define EIC11H                 (*(volatile uint8  *)0xFFFEEA17)
#define EIC12                  (*(volatile uint16 *)0xFFFEEA18)
#define EIC12L                 (*(volatile uint8  *)0xFFFEEA18)
#define EIC12H                 (*(volatile uint8  *)0xFFFEEA19)
#define EIC13                  (*(volatile uint16 *)0xFFFEEA1A)
#define EIC13L                 (*(volatile uint8  *)0xFFFEEA1A)
#define EIC13H                 (*(volatile uint8  *)0xFFFEEA1B)
#define EIC14                  (*(volatile uint16 *)0xFFFEEA1C)
#define EIC14L                 (*(volatile uint8  *)0xFFFEEA1C)
#define EIC14H                 (*(volatile uint8  *)0xFFFEEA1D)
#define EIC15                  (*(volatile uint16 *)0xFFFEEA1E)
#define EIC15L                 (*(volatile uint8  *)0xFFFEEA1E)
#define EIC15H                 (*(volatile uint8  *)0xFFFEEA1F)
#define EIC16                  (*(volatile uint16 *)0xFFFEEA20)
#define EIC16L                 (*(volatile uint8  *)0xFFFEEA20)
#define EIC16H                 (*(volatile uint8  *)0xFFFEEA21)
#define EIC17                  (*(volatile uint16 *)0xFFFEEA22)
#define EIC17L                 (*(volatile uint8  *)0xFFFEEA22)
#define EIC17H                 (*(volatile uint8  *)0xFFFEEA23)
#define EIC18                  (*(volatile uint16 *)0xFFFEEA24)
#define EIC18L                 (*(volatile uint8  *)0xFFFEEA24)
#define EIC18H                 (*(volatile uint8  *)0xFFFEEA25)
#define EIC19                  (*(volatile uint16 *)0xFFFEEA26)
#define EIC19L                 (*(volatile uint8  *)0xFFFEEA26)
#define EIC19H                 (*(volatile uint8  *)0xFFFEEA27)
#define EIC20                  (*(volatile uint16 *)0xFFFEEA28)
#define EIC20L                 (*(volatile uint8  *)0xFFFEEA28)
#define EIC20H                 (*(volatile uint8  *)0xFFFEEA29)
#define EIC21                  (*(volatile uint16 *)0xFFFEEA2A)
#define EIC21L                 (*(volatile uint8  *)0xFFFEEA2A)
#define EIC21H                 (*(volatile uint8  *)0xFFFEEA2B)
#define EIC22                  (*(volatile uint16 *)0xFFFEEA2C)
#define EIC22L                 (*(volatile uint8  *)0xFFFEEA2C)
#define EIC22H                 (*(volatile uint8  *)0xFFFEEA2D)
#define EIC23                  (*(volatile uint16 *)0xFFFEEA2E)
#define EIC23L                 (*(volatile uint8  *)0xFFFEEA2E)
#define EIC23H                 (*(volatile uint8  *)0xFFFEEA2F)
#define EIC24                  (*(volatile uint16 *)0xFFFEEA30)
#define EIC24L                 (*(volatile uint8  *)0xFFFEEA30)
#define EIC24H                 (*(volatile uint8  *)0xFFFEEA31)
#define EIC25                  (*(volatile uint16 *)0xFFFEEA32)
#define EIC25L                 (*(volatile uint8  *)0xFFFEEA32)
#define EIC25H                 (*(volatile uint8  *)0xFFFEEA33)
#define EIC26                  (*(volatile uint16 *)0xFFFEEA34)
#define EIC26L                 (*(volatile uint8  *)0xFFFEEA34)
#define EIC26H                 (*(volatile uint8  *)0xFFFEEA35)
#define EIC27                  (*(volatile uint16 *)0xFFFEEA36)
#define EIC27L                 (*(volatile uint8  *)0xFFFEEA36)
#define EIC27H                 (*(volatile uint8  *)0xFFFEEA37)
#define EIC28                  (*(volatile uint16 *)0xFFFEEA38)
#define EIC28L                 (*(volatile uint8  *)0xFFFEEA38)
#define EIC28H                 (*(volatile uint8  *)0xFFFEEA39)
#define EIC29                  (*(volatile uint16 *)0xFFFEEA3A)
#define EIC29L                 (*(volatile uint8  *)0xFFFEEA3A)
#define EIC29H                 (*(volatile uint8  *)0xFFFEEA3B)
#define EIC30                  (*(volatile uint16 *)0xFFFEEA3C)
#define EIC30L                 (*(volatile uint8  *)0xFFFEEA3C)
#define EIC30H                 (*(volatile uint8  *)0xFFFEEA3D)
#define EIC31                  (*(volatile uint16 *)0xFFFEEA3E)
#define EIC31L                 (*(volatile uint8  *)0xFFFEEA3E)
#define EIC31H                 (*(volatile uint8  *)0xFFFEEA3F)
#define FNC                    (*(volatile uint16 *)0xFFFEEA78)
#define FNCH                   (*(volatile uint8  *)0xFFFEEA79)
#define FNRF                   (((volatile __bitf_T *)0xFFFEEA79)->bit04)
#define FNCT                   (((volatile __bitf_T *)0xFFFEEA79)->bit07)
#define FIC                    (*(volatile uint16 *)0xFFFEEA7A)
#define FICH                   (*(volatile uint8  *)0xFFFEEA7B)
#define FIRF                   (((volatile __bitf_T *)0xFFFEEA7B)->bit04)
#define FICT                   (((volatile __bitf_T *)0xFFFEEA7B)->bit07)
#define IMR0                   (*(volatile uint32 *)0xFFFEEAF0)
#define IMR0L                  (*(volatile uint16 *)0xFFFEEAF0)
#define IMR0LL                 (*(volatile uint8  *)0xFFFEEAF0)
#define IMR0LH                 (*(volatile uint8  *)0xFFFEEAF1)
#define IMR0H                  (*(volatile uint16 *)0xFFFEEAF2)
#define IMR0HL                 (*(volatile uint8  *)0xFFFEEAF2)
#define IMR0HH                 (*(volatile uint8  *)0xFFFEEAF3)
#define IMR0EIMK0              (((volatile __bitf_T *)0xFFFEEAF0)->bit00)
#define IMR0EIMK1              (((volatile __bitf_T *)0xFFFEEAF0)->bit01)
#define IMR0EIMK2              (((volatile __bitf_T *)0xFFFEEAF0)->bit02)
#define IMR0EIMK3              (((volatile __bitf_T *)0xFFFEEAF0)->bit03)
#define IMR0EIMK4              (((volatile __bitf_T *)0xFFFEEAF0)->bit04)
#define IMR0EIMK5              (((volatile __bitf_T *)0xFFFEEAF0)->bit05)
#define IMR0EIMK6              (((volatile __bitf_T *)0xFFFEEAF0)->bit06)
#define IMR0EIMK7              (((volatile __bitf_T *)0xFFFEEAF0)->bit07)
#define IMR0EIMK8              (((volatile __bitf_T *)0xFFFEEAF1)->bit00)
#define IMR0EIMK9              (((volatile __bitf_T *)0xFFFEEAF1)->bit01)
#define IMR0EIMK10             (((volatile __bitf_T *)0xFFFEEAF1)->bit02)
#define IMR0EIMK11             (((volatile __bitf_T *)0xFFFEEAF1)->bit03)
#define IMR0EIMK12             (((volatile __bitf_T *)0xFFFEEAF1)->bit04)
#define IMR0EIMK13             (((volatile __bitf_T *)0xFFFEEAF1)->bit05)
#define IMR0EIMK14             (((volatile __bitf_T *)0xFFFEEAF1)->bit06)
#define IMR0EIMK15             (((volatile __bitf_T *)0xFFFEEAF1)->bit07)
#define IMR0EIMK16             (((volatile __bitf_T *)0xFFFEEAF2)->bit00)
#define IMR0EIMK17             (((volatile __bitf_T *)0xFFFEEAF2)->bit01)
#define IMR0EIMK18             (((volatile __bitf_T *)0xFFFEEAF2)->bit02)
#define IMR0EIMK19             (((volatile __bitf_T *)0xFFFEEAF2)->bit03)
#define IMR0EIMK20             (((volatile __bitf_T *)0xFFFEEAF2)->bit04)
#define IMR0EIMK21             (((volatile __bitf_T *)0xFFFEEAF2)->bit05)
#define IMR0EIMK22             (((volatile __bitf_T *)0xFFFEEAF2)->bit06)
#define IMR0EIMK23             (((volatile __bitf_T *)0xFFFEEAF2)->bit07)
#define IMR0EIMK24             (((volatile __bitf_T *)0xFFFEEAF3)->bit00)
#define IMR0EIMK25             (((volatile __bitf_T *)0xFFFEEAF3)->bit01)
#define IMR0EIMK26             (((volatile __bitf_T *)0xFFFEEAF3)->bit02)
#define IMR0EIMK27             (((volatile __bitf_T *)0xFFFEEAF3)->bit03)
#define IMR0EIMK28             (((volatile __bitf_T *)0xFFFEEAF3)->bit04)
#define IMR0EIMK29             (((volatile __bitf_T *)0xFFFEEAF3)->bit05)
#define IMR0EIMK30             (((volatile __bitf_T *)0xFFFEEAF3)->bit06)
#define IMR0EIMK31             (((volatile __bitf_T *)0xFFFEEAF3)->bit07)
#define EIBD0                  (*(volatile uint32 *)0xFFFEEB00)
#define EIBD1                  (*(volatile uint32 *)0xFFFEEB04)
#define EIBD2                  (*(volatile uint32 *)0xFFFEEB08)
#define EIBD3                  (*(volatile uint32 *)0xFFFEEB0C)
#define EIBD4                  (*(volatile uint32 *)0xFFFEEB10)
#define EIBD5                  (*(volatile uint32 *)0xFFFEEB14)
#define EIBD6                  (*(volatile uint32 *)0xFFFEEB18)
#define EIBD7                  (*(volatile uint32 *)0xFFFEEB1C)
#define EIBD8                  (*(volatile uint32 *)0xFFFEEB20)
#define EIBD9                  (*(volatile uint32 *)0xFFFEEB24)
#define EIBD10                 (*(volatile uint32 *)0xFFFEEB28)
#define EIBD11                 (*(volatile uint32 *)0xFFFEEB2C)
#define EIBD12                 (*(volatile uint32 *)0xFFFEEB30)
#define EIBD13                 (*(volatile uint32 *)0xFFFEEB34)
#define EIBD14                 (*(volatile uint32 *)0xFFFEEB38)
#define EIBD15                 (*(volatile uint32 *)0xFFFEEB3C)
#define EIBD16                 (*(volatile uint32 *)0xFFFEEB40)
#define EIBD17                 (*(volatile uint32 *)0xFFFEEB44)
#define EIBD18                 (*(volatile uint32 *)0xFFFEEB48)
#define EIBD19                 (*(volatile uint32 *)0xFFFEEB4C)
#define EIBD20                 (*(volatile uint32 *)0xFFFEEB50)
#define EIBD21                 (*(volatile uint32 *)0xFFFEEB54)
#define EIBD22                 (*(volatile uint32 *)0xFFFEEB58)
#define EIBD23                 (*(volatile uint32 *)0xFFFEEB5C)
#define EIBD24                 (*(volatile uint32 *)0xFFFEEB60)
#define EIBD25                 (*(volatile uint32 *)0xFFFEEB64)
#define EIBD26                 (*(volatile uint32 *)0xFFFEEB68)
#define EIBD27                 (*(volatile uint32 *)0xFFFEEB6C)
#define EIBD28                 (*(volatile uint32 *)0xFFFEEB70)
#define EIBD29                 (*(volatile uint32 *)0xFFFEEB74)
#define EIBD30                 (*(volatile uint32 *)0xFFFEEB78)
#define EIBD31                 (*(volatile uint32 *)0xFFFEEB7C)
#define CMPTST0                (*(volatile uint32 *)0xFFFEED00)
#define CMPTST0L               (*(volatile uint16 *)0xFFFEED00)
#define CMPTST0LL              (*(volatile uint8  *)0xFFFEED00)
#define CMPTST0LH              (*(volatile uint8  *)0xFFFEED01)
#define CMPTST0H               (*(volatile uint16 *)0xFFFEED02)
#define CMPTST0HL              (*(volatile uint8  *)0xFFFEED02)
#define CMPTST0HH              (*(volatile uint8  *)0xFFFEED03)
#define CMPTST1                (*(volatile uint32 *)0xFFFEED04)
#define CMPTST1L               (*(volatile uint16 *)0xFFFEED04)
#define CMPTST1LL              (*(volatile uint8  *)0xFFFEED04)
#define CMPTST1LH              (*(volatile uint8  *)0xFFFEED05)
#define CMPTST1H               (*(volatile uint16 *)0xFFFEED06)
#define CMPTST1HL              (*(volatile uint8  *)0xFFFEED06)
#define CMPTST1HH              (*(volatile uint8  *)0xFFFEED07)
#define TM_VER                 (*(volatile uint32 *)0xFFFF7800)
#define TM_CC                  (*(volatile uint32 *)0xFFFF7808)
#define TMA_ME                 (*(volatile uint32 *)0xFFFF7810)
#define TMA_MS                 (*(volatile uint32 *)0xFFFF7814)
#define TMB_ME                 (*(volatile uint32 *)0xFFFF7818)
#define TMB_MS                 (*(volatile uint32 *)0xFFFF781C)
#define TMA_MA0                (*(volatile uint32 *)0xFFFF7840)
#define TMA_MA1                (*(volatile uint32 *)0xFFFF7844)
#define TMA_MA2                (*(volatile uint32 *)0xFFFF7848)
#define TMA_MA3                (*(volatile uint32 *)0xFFFF784C)
#define TMA_MA4                (*(volatile uint32 *)0xFFFF7850)
#define TMA_MA5                (*(volatile uint32 *)0xFFFF7854)
#define TMA_MA6                (*(volatile uint32 *)0xFFFF7858)
#define TMA_MA7                (*(volatile uint32 *)0xFFFF785C)
#define TMA_MA8                (*(volatile uint32 *)0xFFFF7860)
#define TMA_MA9                (*(volatile uint32 *)0xFFFF7864)
#define TMA_MA10               (*(volatile uint32 *)0xFFFF7868)
#define TMA_MA11               (*(volatile uint32 *)0xFFFF786C)
#define TMA_MA12               (*(volatile uint32 *)0xFFFF7870)
#define TMA_MA13               (*(volatile uint32 *)0xFFFF7874)
#define TMA_MA14               (*(volatile uint32 *)0xFFFF7878)
#define TMA_MA15               (*(volatile uint32 *)0xFFFF787C)
#define TMA_MA16               (*(volatile uint32 *)0xFFFF7880)
#define TMA_MA17               (*(volatile uint32 *)0xFFFF7884)
#define TMA_MA18               (*(volatile uint32 *)0xFFFF7888)
#define TMA_MA19               (*(volatile uint32 *)0xFFFF788C)
#define TMA_MA20               (*(volatile uint32 *)0xFFFF7890)
#define TMA_MA21               (*(volatile uint32 *)0xFFFF7894)
#define TMA_MA22               (*(volatile uint32 *)0xFFFF7898)
#define TMA_MA23               (*(volatile uint32 *)0xFFFF789C)
#define TMA_MA24               (*(volatile uint32 *)0xFFFF78A0)
#define TMA_MA25               (*(volatile uint32 *)0xFFFF78A4)
#define TMA_MA26               (*(volatile uint32 *)0xFFFF78A8)
#define TMA_MA27               (*(volatile uint32 *)0xFFFF78AC)
#define TMA_MA28               (*(volatile uint32 *)0xFFFF78B0)
#define TMA_MA29               (*(volatile uint32 *)0xFFFF78B4)
#define TMA_MA30               (*(volatile uint32 *)0xFFFF78B8)
#define TMA_MA31               (*(volatile uint32 *)0xFFFF78BC)
#define TMB_MA0                (*(volatile uint32 *)0xFFFF78C0)
#define TMB_MA1                (*(volatile uint32 *)0xFFFF78C4)
#define TMB_MA2                (*(volatile uint32 *)0xFFFF78C8)
#define TMB_MA3                (*(volatile uint32 *)0xFFFF78CC)
#define TMB_MA4                (*(volatile uint32 *)0xFFFF78D0)
#define TMB_MA5                (*(volatile uint32 *)0xFFFF78D4)
#define TMB_MA6                (*(volatile uint32 *)0xFFFF78D8)
#define TMB_MA7                (*(volatile uint32 *)0xFFFF78DC)
#define TMB_MA8                (*(volatile uint32 *)0xFFFF78E0)
#define TMB_MA9                (*(volatile uint32 *)0xFFFF78E4)
#define TMB_MA10               (*(volatile uint32 *)0xFFFF78E8)
#define TMB_MA11               (*(volatile uint32 *)0xFFFF78EC)
#define TMB_MA12               (*(volatile uint32 *)0xFFFF78F0)
#define TMB_MA13               (*(volatile uint32 *)0xFFFF78F4)
#define TMB_MA14               (*(volatile uint32 *)0xFFFF78F8)
#define TMB_MA15               (*(volatile uint32 *)0xFFFF78FC)
#define TMB_MA16               (*(volatile uint32 *)0xFFFF7900)
#define TMB_MA17               (*(volatile uint32 *)0xFFFF7904)
#define TMB_MA18               (*(volatile uint32 *)0xFFFF7908)
#define TMB_MA19               (*(volatile uint32 *)0xFFFF790C)
#define TMB_MA20               (*(volatile uint32 *)0xFFFF7910)
#define TMB_MA21               (*(volatile uint32 *)0xFFFF7914)
#define TMB_MA22               (*(volatile uint32 *)0xFFFF7918)
#define TMB_MA23               (*(volatile uint32 *)0xFFFF791C)
#define TMB_MA24               (*(volatile uint32 *)0xFFFF7920)
#define TMB_MA25               (*(volatile uint32 *)0xFFFF7924)
#define TMB_MA26               (*(volatile uint32 *)0xFFFF7928)
#define TMB_MA27               (*(volatile uint32 *)0xFFFF792C)
#define TMB_MA28               (*(volatile uint32 *)0xFFFF7930)
#define TMB_MA29               (*(volatile uint32 *)0xFFFF7934)
#define TMB_MA30               (*(volatile uint32 *)0xFFFF7938)
#define TMB_MA31               (*(volatile uint32 *)0xFFFF793C)
#define GRAMC_WTBCONFIG0       (*(volatile uint32 *)0xFFFF7A04)
#define GRAMC_WTBCONFIG1       (*(volatile uint32 *)0xFFFF7A08)
#define GRAMC_WTBCONFIG2       (*(volatile uint32 *)0xFFFF7A0C)
#define DMACTL                 (*(volatile uint32 *)0xFFFF8000)
#define DTSCTL1                (*(volatile uint32 *)0xFFFF8010)
#define DTSCTL2                (*(volatile uint32 *)0xFFFF8014)
#define DTSSTS                 (*(volatile uint32 *)0xFFFF8018)
#define DMACER                 (*(volatile uint32 *)0xFFFF8020)
#define DTSER1                 (*(volatile uint32 *)0xFFFF8024)
#define DTSER2                 (*(volatile uint32 *)0xFFFF8028)
#define DTSERC                 (*(volatile uint32 *)0xFFFF802C)
#define DM0CMV                 (*(volatile uint32 *)0xFFFF8030)
#define DM1CMV                 (*(volatile uint32 *)0xFFFF8034)
#define DTSCMV                 (*(volatile uint32 *)0xFFFF8038)
#define CMVC                   (*(volatile uint32 *)0xFFFF803C)
#define TFRSTS                 (*(volatile uint32 *)0xFFFF804C)
#define DTSPR0                 (*(volatile uint32 *)0xFFFF8060)
#define DTSPR1                 (*(volatile uint32 *)0xFFFF8064)
#define DTSPR2                 (*(volatile uint32 *)0xFFFF8068)
#define DTSPR3                 (*(volatile uint32 *)0xFFFF806C)
#define DTSPR4                 (*(volatile uint32 *)0xFFFF8070)
#define DTSPR5                 (*(volatile uint32 *)0xFFFF8074)
#define DTSPR6                 (*(volatile uint32 *)0xFFFF8078)
#define DTSPR7                 (*(volatile uint32 *)0xFFFF807C)
#define DTRECCTL               (*(volatile uint32 *)0xFFFF8080)
#define DTRERINT               (*(volatile uint32 *)0xFFFF8084)
#define DTRTSCTL               (*(volatile uint32 *)0xFFFF8094)
#define DTRTWDAT               (*(volatile uint32 *)0xFFFF8098)
#define DTRTRDAT               (*(volatile uint32 *)0xFFFF809C)
#define ADECCTCL               (*(volatile uint32 *)0xFFFF80A0)
#define ADECCTDT               (*(volatile uint32 *)0xFFFF80A4)
#define DM00CM                 (*(volatile uint32 *)0xFFFF8100)
#define DM01CM                 (*(volatile uint32 *)0xFFFF8104)
#define DM02CM                 (*(volatile uint32 *)0xFFFF8108)
#define DM03CM                 (*(volatile uint32 *)0xFFFF810C)
#define DM04CM                 (*(volatile uint32 *)0xFFFF8110)
#define DM05CM                 (*(volatile uint32 *)0xFFFF8114)
#define DM06CM                 (*(volatile uint32 *)0xFFFF8118)
#define DM07CM                 (*(volatile uint32 *)0xFFFF811C)
#define DM10CM                 (*(volatile uint32 *)0xFFFF8120)
#define DM11CM                 (*(volatile uint32 *)0xFFFF8124)
#define DM12CM                 (*(volatile uint32 *)0xFFFF8128)
#define DM13CM                 (*(volatile uint32 *)0xFFFF812C)
#define DM14CM                 (*(volatile uint32 *)0xFFFF8130)
#define DM15CM                 (*(volatile uint32 *)0xFFFF8134)
#define DM16CM                 (*(volatile uint32 *)0xFFFF8138)
#define DM17CM                 (*(volatile uint32 *)0xFFFF813C)
#define DTS000CM               (*(volatile uint32 *)0xFFFF8200)
#define DTS001CM               (*(volatile uint32 *)0xFFFF8204)
#define DTS002CM               (*(volatile uint32 *)0xFFFF8208)
#define DTS003CM               (*(volatile uint32 *)0xFFFF820C)
#define DTS004CM               (*(volatile uint32 *)0xFFFF8210)
#define DTS005CM               (*(volatile uint32 *)0xFFFF8214)
#define DTS006CM               (*(volatile uint32 *)0xFFFF8218)
#define DTS007CM               (*(volatile uint32 *)0xFFFF821C)
#define DTS008CM               (*(volatile uint32 *)0xFFFF8220)
#define DTS009CM               (*(volatile uint32 *)0xFFFF8224)
#define DTS010CM               (*(volatile uint32 *)0xFFFF8228)
#define DTS011CM               (*(volatile uint32 *)0xFFFF822C)
#define DTS012CM               (*(volatile uint32 *)0xFFFF8230)
#define DTS013CM               (*(volatile uint32 *)0xFFFF8234)
#define DTS014CM               (*(volatile uint32 *)0xFFFF8238)
#define DTS015CM               (*(volatile uint32 *)0xFFFF823C)
#define DTS016CM               (*(volatile uint32 *)0xFFFF8240)
#define DTS017CM               (*(volatile uint32 *)0xFFFF8244)
#define DTS018CM               (*(volatile uint32 *)0xFFFF8248)
#define DTS019CM               (*(volatile uint32 *)0xFFFF824C)
#define DTS020CM               (*(volatile uint32 *)0xFFFF8250)
#define DTS021CM               (*(volatile uint32 *)0xFFFF8254)
#define DTS022CM               (*(volatile uint32 *)0xFFFF8258)
#define DTS023CM               (*(volatile uint32 *)0xFFFF825C)
#define DTS024CM               (*(volatile uint32 *)0xFFFF8260)
#define DTS025CM               (*(volatile uint32 *)0xFFFF8264)
#define DTS026CM               (*(volatile uint32 *)0xFFFF8268)
#define DTS027CM               (*(volatile uint32 *)0xFFFF826C)
#define DTS028CM               (*(volatile uint32 *)0xFFFF8270)
#define DTS029CM               (*(volatile uint32 *)0xFFFF8274)
#define DTS030CM               (*(volatile uint32 *)0xFFFF8278)
#define DTS031CM               (*(volatile uint32 *)0xFFFF827C)
#define DTS032CM               (*(volatile uint32 *)0xFFFF8280)
#define DTS033CM               (*(volatile uint32 *)0xFFFF8284)
#define DTS034CM               (*(volatile uint32 *)0xFFFF8288)
#define DTS035CM               (*(volatile uint32 *)0xFFFF828C)
#define DTS036CM               (*(volatile uint32 *)0xFFFF8290)
#define DTS037CM               (*(volatile uint32 *)0xFFFF8294)
#define DTS038CM               (*(volatile uint32 *)0xFFFF8298)
#define DTS039CM               (*(volatile uint32 *)0xFFFF829C)
#define DTS040CM               (*(volatile uint32 *)0xFFFF82A0)
#define DTS041CM               (*(volatile uint32 *)0xFFFF82A4)
#define DTS042CM               (*(volatile uint32 *)0xFFFF82A8)
#define DTS043CM               (*(volatile uint32 *)0xFFFF82AC)
#define DTS044CM               (*(volatile uint32 *)0xFFFF82B0)
#define DTS045CM               (*(volatile uint32 *)0xFFFF82B4)
#define DTS046CM               (*(volatile uint32 *)0xFFFF82B8)
#define DTS047CM               (*(volatile uint32 *)0xFFFF82BC)
#define DTS048CM               (*(volatile uint32 *)0xFFFF82C0)
#define DTS049CM               (*(volatile uint32 *)0xFFFF82C4)
#define DTS050CM               (*(volatile uint32 *)0xFFFF82C8)
#define DTS051CM               (*(volatile uint32 *)0xFFFF82CC)
#define DTS052CM               (*(volatile uint32 *)0xFFFF82D0)
#define DTS053CM               (*(volatile uint32 *)0xFFFF82D4)
#define DTS054CM               (*(volatile uint32 *)0xFFFF82D8)
#define DTS055CM               (*(volatile uint32 *)0xFFFF82DC)
#define DTS056CM               (*(volatile uint32 *)0xFFFF82E0)
#define DTS057CM               (*(volatile uint32 *)0xFFFF82E4)
#define DTS058CM               (*(volatile uint32 *)0xFFFF82E8)
#define DTS059CM               (*(volatile uint32 *)0xFFFF82EC)
#define DTS060CM               (*(volatile uint32 *)0xFFFF82F0)
#define DTS061CM               (*(volatile uint32 *)0xFFFF82F4)
#define DTS062CM               (*(volatile uint32 *)0xFFFF82F8)
#define DTS063CM               (*(volatile uint32 *)0xFFFF82FC)
#define DTS064CM               (*(volatile uint32 *)0xFFFF8300)
#define DTS065CM               (*(volatile uint32 *)0xFFFF8304)
#define DTS066CM               (*(volatile uint32 *)0xFFFF8308)
#define DTS067CM               (*(volatile uint32 *)0xFFFF830C)
#define DTS068CM               (*(volatile uint32 *)0xFFFF8310)
#define DTS069CM               (*(volatile uint32 *)0xFFFF8314)
#define DTS070CM               (*(volatile uint32 *)0xFFFF8318)
#define DTS071CM               (*(volatile uint32 *)0xFFFF831C)
#define DTS072CM               (*(volatile uint32 *)0xFFFF8320)
#define DTS073CM               (*(volatile uint32 *)0xFFFF8324)
#define DTS074CM               (*(volatile uint32 *)0xFFFF8328)
#define DTS075CM               (*(volatile uint32 *)0xFFFF832C)
#define DTS076CM               (*(volatile uint32 *)0xFFFF8330)
#define DTS077CM               (*(volatile uint32 *)0xFFFF8334)
#define DTS078CM               (*(volatile uint32 *)0xFFFF8338)
#define DTS079CM               (*(volatile uint32 *)0xFFFF833C)
#define DTS080CM               (*(volatile uint32 *)0xFFFF8340)
#define DTS081CM               (*(volatile uint32 *)0xFFFF8344)
#define DTS082CM               (*(volatile uint32 *)0xFFFF8348)
#define DTS083CM               (*(volatile uint32 *)0xFFFF834C)
#define DTS084CM               (*(volatile uint32 *)0xFFFF8350)
#define DTS085CM               (*(volatile uint32 *)0xFFFF8354)
#define DTS086CM               (*(volatile uint32 *)0xFFFF8358)
#define DTS087CM               (*(volatile uint32 *)0xFFFF835C)
#define DTS088CM               (*(volatile uint32 *)0xFFFF8360)
#define DTS089CM               (*(volatile uint32 *)0xFFFF8364)
#define DTS090CM               (*(volatile uint32 *)0xFFFF8368)
#define DTS091CM               (*(volatile uint32 *)0xFFFF836C)
#define DTS092CM               (*(volatile uint32 *)0xFFFF8370)
#define DTS093CM               (*(volatile uint32 *)0xFFFF8374)
#define DTS094CM               (*(volatile uint32 *)0xFFFF8378)
#define DTS095CM               (*(volatile uint32 *)0xFFFF837C)
#define DTS096CM               (*(volatile uint32 *)0xFFFF8380)
#define DTS097CM               (*(volatile uint32 *)0xFFFF8384)
#define DTS098CM               (*(volatile uint32 *)0xFFFF8388)
#define DTS099CM               (*(volatile uint32 *)0xFFFF838C)
#define DTS100CM               (*(volatile uint32 *)0xFFFF8390)
#define DTS101CM               (*(volatile uint32 *)0xFFFF8394)
#define DTS102CM               (*(volatile uint32 *)0xFFFF8398)
#define DTS103CM               (*(volatile uint32 *)0xFFFF839C)
#define DTS104CM               (*(volatile uint32 *)0xFFFF83A0)
#define DTS105CM               (*(volatile uint32 *)0xFFFF83A4)
#define DTS106CM               (*(volatile uint32 *)0xFFFF83A8)
#define DTS107CM               (*(volatile uint32 *)0xFFFF83AC)
#define DTS108CM               (*(volatile uint32 *)0xFFFF83B0)
#define DTS109CM               (*(volatile uint32 *)0xFFFF83B4)
#define DTS110CM               (*(volatile uint32 *)0xFFFF83B8)
#define DTS111CM               (*(volatile uint32 *)0xFFFF83BC)
#define DTS112CM               (*(volatile uint32 *)0xFFFF83C0)
#define DTS113CM               (*(volatile uint32 *)0xFFFF83C4)
#define DTS114CM               (*(volatile uint32 *)0xFFFF83C8)
#define DTS115CM               (*(volatile uint32 *)0xFFFF83CC)
#define DTS116CM               (*(volatile uint32 *)0xFFFF83D0)
#define DTS117CM               (*(volatile uint32 *)0xFFFF83D4)
#define DTS118CM               (*(volatile uint32 *)0xFFFF83D8)
#define DTS119CM               (*(volatile uint32 *)0xFFFF83DC)
#define DTS120CM               (*(volatile uint32 *)0xFFFF83E0)
#define DTS121CM               (*(volatile uint32 *)0xFFFF83E4)
#define DTS122CM               (*(volatile uint32 *)0xFFFF83E8)
#define DTS123CM               (*(volatile uint32 *)0xFFFF83EC)
#define DTS124CM               (*(volatile uint32 *)0xFFFF83F0)
#define DTS125CM               (*(volatile uint32 *)0xFFFF83F4)
#define DTS126CM               (*(volatile uint32 *)0xFFFF83F8)
#define DTS127CM               (*(volatile uint32 *)0xFFFF83FC)
#define DSA0                   (*(volatile uint32 *)0xFFFF8400)
#define DDA0                   (*(volatile uint32 *)0xFFFF8404)
#define DTC0                   (*(volatile uint32 *)0xFFFF8408)
#define DTCT0                  (*(volatile uint32 *)0xFFFF840C)
#define DRSA0                  (*(volatile uint32 *)0xFFFF8410)
#define DRDA0                  (*(volatile uint32 *)0xFFFF8414)
#define DRTC0                  (*(volatile uint32 *)0xFFFF8418)
#define DTCC0                  (*(volatile uint32 *)0xFFFF841C)
#define DCEN0                  (*(volatile uint32 *)0xFFFF8420)
#define DCST0                  (*(volatile uint32 *)0xFFFF8424)
#define DCSTS0                 (*(volatile uint32 *)0xFFFF8428)
#define DCSTC0                 (*(volatile uint32 *)0xFFFF842C)
#define DTFR0                  (*(volatile uint32 *)0xFFFF8430)
#define DTFRRQ0                (*(volatile uint32 *)0xFFFF8434)
#define DTFRRQC0               (*(volatile uint32 *)0xFFFF8438)
#define DSA1                   (*(volatile uint32 *)0xFFFF8440)
#define DDA1                   (*(volatile uint32 *)0xFFFF8444)
#define DTC1                   (*(volatile uint32 *)0xFFFF8448)
#define DTCT1                  (*(volatile uint32 *)0xFFFF844C)
#define DRSA1                  (*(volatile uint32 *)0xFFFF8450)
#define DRDA1                  (*(volatile uint32 *)0xFFFF8454)
#define DRTC1                  (*(volatile uint32 *)0xFFFF8458)
#define DTCC1                  (*(volatile uint32 *)0xFFFF845C)
#define DCEN1                  (*(volatile uint32 *)0xFFFF8460)
#define DCST1                  (*(volatile uint32 *)0xFFFF8464)
#define DCSTS1                 (*(volatile uint32 *)0xFFFF8468)
#define DCSTC1                 (*(volatile uint32 *)0xFFFF846C)
#define DTFR1                  (*(volatile uint32 *)0xFFFF8470)
#define DTFRRQ1                (*(volatile uint32 *)0xFFFF8474)
#define DTFRRQC1               (*(volatile uint32 *)0xFFFF8478)
#define DSA2                   (*(volatile uint32 *)0xFFFF8480)
#define DDA2                   (*(volatile uint32 *)0xFFFF8484)
#define DTC2                   (*(volatile uint32 *)0xFFFF8488)
#define DTCT2                  (*(volatile uint32 *)0xFFFF848C)
#define DRSA2                  (*(volatile uint32 *)0xFFFF8490)
#define DRDA2                  (*(volatile uint32 *)0xFFFF8494)
#define DRTC2                  (*(volatile uint32 *)0xFFFF8498)
#define DTCC2                  (*(volatile uint32 *)0xFFFF849C)
#define DCEN2                  (*(volatile uint32 *)0xFFFF84A0)
#define DCST2                  (*(volatile uint32 *)0xFFFF84A4)
#define DCSTS2                 (*(volatile uint32 *)0xFFFF84A8)
#define DCSTC2                 (*(volatile uint32 *)0xFFFF84AC)
#define DTFR2                  (*(volatile uint32 *)0xFFFF84B0)
#define DTFRRQ2                (*(volatile uint32 *)0xFFFF84B4)
#define DTFRRQC2               (*(volatile uint32 *)0xFFFF84B8)
#define DSA3                   (*(volatile uint32 *)0xFFFF84C0)
#define DDA3                   (*(volatile uint32 *)0xFFFF84C4)
#define DTC3                   (*(volatile uint32 *)0xFFFF84C8)
#define DTCT3                  (*(volatile uint32 *)0xFFFF84CC)
#define DRSA3                  (*(volatile uint32 *)0xFFFF84D0)
#define DRDA3                  (*(volatile uint32 *)0xFFFF84D4)
#define DRTC3                  (*(volatile uint32 *)0xFFFF84D8)
#define DTCC3                  (*(volatile uint32 *)0xFFFF84DC)
#define DCEN3                  (*(volatile uint32 *)0xFFFF84E0)
#define DCST3                  (*(volatile uint32 *)0xFFFF84E4)
#define DCSTS3                 (*(volatile uint32 *)0xFFFF84E8)
#define DCSTC3                 (*(volatile uint32 *)0xFFFF84EC)
#define DTFR3                  (*(volatile uint32 *)0xFFFF84F0)
#define DTFRRQ3                (*(volatile uint32 *)0xFFFF84F4)
#define DTFRRQC3               (*(volatile uint32 *)0xFFFF84F8)
#define DSA4                   (*(volatile uint32 *)0xFFFF8500)
#define DDA4                   (*(volatile uint32 *)0xFFFF8504)
#define DTC4                   (*(volatile uint32 *)0xFFFF8508)
#define DTCT4                  (*(volatile uint32 *)0xFFFF850C)
#define DRSA4                  (*(volatile uint32 *)0xFFFF8510)
#define DRDA4                  (*(volatile uint32 *)0xFFFF8514)
#define DRTC4                  (*(volatile uint32 *)0xFFFF8518)
#define DTCC4                  (*(volatile uint32 *)0xFFFF851C)
#define DCEN4                  (*(volatile uint32 *)0xFFFF8520)
#define DCST4                  (*(volatile uint32 *)0xFFFF8524)
#define DCSTS4                 (*(volatile uint32 *)0xFFFF8528)
#define DCSTC4                 (*(volatile uint32 *)0xFFFF852C)
#define DTFR4                  (*(volatile uint32 *)0xFFFF8530)
#define DTFRRQ4                (*(volatile uint32 *)0xFFFF8534)
#define DTFRRQC4               (*(volatile uint32 *)0xFFFF8538)
#define DSA5                   (*(volatile uint32 *)0xFFFF8540)
#define DDA5                   (*(volatile uint32 *)0xFFFF8544)
#define DTC5                   (*(volatile uint32 *)0xFFFF8548)
#define DTCT5                  (*(volatile uint32 *)0xFFFF854C)
#define DRSA5                  (*(volatile uint32 *)0xFFFF8550)
#define DRDA5                  (*(volatile uint32 *)0xFFFF8554)
#define DRTC5                  (*(volatile uint32 *)0xFFFF8558)
#define DTCC5                  (*(volatile uint32 *)0xFFFF855C)
#define DCEN5                  (*(volatile uint32 *)0xFFFF8560)
#define DCST5                  (*(volatile uint32 *)0xFFFF8564)
#define DCSTS5                 (*(volatile uint32 *)0xFFFF8568)
#define DCSTC5                 (*(volatile uint32 *)0xFFFF856C)
#define DTFR5                  (*(volatile uint32 *)0xFFFF8570)
#define DTFRRQ5                (*(volatile uint32 *)0xFFFF8574)
#define DTFRRQC5               (*(volatile uint32 *)0xFFFF8578)
#define DSA6                   (*(volatile uint32 *)0xFFFF8580)
#define DDA6                   (*(volatile uint32 *)0xFFFF8584)
#define DTC6                   (*(volatile uint32 *)0xFFFF8588)
#define DTCT6                  (*(volatile uint32 *)0xFFFF858C)
#define DRSA6                  (*(volatile uint32 *)0xFFFF8590)
#define DRDA6                  (*(volatile uint32 *)0xFFFF8594)
#define DRTC6                  (*(volatile uint32 *)0xFFFF8598)
#define DTCC6                  (*(volatile uint32 *)0xFFFF859C)
#define DCEN6                  (*(volatile uint32 *)0xFFFF85A0)
#define DCST6                  (*(volatile uint32 *)0xFFFF85A4)
#define DCSTS6                 (*(volatile uint32 *)0xFFFF85A8)
#define DCSTC6                 (*(volatile uint32 *)0xFFFF85AC)
#define DTFR6                  (*(volatile uint32 *)0xFFFF85B0)
#define DTFRRQ6                (*(volatile uint32 *)0xFFFF85B4)
#define DTFRRQC6               (*(volatile uint32 *)0xFFFF85B8)
#define DSA7                   (*(volatile uint32 *)0xFFFF85C0)
#define DDA7                   (*(volatile uint32 *)0xFFFF85C4)
#define DTC7                   (*(volatile uint32 *)0xFFFF85C8)
#define DTCT7                  (*(volatile uint32 *)0xFFFF85CC)
#define DRSA7                  (*(volatile uint32 *)0xFFFF85D0)
#define DRDA7                  (*(volatile uint32 *)0xFFFF85D4)
#define DRTC7                  (*(volatile uint32 *)0xFFFF85D8)
#define DTCC7                  (*(volatile uint32 *)0xFFFF85DC)
#define DCEN7                  (*(volatile uint32 *)0xFFFF85E0)
#define DCST7                  (*(volatile uint32 *)0xFFFF85E4)
#define DCSTS7                 (*(volatile uint32 *)0xFFFF85E8)
#define DCSTC7                 (*(volatile uint32 *)0xFFFF85EC)
#define DTFR7                  (*(volatile uint32 *)0xFFFF85F0)
#define DTFRRQ7                (*(volatile uint32 *)0xFFFF85F4)
#define DTFRRQC7               (*(volatile uint32 *)0xFFFF85F8)
#define DSA8                   (*(volatile uint32 *)0xFFFF8600)
#define DDA8                   (*(volatile uint32 *)0xFFFF8604)
#define DTC8                   (*(volatile uint32 *)0xFFFF8608)
#define DTCT8                  (*(volatile uint32 *)0xFFFF860C)
#define DRSA8                  (*(volatile uint32 *)0xFFFF8610)
#define DRDA8                  (*(volatile uint32 *)0xFFFF8614)
#define DRTC8                  (*(volatile uint32 *)0xFFFF8618)
#define DTCC8                  (*(volatile uint32 *)0xFFFF861C)
#define DCEN8                  (*(volatile uint32 *)0xFFFF8620)
#define DCST8                  (*(volatile uint32 *)0xFFFF8624)
#define DCSTS8                 (*(volatile uint32 *)0xFFFF8628)
#define DCSTC8                 (*(volatile uint32 *)0xFFFF862C)
#define DTFR8                  (*(volatile uint32 *)0xFFFF8630)
#define DTFRRQ8                (*(volatile uint32 *)0xFFFF8634)
#define DTFRRQC8               (*(volatile uint32 *)0xFFFF8638)
#define DSA9                   (*(volatile uint32 *)0xFFFF8640)
#define DDA9                   (*(volatile uint32 *)0xFFFF8644)
#define DTC9                   (*(volatile uint32 *)0xFFFF8648)
#define DTCT9                  (*(volatile uint32 *)0xFFFF864C)
#define DRSA9                  (*(volatile uint32 *)0xFFFF8650)
#define DRDA9                  (*(volatile uint32 *)0xFFFF8654)
#define DRTC9                  (*(volatile uint32 *)0xFFFF8658)
#define DTCC9                  (*(volatile uint32 *)0xFFFF865C)
#define DCEN9                  (*(volatile uint32 *)0xFFFF8660)
#define DCST9                  (*(volatile uint32 *)0xFFFF8664)
#define DCSTS9                 (*(volatile uint32 *)0xFFFF8668)
#define DCSTC9                 (*(volatile uint32 *)0xFFFF866C)
#define DTFR9                  (*(volatile uint32 *)0xFFFF8670)
#define DTFRRQ9                (*(volatile uint32 *)0xFFFF8674)
#define DTFRRQC9               (*(volatile uint32 *)0xFFFF8678)
#define DSA10                  (*(volatile uint32 *)0xFFFF8680)
#define DDA10                  (*(volatile uint32 *)0xFFFF8684)
#define DTC10                  (*(volatile uint32 *)0xFFFF8688)
#define DTCT10                 (*(volatile uint32 *)0xFFFF868C)
#define DRSA10                 (*(volatile uint32 *)0xFFFF8690)
#define DRDA10                 (*(volatile uint32 *)0xFFFF8694)
#define DRTC10                 (*(volatile uint32 *)0xFFFF8698)
#define DTCC10                 (*(volatile uint32 *)0xFFFF869C)
#define DCEN10                 (*(volatile uint32 *)0xFFFF86A0)
#define DCST10                 (*(volatile uint32 *)0xFFFF86A4)
#define DCSTS10                (*(volatile uint32 *)0xFFFF86A8)
#define DCSTC10                (*(volatile uint32 *)0xFFFF86AC)
#define DTFR10                 (*(volatile uint32 *)0xFFFF86B0)
#define DTFRRQ10               (*(volatile uint32 *)0xFFFF86B4)
#define DTFRRQC10              (*(volatile uint32 *)0xFFFF86B8)
#define DSA11                  (*(volatile uint32 *)0xFFFF86C0)
#define DDA11                  (*(volatile uint32 *)0xFFFF86C4)
#define DTC11                  (*(volatile uint32 *)0xFFFF86C8)
#define DTCT11                 (*(volatile uint32 *)0xFFFF86CC)
#define DRSA11                 (*(volatile uint32 *)0xFFFF86D0)
#define DRDA11                 (*(volatile uint32 *)0xFFFF86D4)
#define DRTC11                 (*(volatile uint32 *)0xFFFF86D8)
#define DTCC11                 (*(volatile uint32 *)0xFFFF86DC)
#define DCEN11                 (*(volatile uint32 *)0xFFFF86E0)
#define DCST11                 (*(volatile uint32 *)0xFFFF86E4)
#define DCSTS11                (*(volatile uint32 *)0xFFFF86E8)
#define DCSTC11                (*(volatile uint32 *)0xFFFF86EC)
#define DTFR11                 (*(volatile uint32 *)0xFFFF86F0)
#define DTFRRQ11               (*(volatile uint32 *)0xFFFF86F4)
#define DTFRRQC11              (*(volatile uint32 *)0xFFFF86F8)
#define DSA12                  (*(volatile uint32 *)0xFFFF8700)
#define DDA12                  (*(volatile uint32 *)0xFFFF8704)
#define DTC12                  (*(volatile uint32 *)0xFFFF8708)
#define DTCT12                 (*(volatile uint32 *)0xFFFF870C)
#define DRSA12                 (*(volatile uint32 *)0xFFFF8710)
#define DRDA12                 (*(volatile uint32 *)0xFFFF8714)
#define DRTC12                 (*(volatile uint32 *)0xFFFF8718)
#define DTCC12                 (*(volatile uint32 *)0xFFFF871C)
#define DCEN12                 (*(volatile uint32 *)0xFFFF8720)
#define DCST12                 (*(volatile uint32 *)0xFFFF8724)
#define DCSTS12                (*(volatile uint32 *)0xFFFF8728)
#define DCSTC12                (*(volatile uint32 *)0xFFFF872C)
#define DTFR12                 (*(volatile uint32 *)0xFFFF8730)
#define DTFRRQ12               (*(volatile uint32 *)0xFFFF8734)
#define DTFRRQC12              (*(volatile uint32 *)0xFFFF8738)
#define DSA13                  (*(volatile uint32 *)0xFFFF8740)
#define DDA13                  (*(volatile uint32 *)0xFFFF8744)
#define DTC13                  (*(volatile uint32 *)0xFFFF8748)
#define DTCT13                 (*(volatile uint32 *)0xFFFF874C)
#define DRSA13                 (*(volatile uint32 *)0xFFFF8750)
#define DRDA13                 (*(volatile uint32 *)0xFFFF8754)
#define DRTC13                 (*(volatile uint32 *)0xFFFF8758)
#define DTCC13                 (*(volatile uint32 *)0xFFFF875C)
#define DCEN13                 (*(volatile uint32 *)0xFFFF8760)
#define DCST13                 (*(volatile uint32 *)0xFFFF8764)
#define DCSTS13                (*(volatile uint32 *)0xFFFF8768)
#define DCSTC13                (*(volatile uint32 *)0xFFFF876C)
#define DTFR13                 (*(volatile uint32 *)0xFFFF8770)
#define DTFRRQ13               (*(volatile uint32 *)0xFFFF8774)
#define DTFRRQC13              (*(volatile uint32 *)0xFFFF8778)
#define DSA14                  (*(volatile uint32 *)0xFFFF8780)
#define DDA14                  (*(volatile uint32 *)0xFFFF8784)
#define DTC14                  (*(volatile uint32 *)0xFFFF8788)
#define DTCT14                 (*(volatile uint32 *)0xFFFF878C)
#define DRSA14                 (*(volatile uint32 *)0xFFFF8790)
#define DRDA14                 (*(volatile uint32 *)0xFFFF8794)
#define DRTC14                 (*(volatile uint32 *)0xFFFF8798)
#define DTCC14                 (*(volatile uint32 *)0xFFFF879C)
#define DCEN14                 (*(volatile uint32 *)0xFFFF87A0)
#define DCST14                 (*(volatile uint32 *)0xFFFF87A4)
#define DCSTS14                (*(volatile uint32 *)0xFFFF87A8)
#define DCSTC14                (*(volatile uint32 *)0xFFFF87AC)
#define DTFR14                 (*(volatile uint32 *)0xFFFF87B0)
#define DTFRRQ14               (*(volatile uint32 *)0xFFFF87B4)
#define DTFRRQC14              (*(volatile uint32 *)0xFFFF87B8)
#define DSA15                  (*(volatile uint32 *)0xFFFF87C0)
#define DDA15                  (*(volatile uint32 *)0xFFFF87C4)
#define DTC15                  (*(volatile uint32 *)0xFFFF87C8)
#define DTCT15                 (*(volatile uint32 *)0xFFFF87CC)
#define DRSA15                 (*(volatile uint32 *)0xFFFF87D0)
#define DRDA15                 (*(volatile uint32 *)0xFFFF87D4)
#define DRTC15                 (*(volatile uint32 *)0xFFFF87D8)
#define DTCC15                 (*(volatile uint32 *)0xFFFF87DC)
#define DCEN15                 (*(volatile uint32 *)0xFFFF87E0)
#define DCST15                 (*(volatile uint32 *)0xFFFF87E4)
#define DCSTS15                (*(volatile uint32 *)0xFFFF87E8)
#define DCSTC15                (*(volatile uint32 *)0xFFFF87EC)
#define DTFR15                 (*(volatile uint32 *)0xFFFF87F0)
#define DTFRRQ15               (*(volatile uint32 *)0xFFFF87F4)
#define DTFRRQC15              (*(volatile uint32 *)0xFFFF87F8)
#define DTSA000                (*(volatile uint32 *)0xFFFF9000)
#define DTDA000                (*(volatile uint32 *)0xFFFF9004)
#define DTTC000                (*(volatile uint32 *)0xFFFF9008)
#define DTTCT000               (*(volatile uint32 *)0xFFFF900C)
#define DTRSA000               (*(volatile uint32 *)0xFFFF9010)
#define DTRDA000               (*(volatile uint32 *)0xFFFF9014)
#define DTRTC000               (*(volatile uint32 *)0xFFFF9018)
#define DTTCC000               (*(volatile uint32 *)0xFFFF901C)
#define DTFSL000               (*(volatile uint32 *)0xFFFF9020)
#define DTFST000               (*(volatile uint32 *)0xFFFF9024)
#define DTFSS000               (*(volatile uint32 *)0xFFFF9028)
#define DTFSC000               (*(volatile uint32 *)0xFFFF902C)
#define DTSA001                (*(volatile uint32 *)0xFFFF9040)
#define DTDA001                (*(volatile uint32 *)0xFFFF9044)
#define DTTC001                (*(volatile uint32 *)0xFFFF9048)
#define DTTCT001               (*(volatile uint32 *)0xFFFF904C)
#define DTRSA001               (*(volatile uint32 *)0xFFFF9050)
#define DTRDA001               (*(volatile uint32 *)0xFFFF9054)
#define DTRTC001               (*(volatile uint32 *)0xFFFF9058)
#define DTTCC001               (*(volatile uint32 *)0xFFFF905C)
#define DTFSL001               (*(volatile uint32 *)0xFFFF9060)
#define DTFST001               (*(volatile uint32 *)0xFFFF9064)
#define DTFSS001               (*(volatile uint32 *)0xFFFF9068)
#define DTFSC001               (*(volatile uint32 *)0xFFFF906C)
#define DTSA002                (*(volatile uint32 *)0xFFFF9080)
#define DTDA002                (*(volatile uint32 *)0xFFFF9084)
#define DTTC002                (*(volatile uint32 *)0xFFFF9088)
#define DTTCT002               (*(volatile uint32 *)0xFFFF908C)
#define DTRSA002               (*(volatile uint32 *)0xFFFF9090)
#define DTRDA002               (*(volatile uint32 *)0xFFFF9094)
#define DTRTC002               (*(volatile uint32 *)0xFFFF9098)
#define DTTCC002               (*(volatile uint32 *)0xFFFF909C)
#define DTFSL002               (*(volatile uint32 *)0xFFFF90A0)
#define DTFST002               (*(volatile uint32 *)0xFFFF90A4)
#define DTFSS002               (*(volatile uint32 *)0xFFFF90A8)
#define DTFSC002               (*(volatile uint32 *)0xFFFF90AC)
#define DTSA003                (*(volatile uint32 *)0xFFFF90C0)
#define DTDA003                (*(volatile uint32 *)0xFFFF90C4)
#define DTTC003                (*(volatile uint32 *)0xFFFF90C8)
#define DTTCT003               (*(volatile uint32 *)0xFFFF90CC)
#define DTRSA003               (*(volatile uint32 *)0xFFFF90D0)
#define DTRDA003               (*(volatile uint32 *)0xFFFF90D4)
#define DTRTC003               (*(volatile uint32 *)0xFFFF90D8)
#define DTTCC003               (*(volatile uint32 *)0xFFFF90DC)
#define DTFSL003               (*(volatile uint32 *)0xFFFF90E0)
#define DTFST003               (*(volatile uint32 *)0xFFFF90E4)
#define DTFSS003               (*(volatile uint32 *)0xFFFF90E8)
#define DTFSC003               (*(volatile uint32 *)0xFFFF90EC)
#define DTSA004                (*(volatile uint32 *)0xFFFF9100)
#define DTDA004                (*(volatile uint32 *)0xFFFF9104)
#define DTTC004                (*(volatile uint32 *)0xFFFF9108)
#define DTTCT004               (*(volatile uint32 *)0xFFFF910C)
#define DTRSA004               (*(volatile uint32 *)0xFFFF9110)
#define DTRDA004               (*(volatile uint32 *)0xFFFF9114)
#define DTRTC004               (*(volatile uint32 *)0xFFFF9118)
#define DTTCC004               (*(volatile uint32 *)0xFFFF911C)
#define DTFSL004               (*(volatile uint32 *)0xFFFF9120)
#define DTFST004               (*(volatile uint32 *)0xFFFF9124)
#define DTFSS004               (*(volatile uint32 *)0xFFFF9128)
#define DTFSC004               (*(volatile uint32 *)0xFFFF912C)
#define DTSA005                (*(volatile uint32 *)0xFFFF9140)
#define DTDA005                (*(volatile uint32 *)0xFFFF9144)
#define DTTC005                (*(volatile uint32 *)0xFFFF9148)
#define DTTCT005               (*(volatile uint32 *)0xFFFF914C)
#define DTRSA005               (*(volatile uint32 *)0xFFFF9150)
#define DTRDA005               (*(volatile uint32 *)0xFFFF9154)
#define DTRTC005               (*(volatile uint32 *)0xFFFF9158)
#define DTTCC005               (*(volatile uint32 *)0xFFFF915C)
#define DTFSL005               (*(volatile uint32 *)0xFFFF9160)
#define DTFST005               (*(volatile uint32 *)0xFFFF9164)
#define DTFSS005               (*(volatile uint32 *)0xFFFF9168)
#define DTFSC005               (*(volatile uint32 *)0xFFFF916C)
#define DTSA006                (*(volatile uint32 *)0xFFFF9180)
#define DTDA006                (*(volatile uint32 *)0xFFFF9184)
#define DTTC006                (*(volatile uint32 *)0xFFFF9188)
#define DTTCT006               (*(volatile uint32 *)0xFFFF918C)
#define DTRSA006               (*(volatile uint32 *)0xFFFF9190)
#define DTRDA006               (*(volatile uint32 *)0xFFFF9194)
#define DTRTC006               (*(volatile uint32 *)0xFFFF9198)
#define DTTCC006               (*(volatile uint32 *)0xFFFF919C)
#define DTFSL006               (*(volatile uint32 *)0xFFFF91A0)
#define DTFST006               (*(volatile uint32 *)0xFFFF91A4)
#define DTFSS006               (*(volatile uint32 *)0xFFFF91A8)
#define DTFSC006               (*(volatile uint32 *)0xFFFF91AC)
#define DTSA007                (*(volatile uint32 *)0xFFFF91C0)
#define DTDA007                (*(volatile uint32 *)0xFFFF91C4)
#define DTTC007                (*(volatile uint32 *)0xFFFF91C8)
#define DTTCT007               (*(volatile uint32 *)0xFFFF91CC)
#define DTRSA007               (*(volatile uint32 *)0xFFFF91D0)
#define DTRDA007               (*(volatile uint32 *)0xFFFF91D4)
#define DTRTC007               (*(volatile uint32 *)0xFFFF91D8)
#define DTTCC007               (*(volatile uint32 *)0xFFFF91DC)
#define DTFSL007               (*(volatile uint32 *)0xFFFF91E0)
#define DTFST007               (*(volatile uint32 *)0xFFFF91E4)
#define DTFSS007               (*(volatile uint32 *)0xFFFF91E8)
#define DTFSC007               (*(volatile uint32 *)0xFFFF91EC)
#define DTSA008                (*(volatile uint32 *)0xFFFF9200)
#define DTDA008                (*(volatile uint32 *)0xFFFF9204)
#define DTTC008                (*(volatile uint32 *)0xFFFF9208)
#define DTTCT008               (*(volatile uint32 *)0xFFFF920C)
#define DTRSA008               (*(volatile uint32 *)0xFFFF9210)
#define DTRDA008               (*(volatile uint32 *)0xFFFF9214)
#define DTRTC008               (*(volatile uint32 *)0xFFFF9218)
#define DTTCC008               (*(volatile uint32 *)0xFFFF921C)
#define DTFSL008               (*(volatile uint32 *)0xFFFF9220)
#define DTFST008               (*(volatile uint32 *)0xFFFF9224)
#define DTFSS008               (*(volatile uint32 *)0xFFFF9228)
#define DTFSC008               (*(volatile uint32 *)0xFFFF922C)
#define DTSA009                (*(volatile uint32 *)0xFFFF9240)
#define DTDA009                (*(volatile uint32 *)0xFFFF9244)
#define DTTC009                (*(volatile uint32 *)0xFFFF9248)
#define DTTCT009               (*(volatile uint32 *)0xFFFF924C)
#define DTRSA009               (*(volatile uint32 *)0xFFFF9250)
#define DTRDA009               (*(volatile uint32 *)0xFFFF9254)
#define DTRTC009               (*(volatile uint32 *)0xFFFF9258)
#define DTTCC009               (*(volatile uint32 *)0xFFFF925C)
#define DTFSL009               (*(volatile uint32 *)0xFFFF9260)
#define DTFST009               (*(volatile uint32 *)0xFFFF9264)
#define DTFSS009               (*(volatile uint32 *)0xFFFF9268)
#define DTFSC009               (*(volatile uint32 *)0xFFFF926C)
#define DTSA010                (*(volatile uint32 *)0xFFFF9280)
#define DTDA010                (*(volatile uint32 *)0xFFFF9284)
#define DTTC010                (*(volatile uint32 *)0xFFFF9288)
#define DTTCT010               (*(volatile uint32 *)0xFFFF928C)
#define DTRSA010               (*(volatile uint32 *)0xFFFF9290)
#define DTRDA010               (*(volatile uint32 *)0xFFFF9294)
#define DTRTC010               (*(volatile uint32 *)0xFFFF9298)
#define DTTCC010               (*(volatile uint32 *)0xFFFF929C)
#define DTFSL010               (*(volatile uint32 *)0xFFFF92A0)
#define DTFST010               (*(volatile uint32 *)0xFFFF92A4)
#define DTFSS010               (*(volatile uint32 *)0xFFFF92A8)
#define DTFSC010               (*(volatile uint32 *)0xFFFF92AC)
#define DTSA011                (*(volatile uint32 *)0xFFFF92C0)
#define DTDA011                (*(volatile uint32 *)0xFFFF92C4)
#define DTTC011                (*(volatile uint32 *)0xFFFF92C8)
#define DTTCT011               (*(volatile uint32 *)0xFFFF92CC)
#define DTRSA011               (*(volatile uint32 *)0xFFFF92D0)
#define DTRDA011               (*(volatile uint32 *)0xFFFF92D4)
#define DTRTC011               (*(volatile uint32 *)0xFFFF92D8)
#define DTTCC011               (*(volatile uint32 *)0xFFFF92DC)
#define DTFSL011               (*(volatile uint32 *)0xFFFF92E0)
#define DTFST011               (*(volatile uint32 *)0xFFFF92E4)
#define DTFSS011               (*(volatile uint32 *)0xFFFF92E8)
#define DTFSC011               (*(volatile uint32 *)0xFFFF92EC)
#define DTSA012                (*(volatile uint32 *)0xFFFF9300)
#define DTDA012                (*(volatile uint32 *)0xFFFF9304)
#define DTTC012                (*(volatile uint32 *)0xFFFF9308)
#define DTTCT012               (*(volatile uint32 *)0xFFFF930C)
#define DTRSA012               (*(volatile uint32 *)0xFFFF9310)
#define DTRDA012               (*(volatile uint32 *)0xFFFF9314)
#define DTRTC012               (*(volatile uint32 *)0xFFFF9318)
#define DTTCC012               (*(volatile uint32 *)0xFFFF931C)
#define DTFSL012               (*(volatile uint32 *)0xFFFF9320)
#define DTFST012               (*(volatile uint32 *)0xFFFF9324)
#define DTFSS012               (*(volatile uint32 *)0xFFFF9328)
#define DTFSC012               (*(volatile uint32 *)0xFFFF932C)
#define DTSA013                (*(volatile uint32 *)0xFFFF9340)
#define DTDA013                (*(volatile uint32 *)0xFFFF9344)
#define DTTC013                (*(volatile uint32 *)0xFFFF9348)
#define DTTCT013               (*(volatile uint32 *)0xFFFF934C)
#define DTRSA013               (*(volatile uint32 *)0xFFFF9350)
#define DTRDA013               (*(volatile uint32 *)0xFFFF9354)
#define DTRTC013               (*(volatile uint32 *)0xFFFF9358)
#define DTTCC013               (*(volatile uint32 *)0xFFFF935C)
#define DTFSL013               (*(volatile uint32 *)0xFFFF9360)
#define DTFST013               (*(volatile uint32 *)0xFFFF9364)
#define DTFSS013               (*(volatile uint32 *)0xFFFF9368)
#define DTFSC013               (*(volatile uint32 *)0xFFFF936C)
#define DTSA014                (*(volatile uint32 *)0xFFFF9380)
#define DTDA014                (*(volatile uint32 *)0xFFFF9384)
#define DTTC014                (*(volatile uint32 *)0xFFFF9388)
#define DTTCT014               (*(volatile uint32 *)0xFFFF938C)
#define DTRSA014               (*(volatile uint32 *)0xFFFF9390)
#define DTRDA014               (*(volatile uint32 *)0xFFFF9394)
#define DTRTC014               (*(volatile uint32 *)0xFFFF9398)
#define DTTCC014               (*(volatile uint32 *)0xFFFF939C)
#define DTFSL014               (*(volatile uint32 *)0xFFFF93A0)
#define DTFST014               (*(volatile uint32 *)0xFFFF93A4)
#define DTFSS014               (*(volatile uint32 *)0xFFFF93A8)
#define DTFSC014               (*(volatile uint32 *)0xFFFF93AC)
#define DTSA015                (*(volatile uint32 *)0xFFFF93C0)
#define DTDA015                (*(volatile uint32 *)0xFFFF93C4)
#define DTTC015                (*(volatile uint32 *)0xFFFF93C8)
#define DTTCT015               (*(volatile uint32 *)0xFFFF93CC)
#define DTRSA015               (*(volatile uint32 *)0xFFFF93D0)
#define DTRDA015               (*(volatile uint32 *)0xFFFF93D4)
#define DTRTC015               (*(volatile uint32 *)0xFFFF93D8)
#define DTTCC015               (*(volatile uint32 *)0xFFFF93DC)
#define DTFSL015               (*(volatile uint32 *)0xFFFF93E0)
#define DTFST015               (*(volatile uint32 *)0xFFFF93E4)
#define DTFSS015               (*(volatile uint32 *)0xFFFF93E8)
#define DTFSC015               (*(volatile uint32 *)0xFFFF93EC)
#define DTSA016                (*(volatile uint32 *)0xFFFF9400)
#define DTDA016                (*(volatile uint32 *)0xFFFF9404)
#define DTTC016                (*(volatile uint32 *)0xFFFF9408)
#define DTTCT016               (*(volatile uint32 *)0xFFFF940C)
#define DTRSA016               (*(volatile uint32 *)0xFFFF9410)
#define DTRDA016               (*(volatile uint32 *)0xFFFF9414)
#define DTRTC016               (*(volatile uint32 *)0xFFFF9418)
#define DTTCC016               (*(volatile uint32 *)0xFFFF941C)
#define DTFSL016               (*(volatile uint32 *)0xFFFF9420)
#define DTFST016               (*(volatile uint32 *)0xFFFF9424)
#define DTFSS016               (*(volatile uint32 *)0xFFFF9428)
#define DTFSC016               (*(volatile uint32 *)0xFFFF942C)
#define DTSA017                (*(volatile uint32 *)0xFFFF9440)
#define DTDA017                (*(volatile uint32 *)0xFFFF9444)
#define DTTC017                (*(volatile uint32 *)0xFFFF9448)
#define DTTCT017               (*(volatile uint32 *)0xFFFF944C)
#define DTRSA017               (*(volatile uint32 *)0xFFFF9450)
#define DTRDA017               (*(volatile uint32 *)0xFFFF9454)
#define DTRTC017               (*(volatile uint32 *)0xFFFF9458)
#define DTTCC017               (*(volatile uint32 *)0xFFFF945C)
#define DTFSL017               (*(volatile uint32 *)0xFFFF9460)
#define DTFST017               (*(volatile uint32 *)0xFFFF9464)
#define DTFSS017               (*(volatile uint32 *)0xFFFF9468)
#define DTFSC017               (*(volatile uint32 *)0xFFFF946C)
#define DTSA018                (*(volatile uint32 *)0xFFFF9480)
#define DTDA018                (*(volatile uint32 *)0xFFFF9484)
#define DTTC018                (*(volatile uint32 *)0xFFFF9488)
#define DTTCT018               (*(volatile uint32 *)0xFFFF948C)
#define DTRSA018               (*(volatile uint32 *)0xFFFF9490)
#define DTRDA018               (*(volatile uint32 *)0xFFFF9494)
#define DTRTC018               (*(volatile uint32 *)0xFFFF9498)
#define DTTCC018               (*(volatile uint32 *)0xFFFF949C)
#define DTFSL018               (*(volatile uint32 *)0xFFFF94A0)
#define DTFST018               (*(volatile uint32 *)0xFFFF94A4)
#define DTFSS018               (*(volatile uint32 *)0xFFFF94A8)
#define DTFSC018               (*(volatile uint32 *)0xFFFF94AC)
#define DTSA019                (*(volatile uint32 *)0xFFFF94C0)
#define DTDA019                (*(volatile uint32 *)0xFFFF94C4)
#define DTTC019                (*(volatile uint32 *)0xFFFF94C8)
#define DTTCT019               (*(volatile uint32 *)0xFFFF94CC)
#define DTRSA019               (*(volatile uint32 *)0xFFFF94D0)
#define DTRDA019               (*(volatile uint32 *)0xFFFF94D4)
#define DTRTC019               (*(volatile uint32 *)0xFFFF94D8)
#define DTTCC019               (*(volatile uint32 *)0xFFFF94DC)
#define DTFSL019               (*(volatile uint32 *)0xFFFF94E0)
#define DTFST019               (*(volatile uint32 *)0xFFFF94E4)
#define DTFSS019               (*(volatile uint32 *)0xFFFF94E8)
#define DTFSC019               (*(volatile uint32 *)0xFFFF94EC)
#define DTSA020                (*(volatile uint32 *)0xFFFF9500)
#define DTDA020                (*(volatile uint32 *)0xFFFF9504)
#define DTTC020                (*(volatile uint32 *)0xFFFF9508)
#define DTTCT020               (*(volatile uint32 *)0xFFFF950C)
#define DTRSA020               (*(volatile uint32 *)0xFFFF9510)
#define DTRDA020               (*(volatile uint32 *)0xFFFF9514)
#define DTRTC020               (*(volatile uint32 *)0xFFFF9518)
#define DTTCC020               (*(volatile uint32 *)0xFFFF951C)
#define DTFSL020               (*(volatile uint32 *)0xFFFF9520)
#define DTFST020               (*(volatile uint32 *)0xFFFF9524)
#define DTFSS020               (*(volatile uint32 *)0xFFFF9528)
#define DTFSC020               (*(volatile uint32 *)0xFFFF952C)
#define DTSA021                (*(volatile uint32 *)0xFFFF9540)
#define DTDA021                (*(volatile uint32 *)0xFFFF9544)
#define DTTC021                (*(volatile uint32 *)0xFFFF9548)
#define DTTCT021               (*(volatile uint32 *)0xFFFF954C)
#define DTRSA021               (*(volatile uint32 *)0xFFFF9550)
#define DTRDA021               (*(volatile uint32 *)0xFFFF9554)
#define DTRTC021               (*(volatile uint32 *)0xFFFF9558)
#define DTTCC021               (*(volatile uint32 *)0xFFFF955C)
#define DTFSL021               (*(volatile uint32 *)0xFFFF9560)
#define DTFST021               (*(volatile uint32 *)0xFFFF9564)
#define DTFSS021               (*(volatile uint32 *)0xFFFF9568)
#define DTFSC021               (*(volatile uint32 *)0xFFFF956C)
#define DTSA022                (*(volatile uint32 *)0xFFFF9580)
#define DTDA022                (*(volatile uint32 *)0xFFFF9584)
#define DTTC022                (*(volatile uint32 *)0xFFFF9588)
#define DTTCT022               (*(volatile uint32 *)0xFFFF958C)
#define DTRSA022               (*(volatile uint32 *)0xFFFF9590)
#define DTRDA022               (*(volatile uint32 *)0xFFFF9594)
#define DTRTC022               (*(volatile uint32 *)0xFFFF9598)
#define DTTCC022               (*(volatile uint32 *)0xFFFF959C)
#define DTFSL022               (*(volatile uint32 *)0xFFFF95A0)
#define DTFST022               (*(volatile uint32 *)0xFFFF95A4)
#define DTFSS022               (*(volatile uint32 *)0xFFFF95A8)
#define DTFSC022               (*(volatile uint32 *)0xFFFF95AC)
#define DTSA023                (*(volatile uint32 *)0xFFFF95C0)
#define DTDA023                (*(volatile uint32 *)0xFFFF95C4)
#define DTTC023                (*(volatile uint32 *)0xFFFF95C8)
#define DTTCT023               (*(volatile uint32 *)0xFFFF95CC)
#define DTRSA023               (*(volatile uint32 *)0xFFFF95D0)
#define DTRDA023               (*(volatile uint32 *)0xFFFF95D4)
#define DTRTC023               (*(volatile uint32 *)0xFFFF95D8)
#define DTTCC023               (*(volatile uint32 *)0xFFFF95DC)
#define DTFSL023               (*(volatile uint32 *)0xFFFF95E0)
#define DTFST023               (*(volatile uint32 *)0xFFFF95E4)
#define DTFSS023               (*(volatile uint32 *)0xFFFF95E8)
#define DTFSC023               (*(volatile uint32 *)0xFFFF95EC)
#define DTSA024                (*(volatile uint32 *)0xFFFF9600)
#define DTDA024                (*(volatile uint32 *)0xFFFF9604)
#define DTTC024                (*(volatile uint32 *)0xFFFF9608)
#define DTTCT024               (*(volatile uint32 *)0xFFFF960C)
#define DTRSA024               (*(volatile uint32 *)0xFFFF9610)
#define DTRDA024               (*(volatile uint32 *)0xFFFF9614)
#define DTRTC024               (*(volatile uint32 *)0xFFFF9618)
#define DTTCC024               (*(volatile uint32 *)0xFFFF961C)
#define DTFSL024               (*(volatile uint32 *)0xFFFF9620)
#define DTFST024               (*(volatile uint32 *)0xFFFF9624)
#define DTFSS024               (*(volatile uint32 *)0xFFFF9628)
#define DTFSC024               (*(volatile uint32 *)0xFFFF962C)
#define DTSA025                (*(volatile uint32 *)0xFFFF9640)
#define DTDA025                (*(volatile uint32 *)0xFFFF9644)
#define DTTC025                (*(volatile uint32 *)0xFFFF9648)
#define DTTCT025               (*(volatile uint32 *)0xFFFF964C)
#define DTRSA025               (*(volatile uint32 *)0xFFFF9650)
#define DTRDA025               (*(volatile uint32 *)0xFFFF9654)
#define DTRTC025               (*(volatile uint32 *)0xFFFF9658)
#define DTTCC025               (*(volatile uint32 *)0xFFFF965C)
#define DTFSL025               (*(volatile uint32 *)0xFFFF9660)
#define DTFST025               (*(volatile uint32 *)0xFFFF9664)
#define DTFSS025               (*(volatile uint32 *)0xFFFF9668)
#define DTFSC025               (*(volatile uint32 *)0xFFFF966C)
#define DTSA026                (*(volatile uint32 *)0xFFFF9680)
#define DTDA026                (*(volatile uint32 *)0xFFFF9684)
#define DTTC026                (*(volatile uint32 *)0xFFFF9688)
#define DTTCT026               (*(volatile uint32 *)0xFFFF968C)
#define DTRSA026               (*(volatile uint32 *)0xFFFF9690)
#define DTRDA026               (*(volatile uint32 *)0xFFFF9694)
#define DTRTC026               (*(volatile uint32 *)0xFFFF9698)
#define DTTCC026               (*(volatile uint32 *)0xFFFF969C)
#define DTFSL026               (*(volatile uint32 *)0xFFFF96A0)
#define DTFST026               (*(volatile uint32 *)0xFFFF96A4)
#define DTFSS026               (*(volatile uint32 *)0xFFFF96A8)
#define DTFSC026               (*(volatile uint32 *)0xFFFF96AC)
#define DTSA027                (*(volatile uint32 *)0xFFFF96C0)
#define DTDA027                (*(volatile uint32 *)0xFFFF96C4)
#define DTTC027                (*(volatile uint32 *)0xFFFF96C8)
#define DTTCT027               (*(volatile uint32 *)0xFFFF96CC)
#define DTRSA027               (*(volatile uint32 *)0xFFFF96D0)
#define DTRDA027               (*(volatile uint32 *)0xFFFF96D4)
#define DTRTC027               (*(volatile uint32 *)0xFFFF96D8)
#define DTTCC027               (*(volatile uint32 *)0xFFFF96DC)
#define DTFSL027               (*(volatile uint32 *)0xFFFF96E0)
#define DTFST027               (*(volatile uint32 *)0xFFFF96E4)
#define DTFSS027               (*(volatile uint32 *)0xFFFF96E8)
#define DTFSC027               (*(volatile uint32 *)0xFFFF96EC)
#define DTSA028                (*(volatile uint32 *)0xFFFF9700)
#define DTDA028                (*(volatile uint32 *)0xFFFF9704)
#define DTTC028                (*(volatile uint32 *)0xFFFF9708)
#define DTTCT028               (*(volatile uint32 *)0xFFFF970C)
#define DTRSA028               (*(volatile uint32 *)0xFFFF9710)
#define DTRDA028               (*(volatile uint32 *)0xFFFF9714)
#define DTRTC028               (*(volatile uint32 *)0xFFFF9718)
#define DTTCC028               (*(volatile uint32 *)0xFFFF971C)
#define DTFSL028               (*(volatile uint32 *)0xFFFF9720)
#define DTFST028               (*(volatile uint32 *)0xFFFF9724)
#define DTFSS028               (*(volatile uint32 *)0xFFFF9728)
#define DTFSC028               (*(volatile uint32 *)0xFFFF972C)
#define DTSA029                (*(volatile uint32 *)0xFFFF9740)
#define DTDA029                (*(volatile uint32 *)0xFFFF9744)
#define DTTC029                (*(volatile uint32 *)0xFFFF9748)
#define DTTCT029               (*(volatile uint32 *)0xFFFF974C)
#define DTRSA029               (*(volatile uint32 *)0xFFFF9750)
#define DTRDA029               (*(volatile uint32 *)0xFFFF9754)
#define DTRTC029               (*(volatile uint32 *)0xFFFF9758)
#define DTTCC029               (*(volatile uint32 *)0xFFFF975C)
#define DTFSL029               (*(volatile uint32 *)0xFFFF9760)
#define DTFST029               (*(volatile uint32 *)0xFFFF9764)
#define DTFSS029               (*(volatile uint32 *)0xFFFF9768)
#define DTFSC029               (*(volatile uint32 *)0xFFFF976C)
#define DTSA030                (*(volatile uint32 *)0xFFFF9780)
#define DTDA030                (*(volatile uint32 *)0xFFFF9784)
#define DTTC030                (*(volatile uint32 *)0xFFFF9788)
#define DTTCT030               (*(volatile uint32 *)0xFFFF978C)
#define DTRSA030               (*(volatile uint32 *)0xFFFF9790)
#define DTRDA030               (*(volatile uint32 *)0xFFFF9794)
#define DTRTC030               (*(volatile uint32 *)0xFFFF9798)
#define DTTCC030               (*(volatile uint32 *)0xFFFF979C)
#define DTFSL030               (*(volatile uint32 *)0xFFFF97A0)
#define DTFST030               (*(volatile uint32 *)0xFFFF97A4)
#define DTFSS030               (*(volatile uint32 *)0xFFFF97A8)
#define DTFSC030               (*(volatile uint32 *)0xFFFF97AC)
#define DTSA031                (*(volatile uint32 *)0xFFFF97C0)
#define DTDA031                (*(volatile uint32 *)0xFFFF97C4)
#define DTTC031                (*(volatile uint32 *)0xFFFF97C8)
#define DTTCT031               (*(volatile uint32 *)0xFFFF97CC)
#define DTRSA031               (*(volatile uint32 *)0xFFFF97D0)
#define DTRDA031               (*(volatile uint32 *)0xFFFF97D4)
#define DTRTC031               (*(volatile uint32 *)0xFFFF97D8)
#define DTTCC031               (*(volatile uint32 *)0xFFFF97DC)
#define DTFSL031               (*(volatile uint32 *)0xFFFF97E0)
#define DTFST031               (*(volatile uint32 *)0xFFFF97E4)
#define DTFSS031               (*(volatile uint32 *)0xFFFF97E8)
#define DTFSC031               (*(volatile uint32 *)0xFFFF97EC)
#define DTSA032                (*(volatile uint32 *)0xFFFF9800)
#define DTDA032                (*(volatile uint32 *)0xFFFF9804)
#define DTTC032                (*(volatile uint32 *)0xFFFF9808)
#define DTTCT032               (*(volatile uint32 *)0xFFFF980C)
#define DTRSA032               (*(volatile uint32 *)0xFFFF9810)
#define DTRDA032               (*(volatile uint32 *)0xFFFF9814)
#define DTRTC032               (*(volatile uint32 *)0xFFFF9818)
#define DTTCC032               (*(volatile uint32 *)0xFFFF981C)
#define DTFSL032               (*(volatile uint32 *)0xFFFF9820)
#define DTFST032               (*(volatile uint32 *)0xFFFF9824)
#define DTFSS032               (*(volatile uint32 *)0xFFFF9828)
#define DTFSC032               (*(volatile uint32 *)0xFFFF982C)
#define DTSA033                (*(volatile uint32 *)0xFFFF9840)
#define DTDA033                (*(volatile uint32 *)0xFFFF9844)
#define DTTC033                (*(volatile uint32 *)0xFFFF9848)
#define DTTCT033               (*(volatile uint32 *)0xFFFF984C)
#define DTRSA033               (*(volatile uint32 *)0xFFFF9850)
#define DTRDA033               (*(volatile uint32 *)0xFFFF9854)
#define DTRTC033               (*(volatile uint32 *)0xFFFF9858)
#define DTTCC033               (*(volatile uint32 *)0xFFFF985C)
#define DTFSL033               (*(volatile uint32 *)0xFFFF9860)
#define DTFST033               (*(volatile uint32 *)0xFFFF9864)
#define DTFSS033               (*(volatile uint32 *)0xFFFF9868)
#define DTFSC033               (*(volatile uint32 *)0xFFFF986C)
#define DTSA034                (*(volatile uint32 *)0xFFFF9880)
#define DTDA034                (*(volatile uint32 *)0xFFFF9884)
#define DTTC034                (*(volatile uint32 *)0xFFFF9888)
#define DTTCT034               (*(volatile uint32 *)0xFFFF988C)
#define DTRSA034               (*(volatile uint32 *)0xFFFF9890)
#define DTRDA034               (*(volatile uint32 *)0xFFFF9894)
#define DTRTC034               (*(volatile uint32 *)0xFFFF9898)
#define DTTCC034               (*(volatile uint32 *)0xFFFF989C)
#define DTFSL034               (*(volatile uint32 *)0xFFFF98A0)
#define DTFST034               (*(volatile uint32 *)0xFFFF98A4)
#define DTFSS034               (*(volatile uint32 *)0xFFFF98A8)
#define DTFSC034               (*(volatile uint32 *)0xFFFF98AC)
#define DTSA035                (*(volatile uint32 *)0xFFFF98C0)
#define DTDA035                (*(volatile uint32 *)0xFFFF98C4)
#define DTTC035                (*(volatile uint32 *)0xFFFF98C8)
#define DTTCT035               (*(volatile uint32 *)0xFFFF98CC)
#define DTRSA035               (*(volatile uint32 *)0xFFFF98D0)
#define DTRDA035               (*(volatile uint32 *)0xFFFF98D4)
#define DTRTC035               (*(volatile uint32 *)0xFFFF98D8)
#define DTTCC035               (*(volatile uint32 *)0xFFFF98DC)
#define DTFSL035               (*(volatile uint32 *)0xFFFF98E0)
#define DTFST035               (*(volatile uint32 *)0xFFFF98E4)
#define DTFSS035               (*(volatile uint32 *)0xFFFF98E8)
#define DTFSC035               (*(volatile uint32 *)0xFFFF98EC)
#define DTSA036                (*(volatile uint32 *)0xFFFF9900)
#define DTDA036                (*(volatile uint32 *)0xFFFF9904)
#define DTTC036                (*(volatile uint32 *)0xFFFF9908)
#define DTTCT036               (*(volatile uint32 *)0xFFFF990C)
#define DTRSA036               (*(volatile uint32 *)0xFFFF9910)
#define DTRDA036               (*(volatile uint32 *)0xFFFF9914)
#define DTRTC036               (*(volatile uint32 *)0xFFFF9918)
#define DTTCC036               (*(volatile uint32 *)0xFFFF991C)
#define DTFSL036               (*(volatile uint32 *)0xFFFF9920)
#define DTFST036               (*(volatile uint32 *)0xFFFF9924)
#define DTFSS036               (*(volatile uint32 *)0xFFFF9928)
#define DTFSC036               (*(volatile uint32 *)0xFFFF992C)
#define DTSA037                (*(volatile uint32 *)0xFFFF9940)
#define DTDA037                (*(volatile uint32 *)0xFFFF9944)
#define DTTC037                (*(volatile uint32 *)0xFFFF9948)
#define DTTCT037               (*(volatile uint32 *)0xFFFF994C)
#define DTRSA037               (*(volatile uint32 *)0xFFFF9950)
#define DTRDA037               (*(volatile uint32 *)0xFFFF9954)
#define DTRTC037               (*(volatile uint32 *)0xFFFF9958)
#define DTTCC037               (*(volatile uint32 *)0xFFFF995C)
#define DTFSL037               (*(volatile uint32 *)0xFFFF9960)
#define DTFST037               (*(volatile uint32 *)0xFFFF9964)
#define DTFSS037               (*(volatile uint32 *)0xFFFF9968)
#define DTFSC037               (*(volatile uint32 *)0xFFFF996C)
#define DTSA038                (*(volatile uint32 *)0xFFFF9980)
#define DTDA038                (*(volatile uint32 *)0xFFFF9984)
#define DTTC038                (*(volatile uint32 *)0xFFFF9988)
#define DTTCT038               (*(volatile uint32 *)0xFFFF998C)
#define DTRSA038               (*(volatile uint32 *)0xFFFF9990)
#define DTRDA038               (*(volatile uint32 *)0xFFFF9994)
#define DTRTC038               (*(volatile uint32 *)0xFFFF9998)
#define DTTCC038               (*(volatile uint32 *)0xFFFF999C)
#define DTFSL038               (*(volatile uint32 *)0xFFFF99A0)
#define DTFST038               (*(volatile uint32 *)0xFFFF99A4)
#define DTFSS038               (*(volatile uint32 *)0xFFFF99A8)
#define DTFSC038               (*(volatile uint32 *)0xFFFF99AC)
#define DTSA039                (*(volatile uint32 *)0xFFFF99C0)
#define DTDA039                (*(volatile uint32 *)0xFFFF99C4)
#define DTTC039                (*(volatile uint32 *)0xFFFF99C8)
#define DTTCT039               (*(volatile uint32 *)0xFFFF99CC)
#define DTRSA039               (*(volatile uint32 *)0xFFFF99D0)
#define DTRDA039               (*(volatile uint32 *)0xFFFF99D4)
#define DTRTC039               (*(volatile uint32 *)0xFFFF99D8)
#define DTTCC039               (*(volatile uint32 *)0xFFFF99DC)
#define DTFSL039               (*(volatile uint32 *)0xFFFF99E0)
#define DTFST039               (*(volatile uint32 *)0xFFFF99E4)
#define DTFSS039               (*(volatile uint32 *)0xFFFF99E8)
#define DTFSC039               (*(volatile uint32 *)0xFFFF99EC)
#define DTSA040                (*(volatile uint32 *)0xFFFF9A00)
#define DTDA040                (*(volatile uint32 *)0xFFFF9A04)
#define DTTC040                (*(volatile uint32 *)0xFFFF9A08)
#define DTTCT040               (*(volatile uint32 *)0xFFFF9A0C)
#define DTRSA040               (*(volatile uint32 *)0xFFFF9A10)
#define DTRDA040               (*(volatile uint32 *)0xFFFF9A14)
#define DTRTC040               (*(volatile uint32 *)0xFFFF9A18)
#define DTTCC040               (*(volatile uint32 *)0xFFFF9A1C)
#define DTFSL040               (*(volatile uint32 *)0xFFFF9A20)
#define DTFST040               (*(volatile uint32 *)0xFFFF9A24)
#define DTFSS040               (*(volatile uint32 *)0xFFFF9A28)
#define DTFSC040               (*(volatile uint32 *)0xFFFF9A2C)
#define DTSA041                (*(volatile uint32 *)0xFFFF9A40)
#define DTDA041                (*(volatile uint32 *)0xFFFF9A44)
#define DTTC041                (*(volatile uint32 *)0xFFFF9A48)
#define DTTCT041               (*(volatile uint32 *)0xFFFF9A4C)
#define DTRSA041               (*(volatile uint32 *)0xFFFF9A50)
#define DTRDA041               (*(volatile uint32 *)0xFFFF9A54)
#define DTRTC041               (*(volatile uint32 *)0xFFFF9A58)
#define DTTCC041               (*(volatile uint32 *)0xFFFF9A5C)
#define DTFSL041               (*(volatile uint32 *)0xFFFF9A60)
#define DTFST041               (*(volatile uint32 *)0xFFFF9A64)
#define DTFSS041               (*(volatile uint32 *)0xFFFF9A68)
#define DTFSC041               (*(volatile uint32 *)0xFFFF9A6C)
#define DTSA042                (*(volatile uint32 *)0xFFFF9A80)
#define DTDA042                (*(volatile uint32 *)0xFFFF9A84)
#define DTTC042                (*(volatile uint32 *)0xFFFF9A88)
#define DTTCT042               (*(volatile uint32 *)0xFFFF9A8C)
#define DTRSA042               (*(volatile uint32 *)0xFFFF9A90)
#define DTRDA042               (*(volatile uint32 *)0xFFFF9A94)
#define DTRTC042               (*(volatile uint32 *)0xFFFF9A98)
#define DTTCC042               (*(volatile uint32 *)0xFFFF9A9C)
#define DTFSL042               (*(volatile uint32 *)0xFFFF9AA0)
#define DTFST042               (*(volatile uint32 *)0xFFFF9AA4)
#define DTFSS042               (*(volatile uint32 *)0xFFFF9AA8)
#define DTFSC042               (*(volatile uint32 *)0xFFFF9AAC)
#define DTSA043                (*(volatile uint32 *)0xFFFF9AC0)
#define DTDA043                (*(volatile uint32 *)0xFFFF9AC4)
#define DTTC043                (*(volatile uint32 *)0xFFFF9AC8)
#define DTTCT043               (*(volatile uint32 *)0xFFFF9ACC)
#define DTRSA043               (*(volatile uint32 *)0xFFFF9AD0)
#define DTRDA043               (*(volatile uint32 *)0xFFFF9AD4)
#define DTRTC043               (*(volatile uint32 *)0xFFFF9AD8)
#define DTTCC043               (*(volatile uint32 *)0xFFFF9ADC)
#define DTFSL043               (*(volatile uint32 *)0xFFFF9AE0)
#define DTFST043               (*(volatile uint32 *)0xFFFF9AE4)
#define DTFSS043               (*(volatile uint32 *)0xFFFF9AE8)
#define DTFSC043               (*(volatile uint32 *)0xFFFF9AEC)
#define DTSA044                (*(volatile uint32 *)0xFFFF9B00)
#define DTDA044                (*(volatile uint32 *)0xFFFF9B04)
#define DTTC044                (*(volatile uint32 *)0xFFFF9B08)
#define DTTCT044               (*(volatile uint32 *)0xFFFF9B0C)
#define DTRSA044               (*(volatile uint32 *)0xFFFF9B10)
#define DTRDA044               (*(volatile uint32 *)0xFFFF9B14)
#define DTRTC044               (*(volatile uint32 *)0xFFFF9B18)
#define DTTCC044               (*(volatile uint32 *)0xFFFF9B1C)
#define DTFSL044               (*(volatile uint32 *)0xFFFF9B20)
#define DTFST044               (*(volatile uint32 *)0xFFFF9B24)
#define DTFSS044               (*(volatile uint32 *)0xFFFF9B28)
#define DTFSC044               (*(volatile uint32 *)0xFFFF9B2C)
#define DTSA045                (*(volatile uint32 *)0xFFFF9B40)
#define DTDA045                (*(volatile uint32 *)0xFFFF9B44)
#define DTTC045                (*(volatile uint32 *)0xFFFF9B48)
#define DTTCT045               (*(volatile uint32 *)0xFFFF9B4C)
#define DTRSA045               (*(volatile uint32 *)0xFFFF9B50)
#define DTRDA045               (*(volatile uint32 *)0xFFFF9B54)
#define DTRTC045               (*(volatile uint32 *)0xFFFF9B58)
#define DTTCC045               (*(volatile uint32 *)0xFFFF9B5C)
#define DTFSL045               (*(volatile uint32 *)0xFFFF9B60)
#define DTFST045               (*(volatile uint32 *)0xFFFF9B64)
#define DTFSS045               (*(volatile uint32 *)0xFFFF9B68)
#define DTFSC045               (*(volatile uint32 *)0xFFFF9B6C)
#define DTSA046                (*(volatile uint32 *)0xFFFF9B80)
#define DTDA046                (*(volatile uint32 *)0xFFFF9B84)
#define DTTC046                (*(volatile uint32 *)0xFFFF9B88)
#define DTTCT046               (*(volatile uint32 *)0xFFFF9B8C)
#define DTRSA046               (*(volatile uint32 *)0xFFFF9B90)
#define DTRDA046               (*(volatile uint32 *)0xFFFF9B94)
#define DTRTC046               (*(volatile uint32 *)0xFFFF9B98)
#define DTTCC046               (*(volatile uint32 *)0xFFFF9B9C)
#define DTFSL046               (*(volatile uint32 *)0xFFFF9BA0)
#define DTFST046               (*(volatile uint32 *)0xFFFF9BA4)
#define DTFSS046               (*(volatile uint32 *)0xFFFF9BA8)
#define DTFSC046               (*(volatile uint32 *)0xFFFF9BAC)
#define DTSA047                (*(volatile uint32 *)0xFFFF9BC0)
#define DTDA047                (*(volatile uint32 *)0xFFFF9BC4)
#define DTTC047                (*(volatile uint32 *)0xFFFF9BC8)
#define DTTCT047               (*(volatile uint32 *)0xFFFF9BCC)
#define DTRSA047               (*(volatile uint32 *)0xFFFF9BD0)
#define DTRDA047               (*(volatile uint32 *)0xFFFF9BD4)
#define DTRTC047               (*(volatile uint32 *)0xFFFF9BD8)
#define DTTCC047               (*(volatile uint32 *)0xFFFF9BDC)
#define DTFSL047               (*(volatile uint32 *)0xFFFF9BE0)
#define DTFST047               (*(volatile uint32 *)0xFFFF9BE4)
#define DTFSS047               (*(volatile uint32 *)0xFFFF9BE8)
#define DTFSC047               (*(volatile uint32 *)0xFFFF9BEC)
#define DTSA048                (*(volatile uint32 *)0xFFFF9C00)
#define DTDA048                (*(volatile uint32 *)0xFFFF9C04)
#define DTTC048                (*(volatile uint32 *)0xFFFF9C08)
#define DTTCT048               (*(volatile uint32 *)0xFFFF9C0C)
#define DTRSA048               (*(volatile uint32 *)0xFFFF9C10)
#define DTRDA048               (*(volatile uint32 *)0xFFFF9C14)
#define DTRTC048               (*(volatile uint32 *)0xFFFF9C18)
#define DTTCC048               (*(volatile uint32 *)0xFFFF9C1C)
#define DTFSL048               (*(volatile uint32 *)0xFFFF9C20)
#define DTFST048               (*(volatile uint32 *)0xFFFF9C24)
#define DTFSS048               (*(volatile uint32 *)0xFFFF9C28)
#define DTFSC048               (*(volatile uint32 *)0xFFFF9C2C)
#define DTSA049                (*(volatile uint32 *)0xFFFF9C40)
#define DTDA049                (*(volatile uint32 *)0xFFFF9C44)
#define DTTC049                (*(volatile uint32 *)0xFFFF9C48)
#define DTTCT049               (*(volatile uint32 *)0xFFFF9C4C)
#define DTRSA049               (*(volatile uint32 *)0xFFFF9C50)
#define DTRDA049               (*(volatile uint32 *)0xFFFF9C54)
#define DTRTC049               (*(volatile uint32 *)0xFFFF9C58)
#define DTTCC049               (*(volatile uint32 *)0xFFFF9C5C)
#define DTFSL049               (*(volatile uint32 *)0xFFFF9C60)
#define DTFST049               (*(volatile uint32 *)0xFFFF9C64)
#define DTFSS049               (*(volatile uint32 *)0xFFFF9C68)
#define DTFSC049               (*(volatile uint32 *)0xFFFF9C6C)
#define DTSA050                (*(volatile uint32 *)0xFFFF9C80)
#define DTDA050                (*(volatile uint32 *)0xFFFF9C84)
#define DTTC050                (*(volatile uint32 *)0xFFFF9C88)
#define DTTCT050               (*(volatile uint32 *)0xFFFF9C8C)
#define DTRSA050               (*(volatile uint32 *)0xFFFF9C90)
#define DTRDA050               (*(volatile uint32 *)0xFFFF9C94)
#define DTRTC050               (*(volatile uint32 *)0xFFFF9C98)
#define DTTCC050               (*(volatile uint32 *)0xFFFF9C9C)
#define DTFSL050               (*(volatile uint32 *)0xFFFF9CA0)
#define DTFST050               (*(volatile uint32 *)0xFFFF9CA4)
#define DTFSS050               (*(volatile uint32 *)0xFFFF9CA8)
#define DTFSC050               (*(volatile uint32 *)0xFFFF9CAC)
#define DTSA051                (*(volatile uint32 *)0xFFFF9CC0)
#define DTDA051                (*(volatile uint32 *)0xFFFF9CC4)
#define DTTC051                (*(volatile uint32 *)0xFFFF9CC8)
#define DTTCT051               (*(volatile uint32 *)0xFFFF9CCC)
#define DTRSA051               (*(volatile uint32 *)0xFFFF9CD0)
#define DTRDA051               (*(volatile uint32 *)0xFFFF9CD4)
#define DTRTC051               (*(volatile uint32 *)0xFFFF9CD8)
#define DTTCC051               (*(volatile uint32 *)0xFFFF9CDC)
#define DTFSL051               (*(volatile uint32 *)0xFFFF9CE0)
#define DTFST051               (*(volatile uint32 *)0xFFFF9CE4)
#define DTFSS051               (*(volatile uint32 *)0xFFFF9CE8)
#define DTFSC051               (*(volatile uint32 *)0xFFFF9CEC)
#define DTSA052                (*(volatile uint32 *)0xFFFF9D00)
#define DTDA052                (*(volatile uint32 *)0xFFFF9D04)
#define DTTC052                (*(volatile uint32 *)0xFFFF9D08)
#define DTTCT052               (*(volatile uint32 *)0xFFFF9D0C)
#define DTRSA052               (*(volatile uint32 *)0xFFFF9D10)
#define DTRDA052               (*(volatile uint32 *)0xFFFF9D14)
#define DTRTC052               (*(volatile uint32 *)0xFFFF9D18)
#define DTTCC052               (*(volatile uint32 *)0xFFFF9D1C)
#define DTFSL052               (*(volatile uint32 *)0xFFFF9D20)
#define DTFST052               (*(volatile uint32 *)0xFFFF9D24)
#define DTFSS052               (*(volatile uint32 *)0xFFFF9D28)
#define DTFSC052               (*(volatile uint32 *)0xFFFF9D2C)
#define DTSA053                (*(volatile uint32 *)0xFFFF9D40)
#define DTDA053                (*(volatile uint32 *)0xFFFF9D44)
#define DTTC053                (*(volatile uint32 *)0xFFFF9D48)
#define DTTCT053               (*(volatile uint32 *)0xFFFF9D4C)
#define DTRSA053               (*(volatile uint32 *)0xFFFF9D50)
#define DTRDA053               (*(volatile uint32 *)0xFFFF9D54)
#define DTRTC053               (*(volatile uint32 *)0xFFFF9D58)
#define DTTCC053               (*(volatile uint32 *)0xFFFF9D5C)
#define DTFSL053               (*(volatile uint32 *)0xFFFF9D60)
#define DTFST053               (*(volatile uint32 *)0xFFFF9D64)
#define DTFSS053               (*(volatile uint32 *)0xFFFF9D68)
#define DTFSC053               (*(volatile uint32 *)0xFFFF9D6C)
#define DTSA054                (*(volatile uint32 *)0xFFFF9D80)
#define DTDA054                (*(volatile uint32 *)0xFFFF9D84)
#define DTTC054                (*(volatile uint32 *)0xFFFF9D88)
#define DTTCT054               (*(volatile uint32 *)0xFFFF9D8C)
#define DTRSA054               (*(volatile uint32 *)0xFFFF9D90)
#define DTRDA054               (*(volatile uint32 *)0xFFFF9D94)
#define DTRTC054               (*(volatile uint32 *)0xFFFF9D98)
#define DTTCC054               (*(volatile uint32 *)0xFFFF9D9C)
#define DTFSL054               (*(volatile uint32 *)0xFFFF9DA0)
#define DTFST054               (*(volatile uint32 *)0xFFFF9DA4)
#define DTFSS054               (*(volatile uint32 *)0xFFFF9DA8)
#define DTFSC054               (*(volatile uint32 *)0xFFFF9DAC)
#define DTSA055                (*(volatile uint32 *)0xFFFF9DC0)
#define DTDA055                (*(volatile uint32 *)0xFFFF9DC4)
#define DTTC055                (*(volatile uint32 *)0xFFFF9DC8)
#define DTTCT055               (*(volatile uint32 *)0xFFFF9DCC)
#define DTRSA055               (*(volatile uint32 *)0xFFFF9DD0)
#define DTRDA055               (*(volatile uint32 *)0xFFFF9DD4)
#define DTRTC055               (*(volatile uint32 *)0xFFFF9DD8)
#define DTTCC055               (*(volatile uint32 *)0xFFFF9DDC)
#define DTFSL055               (*(volatile uint32 *)0xFFFF9DE0)
#define DTFST055               (*(volatile uint32 *)0xFFFF9DE4)
#define DTFSS055               (*(volatile uint32 *)0xFFFF9DE8)
#define DTFSC055               (*(volatile uint32 *)0xFFFF9DEC)
#define DTSA056                (*(volatile uint32 *)0xFFFF9E00)
#define DTDA056                (*(volatile uint32 *)0xFFFF9E04)
#define DTTC056                (*(volatile uint32 *)0xFFFF9E08)
#define DTTCT056               (*(volatile uint32 *)0xFFFF9E0C)
#define DTRSA056               (*(volatile uint32 *)0xFFFF9E10)
#define DTRDA056               (*(volatile uint32 *)0xFFFF9E14)
#define DTRTC056               (*(volatile uint32 *)0xFFFF9E18)
#define DTTCC056               (*(volatile uint32 *)0xFFFF9E1C)
#define DTFSL056               (*(volatile uint32 *)0xFFFF9E20)
#define DTFST056               (*(volatile uint32 *)0xFFFF9E24)
#define DTFSS056               (*(volatile uint32 *)0xFFFF9E28)
#define DTFSC056               (*(volatile uint32 *)0xFFFF9E2C)
#define DTSA057                (*(volatile uint32 *)0xFFFF9E40)
#define DTDA057                (*(volatile uint32 *)0xFFFF9E44)
#define DTTC057                (*(volatile uint32 *)0xFFFF9E48)
#define DTTCT057               (*(volatile uint32 *)0xFFFF9E4C)
#define DTRSA057               (*(volatile uint32 *)0xFFFF9E50)
#define DTRDA057               (*(volatile uint32 *)0xFFFF9E54)
#define DTRTC057               (*(volatile uint32 *)0xFFFF9E58)
#define DTTCC057               (*(volatile uint32 *)0xFFFF9E5C)
#define DTFSL057               (*(volatile uint32 *)0xFFFF9E60)
#define DTFST057               (*(volatile uint32 *)0xFFFF9E64)
#define DTFSS057               (*(volatile uint32 *)0xFFFF9E68)
#define DTFSC057               (*(volatile uint32 *)0xFFFF9E6C)
#define DTSA058                (*(volatile uint32 *)0xFFFF9E80)
#define DTDA058                (*(volatile uint32 *)0xFFFF9E84)
#define DTTC058                (*(volatile uint32 *)0xFFFF9E88)
#define DTTCT058               (*(volatile uint32 *)0xFFFF9E8C)
#define DTRSA058               (*(volatile uint32 *)0xFFFF9E90)
#define DTRDA058               (*(volatile uint32 *)0xFFFF9E94)
#define DTRTC058               (*(volatile uint32 *)0xFFFF9E98)
#define DTTCC058               (*(volatile uint32 *)0xFFFF9E9C)
#define DTFSL058               (*(volatile uint32 *)0xFFFF9EA0)
#define DTFST058               (*(volatile uint32 *)0xFFFF9EA4)
#define DTFSS058               (*(volatile uint32 *)0xFFFF9EA8)
#define DTFSC058               (*(volatile uint32 *)0xFFFF9EAC)
#define DTSA059                (*(volatile uint32 *)0xFFFF9EC0)
#define DTDA059                (*(volatile uint32 *)0xFFFF9EC4)
#define DTTC059                (*(volatile uint32 *)0xFFFF9EC8)
#define DTTCT059               (*(volatile uint32 *)0xFFFF9ECC)
#define DTRSA059               (*(volatile uint32 *)0xFFFF9ED0)
#define DTRDA059               (*(volatile uint32 *)0xFFFF9ED4)
#define DTRTC059               (*(volatile uint32 *)0xFFFF9ED8)
#define DTTCC059               (*(volatile uint32 *)0xFFFF9EDC)
#define DTFSL059               (*(volatile uint32 *)0xFFFF9EE0)
#define DTFST059               (*(volatile uint32 *)0xFFFF9EE4)
#define DTFSS059               (*(volatile uint32 *)0xFFFF9EE8)
#define DTFSC059               (*(volatile uint32 *)0xFFFF9EEC)
#define DTSA060                (*(volatile uint32 *)0xFFFF9F00)
#define DTDA060                (*(volatile uint32 *)0xFFFF9F04)
#define DTTC060                (*(volatile uint32 *)0xFFFF9F08)
#define DTTCT060               (*(volatile uint32 *)0xFFFF9F0C)
#define DTRSA060               (*(volatile uint32 *)0xFFFF9F10)
#define DTRDA060               (*(volatile uint32 *)0xFFFF9F14)
#define DTRTC060               (*(volatile uint32 *)0xFFFF9F18)
#define DTTCC060               (*(volatile uint32 *)0xFFFF9F1C)
#define DTFSL060               (*(volatile uint32 *)0xFFFF9F20)
#define DTFST060               (*(volatile uint32 *)0xFFFF9F24)
#define DTFSS060               (*(volatile uint32 *)0xFFFF9F28)
#define DTFSC060               (*(volatile uint32 *)0xFFFF9F2C)
#define DTSA061                (*(volatile uint32 *)0xFFFF9F40)
#define DTDA061                (*(volatile uint32 *)0xFFFF9F44)
#define DTTC061                (*(volatile uint32 *)0xFFFF9F48)
#define DTTCT061               (*(volatile uint32 *)0xFFFF9F4C)
#define DTRSA061               (*(volatile uint32 *)0xFFFF9F50)
#define DTRDA061               (*(volatile uint32 *)0xFFFF9F54)
#define DTRTC061               (*(volatile uint32 *)0xFFFF9F58)
#define DTTCC061               (*(volatile uint32 *)0xFFFF9F5C)
#define DTFSL061               (*(volatile uint32 *)0xFFFF9F60)
#define DTFST061               (*(volatile uint32 *)0xFFFF9F64)
#define DTFSS061               (*(volatile uint32 *)0xFFFF9F68)
#define DTFSC061               (*(volatile uint32 *)0xFFFF9F6C)
#define DTSA062                (*(volatile uint32 *)0xFFFF9F80)
#define DTDA062                (*(volatile uint32 *)0xFFFF9F84)
#define DTTC062                (*(volatile uint32 *)0xFFFF9F88)
#define DTTCT062               (*(volatile uint32 *)0xFFFF9F8C)
#define DTRSA062               (*(volatile uint32 *)0xFFFF9F90)
#define DTRDA062               (*(volatile uint32 *)0xFFFF9F94)
#define DTRTC062               (*(volatile uint32 *)0xFFFF9F98)
#define DTTCC062               (*(volatile uint32 *)0xFFFF9F9C)
#define DTFSL062               (*(volatile uint32 *)0xFFFF9FA0)
#define DTFST062               (*(volatile uint32 *)0xFFFF9FA4)
#define DTFSS062               (*(volatile uint32 *)0xFFFF9FA8)
#define DTFSC062               (*(volatile uint32 *)0xFFFF9FAC)
#define DTSA063                (*(volatile uint32 *)0xFFFF9FC0)
#define DTDA063                (*(volatile uint32 *)0xFFFF9FC4)
#define DTTC063                (*(volatile uint32 *)0xFFFF9FC8)
#define DTTCT063               (*(volatile uint32 *)0xFFFF9FCC)
#define DTRSA063               (*(volatile uint32 *)0xFFFF9FD0)
#define DTRDA063               (*(volatile uint32 *)0xFFFF9FD4)
#define DTRTC063               (*(volatile uint32 *)0xFFFF9FD8)
#define DTTCC063               (*(volatile uint32 *)0xFFFF9FDC)
#define DTFSL063               (*(volatile uint32 *)0xFFFF9FE0)
#define DTFST063               (*(volatile uint32 *)0xFFFF9FE4)
#define DTFSS063               (*(volatile uint32 *)0xFFFF9FE8)
#define DTFSC063               (*(volatile uint32 *)0xFFFF9FEC)
#define DTSA064                (*(volatile uint32 *)0xFFFFA000)
#define DTDA064                (*(volatile uint32 *)0xFFFFA004)
#define DTTC064                (*(volatile uint32 *)0xFFFFA008)
#define DTTCT064               (*(volatile uint32 *)0xFFFFA00C)
#define DTRSA064               (*(volatile uint32 *)0xFFFFA010)
#define DTRDA064               (*(volatile uint32 *)0xFFFFA014)
#define DTRTC064               (*(volatile uint32 *)0xFFFFA018)
#define DTTCC064               (*(volatile uint32 *)0xFFFFA01C)
#define DTFSL064               (*(volatile uint32 *)0xFFFFA020)
#define DTFST064               (*(volatile uint32 *)0xFFFFA024)
#define DTFSS064               (*(volatile uint32 *)0xFFFFA028)
#define DTFSC064               (*(volatile uint32 *)0xFFFFA02C)
#define DTSA065                (*(volatile uint32 *)0xFFFFA040)
#define DTDA065                (*(volatile uint32 *)0xFFFFA044)
#define DTTC065                (*(volatile uint32 *)0xFFFFA048)
#define DTTCT065               (*(volatile uint32 *)0xFFFFA04C)
#define DTRSA065               (*(volatile uint32 *)0xFFFFA050)
#define DTRDA065               (*(volatile uint32 *)0xFFFFA054)
#define DTRTC065               (*(volatile uint32 *)0xFFFFA058)
#define DTTCC065               (*(volatile uint32 *)0xFFFFA05C)
#define DTFSL065               (*(volatile uint32 *)0xFFFFA060)
#define DTFST065               (*(volatile uint32 *)0xFFFFA064)
#define DTFSS065               (*(volatile uint32 *)0xFFFFA068)
#define DTFSC065               (*(volatile uint32 *)0xFFFFA06C)
#define DTSA066                (*(volatile uint32 *)0xFFFFA080)
#define DTDA066                (*(volatile uint32 *)0xFFFFA084)
#define DTTC066                (*(volatile uint32 *)0xFFFFA088)
#define DTTCT066               (*(volatile uint32 *)0xFFFFA08C)
#define DTRSA066               (*(volatile uint32 *)0xFFFFA090)
#define DTRDA066               (*(volatile uint32 *)0xFFFFA094)
#define DTRTC066               (*(volatile uint32 *)0xFFFFA098)
#define DTTCC066               (*(volatile uint32 *)0xFFFFA09C)
#define DTFSL066               (*(volatile uint32 *)0xFFFFA0A0)
#define DTFST066               (*(volatile uint32 *)0xFFFFA0A4)
#define DTFSS066               (*(volatile uint32 *)0xFFFFA0A8)
#define DTFSC066               (*(volatile uint32 *)0xFFFFA0AC)
#define DTSA067                (*(volatile uint32 *)0xFFFFA0C0)
#define DTDA067                (*(volatile uint32 *)0xFFFFA0C4)
#define DTTC067                (*(volatile uint32 *)0xFFFFA0C8)
#define DTTCT067               (*(volatile uint32 *)0xFFFFA0CC)
#define DTRSA067               (*(volatile uint32 *)0xFFFFA0D0)
#define DTRDA067               (*(volatile uint32 *)0xFFFFA0D4)
#define DTRTC067               (*(volatile uint32 *)0xFFFFA0D8)
#define DTTCC067               (*(volatile uint32 *)0xFFFFA0DC)
#define DTFSL067               (*(volatile uint32 *)0xFFFFA0E0)
#define DTFST067               (*(volatile uint32 *)0xFFFFA0E4)
#define DTFSS067               (*(volatile uint32 *)0xFFFFA0E8)
#define DTFSC067               (*(volatile uint32 *)0xFFFFA0EC)
#define DTSA068                (*(volatile uint32 *)0xFFFFA100)
#define DTDA068                (*(volatile uint32 *)0xFFFFA104)
#define DTTC068                (*(volatile uint32 *)0xFFFFA108)
#define DTTCT068               (*(volatile uint32 *)0xFFFFA10C)
#define DTRSA068               (*(volatile uint32 *)0xFFFFA110)
#define DTRDA068               (*(volatile uint32 *)0xFFFFA114)
#define DTRTC068               (*(volatile uint32 *)0xFFFFA118)
#define DTTCC068               (*(volatile uint32 *)0xFFFFA11C)
#define DTFSL068               (*(volatile uint32 *)0xFFFFA120)
#define DTFST068               (*(volatile uint32 *)0xFFFFA124)
#define DTFSS068               (*(volatile uint32 *)0xFFFFA128)
#define DTFSC068               (*(volatile uint32 *)0xFFFFA12C)
#define DTSA069                (*(volatile uint32 *)0xFFFFA140)
#define DTDA069                (*(volatile uint32 *)0xFFFFA144)
#define DTTC069                (*(volatile uint32 *)0xFFFFA148)
#define DTTCT069               (*(volatile uint32 *)0xFFFFA14C)
#define DTRSA069               (*(volatile uint32 *)0xFFFFA150)
#define DTRDA069               (*(volatile uint32 *)0xFFFFA154)
#define DTRTC069               (*(volatile uint32 *)0xFFFFA158)
#define DTTCC069               (*(volatile uint32 *)0xFFFFA15C)
#define DTFSL069               (*(volatile uint32 *)0xFFFFA160)
#define DTFST069               (*(volatile uint32 *)0xFFFFA164)
#define DTFSS069               (*(volatile uint32 *)0xFFFFA168)
#define DTFSC069               (*(volatile uint32 *)0xFFFFA16C)
#define DTSA070                (*(volatile uint32 *)0xFFFFA180)
#define DTDA070                (*(volatile uint32 *)0xFFFFA184)
#define DTTC070                (*(volatile uint32 *)0xFFFFA188)
#define DTTCT070               (*(volatile uint32 *)0xFFFFA18C)
#define DTRSA070               (*(volatile uint32 *)0xFFFFA190)
#define DTRDA070               (*(volatile uint32 *)0xFFFFA194)
#define DTRTC070               (*(volatile uint32 *)0xFFFFA198)
#define DTTCC070               (*(volatile uint32 *)0xFFFFA19C)
#define DTFSL070               (*(volatile uint32 *)0xFFFFA1A0)
#define DTFST070               (*(volatile uint32 *)0xFFFFA1A4)
#define DTFSS070               (*(volatile uint32 *)0xFFFFA1A8)
#define DTFSC070               (*(volatile uint32 *)0xFFFFA1AC)
#define DTSA071                (*(volatile uint32 *)0xFFFFA1C0)
#define DTDA071                (*(volatile uint32 *)0xFFFFA1C4)
#define DTTC071                (*(volatile uint32 *)0xFFFFA1C8)
#define DTTCT071               (*(volatile uint32 *)0xFFFFA1CC)
#define DTRSA071               (*(volatile uint32 *)0xFFFFA1D0)
#define DTRDA071               (*(volatile uint32 *)0xFFFFA1D4)
#define DTRTC071               (*(volatile uint32 *)0xFFFFA1D8)
#define DTTCC071               (*(volatile uint32 *)0xFFFFA1DC)
#define DTFSL071               (*(volatile uint32 *)0xFFFFA1E0)
#define DTFST071               (*(volatile uint32 *)0xFFFFA1E4)
#define DTFSS071               (*(volatile uint32 *)0xFFFFA1E8)
#define DTFSC071               (*(volatile uint32 *)0xFFFFA1EC)
#define DTSA072                (*(volatile uint32 *)0xFFFFA200)
#define DTDA072                (*(volatile uint32 *)0xFFFFA204)
#define DTTC072                (*(volatile uint32 *)0xFFFFA208)
#define DTTCT072               (*(volatile uint32 *)0xFFFFA20C)
#define DTRSA072               (*(volatile uint32 *)0xFFFFA210)
#define DTRDA072               (*(volatile uint32 *)0xFFFFA214)
#define DTRTC072               (*(volatile uint32 *)0xFFFFA218)
#define DTTCC072               (*(volatile uint32 *)0xFFFFA21C)
#define DTFSL072               (*(volatile uint32 *)0xFFFFA220)
#define DTFST072               (*(volatile uint32 *)0xFFFFA224)
#define DTFSS072               (*(volatile uint32 *)0xFFFFA228)
#define DTFSC072               (*(volatile uint32 *)0xFFFFA22C)
#define DTSA073                (*(volatile uint32 *)0xFFFFA240)
#define DTDA073                (*(volatile uint32 *)0xFFFFA244)
#define DTTC073                (*(volatile uint32 *)0xFFFFA248)
#define DTTCT073               (*(volatile uint32 *)0xFFFFA24C)
#define DTRSA073               (*(volatile uint32 *)0xFFFFA250)
#define DTRDA073               (*(volatile uint32 *)0xFFFFA254)
#define DTRTC073               (*(volatile uint32 *)0xFFFFA258)
#define DTTCC073               (*(volatile uint32 *)0xFFFFA25C)
#define DTFSL073               (*(volatile uint32 *)0xFFFFA260)
#define DTFST073               (*(volatile uint32 *)0xFFFFA264)
#define DTFSS073               (*(volatile uint32 *)0xFFFFA268)
#define DTFSC073               (*(volatile uint32 *)0xFFFFA26C)
#define DTSA074                (*(volatile uint32 *)0xFFFFA280)
#define DTDA074                (*(volatile uint32 *)0xFFFFA284)
#define DTTC074                (*(volatile uint32 *)0xFFFFA288)
#define DTTCT074               (*(volatile uint32 *)0xFFFFA28C)
#define DTRSA074               (*(volatile uint32 *)0xFFFFA290)
#define DTRDA074               (*(volatile uint32 *)0xFFFFA294)
#define DTRTC074               (*(volatile uint32 *)0xFFFFA298)
#define DTTCC074               (*(volatile uint32 *)0xFFFFA29C)
#define DTFSL074               (*(volatile uint32 *)0xFFFFA2A0)
#define DTFST074               (*(volatile uint32 *)0xFFFFA2A4)
#define DTFSS074               (*(volatile uint32 *)0xFFFFA2A8)
#define DTFSC074               (*(volatile uint32 *)0xFFFFA2AC)
#define DTSA075                (*(volatile uint32 *)0xFFFFA2C0)
#define DTDA075                (*(volatile uint32 *)0xFFFFA2C4)
#define DTTC075                (*(volatile uint32 *)0xFFFFA2C8)
#define DTTCT075               (*(volatile uint32 *)0xFFFFA2CC)
#define DTRSA075               (*(volatile uint32 *)0xFFFFA2D0)
#define DTRDA075               (*(volatile uint32 *)0xFFFFA2D4)
#define DTRTC075               (*(volatile uint32 *)0xFFFFA2D8)
#define DTTCC075               (*(volatile uint32 *)0xFFFFA2DC)
#define DTFSL075               (*(volatile uint32 *)0xFFFFA2E0)
#define DTFST075               (*(volatile uint32 *)0xFFFFA2E4)
#define DTFSS075               (*(volatile uint32 *)0xFFFFA2E8)
#define DTFSC075               (*(volatile uint32 *)0xFFFFA2EC)
#define DTSA076                (*(volatile uint32 *)0xFFFFA300)
#define DTDA076                (*(volatile uint32 *)0xFFFFA304)
#define DTTC076                (*(volatile uint32 *)0xFFFFA308)
#define DTTCT076               (*(volatile uint32 *)0xFFFFA30C)
#define DTRSA076               (*(volatile uint32 *)0xFFFFA310)
#define DTRDA076               (*(volatile uint32 *)0xFFFFA314)
#define DTRTC076               (*(volatile uint32 *)0xFFFFA318)
#define DTTCC076               (*(volatile uint32 *)0xFFFFA31C)
#define DTFSL076               (*(volatile uint32 *)0xFFFFA320)
#define DTFST076               (*(volatile uint32 *)0xFFFFA324)
#define DTFSS076               (*(volatile uint32 *)0xFFFFA328)
#define DTFSC076               (*(volatile uint32 *)0xFFFFA32C)
#define DTSA077                (*(volatile uint32 *)0xFFFFA340)
#define DTDA077                (*(volatile uint32 *)0xFFFFA344)
#define DTTC077                (*(volatile uint32 *)0xFFFFA348)
#define DTTCT077               (*(volatile uint32 *)0xFFFFA34C)
#define DTRSA077               (*(volatile uint32 *)0xFFFFA350)
#define DTRDA077               (*(volatile uint32 *)0xFFFFA354)
#define DTRTC077               (*(volatile uint32 *)0xFFFFA358)
#define DTTCC077               (*(volatile uint32 *)0xFFFFA35C)
#define DTFSL077               (*(volatile uint32 *)0xFFFFA360)
#define DTFST077               (*(volatile uint32 *)0xFFFFA364)
#define DTFSS077               (*(volatile uint32 *)0xFFFFA368)
#define DTFSC077               (*(volatile uint32 *)0xFFFFA36C)
#define DTSA078                (*(volatile uint32 *)0xFFFFA380)
#define DTDA078                (*(volatile uint32 *)0xFFFFA384)
#define DTTC078                (*(volatile uint32 *)0xFFFFA388)
#define DTTCT078               (*(volatile uint32 *)0xFFFFA38C)
#define DTRSA078               (*(volatile uint32 *)0xFFFFA390)
#define DTRDA078               (*(volatile uint32 *)0xFFFFA394)
#define DTRTC078               (*(volatile uint32 *)0xFFFFA398)
#define DTTCC078               (*(volatile uint32 *)0xFFFFA39C)
#define DTFSL078               (*(volatile uint32 *)0xFFFFA3A0)
#define DTFST078               (*(volatile uint32 *)0xFFFFA3A4)
#define DTFSS078               (*(volatile uint32 *)0xFFFFA3A8)
#define DTFSC078               (*(volatile uint32 *)0xFFFFA3AC)
#define DTSA079                (*(volatile uint32 *)0xFFFFA3C0)
#define DTDA079                (*(volatile uint32 *)0xFFFFA3C4)
#define DTTC079                (*(volatile uint32 *)0xFFFFA3C8)
#define DTTCT079               (*(volatile uint32 *)0xFFFFA3CC)
#define DTRSA079               (*(volatile uint32 *)0xFFFFA3D0)
#define DTRDA079               (*(volatile uint32 *)0xFFFFA3D4)
#define DTRTC079               (*(volatile uint32 *)0xFFFFA3D8)
#define DTTCC079               (*(volatile uint32 *)0xFFFFA3DC)
#define DTFSL079               (*(volatile uint32 *)0xFFFFA3E0)
#define DTFST079               (*(volatile uint32 *)0xFFFFA3E4)
#define DTFSS079               (*(volatile uint32 *)0xFFFFA3E8)
#define DTFSC079               (*(volatile uint32 *)0xFFFFA3EC)
#define DTSA080                (*(volatile uint32 *)0xFFFFA400)
#define DTDA080                (*(volatile uint32 *)0xFFFFA404)
#define DTTC080                (*(volatile uint32 *)0xFFFFA408)
#define DTTCT080               (*(volatile uint32 *)0xFFFFA40C)
#define DTRSA080               (*(volatile uint32 *)0xFFFFA410)
#define DTRDA080               (*(volatile uint32 *)0xFFFFA414)
#define DTRTC080               (*(volatile uint32 *)0xFFFFA418)
#define DTTCC080               (*(volatile uint32 *)0xFFFFA41C)
#define DTFSL080               (*(volatile uint32 *)0xFFFFA420)
#define DTFST080               (*(volatile uint32 *)0xFFFFA424)
#define DTFSS080               (*(volatile uint32 *)0xFFFFA428)
#define DTFSC080               (*(volatile uint32 *)0xFFFFA42C)
#define DTSA081                (*(volatile uint32 *)0xFFFFA440)
#define DTDA081                (*(volatile uint32 *)0xFFFFA444)
#define DTTC081                (*(volatile uint32 *)0xFFFFA448)
#define DTTCT081               (*(volatile uint32 *)0xFFFFA44C)
#define DTRSA081               (*(volatile uint32 *)0xFFFFA450)
#define DTRDA081               (*(volatile uint32 *)0xFFFFA454)
#define DTRTC081               (*(volatile uint32 *)0xFFFFA458)
#define DTTCC081               (*(volatile uint32 *)0xFFFFA45C)
#define DTFSL081               (*(volatile uint32 *)0xFFFFA460)
#define DTFST081               (*(volatile uint32 *)0xFFFFA464)
#define DTFSS081               (*(volatile uint32 *)0xFFFFA468)
#define DTFSC081               (*(volatile uint32 *)0xFFFFA46C)
#define DTSA082                (*(volatile uint32 *)0xFFFFA480)
#define DTDA082                (*(volatile uint32 *)0xFFFFA484)
#define DTTC082                (*(volatile uint32 *)0xFFFFA488)
#define DTTCT082               (*(volatile uint32 *)0xFFFFA48C)
#define DTRSA082               (*(volatile uint32 *)0xFFFFA490)
#define DTRDA082               (*(volatile uint32 *)0xFFFFA494)
#define DTRTC082               (*(volatile uint32 *)0xFFFFA498)
#define DTTCC082               (*(volatile uint32 *)0xFFFFA49C)
#define DTFSL082               (*(volatile uint32 *)0xFFFFA4A0)
#define DTFST082               (*(volatile uint32 *)0xFFFFA4A4)
#define DTFSS082               (*(volatile uint32 *)0xFFFFA4A8)
#define DTFSC082               (*(volatile uint32 *)0xFFFFA4AC)
#define DTSA083                (*(volatile uint32 *)0xFFFFA4C0)
#define DTDA083                (*(volatile uint32 *)0xFFFFA4C4)
#define DTTC083                (*(volatile uint32 *)0xFFFFA4C8)
#define DTTCT083               (*(volatile uint32 *)0xFFFFA4CC)
#define DTRSA083               (*(volatile uint32 *)0xFFFFA4D0)
#define DTRDA083               (*(volatile uint32 *)0xFFFFA4D4)
#define DTRTC083               (*(volatile uint32 *)0xFFFFA4D8)
#define DTTCC083               (*(volatile uint32 *)0xFFFFA4DC)
#define DTFSL083               (*(volatile uint32 *)0xFFFFA4E0)
#define DTFST083               (*(volatile uint32 *)0xFFFFA4E4)
#define DTFSS083               (*(volatile uint32 *)0xFFFFA4E8)
#define DTFSC083               (*(volatile uint32 *)0xFFFFA4EC)
#define DTSA084                (*(volatile uint32 *)0xFFFFA500)
#define DTDA084                (*(volatile uint32 *)0xFFFFA504)
#define DTTC084                (*(volatile uint32 *)0xFFFFA508)
#define DTTCT084               (*(volatile uint32 *)0xFFFFA50C)
#define DTRSA084               (*(volatile uint32 *)0xFFFFA510)
#define DTRDA084               (*(volatile uint32 *)0xFFFFA514)
#define DTRTC084               (*(volatile uint32 *)0xFFFFA518)
#define DTTCC084               (*(volatile uint32 *)0xFFFFA51C)
#define DTFSL084               (*(volatile uint32 *)0xFFFFA520)
#define DTFST084               (*(volatile uint32 *)0xFFFFA524)
#define DTFSS084               (*(volatile uint32 *)0xFFFFA528)
#define DTFSC084               (*(volatile uint32 *)0xFFFFA52C)
#define DTSA085                (*(volatile uint32 *)0xFFFFA540)
#define DTDA085                (*(volatile uint32 *)0xFFFFA544)
#define DTTC085                (*(volatile uint32 *)0xFFFFA548)
#define DTTCT085               (*(volatile uint32 *)0xFFFFA54C)
#define DTRSA085               (*(volatile uint32 *)0xFFFFA550)
#define DTRDA085               (*(volatile uint32 *)0xFFFFA554)
#define DTRTC085               (*(volatile uint32 *)0xFFFFA558)
#define DTTCC085               (*(volatile uint32 *)0xFFFFA55C)
#define DTFSL085               (*(volatile uint32 *)0xFFFFA560)
#define DTFST085               (*(volatile uint32 *)0xFFFFA564)
#define DTFSS085               (*(volatile uint32 *)0xFFFFA568)
#define DTFSC085               (*(volatile uint32 *)0xFFFFA56C)
#define DTSA086                (*(volatile uint32 *)0xFFFFA580)
#define DTDA086                (*(volatile uint32 *)0xFFFFA584)
#define DTTC086                (*(volatile uint32 *)0xFFFFA588)
#define DTTCT086               (*(volatile uint32 *)0xFFFFA58C)
#define DTRSA086               (*(volatile uint32 *)0xFFFFA590)
#define DTRDA086               (*(volatile uint32 *)0xFFFFA594)
#define DTRTC086               (*(volatile uint32 *)0xFFFFA598)
#define DTTCC086               (*(volatile uint32 *)0xFFFFA59C)
#define DTFSL086               (*(volatile uint32 *)0xFFFFA5A0)
#define DTFST086               (*(volatile uint32 *)0xFFFFA5A4)
#define DTFSS086               (*(volatile uint32 *)0xFFFFA5A8)
#define DTFSC086               (*(volatile uint32 *)0xFFFFA5AC)
#define DTSA087                (*(volatile uint32 *)0xFFFFA5C0)
#define DTDA087                (*(volatile uint32 *)0xFFFFA5C4)
#define DTTC087                (*(volatile uint32 *)0xFFFFA5C8)
#define DTTCT087               (*(volatile uint32 *)0xFFFFA5CC)
#define DTRSA087               (*(volatile uint32 *)0xFFFFA5D0)
#define DTRDA087               (*(volatile uint32 *)0xFFFFA5D4)
#define DTRTC087               (*(volatile uint32 *)0xFFFFA5D8)
#define DTTCC087               (*(volatile uint32 *)0xFFFFA5DC)
#define DTFSL087               (*(volatile uint32 *)0xFFFFA5E0)
#define DTFST087               (*(volatile uint32 *)0xFFFFA5E4)
#define DTFSS087               (*(volatile uint32 *)0xFFFFA5E8)
#define DTFSC087               (*(volatile uint32 *)0xFFFFA5EC)
#define DTSA088                (*(volatile uint32 *)0xFFFFA600)
#define DTDA088                (*(volatile uint32 *)0xFFFFA604)
#define DTTC088                (*(volatile uint32 *)0xFFFFA608)
#define DTTCT088               (*(volatile uint32 *)0xFFFFA60C)
#define DTRSA088               (*(volatile uint32 *)0xFFFFA610)
#define DTRDA088               (*(volatile uint32 *)0xFFFFA614)
#define DTRTC088               (*(volatile uint32 *)0xFFFFA618)
#define DTTCC088               (*(volatile uint32 *)0xFFFFA61C)
#define DTFSL088               (*(volatile uint32 *)0xFFFFA620)
#define DTFST088               (*(volatile uint32 *)0xFFFFA624)
#define DTFSS088               (*(volatile uint32 *)0xFFFFA628)
#define DTFSC088               (*(volatile uint32 *)0xFFFFA62C)
#define DTSA089                (*(volatile uint32 *)0xFFFFA640)
#define DTDA089                (*(volatile uint32 *)0xFFFFA644)
#define DTTC089                (*(volatile uint32 *)0xFFFFA648)
#define DTTCT089               (*(volatile uint32 *)0xFFFFA64C)
#define DTRSA089               (*(volatile uint32 *)0xFFFFA650)
#define DTRDA089               (*(volatile uint32 *)0xFFFFA654)
#define DTRTC089               (*(volatile uint32 *)0xFFFFA658)
#define DTTCC089               (*(volatile uint32 *)0xFFFFA65C)
#define DTFSL089               (*(volatile uint32 *)0xFFFFA660)
#define DTFST089               (*(volatile uint32 *)0xFFFFA664)
#define DTFSS089               (*(volatile uint32 *)0xFFFFA668)
#define DTFSC089               (*(volatile uint32 *)0xFFFFA66C)
#define DTSA090                (*(volatile uint32 *)0xFFFFA680)
#define DTDA090                (*(volatile uint32 *)0xFFFFA684)
#define DTTC090                (*(volatile uint32 *)0xFFFFA688)
#define DTTCT090               (*(volatile uint32 *)0xFFFFA68C)
#define DTRSA090               (*(volatile uint32 *)0xFFFFA690)
#define DTRDA090               (*(volatile uint32 *)0xFFFFA694)
#define DTRTC090               (*(volatile uint32 *)0xFFFFA698)
#define DTTCC090               (*(volatile uint32 *)0xFFFFA69C)
#define DTFSL090               (*(volatile uint32 *)0xFFFFA6A0)
#define DTFST090               (*(volatile uint32 *)0xFFFFA6A4)
#define DTFSS090               (*(volatile uint32 *)0xFFFFA6A8)
#define DTFSC090               (*(volatile uint32 *)0xFFFFA6AC)
#define DTSA091                (*(volatile uint32 *)0xFFFFA6C0)
#define DTDA091                (*(volatile uint32 *)0xFFFFA6C4)
#define DTTC091                (*(volatile uint32 *)0xFFFFA6C8)
#define DTTCT091               (*(volatile uint32 *)0xFFFFA6CC)
#define DTRSA091               (*(volatile uint32 *)0xFFFFA6D0)
#define DTRDA091               (*(volatile uint32 *)0xFFFFA6D4)
#define DTRTC091               (*(volatile uint32 *)0xFFFFA6D8)
#define DTTCC091               (*(volatile uint32 *)0xFFFFA6DC)
#define DTFSL091               (*(volatile uint32 *)0xFFFFA6E0)
#define DTFST091               (*(volatile uint32 *)0xFFFFA6E4)
#define DTFSS091               (*(volatile uint32 *)0xFFFFA6E8)
#define DTFSC091               (*(volatile uint32 *)0xFFFFA6EC)
#define DTSA092                (*(volatile uint32 *)0xFFFFA700)
#define DTDA092                (*(volatile uint32 *)0xFFFFA704)
#define DTTC092                (*(volatile uint32 *)0xFFFFA708)
#define DTTCT092               (*(volatile uint32 *)0xFFFFA70C)
#define DTRSA092               (*(volatile uint32 *)0xFFFFA710)
#define DTRDA092               (*(volatile uint32 *)0xFFFFA714)
#define DTRTC092               (*(volatile uint32 *)0xFFFFA718)
#define DTTCC092               (*(volatile uint32 *)0xFFFFA71C)
#define DTFSL092               (*(volatile uint32 *)0xFFFFA720)
#define DTFST092               (*(volatile uint32 *)0xFFFFA724)
#define DTFSS092               (*(volatile uint32 *)0xFFFFA728)
#define DTFSC092               (*(volatile uint32 *)0xFFFFA72C)
#define DTSA093                (*(volatile uint32 *)0xFFFFA740)
#define DTDA093                (*(volatile uint32 *)0xFFFFA744)
#define DTTC093                (*(volatile uint32 *)0xFFFFA748)
#define DTTCT093               (*(volatile uint32 *)0xFFFFA74C)
#define DTRSA093               (*(volatile uint32 *)0xFFFFA750)
#define DTRDA093               (*(volatile uint32 *)0xFFFFA754)
#define DTRTC093               (*(volatile uint32 *)0xFFFFA758)
#define DTTCC093               (*(volatile uint32 *)0xFFFFA75C)
#define DTFSL093               (*(volatile uint32 *)0xFFFFA760)
#define DTFST093               (*(volatile uint32 *)0xFFFFA764)
#define DTFSS093               (*(volatile uint32 *)0xFFFFA768)
#define DTFSC093               (*(volatile uint32 *)0xFFFFA76C)
#define DTSA094                (*(volatile uint32 *)0xFFFFA780)
#define DTDA094                (*(volatile uint32 *)0xFFFFA784)
#define DTTC094                (*(volatile uint32 *)0xFFFFA788)
#define DTTCT094               (*(volatile uint32 *)0xFFFFA78C)
#define DTRSA094               (*(volatile uint32 *)0xFFFFA790)
#define DTRDA094               (*(volatile uint32 *)0xFFFFA794)
#define DTRTC094               (*(volatile uint32 *)0xFFFFA798)
#define DTTCC094               (*(volatile uint32 *)0xFFFFA79C)
#define DTFSL094               (*(volatile uint32 *)0xFFFFA7A0)
#define DTFST094               (*(volatile uint32 *)0xFFFFA7A4)
#define DTFSS094               (*(volatile uint32 *)0xFFFFA7A8)
#define DTFSC094               (*(volatile uint32 *)0xFFFFA7AC)
#define DTSA095                (*(volatile uint32 *)0xFFFFA7C0)
#define DTDA095                (*(volatile uint32 *)0xFFFFA7C4)
#define DTTC095                (*(volatile uint32 *)0xFFFFA7C8)
#define DTTCT095               (*(volatile uint32 *)0xFFFFA7CC)
#define DTRSA095               (*(volatile uint32 *)0xFFFFA7D0)
#define DTRDA095               (*(volatile uint32 *)0xFFFFA7D4)
#define DTRTC095               (*(volatile uint32 *)0xFFFFA7D8)
#define DTTCC095               (*(volatile uint32 *)0xFFFFA7DC)
#define DTFSL095               (*(volatile uint32 *)0xFFFFA7E0)
#define DTFST095               (*(volatile uint32 *)0xFFFFA7E4)
#define DTFSS095               (*(volatile uint32 *)0xFFFFA7E8)
#define DTFSC095               (*(volatile uint32 *)0xFFFFA7EC)
#define DTSA096                (*(volatile uint32 *)0xFFFFA800)
#define DTDA096                (*(volatile uint32 *)0xFFFFA804)
#define DTTC096                (*(volatile uint32 *)0xFFFFA808)
#define DTTCT096               (*(volatile uint32 *)0xFFFFA80C)
#define DTRSA096               (*(volatile uint32 *)0xFFFFA810)
#define DTRDA096               (*(volatile uint32 *)0xFFFFA814)
#define DTRTC096               (*(volatile uint32 *)0xFFFFA818)
#define DTTCC096               (*(volatile uint32 *)0xFFFFA81C)
#define DTFSL096               (*(volatile uint32 *)0xFFFFA820)
#define DTFST096               (*(volatile uint32 *)0xFFFFA824)
#define DTFSS096               (*(volatile uint32 *)0xFFFFA828)
#define DTFSC096               (*(volatile uint32 *)0xFFFFA82C)
#define DTSA097                (*(volatile uint32 *)0xFFFFA840)
#define DTDA097                (*(volatile uint32 *)0xFFFFA844)
#define DTTC097                (*(volatile uint32 *)0xFFFFA848)
#define DTTCT097               (*(volatile uint32 *)0xFFFFA84C)
#define DTRSA097               (*(volatile uint32 *)0xFFFFA850)
#define DTRDA097               (*(volatile uint32 *)0xFFFFA854)
#define DTRTC097               (*(volatile uint32 *)0xFFFFA858)
#define DTTCC097               (*(volatile uint32 *)0xFFFFA85C)
#define DTFSL097               (*(volatile uint32 *)0xFFFFA860)
#define DTFST097               (*(volatile uint32 *)0xFFFFA864)
#define DTFSS097               (*(volatile uint32 *)0xFFFFA868)
#define DTFSC097               (*(volatile uint32 *)0xFFFFA86C)
#define DTSA098                (*(volatile uint32 *)0xFFFFA880)
#define DTDA098                (*(volatile uint32 *)0xFFFFA884)
#define DTTC098                (*(volatile uint32 *)0xFFFFA888)
#define DTTCT098               (*(volatile uint32 *)0xFFFFA88C)
#define DTRSA098               (*(volatile uint32 *)0xFFFFA890)
#define DTRDA098               (*(volatile uint32 *)0xFFFFA894)
#define DTRTC098               (*(volatile uint32 *)0xFFFFA898)
#define DTTCC098               (*(volatile uint32 *)0xFFFFA89C)
#define DTFSL098               (*(volatile uint32 *)0xFFFFA8A0)
#define DTFST098               (*(volatile uint32 *)0xFFFFA8A4)
#define DTFSS098               (*(volatile uint32 *)0xFFFFA8A8)
#define DTFSC098               (*(volatile uint32 *)0xFFFFA8AC)
#define DTSA099                (*(volatile uint32 *)0xFFFFA8C0)
#define DTDA099                (*(volatile uint32 *)0xFFFFA8C4)
#define DTTC099                (*(volatile uint32 *)0xFFFFA8C8)
#define DTTCT099               (*(volatile uint32 *)0xFFFFA8CC)
#define DTRSA099               (*(volatile uint32 *)0xFFFFA8D0)
#define DTRDA099               (*(volatile uint32 *)0xFFFFA8D4)
#define DTRTC099               (*(volatile uint32 *)0xFFFFA8D8)
#define DTTCC099               (*(volatile uint32 *)0xFFFFA8DC)
#define DTFSL099               (*(volatile uint32 *)0xFFFFA8E0)
#define DTFST099               (*(volatile uint32 *)0xFFFFA8E4)
#define DTFSS099               (*(volatile uint32 *)0xFFFFA8E8)
#define DTFSC099               (*(volatile uint32 *)0xFFFFA8EC)
#define DTSA100                (*(volatile uint32 *)0xFFFFA900)
#define DTDA100                (*(volatile uint32 *)0xFFFFA904)
#define DTTC100                (*(volatile uint32 *)0xFFFFA908)
#define DTTCT100               (*(volatile uint32 *)0xFFFFA90C)
#define DTRSA100               (*(volatile uint32 *)0xFFFFA910)
#define DTRDA100               (*(volatile uint32 *)0xFFFFA914)
#define DTRTC100               (*(volatile uint32 *)0xFFFFA918)
#define DTTCC100               (*(volatile uint32 *)0xFFFFA91C)
#define DTFSL100               (*(volatile uint32 *)0xFFFFA920)
#define DTFST100               (*(volatile uint32 *)0xFFFFA924)
#define DTFSS100               (*(volatile uint32 *)0xFFFFA928)
#define DTFSC100               (*(volatile uint32 *)0xFFFFA92C)
#define DTSA101                (*(volatile uint32 *)0xFFFFA940)
#define DTDA101                (*(volatile uint32 *)0xFFFFA944)
#define DTTC101                (*(volatile uint32 *)0xFFFFA948)
#define DTTCT101               (*(volatile uint32 *)0xFFFFA94C)
#define DTRSA101               (*(volatile uint32 *)0xFFFFA950)
#define DTRDA101               (*(volatile uint32 *)0xFFFFA954)
#define DTRTC101               (*(volatile uint32 *)0xFFFFA958)
#define DTTCC101               (*(volatile uint32 *)0xFFFFA95C)
#define DTFSL101               (*(volatile uint32 *)0xFFFFA960)
#define DTFST101               (*(volatile uint32 *)0xFFFFA964)
#define DTFSS101               (*(volatile uint32 *)0xFFFFA968)
#define DTFSC101               (*(volatile uint32 *)0xFFFFA96C)
#define DTSA102                (*(volatile uint32 *)0xFFFFA980)
#define DTDA102                (*(volatile uint32 *)0xFFFFA984)
#define DTTC102                (*(volatile uint32 *)0xFFFFA988)
#define DTTCT102               (*(volatile uint32 *)0xFFFFA98C)
#define DTRSA102               (*(volatile uint32 *)0xFFFFA990)
#define DTRDA102               (*(volatile uint32 *)0xFFFFA994)
#define DTRTC102               (*(volatile uint32 *)0xFFFFA998)
#define DTTCC102               (*(volatile uint32 *)0xFFFFA99C)
#define DTFSL102               (*(volatile uint32 *)0xFFFFA9A0)
#define DTFST102               (*(volatile uint32 *)0xFFFFA9A4)
#define DTFSS102               (*(volatile uint32 *)0xFFFFA9A8)
#define DTFSC102               (*(volatile uint32 *)0xFFFFA9AC)
#define DTSA103                (*(volatile uint32 *)0xFFFFA9C0)
#define DTDA103                (*(volatile uint32 *)0xFFFFA9C4)
#define DTTC103                (*(volatile uint32 *)0xFFFFA9C8)
#define DTTCT103               (*(volatile uint32 *)0xFFFFA9CC)
#define DTRSA103               (*(volatile uint32 *)0xFFFFA9D0)
#define DTRDA103               (*(volatile uint32 *)0xFFFFA9D4)
#define DTRTC103               (*(volatile uint32 *)0xFFFFA9D8)
#define DTTCC103               (*(volatile uint32 *)0xFFFFA9DC)
#define DTFSL103               (*(volatile uint32 *)0xFFFFA9E0)
#define DTFST103               (*(volatile uint32 *)0xFFFFA9E4)
#define DTFSS103               (*(volatile uint32 *)0xFFFFA9E8)
#define DTFSC103               (*(volatile uint32 *)0xFFFFA9EC)
#define DTSA104                (*(volatile uint32 *)0xFFFFAA00)
#define DTDA104                (*(volatile uint32 *)0xFFFFAA04)
#define DTTC104                (*(volatile uint32 *)0xFFFFAA08)
#define DTTCT104               (*(volatile uint32 *)0xFFFFAA0C)
#define DTRSA104               (*(volatile uint32 *)0xFFFFAA10)
#define DTRDA104               (*(volatile uint32 *)0xFFFFAA14)
#define DTRTC104               (*(volatile uint32 *)0xFFFFAA18)
#define DTTCC104               (*(volatile uint32 *)0xFFFFAA1C)
#define DTFSL104               (*(volatile uint32 *)0xFFFFAA20)
#define DTFST104               (*(volatile uint32 *)0xFFFFAA24)
#define DTFSS104               (*(volatile uint32 *)0xFFFFAA28)
#define DTFSC104               (*(volatile uint32 *)0xFFFFAA2C)
#define DTSA105                (*(volatile uint32 *)0xFFFFAA40)
#define DTDA105                (*(volatile uint32 *)0xFFFFAA44)
#define DTTC105                (*(volatile uint32 *)0xFFFFAA48)
#define DTTCT105               (*(volatile uint32 *)0xFFFFAA4C)
#define DTRSA105               (*(volatile uint32 *)0xFFFFAA50)
#define DTRDA105               (*(volatile uint32 *)0xFFFFAA54)
#define DTRTC105               (*(volatile uint32 *)0xFFFFAA58)
#define DTTCC105               (*(volatile uint32 *)0xFFFFAA5C)
#define DTFSL105               (*(volatile uint32 *)0xFFFFAA60)
#define DTFST105               (*(volatile uint32 *)0xFFFFAA64)
#define DTFSS105               (*(volatile uint32 *)0xFFFFAA68)
#define DTFSC105               (*(volatile uint32 *)0xFFFFAA6C)
#define DTSA106                (*(volatile uint32 *)0xFFFFAA80)
#define DTDA106                (*(volatile uint32 *)0xFFFFAA84)
#define DTTC106                (*(volatile uint32 *)0xFFFFAA88)
#define DTTCT106               (*(volatile uint32 *)0xFFFFAA8C)
#define DTRSA106               (*(volatile uint32 *)0xFFFFAA90)
#define DTRDA106               (*(volatile uint32 *)0xFFFFAA94)
#define DTRTC106               (*(volatile uint32 *)0xFFFFAA98)
#define DTTCC106               (*(volatile uint32 *)0xFFFFAA9C)
#define DTFSL106               (*(volatile uint32 *)0xFFFFAAA0)
#define DTFST106               (*(volatile uint32 *)0xFFFFAAA4)
#define DTFSS106               (*(volatile uint32 *)0xFFFFAAA8)
#define DTFSC106               (*(volatile uint32 *)0xFFFFAAAC)
#define DTSA107                (*(volatile uint32 *)0xFFFFAAC0)
#define DTDA107                (*(volatile uint32 *)0xFFFFAAC4)
#define DTTC107                (*(volatile uint32 *)0xFFFFAAC8)
#define DTTCT107               (*(volatile uint32 *)0xFFFFAACC)
#define DTRSA107               (*(volatile uint32 *)0xFFFFAAD0)
#define DTRDA107               (*(volatile uint32 *)0xFFFFAAD4)
#define DTRTC107               (*(volatile uint32 *)0xFFFFAAD8)
#define DTTCC107               (*(volatile uint32 *)0xFFFFAADC)
#define DTFSL107               (*(volatile uint32 *)0xFFFFAAE0)
#define DTFST107               (*(volatile uint32 *)0xFFFFAAE4)
#define DTFSS107               (*(volatile uint32 *)0xFFFFAAE8)
#define DTFSC107               (*(volatile uint32 *)0xFFFFAAEC)
#define DTSA108                (*(volatile uint32 *)0xFFFFAB00)
#define DTDA108                (*(volatile uint32 *)0xFFFFAB04)
#define DTTC108                (*(volatile uint32 *)0xFFFFAB08)
#define DTTCT108               (*(volatile uint32 *)0xFFFFAB0C)
#define DTRSA108               (*(volatile uint32 *)0xFFFFAB10)
#define DTRDA108               (*(volatile uint32 *)0xFFFFAB14)
#define DTRTC108               (*(volatile uint32 *)0xFFFFAB18)
#define DTTCC108               (*(volatile uint32 *)0xFFFFAB1C)
#define DTFSL108               (*(volatile uint32 *)0xFFFFAB20)
#define DTFST108               (*(volatile uint32 *)0xFFFFAB24)
#define DTFSS108               (*(volatile uint32 *)0xFFFFAB28)
#define DTFSC108               (*(volatile uint32 *)0xFFFFAB2C)
#define DTSA109                (*(volatile uint32 *)0xFFFFAB40)
#define DTDA109                (*(volatile uint32 *)0xFFFFAB44)
#define DTTC109                (*(volatile uint32 *)0xFFFFAB48)
#define DTTCT109               (*(volatile uint32 *)0xFFFFAB4C)
#define DTRSA109               (*(volatile uint32 *)0xFFFFAB50)
#define DTRDA109               (*(volatile uint32 *)0xFFFFAB54)
#define DTRTC109               (*(volatile uint32 *)0xFFFFAB58)
#define DTTCC109               (*(volatile uint32 *)0xFFFFAB5C)
#define DTFSL109               (*(volatile uint32 *)0xFFFFAB60)
#define DTFST109               (*(volatile uint32 *)0xFFFFAB64)
#define DTFSS109               (*(volatile uint32 *)0xFFFFAB68)
#define DTFSC109               (*(volatile uint32 *)0xFFFFAB6C)
#define DTSA110                (*(volatile uint32 *)0xFFFFAB80)
#define DTDA110                (*(volatile uint32 *)0xFFFFAB84)
#define DTTC110                (*(volatile uint32 *)0xFFFFAB88)
#define DTTCT110               (*(volatile uint32 *)0xFFFFAB8C)
#define DTRSA110               (*(volatile uint32 *)0xFFFFAB90)
#define DTRDA110               (*(volatile uint32 *)0xFFFFAB94)
#define DTRTC110               (*(volatile uint32 *)0xFFFFAB98)
#define DTTCC110               (*(volatile uint32 *)0xFFFFAB9C)
#define DTFSL110               (*(volatile uint32 *)0xFFFFABA0)
#define DTFST110               (*(volatile uint32 *)0xFFFFABA4)
#define DTFSS110               (*(volatile uint32 *)0xFFFFABA8)
#define DTFSC110               (*(volatile uint32 *)0xFFFFABAC)
#define DTSA111                (*(volatile uint32 *)0xFFFFABC0)
#define DTDA111                (*(volatile uint32 *)0xFFFFABC4)
#define DTTC111                (*(volatile uint32 *)0xFFFFABC8)
#define DTTCT111               (*(volatile uint32 *)0xFFFFABCC)
#define DTRSA111               (*(volatile uint32 *)0xFFFFABD0)
#define DTRDA111               (*(volatile uint32 *)0xFFFFABD4)
#define DTRTC111               (*(volatile uint32 *)0xFFFFABD8)
#define DTTCC111               (*(volatile uint32 *)0xFFFFABDC)
#define DTFSL111               (*(volatile uint32 *)0xFFFFABE0)
#define DTFST111               (*(volatile uint32 *)0xFFFFABE4)
#define DTFSS111               (*(volatile uint32 *)0xFFFFABE8)
#define DTFSC111               (*(volatile uint32 *)0xFFFFABEC)
#define DTSA112                (*(volatile uint32 *)0xFFFFAC00)
#define DTDA112                (*(volatile uint32 *)0xFFFFAC04)
#define DTTC112                (*(volatile uint32 *)0xFFFFAC08)
#define DTTCT112               (*(volatile uint32 *)0xFFFFAC0C)
#define DTRSA112               (*(volatile uint32 *)0xFFFFAC10)
#define DTRDA112               (*(volatile uint32 *)0xFFFFAC14)
#define DTRTC112               (*(volatile uint32 *)0xFFFFAC18)
#define DTTCC112               (*(volatile uint32 *)0xFFFFAC1C)
#define DTFSL112               (*(volatile uint32 *)0xFFFFAC20)
#define DTFST112               (*(volatile uint32 *)0xFFFFAC24)
#define DTFSS112               (*(volatile uint32 *)0xFFFFAC28)
#define DTFSC112               (*(volatile uint32 *)0xFFFFAC2C)
#define DTSA113                (*(volatile uint32 *)0xFFFFAC40)
#define DTDA113                (*(volatile uint32 *)0xFFFFAC44)
#define DTTC113                (*(volatile uint32 *)0xFFFFAC48)
#define DTTCT113               (*(volatile uint32 *)0xFFFFAC4C)
#define DTRSA113               (*(volatile uint32 *)0xFFFFAC50)
#define DTRDA113               (*(volatile uint32 *)0xFFFFAC54)
#define DTRTC113               (*(volatile uint32 *)0xFFFFAC58)
#define DTTCC113               (*(volatile uint32 *)0xFFFFAC5C)
#define DTFSL113               (*(volatile uint32 *)0xFFFFAC60)
#define DTFST113               (*(volatile uint32 *)0xFFFFAC64)
#define DTFSS113               (*(volatile uint32 *)0xFFFFAC68)
#define DTFSC113               (*(volatile uint32 *)0xFFFFAC6C)
#define DTSA114                (*(volatile uint32 *)0xFFFFAC80)
#define DTDA114                (*(volatile uint32 *)0xFFFFAC84)
#define DTTC114                (*(volatile uint32 *)0xFFFFAC88)
#define DTTCT114               (*(volatile uint32 *)0xFFFFAC8C)
#define DTRSA114               (*(volatile uint32 *)0xFFFFAC90)
#define DTRDA114               (*(volatile uint32 *)0xFFFFAC94)
#define DTRTC114               (*(volatile uint32 *)0xFFFFAC98)
#define DTTCC114               (*(volatile uint32 *)0xFFFFAC9C)
#define DTFSL114               (*(volatile uint32 *)0xFFFFACA0)
#define DTFST114               (*(volatile uint32 *)0xFFFFACA4)
#define DTFSS114               (*(volatile uint32 *)0xFFFFACA8)
#define DTFSC114               (*(volatile uint32 *)0xFFFFACAC)
#define DTSA115                (*(volatile uint32 *)0xFFFFACC0)
#define DTDA115                (*(volatile uint32 *)0xFFFFACC4)
#define DTTC115                (*(volatile uint32 *)0xFFFFACC8)
#define DTTCT115               (*(volatile uint32 *)0xFFFFACCC)
#define DTRSA115               (*(volatile uint32 *)0xFFFFACD0)
#define DTRDA115               (*(volatile uint32 *)0xFFFFACD4)
#define DTRTC115               (*(volatile uint32 *)0xFFFFACD8)
#define DTTCC115               (*(volatile uint32 *)0xFFFFACDC)
#define DTFSL115               (*(volatile uint32 *)0xFFFFACE0)
#define DTFST115               (*(volatile uint32 *)0xFFFFACE4)
#define DTFSS115               (*(volatile uint32 *)0xFFFFACE8)
#define DTFSC115               (*(volatile uint32 *)0xFFFFACEC)
#define DTSA116                (*(volatile uint32 *)0xFFFFAD00)
#define DTDA116                (*(volatile uint32 *)0xFFFFAD04)
#define DTTC116                (*(volatile uint32 *)0xFFFFAD08)
#define DTTCT116               (*(volatile uint32 *)0xFFFFAD0C)
#define DTRSA116               (*(volatile uint32 *)0xFFFFAD10)
#define DTRDA116               (*(volatile uint32 *)0xFFFFAD14)
#define DTRTC116               (*(volatile uint32 *)0xFFFFAD18)
#define DTTCC116               (*(volatile uint32 *)0xFFFFAD1C)
#define DTFSL116               (*(volatile uint32 *)0xFFFFAD20)
#define DTFST116               (*(volatile uint32 *)0xFFFFAD24)
#define DTFSS116               (*(volatile uint32 *)0xFFFFAD28)
#define DTFSC116               (*(volatile uint32 *)0xFFFFAD2C)
#define DTSA117                (*(volatile uint32 *)0xFFFFAD40)
#define DTDA117                (*(volatile uint32 *)0xFFFFAD44)
#define DTTC117                (*(volatile uint32 *)0xFFFFAD48)
#define DTTCT117               (*(volatile uint32 *)0xFFFFAD4C)
#define DTRSA117               (*(volatile uint32 *)0xFFFFAD50)
#define DTRDA117               (*(volatile uint32 *)0xFFFFAD54)
#define DTRTC117               (*(volatile uint32 *)0xFFFFAD58)
#define DTTCC117               (*(volatile uint32 *)0xFFFFAD5C)
#define DTFSL117               (*(volatile uint32 *)0xFFFFAD60)
#define DTFST117               (*(volatile uint32 *)0xFFFFAD64)
#define DTFSS117               (*(volatile uint32 *)0xFFFFAD68)
#define DTFSC117               (*(volatile uint32 *)0xFFFFAD6C)
#define DTSA118                (*(volatile uint32 *)0xFFFFAD80)
#define DTDA118                (*(volatile uint32 *)0xFFFFAD84)
#define DTTC118                (*(volatile uint32 *)0xFFFFAD88)
#define DTTCT118               (*(volatile uint32 *)0xFFFFAD8C)
#define DTRSA118               (*(volatile uint32 *)0xFFFFAD90)
#define DTRDA118               (*(volatile uint32 *)0xFFFFAD94)
#define DTRTC118               (*(volatile uint32 *)0xFFFFAD98)
#define DTTCC118               (*(volatile uint32 *)0xFFFFAD9C)
#define DTFSL118               (*(volatile uint32 *)0xFFFFADA0)
#define DTFST118               (*(volatile uint32 *)0xFFFFADA4)
#define DTFSS118               (*(volatile uint32 *)0xFFFFADA8)
#define DTFSC118               (*(volatile uint32 *)0xFFFFADAC)
#define DTSA119                (*(volatile uint32 *)0xFFFFADC0)
#define DTDA119                (*(volatile uint32 *)0xFFFFADC4)
#define DTTC119                (*(volatile uint32 *)0xFFFFADC8)
#define DTTCT119               (*(volatile uint32 *)0xFFFFADCC)
#define DTRSA119               (*(volatile uint32 *)0xFFFFADD0)
#define DTRDA119               (*(volatile uint32 *)0xFFFFADD4)
#define DTRTC119               (*(volatile uint32 *)0xFFFFADD8)
#define DTTCC119               (*(volatile uint32 *)0xFFFFADDC)
#define DTFSL119               (*(volatile uint32 *)0xFFFFADE0)
#define DTFST119               (*(volatile uint32 *)0xFFFFADE4)
#define DTFSS119               (*(volatile uint32 *)0xFFFFADE8)
#define DTFSC119               (*(volatile uint32 *)0xFFFFADEC)
#define DTSA120                (*(volatile uint32 *)0xFFFFAE00)
#define DTDA120                (*(volatile uint32 *)0xFFFFAE04)
#define DTTC120                (*(volatile uint32 *)0xFFFFAE08)
#define DTTCT120               (*(volatile uint32 *)0xFFFFAE0C)
#define DTRSA120               (*(volatile uint32 *)0xFFFFAE10)
#define DTRDA120               (*(volatile uint32 *)0xFFFFAE14)
#define DTRTC120               (*(volatile uint32 *)0xFFFFAE18)
#define DTTCC120               (*(volatile uint32 *)0xFFFFAE1C)
#define DTFSL120               (*(volatile uint32 *)0xFFFFAE20)
#define DTFST120               (*(volatile uint32 *)0xFFFFAE24)
#define DTFSS120               (*(volatile uint32 *)0xFFFFAE28)
#define DTFSC120               (*(volatile uint32 *)0xFFFFAE2C)
#define DTSA121                (*(volatile uint32 *)0xFFFFAE40)
#define DTDA121                (*(volatile uint32 *)0xFFFFAE44)
#define DTTC121                (*(volatile uint32 *)0xFFFFAE48)
#define DTTCT121               (*(volatile uint32 *)0xFFFFAE4C)
#define DTRSA121               (*(volatile uint32 *)0xFFFFAE50)
#define DTRDA121               (*(volatile uint32 *)0xFFFFAE54)
#define DTRTC121               (*(volatile uint32 *)0xFFFFAE58)
#define DTTCC121               (*(volatile uint32 *)0xFFFFAE5C)
#define DTFSL121               (*(volatile uint32 *)0xFFFFAE60)
#define DTFST121               (*(volatile uint32 *)0xFFFFAE64)
#define DTFSS121               (*(volatile uint32 *)0xFFFFAE68)
#define DTFSC121               (*(volatile uint32 *)0xFFFFAE6C)
#define DTSA122                (*(volatile uint32 *)0xFFFFAE80)
#define DTDA122                (*(volatile uint32 *)0xFFFFAE84)
#define DTTC122                (*(volatile uint32 *)0xFFFFAE88)
#define DTTCT122               (*(volatile uint32 *)0xFFFFAE8C)
#define DTRSA122               (*(volatile uint32 *)0xFFFFAE90)
#define DTRDA122               (*(volatile uint32 *)0xFFFFAE94)
#define DTRTC122               (*(volatile uint32 *)0xFFFFAE98)
#define DTTCC122               (*(volatile uint32 *)0xFFFFAE9C)
#define DTFSL122               (*(volatile uint32 *)0xFFFFAEA0)
#define DTFST122               (*(volatile uint32 *)0xFFFFAEA4)
#define DTFSS122               (*(volatile uint32 *)0xFFFFAEA8)
#define DTFSC122               (*(volatile uint32 *)0xFFFFAEAC)
#define DTSA123                (*(volatile uint32 *)0xFFFFAEC0)
#define DTDA123                (*(volatile uint32 *)0xFFFFAEC4)
#define DTTC123                (*(volatile uint32 *)0xFFFFAEC8)
#define DTTCT123               (*(volatile uint32 *)0xFFFFAECC)
#define DTRSA123               (*(volatile uint32 *)0xFFFFAED0)
#define DTRDA123               (*(volatile uint32 *)0xFFFFAED4)
#define DTRTC123               (*(volatile uint32 *)0xFFFFAED8)
#define DTTCC123               (*(volatile uint32 *)0xFFFFAEDC)
#define DTFSL123               (*(volatile uint32 *)0xFFFFAEE0)
#define DTFST123               (*(volatile uint32 *)0xFFFFAEE4)
#define DTFSS123               (*(volatile uint32 *)0xFFFFAEE8)
#define DTFSC123               (*(volatile uint32 *)0xFFFFAEEC)
#define DTSA124                (*(volatile uint32 *)0xFFFFAF00)
#define DTDA124                (*(volatile uint32 *)0xFFFFAF04)
#define DTTC124                (*(volatile uint32 *)0xFFFFAF08)
#define DTTCT124               (*(volatile uint32 *)0xFFFFAF0C)
#define DTRSA124               (*(volatile uint32 *)0xFFFFAF10)
#define DTRDA124               (*(volatile uint32 *)0xFFFFAF14)
#define DTRTC124               (*(volatile uint32 *)0xFFFFAF18)
#define DTTCC124               (*(volatile uint32 *)0xFFFFAF1C)
#define DTFSL124               (*(volatile uint32 *)0xFFFFAF20)
#define DTFST124               (*(volatile uint32 *)0xFFFFAF24)
#define DTFSS124               (*(volatile uint32 *)0xFFFFAF28)
#define DTFSC124               (*(volatile uint32 *)0xFFFFAF2C)
#define DTSA125                (*(volatile uint32 *)0xFFFFAF40)
#define DTDA125                (*(volatile uint32 *)0xFFFFAF44)
#define DTTC125                (*(volatile uint32 *)0xFFFFAF48)
#define DTTCT125               (*(volatile uint32 *)0xFFFFAF4C)
#define DTRSA125               (*(volatile uint32 *)0xFFFFAF50)
#define DTRDA125               (*(volatile uint32 *)0xFFFFAF54)
#define DTRTC125               (*(volatile uint32 *)0xFFFFAF58)
#define DTTCC125               (*(volatile uint32 *)0xFFFFAF5C)
#define DTFSL125               (*(volatile uint32 *)0xFFFFAF60)
#define DTFST125               (*(volatile uint32 *)0xFFFFAF64)
#define DTFSS125               (*(volatile uint32 *)0xFFFFAF68)
#define DTFSC125               (*(volatile uint32 *)0xFFFFAF6C)
#define DTSA126                (*(volatile uint32 *)0xFFFFAF80)
#define DTDA126                (*(volatile uint32 *)0xFFFFAF84)
#define DTTC126                (*(volatile uint32 *)0xFFFFAF88)
#define DTTCT126               (*(volatile uint32 *)0xFFFFAF8C)
#define DTRSA126               (*(volatile uint32 *)0xFFFFAF90)
#define DTRDA126               (*(volatile uint32 *)0xFFFFAF94)
#define DTRTC126               (*(volatile uint32 *)0xFFFFAF98)
#define DTTCC126               (*(volatile uint32 *)0xFFFFAF9C)
#define DTFSL126               (*(volatile uint32 *)0xFFFFAFA0)
#define DTFST126               (*(volatile uint32 *)0xFFFFAFA4)
#define DTFSS126               (*(volatile uint32 *)0xFFFFAFA8)
#define DTFSC126               (*(volatile uint32 *)0xFFFFAFAC)
#define DTSA127                (*(volatile uint32 *)0xFFFFAFC0)
#define DTDA127                (*(volatile uint32 *)0xFFFFAFC4)
#define DTTC127                (*(volatile uint32 *)0xFFFFAFC8)
#define DTTCT127               (*(volatile uint32 *)0xFFFFAFCC)
#define DTRSA127               (*(volatile uint32 *)0xFFFFAFD0)
#define DTRDA127               (*(volatile uint32 *)0xFFFFAFD4)
#define DTRTC127               (*(volatile uint32 *)0xFFFFAFD8)
#define DTTCC127               (*(volatile uint32 *)0xFFFFAFDC)
#define DTFSL127               (*(volatile uint32 *)0xFFFFAFE0)
#define DTFST127               (*(volatile uint32 *)0xFFFFAFE4)
#define DTFSS127               (*(volatile uint32 *)0xFFFFAFE8)
#define DTFSC127               (*(volatile uint32 *)0xFFFFAFEC)
#define EIC32                  (*(volatile uint16 *)0xFFFFB040)
#define EIC32L                 (*(volatile uint8  *)0xFFFFB040)
#define EIC32H                 (*(volatile uint8  *)0xFFFFB041)
#define EIC33                  (*(volatile uint16 *)0xFFFFB042)
#define EIC33L                 (*(volatile uint8  *)0xFFFFB042)
#define EIC33H                 (*(volatile uint8  *)0xFFFFB043)
#define EIC34                  (*(volatile uint16 *)0xFFFFB044)
#define EIC34L                 (*(volatile uint8  *)0xFFFFB044)
#define EIC34H                 (*(volatile uint8  *)0xFFFFB045)
#define EIC35                  (*(volatile uint16 *)0xFFFFB046)
#define EIC35L                 (*(volatile uint8  *)0xFFFFB046)
#define EIC35H                 (*(volatile uint8  *)0xFFFFB047)
#define EIC36                  (*(volatile uint16 *)0xFFFFB048)
#define EIC36L                 (*(volatile uint8  *)0xFFFFB048)
#define EIC36H                 (*(volatile uint8  *)0xFFFFB049)
#define EIC37                  (*(volatile uint16 *)0xFFFFB04A)
#define EIC37L                 (*(volatile uint8  *)0xFFFFB04A)
#define EIC37H                 (*(volatile uint8  *)0xFFFFB04B)
#define EIC38                  (*(volatile uint16 *)0xFFFFB04C)
#define EIC38L                 (*(volatile uint8  *)0xFFFFB04C)
#define EIC38H                 (*(volatile uint8  *)0xFFFFB04D)
#define EIC39                  (*(volatile uint16 *)0xFFFFB04E)
#define EIC39L                 (*(volatile uint8  *)0xFFFFB04E)
#define EIC39H                 (*(volatile uint8  *)0xFFFFB04F)
#define EIC40                  (*(volatile uint16 *)0xFFFFB050)
#define EIC40L                 (*(volatile uint8  *)0xFFFFB050)
#define EIC40H                 (*(volatile uint8  *)0xFFFFB051)
#define EIC41                  (*(volatile uint16 *)0xFFFFB052)
#define EIC41L                 (*(volatile uint8  *)0xFFFFB052)
#define EIC41H                 (*(volatile uint8  *)0xFFFFB053)
#define EIC42                  (*(volatile uint16 *)0xFFFFB054)
#define EIC42L                 (*(volatile uint8  *)0xFFFFB054)
#define EIC42H                 (*(volatile uint8  *)0xFFFFB055)
#define EIC43                  (*(volatile uint16 *)0xFFFFB056)
#define EIC43L                 (*(volatile uint8  *)0xFFFFB056)
#define EIC43H                 (*(volatile uint8  *)0xFFFFB057)
#define EIC44                  (*(volatile uint16 *)0xFFFFB058)
#define EIC44L                 (*(volatile uint8  *)0xFFFFB058)
#define EIC44H                 (*(volatile uint8  *)0xFFFFB059)
#define EIC45                  (*(volatile uint16 *)0xFFFFB05A)
#define EIC45L                 (*(volatile uint8  *)0xFFFFB05A)
#define EIC45H                 (*(volatile uint8  *)0xFFFFB05B)
#define EIC46                  (*(volatile uint16 *)0xFFFFB05C)
#define EIC46L                 (*(volatile uint8  *)0xFFFFB05C)
#define EIC46H                 (*(volatile uint8  *)0xFFFFB05D)
#define EIC47                  (*(volatile uint16 *)0xFFFFB05E)
#define EIC47L                 (*(volatile uint8  *)0xFFFFB05E)
#define EIC47H                 (*(volatile uint8  *)0xFFFFB05F)
#define EIC48                  (*(volatile uint16 *)0xFFFFB060)
#define EIC48L                 (*(volatile uint8  *)0xFFFFB060)
#define EIC48H                 (*(volatile uint8  *)0xFFFFB061)
#define EIC49                  (*(volatile uint16 *)0xFFFFB062)
#define EIC49L                 (*(volatile uint8  *)0xFFFFB062)
#define EIC49H                 (*(volatile uint8  *)0xFFFFB063)
#define EIC50                  (*(volatile uint16 *)0xFFFFB064)
#define EIC50L                 (*(volatile uint8  *)0xFFFFB064)
#define EIC50H                 (*(volatile uint8  *)0xFFFFB065)
#define EIC51                  (*(volatile uint16 *)0xFFFFB066)
#define EIC51L                 (*(volatile uint8  *)0xFFFFB066)
#define EIC51H                 (*(volatile uint8  *)0xFFFFB067)
#define EIC52                  (*(volatile uint16 *)0xFFFFB068)
#define EIC52L                 (*(volatile uint8  *)0xFFFFB068)
#define EIC52H                 (*(volatile uint8  *)0xFFFFB069)
#define EIC53                  (*(volatile uint16 *)0xFFFFB06A)
#define EIC53L                 (*(volatile uint8  *)0xFFFFB06A)
#define EIC53H                 (*(volatile uint8  *)0xFFFFB06B)
#define EIC54                  (*(volatile uint16 *)0xFFFFB06C)
#define EIC54L                 (*(volatile uint8  *)0xFFFFB06C)
#define EIC54H                 (*(volatile uint8  *)0xFFFFB06D)
#define EIC55                  (*(volatile uint16 *)0xFFFFB06E)
#define EIC55L                 (*(volatile uint8  *)0xFFFFB06E)
#define EIC55H                 (*(volatile uint8  *)0xFFFFB06F)
#define EIC56                  (*(volatile uint16 *)0xFFFFB070)
#define EIC56L                 (*(volatile uint8  *)0xFFFFB070)
#define EIC56H                 (*(volatile uint8  *)0xFFFFB071)
#define EIC57                  (*(volatile uint16 *)0xFFFFB072)
#define EIC57L                 (*(volatile uint8  *)0xFFFFB072)
#define EIC57H                 (*(volatile uint8  *)0xFFFFB073)
#define EIC58                  (*(volatile uint16 *)0xFFFFB074)
#define EIC58L                 (*(volatile uint8  *)0xFFFFB074)
#define EIC58H                 (*(volatile uint8  *)0xFFFFB075)
#define EIC59                  (*(volatile uint16 *)0xFFFFB076)
#define EIC59L                 (*(volatile uint8  *)0xFFFFB076)
#define EIC59H                 (*(volatile uint8  *)0xFFFFB077)
#define EIC60                  (*(volatile uint16 *)0xFFFFB078)
#define EIC60L                 (*(volatile uint8  *)0xFFFFB078)
#define EIC60H                 (*(volatile uint8  *)0xFFFFB079)
#define EIC61                  (*(volatile uint16 *)0xFFFFB07A)
#define EIC61L                 (*(volatile uint8  *)0xFFFFB07A)
#define EIC61H                 (*(volatile uint8  *)0xFFFFB07B)
#define EIC62                  (*(volatile uint16 *)0xFFFFB07C)
#define EIC62L                 (*(volatile uint8  *)0xFFFFB07C)
#define EIC62H                 (*(volatile uint8  *)0xFFFFB07D)
#define EIC63                  (*(volatile uint16 *)0xFFFFB07E)
#define EIC63L                 (*(volatile uint8  *)0xFFFFB07E)
#define EIC63H                 (*(volatile uint8  *)0xFFFFB07F)
#define EIC64                  (*(volatile uint16 *)0xFFFFB080)
#define EIC64L                 (*(volatile uint8  *)0xFFFFB080)
#define EIC64H                 (*(volatile uint8  *)0xFFFFB081)
#define EIC65                  (*(volatile uint16 *)0xFFFFB082)
#define EIC65L                 (*(volatile uint8  *)0xFFFFB082)
#define EIC65H                 (*(volatile uint8  *)0xFFFFB083)
#define EIC66                  (*(volatile uint16 *)0xFFFFB084)
#define EIC66L                 (*(volatile uint8  *)0xFFFFB084)
#define EIC66H                 (*(volatile uint8  *)0xFFFFB085)
#define EIC67                  (*(volatile uint16 *)0xFFFFB086)
#define EIC67L                 (*(volatile uint8  *)0xFFFFB086)
#define EIC67H                 (*(volatile uint8  *)0xFFFFB087)
#define EIC68                  (*(volatile uint16 *)0xFFFFB088)
#define EIC68L                 (*(volatile uint8  *)0xFFFFB088)
#define EIC68H                 (*(volatile uint8  *)0xFFFFB089)
#define EIC69                  (*(volatile uint16 *)0xFFFFB08A)
#define EIC69L                 (*(volatile uint8  *)0xFFFFB08A)
#define EIC69H                 (*(volatile uint8  *)0xFFFFB08B)
#define EIC70                  (*(volatile uint16 *)0xFFFFB08C)
#define EIC70L                 (*(volatile uint8  *)0xFFFFB08C)
#define EIC70H                 (*(volatile uint8  *)0xFFFFB08D)
#define EIC71                  (*(volatile uint16 *)0xFFFFB08E)
#define EIC71L                 (*(volatile uint8  *)0xFFFFB08E)
#define EIC71H                 (*(volatile uint8  *)0xFFFFB08F)
#define EIC72                  (*(volatile uint16 *)0xFFFFB090)
#define EIC72L                 (*(volatile uint8  *)0xFFFFB090)
#define EIC72H                 (*(volatile uint8  *)0xFFFFB091)
#define EIC73                  (*(volatile uint16 *)0xFFFFB092)
#define EIC73L                 (*(volatile uint8  *)0xFFFFB092)
#define EIC73H                 (*(volatile uint8  *)0xFFFFB093)
#define EIC74                  (*(volatile uint16 *)0xFFFFB094)
#define EIC74L                 (*(volatile uint8  *)0xFFFFB094)
#define EIC74H                 (*(volatile uint8  *)0xFFFFB095)
#define EIC75                  (*(volatile uint16 *)0xFFFFB096)
#define EIC75L                 (*(volatile uint8  *)0xFFFFB096)
#define EIC75H                 (*(volatile uint8  *)0xFFFFB097)
#define EIC76                  (*(volatile uint16 *)0xFFFFB098)
#define EIC76L                 (*(volatile uint8  *)0xFFFFB098)
#define EIC76H                 (*(volatile uint8  *)0xFFFFB099)
#define EIC77                  (*(volatile uint16 *)0xFFFFB09A)
#define EIC77L                 (*(volatile uint8  *)0xFFFFB09A)
#define EIC77H                 (*(volatile uint8  *)0xFFFFB09B)
#define EIC78                  (*(volatile uint16 *)0xFFFFB09C)
#define EIC78L                 (*(volatile uint8  *)0xFFFFB09C)
#define EIC78H                 (*(volatile uint8  *)0xFFFFB09D)
#define EIC79                  (*(volatile uint16 *)0xFFFFB09E)
#define EIC79L                 (*(volatile uint8  *)0xFFFFB09E)
#define EIC79H                 (*(volatile uint8  *)0xFFFFB09F)
#define EIC80                  (*(volatile uint16 *)0xFFFFB0A0)
#define EIC80L                 (*(volatile uint8  *)0xFFFFB0A0)
#define EIC80H                 (*(volatile uint8  *)0xFFFFB0A1)
#define EIC81                  (*(volatile uint16 *)0xFFFFB0A2)
#define EIC81L                 (*(volatile uint8  *)0xFFFFB0A2)
#define EIC81H                 (*(volatile uint8  *)0xFFFFB0A3)
#define EIC82                  (*(volatile uint16 *)0xFFFFB0A4)
#define EIC82L                 (*(volatile uint8  *)0xFFFFB0A4)
#define EIC82H                 (*(volatile uint8  *)0xFFFFB0A5)
#define EIC83                  (*(volatile uint16 *)0xFFFFB0A6)
#define EIC83L                 (*(volatile uint8  *)0xFFFFB0A6)
#define EIC83H                 (*(volatile uint8  *)0xFFFFB0A7)
#define EIC84                  (*(volatile uint16 *)0xFFFFB0A8)
#define EIC84L                 (*(volatile uint8  *)0xFFFFB0A8)
#define EIC84H                 (*(volatile uint8  *)0xFFFFB0A9)
#define EIC85                  (*(volatile uint16 *)0xFFFFB0AA)
#define EIC85L                 (*(volatile uint8  *)0xFFFFB0AA)
#define EIC85H                 (*(volatile uint8  *)0xFFFFB0AB)
#define EIC86                  (*(volatile uint16 *)0xFFFFB0AC)
#define EIC86L                 (*(volatile uint8  *)0xFFFFB0AC)
#define EIC86H                 (*(volatile uint8  *)0xFFFFB0AD)
#define EIC87                  (*(volatile uint16 *)0xFFFFB0AE)
#define EIC87L                 (*(volatile uint8  *)0xFFFFB0AE)
#define EIC87H                 (*(volatile uint8  *)0xFFFFB0AF)
#define EIC88                  (*(volatile uint16 *)0xFFFFB0B0)
#define EIC88L                 (*(volatile uint8  *)0xFFFFB0B0)
#define EIC88H                 (*(volatile uint8  *)0xFFFFB0B1)
#define EIC89                  (*(volatile uint16 *)0xFFFFB0B2)
#define EIC89L                 (*(volatile uint8  *)0xFFFFB0B2)
#define EIC89H                 (*(volatile uint8  *)0xFFFFB0B3)
#define EIC90                  (*(volatile uint16 *)0xFFFFB0B4)
#define EIC90L                 (*(volatile uint8  *)0xFFFFB0B4)
#define EIC90H                 (*(volatile uint8  *)0xFFFFB0B5)
#define EIC91                  (*(volatile uint16 *)0xFFFFB0B6)
#define EIC91L                 (*(volatile uint8  *)0xFFFFB0B6)
#define EIC91H                 (*(volatile uint8  *)0xFFFFB0B7)
#define EIC92                  (*(volatile uint16 *)0xFFFFB0B8)
#define EIC92L                 (*(volatile uint8  *)0xFFFFB0B8)
#define EIC92H                 (*(volatile uint8  *)0xFFFFB0B9)
#define EIC93                  (*(volatile uint16 *)0xFFFFB0BA)
#define EIC93L                 (*(volatile uint8  *)0xFFFFB0BA)
#define EIC93H                 (*(volatile uint8  *)0xFFFFB0BB)
#define EIC94                  (*(volatile uint16 *)0xFFFFB0BC)
#define EIC94L                 (*(volatile uint8  *)0xFFFFB0BC)
#define EIC94H                 (*(volatile uint8  *)0xFFFFB0BD)
#define EIC95                  (*(volatile uint16 *)0xFFFFB0BE)
#define EIC95L                 (*(volatile uint8  *)0xFFFFB0BE)
#define EIC95H                 (*(volatile uint8  *)0xFFFFB0BF)
#define EIC96                  (*(volatile uint16 *)0xFFFFB0C0)
#define EIC96L                 (*(volatile uint8  *)0xFFFFB0C0)
#define EIC96H                 (*(volatile uint8  *)0xFFFFB0C1)
#define EIC97                  (*(volatile uint16 *)0xFFFFB0C2)
#define EIC97L                 (*(volatile uint8  *)0xFFFFB0C2)
#define EIC97H                 (*(volatile uint8  *)0xFFFFB0C3)
#define EIC98                  (*(volatile uint16 *)0xFFFFB0C4)
#define EIC98L                 (*(volatile uint8  *)0xFFFFB0C4)
#define EIC98H                 (*(volatile uint8  *)0xFFFFB0C5)
#define EIC99                  (*(volatile uint16 *)0xFFFFB0C6)
#define EIC99L                 (*(volatile uint8  *)0xFFFFB0C6)
#define EIC99H                 (*(volatile uint8  *)0xFFFFB0C7)
#define EIC100                 (*(volatile uint16 *)0xFFFFB0C8)
#define EIC100L                (*(volatile uint8  *)0xFFFFB0C8)
#define EIC100H                (*(volatile uint8  *)0xFFFFB0C9)
#define EIC101                 (*(volatile uint16 *)0xFFFFB0CA)
#define EIC101L                (*(volatile uint8  *)0xFFFFB0CA)
#define EIC101H                (*(volatile uint8  *)0xFFFFB0CB)
#define EIC102                 (*(volatile uint16 *)0xFFFFB0CC)
#define EIC102L                (*(volatile uint8  *)0xFFFFB0CC)
#define EIC102H                (*(volatile uint8  *)0xFFFFB0CD)
#define EIC103                 (*(volatile uint16 *)0xFFFFB0CE)
#define EIC103L                (*(volatile uint8  *)0xFFFFB0CE)
#define EIC103H                (*(volatile uint8  *)0xFFFFB0CF)
#define EIC104                 (*(volatile uint16 *)0xFFFFB0D0)
#define EIC104L                (*(volatile uint8  *)0xFFFFB0D0)
#define EIC104H                (*(volatile uint8  *)0xFFFFB0D1)
#define EIC105                 (*(volatile uint16 *)0xFFFFB0D2)
#define EIC105L                (*(volatile uint8  *)0xFFFFB0D2)
#define EIC105H                (*(volatile uint8  *)0xFFFFB0D3)
#define EIC106                 (*(volatile uint16 *)0xFFFFB0D4)
#define EIC106L                (*(volatile uint8  *)0xFFFFB0D4)
#define EIC106H                (*(volatile uint8  *)0xFFFFB0D5)
#define EIC107                 (*(volatile uint16 *)0xFFFFB0D6)
#define EIC107L                (*(volatile uint8  *)0xFFFFB0D6)
#define EIC107H                (*(volatile uint8  *)0xFFFFB0D7)
#define EIC108                 (*(volatile uint16 *)0xFFFFB0D8)
#define EIC108L                (*(volatile uint8  *)0xFFFFB0D8)
#define EIC108H                (*(volatile uint8  *)0xFFFFB0D9)
#define EIC109                 (*(volatile uint16 *)0xFFFFB0DA)
#define EIC109L                (*(volatile uint8  *)0xFFFFB0DA)
#define EIC109H                (*(volatile uint8  *)0xFFFFB0DB)
#define EIC110                 (*(volatile uint16 *)0xFFFFB0DC)
#define EIC110L                (*(volatile uint8  *)0xFFFFB0DC)
#define EIC110H                (*(volatile uint8  *)0xFFFFB0DD)
#define EIC111                 (*(volatile uint16 *)0xFFFFB0DE)
#define EIC111L                (*(volatile uint8  *)0xFFFFB0DE)
#define EIC111H                (*(volatile uint8  *)0xFFFFB0DF)
#define EIC112                 (*(volatile uint16 *)0xFFFFB0E0)
#define EIC112L                (*(volatile uint8  *)0xFFFFB0E0)
#define EIC112H                (*(volatile uint8  *)0xFFFFB0E1)
#define EIC113                 (*(volatile uint16 *)0xFFFFB0E2)
#define EIC113L                (*(volatile uint8  *)0xFFFFB0E2)
#define EIC113H                (*(volatile uint8  *)0xFFFFB0E3)
#define EIC114                 (*(volatile uint16 *)0xFFFFB0E4)
#define EIC114L                (*(volatile uint8  *)0xFFFFB0E4)
#define EIC114H                (*(volatile uint8  *)0xFFFFB0E5)
#define EIC115                 (*(volatile uint16 *)0xFFFFB0E6)
#define EIC115L                (*(volatile uint8  *)0xFFFFB0E6)
#define EIC115H                (*(volatile uint8  *)0xFFFFB0E7)
#define EIC116                 (*(volatile uint16 *)0xFFFFB0E8)
#define EIC116L                (*(volatile uint8  *)0xFFFFB0E8)
#define EIC116H                (*(volatile uint8  *)0xFFFFB0E9)
#define EIC117                 (*(volatile uint16 *)0xFFFFB0EA)
#define EIC117L                (*(volatile uint8  *)0xFFFFB0EA)
#define EIC117H                (*(volatile uint8  *)0xFFFFB0EB)
#define EIC118                 (*(volatile uint16 *)0xFFFFB0EC)
#define EIC118L                (*(volatile uint8  *)0xFFFFB0EC)
#define EIC118H                (*(volatile uint8  *)0xFFFFB0ED)
#define EIC119                 (*(volatile uint16 *)0xFFFFB0EE)
#define EIC119L                (*(volatile uint8  *)0xFFFFB0EE)
#define EIC119H                (*(volatile uint8  *)0xFFFFB0EF)
#define EIC120                 (*(volatile uint16 *)0xFFFFB0F0)
#define EIC120L                (*(volatile uint8  *)0xFFFFB0F0)
#define EIC120H                (*(volatile uint8  *)0xFFFFB0F1)
#define EIC121                 (*(volatile uint16 *)0xFFFFB0F2)
#define EIC121L                (*(volatile uint8  *)0xFFFFB0F2)
#define EIC121H                (*(volatile uint8  *)0xFFFFB0F3)
#define EIC122                 (*(volatile uint16 *)0xFFFFB0F4)
#define EIC122L                (*(volatile uint8  *)0xFFFFB0F4)
#define EIC122H                (*(volatile uint8  *)0xFFFFB0F5)
#define EIC123                 (*(volatile uint16 *)0xFFFFB0F6)
#define EIC123L                (*(volatile uint8  *)0xFFFFB0F6)
#define EIC123H                (*(volatile uint8  *)0xFFFFB0F7)
#define EIC124                 (*(volatile uint16 *)0xFFFFB0F8)
#define EIC124L                (*(volatile uint8  *)0xFFFFB0F8)
#define EIC124H                (*(volatile uint8  *)0xFFFFB0F9)
#define EIC125                 (*(volatile uint16 *)0xFFFFB0FA)
#define EIC125L                (*(volatile uint8  *)0xFFFFB0FA)
#define EIC125H                (*(volatile uint8  *)0xFFFFB0FB)
#define EIC126                 (*(volatile uint16 *)0xFFFFB0FC)
#define EIC126L                (*(volatile uint8  *)0xFFFFB0FC)
#define EIC126H                (*(volatile uint8  *)0xFFFFB0FD)
#define EIC127                 (*(volatile uint16 *)0xFFFFB0FE)
#define EIC127L                (*(volatile uint8  *)0xFFFFB0FE)
#define EIC127H                (*(volatile uint8  *)0xFFFFB0FF)
#define EIC128                 (*(volatile uint16 *)0xFFFFB100)
#define EIC128L                (*(volatile uint8  *)0xFFFFB100)
#define EIC128H                (*(volatile uint8  *)0xFFFFB101)
#define EIC129                 (*(volatile uint16 *)0xFFFFB102)
#define EIC129L                (*(volatile uint8  *)0xFFFFB102)
#define EIC129H                (*(volatile uint8  *)0xFFFFB103)
#define EIC130                 (*(volatile uint16 *)0xFFFFB104)
#define EIC130L                (*(volatile uint8  *)0xFFFFB104)
#define EIC130H                (*(volatile uint8  *)0xFFFFB105)
#define EIC131                 (*(volatile uint16 *)0xFFFFB106)
#define EIC131L                (*(volatile uint8  *)0xFFFFB106)
#define EIC131H                (*(volatile uint8  *)0xFFFFB107)
#define EIC132                 (*(volatile uint16 *)0xFFFFB108)
#define EIC132L                (*(volatile uint8  *)0xFFFFB108)
#define EIC132H                (*(volatile uint8  *)0xFFFFB109)
#define EIC133                 (*(volatile uint16 *)0xFFFFB10A)
#define EIC133L                (*(volatile uint8  *)0xFFFFB10A)
#define EIC133H                (*(volatile uint8  *)0xFFFFB10B)
#define EIC134                 (*(volatile uint16 *)0xFFFFB10C)
#define EIC134L                (*(volatile uint8  *)0xFFFFB10C)
#define EIC134H                (*(volatile uint8  *)0xFFFFB10D)
#define EIC135                 (*(volatile uint16 *)0xFFFFB10E)
#define EIC135L                (*(volatile uint8  *)0xFFFFB10E)
#define EIC135H                (*(volatile uint8  *)0xFFFFB10F)
#define EIC136                 (*(volatile uint16 *)0xFFFFB110)
#define EIC136L                (*(volatile uint8  *)0xFFFFB110)
#define EIC136H                (*(volatile uint8  *)0xFFFFB111)
#define EIC137                 (*(volatile uint16 *)0xFFFFB112)
#define EIC137L                (*(volatile uint8  *)0xFFFFB112)
#define EIC137H                (*(volatile uint8  *)0xFFFFB113)
#define EIC138                 (*(volatile uint16 *)0xFFFFB114)
#define EIC138L                (*(volatile uint8  *)0xFFFFB114)
#define EIC138H                (*(volatile uint8  *)0xFFFFB115)
#define EIC139                 (*(volatile uint16 *)0xFFFFB116)
#define EIC139L                (*(volatile uint8  *)0xFFFFB116)
#define EIC139H                (*(volatile uint8  *)0xFFFFB117)
#define EIC140                 (*(volatile uint16 *)0xFFFFB118)
#define EIC140L                (*(volatile uint8  *)0xFFFFB118)
#define EIC140H                (*(volatile uint8  *)0xFFFFB119)
#define EIC141                 (*(volatile uint16 *)0xFFFFB11A)
#define EIC141L                (*(volatile uint8  *)0xFFFFB11A)
#define EIC141H                (*(volatile uint8  *)0xFFFFB11B)
#define EIC142                 (*(volatile uint16 *)0xFFFFB11C)
#define EIC142L                (*(volatile uint8  *)0xFFFFB11C)
#define EIC142H                (*(volatile uint8  *)0xFFFFB11D)
#define EIC143                 (*(volatile uint16 *)0xFFFFB11E)
#define EIC143L                (*(volatile uint8  *)0xFFFFB11E)
#define EIC143H                (*(volatile uint8  *)0xFFFFB11F)
#define EIC144                 (*(volatile uint16 *)0xFFFFB120)
#define EIC144L                (*(volatile uint8  *)0xFFFFB120)
#define EIC144H                (*(volatile uint8  *)0xFFFFB121)
#define EIC145                 (*(volatile uint16 *)0xFFFFB122)
#define EIC145L                (*(volatile uint8  *)0xFFFFB122)
#define EIC145H                (*(volatile uint8  *)0xFFFFB123)
#define EIC146                 (*(volatile uint16 *)0xFFFFB124)
#define EIC146L                (*(volatile uint8  *)0xFFFFB124)
#define EIC146H                (*(volatile uint8  *)0xFFFFB125)
#define EIC147                 (*(volatile uint16 *)0xFFFFB126)
#define EIC147L                (*(volatile uint8  *)0xFFFFB126)
#define EIC147H                (*(volatile uint8  *)0xFFFFB127)
#define EIC148                 (*(volatile uint16 *)0xFFFFB128)
#define EIC148L                (*(volatile uint8  *)0xFFFFB128)
#define EIC148H                (*(volatile uint8  *)0xFFFFB129)
#define EIC149                 (*(volatile uint16 *)0xFFFFB12A)
#define EIC149L                (*(volatile uint8  *)0xFFFFB12A)
#define EIC149H                (*(volatile uint8  *)0xFFFFB12B)
#define EIC150                 (*(volatile uint16 *)0xFFFFB12C)
#define EIC150L                (*(volatile uint8  *)0xFFFFB12C)
#define EIC150H                (*(volatile uint8  *)0xFFFFB12D)
#define EIC151                 (*(volatile uint16 *)0xFFFFB12E)
#define EIC151L                (*(volatile uint8  *)0xFFFFB12E)
#define EIC151H                (*(volatile uint8  *)0xFFFFB12F)
#define EIC152                 (*(volatile uint16 *)0xFFFFB130)
#define EIC152L                (*(volatile uint8  *)0xFFFFB130)
#define EIC152H                (*(volatile uint8  *)0xFFFFB131)
#define EIC153                 (*(volatile uint16 *)0xFFFFB132)
#define EIC153L                (*(volatile uint8  *)0xFFFFB132)
#define EIC153H                (*(volatile uint8  *)0xFFFFB133)
#define EIC154                 (*(volatile uint16 *)0xFFFFB134)
#define EIC154L                (*(volatile uint8  *)0xFFFFB134)
#define EIC154H                (*(volatile uint8  *)0xFFFFB135)
#define EIC155                 (*(volatile uint16 *)0xFFFFB136)
#define EIC155L                (*(volatile uint8  *)0xFFFFB136)
#define EIC155H                (*(volatile uint8  *)0xFFFFB137)
#define EIC156                 (*(volatile uint16 *)0xFFFFB138)
#define EIC156L                (*(volatile uint8  *)0xFFFFB138)
#define EIC156H                (*(volatile uint8  *)0xFFFFB139)
#define EIC157                 (*(volatile uint16 *)0xFFFFB13A)
#define EIC157L                (*(volatile uint8  *)0xFFFFB13A)
#define EIC157H                (*(volatile uint8  *)0xFFFFB13B)
#define EIC158                 (*(volatile uint16 *)0xFFFFB13C)
#define EIC158L                (*(volatile uint8  *)0xFFFFB13C)
#define EIC158H                (*(volatile uint8  *)0xFFFFB13D)
#define EIC159                 (*(volatile uint16 *)0xFFFFB13E)
#define EIC159L                (*(volatile uint8  *)0xFFFFB13E)
#define EIC159H                (*(volatile uint8  *)0xFFFFB13F)
#define EIC160                 (*(volatile uint16 *)0xFFFFB140)
#define EIC160L                (*(volatile uint8  *)0xFFFFB140)
#define EIC160H                (*(volatile uint8  *)0xFFFFB141)
#define EIC161                 (*(volatile uint16 *)0xFFFFB142)
#define EIC161L                (*(volatile uint8  *)0xFFFFB142)
#define EIC161H                (*(volatile uint8  *)0xFFFFB143)
#define EIC162                 (*(volatile uint16 *)0xFFFFB144)
#define EIC162L                (*(volatile uint8  *)0xFFFFB144)
#define EIC162H                (*(volatile uint8  *)0xFFFFB145)
#define EIC163                 (*(volatile uint16 *)0xFFFFB146)
#define EIC163L                (*(volatile uint8  *)0xFFFFB146)
#define EIC163H                (*(volatile uint8  *)0xFFFFB147)
#define EIC164                 (*(volatile uint16 *)0xFFFFB148)
#define EIC164L                (*(volatile uint8  *)0xFFFFB148)
#define EIC164H                (*(volatile uint8  *)0xFFFFB149)
#define EIC165                 (*(volatile uint16 *)0xFFFFB14A)
#define EIC165L                (*(volatile uint8  *)0xFFFFB14A)
#define EIC165H                (*(volatile uint8  *)0xFFFFB14B)
#define EIC166                 (*(volatile uint16 *)0xFFFFB14C)
#define EIC166L                (*(volatile uint8  *)0xFFFFB14C)
#define EIC166H                (*(volatile uint8  *)0xFFFFB14D)
#define EIC167                 (*(volatile uint16 *)0xFFFFB14E)
#define EIC167L                (*(volatile uint8  *)0xFFFFB14E)
#define EIC167H                (*(volatile uint8  *)0xFFFFB14F)
#define EIC168                 (*(volatile uint16 *)0xFFFFB150)
#define EIC168L                (*(volatile uint8  *)0xFFFFB150)
#define EIC168H                (*(volatile uint8  *)0xFFFFB151)
#define EIC169                 (*(volatile uint16 *)0xFFFFB152)
#define EIC169L                (*(volatile uint8  *)0xFFFFB152)
#define EIC169H                (*(volatile uint8  *)0xFFFFB153)
#define EIC170                 (*(volatile uint16 *)0xFFFFB154)
#define EIC170L                (*(volatile uint8  *)0xFFFFB154)
#define EIC170H                (*(volatile uint8  *)0xFFFFB155)
#define EIC171                 (*(volatile uint16 *)0xFFFFB156)
#define EIC171L                (*(volatile uint8  *)0xFFFFB156)
#define EIC171H                (*(volatile uint8  *)0xFFFFB157)
#define EIC172                 (*(volatile uint16 *)0xFFFFB158)
#define EIC172L                (*(volatile uint8  *)0xFFFFB158)
#define EIC172H                (*(volatile uint8  *)0xFFFFB159)
#define EIC173                 (*(volatile uint16 *)0xFFFFB15A)
#define EIC173L                (*(volatile uint8  *)0xFFFFB15A)
#define EIC173H                (*(volatile uint8  *)0xFFFFB15B)
#define EIC174                 (*(volatile uint16 *)0xFFFFB15C)
#define EIC174L                (*(volatile uint8  *)0xFFFFB15C)
#define EIC174H                (*(volatile uint8  *)0xFFFFB15D)
#define EIC175                 (*(volatile uint16 *)0xFFFFB15E)
#define EIC175L                (*(volatile uint8  *)0xFFFFB15E)
#define EIC175H                (*(volatile uint8  *)0xFFFFB15F)
#define EIC176                 (*(volatile uint16 *)0xFFFFB160)
#define EIC176L                (*(volatile uint8  *)0xFFFFB160)
#define EIC176H                (*(volatile uint8  *)0xFFFFB161)
#define EIC177                 (*(volatile uint16 *)0xFFFFB162)
#define EIC177L                (*(volatile uint8  *)0xFFFFB162)
#define EIC177H                (*(volatile uint8  *)0xFFFFB163)
#define EIC178                 (*(volatile uint16 *)0xFFFFB164)
#define EIC178L                (*(volatile uint8  *)0xFFFFB164)
#define EIC178H                (*(volatile uint8  *)0xFFFFB165)
#define EIC179                 (*(volatile uint16 *)0xFFFFB166)
#define EIC179L                (*(volatile uint8  *)0xFFFFB166)
#define EIC179H                (*(volatile uint8  *)0xFFFFB167)
#define EIC180                 (*(volatile uint16 *)0xFFFFB168)
#define EIC180L                (*(volatile uint8  *)0xFFFFB168)
#define EIC180H                (*(volatile uint8  *)0xFFFFB169)
#define EIC181                 (*(volatile uint16 *)0xFFFFB16A)
#define EIC181L                (*(volatile uint8  *)0xFFFFB16A)
#define EIC181H                (*(volatile uint8  *)0xFFFFB16B)
#define EIC182                 (*(volatile uint16 *)0xFFFFB16C)
#define EIC182L                (*(volatile uint8  *)0xFFFFB16C)
#define EIC182H                (*(volatile uint8  *)0xFFFFB16D)
#define EIC183                 (*(volatile uint16 *)0xFFFFB16E)
#define EIC183L                (*(volatile uint8  *)0xFFFFB16E)
#define EIC183H                (*(volatile uint8  *)0xFFFFB16F)
#define EIC184                 (*(volatile uint16 *)0xFFFFB170)
#define EIC184L                (*(volatile uint8  *)0xFFFFB170)
#define EIC184H                (*(volatile uint8  *)0xFFFFB171)
#define EIC185                 (*(volatile uint16 *)0xFFFFB172)
#define EIC185L                (*(volatile uint8  *)0xFFFFB172)
#define EIC185H                (*(volatile uint8  *)0xFFFFB173)
#define EIC186                 (*(volatile uint16 *)0xFFFFB174)
#define EIC186L                (*(volatile uint8  *)0xFFFFB174)
#define EIC186H                (*(volatile uint8  *)0xFFFFB175)
#define EIC187                 (*(volatile uint16 *)0xFFFFB176)
#define EIC187L                (*(volatile uint8  *)0xFFFFB176)
#define EIC187H                (*(volatile uint8  *)0xFFFFB177)
#define EIC188                 (*(volatile uint16 *)0xFFFFB178)
#define EIC188L                (*(volatile uint8  *)0xFFFFB178)
#define EIC188H                (*(volatile uint8  *)0xFFFFB179)
#define EIC189                 (*(volatile uint16 *)0xFFFFB17A)
#define EIC189L                (*(volatile uint8  *)0xFFFFB17A)
#define EIC189H                (*(volatile uint8  *)0xFFFFB17B)
#define EIC190                 (*(volatile uint16 *)0xFFFFB17C)
#define EIC190L                (*(volatile uint8  *)0xFFFFB17C)
#define EIC190H                (*(volatile uint8  *)0xFFFFB17D)
#define EIC191                 (*(volatile uint16 *)0xFFFFB17E)
#define EIC191L                (*(volatile uint8  *)0xFFFFB17E)
#define EIC191H                (*(volatile uint8  *)0xFFFFB17F)
#define EIC192                 (*(volatile uint16 *)0xFFFFB180)
#define EIC192L                (*(volatile uint8  *)0xFFFFB180)
#define EIC192H                (*(volatile uint8  *)0xFFFFB181)
#define EIC193                 (*(volatile uint16 *)0xFFFFB182)
#define EIC193L                (*(volatile uint8  *)0xFFFFB182)
#define EIC193H                (*(volatile uint8  *)0xFFFFB183)
#define EIC194                 (*(volatile uint16 *)0xFFFFB184)
#define EIC194L                (*(volatile uint8  *)0xFFFFB184)
#define EIC194H                (*(volatile uint8  *)0xFFFFB185)
#define EIC195                 (*(volatile uint16 *)0xFFFFB186)
#define EIC195L                (*(volatile uint8  *)0xFFFFB186)
#define EIC195H                (*(volatile uint8  *)0xFFFFB187)
#define EIC196                 (*(volatile uint16 *)0xFFFFB188)
#define EIC196L                (*(volatile uint8  *)0xFFFFB188)
#define EIC196H                (*(volatile uint8  *)0xFFFFB189)
#define EIC197                 (*(volatile uint16 *)0xFFFFB18A)
#define EIC197L                (*(volatile uint8  *)0xFFFFB18A)
#define EIC197H                (*(volatile uint8  *)0xFFFFB18B)
#define EIC198                 (*(volatile uint16 *)0xFFFFB18C)
#define EIC198L                (*(volatile uint8  *)0xFFFFB18C)
#define EIC198H                (*(volatile uint8  *)0xFFFFB18D)
#define EIC199                 (*(volatile uint16 *)0xFFFFB18E)
#define EIC199L                (*(volatile uint8  *)0xFFFFB18E)
#define EIC199H                (*(volatile uint8  *)0xFFFFB18F)
#define EIC200                 (*(volatile uint16 *)0xFFFFB190)
#define EIC200L                (*(volatile uint8  *)0xFFFFB190)
#define EIC200H                (*(volatile uint8  *)0xFFFFB191)
#define EIC201                 (*(volatile uint16 *)0xFFFFB192)
#define EIC201L                (*(volatile uint8  *)0xFFFFB192)
#define EIC201H                (*(volatile uint8  *)0xFFFFB193)
#define EIC202                 (*(volatile uint16 *)0xFFFFB194)
#define EIC202L                (*(volatile uint8  *)0xFFFFB194)
#define EIC202H                (*(volatile uint8  *)0xFFFFB195)
#define EIC203                 (*(volatile uint16 *)0xFFFFB196)
#define EIC203L                (*(volatile uint8  *)0xFFFFB196)
#define EIC203H                (*(volatile uint8  *)0xFFFFB197)
#define EIC204                 (*(volatile uint16 *)0xFFFFB198)
#define EIC204L                (*(volatile uint8  *)0xFFFFB198)
#define EIC204H                (*(volatile uint8  *)0xFFFFB199)
#define EIC205                 (*(volatile uint16 *)0xFFFFB19A)
#define EIC205L                (*(volatile uint8  *)0xFFFFB19A)
#define EIC205H                (*(volatile uint8  *)0xFFFFB19B)
#define EIC206                 (*(volatile uint16 *)0xFFFFB19C)
#define EIC206L                (*(volatile uint8  *)0xFFFFB19C)
#define EIC206H                (*(volatile uint8  *)0xFFFFB19D)
#define EIC207                 (*(volatile uint16 *)0xFFFFB19E)
#define EIC207L                (*(volatile uint8  *)0xFFFFB19E)
#define EIC207H                (*(volatile uint8  *)0xFFFFB19F)
#define EIC208                 (*(volatile uint16 *)0xFFFFB1A0)
#define EIC208L                (*(volatile uint8  *)0xFFFFB1A0)
#define EIC208H                (*(volatile uint8  *)0xFFFFB1A1)
#define EIC209                 (*(volatile uint16 *)0xFFFFB1A2)
#define EIC209L                (*(volatile uint8  *)0xFFFFB1A2)
#define EIC209H                (*(volatile uint8  *)0xFFFFB1A3)
#define EIC210                 (*(volatile uint16 *)0xFFFFB1A4)
#define EIC210L                (*(volatile uint8  *)0xFFFFB1A4)
#define EIC210H                (*(volatile uint8  *)0xFFFFB1A5)
#define EIC211                 (*(volatile uint16 *)0xFFFFB1A6)
#define EIC211L                (*(volatile uint8  *)0xFFFFB1A6)
#define EIC211H                (*(volatile uint8  *)0xFFFFB1A7)
#define EIC212                 (*(volatile uint16 *)0xFFFFB1A8)
#define EIC212L                (*(volatile uint8  *)0xFFFFB1A8)
#define EIC212H                (*(volatile uint8  *)0xFFFFB1A9)
#define EIC213                 (*(volatile uint16 *)0xFFFFB1AA)
#define EIC213L                (*(volatile uint8  *)0xFFFFB1AA)
#define EIC213H                (*(volatile uint8  *)0xFFFFB1AB)
#define EIC214                 (*(volatile uint16 *)0xFFFFB1AC)
#define EIC214L                (*(volatile uint8  *)0xFFFFB1AC)
#define EIC214H                (*(volatile uint8  *)0xFFFFB1AD)
#define EIC215                 (*(volatile uint16 *)0xFFFFB1AE)
#define EIC215L                (*(volatile uint8  *)0xFFFFB1AE)
#define EIC215H                (*(volatile uint8  *)0xFFFFB1AF)
#define EIC216                 (*(volatile uint16 *)0xFFFFB1B0)
#define EIC216L                (*(volatile uint8  *)0xFFFFB1B0)
#define EIC216H                (*(volatile uint8  *)0xFFFFB1B1)
#define EIC217                 (*(volatile uint16 *)0xFFFFB1B2)
#define EIC217L                (*(volatile uint8  *)0xFFFFB1B2)
#define EIC217H                (*(volatile uint8  *)0xFFFFB1B3)
#define EIC218                 (*(volatile uint16 *)0xFFFFB1B4)
#define EIC218L                (*(volatile uint8  *)0xFFFFB1B4)
#define EIC218H                (*(volatile uint8  *)0xFFFFB1B5)
#define EIC219                 (*(volatile uint16 *)0xFFFFB1B6)
#define EIC219L                (*(volatile uint8  *)0xFFFFB1B6)
#define EIC219H                (*(volatile uint8  *)0xFFFFB1B7)
#define EIC220                 (*(volatile uint16 *)0xFFFFB1B8)
#define EIC220L                (*(volatile uint8  *)0xFFFFB1B8)
#define EIC220H                (*(volatile uint8  *)0xFFFFB1B9)
#define EIC221                 (*(volatile uint16 *)0xFFFFB1BA)
#define EIC221L                (*(volatile uint8  *)0xFFFFB1BA)
#define EIC221H                (*(volatile uint8  *)0xFFFFB1BB)
#define EIC222                 (*(volatile uint16 *)0xFFFFB1BC)
#define EIC222L                (*(volatile uint8  *)0xFFFFB1BC)
#define EIC222H                (*(volatile uint8  *)0xFFFFB1BD)
#define EIC223                 (*(volatile uint16 *)0xFFFFB1BE)
#define EIC223L                (*(volatile uint8  *)0xFFFFB1BE)
#define EIC223H                (*(volatile uint8  *)0xFFFFB1BF)
#define EIC224                 (*(volatile uint16 *)0xFFFFB1C0)
#define EIC224L                (*(volatile uint8  *)0xFFFFB1C0)
#define EIC224H                (*(volatile uint8  *)0xFFFFB1C1)
#define EIC225                 (*(volatile uint16 *)0xFFFFB1C2)
#define EIC225L                (*(volatile uint8  *)0xFFFFB1C2)
#define EIC225H                (*(volatile uint8  *)0xFFFFB1C3)
#define EIC226                 (*(volatile uint16 *)0xFFFFB1C4)
#define EIC226L                (*(volatile uint8  *)0xFFFFB1C4)
#define EIC226H                (*(volatile uint8  *)0xFFFFB1C5)
#define EIC227                 (*(volatile uint16 *)0xFFFFB1C6)
#define EIC227L                (*(volatile uint8  *)0xFFFFB1C6)
#define EIC227H                (*(volatile uint8  *)0xFFFFB1C7)
#define EIC228                 (*(volatile uint16 *)0xFFFFB1C8)
#define EIC228L                (*(volatile uint8  *)0xFFFFB1C8)
#define EIC228H                (*(volatile uint8  *)0xFFFFB1C9)
#define EIC229                 (*(volatile uint16 *)0xFFFFB1CA)
#define EIC229L                (*(volatile uint8  *)0xFFFFB1CA)
#define EIC229H                (*(volatile uint8  *)0xFFFFB1CB)
#define EIC230                 (*(volatile uint16 *)0xFFFFB1CC)
#define EIC230L                (*(volatile uint8  *)0xFFFFB1CC)
#define EIC230H                (*(volatile uint8  *)0xFFFFB1CD)
#define EIC231                 (*(volatile uint16 *)0xFFFFB1CE)
#define EIC231L                (*(volatile uint8  *)0xFFFFB1CE)
#define EIC231H                (*(volatile uint8  *)0xFFFFB1CF)
#define EIC232                 (*(volatile uint16 *)0xFFFFB1D0)
#define EIC232L                (*(volatile uint8  *)0xFFFFB1D0)
#define EIC232H                (*(volatile uint8  *)0xFFFFB1D1)
#define EIC233                 (*(volatile uint16 *)0xFFFFB1D2)
#define EIC233L                (*(volatile uint8  *)0xFFFFB1D2)
#define EIC233H                (*(volatile uint8  *)0xFFFFB1D3)
#define EIC234                 (*(volatile uint16 *)0xFFFFB1D4)
#define EIC234L                (*(volatile uint8  *)0xFFFFB1D4)
#define EIC234H                (*(volatile uint8  *)0xFFFFB1D5)
#define EIC235                 (*(volatile uint16 *)0xFFFFB1D6)
#define EIC235L                (*(volatile uint8  *)0xFFFFB1D6)
#define EIC235H                (*(volatile uint8  *)0xFFFFB1D7)
#define EIC236                 (*(volatile uint16 *)0xFFFFB1D8)
#define EIC236L                (*(volatile uint8  *)0xFFFFB1D8)
#define EIC236H                (*(volatile uint8  *)0xFFFFB1D9)
#define EIC237                 (*(volatile uint16 *)0xFFFFB1DA)
#define EIC237L                (*(volatile uint8  *)0xFFFFB1DA)
#define EIC237H                (*(volatile uint8  *)0xFFFFB1DB)
#define EIC238                 (*(volatile uint16 *)0xFFFFB1DC)
#define EIC238L                (*(volatile uint8  *)0xFFFFB1DC)
#define EIC238H                (*(volatile uint8  *)0xFFFFB1DD)
#define EIC239                 (*(volatile uint16 *)0xFFFFB1DE)
#define EIC239L                (*(volatile uint8  *)0xFFFFB1DE)
#define EIC239H                (*(volatile uint8  *)0xFFFFB1DF)
#define EIC240                 (*(volatile uint16 *)0xFFFFB1E0)
#define EIC240L                (*(volatile uint8  *)0xFFFFB1E0)
#define EIC240H                (*(volatile uint8  *)0xFFFFB1E1)
#define EIC241                 (*(volatile uint16 *)0xFFFFB1E2)
#define EIC241L                (*(volatile uint8  *)0xFFFFB1E2)
#define EIC241H                (*(volatile uint8  *)0xFFFFB1E3)
#define EIC242                 (*(volatile uint16 *)0xFFFFB1E4)
#define EIC242L                (*(volatile uint8  *)0xFFFFB1E4)
#define EIC242H                (*(volatile uint8  *)0xFFFFB1E5)
#define EIC243                 (*(volatile uint16 *)0xFFFFB1E6)
#define EIC243L                (*(volatile uint8  *)0xFFFFB1E6)
#define EIC243H                (*(volatile uint8  *)0xFFFFB1E7)
#define EIC244                 (*(volatile uint16 *)0xFFFFB1E8)
#define EIC244L                (*(volatile uint8  *)0xFFFFB1E8)
#define EIC244H                (*(volatile uint8  *)0xFFFFB1E9)
#define EIC245                 (*(volatile uint16 *)0xFFFFB1EA)
#define EIC245L                (*(volatile uint8  *)0xFFFFB1EA)
#define EIC245H                (*(volatile uint8  *)0xFFFFB1EB)
#define IMR1                   (*(volatile uint32 *)0xFFFFB404)
#define IMR1L                  (*(volatile uint16 *)0xFFFFB404)
#define IMR1LL                 (*(volatile uint8  *)0xFFFFB404)
#define IMR1LH                 (*(volatile uint8  *)0xFFFFB405)
#define IMR1H                  (*(volatile uint16 *)0xFFFFB406)
#define IMR1HL                 (*(volatile uint8  *)0xFFFFB406)
#define IMR1HH                 (*(volatile uint8  *)0xFFFFB407)
#define IMR1EIMK32             (((volatile __bitf_T *)0xFFFFB404)->bit00)
#define IMR1EIMK33             (((volatile __bitf_T *)0xFFFFB404)->bit01)
#define IMR1EIMK34             (((volatile __bitf_T *)0xFFFFB404)->bit02)
#define IMR1EIMK35             (((volatile __bitf_T *)0xFFFFB404)->bit03)
#define IMR1EIMK36             (((volatile __bitf_T *)0xFFFFB404)->bit04)
#define IMR1EIMK37             (((volatile __bitf_T *)0xFFFFB404)->bit05)
#define IMR1EIMK38             (((volatile __bitf_T *)0xFFFFB404)->bit06)
#define IMR1EIMK39             (((volatile __bitf_T *)0xFFFFB404)->bit07)
#define IMR1EIMK40             (((volatile __bitf_T *)0xFFFFB405)->bit00)
#define IMR1EIMK41             (((volatile __bitf_T *)0xFFFFB405)->bit01)
#define IMR1EIMK42             (((volatile __bitf_T *)0xFFFFB405)->bit02)
#define IMR1EIMK43             (((volatile __bitf_T *)0xFFFFB405)->bit03)
#define IMR1EIMK44             (((volatile __bitf_T *)0xFFFFB405)->bit04)
#define IMR1EIMK45             (((volatile __bitf_T *)0xFFFFB405)->bit05)
#define IMR1EIMK46             (((volatile __bitf_T *)0xFFFFB405)->bit06)
#define IMR1EIMK47             (((volatile __bitf_T *)0xFFFFB405)->bit07)
#define IMR1EIMK48             (((volatile __bitf_T *)0xFFFFB406)->bit00)
#define IMR1EIMK49             (((volatile __bitf_T *)0xFFFFB406)->bit01)
#define IMR1EIMK50             (((volatile __bitf_T *)0xFFFFB406)->bit02)
#define IMR1EIMK51             (((volatile __bitf_T *)0xFFFFB406)->bit03)
#define IMR1EIMK52             (((volatile __bitf_T *)0xFFFFB406)->bit04)
#define IMR1EIMK53             (((volatile __bitf_T *)0xFFFFB406)->bit05)
#define IMR1EIMK54             (((volatile __bitf_T *)0xFFFFB406)->bit06)
#define IMR1EIMK55             (((volatile __bitf_T *)0xFFFFB406)->bit07)
#define IMR1EIMK56             (((volatile __bitf_T *)0xFFFFB407)->bit00)
#define IMR1EIMK57             (((volatile __bitf_T *)0xFFFFB407)->bit01)
#define IMR1EIMK58             (((volatile __bitf_T *)0xFFFFB407)->bit02)
#define IMR1EIMK59             (((volatile __bitf_T *)0xFFFFB407)->bit03)
#define IMR1EIMK60             (((volatile __bitf_T *)0xFFFFB407)->bit04)
#define IMR1EIMK61             (((volatile __bitf_T *)0xFFFFB407)->bit05)
#define IMR1EIMK62             (((volatile __bitf_T *)0xFFFFB407)->bit06)
#define IMR1EIMK63             (((volatile __bitf_T *)0xFFFFB407)->bit07)
#define IMR2                   (*(volatile uint32 *)0xFFFFB408)
#define IMR2L                  (*(volatile uint16 *)0xFFFFB408)
#define IMR2LL                 (*(volatile uint8  *)0xFFFFB408)
#define IMR2LH                 (*(volatile uint8  *)0xFFFFB409)
#define IMR2H                  (*(volatile uint16 *)0xFFFFB40A)
#define IMR2HL                 (*(volatile uint8  *)0xFFFFB40A)
#define IMR2HH                 (*(volatile uint8  *)0xFFFFB40B)
#define IMR2EIMK64             (((volatile __bitf_T *)0xFFFFB408)->bit00)
#define IMR2EIMK65             (((volatile __bitf_T *)0xFFFFB408)->bit01)
#define IMR2EIMK66             (((volatile __bitf_T *)0xFFFFB408)->bit02)
#define IMR2EIMK67             (((volatile __bitf_T *)0xFFFFB408)->bit03)
#define IMR2EIMK68             (((volatile __bitf_T *)0xFFFFB408)->bit04)
#define IMR2EIMK69             (((volatile __bitf_T *)0xFFFFB408)->bit05)
#define IMR2EIMK70             (((volatile __bitf_T *)0xFFFFB408)->bit06)
#define IMR2EIMK71             (((volatile __bitf_T *)0xFFFFB408)->bit07)
#define IMR2EIMK72             (((volatile __bitf_T *)0xFFFFB409)->bit00)
#define IMR2EIMK73             (((volatile __bitf_T *)0xFFFFB409)->bit01)
#define IMR2EIMK74             (((volatile __bitf_T *)0xFFFFB409)->bit02)
#define IMR2EIMK75             (((volatile __bitf_T *)0xFFFFB409)->bit03)
#define IMR2EIMK76             (((volatile __bitf_T *)0xFFFFB409)->bit04)
#define IMR2EIMK77             (((volatile __bitf_T *)0xFFFFB409)->bit05)
#define IMR2EIMK78             (((volatile __bitf_T *)0xFFFFB409)->bit06)
#define IMR2EIMK79             (((volatile __bitf_T *)0xFFFFB409)->bit07)
#define IMR2EIMK80             (((volatile __bitf_T *)0xFFFFB40A)->bit00)
#define IMR2EIMK81             (((volatile __bitf_T *)0xFFFFB40A)->bit01)
#define IMR2EIMK82             (((volatile __bitf_T *)0xFFFFB40A)->bit02)
#define IMR2EIMK83             (((volatile __bitf_T *)0xFFFFB40A)->bit03)
#define IMR2EIMK84             (((volatile __bitf_T *)0xFFFFB40A)->bit04)
#define IMR2EIMK85             (((volatile __bitf_T *)0xFFFFB40A)->bit05)
#define IMR2EIMK86             (((volatile __bitf_T *)0xFFFFB40A)->bit06)
#define IMR2EIMK87             (((volatile __bitf_T *)0xFFFFB40A)->bit07)
#define IMR2EIMK88             (((volatile __bitf_T *)0xFFFFB40B)->bit00)
#define IMR2EIMK89             (((volatile __bitf_T *)0xFFFFB40B)->bit01)
#define IMR2EIMK90             (((volatile __bitf_T *)0xFFFFB40B)->bit02)
#define IMR2EIMK91             (((volatile __bitf_T *)0xFFFFB40B)->bit03)
#define IMR2EIMK92             (((volatile __bitf_T *)0xFFFFB40B)->bit04)
#define IMR2EIMK93             (((volatile __bitf_T *)0xFFFFB40B)->bit05)
#define IMR2EIMK94             (((volatile __bitf_T *)0xFFFFB40B)->bit06)
#define IMR2EIMK95             (((volatile __bitf_T *)0xFFFFB40B)->bit07)
#define IMR3                   (*(volatile uint32 *)0xFFFFB40C)
#define IMR3L                  (*(volatile uint16 *)0xFFFFB40C)
#define IMR3LL                 (*(volatile uint8  *)0xFFFFB40C)
#define IMR3LH                 (*(volatile uint8  *)0xFFFFB40D)
#define IMR3H                  (*(volatile uint16 *)0xFFFFB40E)
#define IMR3HL                 (*(volatile uint8  *)0xFFFFB40E)
#define IMR3HH                 (*(volatile uint8  *)0xFFFFB40F)
#define IMR3EIMK96             (((volatile __bitf_T *)0xFFFFB40C)->bit00)
#define IMR3EIMK97             (((volatile __bitf_T *)0xFFFFB40C)->bit01)
#define IMR3EIMK98             (((volatile __bitf_T *)0xFFFFB40C)->bit02)
#define IMR3EIMK99             (((volatile __bitf_T *)0xFFFFB40C)->bit03)
#define IMR3EIMK100            (((volatile __bitf_T *)0xFFFFB40C)->bit04)
#define IMR3EIMK101            (((volatile __bitf_T *)0xFFFFB40C)->bit05)
#define IMR3EIMK102            (((volatile __bitf_T *)0xFFFFB40C)->bit06)
#define IMR3EIMK103            (((volatile __bitf_T *)0xFFFFB40C)->bit07)
#define IMR3EIMK104            (((volatile __bitf_T *)0xFFFFB40D)->bit00)
#define IMR3EIMK105            (((volatile __bitf_T *)0xFFFFB40D)->bit01)
#define IMR3EIMK106            (((volatile __bitf_T *)0xFFFFB40D)->bit02)
#define IMR3EIMK107            (((volatile __bitf_T *)0xFFFFB40D)->bit03)
#define IMR3EIMK108            (((volatile __bitf_T *)0xFFFFB40D)->bit04)
#define IMR3EIMK109            (((volatile __bitf_T *)0xFFFFB40D)->bit05)
#define IMR3EIMK110            (((volatile __bitf_T *)0xFFFFB40D)->bit06)
#define IMR3EIMK111            (((volatile __bitf_T *)0xFFFFB40D)->bit07)
#define IMR3EIMK112            (((volatile __bitf_T *)0xFFFFB40E)->bit00)
#define IMR3EIMK113            (((volatile __bitf_T *)0xFFFFB40E)->bit01)
#define IMR3EIMK114            (((volatile __bitf_T *)0xFFFFB40E)->bit02)
#define IMR3EIMK115            (((volatile __bitf_T *)0xFFFFB40E)->bit03)
#define IMR3EIMK116            (((volatile __bitf_T *)0xFFFFB40E)->bit04)
#define IMR3EIMK117            (((volatile __bitf_T *)0xFFFFB40E)->bit05)
#define IMR3EIMK118            (((volatile __bitf_T *)0xFFFFB40E)->bit06)
#define IMR3EIMK119            (((volatile __bitf_T *)0xFFFFB40E)->bit07)
#define IMR3EIMK120            (((volatile __bitf_T *)0xFFFFB40F)->bit00)
#define IMR3EIMK121            (((volatile __bitf_T *)0xFFFFB40F)->bit01)
#define IMR3EIMK122            (((volatile __bitf_T *)0xFFFFB40F)->bit02)
#define IMR3EIMK123            (((volatile __bitf_T *)0xFFFFB40F)->bit03)
#define IMR3EIMK124            (((volatile __bitf_T *)0xFFFFB40F)->bit04)
#define IMR3EIMK125            (((volatile __bitf_T *)0xFFFFB40F)->bit05)
#define IMR3EIMK126            (((volatile __bitf_T *)0xFFFFB40F)->bit06)
#define IMR3EIMK127            (((volatile __bitf_T *)0xFFFFB40F)->bit07)
#define IMR4                   (*(volatile uint32 *)0xFFFFB410)
#define IMR4L                  (*(volatile uint16 *)0xFFFFB410)
#define IMR4LL                 (*(volatile uint8  *)0xFFFFB410)
#define IMR4LH                 (*(volatile uint8  *)0xFFFFB411)
#define IMR4H                  (*(volatile uint16 *)0xFFFFB412)
#define IMR4HL                 (*(volatile uint8  *)0xFFFFB412)
#define IMR4HH                 (*(volatile uint8  *)0xFFFFB413)
#define IMR4EIMK128            (((volatile __bitf_T *)0xFFFFB410)->bit00)
#define IMR4EIMK129            (((volatile __bitf_T *)0xFFFFB410)->bit01)
#define IMR4EIMK130            (((volatile __bitf_T *)0xFFFFB410)->bit02)
#define IMR4EIMK131            (((volatile __bitf_T *)0xFFFFB410)->bit03)
#define IMR4EIMK132            (((volatile __bitf_T *)0xFFFFB410)->bit04)
#define IMR4EIMK133            (((volatile __bitf_T *)0xFFFFB410)->bit05)
#define IMR4EIMK134            (((volatile __bitf_T *)0xFFFFB410)->bit06)
#define IMR4EIMK135            (((volatile __bitf_T *)0xFFFFB410)->bit07)
#define IMR4EIMK136            (((volatile __bitf_T *)0xFFFFB411)->bit00)
#define IMR4EIMK137            (((volatile __bitf_T *)0xFFFFB411)->bit01)
#define IMR4EIMK138            (((volatile __bitf_T *)0xFFFFB411)->bit02)
#define IMR4EIMK139            (((volatile __bitf_T *)0xFFFFB411)->bit03)
#define IMR4EIMK140            (((volatile __bitf_T *)0xFFFFB411)->bit04)
#define IMR4EIMK141            (((volatile __bitf_T *)0xFFFFB411)->bit05)
#define IMR4EIMK142            (((volatile __bitf_T *)0xFFFFB411)->bit06)
#define IMR4EIMK143            (((volatile __bitf_T *)0xFFFFB411)->bit07)
#define IMR4EIMK144            (((volatile __bitf_T *)0xFFFFB412)->bit00)
#define IMR4EIMK145            (((volatile __bitf_T *)0xFFFFB412)->bit01)
#define IMR4EIMK146            (((volatile __bitf_T *)0xFFFFB412)->bit02)
#define IMR4EIMK147            (((volatile __bitf_T *)0xFFFFB412)->bit03)
#define IMR4EIMK148            (((volatile __bitf_T *)0xFFFFB412)->bit04)
#define IMR4EIMK149            (((volatile __bitf_T *)0xFFFFB412)->bit05)
#define IMR4EIMK150            (((volatile __bitf_T *)0xFFFFB412)->bit06)
#define IMR4EIMK151            (((volatile __bitf_T *)0xFFFFB412)->bit07)
#define IMR4EIMK152            (((volatile __bitf_T *)0xFFFFB413)->bit00)
#define IMR4EIMK153            (((volatile __bitf_T *)0xFFFFB413)->bit01)
#define IMR4EIMK154            (((volatile __bitf_T *)0xFFFFB413)->bit02)
#define IMR4EIMK155            (((volatile __bitf_T *)0xFFFFB413)->bit03)
#define IMR4EIMK156            (((volatile __bitf_T *)0xFFFFB413)->bit04)
#define IMR4EIMK157            (((volatile __bitf_T *)0xFFFFB413)->bit05)
#define IMR4EIMK158            (((volatile __bitf_T *)0xFFFFB413)->bit06)
#define IMR4EIMK159            (((volatile __bitf_T *)0xFFFFB413)->bit07)
#define IMR5                   (*(volatile uint32 *)0xFFFFB414)
#define IMR5L                  (*(volatile uint16 *)0xFFFFB414)
#define IMR5LL                 (*(volatile uint8  *)0xFFFFB414)
#define IMR5LH                 (*(volatile uint8  *)0xFFFFB415)
#define IMR5H                  (*(volatile uint16 *)0xFFFFB416)
#define IMR5HL                 (*(volatile uint8  *)0xFFFFB416)
#define IMR5HH                 (*(volatile uint8  *)0xFFFFB417)
#define IMR5EIMK160            (((volatile __bitf_T *)0xFFFFB414)->bit00)
#define IMR5EIMK161            (((volatile __bitf_T *)0xFFFFB414)->bit01)
#define IMR5EIMK162            (((volatile __bitf_T *)0xFFFFB414)->bit02)
#define IMR5EIMK163            (((volatile __bitf_T *)0xFFFFB414)->bit03)
#define IMR5EIMK164            (((volatile __bitf_T *)0xFFFFB414)->bit04)
#define IMR5EIMK165            (((volatile __bitf_T *)0xFFFFB414)->bit05)
#define IMR5EIMK166            (((volatile __bitf_T *)0xFFFFB414)->bit06)
#define IMR5EIMK167            (((volatile __bitf_T *)0xFFFFB414)->bit07)
#define IMR5EIMK168            (((volatile __bitf_T *)0xFFFFB415)->bit00)
#define IMR5EIMK169            (((volatile __bitf_T *)0xFFFFB415)->bit01)
#define IMR5EIMK170            (((volatile __bitf_T *)0xFFFFB415)->bit02)
#define IMR5EIMK171            (((volatile __bitf_T *)0xFFFFB415)->bit03)
#define IMR5EIMK172            (((volatile __bitf_T *)0xFFFFB415)->bit04)
#define IMR5EIMK173            (((volatile __bitf_T *)0xFFFFB415)->bit05)
#define IMR5EIMK174            (((volatile __bitf_T *)0xFFFFB415)->bit06)
#define IMR5EIMK175            (((volatile __bitf_T *)0xFFFFB415)->bit07)
#define IMR5EIMK176            (((volatile __bitf_T *)0xFFFFB416)->bit00)
#define IMR5EIMK177            (((volatile __bitf_T *)0xFFFFB416)->bit01)
#define IMR5EIMK178            (((volatile __bitf_T *)0xFFFFB416)->bit02)
#define IMR5EIMK179            (((volatile __bitf_T *)0xFFFFB416)->bit03)
#define IMR5EIMK180            (((volatile __bitf_T *)0xFFFFB416)->bit04)
#define IMR5EIMK181            (((volatile __bitf_T *)0xFFFFB416)->bit05)
#define IMR5EIMK182            (((volatile __bitf_T *)0xFFFFB416)->bit06)
#define IMR5EIMK183            (((volatile __bitf_T *)0xFFFFB416)->bit07)
#define IMR5EIMK184            (((volatile __bitf_T *)0xFFFFB417)->bit00)
#define IMR5EIMK185            (((volatile __bitf_T *)0xFFFFB417)->bit01)
#define IMR5EIMK186            (((volatile __bitf_T *)0xFFFFB417)->bit02)
#define IMR5EIMK187            (((volatile __bitf_T *)0xFFFFB417)->bit03)
#define IMR5EIMK188            (((volatile __bitf_T *)0xFFFFB417)->bit04)
#define IMR5EIMK189            (((volatile __bitf_T *)0xFFFFB417)->bit05)
#define IMR5EIMK190            (((volatile __bitf_T *)0xFFFFB417)->bit06)
#define IMR5EIMK191            (((volatile __bitf_T *)0xFFFFB417)->bit07)
#define IMR6                   (*(volatile uint32 *)0xFFFFB418)
#define IMR6L                  (*(volatile uint16 *)0xFFFFB418)
#define IMR6LL                 (*(volatile uint8  *)0xFFFFB418)
#define IMR6LH                 (*(volatile uint8  *)0xFFFFB419)
#define IMR6H                  (*(volatile uint16 *)0xFFFFB41A)
#define IMR6HL                 (*(volatile uint8  *)0xFFFFB41A)
#define IMR6HH                 (*(volatile uint8  *)0xFFFFB41B)
#define IMR6EIMK192            (((volatile __bitf_T *)0xFFFFB418)->bit00)
#define IMR6EIMK193            (((volatile __bitf_T *)0xFFFFB418)->bit01)
#define IMR6EIMK194            (((volatile __bitf_T *)0xFFFFB418)->bit02)
#define IMR6EIMK195            (((volatile __bitf_T *)0xFFFFB418)->bit03)
#define IMR6EIMK196            (((volatile __bitf_T *)0xFFFFB418)->bit04)
#define IMR6EIMK197            (((volatile __bitf_T *)0xFFFFB418)->bit05)
#define IMR6EIMK198            (((volatile __bitf_T *)0xFFFFB418)->bit06)
#define IMR6EIMK199            (((volatile __bitf_T *)0xFFFFB418)->bit07)
#define IMR6IMK200             (((volatile __bitf_T *)0xFFFFB419)->bit00)
#define IMR6IMK201             (((volatile __bitf_T *)0xFFFFB419)->bit01)
#define IMR6IMK202             (((volatile __bitf_T *)0xFFFFB419)->bit02)
#define IMR6IMK203             (((volatile __bitf_T *)0xFFFFB419)->bit03)
#define IMR6IMK204             (((volatile __bitf_T *)0xFFFFB419)->bit04)
#define IMR6IMK205             (((volatile __bitf_T *)0xFFFFB419)->bit05)
#define IMR6IMK206             (((volatile __bitf_T *)0xFFFFB419)->bit06)
#define IMR6IMK207             (((volatile __bitf_T *)0xFFFFB419)->bit07)
#define IMR6EIMK208            (((volatile __bitf_T *)0xFFFFB41A)->bit00)
#define IMR6EIMK209            (((volatile __bitf_T *)0xFFFFB41A)->bit01)
#define IMR6EIMK210            (((volatile __bitf_T *)0xFFFFB41A)->bit02)
#define IMR6EIMK211            (((volatile __bitf_T *)0xFFFFB41A)->bit03)
#define IMR6EIMK212            (((volatile __bitf_T *)0xFFFFB41A)->bit04)
#define IMR6EIMK213            (((volatile __bitf_T *)0xFFFFB41A)->bit05)
#define IMR6EIMK214            (((volatile __bitf_T *)0xFFFFB41A)->bit06)
#define IMR6EIMK215            (((volatile __bitf_T *)0xFFFFB41A)->bit07)
#define IMR6EIMK216            (((volatile __bitf_T *)0xFFFFB41B)->bit00)
#define IMR6EIMK217            (((volatile __bitf_T *)0xFFFFB41B)->bit01)
#define IMR6EIMK218            (((volatile __bitf_T *)0xFFFFB41B)->bit02)
#define IMR6EIMK219            (((volatile __bitf_T *)0xFFFFB41B)->bit03)
#define IMR6EIMK220            (((volatile __bitf_T *)0xFFFFB41B)->bit04)
#define IMR6EIMK221            (((volatile __bitf_T *)0xFFFFB41B)->bit05)
#define IMR6EIMK222            (((volatile __bitf_T *)0xFFFFB41B)->bit06)
#define IMR6EIMK223            (((volatile __bitf_T *)0xFFFFB41B)->bit07)
#define IMR7                   (*(volatile uint32 *)0xFFFFB41C)
#define IMR7L                  (*(volatile uint16 *)0xFFFFB41C)
#define IMR7LL                 (*(volatile uint8  *)0xFFFFB41C)
#define IMR7LH                 (*(volatile uint8  *)0xFFFFB41D)
#define IMR7H                  (*(volatile uint16 *)0xFFFFB41E)
#define IMR7HL                 (*(volatile uint8  *)0xFFFFB41E)
#define IMR7HH                 (*(volatile uint8  *)0xFFFFB41F)
#define IMR7EIMK224            (((volatile __bitf_T *)0xFFFFB41C)->bit00)
#define IMR7EIMK225            (((volatile __bitf_T *)0xFFFFB41C)->bit01)
#define IMR7EIMK226            (((volatile __bitf_T *)0xFFFFB41C)->bit02)
#define IMR7EIMK227            (((volatile __bitf_T *)0xFFFFB41C)->bit03)
#define IMR7EIMK228            (((volatile __bitf_T *)0xFFFFB41C)->bit04)
#define IMR7EIMK229            (((volatile __bitf_T *)0xFFFFB41C)->bit05)
#define IMR7EIMK230            (((volatile __bitf_T *)0xFFFFB41C)->bit06)
#define IMR7EIMK231            (((volatile __bitf_T *)0xFFFFB41C)->bit07)
#define IMR7EIMK232            (((volatile __bitf_T *)0xFFFFB41D)->bit00)
#define IMR7EIMK233            (((volatile __bitf_T *)0xFFFFB41D)->bit01)
#define IMR7EIMK234            (((volatile __bitf_T *)0xFFFFB41D)->bit02)
#define IMR7EIMK235            (((volatile __bitf_T *)0xFFFFB41D)->bit03)
#define IMR7EIMK236            (((volatile __bitf_T *)0xFFFFB41D)->bit04)
#define IMR7EIMK237            (((volatile __bitf_T *)0xFFFFB41D)->bit05)
#define IMR7EIMK238            (((volatile __bitf_T *)0xFFFFB41D)->bit06)
#define IMR7EIMK239            (((volatile __bitf_T *)0xFFFFB41D)->bit07)
#define IMR7EIMK240            (((volatile __bitf_T *)0xFFFFB41E)->bit00)
#define IMR7EIMK241            (((volatile __bitf_T *)0xFFFFB41E)->bit01)
#define IMR7EIMK242            (((volatile __bitf_T *)0xFFFFB41E)->bit02)
#define IMR7EIMK243            (((volatile __bitf_T *)0xFFFFB41E)->bit03)
#define IMR7EIMK244            (((volatile __bitf_T *)0xFFFFB41E)->bit04)
#define IMR7EIMK245            (((volatile __bitf_T *)0xFFFFB41E)->bit05)
#define IMR7EIMK246            (((volatile __bitf_T *)0xFFFFB41E)->bit06)
#define IMR7EIMK247            (((volatile __bitf_T *)0xFFFFB41E)->bit07)
#define IMR7EIMK248            (((volatile __bitf_T *)0xFFFFB41F)->bit00)
#define IMR7EIMK249            (((volatile __bitf_T *)0xFFFFB41F)->bit01)
#define IMR7EIMK250            (((volatile __bitf_T *)0xFFFFB41F)->bit02)
#define IMR7EIMK251            (((volatile __bitf_T *)0xFFFFB41F)->bit03)
#define IMR7EIMK252            (((volatile __bitf_T *)0xFFFFB41F)->bit04)
#define IMR7EIMK253            (((volatile __bitf_T *)0xFFFFB41F)->bit05)
#define IMR7EIMK254            (((volatile __bitf_T *)0xFFFFB41F)->bit06)
#define IMR7EIMK255            (((volatile __bitf_T *)0xFFFFB41F)->bit07)
#define EIBD32                 (*(volatile uint32 *)0xFFFFB880)
#define EIBD33                 (*(volatile uint32 *)0xFFFFB884)
#define EIBD34                 (*(volatile uint32 *)0xFFFFB888)
#define EIBD35                 (*(volatile uint32 *)0xFFFFB88C)
#define EIBD36                 (*(volatile uint32 *)0xFFFFB890)
#define EIBD37                 (*(volatile uint32 *)0xFFFFB894)
#define EIBD38                 (*(volatile uint32 *)0xFFFFB898)
#define EIBD39                 (*(volatile uint32 *)0xFFFFB89C)
#define EIBD40                 (*(volatile uint32 *)0xFFFFB8A0)
#define EIBD41                 (*(volatile uint32 *)0xFFFFB8A4)
#define EIBD42                 (*(volatile uint32 *)0xFFFFB8A8)
#define EIBD43                 (*(volatile uint32 *)0xFFFFB8AC)
#define EIBD44                 (*(volatile uint32 *)0xFFFFB8B0)
#define EIBD45                 (*(volatile uint32 *)0xFFFFB8B4)
#define EIBD46                 (*(volatile uint32 *)0xFFFFB8B8)
#define EIBD47                 (*(volatile uint32 *)0xFFFFB8BC)
#define EIBD48                 (*(volatile uint32 *)0xFFFFB8C0)
#define EIBD49                 (*(volatile uint32 *)0xFFFFB8C4)
#define EIBD50                 (*(volatile uint32 *)0xFFFFB8C8)
#define EIBD51                 (*(volatile uint32 *)0xFFFFB8CC)
#define EIBD52                 (*(volatile uint32 *)0xFFFFB8D0)
#define EIBD53                 (*(volatile uint32 *)0xFFFFB8D4)
#define EIBD54                 (*(volatile uint32 *)0xFFFFB8D8)
#define EIBD55                 (*(volatile uint32 *)0xFFFFB8DC)
#define EIBD56                 (*(volatile uint32 *)0xFFFFB8E0)
#define EIBD57                 (*(volatile uint32 *)0xFFFFB8E4)
#define EIBD58                 (*(volatile uint32 *)0xFFFFB8E8)
#define EIBD59                 (*(volatile uint32 *)0xFFFFB8EC)
#define EIBD60                 (*(volatile uint32 *)0xFFFFB8F0)
#define EIBD61                 (*(volatile uint32 *)0xFFFFB8F4)
#define EIBD62                 (*(volatile uint32 *)0xFFFFB8F8)
#define EIBD63                 (*(volatile uint32 *)0xFFFFB8FC)
#define EIBD64                 (*(volatile uint32 *)0xFFFFB900)
#define EIBD65                 (*(volatile uint32 *)0xFFFFB904)
#define EIBD66                 (*(volatile uint32 *)0xFFFFB908)
#define EIBD67                 (*(volatile uint32 *)0xFFFFB90C)
#define EIBD68                 (*(volatile uint32 *)0xFFFFB910)
#define EIBD69                 (*(volatile uint32 *)0xFFFFB914)
#define EIBD70                 (*(volatile uint32 *)0xFFFFB918)
#define EIBD71                 (*(volatile uint32 *)0xFFFFB91C)
#define EIBD72                 (*(volatile uint32 *)0xFFFFB920)
#define EIBD73                 (*(volatile uint32 *)0xFFFFB924)
#define EIBD74                 (*(volatile uint32 *)0xFFFFB928)
#define EIBD75                 (*(volatile uint32 *)0xFFFFB92C)
#define EIBD76                 (*(volatile uint32 *)0xFFFFB930)
#define EIBD77                 (*(volatile uint32 *)0xFFFFB934)
#define EIBD78                 (*(volatile uint32 *)0xFFFFB938)
#define EIBD79                 (*(volatile uint32 *)0xFFFFB93C)
#define EIBD80                 (*(volatile uint32 *)0xFFFFB940)
#define EIBD81                 (*(volatile uint32 *)0xFFFFB944)
#define EIBD82                 (*(volatile uint32 *)0xFFFFB948)
#define EIBD83                 (*(volatile uint32 *)0xFFFFB94C)
#define EIBD84                 (*(volatile uint32 *)0xFFFFB950)
#define EIBD85                 (*(volatile uint32 *)0xFFFFB954)
#define EIBD86                 (*(volatile uint32 *)0xFFFFB958)
#define EIBD87                 (*(volatile uint32 *)0xFFFFB95C)
#define EIBD88                 (*(volatile uint32 *)0xFFFFB960)
#define EIBD89                 (*(volatile uint32 *)0xFFFFB964)
#define EIBD90                 (*(volatile uint32 *)0xFFFFB968)
#define EIBD91                 (*(volatile uint32 *)0xFFFFB96C)
#define EIBD92                 (*(volatile uint32 *)0xFFFFB970)
#define EIBD93                 (*(volatile uint32 *)0xFFFFB974)
#define EIBD94                 (*(volatile uint32 *)0xFFFFB978)
#define EIBD95                 (*(volatile uint32 *)0xFFFFB97C)
#define EIBD96                 (*(volatile uint32 *)0xFFFFB980)
#define EIBD97                 (*(volatile uint32 *)0xFFFFB984)
#define EIBD98                 (*(volatile uint32 *)0xFFFFB988)
#define EIBD99                 (*(volatile uint32 *)0xFFFFB98C)
#define EIBD100                (*(volatile uint32 *)0xFFFFB990)
#define EIBD101                (*(volatile uint32 *)0xFFFFB994)
#define EIBD102                (*(volatile uint32 *)0xFFFFB998)
#define EIBD103                (*(volatile uint32 *)0xFFFFB99C)
#define EIBD104                (*(volatile uint32 *)0xFFFFB9A0)
#define EIBD105                (*(volatile uint32 *)0xFFFFB9A4)
#define EIBD106                (*(volatile uint32 *)0xFFFFB9A8)
#define EIBD107                (*(volatile uint32 *)0xFFFFB9AC)
#define EIBD108                (*(volatile uint32 *)0xFFFFB9B0)
#define EIBD109                (*(volatile uint32 *)0xFFFFB9B4)
#define EIBD110                (*(volatile uint32 *)0xFFFFB9B8)
#define EIBD111                (*(volatile uint32 *)0xFFFFB9BC)
#define EIBD112                (*(volatile uint32 *)0xFFFFB9C0)
#define EIBD113                (*(volatile uint32 *)0xFFFFB9C4)
#define EIBD114                (*(volatile uint32 *)0xFFFFB9C8)
#define EIBD115                (*(volatile uint32 *)0xFFFFB9CC)
#define EIBD116                (*(volatile uint32 *)0xFFFFB9D0)
#define EIBD117                (*(volatile uint32 *)0xFFFFB9D4)
#define EIBD118                (*(volatile uint32 *)0xFFFFB9D8)
#define EIBD119                (*(volatile uint32 *)0xFFFFB9DC)
#define EIBD120                (*(volatile uint32 *)0xFFFFB9E0)
#define EIBD121                (*(volatile uint32 *)0xFFFFB9E4)
#define EIBD122                (*(volatile uint32 *)0xFFFFB9E8)
#define EIBD123                (*(volatile uint32 *)0xFFFFB9EC)
#define EIBD124                (*(volatile uint32 *)0xFFFFB9F0)
#define EIBD125                (*(volatile uint32 *)0xFFFFB9F4)
#define EIBD126                (*(volatile uint32 *)0xFFFFB9F8)
#define EIBD127                (*(volatile uint32 *)0xFFFFB9FC)
#define EIBD128                (*(volatile uint32 *)0xFFFFBA00)
#define EIBD129                (*(volatile uint32 *)0xFFFFBA04)
#define EIBD130                (*(volatile uint32 *)0xFFFFBA08)
#define EIBD131                (*(volatile uint32 *)0xFFFFBA0C)
#define EIBD132                (*(volatile uint32 *)0xFFFFBA10)
#define EIBD133                (*(volatile uint32 *)0xFFFFBA14)
#define EIBD134                (*(volatile uint32 *)0xFFFFBA18)
#define EIBD135                (*(volatile uint32 *)0xFFFFBA1C)
#define EIBD136                (*(volatile uint32 *)0xFFFFBA20)
#define EIBD137                (*(volatile uint32 *)0xFFFFBA24)
#define EIBD138                (*(volatile uint32 *)0xFFFFBA28)
#define EIBD139                (*(volatile uint32 *)0xFFFFBA2C)
#define EIBD140                (*(volatile uint32 *)0xFFFFBA30)
#define EIBD141                (*(volatile uint32 *)0xFFFFBA34)
#define EIBD142                (*(volatile uint32 *)0xFFFFBA38)
#define EIBD143                (*(volatile uint32 *)0xFFFFBA3C)
#define EIBD144                (*(volatile uint32 *)0xFFFFBA40)
#define EIBD145                (*(volatile uint32 *)0xFFFFBA44)
#define EIBD146                (*(volatile uint32 *)0xFFFFBA48)
#define EIBD147                (*(volatile uint32 *)0xFFFFBA4C)
#define EIBD148                (*(volatile uint32 *)0xFFFFBA50)
#define EIBD149                (*(volatile uint32 *)0xFFFFBA54)
#define EIBD150                (*(volatile uint32 *)0xFFFFBA58)
#define EIBD151                (*(volatile uint32 *)0xFFFFBA5C)
#define EIBD152                (*(volatile uint32 *)0xFFFFBA60)
#define EIBD153                (*(volatile uint32 *)0xFFFFBA64)
#define EIBD154                (*(volatile uint32 *)0xFFFFBA68)
#define EIBD155                (*(volatile uint32 *)0xFFFFBA6C)
#define EIBD156                (*(volatile uint32 *)0xFFFFBA70)
#define EIBD157                (*(volatile uint32 *)0xFFFFBA74)
#define EIBD158                (*(volatile uint32 *)0xFFFFBA78)
#define EIBD159                (*(volatile uint32 *)0xFFFFBA7C)
#define EIBD160                (*(volatile uint32 *)0xFFFFBA80)
#define EIBD161                (*(volatile uint32 *)0xFFFFBA84)
#define EIBD162                (*(volatile uint32 *)0xFFFFBA88)
#define EIBD163                (*(volatile uint32 *)0xFFFFBA8C)
#define EIBD164                (*(volatile uint32 *)0xFFFFBA90)
#define EIBD165                (*(volatile uint32 *)0xFFFFBA94)
#define EIBD166                (*(volatile uint32 *)0xFFFFBA98)
#define EIBD167                (*(volatile uint32 *)0xFFFFBA9C)
#define EIBD168                (*(volatile uint32 *)0xFFFFBAA0)
#define EIBD169                (*(volatile uint32 *)0xFFFFBAA4)
#define EIBD170                (*(volatile uint32 *)0xFFFFBAA8)
#define EIBD171                (*(volatile uint32 *)0xFFFFBAAC)
#define EIBD172                (*(volatile uint32 *)0xFFFFBAB0)
#define EIBD173                (*(volatile uint32 *)0xFFFFBAB4)
#define EIBD174                (*(volatile uint32 *)0xFFFFBAB8)
#define EIBD175                (*(volatile uint32 *)0xFFFFBABC)
#define EIBD176                (*(volatile uint32 *)0xFFFFBAC0)
#define EIBD177                (*(volatile uint32 *)0xFFFFBAC4)
#define EIBD178                (*(volatile uint32 *)0xFFFFBAC8)
#define EIBD179                (*(volatile uint32 *)0xFFFFBACC)
#define EIBD180                (*(volatile uint32 *)0xFFFFBAD0)
#define EIBD181                (*(volatile uint32 *)0xFFFFBAD4)
#define EIBD182                (*(volatile uint32 *)0xFFFFBAD8)
#define EIBD183                (*(volatile uint32 *)0xFFFFBADC)
#define EIBD184                (*(volatile uint32 *)0xFFFFBAE0)
#define EIBD185                (*(volatile uint32 *)0xFFFFBAE4)
#define EIBD186                (*(volatile uint32 *)0xFFFFBAE8)
#define EIBD187                (*(volatile uint32 *)0xFFFFBAEC)
#define EIBD188                (*(volatile uint32 *)0xFFFFBAF0)
#define EIBD189                (*(volatile uint32 *)0xFFFFBAF4)
#define EIBD190                (*(volatile uint32 *)0xFFFFBAF8)
#define EIBD191                (*(volatile uint32 *)0xFFFFBAFC)
#define EIBD192                (*(volatile uint32 *)0xFFFFBB00)
#define EIBD193                (*(volatile uint32 *)0xFFFFBB04)
#define EIBD194                (*(volatile uint32 *)0xFFFFBB08)
#define EIBD195                (*(volatile uint32 *)0xFFFFBB0C)
#define EIBD196                (*(volatile uint32 *)0xFFFFBB10)
#define EIBD197                (*(volatile uint32 *)0xFFFFBB14)
#define EIBD198                (*(volatile uint32 *)0xFFFFBB18)
#define EIBD199                (*(volatile uint32 *)0xFFFFBB1C)
#define EIBD200                (*(volatile uint32 *)0xFFFFBB20)
#define EIBD201                (*(volatile uint32 *)0xFFFFBB24)
#define EIBD202                (*(volatile uint32 *)0xFFFFBB28)
#define EIBD203                (*(volatile uint32 *)0xFFFFBB2C)
#define EIBD204                (*(volatile uint32 *)0xFFFFBB30)
#define EIBD205                (*(volatile uint32 *)0xFFFFBB34)
#define EIBD206                (*(volatile uint32 *)0xFFFFBB38)
#define EIBD207                (*(volatile uint32 *)0xFFFFBB3C)
#define EIBD208                (*(volatile uint32 *)0xFFFFBB40)
#define EIBD209                (*(volatile uint32 *)0xFFFFBB44)
#define EIBD210                (*(volatile uint32 *)0xFFFFBB48)
#define EIBD211                (*(volatile uint32 *)0xFFFFBB4C)
#define EIBD212                (*(volatile uint32 *)0xFFFFBB50)
#define EIBD213                (*(volatile uint32 *)0xFFFFBB54)
#define EIBD214                (*(volatile uint32 *)0xFFFFBB58)
#define EIBD215                (*(volatile uint32 *)0xFFFFBB5C)
#define EIBD216                (*(volatile uint32 *)0xFFFFBB60)
#define EIBD217                (*(volatile uint32 *)0xFFFFBB64)
#define EIBD218                (*(volatile uint32 *)0xFFFFBB68)
#define EIBD219                (*(volatile uint32 *)0xFFFFBB6C)
#define EIBD220                (*(volatile uint32 *)0xFFFFBB70)
#define EIBD221                (*(volatile uint32 *)0xFFFFBB74)
#define EIBD222                (*(volatile uint32 *)0xFFFFBB78)
#define EIBD223                (*(volatile uint32 *)0xFFFFBB7C)
#define EIBD224                (*(volatile uint32 *)0xFFFFBB80)
#define EIBD225                (*(volatile uint32 *)0xFFFFBB84)
#define EIBD226                (*(volatile uint32 *)0xFFFFBB88)
#define EIBD227                (*(volatile uint32 *)0xFFFFBB8C)
#define EIBD228                (*(volatile uint32 *)0xFFFFBB90)
#define EIBD229                (*(volatile uint32 *)0xFFFFBB94)
#define EIBD230                (*(volatile uint32 *)0xFFFFBB98)
#define EIBD231                (*(volatile uint32 *)0xFFFFBB9C)
#define EIBD232                (*(volatile uint32 *)0xFFFFBBA0)
#define EIBD233                (*(volatile uint32 *)0xFFFFBBA4)
#define EIBD234                (*(volatile uint32 *)0xFFFFBBA8)
#define EIBD235                (*(volatile uint32 *)0xFFFFBBAC)
#define EIBD236                (*(volatile uint32 *)0xFFFFBBB0)
#define EIBD237                (*(volatile uint32 *)0xFFFFBBB4)
#define EIBD238                (*(volatile uint32 *)0xFFFFBBB8)
#define EIBD239                (*(volatile uint32 *)0xFFFFBBBC)
#define EIBD240                (*(volatile uint32 *)0xFFFFBBC0)
#define EIBD241                (*(volatile uint32 *)0xFFFFBBC4)
#define EIBD242                (*(volatile uint32 *)0xFFFFBBC8)
#define EIBD243                (*(volatile uint32 *)0xFFFFBBCC)
#define EIBD244                (*(volatile uint32 *)0xFFFFBBD0)
#define EIBD245                (*(volatile uint32 *)0xFFFFBBD4)

#define FLXA0     (*(volatile __type63  *)0x10020000) /* FLXA0 */
#define ETNA0     (*(volatile __type64  *)0x10024000) /* ETNA0 */
#define FLMD      (*(volatile __type65  *)0xFFA00000) /* FLMD */
#define FACI0     (*(volatile __type66  *)0xFFA10000) /* FACI0 */
#define FACI1     (*(volatile __type66  *)0xFFA18000) /* FACI1 */
#define DNFA2     (*(volatile __type67  *)0xFFC30200) /* DNFA2 */
#define DNFA3     (*(volatile __type67  *)0xFFC30300) /* DNFA3 */
#define DNFA4     (*(volatile __type67  *)0xFFC30400) /* DNFA4 */
#define DNFA5     (*(volatile __type68  *)0xFFC30500) /* DNFA5 */
#define DNFA6     (*(volatile __type67  *)0xFFC30600) /* DNFA6 */
#define DNFA7     (*(volatile __type67  *)0xFFC30700) /* DNFA7 */
#define FCLA0     (*(volatile __type69  *)0xFFC34000) /* FCLA0 */
#define FCLA1     (*(volatile __type70  *)0xFFC34100) /* FCLA1 */
#define FCLA2     (*(volatile __type71  *)0xFFC34200) /* FCLA2 */
#define FCLA3     (*(volatile __type71  *)0xFFC34300) /* FCLA3 */
#define FCLA4     (*(volatile __type71  *)0xFFC34400) /* FCLA4 */
#define FCLA5     (*(volatile __type72  *)0xFFC34500) /* FCLA5 */
#define FCLA6     (*(volatile __type73  *)0xFFC34600) /* FCLA6 */
#define FSGD5A    (*(volatile __type74  *)0xFFC5A000) /* FSGD5A */
#define ERRSLV5A  (*(volatile __type75  *)0xFFC5A100) /* ERRSLV5A */
#define FSGD5B    (*(volatile __type76  *)0xFFC5A200) /* FSGD5B */
#define ERRSLV5B  (*(volatile __type75  *)0xFFC5A300) /* ERRSLV5B */
#define FSGD5C    (*(volatile __type77  *)0xFFC5A400) /* FSGD5C */
#define ERRSLV5C  (*(volatile __type75  *)0xFFC5A500) /* ERRSLV5C */
#define FSGD5D    (*(volatile __type76  *)0xFFC5A600) /* FSGD5D */
#define ERRSLV5D  (*(volatile __type75  *)0xFFC5A700) /* ERRSLV5D */
#define ERRSLV5AI (*(volatile __type75  *)0xFFC5A800) /* ERRSLV5AI */
#define ERRSLV5BI (*(volatile __type75  *)0xFFC5A900) /* ERRSLV5BI */
#define ERRSLVDG0 (*(volatile __type75  *)0xFFC5AE00) /* ERRSLVDG0 */
#define ERRSLVDG1 (*(volatile __type75  *)0xFFC5AF00) /* ERRSLVDG1 */
#define ECCCSIH0  (*(volatile __type78  *)0xFFC70000) /* ECCCSIH0 */
#define ECCCSIH2  (*(volatile __type78  *)0xFFC70100) /* ECCCSIH2 */
#define ECCTTCAN0 (*(volatile __type78  *)0xFFC71000) /* ECCTTCAN0 */
#define ECCMCAN1  (*(volatile __type78  *)0xFFC71100) /* ECCMCAN1 */
#define ECCFLX0   (*(volatile __type78  *)0xFFC72000) /* ECCFLX0 */
#define ECCFLX0T0 (*(volatile __type78  *)0xFFC72100) /* ECCFLX0T0 */
#define ECCFLX0T1 (*(volatile __type78  *)0xFFC72200) /* ECCFLX0T1 */
#define ECCCSIH1  (*(volatile __type78  *)0xFFC78000) /* ECCCSIH1 */
#define ECCCSIH3  (*(volatile __type78  *)0xFFC78100) /* ECCCSIH3 */
#define ECCMCAN0  (*(volatile __type78  *)0xFFC79000) /* ECCMCAN0 */
#define CSIH1     (*(volatile __type79  *)0xFFCA0000) /* CSIH1 */
#define PMMA1     (*(volatile __type80  *)0xFFCA2000) /* PMMA1 */
#define CSIH3     (*(volatile __type79  *)0xFFCA3000) /* CSIH3 */
#define PMMA3     (*(volatile __type80  *)0xFFCA5000) /* PMMA3 */
#define HSUS1     (*(volatile __type81  *)0xFFCA8000) /* HSUS1 */
#define RLN31     (*(volatile __type82  *)0xFFCAC000) /* RLN31 */
#define RSENT0    (*(volatile __type83  *)0xFFCDC000) /* RSENT0 */
#define RSENT1    (*(volatile __type83  *)0xFFCDC100) /* RSENT1 */
#define RSENT2    (*(volatile __type83  *)0xFFCDC200) /* RSENT2 */
#define RSENT3    (*(volatile __type83  *)0xFFCDC300) /* RSENT3 */
#define RSENT4    (*(volatile __type83  *)0xFFCDC400) /* RSENT4 */
#define RSENT5    (*(volatile __type83  *)0xFFCDC500) /* RSENT5 */
#define RSENT6    (*(volatile __type84  *)0xFFCDC600) /* RSENT6 */
#define SINT      (*(volatile __type85  *)0xFFCDE000) /* SINT */
#define MTTCAN0   (*(volatile __type86  *)0xFFD30000) /* MTTCAN0 */
#define MCAN1     (*(volatile __type87  *)0xFFD31000) /* MCAN1 */
#define DCRB0     (*(volatile __type88  *)0xFFD50000) /* DCRB0 */
#define DCRB2     (*(volatile __type88  *)0xFFD51000) /* DCRB2 */
#define ECMM0     (*(volatile __type89  *)0xFFD60000) /* ECMM0 */
#define ECMC0     (*(volatile __type89  *)0xFFD61000) /* ECMC0 */
#define ECM0      (*(volatile __type90  *)0xFFD62000) /* ECM0 */
#define PIC2C     (*(volatile __type91  *)0xFFD68000) /* PIC2C */
#define CSIH0     (*(volatile __type79  *)0xFFD80000) /* CSIH0 */
#define PMMA0     (*(volatile __type80  *)0xFFD82000) /* PMMA0 */
#define CSIH2     (*(volatile __type79  *)0xFFD83000) /* CSIH2 */
#define PMMA2     (*(volatile __type80  *)0xFFD85000) /* PMMA2 */
#define HSUS0     (*(volatile __type81  *)0xFFD88000) /* HSUS0 */
#define RLN30     (*(volatile __type82  *)0xFFD8C000) /* RLN30 */
#define STM0      (*(volatile __type92  *)0xFFDD8000) /* STM0 */
#define FSGD2A    (*(volatile __type93  *)0xFFDDD000) /* FSGD2A */
#define ERRSLV2   (*(volatile __type75  *)0xFFDDD100) /* ERRSLV2 */
#define ERRSLV2AI (*(volatile __type75  *)0xFFDDD800) /* ERRSLV2AI */
#define GTM0      (*(volatile __type94  *)0xFFE00000) /* GTM0 */
#define ECCGTM0   (*(volatile __type78  *)0xFFE80000) /* ECCGTM0 */
#define ECCGTM1   (*(volatile __type78  *)0xFFE80100) /* ECCGTM1 */
#define ECCGTM2   (*(volatile __type78  *)0xFFE80200) /* ECCGTM2 */
#define ECCGTM3   (*(volatile __type78  *)0xFFE80300) /* ECCGTM3 */
#define WDTA0     (*(volatile __type95  *)0xFFED0000) /* WDTA0 */
#define SWD0      (*(volatile __type96  *)0xFFED8000) /* SWD0 */
#define FSGD1A    (*(volatile __type74  *)0xFFEE0000) /* FSGD1A */
#define ERRSLV1   (*(volatile __type75  *)0xFFEE0100) /* ERRSLV1 */
#define FSGD1B    (*(volatile __type97  *)0xFFEE0200) /* FSGD1B */
#define ERRSLV1AI (*(volatile __type75  *)0xFFEE0800) /* ERRSLV1AI */
#define MCAN0     (*(volatile __type98  *)0xFFEF0000) /* MCAN0 */
#define DCRB1     (*(volatile __type88  *)0xFFF70000) /* DCRB1 */
#define DCRB3     (*(volatile __type88  *)0xFFF71000) /* DCRB3 */
#define CLMA0     (*(volatile __type99  *)0xFFF83100) /* CLMA0 */
#define CLMA1     (*(volatile __type99  *)0xFFF83200) /* CLMA1 */
#define CLMA2     (*(volatile __type99  *)0xFFF83300) /* CLMA2 */
#define CLMA3     (*(volatile __type99  *)0xFFF83400) /* CLMA3 */
#define CLMA5     (*(volatile __type100 *)0xFFF86800) /* CLMA5 */
#define FSGD4A    (*(volatile __type101 *)0xFFF90000) /* FSGD4A */
#define ERRSLV4   (*(volatile __type75  *)0xFFF90100) /* ERRSLV4 */
#define FSGD4B    (*(volatile __type102 *)0xFFF90200) /* FSGD4B */
#define FSGD4C    (*(volatile __type102 *)0xFFF90400) /* FSGD4C */
#define ERRSLV4C  (*(volatile __type75  *)0xFFF90500) /* ERRSLV4C */
#define ERRSLV4AI (*(volatile __type75  *)0xFFF90800) /* ERRSLV4AI */
#define ADCF0     (*(volatile __type103 *)0xFFF91000) /* ADCF0 */
#define ADCF1     (*(volatile __type104 *)0xFFF92000) /* ADCF1 */
#define OTS0      (*(volatile __type105 *)0xFFF93000) /* OTS0 */
#define FSGD3A    (*(volatile __type101 *)0xFFF94000) /* FSGD3A */
#define ERRSLV3   (*(volatile __type75  *)0xFFF94100) /* ERRSLV3 */
#define FSGD3B    (*(volatile __type106 *)0xFFF94200) /* FSGD3B */
#define ERRSLV3AI (*(volatile __type75  *)0xFFF94800) /* ERRSLV3AI */
#define NTU0      (*(volatile __type107 *)0xFFF9C008) /* NTU0 */
#define FSGDF0    (*(volatile __type77  *)0xFFFA0000) /* FSGDF0 */
#define ERRSLVF0  (*(volatile __type75  *)0xFFFA0010) /* ERRSLVF0 */
#define FSGDE0    (*(volatile __type77  *)0xFFFA0040) /* FSGDE0 */
#define ERRSLVE0  (*(volatile __type75  *)0xFFFA0050) /* ERRSLVE0 */
#define ERRSLVFI  (*(volatile __type75  *)0xFFFA0100) /* ERRSLVFI */
#define ERRSLVEI  (*(volatile __type75  *)0xFFFA0110) /* ERRSLVEI */
#define ERRSLVMI  (*(volatile __type75  *)0xFFFA0120) /* ERRSLVMI */
#define ERRSLVHI  (*(volatile __type75  *)0xFFFA0130) /* ERRSLVHI */
#define ERRSLVXI  (*(volatile __type75  *)0xFFFA0140) /* ERRSLVXI */
#define HSSPID    (*(volatile __type108 *)0xFFFA1000) /* HSSPID */
#define HTHDMA    (*(volatile __type109 *)0xFFFA2000) /* HTHDMA */
#define IPG       (*(volatile __type110 *)0xFFFEE000) /* IPG */
#define PEG       (*(volatile __type111 *)0xFFFEE680) /* PEG */
#define SEG       (*(volatile __type112 *)0xFFFEE980) /* SEG */

#define FACI      ((volatile __type66 *)0xFFA10000) /* FACI[2] */
#define ERRSLVDG  ((volatile __type75 *)0xFFC5AE00) /* ERRSLVDG[2] */
#define ECCFLX0T  ((volatile __type78 *)0xFFC72100) /* ECCFLX0T[2] */
#define ECCGTM    ((volatile __type78 *)0xFFE80000) /* ECCGTM[4] */

#define FLXA0FRPV FLXA0.FRPV
#define FLXA0FROC FLXA0.FROC.UINT32
#define FLXA0FROCL FLXA0.FROC.UINT16[L]
#define FLXA0FROCLL FLXA0.FROC.UINT8[LL]
#define FLXA0FROCH FLXA0.FROC.UINT16[H]
#define FLXA0FROCHL FLXA0.FROC.UINT8[HL]
#define FLXA0FROS FLXA0.FROS.UINT32
#define FLXA0FROSL FLXA0.FROS.UINT16[L]
#define FLXA0FROSLL FLXA0.FROS.UINT8[LL]
#define FLXA0FROSH FLXA0.FROS.UINT16[H]
#define FLXA0FROSHL FLXA0.FROS.UINT8[HL]
#define FLXA0FRTEST1 FLXA0.FRTEST1.UINT32
#define FLXA0FRTEST1L FLXA0.FRTEST1.UINT16[L]
#define FLXA0FRTEST1LL FLXA0.FRTEST1.UINT8[LL]
#define FLXA0FRTEST1LH FLXA0.FRTEST1.UINT8[LH]
#define FLXA0FRTEST1H FLXA0.FRTEST1.UINT16[H]
#define FLXA0FRTEST1HL FLXA0.FRTEST1.UINT8[HL]
#define FLXA0FRTEST1HH FLXA0.FRTEST1.UINT8[HH]
#define FLXA0FRTEST2 FLXA0.FRTEST2.UINT32
#define FLXA0FRTEST2L FLXA0.FRTEST2.UINT16[L]
#define FLXA0FRTEST2LL FLXA0.FRTEST2.UINT8[LL]
#define FLXA0FRLCK FLXA0.FRLCK.UINT32
#define FLXA0FRLCKL FLXA0.FRLCK.UINT16[L]
#define FLXA0FRLCKLL FLXA0.FRLCK.UINT8[LL]
#define FLXA0FRLCKLH FLXA0.FRLCK.UINT8[LH]
#define FLXA0FREIR FLXA0.FREIR.UINT32
#define FLXA0FREIRL FLXA0.FREIR.UINT16[L]
#define FLXA0FREIRLL FLXA0.FREIR.UINT8[LL]
#define FLXA0FREIRLH FLXA0.FREIR.UINT8[LH]
#define FLXA0FREIRH FLXA0.FREIR.UINT16[H]
#define FLXA0FREIRHL FLXA0.FREIR.UINT8[HL]
#define FLXA0FREIRHH FLXA0.FREIR.UINT8[HH]
#define FLXA0FRSIR FLXA0.FRSIR.UINT32
#define FLXA0FRSIRL FLXA0.FRSIR.UINT16[L]
#define FLXA0FRSIRLL FLXA0.FRSIR.UINT8[LL]
#define FLXA0FRSIRLH FLXA0.FRSIR.UINT8[LH]
#define FLXA0FRSIRH FLXA0.FRSIR.UINT16[H]
#define FLXA0FRSIRHL FLXA0.FRSIR.UINT8[HL]
#define FLXA0FRSIRHH FLXA0.FRSIR.UINT8[HH]
#define FLXA0FREILS FLXA0.FREILS.UINT32
#define FLXA0FREILSL FLXA0.FREILS.UINT16[L]
#define FLXA0FREILSLL FLXA0.FREILS.UINT8[LL]
#define FLXA0FREILSLH FLXA0.FREILS.UINT8[LH]
#define FLXA0FREILSH FLXA0.FREILS.UINT16[H]
#define FLXA0FREILSHL FLXA0.FREILS.UINT8[HL]
#define FLXA0FREILSHH FLXA0.FREILS.UINT8[HH]
#define FLXA0FRSILS FLXA0.FRSILS.UINT32
#define FLXA0FRSILSL FLXA0.FRSILS.UINT16[L]
#define FLXA0FRSILSLL FLXA0.FRSILS.UINT8[LL]
#define FLXA0FRSILSLH FLXA0.FRSILS.UINT8[LH]
#define FLXA0FRSILSH FLXA0.FRSILS.UINT16[H]
#define FLXA0FRSILSHL FLXA0.FRSILS.UINT8[HL]
#define FLXA0FRSILSHH FLXA0.FRSILS.UINT8[HH]
#define FLXA0FREIES FLXA0.FREIES.UINT32
#define FLXA0FREIESL FLXA0.FREIES.UINT16[L]
#define FLXA0FREIESLL FLXA0.FREIES.UINT8[LL]
#define FLXA0FREIESLH FLXA0.FREIES.UINT8[LH]
#define FLXA0FREIESH FLXA0.FREIES.UINT16[H]
#define FLXA0FREIESHL FLXA0.FREIES.UINT8[HL]
#define FLXA0FREIESHH FLXA0.FREIES.UINT8[HH]
#define FLXA0FREIER FLXA0.FREIER.UINT32
#define FLXA0FREIERL FLXA0.FREIER.UINT16[L]
#define FLXA0FREIERLL FLXA0.FREIER.UINT8[LL]
#define FLXA0FREIERLH FLXA0.FREIER.UINT8[LH]
#define FLXA0FREIERH FLXA0.FREIER.UINT16[H]
#define FLXA0FREIERHL FLXA0.FREIER.UINT8[HL]
#define FLXA0FREIERHH FLXA0.FREIER.UINT8[HH]
#define FLXA0FRSIES FLXA0.FRSIES.UINT32
#define FLXA0FRSIESL FLXA0.FRSIES.UINT16[L]
#define FLXA0FRSIESLL FLXA0.FRSIES.UINT8[LL]
#define FLXA0FRSIESLH FLXA0.FRSIES.UINT8[LH]
#define FLXA0FRSIESH FLXA0.FRSIES.UINT16[H]
#define FLXA0FRSIESHL FLXA0.FRSIES.UINT8[HL]
#define FLXA0FRSIESHH FLXA0.FRSIES.UINT8[HH]
#define FLXA0FRSIER FLXA0.FRSIER.UINT32
#define FLXA0FRSIERL FLXA0.FRSIER.UINT16[L]
#define FLXA0FRSIERLL FLXA0.FRSIER.UINT8[LL]
#define FLXA0FRSIERLH FLXA0.FRSIER.UINT8[LH]
#define FLXA0FRSIERH FLXA0.FRSIER.UINT16[H]
#define FLXA0FRSIERHL FLXA0.FRSIER.UINT8[HL]
#define FLXA0FRSIERHH FLXA0.FRSIER.UINT8[HH]
#define FLXA0FRILE FLXA0.FRILE.UINT32
#define FLXA0FRILEL FLXA0.FRILE.UINT16[L]
#define FLXA0FRILELL FLXA0.FRILE.UINT8[LL]
#define FLXA0FRT0C FLXA0.FRT0C.UINT32
#define FLXA0FRT0CL FLXA0.FRT0C.UINT16[L]
#define FLXA0FRT0CLL FLXA0.FRT0C.UINT8[LL]
#define FLXA0FRT0CLH FLXA0.FRT0C.UINT8[LH]
#define FLXA0FRT0CH FLXA0.FRT0C.UINT16[H]
#define FLXA0FRT0CHL FLXA0.FRT0C.UINT8[HL]
#define FLXA0FRT0CHH FLXA0.FRT0C.UINT8[HH]
#define FLXA0FRT1C FLXA0.FRT1C.UINT32
#define FLXA0FRT1CL FLXA0.FRT1C.UINT16[L]
#define FLXA0FRT1CLL FLXA0.FRT1C.UINT8[LL]
#define FLXA0FRT1CH FLXA0.FRT1C.UINT16[H]
#define FLXA0FRT1CHL FLXA0.FRT1C.UINT8[HL]
#define FLXA0FRT1CHH FLXA0.FRT1C.UINT8[HH]
#define FLXA0FRSTPW1 FLXA0.FRSTPW1.UINT32
#define FLXA0FRSTPW1L FLXA0.FRSTPW1.UINT16[L]
#define FLXA0FRSTPW1LL FLXA0.FRSTPW1.UINT8[LL]
#define FLXA0FRSTPW1LH FLXA0.FRSTPW1.UINT8[LH]
#define FLXA0FRSTPW1H FLXA0.FRSTPW1.UINT16[H]
#define FLXA0FRSTPW1HL FLXA0.FRSTPW1.UINT8[HL]
#define FLXA0FRSTPW1HH FLXA0.FRSTPW1.UINT8[HH]
#define FLXA0FRSTPW2 FLXA0.FRSTPW2.UINT32
#define FLXA0FRSTPW2L FLXA0.FRSTPW2.UINT16[L]
#define FLXA0FRSTPW2LL FLXA0.FRSTPW2.UINT8[LL]
#define FLXA0FRSTPW2LH FLXA0.FRSTPW2.UINT8[LH]
#define FLXA0FRSTPW2H FLXA0.FRSTPW2.UINT16[H]
#define FLXA0FRSTPW2HL FLXA0.FRSTPW2.UINT8[HL]
#define FLXA0FRSTPW2HH FLXA0.FRSTPW2.UINT8[HH]
#define FLXA0FRSUCC1 FLXA0.FRSUCC1.UINT32
#define FLXA0FRSUCC1L FLXA0.FRSUCC1.UINT16[L]
#define FLXA0FRSUCC1LL FLXA0.FRSUCC1.UINT8[LL]
#define FLXA0FRSUCC1LH FLXA0.FRSUCC1.UINT8[LH]
#define FLXA0FRSUCC1H FLXA0.FRSUCC1.UINT16[H]
#define FLXA0FRSUCC1HL FLXA0.FRSUCC1.UINT8[HL]
#define FLXA0FRSUCC1HH FLXA0.FRSUCC1.UINT8[HH]
#define FLXA0FRSUCC2 FLXA0.FRSUCC2.UINT32
#define FLXA0FRSUCC2L FLXA0.FRSUCC2.UINT16[L]
#define FLXA0FRSUCC2LL FLXA0.FRSUCC2.UINT8[LL]
#define FLXA0FRSUCC2LH FLXA0.FRSUCC2.UINT8[LH]
#define FLXA0FRSUCC2H FLXA0.FRSUCC2.UINT16[H]
#define FLXA0FRSUCC2HL FLXA0.FRSUCC2.UINT8[HL]
#define FLXA0FRSUCC2HH FLXA0.FRSUCC2.UINT8[HH]
#define FLXA0FRSUCC3 FLXA0.FRSUCC3.UINT32
#define FLXA0FRSUCC3L FLXA0.FRSUCC3.UINT16[L]
#define FLXA0FRSUCC3LL FLXA0.FRSUCC3.UINT8[LL]
#define FLXA0FRNEMC FLXA0.FRNEMC.UINT32
#define FLXA0FRNEMCL FLXA0.FRNEMC.UINT16[L]
#define FLXA0FRNEMCLL FLXA0.FRNEMC.UINT8[LL]
#define FLXA0FRPRTC1 FLXA0.FRPRTC1.UINT32
#define FLXA0FRPRTC1L FLXA0.FRPRTC1.UINT16[L]
#define FLXA0FRPRTC1LL FLXA0.FRPRTC1.UINT8[LL]
#define FLXA0FRPRTC1LH FLXA0.FRPRTC1.UINT8[LH]
#define FLXA0FRPRTC1H FLXA0.FRPRTC1.UINT16[H]
#define FLXA0FRPRTC1HL FLXA0.FRPRTC1.UINT8[HL]
#define FLXA0FRPRTC1HH FLXA0.FRPRTC1.UINT8[HH]
#define FLXA0FRPRTC2 FLXA0.FRPRTC2.UINT32
#define FLXA0FRPRTC2L FLXA0.FRPRTC2.UINT16[L]
#define FLXA0FRPRTC2LL FLXA0.FRPRTC2.UINT8[LL]
#define FLXA0FRPRTC2LH FLXA0.FRPRTC2.UINT8[LH]
#define FLXA0FRPRTC2H FLXA0.FRPRTC2.UINT16[H]
#define FLXA0FRPRTC2HL FLXA0.FRPRTC2.UINT8[HL]
#define FLXA0FRPRTC2HH FLXA0.FRPRTC2.UINT8[HH]
#define FLXA0FRMHDC FLXA0.FRMHDC.UINT32
#define FLXA0FRMHDCL FLXA0.FRMHDC.UINT16[L]
#define FLXA0FRMHDCLL FLXA0.FRMHDC.UINT8[LL]
#define FLXA0FRMHDCH FLXA0.FRMHDC.UINT16[H]
#define FLXA0FRMHDCHL FLXA0.FRMHDC.UINT8[HL]
#define FLXA0FRMHDCHH FLXA0.FRMHDC.UINT8[HH]
#define FLXA0FRGTUC1 FLXA0.FRGTUC1.UINT32
#define FLXA0FRGTUC1L FLXA0.FRGTUC1.UINT16[L]
#define FLXA0FRGTUC1LL FLXA0.FRGTUC1.UINT8[LL]
#define FLXA0FRGTUC1LH FLXA0.FRGTUC1.UINT8[LH]
#define FLXA0FRGTUC1H FLXA0.FRGTUC1.UINT16[H]
#define FLXA0FRGTUC1HL FLXA0.FRGTUC1.UINT8[HL]
#define FLXA0FRGTUC2 FLXA0.FRGTUC2.UINT32
#define FLXA0FRGTUC2L FLXA0.FRGTUC2.UINT16[L]
#define FLXA0FRGTUC2LL FLXA0.FRGTUC2.UINT8[LL]
#define FLXA0FRGTUC2LH FLXA0.FRGTUC2.UINT8[LH]
#define FLXA0FRGTUC2H FLXA0.FRGTUC2.UINT16[H]
#define FLXA0FRGTUC2HL FLXA0.FRGTUC2.UINT8[HL]
#define FLXA0FRGTUC3 FLXA0.FRGTUC3.UINT32
#define FLXA0FRGTUC3L FLXA0.FRGTUC3.UINT16[L]
#define FLXA0FRGTUC3LL FLXA0.FRGTUC3.UINT8[LL]
#define FLXA0FRGTUC3LH FLXA0.FRGTUC3.UINT8[LH]
#define FLXA0FRGTUC3H FLXA0.FRGTUC3.UINT16[H]
#define FLXA0FRGTUC3HL FLXA0.FRGTUC3.UINT8[HL]
#define FLXA0FRGTUC3HH FLXA0.FRGTUC3.UINT8[HH]
#define FLXA0FRGTUC4 FLXA0.FRGTUC4.UINT32
#define FLXA0FRGTUC4L FLXA0.FRGTUC4.UINT16[L]
#define FLXA0FRGTUC4LL FLXA0.FRGTUC4.UINT8[LL]
#define FLXA0FRGTUC4LH FLXA0.FRGTUC4.UINT8[LH]
#define FLXA0FRGTUC4H FLXA0.FRGTUC4.UINT16[H]
#define FLXA0FRGTUC4HL FLXA0.FRGTUC4.UINT8[HL]
#define FLXA0FRGTUC4HH FLXA0.FRGTUC4.UINT8[HH]
#define FLXA0FRGTUC5 FLXA0.FRGTUC5.UINT32
#define FLXA0FRGTUC5L FLXA0.FRGTUC5.UINT16[L]
#define FLXA0FRGTUC5LL FLXA0.FRGTUC5.UINT8[LL]
#define FLXA0FRGTUC5LH FLXA0.FRGTUC5.UINT8[LH]
#define FLXA0FRGTUC5H FLXA0.FRGTUC5.UINT16[H]
#define FLXA0FRGTUC5HL FLXA0.FRGTUC5.UINT8[HL]
#define FLXA0FRGTUC5HH FLXA0.FRGTUC5.UINT8[HH]
#define FLXA0FRGTUC6 FLXA0.FRGTUC6.UINT32
#define FLXA0FRGTUC6L FLXA0.FRGTUC6.UINT16[L]
#define FLXA0FRGTUC6LL FLXA0.FRGTUC6.UINT8[LL]
#define FLXA0FRGTUC6LH FLXA0.FRGTUC6.UINT8[LH]
#define FLXA0FRGTUC6H FLXA0.FRGTUC6.UINT16[H]
#define FLXA0FRGTUC6HL FLXA0.FRGTUC6.UINT8[HL]
#define FLXA0FRGTUC6HH FLXA0.FRGTUC6.UINT8[HH]
#define FLXA0FRGTUC7 FLXA0.FRGTUC7.UINT32
#define FLXA0FRGTUC7L FLXA0.FRGTUC7.UINT16[L]
#define FLXA0FRGTUC7LL FLXA0.FRGTUC7.UINT8[LL]
#define FLXA0FRGTUC7LH FLXA0.FRGTUC7.UINT8[LH]
#define FLXA0FRGTUC7H FLXA0.FRGTUC7.UINT16[H]
#define FLXA0FRGTUC7HL FLXA0.FRGTUC7.UINT8[HL]
#define FLXA0FRGTUC7HH FLXA0.FRGTUC7.UINT8[HH]
#define FLXA0FRGTUC8 FLXA0.FRGTUC8.UINT32
#define FLXA0FRGTUC8L FLXA0.FRGTUC8.UINT16[L]
#define FLXA0FRGTUC8LL FLXA0.FRGTUC8.UINT8[LL]
#define FLXA0FRGTUC8H FLXA0.FRGTUC8.UINT16[H]
#define FLXA0FRGTUC8HL FLXA0.FRGTUC8.UINT8[HL]
#define FLXA0FRGTUC8HH FLXA0.FRGTUC8.UINT8[HH]
#define FLXA0FRGTUC9 FLXA0.FRGTUC9.UINT32
#define FLXA0FRGTUC9L FLXA0.FRGTUC9.UINT16[L]
#define FLXA0FRGTUC9LL FLXA0.FRGTUC9.UINT8[LL]
#define FLXA0FRGTUC9LH FLXA0.FRGTUC9.UINT8[LH]
#define FLXA0FRGTUC9H FLXA0.FRGTUC9.UINT16[H]
#define FLXA0FRGTUC9HL FLXA0.FRGTUC9.UINT8[HL]
#define FLXA0FRGTUC10 FLXA0.FRGTUC10.UINT32
#define FLXA0FRGTUC10L FLXA0.FRGTUC10.UINT16[L]
#define FLXA0FRGTUC10LL FLXA0.FRGTUC10.UINT8[LL]
#define FLXA0FRGTUC10LH FLXA0.FRGTUC10.UINT8[LH]
#define FLXA0FRGTUC10H FLXA0.FRGTUC10.UINT16[H]
#define FLXA0FRGTUC10HL FLXA0.FRGTUC10.UINT8[HL]
#define FLXA0FRGTUC10HH FLXA0.FRGTUC10.UINT8[HH]
#define FLXA0FRGTUC11 FLXA0.FRGTUC11.UINT32
#define FLXA0FRGTUC11L FLXA0.FRGTUC11.UINT16[L]
#define FLXA0FRGTUC11LL FLXA0.FRGTUC11.UINT8[LL]
#define FLXA0FRGTUC11LH FLXA0.FRGTUC11.UINT8[LH]
#define FLXA0FRGTUC11H FLXA0.FRGTUC11.UINT16[H]
#define FLXA0FRGTUC11HL FLXA0.FRGTUC11.UINT8[HL]
#define FLXA0FRGTUC11HH FLXA0.FRGTUC11.UINT8[HH]
#define FLXA0FRCCSV FLXA0.FRCCSV.UINT32
#define FLXA0FRCCSVL FLXA0.FRCCSV.UINT16[L]
#define FLXA0FRCCSVLL FLXA0.FRCCSV.UINT8[LL]
#define FLXA0FRCCSVLH FLXA0.FRCCSV.UINT8[LH]
#define FLXA0FRCCSVH FLXA0.FRCCSV.UINT16[H]
#define FLXA0FRCCSVHL FLXA0.FRCCSV.UINT8[HL]
#define FLXA0FRCCSVHH FLXA0.FRCCSV.UINT8[HH]
#define FLXA0FRCCEV FLXA0.FRCCEV.UINT32
#define FLXA0FRCCEVL FLXA0.FRCCEV.UINT16[L]
#define FLXA0FRCCEVLL FLXA0.FRCCEV.UINT8[LL]
#define FLXA0FRCCEVLH FLXA0.FRCCEV.UINT8[LH]
#define FLXA0FRSCV FLXA0.FRSCV.UINT32
#define FLXA0FRSCVL FLXA0.FRSCV.UINT16[L]
#define FLXA0FRSCVLL FLXA0.FRSCV.UINT8[LL]
#define FLXA0FRSCVLH FLXA0.FRSCV.UINT8[LH]
#define FLXA0FRSCVH FLXA0.FRSCV.UINT16[H]
#define FLXA0FRSCVHL FLXA0.FRSCV.UINT8[HL]
#define FLXA0FRSCVHH FLXA0.FRSCV.UINT8[HH]
#define FLXA0FRMTCCV FLXA0.FRMTCCV.UINT32
#define FLXA0FRMTCCVL FLXA0.FRMTCCV.UINT16[L]
#define FLXA0FRMTCCVLL FLXA0.FRMTCCV.UINT8[LL]
#define FLXA0FRMTCCVLH FLXA0.FRMTCCV.UINT8[LH]
#define FLXA0FRMTCCVH FLXA0.FRMTCCV.UINT16[H]
#define FLXA0FRMTCCVHL FLXA0.FRMTCCV.UINT8[HL]
#define FLXA0FRRCV FLXA0.FRRCV.UINT32
#define FLXA0FRRCVL FLXA0.FRRCV.UINT16[L]
#define FLXA0FRRCVLL FLXA0.FRRCV.UINT8[LL]
#define FLXA0FRRCVLH FLXA0.FRRCV.UINT8[LH]
#define FLXA0FROCV FLXA0.FROCV.UINT32
#define FLXA0FROCVL FLXA0.FROCV.UINT16[L]
#define FLXA0FROCVLL FLXA0.FROCV.UINT8[LL]
#define FLXA0FROCVLH FLXA0.FROCV.UINT8[LH]
#define FLXA0FROCVH FLXA0.FROCV.UINT16[H]
#define FLXA0FROCVHL FLXA0.FROCV.UINT8[HL]
#define FLXA0FRSFS FLXA0.FRSFS.UINT32
#define FLXA0FRSFSL FLXA0.FRSFS.UINT16[L]
#define FLXA0FRSFSLL FLXA0.FRSFS.UINT8[LL]
#define FLXA0FRSFSLH FLXA0.FRSFS.UINT8[LH]
#define FLXA0FRSFSH FLXA0.FRSFS.UINT16[H]
#define FLXA0FRSFSHL FLXA0.FRSFS.UINT8[HL]
#define FLXA0FRSWNIT FLXA0.FRSWNIT.UINT32
#define FLXA0FRSWNITL FLXA0.FRSWNIT.UINT16[L]
#define FLXA0FRSWNITLL FLXA0.FRSWNIT.UINT8[LL]
#define FLXA0FRSWNITLH FLXA0.FRSWNIT.UINT8[LH]
#define FLXA0FRACS FLXA0.FRACS.UINT32
#define FLXA0FRACSL FLXA0.FRACS.UINT16[L]
#define FLXA0FRACSLL FLXA0.FRACS.UINT8[LL]
#define FLXA0FRACSLH FLXA0.FRACS.UINT8[LH]
#define FLXA0FRESID1 FLXA0.FRESID1.UINT32
#define FLXA0FRESID1L FLXA0.FRESID1.UINT16[L]
#define FLXA0FRESID1LL FLXA0.FRESID1.UINT8[LL]
#define FLXA0FRESID1LH FLXA0.FRESID1.UINT8[LH]
#define FLXA0FRESID2 FLXA0.FRESID2.UINT32
#define FLXA0FRESID2L FLXA0.FRESID2.UINT16[L]
#define FLXA0FRESID2LL FLXA0.FRESID2.UINT8[LL]
#define FLXA0FRESID2LH FLXA0.FRESID2.UINT8[LH]
#define FLXA0FRESID3 FLXA0.FRESID3.UINT32
#define FLXA0FRESID3L FLXA0.FRESID3.UINT16[L]
#define FLXA0FRESID3LL FLXA0.FRESID3.UINT8[LL]
#define FLXA0FRESID3LH FLXA0.FRESID3.UINT8[LH]
#define FLXA0FRESID4 FLXA0.FRESID4.UINT32
#define FLXA0FRESID4L FLXA0.FRESID4.UINT16[L]
#define FLXA0FRESID4LL FLXA0.FRESID4.UINT8[LL]
#define FLXA0FRESID4LH FLXA0.FRESID4.UINT8[LH]
#define FLXA0FRESID5 FLXA0.FRESID5.UINT32
#define FLXA0FRESID5L FLXA0.FRESID5.UINT16[L]
#define FLXA0FRESID5LL FLXA0.FRESID5.UINT8[LL]
#define FLXA0FRESID5LH FLXA0.FRESID5.UINT8[LH]
#define FLXA0FRESID6 FLXA0.FRESID6.UINT32
#define FLXA0FRESID6L FLXA0.FRESID6.UINT16[L]
#define FLXA0FRESID6LL FLXA0.FRESID6.UINT8[LL]
#define FLXA0FRESID6LH FLXA0.FRESID6.UINT8[LH]
#define FLXA0FRESID7 FLXA0.FRESID7.UINT32
#define FLXA0FRESID7L FLXA0.FRESID7.UINT16[L]
#define FLXA0FRESID7LL FLXA0.FRESID7.UINT8[LL]
#define FLXA0FRESID7LH FLXA0.FRESID7.UINT8[LH]
#define FLXA0FRESID8 FLXA0.FRESID8.UINT32
#define FLXA0FRESID8L FLXA0.FRESID8.UINT16[L]
#define FLXA0FRESID8LL FLXA0.FRESID8.UINT8[LL]
#define FLXA0FRESID8LH FLXA0.FRESID8.UINT8[LH]
#define FLXA0FRESID9 FLXA0.FRESID9.UINT32
#define FLXA0FRESID9L FLXA0.FRESID9.UINT16[L]
#define FLXA0FRESID9LL FLXA0.FRESID9.UINT8[LL]
#define FLXA0FRESID9LH FLXA0.FRESID9.UINT8[LH]
#define FLXA0FRESID10 FLXA0.FRESID10.UINT32
#define FLXA0FRESID10L FLXA0.FRESID10.UINT16[L]
#define FLXA0FRESID10LL FLXA0.FRESID10.UINT8[LL]
#define FLXA0FRESID10LH FLXA0.FRESID10.UINT8[LH]
#define FLXA0FRESID11 FLXA0.FRESID11.UINT32
#define FLXA0FRESID11L FLXA0.FRESID11.UINT16[L]
#define FLXA0FRESID11LL FLXA0.FRESID11.UINT8[LL]
#define FLXA0FRESID11LH FLXA0.FRESID11.UINT8[LH]
#define FLXA0FRESID12 FLXA0.FRESID12.UINT32
#define FLXA0FRESID12L FLXA0.FRESID12.UINT16[L]
#define FLXA0FRESID12LL FLXA0.FRESID12.UINT8[LL]
#define FLXA0FRESID12LH FLXA0.FRESID12.UINT8[LH]
#define FLXA0FRESID13 FLXA0.FRESID13.UINT32
#define FLXA0FRESID13L FLXA0.FRESID13.UINT16[L]
#define FLXA0FRESID13LL FLXA0.FRESID13.UINT8[LL]
#define FLXA0FRESID13LH FLXA0.FRESID13.UINT8[LH]
#define FLXA0FRESID14 FLXA0.FRESID14.UINT32
#define FLXA0FRESID14L FLXA0.FRESID14.UINT16[L]
#define FLXA0FRESID14LL FLXA0.FRESID14.UINT8[LL]
#define FLXA0FRESID14LH FLXA0.FRESID14.UINT8[LH]
#define FLXA0FRESID15 FLXA0.FRESID15.UINT32
#define FLXA0FRESID15L FLXA0.FRESID15.UINT16[L]
#define FLXA0FRESID15LL FLXA0.FRESID15.UINT8[LL]
#define FLXA0FRESID15LH FLXA0.FRESID15.UINT8[LH]
#define FLXA0FROSID1 FLXA0.FROSID1.UINT32
#define FLXA0FROSID1L FLXA0.FROSID1.UINT16[L]
#define FLXA0FROSID1LL FLXA0.FROSID1.UINT8[LL]
#define FLXA0FROSID1LH FLXA0.FROSID1.UINT8[LH]
#define FLXA0FROSID2 FLXA0.FROSID2.UINT32
#define FLXA0FROSID2L FLXA0.FROSID2.UINT16[L]
#define FLXA0FROSID2LL FLXA0.FROSID2.UINT8[LL]
#define FLXA0FROSID2LH FLXA0.FROSID2.UINT8[LH]
#define FLXA0FROSID3 FLXA0.FROSID3.UINT32
#define FLXA0FROSID3L FLXA0.FROSID3.UINT16[L]
#define FLXA0FROSID3LL FLXA0.FROSID3.UINT8[LL]
#define FLXA0FROSID3LH FLXA0.FROSID3.UINT8[LH]
#define FLXA0FROSID4 FLXA0.FROSID4.UINT32
#define FLXA0FROSID4L FLXA0.FROSID4.UINT16[L]
#define FLXA0FROSID4LL FLXA0.FROSID4.UINT8[LL]
#define FLXA0FROSID4LH FLXA0.FROSID4.UINT8[LH]
#define FLXA0FROSID5 FLXA0.FROSID5.UINT32
#define FLXA0FROSID5L FLXA0.FROSID5.UINT16[L]
#define FLXA0FROSID5LL FLXA0.FROSID5.UINT8[LL]
#define FLXA0FROSID5LH FLXA0.FROSID5.UINT8[LH]
#define FLXA0FROSID6 FLXA0.FROSID6.UINT32
#define FLXA0FROSID6L FLXA0.FROSID6.UINT16[L]
#define FLXA0FROSID6LL FLXA0.FROSID6.UINT8[LL]
#define FLXA0FROSID6LH FLXA0.FROSID6.UINT8[LH]
#define FLXA0FROSID7 FLXA0.FROSID7.UINT32
#define FLXA0FROSID7L FLXA0.FROSID7.UINT16[L]
#define FLXA0FROSID7LL FLXA0.FROSID7.UINT8[LL]
#define FLXA0FROSID7LH FLXA0.FROSID7.UINT8[LH]
#define FLXA0FROSID8 FLXA0.FROSID8.UINT32
#define FLXA0FROSID8L FLXA0.FROSID8.UINT16[L]
#define FLXA0FROSID8LL FLXA0.FROSID8.UINT8[LL]
#define FLXA0FROSID8LH FLXA0.FROSID8.UINT8[LH]
#define FLXA0FROSID9 FLXA0.FROSID9.UINT32
#define FLXA0FROSID9L FLXA0.FROSID9.UINT16[L]
#define FLXA0FROSID9LL FLXA0.FROSID9.UINT8[LL]
#define FLXA0FROSID9LH FLXA0.FROSID9.UINT8[LH]
#define FLXA0FROSID10 FLXA0.FROSID10.UINT32
#define FLXA0FROSID10L FLXA0.FROSID10.UINT16[L]
#define FLXA0FROSID10LL FLXA0.FROSID10.UINT8[LL]
#define FLXA0FROSID10LH FLXA0.FROSID10.UINT8[LH]
#define FLXA0FROSID11 FLXA0.FROSID11.UINT32
#define FLXA0FROSID11L FLXA0.FROSID11.UINT16[L]
#define FLXA0FROSID11LL FLXA0.FROSID11.UINT8[LL]
#define FLXA0FROSID11LH FLXA0.FROSID11.UINT8[LH]
#define FLXA0FROSID12 FLXA0.FROSID12.UINT32
#define FLXA0FROSID12L FLXA0.FROSID12.UINT16[L]
#define FLXA0FROSID12LL FLXA0.FROSID12.UINT8[LL]
#define FLXA0FROSID12LH FLXA0.FROSID12.UINT8[LH]
#define FLXA0FROSID13 FLXA0.FROSID13.UINT32
#define FLXA0FROSID13L FLXA0.FROSID13.UINT16[L]
#define FLXA0FROSID13LL FLXA0.FROSID13.UINT8[LL]
#define FLXA0FROSID13LH FLXA0.FROSID13.UINT8[LH]
#define FLXA0FROSID14 FLXA0.FROSID14.UINT32
#define FLXA0FROSID14L FLXA0.FROSID14.UINT16[L]
#define FLXA0FROSID14LL FLXA0.FROSID14.UINT8[LL]
#define FLXA0FROSID14LH FLXA0.FROSID14.UINT8[LH]
#define FLXA0FROSID15 FLXA0.FROSID15.UINT32
#define FLXA0FROSID15L FLXA0.FROSID15.UINT16[L]
#define FLXA0FROSID15LL FLXA0.FROSID15.UINT8[LL]
#define FLXA0FROSID15LH FLXA0.FROSID15.UINT8[LH]
#define FLXA0FRNMV1 FLXA0.FRNMV1.UINT32
#define FLXA0FRNMV1L FLXA0.FRNMV1.UINT16[L]
#define FLXA0FRNMV1LL FLXA0.FRNMV1.UINT8[LL]
#define FLXA0FRNMV1LH FLXA0.FRNMV1.UINT8[LH]
#define FLXA0FRNMV1H FLXA0.FRNMV1.UINT16[H]
#define FLXA0FRNMV1HL FLXA0.FRNMV1.UINT8[HL]
#define FLXA0FRNMV1HH FLXA0.FRNMV1.UINT8[HH]
#define FLXA0FRNMV2 FLXA0.FRNMV2.UINT32
#define FLXA0FRNMV2L FLXA0.FRNMV2.UINT16[L]
#define FLXA0FRNMV2LL FLXA0.FRNMV2.UINT8[LL]
#define FLXA0FRNMV2LH FLXA0.FRNMV2.UINT8[LH]
#define FLXA0FRNMV2H FLXA0.FRNMV2.UINT16[H]
#define FLXA0FRNMV2HL FLXA0.FRNMV2.UINT8[HL]
#define FLXA0FRNMV2HH FLXA0.FRNMV2.UINT8[HH]
#define FLXA0FRNMV3 FLXA0.FRNMV3.UINT32
#define FLXA0FRNMV3L FLXA0.FRNMV3.UINT16[L]
#define FLXA0FRNMV3LL FLXA0.FRNMV3.UINT8[LL]
#define FLXA0FRNMV3LH FLXA0.FRNMV3.UINT8[LH]
#define FLXA0FRNMV3H FLXA0.FRNMV3.UINT16[H]
#define FLXA0FRNMV3HL FLXA0.FRNMV3.UINT8[HL]
#define FLXA0FRNMV3HH FLXA0.FRNMV3.UINT8[HH]
#define FLXA0FRMRC FLXA0.FRMRC.UINT32
#define FLXA0FRMRCL FLXA0.FRMRC.UINT16[L]
#define FLXA0FRMRCLL FLXA0.FRMRC.UINT8[LL]
#define FLXA0FRMRCLH FLXA0.FRMRC.UINT8[LH]
#define FLXA0FRMRCH FLXA0.FRMRC.UINT16[H]
#define FLXA0FRMRCHL FLXA0.FRMRC.UINT8[HL]
#define FLXA0FRMRCHH FLXA0.FRMRC.UINT8[HH]
#define FLXA0FRFRF FLXA0.FRFRF.UINT32
#define FLXA0FRFRFL FLXA0.FRFRF.UINT16[L]
#define FLXA0FRFRFLL FLXA0.FRFRF.UINT8[LL]
#define FLXA0FRFRFLH FLXA0.FRFRF.UINT8[LH]
#define FLXA0FRFRFH FLXA0.FRFRF.UINT16[H]
#define FLXA0FRFRFHL FLXA0.FRFRF.UINT8[HL]
#define FLXA0FRFRFHH FLXA0.FRFRF.UINT8[HH]
#define FLXA0FRFRFM FLXA0.FRFRFM.UINT32
#define FLXA0FRFRFML FLXA0.FRFRFM.UINT16[L]
#define FLXA0FRFRFMLL FLXA0.FRFRFM.UINT8[LL]
#define FLXA0FRFRFMLH FLXA0.FRFRFM.UINT8[LH]
#define FLXA0FRFCL FLXA0.FRFCL.UINT32
#define FLXA0FRFCLL FLXA0.FRFCL.UINT16[L]
#define FLXA0FRFCLLL FLXA0.FRFCL.UINT8[LL]
#define FLXA0FRMHDS FLXA0.FRMHDS.UINT32
#define FLXA0FRMHDSL FLXA0.FRMHDS.UINT16[L]
#define FLXA0FRMHDSLL FLXA0.FRMHDS.UINT8[LL]
#define FLXA0FRMHDSLH FLXA0.FRMHDS.UINT8[LH]
#define FLXA0FRMHDSH FLXA0.FRMHDS.UINT16[H]
#define FLXA0FRMHDSHL FLXA0.FRMHDS.UINT8[HL]
#define FLXA0FRMHDSHH FLXA0.FRMHDS.UINT8[HH]
#define FLXA0FRLDTS FLXA0.FRLDTS.UINT32
#define FLXA0FRLDTSL FLXA0.FRLDTS.UINT16[L]
#define FLXA0FRLDTSLL FLXA0.FRLDTS.UINT8[LL]
#define FLXA0FRLDTSLH FLXA0.FRLDTS.UINT8[LH]
#define FLXA0FRLDTSH FLXA0.FRLDTS.UINT16[H]
#define FLXA0FRLDTSHL FLXA0.FRLDTS.UINT8[HL]
#define FLXA0FRLDTSHH FLXA0.FRLDTS.UINT8[HH]
#define FLXA0FRFSR FLXA0.FRFSR.UINT32
#define FLXA0FRFSRL FLXA0.FRFSR.UINT16[L]
#define FLXA0FRFSRLL FLXA0.FRFSR.UINT8[LL]
#define FLXA0FRFSRLH FLXA0.FRFSR.UINT8[LH]
#define FLXA0FRMHDF FLXA0.FRMHDF.UINT32
#define FLXA0FRMHDFL FLXA0.FRMHDF.UINT16[L]
#define FLXA0FRMHDFLL FLXA0.FRMHDF.UINT8[LL]
#define FLXA0FRMHDFLH FLXA0.FRMHDF.UINT8[LH]
#define FLXA0FRTXRQ1 FLXA0.FRTXRQ1.UINT32
#define FLXA0FRTXRQ1L FLXA0.FRTXRQ1.UINT16[L]
#define FLXA0FRTXRQ1LL FLXA0.FRTXRQ1.UINT8[LL]
#define FLXA0FRTXRQ1LH FLXA0.FRTXRQ1.UINT8[LH]
#define FLXA0FRTXRQ1H FLXA0.FRTXRQ1.UINT16[H]
#define FLXA0FRTXRQ1HL FLXA0.FRTXRQ1.UINT8[HL]
#define FLXA0FRTXRQ1HH FLXA0.FRTXRQ1.UINT8[HH]
#define FLXA0FRTXRQ2 FLXA0.FRTXRQ2.UINT32
#define FLXA0FRTXRQ2L FLXA0.FRTXRQ2.UINT16[L]
#define FLXA0FRTXRQ2LL FLXA0.FRTXRQ2.UINT8[LL]
#define FLXA0FRTXRQ2LH FLXA0.FRTXRQ2.UINT8[LH]
#define FLXA0FRTXRQ2H FLXA0.FRTXRQ2.UINT16[H]
#define FLXA0FRTXRQ2HL FLXA0.FRTXRQ2.UINT8[HL]
#define FLXA0FRTXRQ2HH FLXA0.FRTXRQ2.UINT8[HH]
#define FLXA0FRTXRQ3 FLXA0.FRTXRQ3.UINT32
#define FLXA0FRTXRQ3L FLXA0.FRTXRQ3.UINT16[L]
#define FLXA0FRTXRQ3LL FLXA0.FRTXRQ3.UINT8[LL]
#define FLXA0FRTXRQ3LH FLXA0.FRTXRQ3.UINT8[LH]
#define FLXA0FRTXRQ3H FLXA0.FRTXRQ3.UINT16[H]
#define FLXA0FRTXRQ3HL FLXA0.FRTXRQ3.UINT8[HL]
#define FLXA0FRTXRQ3HH FLXA0.FRTXRQ3.UINT8[HH]
#define FLXA0FRTXRQ4 FLXA0.FRTXRQ4.UINT32
#define FLXA0FRTXRQ4L FLXA0.FRTXRQ4.UINT16[L]
#define FLXA0FRTXRQ4LL FLXA0.FRTXRQ4.UINT8[LL]
#define FLXA0FRTXRQ4LH FLXA0.FRTXRQ4.UINT8[LH]
#define FLXA0FRTXRQ4H FLXA0.FRTXRQ4.UINT16[H]
#define FLXA0FRTXRQ4HL FLXA0.FRTXRQ4.UINT8[HL]
#define FLXA0FRTXRQ4HH FLXA0.FRTXRQ4.UINT8[HH]
#define FLXA0FRNDAT1 FLXA0.FRNDAT1.UINT32
#define FLXA0FRNDAT1L FLXA0.FRNDAT1.UINT16[L]
#define FLXA0FRNDAT1LL FLXA0.FRNDAT1.UINT8[LL]
#define FLXA0FRNDAT1LH FLXA0.FRNDAT1.UINT8[LH]
#define FLXA0FRNDAT1H FLXA0.FRNDAT1.UINT16[H]
#define FLXA0FRNDAT1HL FLXA0.FRNDAT1.UINT8[HL]
#define FLXA0FRNDAT1HH FLXA0.FRNDAT1.UINT8[HH]
#define FLXA0FRNDAT2 FLXA0.FRNDAT2.UINT32
#define FLXA0FRNDAT2L FLXA0.FRNDAT2.UINT16[L]
#define FLXA0FRNDAT2LL FLXA0.FRNDAT2.UINT8[LL]
#define FLXA0FRNDAT2LH FLXA0.FRNDAT2.UINT8[LH]
#define FLXA0FRNDAT2H FLXA0.FRNDAT2.UINT16[H]
#define FLXA0FRNDAT2HL FLXA0.FRNDAT2.UINT8[HL]
#define FLXA0FRNDAT2HH FLXA0.FRNDAT2.UINT8[HH]
#define FLXA0FRNDAT3 FLXA0.FRNDAT3.UINT32
#define FLXA0FRNDAT3L FLXA0.FRNDAT3.UINT16[L]
#define FLXA0FRNDAT3LL FLXA0.FRNDAT3.UINT8[LL]
#define FLXA0FRNDAT3LH FLXA0.FRNDAT3.UINT8[LH]
#define FLXA0FRNDAT3H FLXA0.FRNDAT3.UINT16[H]
#define FLXA0FRNDAT3HL FLXA0.FRNDAT3.UINT8[HL]
#define FLXA0FRNDAT3HH FLXA0.FRNDAT3.UINT8[HH]
#define FLXA0FRNDAT4 FLXA0.FRNDAT4.UINT32
#define FLXA0FRNDAT4L FLXA0.FRNDAT4.UINT16[L]
#define FLXA0FRNDAT4LL FLXA0.FRNDAT4.UINT8[LL]
#define FLXA0FRNDAT4LH FLXA0.FRNDAT4.UINT8[LH]
#define FLXA0FRNDAT4H FLXA0.FRNDAT4.UINT16[H]
#define FLXA0FRNDAT4HL FLXA0.FRNDAT4.UINT8[HL]
#define FLXA0FRNDAT4HH FLXA0.FRNDAT4.UINT8[HH]
#define FLXA0FRMBSC1 FLXA0.FRMBSC1.UINT32
#define FLXA0FRMBSC1L FLXA0.FRMBSC1.UINT16[L]
#define FLXA0FRMBSC1LL FLXA0.FRMBSC1.UINT8[LL]
#define FLXA0FRMBSC1LH FLXA0.FRMBSC1.UINT8[LH]
#define FLXA0FRMBSC1H FLXA0.FRMBSC1.UINT16[H]
#define FLXA0FRMBSC1HL FLXA0.FRMBSC1.UINT8[HL]
#define FLXA0FRMBSC1HH FLXA0.FRMBSC1.UINT8[HH]
#define FLXA0FRMBSC2 FLXA0.FRMBSC2.UINT32
#define FLXA0FRMBSC2L FLXA0.FRMBSC2.UINT16[L]
#define FLXA0FRMBSC2LL FLXA0.FRMBSC2.UINT8[LL]
#define FLXA0FRMBSC2LH FLXA0.FRMBSC2.UINT8[LH]
#define FLXA0FRMBSC2H FLXA0.FRMBSC2.UINT16[H]
#define FLXA0FRMBSC2HL FLXA0.FRMBSC2.UINT8[HL]
#define FLXA0FRMBSC2HH FLXA0.FRMBSC2.UINT8[HH]
#define FLXA0FRMBSC3 FLXA0.FRMBSC3.UINT32
#define FLXA0FRMBSC3L FLXA0.FRMBSC3.UINT16[L]
#define FLXA0FRMBSC3LL FLXA0.FRMBSC3.UINT8[LL]
#define FLXA0FRMBSC3LH FLXA0.FRMBSC3.UINT8[LH]
#define FLXA0FRMBSC3H FLXA0.FRMBSC3.UINT16[H]
#define FLXA0FRMBSC3HL FLXA0.FRMBSC3.UINT8[HL]
#define FLXA0FRMBSC3HH FLXA0.FRMBSC3.UINT8[HH]
#define FLXA0FRMBSC4 FLXA0.FRMBSC4.UINT32
#define FLXA0FRMBSC4L FLXA0.FRMBSC4.UINT16[L]
#define FLXA0FRMBSC4LL FLXA0.FRMBSC4.UINT8[LL]
#define FLXA0FRMBSC4LH FLXA0.FRMBSC4.UINT8[LH]
#define FLXA0FRMBSC4H FLXA0.FRMBSC4.UINT16[H]
#define FLXA0FRMBSC4HL FLXA0.FRMBSC4.UINT8[HL]
#define FLXA0FRMBSC4HH FLXA0.FRMBSC4.UINT8[HH]
#define FLXA0FRWRDS1 FLXA0.FRWRDS1.UINT32
#define FLXA0FRWRDS1L FLXA0.FRWRDS1.UINT16[L]
#define FLXA0FRWRDS1LL FLXA0.FRWRDS1.UINT8[LL]
#define FLXA0FRWRDS1LH FLXA0.FRWRDS1.UINT8[LH]
#define FLXA0FRWRDS1H FLXA0.FRWRDS1.UINT16[H]
#define FLXA0FRWRDS1HL FLXA0.FRWRDS1.UINT8[HL]
#define FLXA0FRWRDS1HH FLXA0.FRWRDS1.UINT8[HH]
#define FLXA0FRWRDS2 FLXA0.FRWRDS2.UINT32
#define FLXA0FRWRDS2L FLXA0.FRWRDS2.UINT16[L]
#define FLXA0FRWRDS2LL FLXA0.FRWRDS2.UINT8[LL]
#define FLXA0FRWRDS2LH FLXA0.FRWRDS2.UINT8[LH]
#define FLXA0FRWRDS2H FLXA0.FRWRDS2.UINT16[H]
#define FLXA0FRWRDS2HL FLXA0.FRWRDS2.UINT8[HL]
#define FLXA0FRWRDS2HH FLXA0.FRWRDS2.UINT8[HH]
#define FLXA0FRWRDS3 FLXA0.FRWRDS3.UINT32
#define FLXA0FRWRDS3L FLXA0.FRWRDS3.UINT16[L]
#define FLXA0FRWRDS3LL FLXA0.FRWRDS3.UINT8[LL]
#define FLXA0FRWRDS3LH FLXA0.FRWRDS3.UINT8[LH]
#define FLXA0FRWRDS3H FLXA0.FRWRDS3.UINT16[H]
#define FLXA0FRWRDS3HL FLXA0.FRWRDS3.UINT8[HL]
#define FLXA0FRWRDS3HH FLXA0.FRWRDS3.UINT8[HH]
#define FLXA0FRWRDS4 FLXA0.FRWRDS4.UINT32
#define FLXA0FRWRDS4L FLXA0.FRWRDS4.UINT16[L]
#define FLXA0FRWRDS4LL FLXA0.FRWRDS4.UINT8[LL]
#define FLXA0FRWRDS4LH FLXA0.FRWRDS4.UINT8[LH]
#define FLXA0FRWRDS4H FLXA0.FRWRDS4.UINT16[H]
#define FLXA0FRWRDS4HL FLXA0.FRWRDS4.UINT8[HL]
#define FLXA0FRWRDS4HH FLXA0.FRWRDS4.UINT8[HH]
#define FLXA0FRWRDS5 FLXA0.FRWRDS5.UINT32
#define FLXA0FRWRDS5L FLXA0.FRWRDS5.UINT16[L]
#define FLXA0FRWRDS5LL FLXA0.FRWRDS5.UINT8[LL]
#define FLXA0FRWRDS5LH FLXA0.FRWRDS5.UINT8[LH]
#define FLXA0FRWRDS5H FLXA0.FRWRDS5.UINT16[H]
#define FLXA0FRWRDS5HL FLXA0.FRWRDS5.UINT8[HL]
#define FLXA0FRWRDS5HH FLXA0.FRWRDS5.UINT8[HH]
#define FLXA0FRWRDS6 FLXA0.FRWRDS6.UINT32
#define FLXA0FRWRDS6L FLXA0.FRWRDS6.UINT16[L]
#define FLXA0FRWRDS6LL FLXA0.FRWRDS6.UINT8[LL]
#define FLXA0FRWRDS6LH FLXA0.FRWRDS6.UINT8[LH]
#define FLXA0FRWRDS6H FLXA0.FRWRDS6.UINT16[H]
#define FLXA0FRWRDS6HL FLXA0.FRWRDS6.UINT8[HL]
#define FLXA0FRWRDS6HH FLXA0.FRWRDS6.UINT8[HH]
#define FLXA0FRWRDS7 FLXA0.FRWRDS7.UINT32
#define FLXA0FRWRDS7L FLXA0.FRWRDS7.UINT16[L]
#define FLXA0FRWRDS7LL FLXA0.FRWRDS7.UINT8[LL]
#define FLXA0FRWRDS7LH FLXA0.FRWRDS7.UINT8[LH]
#define FLXA0FRWRDS7H FLXA0.FRWRDS7.UINT16[H]
#define FLXA0FRWRDS7HL FLXA0.FRWRDS7.UINT8[HL]
#define FLXA0FRWRDS7HH FLXA0.FRWRDS7.UINT8[HH]
#define FLXA0FRWRDS8 FLXA0.FRWRDS8.UINT32
#define FLXA0FRWRDS8L FLXA0.FRWRDS8.UINT16[L]
#define FLXA0FRWRDS8LL FLXA0.FRWRDS8.UINT8[LL]
#define FLXA0FRWRDS8LH FLXA0.FRWRDS8.UINT8[LH]
#define FLXA0FRWRDS8H FLXA0.FRWRDS8.UINT16[H]
#define FLXA0FRWRDS8HL FLXA0.FRWRDS8.UINT8[HL]
#define FLXA0FRWRDS8HH FLXA0.FRWRDS8.UINT8[HH]
#define FLXA0FRWRDS9 FLXA0.FRWRDS9.UINT32
#define FLXA0FRWRDS9L FLXA0.FRWRDS9.UINT16[L]
#define FLXA0FRWRDS9LL FLXA0.FRWRDS9.UINT8[LL]
#define FLXA0FRWRDS9LH FLXA0.FRWRDS9.UINT8[LH]
#define FLXA0FRWRDS9H FLXA0.FRWRDS9.UINT16[H]
#define FLXA0FRWRDS9HL FLXA0.FRWRDS9.UINT8[HL]
#define FLXA0FRWRDS9HH FLXA0.FRWRDS9.UINT8[HH]
#define FLXA0FRWRDS10 FLXA0.FRWRDS10.UINT32
#define FLXA0FRWRDS10L FLXA0.FRWRDS10.UINT16[L]
#define FLXA0FRWRDS10LL FLXA0.FRWRDS10.UINT8[LL]
#define FLXA0FRWRDS10LH FLXA0.FRWRDS10.UINT8[LH]
#define FLXA0FRWRDS10H FLXA0.FRWRDS10.UINT16[H]
#define FLXA0FRWRDS10HL FLXA0.FRWRDS10.UINT8[HL]
#define FLXA0FRWRDS10HH FLXA0.FRWRDS10.UINT8[HH]
#define FLXA0FRWRDS11 FLXA0.FRWRDS11.UINT32
#define FLXA0FRWRDS11L FLXA0.FRWRDS11.UINT16[L]
#define FLXA0FRWRDS11LL FLXA0.FRWRDS11.UINT8[LL]
#define FLXA0FRWRDS11LH FLXA0.FRWRDS11.UINT8[LH]
#define FLXA0FRWRDS11H FLXA0.FRWRDS11.UINT16[H]
#define FLXA0FRWRDS11HL FLXA0.FRWRDS11.UINT8[HL]
#define FLXA0FRWRDS11HH FLXA0.FRWRDS11.UINT8[HH]
#define FLXA0FRWRDS12 FLXA0.FRWRDS12.UINT32
#define FLXA0FRWRDS12L FLXA0.FRWRDS12.UINT16[L]
#define FLXA0FRWRDS12LL FLXA0.FRWRDS12.UINT8[LL]
#define FLXA0FRWRDS12LH FLXA0.FRWRDS12.UINT8[LH]
#define FLXA0FRWRDS12H FLXA0.FRWRDS12.UINT16[H]
#define FLXA0FRWRDS12HL FLXA0.FRWRDS12.UINT8[HL]
#define FLXA0FRWRDS12HH FLXA0.FRWRDS12.UINT8[HH]
#define FLXA0FRWRDS13 FLXA0.FRWRDS13.UINT32
#define FLXA0FRWRDS13L FLXA0.FRWRDS13.UINT16[L]
#define FLXA0FRWRDS13LL FLXA0.FRWRDS13.UINT8[LL]
#define FLXA0FRWRDS13LH FLXA0.FRWRDS13.UINT8[LH]
#define FLXA0FRWRDS13H FLXA0.FRWRDS13.UINT16[H]
#define FLXA0FRWRDS13HL FLXA0.FRWRDS13.UINT8[HL]
#define FLXA0FRWRDS13HH FLXA0.FRWRDS13.UINT8[HH]
#define FLXA0FRWRDS14 FLXA0.FRWRDS14.UINT32
#define FLXA0FRWRDS14L FLXA0.FRWRDS14.UINT16[L]
#define FLXA0FRWRDS14LL FLXA0.FRWRDS14.UINT8[LL]
#define FLXA0FRWRDS14LH FLXA0.FRWRDS14.UINT8[LH]
#define FLXA0FRWRDS14H FLXA0.FRWRDS14.UINT16[H]
#define FLXA0FRWRDS14HL FLXA0.FRWRDS14.UINT8[HL]
#define FLXA0FRWRDS14HH FLXA0.FRWRDS14.UINT8[HH]
#define FLXA0FRWRDS15 FLXA0.FRWRDS15.UINT32
#define FLXA0FRWRDS15L FLXA0.FRWRDS15.UINT16[L]
#define FLXA0FRWRDS15LL FLXA0.FRWRDS15.UINT8[LL]
#define FLXA0FRWRDS15LH FLXA0.FRWRDS15.UINT8[LH]
#define FLXA0FRWRDS15H FLXA0.FRWRDS15.UINT16[H]
#define FLXA0FRWRDS15HL FLXA0.FRWRDS15.UINT8[HL]
#define FLXA0FRWRDS15HH FLXA0.FRWRDS15.UINT8[HH]
#define FLXA0FRWRDS16 FLXA0.FRWRDS16.UINT32
#define FLXA0FRWRDS16L FLXA0.FRWRDS16.UINT16[L]
#define FLXA0FRWRDS16LL FLXA0.FRWRDS16.UINT8[LL]
#define FLXA0FRWRDS16LH FLXA0.FRWRDS16.UINT8[LH]
#define FLXA0FRWRDS16H FLXA0.FRWRDS16.UINT16[H]
#define FLXA0FRWRDS16HL FLXA0.FRWRDS16.UINT8[HL]
#define FLXA0FRWRDS16HH FLXA0.FRWRDS16.UINT8[HH]
#define FLXA0FRWRDS17 FLXA0.FRWRDS17.UINT32
#define FLXA0FRWRDS17L FLXA0.FRWRDS17.UINT16[L]
#define FLXA0FRWRDS17LL FLXA0.FRWRDS17.UINT8[LL]
#define FLXA0FRWRDS17LH FLXA0.FRWRDS17.UINT8[LH]
#define FLXA0FRWRDS17H FLXA0.FRWRDS17.UINT16[H]
#define FLXA0FRWRDS17HL FLXA0.FRWRDS17.UINT8[HL]
#define FLXA0FRWRDS17HH FLXA0.FRWRDS17.UINT8[HH]
#define FLXA0FRWRDS18 FLXA0.FRWRDS18.UINT32
#define FLXA0FRWRDS18L FLXA0.FRWRDS18.UINT16[L]
#define FLXA0FRWRDS18LL FLXA0.FRWRDS18.UINT8[LL]
#define FLXA0FRWRDS18LH FLXA0.FRWRDS18.UINT8[LH]
#define FLXA0FRWRDS18H FLXA0.FRWRDS18.UINT16[H]
#define FLXA0FRWRDS18HL FLXA0.FRWRDS18.UINT8[HL]
#define FLXA0FRWRDS18HH FLXA0.FRWRDS18.UINT8[HH]
#define FLXA0FRWRDS19 FLXA0.FRWRDS19.UINT32
#define FLXA0FRWRDS19L FLXA0.FRWRDS19.UINT16[L]
#define FLXA0FRWRDS19LL FLXA0.FRWRDS19.UINT8[LL]
#define FLXA0FRWRDS19LH FLXA0.FRWRDS19.UINT8[LH]
#define FLXA0FRWRDS19H FLXA0.FRWRDS19.UINT16[H]
#define FLXA0FRWRDS19HL FLXA0.FRWRDS19.UINT8[HL]
#define FLXA0FRWRDS19HH FLXA0.FRWRDS19.UINT8[HH]
#define FLXA0FRWRDS20 FLXA0.FRWRDS20.UINT32
#define FLXA0FRWRDS20L FLXA0.FRWRDS20.UINT16[L]
#define FLXA0FRWRDS20LL FLXA0.FRWRDS20.UINT8[LL]
#define FLXA0FRWRDS20LH FLXA0.FRWRDS20.UINT8[LH]
#define FLXA0FRWRDS20H FLXA0.FRWRDS20.UINT16[H]
#define FLXA0FRWRDS20HL FLXA0.FRWRDS20.UINT8[HL]
#define FLXA0FRWRDS20HH FLXA0.FRWRDS20.UINT8[HH]
#define FLXA0FRWRDS21 FLXA0.FRWRDS21.UINT32
#define FLXA0FRWRDS21L FLXA0.FRWRDS21.UINT16[L]
#define FLXA0FRWRDS21LL FLXA0.FRWRDS21.UINT8[LL]
#define FLXA0FRWRDS21LH FLXA0.FRWRDS21.UINT8[LH]
#define FLXA0FRWRDS21H FLXA0.FRWRDS21.UINT16[H]
#define FLXA0FRWRDS21HL FLXA0.FRWRDS21.UINT8[HL]
#define FLXA0FRWRDS21HH FLXA0.FRWRDS21.UINT8[HH]
#define FLXA0FRWRDS22 FLXA0.FRWRDS22.UINT32
#define FLXA0FRWRDS22L FLXA0.FRWRDS22.UINT16[L]
#define FLXA0FRWRDS22LL FLXA0.FRWRDS22.UINT8[LL]
#define FLXA0FRWRDS22LH FLXA0.FRWRDS22.UINT8[LH]
#define FLXA0FRWRDS22H FLXA0.FRWRDS22.UINT16[H]
#define FLXA0FRWRDS22HL FLXA0.FRWRDS22.UINT8[HL]
#define FLXA0FRWRDS22HH FLXA0.FRWRDS22.UINT8[HH]
#define FLXA0FRWRDS23 FLXA0.FRWRDS23.UINT32
#define FLXA0FRWRDS23L FLXA0.FRWRDS23.UINT16[L]
#define FLXA0FRWRDS23LL FLXA0.FRWRDS23.UINT8[LL]
#define FLXA0FRWRDS23LH FLXA0.FRWRDS23.UINT8[LH]
#define FLXA0FRWRDS23H FLXA0.FRWRDS23.UINT16[H]
#define FLXA0FRWRDS23HL FLXA0.FRWRDS23.UINT8[HL]
#define FLXA0FRWRDS23HH FLXA0.FRWRDS23.UINT8[HH]
#define FLXA0FRWRDS24 FLXA0.FRWRDS24.UINT32
#define FLXA0FRWRDS24L FLXA0.FRWRDS24.UINT16[L]
#define FLXA0FRWRDS24LL FLXA0.FRWRDS24.UINT8[LL]
#define FLXA0FRWRDS24LH FLXA0.FRWRDS24.UINT8[LH]
#define FLXA0FRWRDS24H FLXA0.FRWRDS24.UINT16[H]
#define FLXA0FRWRDS24HL FLXA0.FRWRDS24.UINT8[HL]
#define FLXA0FRWRDS24HH FLXA0.FRWRDS24.UINT8[HH]
#define FLXA0FRWRDS25 FLXA0.FRWRDS25.UINT32
#define FLXA0FRWRDS25L FLXA0.FRWRDS25.UINT16[L]
#define FLXA0FRWRDS25LL FLXA0.FRWRDS25.UINT8[LL]
#define FLXA0FRWRDS25LH FLXA0.FRWRDS25.UINT8[LH]
#define FLXA0FRWRDS25H FLXA0.FRWRDS25.UINT16[H]
#define FLXA0FRWRDS25HL FLXA0.FRWRDS25.UINT8[HL]
#define FLXA0FRWRDS25HH FLXA0.FRWRDS25.UINT8[HH]
#define FLXA0FRWRDS26 FLXA0.FRWRDS26.UINT32
#define FLXA0FRWRDS26L FLXA0.FRWRDS26.UINT16[L]
#define FLXA0FRWRDS26LL FLXA0.FRWRDS26.UINT8[LL]
#define FLXA0FRWRDS26LH FLXA0.FRWRDS26.UINT8[LH]
#define FLXA0FRWRDS26H FLXA0.FRWRDS26.UINT16[H]
#define FLXA0FRWRDS26HL FLXA0.FRWRDS26.UINT8[HL]
#define FLXA0FRWRDS26HH FLXA0.FRWRDS26.UINT8[HH]
#define FLXA0FRWRDS27 FLXA0.FRWRDS27.UINT32
#define FLXA0FRWRDS27L FLXA0.FRWRDS27.UINT16[L]
#define FLXA0FRWRDS27LL FLXA0.FRWRDS27.UINT8[LL]
#define FLXA0FRWRDS27LH FLXA0.FRWRDS27.UINT8[LH]
#define FLXA0FRWRDS27H FLXA0.FRWRDS27.UINT16[H]
#define FLXA0FRWRDS27HL FLXA0.FRWRDS27.UINT8[HL]
#define FLXA0FRWRDS27HH FLXA0.FRWRDS27.UINT8[HH]
#define FLXA0FRWRDS28 FLXA0.FRWRDS28.UINT32
#define FLXA0FRWRDS28L FLXA0.FRWRDS28.UINT16[L]
#define FLXA0FRWRDS28LL FLXA0.FRWRDS28.UINT8[LL]
#define FLXA0FRWRDS28LH FLXA0.FRWRDS28.UINT8[LH]
#define FLXA0FRWRDS28H FLXA0.FRWRDS28.UINT16[H]
#define FLXA0FRWRDS28HL FLXA0.FRWRDS28.UINT8[HL]
#define FLXA0FRWRDS28HH FLXA0.FRWRDS28.UINT8[HH]
#define FLXA0FRWRDS29 FLXA0.FRWRDS29.UINT32
#define FLXA0FRWRDS29L FLXA0.FRWRDS29.UINT16[L]
#define FLXA0FRWRDS29LL FLXA0.FRWRDS29.UINT8[LL]
#define FLXA0FRWRDS29LH FLXA0.FRWRDS29.UINT8[LH]
#define FLXA0FRWRDS29H FLXA0.FRWRDS29.UINT16[H]
#define FLXA0FRWRDS29HL FLXA0.FRWRDS29.UINT8[HL]
#define FLXA0FRWRDS29HH FLXA0.FRWRDS29.UINT8[HH]
#define FLXA0FRWRDS30 FLXA0.FRWRDS30.UINT32
#define FLXA0FRWRDS30L FLXA0.FRWRDS30.UINT16[L]
#define FLXA0FRWRDS30LL FLXA0.FRWRDS30.UINT8[LL]
#define FLXA0FRWRDS30LH FLXA0.FRWRDS30.UINT8[LH]
#define FLXA0FRWRDS30H FLXA0.FRWRDS30.UINT16[H]
#define FLXA0FRWRDS30HL FLXA0.FRWRDS30.UINT8[HL]
#define FLXA0FRWRDS30HH FLXA0.FRWRDS30.UINT8[HH]
#define FLXA0FRWRDS31 FLXA0.FRWRDS31.UINT32
#define FLXA0FRWRDS31L FLXA0.FRWRDS31.UINT16[L]
#define FLXA0FRWRDS31LL FLXA0.FRWRDS31.UINT8[LL]
#define FLXA0FRWRDS31LH FLXA0.FRWRDS31.UINT8[LH]
#define FLXA0FRWRDS31H FLXA0.FRWRDS31.UINT16[H]
#define FLXA0FRWRDS31HL FLXA0.FRWRDS31.UINT8[HL]
#define FLXA0FRWRDS31HH FLXA0.FRWRDS31.UINT8[HH]
#define FLXA0FRWRDS32 FLXA0.FRWRDS32.UINT32
#define FLXA0FRWRDS32L FLXA0.FRWRDS32.UINT16[L]
#define FLXA0FRWRDS32LL FLXA0.FRWRDS32.UINT8[LL]
#define FLXA0FRWRDS32LH FLXA0.FRWRDS32.UINT8[LH]
#define FLXA0FRWRDS32H FLXA0.FRWRDS32.UINT16[H]
#define FLXA0FRWRDS32HL FLXA0.FRWRDS32.UINT8[HL]
#define FLXA0FRWRDS32HH FLXA0.FRWRDS32.UINT8[HH]
#define FLXA0FRWRDS33 FLXA0.FRWRDS33.UINT32
#define FLXA0FRWRDS33L FLXA0.FRWRDS33.UINT16[L]
#define FLXA0FRWRDS33LL FLXA0.FRWRDS33.UINT8[LL]
#define FLXA0FRWRDS33LH FLXA0.FRWRDS33.UINT8[LH]
#define FLXA0FRWRDS33H FLXA0.FRWRDS33.UINT16[H]
#define FLXA0FRWRDS33HL FLXA0.FRWRDS33.UINT8[HL]
#define FLXA0FRWRDS33HH FLXA0.FRWRDS33.UINT8[HH]
#define FLXA0FRWRDS34 FLXA0.FRWRDS34.UINT32
#define FLXA0FRWRDS34L FLXA0.FRWRDS34.UINT16[L]
#define FLXA0FRWRDS34LL FLXA0.FRWRDS34.UINT8[LL]
#define FLXA0FRWRDS34LH FLXA0.FRWRDS34.UINT8[LH]
#define FLXA0FRWRDS34H FLXA0.FRWRDS34.UINT16[H]
#define FLXA0FRWRDS34HL FLXA0.FRWRDS34.UINT8[HL]
#define FLXA0FRWRDS34HH FLXA0.FRWRDS34.UINT8[HH]
#define FLXA0FRWRDS35 FLXA0.FRWRDS35.UINT32
#define FLXA0FRWRDS35L FLXA0.FRWRDS35.UINT16[L]
#define FLXA0FRWRDS35LL FLXA0.FRWRDS35.UINT8[LL]
#define FLXA0FRWRDS35LH FLXA0.FRWRDS35.UINT8[LH]
#define FLXA0FRWRDS35H FLXA0.FRWRDS35.UINT16[H]
#define FLXA0FRWRDS35HL FLXA0.FRWRDS35.UINT8[HL]
#define FLXA0FRWRDS35HH FLXA0.FRWRDS35.UINT8[HH]
#define FLXA0FRWRDS36 FLXA0.FRWRDS36.UINT32
#define FLXA0FRWRDS36L FLXA0.FRWRDS36.UINT16[L]
#define FLXA0FRWRDS36LL FLXA0.FRWRDS36.UINT8[LL]
#define FLXA0FRWRDS36LH FLXA0.FRWRDS36.UINT8[LH]
#define FLXA0FRWRDS36H FLXA0.FRWRDS36.UINT16[H]
#define FLXA0FRWRDS36HL FLXA0.FRWRDS36.UINT8[HL]
#define FLXA0FRWRDS36HH FLXA0.FRWRDS36.UINT8[HH]
#define FLXA0FRWRDS37 FLXA0.FRWRDS37.UINT32
#define FLXA0FRWRDS37L FLXA0.FRWRDS37.UINT16[L]
#define FLXA0FRWRDS37LL FLXA0.FRWRDS37.UINT8[LL]
#define FLXA0FRWRDS37LH FLXA0.FRWRDS37.UINT8[LH]
#define FLXA0FRWRDS37H FLXA0.FRWRDS37.UINT16[H]
#define FLXA0FRWRDS37HL FLXA0.FRWRDS37.UINT8[HL]
#define FLXA0FRWRDS37HH FLXA0.FRWRDS37.UINT8[HH]
#define FLXA0FRWRDS38 FLXA0.FRWRDS38.UINT32
#define FLXA0FRWRDS38L FLXA0.FRWRDS38.UINT16[L]
#define FLXA0FRWRDS38LL FLXA0.FRWRDS38.UINT8[LL]
#define FLXA0FRWRDS38LH FLXA0.FRWRDS38.UINT8[LH]
#define FLXA0FRWRDS38H FLXA0.FRWRDS38.UINT16[H]
#define FLXA0FRWRDS38HL FLXA0.FRWRDS38.UINT8[HL]
#define FLXA0FRWRDS38HH FLXA0.FRWRDS38.UINT8[HH]
#define FLXA0FRWRDS39 FLXA0.FRWRDS39.UINT32
#define FLXA0FRWRDS39L FLXA0.FRWRDS39.UINT16[L]
#define FLXA0FRWRDS39LL FLXA0.FRWRDS39.UINT8[LL]
#define FLXA0FRWRDS39LH FLXA0.FRWRDS39.UINT8[LH]
#define FLXA0FRWRDS39H FLXA0.FRWRDS39.UINT16[H]
#define FLXA0FRWRDS39HL FLXA0.FRWRDS39.UINT8[HL]
#define FLXA0FRWRDS39HH FLXA0.FRWRDS39.UINT8[HH]
#define FLXA0FRWRDS40 FLXA0.FRWRDS40.UINT32
#define FLXA0FRWRDS40L FLXA0.FRWRDS40.UINT16[L]
#define FLXA0FRWRDS40LL FLXA0.FRWRDS40.UINT8[LL]
#define FLXA0FRWRDS40LH FLXA0.FRWRDS40.UINT8[LH]
#define FLXA0FRWRDS40H FLXA0.FRWRDS40.UINT16[H]
#define FLXA0FRWRDS40HL FLXA0.FRWRDS40.UINT8[HL]
#define FLXA0FRWRDS40HH FLXA0.FRWRDS40.UINT8[HH]
#define FLXA0FRWRDS41 FLXA0.FRWRDS41.UINT32
#define FLXA0FRWRDS41L FLXA0.FRWRDS41.UINT16[L]
#define FLXA0FRWRDS41LL FLXA0.FRWRDS41.UINT8[LL]
#define FLXA0FRWRDS41LH FLXA0.FRWRDS41.UINT8[LH]
#define FLXA0FRWRDS41H FLXA0.FRWRDS41.UINT16[H]
#define FLXA0FRWRDS41HL FLXA0.FRWRDS41.UINT8[HL]
#define FLXA0FRWRDS41HH FLXA0.FRWRDS41.UINT8[HH]
#define FLXA0FRWRDS42 FLXA0.FRWRDS42.UINT32
#define FLXA0FRWRDS42L FLXA0.FRWRDS42.UINT16[L]
#define FLXA0FRWRDS42LL FLXA0.FRWRDS42.UINT8[LL]
#define FLXA0FRWRDS42LH FLXA0.FRWRDS42.UINT8[LH]
#define FLXA0FRWRDS42H FLXA0.FRWRDS42.UINT16[H]
#define FLXA0FRWRDS42HL FLXA0.FRWRDS42.UINT8[HL]
#define FLXA0FRWRDS42HH FLXA0.FRWRDS42.UINT8[HH]
#define FLXA0FRWRDS43 FLXA0.FRWRDS43.UINT32
#define FLXA0FRWRDS43L FLXA0.FRWRDS43.UINT16[L]
#define FLXA0FRWRDS43LL FLXA0.FRWRDS43.UINT8[LL]
#define FLXA0FRWRDS43LH FLXA0.FRWRDS43.UINT8[LH]
#define FLXA0FRWRDS43H FLXA0.FRWRDS43.UINT16[H]
#define FLXA0FRWRDS43HL FLXA0.FRWRDS43.UINT8[HL]
#define FLXA0FRWRDS43HH FLXA0.FRWRDS43.UINT8[HH]
#define FLXA0FRWRDS44 FLXA0.FRWRDS44.UINT32
#define FLXA0FRWRDS44L FLXA0.FRWRDS44.UINT16[L]
#define FLXA0FRWRDS44LL FLXA0.FRWRDS44.UINT8[LL]
#define FLXA0FRWRDS44LH FLXA0.FRWRDS44.UINT8[LH]
#define FLXA0FRWRDS44H FLXA0.FRWRDS44.UINT16[H]
#define FLXA0FRWRDS44HL FLXA0.FRWRDS44.UINT8[HL]
#define FLXA0FRWRDS44HH FLXA0.FRWRDS44.UINT8[HH]
#define FLXA0FRWRDS45 FLXA0.FRWRDS45.UINT32
#define FLXA0FRWRDS45L FLXA0.FRWRDS45.UINT16[L]
#define FLXA0FRWRDS45LL FLXA0.FRWRDS45.UINT8[LL]
#define FLXA0FRWRDS45LH FLXA0.FRWRDS45.UINT8[LH]
#define FLXA0FRWRDS45H FLXA0.FRWRDS45.UINT16[H]
#define FLXA0FRWRDS45HL FLXA0.FRWRDS45.UINT8[HL]
#define FLXA0FRWRDS45HH FLXA0.FRWRDS45.UINT8[HH]
#define FLXA0FRWRDS46 FLXA0.FRWRDS46.UINT32
#define FLXA0FRWRDS46L FLXA0.FRWRDS46.UINT16[L]
#define FLXA0FRWRDS46LL FLXA0.FRWRDS46.UINT8[LL]
#define FLXA0FRWRDS46LH FLXA0.FRWRDS46.UINT8[LH]
#define FLXA0FRWRDS46H FLXA0.FRWRDS46.UINT16[H]
#define FLXA0FRWRDS46HL FLXA0.FRWRDS46.UINT8[HL]
#define FLXA0FRWRDS46HH FLXA0.FRWRDS46.UINT8[HH]
#define FLXA0FRWRDS47 FLXA0.FRWRDS47.UINT32
#define FLXA0FRWRDS47L FLXA0.FRWRDS47.UINT16[L]
#define FLXA0FRWRDS47LL FLXA0.FRWRDS47.UINT8[LL]
#define FLXA0FRWRDS47LH FLXA0.FRWRDS47.UINT8[LH]
#define FLXA0FRWRDS47H FLXA0.FRWRDS47.UINT16[H]
#define FLXA0FRWRDS47HL FLXA0.FRWRDS47.UINT8[HL]
#define FLXA0FRWRDS47HH FLXA0.FRWRDS47.UINT8[HH]
#define FLXA0FRWRDS48 FLXA0.FRWRDS48.UINT32
#define FLXA0FRWRDS48L FLXA0.FRWRDS48.UINT16[L]
#define FLXA0FRWRDS48LL FLXA0.FRWRDS48.UINT8[LL]
#define FLXA0FRWRDS48LH FLXA0.FRWRDS48.UINT8[LH]
#define FLXA0FRWRDS48H FLXA0.FRWRDS48.UINT16[H]
#define FLXA0FRWRDS48HL FLXA0.FRWRDS48.UINT8[HL]
#define FLXA0FRWRDS48HH FLXA0.FRWRDS48.UINT8[HH]
#define FLXA0FRWRDS49 FLXA0.FRWRDS49.UINT32
#define FLXA0FRWRDS49L FLXA0.FRWRDS49.UINT16[L]
#define FLXA0FRWRDS49LL FLXA0.FRWRDS49.UINT8[LL]
#define FLXA0FRWRDS49LH FLXA0.FRWRDS49.UINT8[LH]
#define FLXA0FRWRDS49H FLXA0.FRWRDS49.UINT16[H]
#define FLXA0FRWRDS49HL FLXA0.FRWRDS49.UINT8[HL]
#define FLXA0FRWRDS49HH FLXA0.FRWRDS49.UINT8[HH]
#define FLXA0FRWRDS50 FLXA0.FRWRDS50.UINT32
#define FLXA0FRWRDS50L FLXA0.FRWRDS50.UINT16[L]
#define FLXA0FRWRDS50LL FLXA0.FRWRDS50.UINT8[LL]
#define FLXA0FRWRDS50LH FLXA0.FRWRDS50.UINT8[LH]
#define FLXA0FRWRDS50H FLXA0.FRWRDS50.UINT16[H]
#define FLXA0FRWRDS50HL FLXA0.FRWRDS50.UINT8[HL]
#define FLXA0FRWRDS50HH FLXA0.FRWRDS50.UINT8[HH]
#define FLXA0FRWRDS51 FLXA0.FRWRDS51.UINT32
#define FLXA0FRWRDS51L FLXA0.FRWRDS51.UINT16[L]
#define FLXA0FRWRDS51LL FLXA0.FRWRDS51.UINT8[LL]
#define FLXA0FRWRDS51LH FLXA0.FRWRDS51.UINT8[LH]
#define FLXA0FRWRDS51H FLXA0.FRWRDS51.UINT16[H]
#define FLXA0FRWRDS51HL FLXA0.FRWRDS51.UINT8[HL]
#define FLXA0FRWRDS51HH FLXA0.FRWRDS51.UINT8[HH]
#define FLXA0FRWRDS52 FLXA0.FRWRDS52.UINT32
#define FLXA0FRWRDS52L FLXA0.FRWRDS52.UINT16[L]
#define FLXA0FRWRDS52LL FLXA0.FRWRDS52.UINT8[LL]
#define FLXA0FRWRDS52LH FLXA0.FRWRDS52.UINT8[LH]
#define FLXA0FRWRDS52H FLXA0.FRWRDS52.UINT16[H]
#define FLXA0FRWRDS52HL FLXA0.FRWRDS52.UINT8[HL]
#define FLXA0FRWRDS52HH FLXA0.FRWRDS52.UINT8[HH]
#define FLXA0FRWRDS53 FLXA0.FRWRDS53.UINT32
#define FLXA0FRWRDS53L FLXA0.FRWRDS53.UINT16[L]
#define FLXA0FRWRDS53LL FLXA0.FRWRDS53.UINT8[LL]
#define FLXA0FRWRDS53LH FLXA0.FRWRDS53.UINT8[LH]
#define FLXA0FRWRDS53H FLXA0.FRWRDS53.UINT16[H]
#define FLXA0FRWRDS53HL FLXA0.FRWRDS53.UINT8[HL]
#define FLXA0FRWRDS53HH FLXA0.FRWRDS53.UINT8[HH]
#define FLXA0FRWRDS54 FLXA0.FRWRDS54.UINT32
#define FLXA0FRWRDS54L FLXA0.FRWRDS54.UINT16[L]
#define FLXA0FRWRDS54LL FLXA0.FRWRDS54.UINT8[LL]
#define FLXA0FRWRDS54LH FLXA0.FRWRDS54.UINT8[LH]
#define FLXA0FRWRDS54H FLXA0.FRWRDS54.UINT16[H]
#define FLXA0FRWRDS54HL FLXA0.FRWRDS54.UINT8[HL]
#define FLXA0FRWRDS54HH FLXA0.FRWRDS54.UINT8[HH]
#define FLXA0FRWRDS55 FLXA0.FRWRDS55.UINT32
#define FLXA0FRWRDS55L FLXA0.FRWRDS55.UINT16[L]
#define FLXA0FRWRDS55LL FLXA0.FRWRDS55.UINT8[LL]
#define FLXA0FRWRDS55LH FLXA0.FRWRDS55.UINT8[LH]
#define FLXA0FRWRDS55H FLXA0.FRWRDS55.UINT16[H]
#define FLXA0FRWRDS55HL FLXA0.FRWRDS55.UINT8[HL]
#define FLXA0FRWRDS55HH FLXA0.FRWRDS55.UINT8[HH]
#define FLXA0FRWRDS56 FLXA0.FRWRDS56.UINT32
#define FLXA0FRWRDS56L FLXA0.FRWRDS56.UINT16[L]
#define FLXA0FRWRDS56LL FLXA0.FRWRDS56.UINT8[LL]
#define FLXA0FRWRDS56LH FLXA0.FRWRDS56.UINT8[LH]
#define FLXA0FRWRDS56H FLXA0.FRWRDS56.UINT16[H]
#define FLXA0FRWRDS56HL FLXA0.FRWRDS56.UINT8[HL]
#define FLXA0FRWRDS56HH FLXA0.FRWRDS56.UINT8[HH]
#define FLXA0FRWRDS57 FLXA0.FRWRDS57.UINT32
#define FLXA0FRWRDS57L FLXA0.FRWRDS57.UINT16[L]
#define FLXA0FRWRDS57LL FLXA0.FRWRDS57.UINT8[LL]
#define FLXA0FRWRDS57LH FLXA0.FRWRDS57.UINT8[LH]
#define FLXA0FRWRDS57H FLXA0.FRWRDS57.UINT16[H]
#define FLXA0FRWRDS57HL FLXA0.FRWRDS57.UINT8[HL]
#define FLXA0FRWRDS57HH FLXA0.FRWRDS57.UINT8[HH]
#define FLXA0FRWRDS58 FLXA0.FRWRDS58.UINT32
#define FLXA0FRWRDS58L FLXA0.FRWRDS58.UINT16[L]
#define FLXA0FRWRDS58LL FLXA0.FRWRDS58.UINT8[LL]
#define FLXA0FRWRDS58LH FLXA0.FRWRDS58.UINT8[LH]
#define FLXA0FRWRDS58H FLXA0.FRWRDS58.UINT16[H]
#define FLXA0FRWRDS58HL FLXA0.FRWRDS58.UINT8[HL]
#define FLXA0FRWRDS58HH FLXA0.FRWRDS58.UINT8[HH]
#define FLXA0FRWRDS59 FLXA0.FRWRDS59.UINT32
#define FLXA0FRWRDS59L FLXA0.FRWRDS59.UINT16[L]
#define FLXA0FRWRDS59LL FLXA0.FRWRDS59.UINT8[LL]
#define FLXA0FRWRDS59LH FLXA0.FRWRDS59.UINT8[LH]
#define FLXA0FRWRDS59H FLXA0.FRWRDS59.UINT16[H]
#define FLXA0FRWRDS59HL FLXA0.FRWRDS59.UINT8[HL]
#define FLXA0FRWRDS59HH FLXA0.FRWRDS59.UINT8[HH]
#define FLXA0FRWRDS60 FLXA0.FRWRDS60.UINT32
#define FLXA0FRWRDS60L FLXA0.FRWRDS60.UINT16[L]
#define FLXA0FRWRDS60LL FLXA0.FRWRDS60.UINT8[LL]
#define FLXA0FRWRDS60LH FLXA0.FRWRDS60.UINT8[LH]
#define FLXA0FRWRDS60H FLXA0.FRWRDS60.UINT16[H]
#define FLXA0FRWRDS60HL FLXA0.FRWRDS60.UINT8[HL]
#define FLXA0FRWRDS60HH FLXA0.FRWRDS60.UINT8[HH]
#define FLXA0FRWRDS61 FLXA0.FRWRDS61.UINT32
#define FLXA0FRWRDS61L FLXA0.FRWRDS61.UINT16[L]
#define FLXA0FRWRDS61LL FLXA0.FRWRDS61.UINT8[LL]
#define FLXA0FRWRDS61LH FLXA0.FRWRDS61.UINT8[LH]
#define FLXA0FRWRDS61H FLXA0.FRWRDS61.UINT16[H]
#define FLXA0FRWRDS61HL FLXA0.FRWRDS61.UINT8[HL]
#define FLXA0FRWRDS61HH FLXA0.FRWRDS61.UINT8[HH]
#define FLXA0FRWRDS62 FLXA0.FRWRDS62.UINT32
#define FLXA0FRWRDS62L FLXA0.FRWRDS62.UINT16[L]
#define FLXA0FRWRDS62LL FLXA0.FRWRDS62.UINT8[LL]
#define FLXA0FRWRDS62LH FLXA0.FRWRDS62.UINT8[LH]
#define FLXA0FRWRDS62H FLXA0.FRWRDS62.UINT16[H]
#define FLXA0FRWRDS62HL FLXA0.FRWRDS62.UINT8[HL]
#define FLXA0FRWRDS62HH FLXA0.FRWRDS62.UINT8[HH]
#define FLXA0FRWRDS63 FLXA0.FRWRDS63.UINT32
#define FLXA0FRWRDS63L FLXA0.FRWRDS63.UINT16[L]
#define FLXA0FRWRDS63LL FLXA0.FRWRDS63.UINT8[LL]
#define FLXA0FRWRDS63LH FLXA0.FRWRDS63.UINT8[LH]
#define FLXA0FRWRDS63H FLXA0.FRWRDS63.UINT16[H]
#define FLXA0FRWRDS63HL FLXA0.FRWRDS63.UINT8[HL]
#define FLXA0FRWRDS63HH FLXA0.FRWRDS63.UINT8[HH]
#define FLXA0FRWRDS64 FLXA0.FRWRDS64.UINT32
#define FLXA0FRWRDS64L FLXA0.FRWRDS64.UINT16[L]
#define FLXA0FRWRDS64LL FLXA0.FRWRDS64.UINT8[LL]
#define FLXA0FRWRDS64LH FLXA0.FRWRDS64.UINT8[LH]
#define FLXA0FRWRDS64H FLXA0.FRWRDS64.UINT16[H]
#define FLXA0FRWRDS64HL FLXA0.FRWRDS64.UINT8[HL]
#define FLXA0FRWRDS64HH FLXA0.FRWRDS64.UINT8[HH]
#define FLXA0FRWRHS1 FLXA0.FRWRHS1.UINT32
#define FLXA0FRWRHS1L FLXA0.FRWRHS1.UINT16[L]
#define FLXA0FRWRHS1LL FLXA0.FRWRHS1.UINT8[LL]
#define FLXA0FRWRHS1LH FLXA0.FRWRHS1.UINT8[LH]
#define FLXA0FRWRHS1H FLXA0.FRWRHS1.UINT16[H]
#define FLXA0FRWRHS1HL FLXA0.FRWRHS1.UINT8[HL]
#define FLXA0FRWRHS1HH FLXA0.FRWRHS1.UINT8[HH]
#define FLXA0FRWRHS2 FLXA0.FRWRHS2.UINT32
#define FLXA0FRWRHS2L FLXA0.FRWRHS2.UINT16[L]
#define FLXA0FRWRHS2LL FLXA0.FRWRHS2.UINT8[LL]
#define FLXA0FRWRHS2LH FLXA0.FRWRHS2.UINT8[LH]
#define FLXA0FRWRHS2H FLXA0.FRWRHS2.UINT16[H]
#define FLXA0FRWRHS2HL FLXA0.FRWRHS2.UINT8[HL]
#define FLXA0FRWRHS3 FLXA0.FRWRHS3.UINT32
#define FLXA0FRWRHS3L FLXA0.FRWRHS3.UINT16[L]
#define FLXA0FRWRHS3LL FLXA0.FRWRHS3.UINT8[LL]
#define FLXA0FRWRHS3LH FLXA0.FRWRHS3.UINT8[LH]
#define FLXA0FRIBCM FLXA0.FRIBCM.UINT32
#define FLXA0FRIBCML FLXA0.FRIBCM.UINT16[L]
#define FLXA0FRIBCMLL FLXA0.FRIBCM.UINT8[LL]
#define FLXA0FRIBCMH FLXA0.FRIBCM.UINT16[H]
#define FLXA0FRIBCMHL FLXA0.FRIBCM.UINT8[HL]
#define FLXA0FRIBCR FLXA0.FRIBCR.UINT32
#define FLXA0FRIBCRL FLXA0.FRIBCR.UINT16[L]
#define FLXA0FRIBCRLL FLXA0.FRIBCR.UINT8[LL]
#define FLXA0FRIBCRLH FLXA0.FRIBCR.UINT8[LH]
#define FLXA0FRIBCRH FLXA0.FRIBCR.UINT16[H]
#define FLXA0FRIBCRHL FLXA0.FRIBCR.UINT8[HL]
#define FLXA0FRIBCRHH FLXA0.FRIBCR.UINT8[HH]
#define FLXA0FRRDDS1 FLXA0.FRRDDS1.UINT32
#define FLXA0FRRDDS1L FLXA0.FRRDDS1.UINT16[L]
#define FLXA0FRRDDS1LL FLXA0.FRRDDS1.UINT8[LL]
#define FLXA0FRRDDS1LH FLXA0.FRRDDS1.UINT8[LH]
#define FLXA0FRRDDS1H FLXA0.FRRDDS1.UINT16[H]
#define FLXA0FRRDDS1HL FLXA0.FRRDDS1.UINT8[HL]
#define FLXA0FRRDDS1HH FLXA0.FRRDDS1.UINT8[HH]
#define FLXA0FRRDDS2 FLXA0.FRRDDS2.UINT32
#define FLXA0FRRDDS2L FLXA0.FRRDDS2.UINT16[L]
#define FLXA0FRRDDS2LL FLXA0.FRRDDS2.UINT8[LL]
#define FLXA0FRRDDS2LH FLXA0.FRRDDS2.UINT8[LH]
#define FLXA0FRRDDS2H FLXA0.FRRDDS2.UINT16[H]
#define FLXA0FRRDDS2HL FLXA0.FRRDDS2.UINT8[HL]
#define FLXA0FRRDDS2HH FLXA0.FRRDDS2.UINT8[HH]
#define FLXA0FRRDDS3 FLXA0.FRRDDS3.UINT32
#define FLXA0FRRDDS3L FLXA0.FRRDDS3.UINT16[L]
#define FLXA0FRRDDS3LL FLXA0.FRRDDS3.UINT8[LL]
#define FLXA0FRRDDS3LH FLXA0.FRRDDS3.UINT8[LH]
#define FLXA0FRRDDS3H FLXA0.FRRDDS3.UINT16[H]
#define FLXA0FRRDDS3HL FLXA0.FRRDDS3.UINT8[HL]
#define FLXA0FRRDDS3HH FLXA0.FRRDDS3.UINT8[HH]
#define FLXA0FRRDDS4 FLXA0.FRRDDS4.UINT32
#define FLXA0FRRDDS4L FLXA0.FRRDDS4.UINT16[L]
#define FLXA0FRRDDS4LL FLXA0.FRRDDS4.UINT8[LL]
#define FLXA0FRRDDS4LH FLXA0.FRRDDS4.UINT8[LH]
#define FLXA0FRRDDS4H FLXA0.FRRDDS4.UINT16[H]
#define FLXA0FRRDDS4HL FLXA0.FRRDDS4.UINT8[HL]
#define FLXA0FRRDDS4HH FLXA0.FRRDDS4.UINT8[HH]
#define FLXA0FRRDDS5 FLXA0.FRRDDS5.UINT32
#define FLXA0FRRDDS5L FLXA0.FRRDDS5.UINT16[L]
#define FLXA0FRRDDS5LL FLXA0.FRRDDS5.UINT8[LL]
#define FLXA0FRRDDS5LH FLXA0.FRRDDS5.UINT8[LH]
#define FLXA0FRRDDS5H FLXA0.FRRDDS5.UINT16[H]
#define FLXA0FRRDDS5HL FLXA0.FRRDDS5.UINT8[HL]
#define FLXA0FRRDDS5HH FLXA0.FRRDDS5.UINT8[HH]
#define FLXA0FRRDDS6 FLXA0.FRRDDS6.UINT32
#define FLXA0FRRDDS6L FLXA0.FRRDDS6.UINT16[L]
#define FLXA0FRRDDS6LL FLXA0.FRRDDS6.UINT8[LL]
#define FLXA0FRRDDS6LH FLXA0.FRRDDS6.UINT8[LH]
#define FLXA0FRRDDS6H FLXA0.FRRDDS6.UINT16[H]
#define FLXA0FRRDDS6HL FLXA0.FRRDDS6.UINT8[HL]
#define FLXA0FRRDDS6HH FLXA0.FRRDDS6.UINT8[HH]
#define FLXA0FRRDDS7 FLXA0.FRRDDS7.UINT32
#define FLXA0FRRDDS7L FLXA0.FRRDDS7.UINT16[L]
#define FLXA0FRRDDS7LL FLXA0.FRRDDS7.UINT8[LL]
#define FLXA0FRRDDS7LH FLXA0.FRRDDS7.UINT8[LH]
#define FLXA0FRRDDS7H FLXA0.FRRDDS7.UINT16[H]
#define FLXA0FRRDDS7HL FLXA0.FRRDDS7.UINT8[HL]
#define FLXA0FRRDDS7HH FLXA0.FRRDDS7.UINT8[HH]
#define FLXA0FRRDDS8 FLXA0.FRRDDS8.UINT32
#define FLXA0FRRDDS8L FLXA0.FRRDDS8.UINT16[L]
#define FLXA0FRRDDS8LL FLXA0.FRRDDS8.UINT8[LL]
#define FLXA0FRRDDS8LH FLXA0.FRRDDS8.UINT8[LH]
#define FLXA0FRRDDS8H FLXA0.FRRDDS8.UINT16[H]
#define FLXA0FRRDDS8HL FLXA0.FRRDDS8.UINT8[HL]
#define FLXA0FRRDDS8HH FLXA0.FRRDDS8.UINT8[HH]
#define FLXA0FRRDDS9 FLXA0.FRRDDS9.UINT32
#define FLXA0FRRDDS9L FLXA0.FRRDDS9.UINT16[L]
#define FLXA0FRRDDS9LL FLXA0.FRRDDS9.UINT8[LL]
#define FLXA0FRRDDS9LH FLXA0.FRRDDS9.UINT8[LH]
#define FLXA0FRRDDS9H FLXA0.FRRDDS9.UINT16[H]
#define FLXA0FRRDDS9HL FLXA0.FRRDDS9.UINT8[HL]
#define FLXA0FRRDDS9HH FLXA0.FRRDDS9.UINT8[HH]
#define FLXA0FRRDDS10 FLXA0.FRRDDS10.UINT32
#define FLXA0FRRDDS10L FLXA0.FRRDDS10.UINT16[L]
#define FLXA0FRRDDS10LL FLXA0.FRRDDS10.UINT8[LL]
#define FLXA0FRRDDS10LH FLXA0.FRRDDS10.UINT8[LH]
#define FLXA0FRRDDS10H FLXA0.FRRDDS10.UINT16[H]
#define FLXA0FRRDDS10HL FLXA0.FRRDDS10.UINT8[HL]
#define FLXA0FRRDDS10HH FLXA0.FRRDDS10.UINT8[HH]
#define FLXA0FRRDDS11 FLXA0.FRRDDS11.UINT32
#define FLXA0FRRDDS11L FLXA0.FRRDDS11.UINT16[L]
#define FLXA0FRRDDS11LL FLXA0.FRRDDS11.UINT8[LL]
#define FLXA0FRRDDS11LH FLXA0.FRRDDS11.UINT8[LH]
#define FLXA0FRRDDS11H FLXA0.FRRDDS11.UINT16[H]
#define FLXA0FRRDDS11HL FLXA0.FRRDDS11.UINT8[HL]
#define FLXA0FRRDDS11HH FLXA0.FRRDDS11.UINT8[HH]
#define FLXA0FRRDDS12 FLXA0.FRRDDS12.UINT32
#define FLXA0FRRDDS12L FLXA0.FRRDDS12.UINT16[L]
#define FLXA0FRRDDS12LL FLXA0.FRRDDS12.UINT8[LL]
#define FLXA0FRRDDS12LH FLXA0.FRRDDS12.UINT8[LH]
#define FLXA0FRRDDS12H FLXA0.FRRDDS12.UINT16[H]
#define FLXA0FRRDDS12HL FLXA0.FRRDDS12.UINT8[HL]
#define FLXA0FRRDDS12HH FLXA0.FRRDDS12.UINT8[HH]
#define FLXA0FRRDDS13 FLXA0.FRRDDS13.UINT32
#define FLXA0FRRDDS13L FLXA0.FRRDDS13.UINT16[L]
#define FLXA0FRRDDS13LL FLXA0.FRRDDS13.UINT8[LL]
#define FLXA0FRRDDS13LH FLXA0.FRRDDS13.UINT8[LH]
#define FLXA0FRRDDS13H FLXA0.FRRDDS13.UINT16[H]
#define FLXA0FRRDDS13HL FLXA0.FRRDDS13.UINT8[HL]
#define FLXA0FRRDDS13HH FLXA0.FRRDDS13.UINT8[HH]
#define FLXA0FRRDDS14 FLXA0.FRRDDS14.UINT32
#define FLXA0FRRDDS14L FLXA0.FRRDDS14.UINT16[L]
#define FLXA0FRRDDS14LL FLXA0.FRRDDS14.UINT8[LL]
#define FLXA0FRRDDS14LH FLXA0.FRRDDS14.UINT8[LH]
#define FLXA0FRRDDS14H FLXA0.FRRDDS14.UINT16[H]
#define FLXA0FRRDDS14HL FLXA0.FRRDDS14.UINT8[HL]
#define FLXA0FRRDDS14HH FLXA0.FRRDDS14.UINT8[HH]
#define FLXA0FRRDDS15 FLXA0.FRRDDS15.UINT32
#define FLXA0FRRDDS15L FLXA0.FRRDDS15.UINT16[L]
#define FLXA0FRRDDS15LL FLXA0.FRRDDS15.UINT8[LL]
#define FLXA0FRRDDS15LH FLXA0.FRRDDS15.UINT8[LH]
#define FLXA0FRRDDS15H FLXA0.FRRDDS15.UINT16[H]
#define FLXA0FRRDDS15HL FLXA0.FRRDDS15.UINT8[HL]
#define FLXA0FRRDDS15HH FLXA0.FRRDDS15.UINT8[HH]
#define FLXA0FRRDDS16 FLXA0.FRRDDS16.UINT32
#define FLXA0FRRDDS16L FLXA0.FRRDDS16.UINT16[L]
#define FLXA0FRRDDS16LL FLXA0.FRRDDS16.UINT8[LL]
#define FLXA0FRRDDS16LH FLXA0.FRRDDS16.UINT8[LH]
#define FLXA0FRRDDS16H FLXA0.FRRDDS16.UINT16[H]
#define FLXA0FRRDDS16HL FLXA0.FRRDDS16.UINT8[HL]
#define FLXA0FRRDDS16HH FLXA0.FRRDDS16.UINT8[HH]
#define FLXA0FRRDDS17 FLXA0.FRRDDS17.UINT32
#define FLXA0FRRDDS17L FLXA0.FRRDDS17.UINT16[L]
#define FLXA0FRRDDS17LL FLXA0.FRRDDS17.UINT8[LL]
#define FLXA0FRRDDS17LH FLXA0.FRRDDS17.UINT8[LH]
#define FLXA0FRRDDS17H FLXA0.FRRDDS17.UINT16[H]
#define FLXA0FRRDDS17HL FLXA0.FRRDDS17.UINT8[HL]
#define FLXA0FRRDDS17HH FLXA0.FRRDDS17.UINT8[HH]
#define FLXA0FRRDDS18 FLXA0.FRRDDS18.UINT32
#define FLXA0FRRDDS18L FLXA0.FRRDDS18.UINT16[L]
#define FLXA0FRRDDS18LL FLXA0.FRRDDS18.UINT8[LL]
#define FLXA0FRRDDS18LH FLXA0.FRRDDS18.UINT8[LH]
#define FLXA0FRRDDS18H FLXA0.FRRDDS18.UINT16[H]
#define FLXA0FRRDDS18HL FLXA0.FRRDDS18.UINT8[HL]
#define FLXA0FRRDDS18HH FLXA0.FRRDDS18.UINT8[HH]
#define FLXA0FRRDDS19 FLXA0.FRRDDS19.UINT32
#define FLXA0FRRDDS19L FLXA0.FRRDDS19.UINT16[L]
#define FLXA0FRRDDS19LL FLXA0.FRRDDS19.UINT8[LL]
#define FLXA0FRRDDS19LH FLXA0.FRRDDS19.UINT8[LH]
#define FLXA0FRRDDS19H FLXA0.FRRDDS19.UINT16[H]
#define FLXA0FRRDDS19HL FLXA0.FRRDDS19.UINT8[HL]
#define FLXA0FRRDDS19HH FLXA0.FRRDDS19.UINT8[HH]
#define FLXA0FRRDDS20 FLXA0.FRRDDS20.UINT32
#define FLXA0FRRDDS20L FLXA0.FRRDDS20.UINT16[L]
#define FLXA0FRRDDS20LL FLXA0.FRRDDS20.UINT8[LL]
#define FLXA0FRRDDS20LH FLXA0.FRRDDS20.UINT8[LH]
#define FLXA0FRRDDS20H FLXA0.FRRDDS20.UINT16[H]
#define FLXA0FRRDDS20HL FLXA0.FRRDDS20.UINT8[HL]
#define FLXA0FRRDDS20HH FLXA0.FRRDDS20.UINT8[HH]
#define FLXA0FRRDDS21 FLXA0.FRRDDS21.UINT32
#define FLXA0FRRDDS21L FLXA0.FRRDDS21.UINT16[L]
#define FLXA0FRRDDS21LL FLXA0.FRRDDS21.UINT8[LL]
#define FLXA0FRRDDS21LH FLXA0.FRRDDS21.UINT8[LH]
#define FLXA0FRRDDS21H FLXA0.FRRDDS21.UINT16[H]
#define FLXA0FRRDDS21HL FLXA0.FRRDDS21.UINT8[HL]
#define FLXA0FRRDDS21HH FLXA0.FRRDDS21.UINT8[HH]
#define FLXA0FRRDDS22 FLXA0.FRRDDS22.UINT32
#define FLXA0FRRDDS22L FLXA0.FRRDDS22.UINT16[L]
#define FLXA0FRRDDS22LL FLXA0.FRRDDS22.UINT8[LL]
#define FLXA0FRRDDS22LH FLXA0.FRRDDS22.UINT8[LH]
#define FLXA0FRRDDS22H FLXA0.FRRDDS22.UINT16[H]
#define FLXA0FRRDDS22HL FLXA0.FRRDDS22.UINT8[HL]
#define FLXA0FRRDDS22HH FLXA0.FRRDDS22.UINT8[HH]
#define FLXA0FRRDDS23 FLXA0.FRRDDS23.UINT32
#define FLXA0FRRDDS23L FLXA0.FRRDDS23.UINT16[L]
#define FLXA0FRRDDS23LL FLXA0.FRRDDS23.UINT8[LL]
#define FLXA0FRRDDS23LH FLXA0.FRRDDS23.UINT8[LH]
#define FLXA0FRRDDS23H FLXA0.FRRDDS23.UINT16[H]
#define FLXA0FRRDDS23HL FLXA0.FRRDDS23.UINT8[HL]
#define FLXA0FRRDDS23HH FLXA0.FRRDDS23.UINT8[HH]
#define FLXA0FRRDDS24 FLXA0.FRRDDS24.UINT32
#define FLXA0FRRDDS24L FLXA0.FRRDDS24.UINT16[L]
#define FLXA0FRRDDS24LL FLXA0.FRRDDS24.UINT8[LL]
#define FLXA0FRRDDS24LH FLXA0.FRRDDS24.UINT8[LH]
#define FLXA0FRRDDS24H FLXA0.FRRDDS24.UINT16[H]
#define FLXA0FRRDDS24HL FLXA0.FRRDDS24.UINT8[HL]
#define FLXA0FRRDDS24HH FLXA0.FRRDDS24.UINT8[HH]
#define FLXA0FRRDDS25 FLXA0.FRRDDS25.UINT32
#define FLXA0FRRDDS25L FLXA0.FRRDDS25.UINT16[L]
#define FLXA0FRRDDS25LL FLXA0.FRRDDS25.UINT8[LL]
#define FLXA0FRRDDS25LH FLXA0.FRRDDS25.UINT8[LH]
#define FLXA0FRRDDS25H FLXA0.FRRDDS25.UINT16[H]
#define FLXA0FRRDDS25HL FLXA0.FRRDDS25.UINT8[HL]
#define FLXA0FRRDDS25HH FLXA0.FRRDDS25.UINT8[HH]
#define FLXA0FRRDDS26 FLXA0.FRRDDS26.UINT32
#define FLXA0FRRDDS26L FLXA0.FRRDDS26.UINT16[L]
#define FLXA0FRRDDS26LL FLXA0.FRRDDS26.UINT8[LL]
#define FLXA0FRRDDS26LH FLXA0.FRRDDS26.UINT8[LH]
#define FLXA0FRRDDS26H FLXA0.FRRDDS26.UINT16[H]
#define FLXA0FRRDDS26HL FLXA0.FRRDDS26.UINT8[HL]
#define FLXA0FRRDDS26HH FLXA0.FRRDDS26.UINT8[HH]
#define FLXA0FRRDDS27 FLXA0.FRRDDS27.UINT32
#define FLXA0FRRDDS27L FLXA0.FRRDDS27.UINT16[L]
#define FLXA0FRRDDS27LL FLXA0.FRRDDS27.UINT8[LL]
#define FLXA0FRRDDS27LH FLXA0.FRRDDS27.UINT8[LH]
#define FLXA0FRRDDS27H FLXA0.FRRDDS27.UINT16[H]
#define FLXA0FRRDDS27HL FLXA0.FRRDDS27.UINT8[HL]
#define FLXA0FRRDDS27HH FLXA0.FRRDDS27.UINT8[HH]
#define FLXA0FRRDDS28 FLXA0.FRRDDS28.UINT32
#define FLXA0FRRDDS28L FLXA0.FRRDDS28.UINT16[L]
#define FLXA0FRRDDS28LL FLXA0.FRRDDS28.UINT8[LL]
#define FLXA0FRRDDS28LH FLXA0.FRRDDS28.UINT8[LH]
#define FLXA0FRRDDS28H FLXA0.FRRDDS28.UINT16[H]
#define FLXA0FRRDDS28HL FLXA0.FRRDDS28.UINT8[HL]
#define FLXA0FRRDDS28HH FLXA0.FRRDDS28.UINT8[HH]
#define FLXA0FRRDDS29 FLXA0.FRRDDS29.UINT32
#define FLXA0FRRDDS29L FLXA0.FRRDDS29.UINT16[L]
#define FLXA0FRRDDS29LL FLXA0.FRRDDS29.UINT8[LL]
#define FLXA0FRRDDS29LH FLXA0.FRRDDS29.UINT8[LH]
#define FLXA0FRRDDS29H FLXA0.FRRDDS29.UINT16[H]
#define FLXA0FRRDDS29HL FLXA0.FRRDDS29.UINT8[HL]
#define FLXA0FRRDDS29HH FLXA0.FRRDDS29.UINT8[HH]
#define FLXA0FRRDDS30 FLXA0.FRRDDS30.UINT32
#define FLXA0FRRDDS30L FLXA0.FRRDDS30.UINT16[L]
#define FLXA0FRRDDS30LL FLXA0.FRRDDS30.UINT8[LL]
#define FLXA0FRRDDS30LH FLXA0.FRRDDS30.UINT8[LH]
#define FLXA0FRRDDS30H FLXA0.FRRDDS30.UINT16[H]
#define FLXA0FRRDDS30HL FLXA0.FRRDDS30.UINT8[HL]
#define FLXA0FRRDDS30HH FLXA0.FRRDDS30.UINT8[HH]
#define FLXA0FRRDDS31 FLXA0.FRRDDS31.UINT32
#define FLXA0FRRDDS31L FLXA0.FRRDDS31.UINT16[L]
#define FLXA0FRRDDS31LL FLXA0.FRRDDS31.UINT8[LL]
#define FLXA0FRRDDS31LH FLXA0.FRRDDS31.UINT8[LH]
#define FLXA0FRRDDS31H FLXA0.FRRDDS31.UINT16[H]
#define FLXA0FRRDDS31HL FLXA0.FRRDDS31.UINT8[HL]
#define FLXA0FRRDDS31HH FLXA0.FRRDDS31.UINT8[HH]
#define FLXA0FRRDDS32 FLXA0.FRRDDS32.UINT32
#define FLXA0FRRDDS32L FLXA0.FRRDDS32.UINT16[L]
#define FLXA0FRRDDS32LL FLXA0.FRRDDS32.UINT8[LL]
#define FLXA0FRRDDS32LH FLXA0.FRRDDS32.UINT8[LH]
#define FLXA0FRRDDS32H FLXA0.FRRDDS32.UINT16[H]
#define FLXA0FRRDDS32HL FLXA0.FRRDDS32.UINT8[HL]
#define FLXA0FRRDDS32HH FLXA0.FRRDDS32.UINT8[HH]
#define FLXA0FRRDDS33 FLXA0.FRRDDS33.UINT32
#define FLXA0FRRDDS33L FLXA0.FRRDDS33.UINT16[L]
#define FLXA0FRRDDS33LL FLXA0.FRRDDS33.UINT8[LL]
#define FLXA0FRRDDS33LH FLXA0.FRRDDS33.UINT8[LH]
#define FLXA0FRRDDS33H FLXA0.FRRDDS33.UINT16[H]
#define FLXA0FRRDDS33HL FLXA0.FRRDDS33.UINT8[HL]
#define FLXA0FRRDDS33HH FLXA0.FRRDDS33.UINT8[HH]
#define FLXA0FRRDDS34 FLXA0.FRRDDS34.UINT32
#define FLXA0FRRDDS34L FLXA0.FRRDDS34.UINT16[L]
#define FLXA0FRRDDS34LL FLXA0.FRRDDS34.UINT8[LL]
#define FLXA0FRRDDS34LH FLXA0.FRRDDS34.UINT8[LH]
#define FLXA0FRRDDS34H FLXA0.FRRDDS34.UINT16[H]
#define FLXA0FRRDDS34HL FLXA0.FRRDDS34.UINT8[HL]
#define FLXA0FRRDDS34HH FLXA0.FRRDDS34.UINT8[HH]
#define FLXA0FRRDDS35 FLXA0.FRRDDS35.UINT32
#define FLXA0FRRDDS35L FLXA0.FRRDDS35.UINT16[L]
#define FLXA0FRRDDS35LL FLXA0.FRRDDS35.UINT8[LL]
#define FLXA0FRRDDS35LH FLXA0.FRRDDS35.UINT8[LH]
#define FLXA0FRRDDS35H FLXA0.FRRDDS35.UINT16[H]
#define FLXA0FRRDDS35HL FLXA0.FRRDDS35.UINT8[HL]
#define FLXA0FRRDDS35HH FLXA0.FRRDDS35.UINT8[HH]
#define FLXA0FRRDDS36 FLXA0.FRRDDS36.UINT32
#define FLXA0FRRDDS36L FLXA0.FRRDDS36.UINT16[L]
#define FLXA0FRRDDS36LL FLXA0.FRRDDS36.UINT8[LL]
#define FLXA0FRRDDS36LH FLXA0.FRRDDS36.UINT8[LH]
#define FLXA0FRRDDS36H FLXA0.FRRDDS36.UINT16[H]
#define FLXA0FRRDDS36HL FLXA0.FRRDDS36.UINT8[HL]
#define FLXA0FRRDDS36HH FLXA0.FRRDDS36.UINT8[HH]
#define FLXA0FRRDDS37 FLXA0.FRRDDS37.UINT32
#define FLXA0FRRDDS37L FLXA0.FRRDDS37.UINT16[L]
#define FLXA0FRRDDS37LL FLXA0.FRRDDS37.UINT8[LL]
#define FLXA0FRRDDS37LH FLXA0.FRRDDS37.UINT8[LH]
#define FLXA0FRRDDS37H FLXA0.FRRDDS37.UINT16[H]
#define FLXA0FRRDDS37HL FLXA0.FRRDDS37.UINT8[HL]
#define FLXA0FRRDDS37HH FLXA0.FRRDDS37.UINT8[HH]
#define FLXA0FRRDDS38 FLXA0.FRRDDS38.UINT32
#define FLXA0FRRDDS38L FLXA0.FRRDDS38.UINT16[L]
#define FLXA0FRRDDS38LL FLXA0.FRRDDS38.UINT8[LL]
#define FLXA0FRRDDS38LH FLXA0.FRRDDS38.UINT8[LH]
#define FLXA0FRRDDS38H FLXA0.FRRDDS38.UINT16[H]
#define FLXA0FRRDDS38HL FLXA0.FRRDDS38.UINT8[HL]
#define FLXA0FRRDDS38HH FLXA0.FRRDDS38.UINT8[HH]
#define FLXA0FRRDDS39 FLXA0.FRRDDS39.UINT32
#define FLXA0FRRDDS39L FLXA0.FRRDDS39.UINT16[L]
#define FLXA0FRRDDS39LL FLXA0.FRRDDS39.UINT8[LL]
#define FLXA0FRRDDS39LH FLXA0.FRRDDS39.UINT8[LH]
#define FLXA0FRRDDS39H FLXA0.FRRDDS39.UINT16[H]
#define FLXA0FRRDDS39HL FLXA0.FRRDDS39.UINT8[HL]
#define FLXA0FRRDDS39HH FLXA0.FRRDDS39.UINT8[HH]
#define FLXA0FRRDDS40 FLXA0.FRRDDS40.UINT32
#define FLXA0FRRDDS40L FLXA0.FRRDDS40.UINT16[L]
#define FLXA0FRRDDS40LL FLXA0.FRRDDS40.UINT8[LL]
#define FLXA0FRRDDS40LH FLXA0.FRRDDS40.UINT8[LH]
#define FLXA0FRRDDS40H FLXA0.FRRDDS40.UINT16[H]
#define FLXA0FRRDDS40HL FLXA0.FRRDDS40.UINT8[HL]
#define FLXA0FRRDDS40HH FLXA0.FRRDDS40.UINT8[HH]
#define FLXA0FRRDDS41 FLXA0.FRRDDS41.UINT32
#define FLXA0FRRDDS41L FLXA0.FRRDDS41.UINT16[L]
#define FLXA0FRRDDS41LL FLXA0.FRRDDS41.UINT8[LL]
#define FLXA0FRRDDS41LH FLXA0.FRRDDS41.UINT8[LH]
#define FLXA0FRRDDS41H FLXA0.FRRDDS41.UINT16[H]
#define FLXA0FRRDDS41HL FLXA0.FRRDDS41.UINT8[HL]
#define FLXA0FRRDDS41HH FLXA0.FRRDDS41.UINT8[HH]
#define FLXA0FRRDDS42 FLXA0.FRRDDS42.UINT32
#define FLXA0FRRDDS42L FLXA0.FRRDDS42.UINT16[L]
#define FLXA0FRRDDS42LL FLXA0.FRRDDS42.UINT8[LL]
#define FLXA0FRRDDS42LH FLXA0.FRRDDS42.UINT8[LH]
#define FLXA0FRRDDS42H FLXA0.FRRDDS42.UINT16[H]
#define FLXA0FRRDDS42HL FLXA0.FRRDDS42.UINT8[HL]
#define FLXA0FRRDDS42HH FLXA0.FRRDDS42.UINT8[HH]
#define FLXA0FRRDDS43 FLXA0.FRRDDS43.UINT32
#define FLXA0FRRDDS43L FLXA0.FRRDDS43.UINT16[L]
#define FLXA0FRRDDS43LL FLXA0.FRRDDS43.UINT8[LL]
#define FLXA0FRRDDS43LH FLXA0.FRRDDS43.UINT8[LH]
#define FLXA0FRRDDS43H FLXA0.FRRDDS43.UINT16[H]
#define FLXA0FRRDDS43HL FLXA0.FRRDDS43.UINT8[HL]
#define FLXA0FRRDDS43HH FLXA0.FRRDDS43.UINT8[HH]
#define FLXA0FRRDDS44 FLXA0.FRRDDS44.UINT32
#define FLXA0FRRDDS44L FLXA0.FRRDDS44.UINT16[L]
#define FLXA0FRRDDS44LL FLXA0.FRRDDS44.UINT8[LL]
#define FLXA0FRRDDS44LH FLXA0.FRRDDS44.UINT8[LH]
#define FLXA0FRRDDS44H FLXA0.FRRDDS44.UINT16[H]
#define FLXA0FRRDDS44HL FLXA0.FRRDDS44.UINT8[HL]
#define FLXA0FRRDDS44HH FLXA0.FRRDDS44.UINT8[HH]
#define FLXA0FRRDDS45 FLXA0.FRRDDS45.UINT32
#define FLXA0FRRDDS45L FLXA0.FRRDDS45.UINT16[L]
#define FLXA0FRRDDS45LL FLXA0.FRRDDS45.UINT8[LL]
#define FLXA0FRRDDS45LH FLXA0.FRRDDS45.UINT8[LH]
#define FLXA0FRRDDS45H FLXA0.FRRDDS45.UINT16[H]
#define FLXA0FRRDDS45HL FLXA0.FRRDDS45.UINT8[HL]
#define FLXA0FRRDDS45HH FLXA0.FRRDDS45.UINT8[HH]
#define FLXA0FRRDDS46 FLXA0.FRRDDS46.UINT32
#define FLXA0FRRDDS46L FLXA0.FRRDDS46.UINT16[L]
#define FLXA0FRRDDS46LL FLXA0.FRRDDS46.UINT8[LL]
#define FLXA0FRRDDS46LH FLXA0.FRRDDS46.UINT8[LH]
#define FLXA0FRRDDS46H FLXA0.FRRDDS46.UINT16[H]
#define FLXA0FRRDDS46HL FLXA0.FRRDDS46.UINT8[HL]
#define FLXA0FRRDDS46HH FLXA0.FRRDDS46.UINT8[HH]
#define FLXA0FRRDDS47 FLXA0.FRRDDS47.UINT32
#define FLXA0FRRDDS47L FLXA0.FRRDDS47.UINT16[L]
#define FLXA0FRRDDS47LL FLXA0.FRRDDS47.UINT8[LL]
#define FLXA0FRRDDS47LH FLXA0.FRRDDS47.UINT8[LH]
#define FLXA0FRRDDS47H FLXA0.FRRDDS47.UINT16[H]
#define FLXA0FRRDDS47HL FLXA0.FRRDDS47.UINT8[HL]
#define FLXA0FRRDDS47HH FLXA0.FRRDDS47.UINT8[HH]
#define FLXA0FRRDDS48 FLXA0.FRRDDS48.UINT32
#define FLXA0FRRDDS48L FLXA0.FRRDDS48.UINT16[L]
#define FLXA0FRRDDS48LL FLXA0.FRRDDS48.UINT8[LL]
#define FLXA0FRRDDS48LH FLXA0.FRRDDS48.UINT8[LH]
#define FLXA0FRRDDS48H FLXA0.FRRDDS48.UINT16[H]
#define FLXA0FRRDDS48HL FLXA0.FRRDDS48.UINT8[HL]
#define FLXA0FRRDDS48HH FLXA0.FRRDDS48.UINT8[HH]
#define FLXA0FRRDDS49 FLXA0.FRRDDS49.UINT32
#define FLXA0FRRDDS49L FLXA0.FRRDDS49.UINT16[L]
#define FLXA0FRRDDS49LL FLXA0.FRRDDS49.UINT8[LL]
#define FLXA0FRRDDS49LH FLXA0.FRRDDS49.UINT8[LH]
#define FLXA0FRRDDS49H FLXA0.FRRDDS49.UINT16[H]
#define FLXA0FRRDDS49HL FLXA0.FRRDDS49.UINT8[HL]
#define FLXA0FRRDDS49HH FLXA0.FRRDDS49.UINT8[HH]
#define FLXA0FRRDDS50 FLXA0.FRRDDS50.UINT32
#define FLXA0FRRDDS50L FLXA0.FRRDDS50.UINT16[L]
#define FLXA0FRRDDS50LL FLXA0.FRRDDS50.UINT8[LL]
#define FLXA0FRRDDS50LH FLXA0.FRRDDS50.UINT8[LH]
#define FLXA0FRRDDS50H FLXA0.FRRDDS50.UINT16[H]
#define FLXA0FRRDDS50HL FLXA0.FRRDDS50.UINT8[HL]
#define FLXA0FRRDDS50HH FLXA0.FRRDDS50.UINT8[HH]
#define FLXA0FRRDDS51 FLXA0.FRRDDS51.UINT32
#define FLXA0FRRDDS51L FLXA0.FRRDDS51.UINT16[L]
#define FLXA0FRRDDS51LL FLXA0.FRRDDS51.UINT8[LL]
#define FLXA0FRRDDS51LH FLXA0.FRRDDS51.UINT8[LH]
#define FLXA0FRRDDS51H FLXA0.FRRDDS51.UINT16[H]
#define FLXA0FRRDDS51HL FLXA0.FRRDDS51.UINT8[HL]
#define FLXA0FRRDDS51HH FLXA0.FRRDDS51.UINT8[HH]
#define FLXA0FRRDDS52 FLXA0.FRRDDS52.UINT32
#define FLXA0FRRDDS52L FLXA0.FRRDDS52.UINT16[L]
#define FLXA0FRRDDS52LL FLXA0.FRRDDS52.UINT8[LL]
#define FLXA0FRRDDS52LH FLXA0.FRRDDS52.UINT8[LH]
#define FLXA0FRRDDS52H FLXA0.FRRDDS52.UINT16[H]
#define FLXA0FRRDDS52HL FLXA0.FRRDDS52.UINT8[HL]
#define FLXA0FRRDDS52HH FLXA0.FRRDDS52.UINT8[HH]
#define FLXA0FRRDDS53 FLXA0.FRRDDS53.UINT32
#define FLXA0FRRDDS53L FLXA0.FRRDDS53.UINT16[L]
#define FLXA0FRRDDS53LL FLXA0.FRRDDS53.UINT8[LL]
#define FLXA0FRRDDS53LH FLXA0.FRRDDS53.UINT8[LH]
#define FLXA0FRRDDS53H FLXA0.FRRDDS53.UINT16[H]
#define FLXA0FRRDDS53HL FLXA0.FRRDDS53.UINT8[HL]
#define FLXA0FRRDDS53HH FLXA0.FRRDDS53.UINT8[HH]
#define FLXA0FRRDDS54 FLXA0.FRRDDS54.UINT32
#define FLXA0FRRDDS54L FLXA0.FRRDDS54.UINT16[L]
#define FLXA0FRRDDS54LL FLXA0.FRRDDS54.UINT8[LL]
#define FLXA0FRRDDS54LH FLXA0.FRRDDS54.UINT8[LH]
#define FLXA0FRRDDS54H FLXA0.FRRDDS54.UINT16[H]
#define FLXA0FRRDDS54HL FLXA0.FRRDDS54.UINT8[HL]
#define FLXA0FRRDDS54HH FLXA0.FRRDDS54.UINT8[HH]
#define FLXA0FRRDDS55 FLXA0.FRRDDS55.UINT32
#define FLXA0FRRDDS55L FLXA0.FRRDDS55.UINT16[L]
#define FLXA0FRRDDS55LL FLXA0.FRRDDS55.UINT8[LL]
#define FLXA0FRRDDS55LH FLXA0.FRRDDS55.UINT8[LH]
#define FLXA0FRRDDS55H FLXA0.FRRDDS55.UINT16[H]
#define FLXA0FRRDDS55HL FLXA0.FRRDDS55.UINT8[HL]
#define FLXA0FRRDDS55HH FLXA0.FRRDDS55.UINT8[HH]
#define FLXA0FRRDDS56 FLXA0.FRRDDS56.UINT32
#define FLXA0FRRDDS56L FLXA0.FRRDDS56.UINT16[L]
#define FLXA0FRRDDS56LL FLXA0.FRRDDS56.UINT8[LL]
#define FLXA0FRRDDS56LH FLXA0.FRRDDS56.UINT8[LH]
#define FLXA0FRRDDS56H FLXA0.FRRDDS56.UINT16[H]
#define FLXA0FRRDDS56HL FLXA0.FRRDDS56.UINT8[HL]
#define FLXA0FRRDDS56HH FLXA0.FRRDDS56.UINT8[HH]
#define FLXA0FRRDDS57 FLXA0.FRRDDS57.UINT32
#define FLXA0FRRDDS57L FLXA0.FRRDDS57.UINT16[L]
#define FLXA0FRRDDS57LL FLXA0.FRRDDS57.UINT8[LL]
#define FLXA0FRRDDS57LH FLXA0.FRRDDS57.UINT8[LH]
#define FLXA0FRRDDS57H FLXA0.FRRDDS57.UINT16[H]
#define FLXA0FRRDDS57HL FLXA0.FRRDDS57.UINT8[HL]
#define FLXA0FRRDDS57HH FLXA0.FRRDDS57.UINT8[HH]
#define FLXA0FRRDDS58 FLXA0.FRRDDS58.UINT32
#define FLXA0FRRDDS58L FLXA0.FRRDDS58.UINT16[L]
#define FLXA0FRRDDS58LL FLXA0.FRRDDS58.UINT8[LL]
#define FLXA0FRRDDS58LH FLXA0.FRRDDS58.UINT8[LH]
#define FLXA0FRRDDS58H FLXA0.FRRDDS58.UINT16[H]
#define FLXA0FRRDDS58HL FLXA0.FRRDDS58.UINT8[HL]
#define FLXA0FRRDDS58HH FLXA0.FRRDDS58.UINT8[HH]
#define FLXA0FRRDDS59 FLXA0.FRRDDS59.UINT32
#define FLXA0FRRDDS59L FLXA0.FRRDDS59.UINT16[L]
#define FLXA0FRRDDS59LL FLXA0.FRRDDS59.UINT8[LL]
#define FLXA0FRRDDS59LH FLXA0.FRRDDS59.UINT8[LH]
#define FLXA0FRRDDS59H FLXA0.FRRDDS59.UINT16[H]
#define FLXA0FRRDDS59HL FLXA0.FRRDDS59.UINT8[HL]
#define FLXA0FRRDDS59HH FLXA0.FRRDDS59.UINT8[HH]
#define FLXA0FRRDDS60 FLXA0.FRRDDS60.UINT32
#define FLXA0FRRDDS60L FLXA0.FRRDDS60.UINT16[L]
#define FLXA0FRRDDS60LL FLXA0.FRRDDS60.UINT8[LL]
#define FLXA0FRRDDS60LH FLXA0.FRRDDS60.UINT8[LH]
#define FLXA0FRRDDS60H FLXA0.FRRDDS60.UINT16[H]
#define FLXA0FRRDDS60HL FLXA0.FRRDDS60.UINT8[HL]
#define FLXA0FRRDDS60HH FLXA0.FRRDDS60.UINT8[HH]
#define FLXA0FRRDDS61 FLXA0.FRRDDS61.UINT32
#define FLXA0FRRDDS61L FLXA0.FRRDDS61.UINT16[L]
#define FLXA0FRRDDS61LL FLXA0.FRRDDS61.UINT8[LL]
#define FLXA0FRRDDS61LH FLXA0.FRRDDS61.UINT8[LH]
#define FLXA0FRRDDS61H FLXA0.FRRDDS61.UINT16[H]
#define FLXA0FRRDDS61HL FLXA0.FRRDDS61.UINT8[HL]
#define FLXA0FRRDDS61HH FLXA0.FRRDDS61.UINT8[HH]
#define FLXA0FRRDDS62 FLXA0.FRRDDS62.UINT32
#define FLXA0FRRDDS62L FLXA0.FRRDDS62.UINT16[L]
#define FLXA0FRRDDS62LL FLXA0.FRRDDS62.UINT8[LL]
#define FLXA0FRRDDS62LH FLXA0.FRRDDS62.UINT8[LH]
#define FLXA0FRRDDS62H FLXA0.FRRDDS62.UINT16[H]
#define FLXA0FRRDDS62HL FLXA0.FRRDDS62.UINT8[HL]
#define FLXA0FRRDDS62HH FLXA0.FRRDDS62.UINT8[HH]
#define FLXA0FRRDDS63 FLXA0.FRRDDS63.UINT32
#define FLXA0FRRDDS63L FLXA0.FRRDDS63.UINT16[L]
#define FLXA0FRRDDS63LL FLXA0.FRRDDS63.UINT8[LL]
#define FLXA0FRRDDS63LH FLXA0.FRRDDS63.UINT8[LH]
#define FLXA0FRRDDS63H FLXA0.FRRDDS63.UINT16[H]
#define FLXA0FRRDDS63HL FLXA0.FRRDDS63.UINT8[HL]
#define FLXA0FRRDDS63HH FLXA0.FRRDDS63.UINT8[HH]
#define FLXA0FRRDDS64 FLXA0.FRRDDS64.UINT32
#define FLXA0FRRDDS64L FLXA0.FRRDDS64.UINT16[L]
#define FLXA0FRRDDS64LL FLXA0.FRRDDS64.UINT8[LL]
#define FLXA0FRRDDS64LH FLXA0.FRRDDS64.UINT8[LH]
#define FLXA0FRRDDS64H FLXA0.FRRDDS64.UINT16[H]
#define FLXA0FRRDDS64HL FLXA0.FRRDDS64.UINT8[HL]
#define FLXA0FRRDDS64HH FLXA0.FRRDDS64.UINT8[HH]
#define FLXA0FRRDHS1 FLXA0.FRRDHS1.UINT32
#define FLXA0FRRDHS1L FLXA0.FRRDHS1.UINT16[L]
#define FLXA0FRRDHS1LL FLXA0.FRRDHS1.UINT8[LL]
#define FLXA0FRRDHS1LH FLXA0.FRRDHS1.UINT8[LH]
#define FLXA0FRRDHS1H FLXA0.FRRDHS1.UINT16[H]
#define FLXA0FRRDHS1HL FLXA0.FRRDHS1.UINT8[HL]
#define FLXA0FRRDHS1HH FLXA0.FRRDHS1.UINT8[HH]
#define FLXA0FRRDHS2 FLXA0.FRRDHS2.UINT32
#define FLXA0FRRDHS2L FLXA0.FRRDHS2.UINT16[L]
#define FLXA0FRRDHS2LL FLXA0.FRRDHS2.UINT8[LL]
#define FLXA0FRRDHS2LH FLXA0.FRRDHS2.UINT8[LH]
#define FLXA0FRRDHS2H FLXA0.FRRDHS2.UINT16[H]
#define FLXA0FRRDHS2HL FLXA0.FRRDHS2.UINT8[HL]
#define FLXA0FRRDHS2HH FLXA0.FRRDHS2.UINT8[HH]
#define FLXA0FRRDHS3 FLXA0.FRRDHS3.UINT32
#define FLXA0FRRDHS3L FLXA0.FRRDHS3.UINT16[L]
#define FLXA0FRRDHS3LL FLXA0.FRRDHS3.UINT8[LL]
#define FLXA0FRRDHS3LH FLXA0.FRRDHS3.UINT8[LH]
#define FLXA0FRRDHS3H FLXA0.FRRDHS3.UINT16[H]
#define FLXA0FRRDHS3HL FLXA0.FRRDHS3.UINT8[HL]
#define FLXA0FRRDHS3HH FLXA0.FRRDHS3.UINT8[HH]
#define FLXA0FRMBS FLXA0.FRMBS.UINT32
#define FLXA0FRMBSL FLXA0.FRMBS.UINT16[L]
#define FLXA0FRMBSLL FLXA0.FRMBS.UINT8[LL]
#define FLXA0FRMBSLH FLXA0.FRMBS.UINT8[LH]
#define FLXA0FRMBSH FLXA0.FRMBS.UINT16[H]
#define FLXA0FRMBSHL FLXA0.FRMBS.UINT8[HL]
#define FLXA0FRMBSHH FLXA0.FRMBS.UINT8[HH]
#define FLXA0FROBCM FLXA0.FROBCM.UINT32
#define FLXA0FROBCML FLXA0.FROBCM.UINT16[L]
#define FLXA0FROBCMLL FLXA0.FROBCM.UINT8[LL]
#define FLXA0FROBCMH FLXA0.FROBCM.UINT16[H]
#define FLXA0FROBCMHL FLXA0.FROBCM.UINT8[HL]
#define FLXA0FROBCR FLXA0.FROBCR.UINT32
#define FLXA0FROBCRL FLXA0.FROBCR.UINT16[L]
#define FLXA0FROBCRLL FLXA0.FROBCR.UINT8[LL]
#define FLXA0FROBCRLH FLXA0.FROBCR.UINT8[LH]
#define FLXA0FROBCRH FLXA0.FROBCR.UINT16[H]
#define FLXA0FROBCRHL FLXA0.FROBCR.UINT8[HL]
#define FLXA0FRITC FLXA0.FRITC.UINT32
#define FLXA0FRITCL FLXA0.FRITC.UINT16[L]
#define FLXA0FRITCLL FLXA0.FRITC.UINT8[LL]
#define FLXA0FRITCLH FLXA0.FRITC.UINT8[LH]
#define FLXA0FRITCH FLXA0.FRITC.UINT16[H]
#define FLXA0FRITCHL FLXA0.FRITC.UINT8[HL]
#define FLXA0FROTC FLXA0.FROTC.UINT32
#define FLXA0FROTCL FLXA0.FROTC.UINT16[L]
#define FLXA0FROTCLL FLXA0.FROTC.UINT8[LL]
#define FLXA0FROTCLH FLXA0.FROTC.UINT8[LH]
#define FLXA0FROTCH FLXA0.FROTC.UINT16[H]
#define FLXA0FROTCHL FLXA0.FROTC.UINT8[HL]
#define FLXA0FRIBA FLXA0.FRIBA.UINT32
#define FLXA0FRIBAL FLXA0.FRIBA.UINT16[L]
#define FLXA0FRIBALL FLXA0.FRIBA.UINT8[LL]
#define FLXA0FRIBALH FLXA0.FRIBA.UINT8[LH]
#define FLXA0FRIBAH FLXA0.FRIBA.UINT16[H]
#define FLXA0FRIBAHL FLXA0.FRIBA.UINT8[HL]
#define FLXA0FRIBAHH FLXA0.FRIBA.UINT8[HH]
#define FLXA0FRFBA FLXA0.FRFBA.UINT32
#define FLXA0FRFBAL FLXA0.FRFBA.UINT16[L]
#define FLXA0FRFBALL FLXA0.FRFBA.UINT8[LL]
#define FLXA0FRFBALH FLXA0.FRFBA.UINT8[LH]
#define FLXA0FRFBAH FLXA0.FRFBA.UINT16[H]
#define FLXA0FRFBAHL FLXA0.FRFBA.UINT8[HL]
#define FLXA0FRFBAHH FLXA0.FRFBA.UINT8[HH]
#define FLXA0FROBA FLXA0.FROBA.UINT32
#define FLXA0FROBAL FLXA0.FROBA.UINT16[L]
#define FLXA0FROBALL FLXA0.FROBA.UINT8[LL]
#define FLXA0FROBALH FLXA0.FROBA.UINT8[LH]
#define FLXA0FROBAH FLXA0.FROBA.UINT16[H]
#define FLXA0FROBAHL FLXA0.FROBA.UINT8[HL]
#define FLXA0FROBAHH FLXA0.FROBA.UINT8[HH]
#define FLXA0FRIQC FLXA0.FRIQC.UINT32
#define FLXA0FRIQCL FLXA0.FRIQC.UINT16[L]
#define FLXA0FRIQCLL FLXA0.FRIQC.UINT8[LL]
#define FLXA0FRUIR FLXA0.FRUIR.UINT32
#define FLXA0FRUIRL FLXA0.FRUIR.UINT16[L]
#define FLXA0FRUIRLL FLXA0.FRUIR.UINT8[LL]
#define FLXA0FRUOR FLXA0.FRUOR.UINT32
#define FLXA0FRUORL FLXA0.FRUOR.UINT16[L]
#define FLXA0FRUORLL FLXA0.FRUOR.UINT8[LL]
#define FLXA0FRUORLH FLXA0.FRUOR.UINT8[LH]
#define FLXA0FRITS FLXA0.FRITS.UINT32
#define FLXA0FRITSL FLXA0.FRITS.UINT16[L]
#define FLXA0FRITSLL FLXA0.FRITS.UINT8[LL]
#define FLXA0FRITSLH FLXA0.FRITS.UINT8[LH]
#define FLXA0FRITSH FLXA0.FRITS.UINT16[H]
#define FLXA0FRITSHL FLXA0.FRITS.UINT8[HL]
#define FLXA0FRITSHH FLXA0.FRITS.UINT8[HH]
#define FLXA0FROTS FLXA0.FROTS.UINT32
#define FLXA0FROTSL FLXA0.FROTS.UINT16[L]
#define FLXA0FROTSLL FLXA0.FROTS.UINT8[LL]
#define FLXA0FROTSLH FLXA0.FROTS.UINT8[LH]
#define FLXA0FROTSH FLXA0.FROTS.UINT16[H]
#define FLXA0FROTSHL FLXA0.FROTS.UINT8[HL]
#define FLXA0FROTSHH FLXA0.FROTS.UINT8[HH]
#define FLXA0FRAES FLXA0.FRAES.UINT32
#define FLXA0FRAESL FLXA0.FRAES.UINT16[L]
#define FLXA0FRAESLL FLXA0.FRAES.UINT8[LL]
#define FLXA0FRAESLH FLXA0.FRAES.UINT8[LH]
#define FLXA0FRAEA FLXA0.FRAEA.UINT32
#define FLXA0FRAEAL FLXA0.FRAEA.UINT16[L]
#define FLXA0FRAEALL FLXA0.FRAEA.UINT8[LL]
#define FLXA0FRAEALH FLXA0.FRAEA.UINT8[LH]
#define FLXA0FRAEAH FLXA0.FRAEA.UINT16[H]
#define FLXA0FRAEAHL FLXA0.FRAEA.UINT8[HL]
#define FLXA0FRAEAHH FLXA0.FRAEA.UINT8[HH]
#define FLXA0FRDA0 FLXA0.FRDA0.UINT32
#define FLXA0FRDA0L FLXA0.FRDA0.UINT16[L]
#define FLXA0FRDA0LL FLXA0.FRDA0.UINT8[LL]
#define FLXA0FRDA0LH FLXA0.FRDA0.UINT8[LH]
#define FLXA0FRDA0H FLXA0.FRDA0.UINT16[H]
#define FLXA0FRDA0HL FLXA0.FRDA0.UINT8[HL]
#define FLXA0FRDA0HH FLXA0.FRDA0.UINT8[HH]
#define FLXA0FRDA1 FLXA0.FRDA1.UINT32
#define FLXA0FRDA1L FLXA0.FRDA1.UINT16[L]
#define FLXA0FRDA1LL FLXA0.FRDA1.UINT8[LL]
#define FLXA0FRDA1LH FLXA0.FRDA1.UINT8[LH]
#define FLXA0FRDA1H FLXA0.FRDA1.UINT16[H]
#define FLXA0FRDA1HL FLXA0.FRDA1.UINT8[HL]
#define FLXA0FRDA1HH FLXA0.FRDA1.UINT8[HH]
#define FLXA0FRDA2 FLXA0.FRDA2.UINT32
#define FLXA0FRDA2L FLXA0.FRDA2.UINT16[L]
#define FLXA0FRDA2LL FLXA0.FRDA2.UINT8[LL]
#define FLXA0FRDA2LH FLXA0.FRDA2.UINT8[LH]
#define FLXA0FRDA2H FLXA0.FRDA2.UINT16[H]
#define FLXA0FRDA2HL FLXA0.FRDA2.UINT8[HL]
#define FLXA0FRDA2HH FLXA0.FRDA2.UINT8[HH]
#define FLXA0FRDA3 FLXA0.FRDA3.UINT32
#define FLXA0FRDA3L FLXA0.FRDA3.UINT16[L]
#define FLXA0FRDA3LL FLXA0.FRDA3.UINT8[LL]
#define FLXA0FRDA3LH FLXA0.FRDA3.UINT8[LH]
#define FLXA0FRDA3H FLXA0.FRDA3.UINT16[H]
#define FLXA0FRDA3HL FLXA0.FRDA3.UINT8[HL]
#define FLXA0FRDA3HH FLXA0.FRDA3.UINT8[HH]
#define FLXA0FRT2C FLXA0.FRT2C.UINT32
#define FLXA0FRT2CL FLXA0.FRT2C.UINT16[L]
#define FLXA0FRT2CLL FLXA0.FRT2C.UINT8[LL]
#define FLXA0FRT2CLH FLXA0.FRT2C.UINT8[LH]
#define FLXA0FRT2CH FLXA0.FRT2C.UINT16[H]
#define FLXA0FRT2CHL FLXA0.FRT2C.UINT8[HL]
#define FLXA0FRT2CHH FLXA0.FRT2C.UINT8[HH]
#define ETNA0EDSR0 ETNA0.EDSR0
#define ETNA0TDLAR0 ETNA0.TDLAR0
#define ETNA0TDFAR0 ETNA0.TDFAR0
#define ETNA0TDFXR0 ETNA0.TDFXR0
#define ETNA0TDFFR0 ETNA0.TDFFR0
#define ETNA0RDLAR0 ETNA0.RDLAR0
#define ETNA0RDFAR0 ETNA0.RDFAR0
#define ETNA0RDFXR0 ETNA0.RDFXR0
#define ETNA0RDFFR0 ETNA0.RDFFR0
#define ETNA0EDMR0 ETNA0.EDMR0
#define ETNA0EDTRR0 ETNA0.EDTRR0
#define ETNA0EDRRR0 ETNA0.EDRRR0
#define ETNA0EESR0 ETNA0.EESR0
#define ETNA0EESIPR0 ETNA0.EESIPR0
#define ETNA0TRSCER0 ETNA0.TRSCER0
#define ETNA0RMFCR0 ETNA0.RMFCR0
#define ETNA0FDR0 ETNA0.FDR0
#define ETNA0RMCR0 ETNA0.RMCR0
#define ETNA0RPADIR0 ETNA0.RPADIR0
#define ETNA0FCFTR0 ETNA0.FCFTR0
#define ETNA0TFSR0 ETNA0.TFSR0
#define ETNA0RFSR0 ETNA0.RFSR0
#define ETNA0ECMR0 ETNA0.ECMR0
#define ETNA0RFLR0 ETNA0.RFLR0
#define ETNA0ECSR0 ETNA0.ECSR0
#define ETNA0ECSIPR0 ETNA0.ECSIPR0
#define ETNA0PIR0 ETNA0.PIR0
#define ETNA0PLSR0 ETNA0.PLSR0
#define ETNA0PIPR0 ETNA0.PIPR0
#define ETNA0APR0 ETNA0.APR0
#define ETNA0MPR0 ETNA0.MPR0
#define ETNA0PFTCR0 ETNA0.PFTCR0
#define ETNA0PFRCR0 ETNA0.PFRCR0
#define ETNA0TPAUSER0 ETNA0.TPAUSER0
#define ETNA0TPFRCR0 ETNA0.TPFRCR0
#define ETNA0BCFRR0 ETNA0.BCFRR0
#define ETNA0CRBCFRR0 ETNA0.CRBCFRR0
#define ETNA0EMR0 ETNA0.EMR0
#define ETNA0MAHR0 ETNA0.MAHR0
#define ETNA0MALR0 ETNA0.MALR0
#define ETNA0TROCR0 ETNA0.TROCR0
#define ETNA0CDCR0 ETNA0.CDCR0
#define ETNA0LCCR0 ETNA0.LCCR0
#define ETNA0CEFCR0 ETNA0.CEFCR0
#define ETNA0FRECR0 ETNA0.FRECR0
#define ETNA0TSFRCR0 ETNA0.TSFRCR0
#define ETNA0TLFRCR0 ETNA0.TLFRCR0
#define ETNA0RFCR0 ETNA0.RFCR0
#define ETNA0MAFCR0 ETNA0.MAFCR0
#define ETNA0ARSTR ETNA0.ARSTR
#define ETNA0TSU_CTRST ETNA0.TSU_CTRST
#define ETNA0TSU_FWSL0 ETNA0.TSU_FWSL0
#define ETNA0TSU_FWSL1 ETNA0.TSU_FWSL1
#define ETNA0TSU_FWSLC ETNA0.TSU_FWSLC
#define ETNA0TSU_FWSR ETNA0.TSU_FWSR
#define ETNA0TSU_FWINMK ETNA0.TSU_FWINMK
#define ETNA0TSU_VTAG0 ETNA0.TSU_VTAG0
#define ETNA0TSU_VTAG1 ETNA0.TSU_VTAG1
#define ETNA0TSU_ADSBSY ETNA0.TSU_ADSBSY
#define ETNA0TSU_TEN ETNA0.TSU_TEN
#define ETNA0TSU_POST1 ETNA0.TSU_POST1
#define ETNA0TSU_POST2 ETNA0.TSU_POST2
#define ETNA0TSU_POST3 ETNA0.TSU_POST3
#define ETNA0TSU_POST4 ETNA0.TSU_POST4
#define ETNA0TXNLCR0 ETNA0.TXNLCR0
#define ETNA0TXALCR0 ETNA0.TXALCR0
#define ETNA0RXNLCR0 ETNA0.RXNLCR0
#define ETNA0RXALCR0 ETNA0.RXALCR0
#define ETNA0TXNLCR1 ETNA0.TXNLCR1
#define ETNA0TXALCR1 ETNA0.TXALCR1
#define ETNA0RXNLCR1 ETNA0.RXNLCR1
#define ETNA0RXALCR1 ETNA0.RXALCR1
#define ETNA0TSU_ADRH0 ETNA0.TSU_ADRH0
#define ETNA0TSU_ADRL0 ETNA0.TSU_ADRL0
#define ETNA0TSU_ADRH1 ETNA0.TSU_ADRH1
#define ETNA0TSU_ADRL1 ETNA0.TSU_ADRL1
#define ETNA0TSU_ADRH2 ETNA0.TSU_ADRH2
#define ETNA0TSU_ADRL2 ETNA0.TSU_ADRL2
#define ETNA0TSU_ADRH3 ETNA0.TSU_ADRH3
#define ETNA0TSU_ADRL3 ETNA0.TSU_ADRL3
#define ETNA0TSU_ADRH4 ETNA0.TSU_ADRH4
#define ETNA0TSU_ADRL4 ETNA0.TSU_ADRL4
#define ETNA0TSU_ADRH5 ETNA0.TSU_ADRH5
#define ETNA0TSU_ADRL5 ETNA0.TSU_ADRL5
#define ETNA0TSU_ADRH6 ETNA0.TSU_ADRH6
#define ETNA0TSU_ADRL6 ETNA0.TSU_ADRL6
#define ETNA0TSU_ADRH7 ETNA0.TSU_ADRH7
#define ETNA0TSU_ADRL7 ETNA0.TSU_ADRL7
#define ETNA0TSU_ADRH8 ETNA0.TSU_ADRH8
#define ETNA0TSU_ADRL8 ETNA0.TSU_ADRL8
#define ETNA0TSU_ADRH9 ETNA0.TSU_ADRH9
#define ETNA0TSU_ADRL9 ETNA0.TSU_ADRL9
#define ETNA0TSU_ADRH10 ETNA0.TSU_ADRH10
#define ETNA0TSU_ADRL10 ETNA0.TSU_ADRL10
#define ETNA0TSU_ADRH11 ETNA0.TSU_ADRH11
#define ETNA0TSU_ADRL11 ETNA0.TSU_ADRL11
#define ETNA0TSU_ADRH12 ETNA0.TSU_ADRH12
#define ETNA0TSU_ADRL12 ETNA0.TSU_ADRL12
#define ETNA0TSU_ADRH13 ETNA0.TSU_ADRH13
#define ETNA0TSU_ADRL13 ETNA0.TSU_ADRL13
#define ETNA0TSU_ADRH14 ETNA0.TSU_ADRH14
#define ETNA0TSU_ADRL14 ETNA0.TSU_ADRL14
#define ETNA0TSU_ADRH15 ETNA0.TSU_ADRH15
#define ETNA0TSU_ADRL15 ETNA0.TSU_ADRL15
#define ETNA0TSU_ADRH16 ETNA0.TSU_ADRH16
#define ETNA0TSU_ADRL16 ETNA0.TSU_ADRL16
#define ETNA0TSU_ADRH17 ETNA0.TSU_ADRH17
#define ETNA0TSU_ADRL17 ETNA0.TSU_ADRL17
#define ETNA0TSU_ADRH18 ETNA0.TSU_ADRH18
#define ETNA0TSU_ADRL18 ETNA0.TSU_ADRL18
#define ETNA0TSU_ADRH19 ETNA0.TSU_ADRH19
#define ETNA0TSU_ADRL19 ETNA0.TSU_ADRL19
#define ETNA0TSU_ADRH20 ETNA0.TSU_ADRH20
#define ETNA0TSU_ADRL20 ETNA0.TSU_ADRL20
#define ETNA0TSU_ADRH21 ETNA0.TSU_ADRH21
#define ETNA0TSU_ADRL21 ETNA0.TSU_ADRL21
#define ETNA0TSU_ADRH22 ETNA0.TSU_ADRH22
#define ETNA0TSU_ADRL22 ETNA0.TSU_ADRL22
#define ETNA0TSU_ADRH23 ETNA0.TSU_ADRH23
#define ETNA0TSU_ADRL23 ETNA0.TSU_ADRL23
#define ETNA0TSU_ADRH24 ETNA0.TSU_ADRH24
#define ETNA0TSU_ADRL24 ETNA0.TSU_ADRL24
#define ETNA0TSU_ADRH25 ETNA0.TSU_ADRH25
#define ETNA0TSU_ADRL25 ETNA0.TSU_ADRL25
#define ETNA0TSU_ADRH26 ETNA0.TSU_ADRH26
#define ETNA0TSU_ADRL26 ETNA0.TSU_ADRL26
#define ETNA0TSU_ADRH27 ETNA0.TSU_ADRH27
#define ETNA0TSU_ADRL27 ETNA0.TSU_ADRL27
#define ETNA0TSU_ADRH28 ETNA0.TSU_ADRH28
#define ETNA0TSU_ADRL28 ETNA0.TSU_ADRL28
#define ETNA0TSU_ADRH29 ETNA0.TSU_ADRH29
#define ETNA0TSU_ADRL29 ETNA0.TSU_ADRL29
#define ETNA0TSU_ADRH30 ETNA0.TSU_ADRH30
#define ETNA0TSU_ADRL30 ETNA0.TSU_ADRL30
#define ETNA0TSU_ADRH31 ETNA0.TSU_ADRH31
#define ETNA0TSU_ADRL31 ETNA0.TSU_ADRL31
#define ETNA0HDMMDR0 ETNA0.HDMMDR0
#define ETNA0HDMISR0 ETNA0.HDMISR0
#define ETNA0HDMIER0 ETNA0.HDMIER0
#define FLMDCNT FLMD.CNT
#define FLMDPCMD FLMD.PCMD
#define FLMDPS FLMD.PS
#define FACI0FPMON FACI0.FPMON
#define FACI0FASTAT FACI0.FASTAT
#define FACI0FAEINT FACI0.FAEINT
#define FACI0FSADDR FACI0.FSADDR
#define FACI0FEADDR FACI0.FEADDR
#define FACI0FCURAME FACI0.FCURAME
#define FACI0FRAMMCR FACI0.FRAMMCR
#define FACI0FPROTDR0 FACI0.FPROTDR0
#define FACI0FPROTCR0 FACI0.FPROTCR0
#define FACI0FPROTCR1 FACI0.FPROTCR1
#define FACI0FPROTCR2 FACI0.FPROTCR2
#define FACI0FPROTCR3 FACI0.FPROTCR3
#define FACI0FPROTCR4 FACI0.FPROTCR4
#define FACI0FSTATR FACI0.FSTATR
#define FACI0FENTRYR FACI0.FENTRYR
#define FACI0FSUINITR FACI0.FSUINITR
#define FACI0FLKSTAT FACI0.FLKSTAT
#define FACI0FRFSTEADR FACI0.FRFSTEADR
#define FACI0FRTSTAT FACI0.FRTSTAT
#define FACI0FRTEINT FACI0.FRTEINT
#define FACI0FCMDR FACI0.FCMDR
#define FACI0FRAMECCR FACI0.FRAMECCR
#define FACI0FPESTAT FACI0.FPESTAT
#define FACI0FCNFPRGCNT FACI0.FCNFPRGCNT
#define FACI0FBCCNT FACI0.FBCCNT
#define FACI0FBCSTAT FACI0.FBCSTAT
#define FACI0FPSADDR FACI0.FPSADDR
#define FACI0FCPSR FACI0.FCPSR
#define FACI0FPCKAR FACI0.FPCKAR
#define FACI0FECCEMON FACI0.FECCEMON
#define FACI0FECCTMD FACI0.FECCTMD
#define FACI0FDMYECC FACI0.FDMYECC
#define FACI1FPMON FACI1.FPMON
#define FACI1FASTAT FACI1.FASTAT
#define FACI1FAEINT FACI1.FAEINT
#define FACI1FSADDR FACI1.FSADDR
#define FACI1FEADDR FACI1.FEADDR
#define FACI1FCURAME FACI1.FCURAME
#define FACI1FRAMMCR FACI1.FRAMMCR
#define FACI1FPROTDR0 FACI1.FPROTDR0
#define FACI1FPROTCR0 FACI1.FPROTCR0
#define FACI1FPROTCR1 FACI1.FPROTCR1
#define FACI1FPROTCR2 FACI1.FPROTCR2
#define FACI1FPROTCR3 FACI1.FPROTCR3
#define FACI1FPROTCR4 FACI1.FPROTCR4
#define FACI1FSTATR FACI1.FSTATR
#define FACI1FENTRYR FACI1.FENTRYR
#define FACI1FSUINITR FACI1.FSUINITR
#define FACI1FLKSTAT FACI1.FLKSTAT
#define FACI1FRFSTEADR FACI1.FRFSTEADR
#define FACI1FRTSTAT FACI1.FRTSTAT
#define FACI1FRTEINT FACI1.FRTEINT
#define FACI1FCMDR FACI1.FCMDR
#define FACI1FRAMECCR FACI1.FRAMECCR
#define FACI1FPESTAT FACI1.FPESTAT
#define FACI1FCNFPRGCNT FACI1.FCNFPRGCNT
#define FACI1FBCCNT FACI1.FBCCNT
#define FACI1FBCSTAT FACI1.FBCSTAT
#define FACI1FPSADDR FACI1.FPSADDR
#define FACI1FCPSR FACI1.FCPSR
#define FACI1FPCKAR FACI1.FPCKAR
#define FACI1FECCEMON FACI1.FECCEMON
#define FACI1FECCTMD FACI1.FECCTMD
#define FACI1FDMYECC FACI1.FDMYECC
#define DNFA2CTL DNFA2.CTL.UINT8
#define DNFA2PRS0 DNFA2.CTL.BIT.PRS0
#define DNFA2PRS1 DNFA2.CTL.BIT.PRS1
#define DNFA2PRS2 DNFA2.CTL.BIT.PRS2
#define DNFA2NFSTS0 DNFA2.CTL.BIT.NFSTS0
#define DNFA2NFSTS1 DNFA2.CTL.BIT.NFSTS1
#define DNFA2EN DNFA2.EN
#define DNFA2ENL DNFA2.ENL.UINT8
#define DNFA2NFENL0 DNFA2.ENL.BIT.NFENL0
#define DNFA2NFENL1 DNFA2.ENL.BIT.NFENL1
#define DNFA3CTL DNFA3.CTL.UINT8
#define DNFA3PRS0 DNFA3.CTL.BIT.PRS0
#define DNFA3PRS1 DNFA3.CTL.BIT.PRS1
#define DNFA3PRS2 DNFA3.CTL.BIT.PRS2
#define DNFA3NFSTS0 DNFA3.CTL.BIT.NFSTS0
#define DNFA3NFSTS1 DNFA3.CTL.BIT.NFSTS1
#define DNFA3EN DNFA3.EN
#define DNFA3ENL DNFA3.ENL.UINT8
#define DNFA3NFENL0 DNFA3.ENL.BIT.NFENL0
#define DNFA3NFENL1 DNFA3.ENL.BIT.NFENL1
#define DNFA4CTL DNFA4.CTL.UINT8
#define DNFA4PRS0 DNFA4.CTL.BIT.PRS0
#define DNFA4PRS1 DNFA4.CTL.BIT.PRS1
#define DNFA4PRS2 DNFA4.CTL.BIT.PRS2
#define DNFA4NFSTS0 DNFA4.CTL.BIT.NFSTS0
#define DNFA4NFSTS1 DNFA4.CTL.BIT.NFSTS1
#define DNFA4EN DNFA4.EN
#define DNFA4ENL DNFA4.ENL.UINT8
#define DNFA4NFENL0 DNFA4.ENL.BIT.NFENL0
#define DNFA4NFENL1 DNFA4.ENL.BIT.NFENL1
#define DNFA5CTL DNFA5.CTL.UINT8
#define DNFA5PRS0 DNFA5.CTL.BIT.PRS0
#define DNFA5PRS1 DNFA5.CTL.BIT.PRS1
#define DNFA5PRS2 DNFA5.CTL.BIT.PRS2
#define DNFA5NFSTS0 DNFA5.CTL.BIT.NFSTS0
#define DNFA5NFSTS1 DNFA5.CTL.BIT.NFSTS1
#define DNFA5EN DNFA5.EN
#define DNFA5ENL DNFA5.ENL.UINT8
#define DNFA5NFENL0 DNFA5.ENL.BIT.NFENL0
#define DNFA5NFENL1 DNFA5.ENL.BIT.NFENL1
#define DNFA5NFENL2 DNFA5.ENL.BIT.NFENL2
#define DNFA5NFENL3 DNFA5.ENL.BIT.NFENL3
#define DNFA5NFENL4 DNFA5.ENL.BIT.NFENL4
#define DNFA5NFENL5 DNFA5.ENL.BIT.NFENL5
#define DNFA5NFENL6 DNFA5.ENL.BIT.NFENL6
#define DNFA5NFENL7 DNFA5.ENL.BIT.NFENL7
#define DNFA6CTL DNFA6.CTL.UINT8
#define DNFA6PRS0 DNFA6.CTL.BIT.PRS0
#define DNFA6PRS1 DNFA6.CTL.BIT.PRS1
#define DNFA6PRS2 DNFA6.CTL.BIT.PRS2
#define DNFA6NFSTS0 DNFA6.CTL.BIT.NFSTS0
#define DNFA6NFSTS1 DNFA6.CTL.BIT.NFSTS1
#define DNFA6EN DNFA6.EN
#define DNFA6ENL DNFA6.ENL.UINT8
#define DNFA6NFENL0 DNFA6.ENL.BIT.NFENL0
#define DNFA6NFENL1 DNFA6.ENL.BIT.NFENL1
#define DNFA7CTL DNFA7.CTL.UINT8
#define DNFA7PRS0 DNFA7.CTL.BIT.PRS0
#define DNFA7PRS1 DNFA7.CTL.BIT.PRS1
#define DNFA7PRS2 DNFA7.CTL.BIT.PRS2
#define DNFA7NFSTS0 DNFA7.CTL.BIT.NFSTS0
#define DNFA7NFSTS1 DNFA7.CTL.BIT.NFSTS1
#define DNFA7EN DNFA7.EN
#define DNFA7ENL DNFA7.ENL.UINT8
#define DNFA7NFENL0 DNFA7.ENL.BIT.NFENL0
#define DNFA7NFENL1 DNFA7.ENL.BIT.NFENL1
#define FCLA0CTL0 FCLA0.CTL0.UINT8
#define FCLA0INTR0 FCLA0.CTL0.BIT.INTR0
#define FCLA0INTF0 FCLA0.CTL0.BIT.INTF0
#define FCLA0INTL0 FCLA0.CTL0.BIT.INTL0
#define FCLA0CTL1 FCLA0.CTL1.UINT8
#define FCLA0INTR1 FCLA0.CTL1.BIT.INTR1
#define FCLA0INTF1 FCLA0.CTL1.BIT.INTF1
#define FCLA0INTL1 FCLA0.CTL1.BIT.INTL1
#define FCLA0CTL2 FCLA0.CTL2.UINT8
#define FCLA0INTR2 FCLA0.CTL2.BIT.INTR2
#define FCLA0INTF2 FCLA0.CTL2.BIT.INTF2
#define FCLA0INTL2 FCLA0.CTL2.BIT.INTL2
#define FCLA0CTL3 FCLA0.CTL3.UINT8
#define FCLA0INTR3 FCLA0.CTL3.BIT.INTR3
#define FCLA0INTF3 FCLA0.CTL3.BIT.INTF3
#define FCLA0INTL3 FCLA0.CTL3.BIT.INTL3
#define FCLA0CTL4 FCLA0.CTL4.UINT8
#define FCLA0INTR4 FCLA0.CTL4.BIT.INTR4
#define FCLA0INTF4 FCLA0.CTL4.BIT.INTF4
#define FCLA0INTL4 FCLA0.CTL4.BIT.INTL4
#define FCLA0CTL5 FCLA0.CTL5.UINT8
#define FCLA0INTR5 FCLA0.CTL5.BIT.INTR5
#define FCLA0INTF5 FCLA0.CTL5.BIT.INTF5
#define FCLA0INTL5 FCLA0.CTL5.BIT.INTL5
#define FCLA0CTL6 FCLA0.CTL6.UINT8
#define FCLA0INTR6 FCLA0.CTL6.BIT.INTR6
#define FCLA0INTF6 FCLA0.CTL6.BIT.INTF6
#define FCLA0INTL6 FCLA0.CTL6.BIT.INTL6
#define FCLA0CTL7 FCLA0.CTL7.UINT8
#define FCLA0INTR7 FCLA0.CTL7.BIT.INTR7
#define FCLA0INTF7 FCLA0.CTL7.BIT.INTF7
#define FCLA0INTL7 FCLA0.CTL7.BIT.INTL7
#define FCLA1CTL0 FCLA1.CTL0.UINT8
#define FCLA1INTR0 FCLA1.CTL0.BIT.INTR0
#define FCLA1INTF0 FCLA1.CTL0.BIT.INTF0
#define FCLA1INTL0 FCLA1.CTL0.BIT.INTL0
#define FCLA1CTL1 FCLA1.CTL1.UINT8
#define FCLA1INTR1 FCLA1.CTL1.BIT.INTR1
#define FCLA1INTF1 FCLA1.CTL1.BIT.INTF1
#define FCLA1INTL1 FCLA1.CTL1.BIT.INTL1
#define FCLA1CTL2 FCLA1.CTL2.UINT8
#define FCLA1INTR2 FCLA1.CTL2.BIT.INTR2
#define FCLA1INTF2 FCLA1.CTL2.BIT.INTF2
#define FCLA1INTL2 FCLA1.CTL2.BIT.INTL2
#define FCLA1CTL3 FCLA1.CTL3.UINT8
#define FCLA1INTR3 FCLA1.CTL3.BIT.INTR3
#define FCLA1INTF3 FCLA1.CTL3.BIT.INTF3
#define FCLA1INTL3 FCLA1.CTL3.BIT.INTL3
#define FCLA1CTL4 FCLA1.CTL4.UINT8
#define FCLA1INTR4 FCLA1.CTL4.BIT.INTR4
#define FCLA1INTF4 FCLA1.CTL4.BIT.INTF4
#define FCLA1INTL4 FCLA1.CTL4.BIT.INTL4
#define FCLA2CTL0 FCLA2.CTL0.UINT8
#define FCLA2INTR0 FCLA2.CTL0.BIT.INTR0
#define FCLA2INTF0 FCLA2.CTL0.BIT.INTF0
#define FCLA2CTL1 FCLA2.CTL1.UINT8
#define FCLA2INTR1 FCLA2.CTL1.BIT.INTR1
#define FCLA2INTF1 FCLA2.CTL1.BIT.INTF1
#define FCLA3CTL0 FCLA3.CTL0.UINT8
#define FCLA3INTR0 FCLA3.CTL0.BIT.INTR0
#define FCLA3INTF0 FCLA3.CTL0.BIT.INTF0
#define FCLA3CTL1 FCLA3.CTL1.UINT8
#define FCLA3INTR1 FCLA3.CTL1.BIT.INTR1
#define FCLA3INTF1 FCLA3.CTL1.BIT.INTF1
#define FCLA4CTL0 FCLA4.CTL0.UINT8
#define FCLA4INTR0 FCLA4.CTL0.BIT.INTR0
#define FCLA4INTF0 FCLA4.CTL0.BIT.INTF0
#define FCLA4CTL1 FCLA4.CTL1.UINT8
#define FCLA4INTR1 FCLA4.CTL1.BIT.INTR1
#define FCLA4INTF1 FCLA4.CTL1.BIT.INTF1
#define FCLA5CTL0 FCLA5.CTL0.UINT8
#define FCLA5BYPS0 FCLA5.CTL0.BIT.BYPS0
#define FCLA5CTL1 FCLA5.CTL1.UINT8
#define FCLA5BYPS1 FCLA5.CTL1.BIT.BYPS1
#define FCLA5CTL2 FCLA5.CTL2.UINT8
#define FCLA5BYPS2 FCLA5.CTL2.BIT.BYPS2
#define FCLA5CTL3 FCLA5.CTL3.UINT8
#define FCLA5BYPS3 FCLA5.CTL3.BIT.BYPS3
#define FCLA5CTL4 FCLA5.CTL4.UINT8
#define FCLA5BYPS4 FCLA5.CTL4.BIT.BYPS4
#define FCLA5CTL5 FCLA5.CTL5.UINT8
#define FCLA5BYPS5 FCLA5.CTL5.BIT.BYPS5
#define FCLA5CTL6 FCLA5.CTL6.UINT8
#define FCLA5BYPS6 FCLA5.CTL6.BIT.BYPS6
#define FCLA5CTL7 FCLA5.CTL7.UINT8
#define FCLA5BYPS7 FCLA5.CTL7.BIT.BYPS7
#define FCLA6CTL0 FCLA6.CTL0.UINT8
#define FCLA6BYPS0 FCLA6.CTL0.BIT.BYPS0
#define FCLA6CTL1 FCLA6.CTL1.UINT8
#define FCLA6BYPS1 FCLA6.CTL1.BIT.BYPS1
#define FSGD5APROT00 FSGD5A.PROT00.UINT32
#define FSGD5APROT00L FSGD5A.PROT00.UINT16[L]
#define FSGD5APROT00LL FSGD5A.PROT00.UINT8[LL]
#define FSGD5APROT00LH FSGD5A.PROT00.UINT8[LH]
#define FSGD5APROT00H FSGD5A.PROT00.UINT16[H]
#define FSGD5APROT00HL FSGD5A.PROT00.UINT8[HL]
#define FSGD5APROT00HH FSGD5A.PROT00.UINT8[HH]
#define FSGD5ASPID00 FSGD5A.SPID00.UINT32
#define FSGD5ASPID00L FSGD5A.SPID00.UINT16[L]
#define FSGD5ASPID00LL FSGD5A.SPID00.UINT8[LL]
#define FSGD5ASPID00LH FSGD5A.SPID00.UINT8[LH]
#define FSGD5ASPID00H FSGD5A.SPID00.UINT16[H]
#define FSGD5ASPID00HL FSGD5A.SPID00.UINT8[HL]
#define FSGD5ASPID00HH FSGD5A.SPID00.UINT8[HH]
#define FSGD5APROT01 FSGD5A.PROT01.UINT32
#define FSGD5APROT01L FSGD5A.PROT01.UINT16[L]
#define FSGD5APROT01LL FSGD5A.PROT01.UINT8[LL]
#define FSGD5APROT01LH FSGD5A.PROT01.UINT8[LH]
#define FSGD5APROT01H FSGD5A.PROT01.UINT16[H]
#define FSGD5APROT01HL FSGD5A.PROT01.UINT8[HL]
#define FSGD5APROT01HH FSGD5A.PROT01.UINT8[HH]
#define FSGD5ASPID01 FSGD5A.SPID01.UINT32
#define FSGD5ASPID01L FSGD5A.SPID01.UINT16[L]
#define FSGD5ASPID01LL FSGD5A.SPID01.UINT8[LL]
#define FSGD5ASPID01LH FSGD5A.SPID01.UINT8[LH]
#define FSGD5ASPID01H FSGD5A.SPID01.UINT16[H]
#define FSGD5ASPID01HL FSGD5A.SPID01.UINT8[HL]
#define FSGD5ASPID01HH FSGD5A.SPID01.UINT8[HH]
#define FSGD5APROT02 FSGD5A.PROT02.UINT32
#define FSGD5APROT02L FSGD5A.PROT02.UINT16[L]
#define FSGD5APROT02LL FSGD5A.PROT02.UINT8[LL]
#define FSGD5APROT02LH FSGD5A.PROT02.UINT8[LH]
#define FSGD5APROT02H FSGD5A.PROT02.UINT16[H]
#define FSGD5APROT02HL FSGD5A.PROT02.UINT8[HL]
#define FSGD5APROT02HH FSGD5A.PROT02.UINT8[HH]
#define FSGD5ASPID02 FSGD5A.SPID02.UINT32
#define FSGD5ASPID02L FSGD5A.SPID02.UINT16[L]
#define FSGD5ASPID02LL FSGD5A.SPID02.UINT8[LL]
#define FSGD5ASPID02LH FSGD5A.SPID02.UINT8[LH]
#define FSGD5ASPID02H FSGD5A.SPID02.UINT16[H]
#define FSGD5ASPID02HL FSGD5A.SPID02.UINT8[HL]
#define FSGD5ASPID02HH FSGD5A.SPID02.UINT8[HH]
#define FSGD5APROT03 FSGD5A.PROT03.UINT32
#define FSGD5APROT03L FSGD5A.PROT03.UINT16[L]
#define FSGD5APROT03LL FSGD5A.PROT03.UINT8[LL]
#define FSGD5APROT03LH FSGD5A.PROT03.UINT8[LH]
#define FSGD5APROT03H FSGD5A.PROT03.UINT16[H]
#define FSGD5APROT03HL FSGD5A.PROT03.UINT8[HL]
#define FSGD5APROT03HH FSGD5A.PROT03.UINT8[HH]
#define FSGD5ASPID03 FSGD5A.SPID03.UINT32
#define FSGD5ASPID03L FSGD5A.SPID03.UINT16[L]
#define FSGD5ASPID03LL FSGD5A.SPID03.UINT8[LL]
#define FSGD5ASPID03LH FSGD5A.SPID03.UINT8[LH]
#define FSGD5ASPID03H FSGD5A.SPID03.UINT16[H]
#define FSGD5ASPID03HL FSGD5A.SPID03.UINT8[HL]
#define FSGD5ASPID03HH FSGD5A.SPID03.UINT8[HH]
#define FSGD5APROT04 FSGD5A.PROT04.UINT32
#define FSGD5APROT04L FSGD5A.PROT04.UINT16[L]
#define FSGD5APROT04LL FSGD5A.PROT04.UINT8[LL]
#define FSGD5APROT04LH FSGD5A.PROT04.UINT8[LH]
#define FSGD5APROT04H FSGD5A.PROT04.UINT16[H]
#define FSGD5APROT04HL FSGD5A.PROT04.UINT8[HL]
#define FSGD5APROT04HH FSGD5A.PROT04.UINT8[HH]
#define FSGD5ASPID04 FSGD5A.SPID04.UINT32
#define FSGD5ASPID04L FSGD5A.SPID04.UINT16[L]
#define FSGD5ASPID04LL FSGD5A.SPID04.UINT8[LL]
#define FSGD5ASPID04LH FSGD5A.SPID04.UINT8[LH]
#define FSGD5ASPID04H FSGD5A.SPID04.UINT16[H]
#define FSGD5ASPID04HL FSGD5A.SPID04.UINT8[HL]
#define FSGD5ASPID04HH FSGD5A.SPID04.UINT8[HH]
#define FSGD5APROT05 FSGD5A.PROT05.UINT32
#define FSGD5APROT05L FSGD5A.PROT05.UINT16[L]
#define FSGD5APROT05LL FSGD5A.PROT05.UINT8[LL]
#define FSGD5APROT05LH FSGD5A.PROT05.UINT8[LH]
#define FSGD5APROT05H FSGD5A.PROT05.UINT16[H]
#define FSGD5APROT05HL FSGD5A.PROT05.UINT8[HL]
#define FSGD5APROT05HH FSGD5A.PROT05.UINT8[HH]
#define FSGD5ASPID05 FSGD5A.SPID05.UINT32
#define FSGD5ASPID05L FSGD5A.SPID05.UINT16[L]
#define FSGD5ASPID05LL FSGD5A.SPID05.UINT8[LL]
#define FSGD5ASPID05LH FSGD5A.SPID05.UINT8[LH]
#define FSGD5ASPID05H FSGD5A.SPID05.UINT16[H]
#define FSGD5ASPID05HL FSGD5A.SPID05.UINT8[HL]
#define FSGD5ASPID05HH FSGD5A.SPID05.UINT8[HH]
#define ERRSLV5ACTL ERRSLV5A.CTL
#define ERRSLV5ASTAT ERRSLV5A.STAT
#define ERRSLV5ATYPE ERRSLV5A.TYPE
#define FSGD5BPROT00 FSGD5B.PROT00.UINT32
#define FSGD5BPROT00L FSGD5B.PROT00.UINT16[L]
#define FSGD5BPROT00LL FSGD5B.PROT00.UINT8[LL]
#define FSGD5BPROT00LH FSGD5B.PROT00.UINT8[LH]
#define FSGD5BPROT00H FSGD5B.PROT00.UINT16[H]
#define FSGD5BPROT00HL FSGD5B.PROT00.UINT8[HL]
#define FSGD5BPROT00HH FSGD5B.PROT00.UINT8[HH]
#define FSGD5BSPID00 FSGD5B.SPID00.UINT32
#define FSGD5BSPID00L FSGD5B.SPID00.UINT16[L]
#define FSGD5BSPID00LL FSGD5B.SPID00.UINT8[LL]
#define FSGD5BSPID00LH FSGD5B.SPID00.UINT8[LH]
#define FSGD5BSPID00H FSGD5B.SPID00.UINT16[H]
#define FSGD5BSPID00HL FSGD5B.SPID00.UINT8[HL]
#define FSGD5BSPID00HH FSGD5B.SPID00.UINT8[HH]
#define FSGD5BPROT01 FSGD5B.PROT01.UINT32
#define FSGD5BPROT01L FSGD5B.PROT01.UINT16[L]
#define FSGD5BPROT01LL FSGD5B.PROT01.UINT8[LL]
#define FSGD5BPROT01LH FSGD5B.PROT01.UINT8[LH]
#define FSGD5BPROT01H FSGD5B.PROT01.UINT16[H]
#define FSGD5BPROT01HL FSGD5B.PROT01.UINT8[HL]
#define FSGD5BPROT01HH FSGD5B.PROT01.UINT8[HH]
#define FSGD5BSPID01 FSGD5B.SPID01.UINT32
#define FSGD5BSPID01L FSGD5B.SPID01.UINT16[L]
#define FSGD5BSPID01LL FSGD5B.SPID01.UINT8[LL]
#define FSGD5BSPID01LH FSGD5B.SPID01.UINT8[LH]
#define FSGD5BSPID01H FSGD5B.SPID01.UINT16[H]
#define FSGD5BSPID01HL FSGD5B.SPID01.UINT8[HL]
#define FSGD5BSPID01HH FSGD5B.SPID01.UINT8[HH]
#define FSGD5BPROT02 FSGD5B.PROT02.UINT32
#define FSGD5BPROT02L FSGD5B.PROT02.UINT16[L]
#define FSGD5BPROT02LL FSGD5B.PROT02.UINT8[LL]
#define FSGD5BPROT02LH FSGD5B.PROT02.UINT8[LH]
#define FSGD5BPROT02H FSGD5B.PROT02.UINT16[H]
#define FSGD5BPROT02HL FSGD5B.PROT02.UINT8[HL]
#define FSGD5BPROT02HH FSGD5B.PROT02.UINT8[HH]
#define FSGD5BSPID02 FSGD5B.SPID02.UINT32
#define FSGD5BSPID02L FSGD5B.SPID02.UINT16[L]
#define FSGD5BSPID02LL FSGD5B.SPID02.UINT8[LL]
#define FSGD5BSPID02LH FSGD5B.SPID02.UINT8[LH]
#define FSGD5BSPID02H FSGD5B.SPID02.UINT16[H]
#define FSGD5BSPID02HL FSGD5B.SPID02.UINT8[HL]
#define FSGD5BSPID02HH FSGD5B.SPID02.UINT8[HH]
#define FSGD5BPROT03 FSGD5B.PROT03.UINT32
#define FSGD5BPROT03L FSGD5B.PROT03.UINT16[L]
#define FSGD5BPROT03LL FSGD5B.PROT03.UINT8[LL]
#define FSGD5BPROT03LH FSGD5B.PROT03.UINT8[LH]
#define FSGD5BPROT03H FSGD5B.PROT03.UINT16[H]
#define FSGD5BPROT03HL FSGD5B.PROT03.UINT8[HL]
#define FSGD5BPROT03HH FSGD5B.PROT03.UINT8[HH]
#define FSGD5BSPID03 FSGD5B.SPID03.UINT32
#define FSGD5BSPID03L FSGD5B.SPID03.UINT16[L]
#define FSGD5BSPID03LL FSGD5B.SPID03.UINT8[LL]
#define FSGD5BSPID03LH FSGD5B.SPID03.UINT8[LH]
#define FSGD5BSPID03H FSGD5B.SPID03.UINT16[H]
#define FSGD5BSPID03HL FSGD5B.SPID03.UINT8[HL]
#define FSGD5BSPID03HH FSGD5B.SPID03.UINT8[HH]
#define ERRSLV5BCTL ERRSLV5B.CTL
#define ERRSLV5BSTAT ERRSLV5B.STAT
#define ERRSLV5BTYPE ERRSLV5B.TYPE
#define FSGD5CPROT00 FSGD5C.PROT00.UINT32
#define FSGD5CPROT00L FSGD5C.PROT00.UINT16[L]
#define FSGD5CPROT00LL FSGD5C.PROT00.UINT8[LL]
#define FSGD5CPROT00LH FSGD5C.PROT00.UINT8[LH]
#define FSGD5CPROT00H FSGD5C.PROT00.UINT16[H]
#define FSGD5CPROT00HL FSGD5C.PROT00.UINT8[HL]
#define FSGD5CPROT00HH FSGD5C.PROT00.UINT8[HH]
#define FSGD5CSPID00 FSGD5C.SPID00.UINT32
#define FSGD5CSPID00L FSGD5C.SPID00.UINT16[L]
#define FSGD5CSPID00LL FSGD5C.SPID00.UINT8[LL]
#define FSGD5CSPID00LH FSGD5C.SPID00.UINT8[LH]
#define FSGD5CSPID00H FSGD5C.SPID00.UINT16[H]
#define FSGD5CSPID00HL FSGD5C.SPID00.UINT8[HL]
#define FSGD5CSPID00HH FSGD5C.SPID00.UINT8[HH]
#define FSGD5CPROT01 FSGD5C.PROT01.UINT32
#define FSGD5CPROT01L FSGD5C.PROT01.UINT16[L]
#define FSGD5CPROT01LL FSGD5C.PROT01.UINT8[LL]
#define FSGD5CPROT01LH FSGD5C.PROT01.UINT8[LH]
#define FSGD5CPROT01H FSGD5C.PROT01.UINT16[H]
#define FSGD5CPROT01HL FSGD5C.PROT01.UINT8[HL]
#define FSGD5CPROT01HH FSGD5C.PROT01.UINT8[HH]
#define FSGD5CSPID01 FSGD5C.SPID01.UINT32
#define FSGD5CSPID01L FSGD5C.SPID01.UINT16[L]
#define FSGD5CSPID01LL FSGD5C.SPID01.UINT8[LL]
#define FSGD5CSPID01LH FSGD5C.SPID01.UINT8[LH]
#define FSGD5CSPID01H FSGD5C.SPID01.UINT16[H]
#define FSGD5CSPID01HL FSGD5C.SPID01.UINT8[HL]
#define FSGD5CSPID01HH FSGD5C.SPID01.UINT8[HH]
#define ERRSLV5CCTL ERRSLV5C.CTL
#define ERRSLV5CSTAT ERRSLV5C.STAT
#define ERRSLV5CTYPE ERRSLV5C.TYPE
#define FSGD5DPROT00 FSGD5D.PROT00.UINT32
#define FSGD5DPROT00L FSGD5D.PROT00.UINT16[L]
#define FSGD5DPROT00LL FSGD5D.PROT00.UINT8[LL]
#define FSGD5DPROT00LH FSGD5D.PROT00.UINT8[LH]
#define FSGD5DPROT00H FSGD5D.PROT00.UINT16[H]
#define FSGD5DPROT00HL FSGD5D.PROT00.UINT8[HL]
#define FSGD5DPROT00HH FSGD5D.PROT00.UINT8[HH]
#define FSGD5DSPID00 FSGD5D.SPID00.UINT32
#define FSGD5DSPID00L FSGD5D.SPID00.UINT16[L]
#define FSGD5DSPID00LL FSGD5D.SPID00.UINT8[LL]
#define FSGD5DSPID00LH FSGD5D.SPID00.UINT8[LH]
#define FSGD5DSPID00H FSGD5D.SPID00.UINT16[H]
#define FSGD5DSPID00HL FSGD5D.SPID00.UINT8[HL]
#define FSGD5DSPID00HH FSGD5D.SPID00.UINT8[HH]
#define FSGD5DPROT01 FSGD5D.PROT01.UINT32
#define FSGD5DPROT01L FSGD5D.PROT01.UINT16[L]
#define FSGD5DPROT01LL FSGD5D.PROT01.UINT8[LL]
#define FSGD5DPROT01LH FSGD5D.PROT01.UINT8[LH]
#define FSGD5DPROT01H FSGD5D.PROT01.UINT16[H]
#define FSGD5DPROT01HL FSGD5D.PROT01.UINT8[HL]
#define FSGD5DPROT01HH FSGD5D.PROT01.UINT8[HH]
#define FSGD5DSPID01 FSGD5D.SPID01.UINT32
#define FSGD5DSPID01L FSGD5D.SPID01.UINT16[L]
#define FSGD5DSPID01LL FSGD5D.SPID01.UINT8[LL]
#define FSGD5DSPID01LH FSGD5D.SPID01.UINT8[LH]
#define FSGD5DSPID01H FSGD5D.SPID01.UINT16[H]
#define FSGD5DSPID01HL FSGD5D.SPID01.UINT8[HL]
#define FSGD5DSPID01HH FSGD5D.SPID01.UINT8[HH]
#define FSGD5DPROT02 FSGD5D.PROT02.UINT32
#define FSGD5DPROT02L FSGD5D.PROT02.UINT16[L]
#define FSGD5DPROT02LL FSGD5D.PROT02.UINT8[LL]
#define FSGD5DPROT02LH FSGD5D.PROT02.UINT8[LH]
#define FSGD5DPROT02H FSGD5D.PROT02.UINT16[H]
#define FSGD5DPROT02HL FSGD5D.PROT02.UINT8[HL]
#define FSGD5DPROT02HH FSGD5D.PROT02.UINT8[HH]
#define FSGD5DSPID02 FSGD5D.SPID02.UINT32
#define FSGD5DSPID02L FSGD5D.SPID02.UINT16[L]
#define FSGD5DSPID02LL FSGD5D.SPID02.UINT8[LL]
#define FSGD5DSPID02LH FSGD5D.SPID02.UINT8[LH]
#define FSGD5DSPID02H FSGD5D.SPID02.UINT16[H]
#define FSGD5DSPID02HL FSGD5D.SPID02.UINT8[HL]
#define FSGD5DSPID02HH FSGD5D.SPID02.UINT8[HH]
#define FSGD5DPROT03 FSGD5D.PROT03.UINT32
#define FSGD5DPROT03L FSGD5D.PROT03.UINT16[L]
#define FSGD5DPROT03LL FSGD5D.PROT03.UINT8[LL]
#define FSGD5DPROT03LH FSGD5D.PROT03.UINT8[LH]
#define FSGD5DPROT03H FSGD5D.PROT03.UINT16[H]
#define FSGD5DPROT03HL FSGD5D.PROT03.UINT8[HL]
#define FSGD5DPROT03HH FSGD5D.PROT03.UINT8[HH]
#define FSGD5DSPID03 FSGD5D.SPID03.UINT32
#define FSGD5DSPID03L FSGD5D.SPID03.UINT16[L]
#define FSGD5DSPID03LL FSGD5D.SPID03.UINT8[LL]
#define FSGD5DSPID03LH FSGD5D.SPID03.UINT8[LH]
#define FSGD5DSPID03H FSGD5D.SPID03.UINT16[H]
#define FSGD5DSPID03HL FSGD5D.SPID03.UINT8[HL]
#define FSGD5DSPID03HH FSGD5D.SPID03.UINT8[HH]
#define ERRSLV5DCTL ERRSLV5D.CTL
#define ERRSLV5DSTAT ERRSLV5D.STAT
#define ERRSLV5DTYPE ERRSLV5D.TYPE
#define ERRSLV5AICTL ERRSLV5AI.CTL
#define ERRSLV5AISTAT ERRSLV5AI.STAT
#define ERRSLV5AITYPE ERRSLV5AI.TYPE
#define ERRSLV5BICTL ERRSLV5BI.CTL
#define ERRSLV5BISTAT ERRSLV5BI.STAT
#define ERRSLV5BITYPE ERRSLV5BI.TYPE
#define ERRSLVDG0CTL ERRSLVDG0.CTL
#define ERRSLVDG0STAT ERRSLVDG0.STAT
#define ERRSLVDG0TYPE ERRSLVDG0.TYPE
#define ERRSLVDG1CTL ERRSLVDG1.CTL
#define ERRSLVDG1STAT ERRSLVDG1.STAT
#define ERRSLVDG1TYPE ERRSLVDG1.TYPE
#define ECCCSIH0CTL ECCCSIH0.CTL
#define ECCCSIH0TMC ECCCSIH0.TMC
#define ECCCSIH0TRC ECCCSIH0.TRC
#define ECCCSIH0TED ECCCSIH0.TED
#define ECCCSIH0EAD0 ECCCSIH0.EAD0
#define ECCCSIH2CTL ECCCSIH2.CTL
#define ECCCSIH2TMC ECCCSIH2.TMC
#define ECCCSIH2TRC ECCCSIH2.TRC
#define ECCCSIH2TED ECCCSIH2.TED
#define ECCCSIH2EAD0 ECCCSIH2.EAD0
#define ECCTTCAN0CTL ECCTTCAN0.CTL
#define ECCTTCAN0TMC ECCTTCAN0.TMC
#define ECCTTCAN0TRC ECCTTCAN0.TRC
#define ECCTTCAN0TED ECCTTCAN0.TED
#define ECCTTCAN0EAD0 ECCTTCAN0.EAD0
#define ECCMCAN1CTL ECCMCAN1.CTL
#define ECCMCAN1TMC ECCMCAN1.TMC
#define ECCMCAN1TRC ECCMCAN1.TRC
#define ECCMCAN1TED ECCMCAN1.TED
#define ECCMCAN1EAD0 ECCMCAN1.EAD0
#define ECCFLX0CTL ECCFLX0.CTL
#define ECCFLX0TMC ECCFLX0.TMC
#define ECCFLX0TRC ECCFLX0.TRC
#define ECCFLX0TED ECCFLX0.TED
#define ECCFLX0EAD0 ECCFLX0.EAD0
#define ECCFLX0T0CTL ECCFLX0T0.CTL
#define ECCFLX0T0TMC ECCFLX0T0.TMC
#define ECCFLX0T0TRC ECCFLX0T0.TRC
#define ECCFLX0T0TED ECCFLX0T0.TED
#define ECCFLX0T0EAD0 ECCFLX0T0.EAD0
#define ECCFLX0T1CTL ECCFLX0T1.CTL
#define ECCFLX0T1TMC ECCFLX0T1.TMC
#define ECCFLX0T1TRC ECCFLX0T1.TRC
#define ECCFLX0T1TED ECCFLX0T1.TED
#define ECCFLX0T1EAD0 ECCFLX0T1.EAD0
#define ECCCSIH1CTL ECCCSIH1.CTL
#define ECCCSIH1TMC ECCCSIH1.TMC
#define ECCCSIH1TRC ECCCSIH1.TRC
#define ECCCSIH1TED ECCCSIH1.TED
#define ECCCSIH1EAD0 ECCCSIH1.EAD0
#define ECCCSIH3CTL ECCCSIH3.CTL
#define ECCCSIH3TMC ECCCSIH3.TMC
#define ECCCSIH3TRC ECCCSIH3.TRC
#define ECCCSIH3TED ECCCSIH3.TED
#define ECCCSIH3EAD0 ECCCSIH3.EAD0
#define ECCMCAN0CTL ECCMCAN0.CTL
#define ECCMCAN0TMC ECCMCAN0.TMC
#define ECCMCAN0TRC ECCMCAN0.TRC
#define ECCMCAN0TED ECCMCAN0.TED
#define ECCMCAN0EAD0 ECCMCAN0.EAD0
#define CSIH1CTL0 CSIH1.CTL0.UINT8
#define CSIH1MBS CSIH1.CTL0.BIT.MBS
#define CSIH1JOBE CSIH1.CTL0.BIT.JOBE
#define CSIH1RXE CSIH1.CTL0.BIT.RXE
#define CSIH1TXE CSIH1.CTL0.BIT.TXE
#define CSIH1PWR CSIH1.CTL0.BIT.PWR
#define CSIH1CTL1 CSIH1.CTL1
#define CSIH1CTL2 CSIH1.CTL2
#define CSIH1MCTL1 CSIH1.MCTL1
#define CSIH1MCTL2 CSIH1.MCTL2
#define CSIH1TX0W CSIH1.TX0W
#define CSIH1TX0H CSIH1.TX0H
#define CSIH1RX0W CSIH1.RX0W
#define CSIH1RX0H CSIH1.RX0H
#define CSIH1MRWP0 CSIH1.MRWP0
#define CSIH1STR0 CSIH1.STR0
#define CSIH1STCR0 CSIH1.STCR0
#define CSIH1MCTL0 CSIH1.MCTL0
#define CSIH1CFG0 CSIH1.CFG0
#define CSIH1CFG1 CSIH1.CFG1
#define CSIH1CFG2 CSIH1.CFG2
#define CSIH1CFG3 CSIH1.CFG3
#define CSIH1CFG4 CSIH1.CFG4
#define CSIH1CFG5 CSIH1.CFG5
#define CSIH1CFG6 CSIH1.CFG6
#define CSIH1CFG7 CSIH1.CFG7
#define CSIH1BRS0 CSIH1.BRS0
#define CSIH1BRS1 CSIH1.BRS1
#define CSIH1BRS2 CSIH1.BRS2
#define CSIH1BRS3 CSIH1.BRS3
#define PMMA1CTL PMMA1.CTL
#define PMMA1TCTL0 PMMA1.TCTL0
#define PMMA1TCTL1 PMMA1.TCTL1
#define PMMA1TCTL2 PMMA1.TCTL2
#define PMMA1TCTL3 PMMA1.TCTL3
#define PMMA1TCTL4 PMMA1.TCTL4
#define PMMA1TCTL5 PMMA1.TCTL5
#define PMMA1TCTL6 PMMA1.TCTL6
#define PMMA1TCTL7 PMMA1.TCTL7
#define PMMA1TTX0 PMMA1.TTX0
#define PMMA1TTX1 PMMA1.TTX1
#define PMMA1TTX2 PMMA1.TTX2
#define PMMA1TTX3 PMMA1.TTX3
#define PMMA1TTX4 PMMA1.TTX4
#define PMMA1TTX5 PMMA1.TTX5
#define PMMA1TTX6 PMMA1.TTX6
#define PMMA1TTX7 PMMA1.TTX7
#define PMMA1RX PMMA1.RX
#define PMMA1TCNT0 PMMA1.TCNT0
#define PMMA1TCNT1 PMMA1.TCNT1
#define PMMA1TCNT2 PMMA1.TCNT2
#define PMMA1TCNT3 PMMA1.TCNT3
#define PMMA1TCNT4 PMMA1.TCNT4
#define PMMA1TCNT5 PMMA1.TCNT5
#define PMMA1TCNT6 PMMA1.TCNT6
#define PMMA1TCNT7 PMMA1.TCNT7
#define PMMA1STR0 PMMA1.STR0
#define PMMA1STR1 PMMA1.STR1
#define PMMA1STC PMMA1.STC
#define CSIH3CTL0 CSIH3.CTL0.UINT8
#define CSIH3MBS CSIH3.CTL0.BIT.MBS
#define CSIH3JOBE CSIH3.CTL0.BIT.JOBE
#define CSIH3RXE CSIH3.CTL0.BIT.RXE
#define CSIH3TXE CSIH3.CTL0.BIT.TXE
#define CSIH3PWR CSIH3.CTL0.BIT.PWR
#define CSIH3CTL1 CSIH3.CTL1
#define CSIH3CTL2 CSIH3.CTL2
#define CSIH3MCTL1 CSIH3.MCTL1
#define CSIH3MCTL2 CSIH3.MCTL2
#define CSIH3TX0W CSIH3.TX0W
#define CSIH3TX0H CSIH3.TX0H
#define CSIH3RX0W CSIH3.RX0W
#define CSIH3RX0H CSIH3.RX0H
#define CSIH3MRWP0 CSIH3.MRWP0
#define CSIH3STR0 CSIH3.STR0
#define CSIH3STCR0 CSIH3.STCR0
#define CSIH3MCTL0 CSIH3.MCTL0
#define CSIH3CFG0 CSIH3.CFG0
#define CSIH3CFG1 CSIH3.CFG1
#define CSIH3CFG2 CSIH3.CFG2
#define CSIH3CFG3 CSIH3.CFG3
#define CSIH3CFG4 CSIH3.CFG4
#define CSIH3CFG5 CSIH3.CFG5
#define CSIH3CFG6 CSIH3.CFG6
#define CSIH3CFG7 CSIH3.CFG7
#define CSIH3BRS0 CSIH3.BRS0
#define CSIH3BRS1 CSIH3.BRS1
#define CSIH3BRS2 CSIH3.BRS2
#define CSIH3BRS3 CSIH3.BRS3
#define PMMA3CTL PMMA3.CTL
#define PMMA3TCTL0 PMMA3.TCTL0
#define PMMA3TCTL1 PMMA3.TCTL1
#define PMMA3TCTL2 PMMA3.TCTL2
#define PMMA3TCTL3 PMMA3.TCTL3
#define PMMA3TCTL4 PMMA3.TCTL4
#define PMMA3TCTL5 PMMA3.TCTL5
#define PMMA3TCTL6 PMMA3.TCTL6
#define PMMA3TCTL7 PMMA3.TCTL7
#define PMMA3TTX0 PMMA3.TTX0
#define PMMA3TTX1 PMMA3.TTX1
#define PMMA3TTX2 PMMA3.TTX2
#define PMMA3TTX3 PMMA3.TTX3
#define PMMA3TTX4 PMMA3.TTX4
#define PMMA3TTX5 PMMA3.TTX5
#define PMMA3TTX6 PMMA3.TTX6
#define PMMA3TTX7 PMMA3.TTX7
#define PMMA3RX PMMA3.RX
#define PMMA3TCNT0 PMMA3.TCNT0
#define PMMA3TCNT1 PMMA3.TCNT1
#define PMMA3TCNT2 PMMA3.TCNT2
#define PMMA3TCNT3 PMMA3.TCNT3
#define PMMA3TCNT4 PMMA3.TCNT4
#define PMMA3TCNT5 PMMA3.TCNT5
#define PMMA3TCNT6 PMMA3.TCNT6
#define PMMA3TCNT7 PMMA3.TCNT7
#define PMMA3STR0 PMMA3.STR0
#define PMMA3STR1 PMMA3.STR1
#define PMMA3STC PMMA3.STC
#define HSUS1CKEN HSUS1.CKEN
#define HSUS1SRST HSUS1.SRST
#define HSUS1EN HSUS1.EN
#define HSUS1MD HSUS1.MD
#define HSUS1CTL HSUS1.CTL
#define HSUS1TDIV HSUS1.TDIV
#define HSUS1TSAR HSUS1.TSAR
#define HSUS1TPFM HSUS1.TPFM
#define HSUS1RDAR HSUS1.RDAR
#define HSUS1RPFM HSUS1.RPFM
#define HSUS1RGFM HSUS1.RGFM
#define HSUS1IREN HSUS1.IREN
#define HSUS1IRST HSUS1.IRST
#define HSUS1IRCL HSUS1.IRCL.UINT32
#define HSUS1IRCLL HSUS1.IRCL.UINT16[L]
#define HSUS1IRCLLL HSUS1.IRCL.UINT8[LL]
#define HSUS1CST HSUS1.CST
#define HSUS1CTFM HSUS1.CTFM
#define HSUS1CRFM HSUS1.CRFM
#define RLN31LWBR RLN31.LWBR
#define RLN31LBRP01 RLN31.LBRP01.UINT16
#define RLN31LBRP0 RLN31.LBRP01.UINT8[L]
#define RLN31LBRP1 RLN31.LBRP01.UINT8[H]
#define RLN31LSTC RLN31.LSTC
#define RLN31LMD RLN31.LMD
#define RLN31LBFC RLN31.LBFC
#define RLN31LSC RLN31.LSC
#define RLN31LWUP RLN31.LWUP
#define RLN31LIE RLN31.LIE
#define RLN31LEDE RLN31.LEDE
#define RLN31LCUC RLN31.LCUC
#define RLN31LTRC RLN31.LTRC
#define RLN31LMST RLN31.LMST
#define RLN31LST RLN31.LST
#define RLN31LEST RLN31.LEST
#define RLN31LDFC RLN31.LDFC
#define RLN31LIDB RLN31.LIDB
#define RLN31LCBR RLN31.LCBR
#define RLN31LUDB0 RLN31.LUDB0
#define RLN31LDBR1 RLN31.LDBR1
#define RLN31LDBR2 RLN31.LDBR2
#define RLN31LDBR3 RLN31.LDBR3
#define RLN31LDBR4 RLN31.LDBR4
#define RLN31LDBR5 RLN31.LDBR5
#define RLN31LDBR6 RLN31.LDBR6
#define RLN31LDBR7 RLN31.LDBR7
#define RLN31LDBR8 RLN31.LDBR8
#define RLN31LUOER RLN31.LUOER
#define RLN31LUOR1 RLN31.LUOR1
#define RLN31LUTDR RLN31.LUTDR.UINT16
#define RLN31LUTDRL RLN31.LUTDR.UINT8[L]
#define RLN31LUTDRH RLN31.LUTDR.UINT8[H]
#define RLN31LURDR RLN31.LURDR.UINT16
#define RLN31LURDRL RLN31.LURDR.UINT8[L]
#define RLN31LURDRH RLN31.LURDR.UINT8[H]
#define RLN31LUWTDR RLN31.LUWTDR.UINT16
#define RLN31LUWTDRL RLN31.LUWTDR.UINT8[L]
#define RLN31LUWTDRH RLN31.LUWTDR.UINT8[H]
#define RSENT0TSPC RSENT0.TSPC.UINT32
#define RSENT0TSPCL RSENT0.TSPC.UINT16[L]
#define RSENT0TSPCLL RSENT0.TSPC.UINT8[LL]
#define RSENT0TSPCLH RSENT0.TSPC.UINT8[LH]
#define RSENT0TSPCH RSENT0.TSPC.UINT16[H]
#define RSENT0TSPCHL RSENT0.TSPC.UINT8[HL]
#define RSENT0TSC RSENT0.TSC.UINT32
#define RSENT0TSCL RSENT0.TSC.UINT16[L]
#define RSENT0TSCLL RSENT0.TSC.UINT8[LL]
#define RSENT0TSCLH RSENT0.TSC.UINT8[LH]
#define RSENT0TSCH RSENT0.TSC.UINT16[H]
#define RSENT0TSCHL RSENT0.TSC.UINT8[HL]
#define RSENT0TSCHH RSENT0.TSC.UINT8[HH]
#define RSENT0CC RSENT0.CC.UINT32
#define RSENT0CCL RSENT0.CC.UINT16[L]
#define RSENT0CCLL RSENT0.CC.UINT8[LL]
#define RSENT0CCLH RSENT0.CC.UINT8[LH]
#define RSENT0BRP RSENT0.BRP.UINT32
#define RSENT0BRPL RSENT0.BRP.UINT16[L]
#define RSENT0BRPLL RSENT0.BRP.UINT8[LL]
#define RSENT0BRPLH RSENT0.BRP.UINT8[LH]
#define RSENT0BRPH RSENT0.BRP.UINT16[H]
#define RSENT0BRPHL RSENT0.BRP.UINT8[HL]
#define RSENT0BRPHH RSENT0.BRP.UINT8[HH]
#define RSENT0IDE RSENT0.IDE.UINT32
#define RSENT0IDEL RSENT0.IDE.UINT16[L]
#define RSENT0IDELL RSENT0.IDE.UINT8[LL]
#define RSENT0IDELH RSENT0.IDE.UINT8[LH]
#define RSENT0MDC RSENT0.MDC.UINT32
#define RSENT0MDCL RSENT0.MDC.UINT16[L]
#define RSENT0MDCLL RSENT0.MDC.UINT8[LL]
#define RSENT0SPCT RSENT0.SPCT.UINT32
#define RSENT0SPCTL RSENT0.SPCT.UINT16[L]
#define RSENT0SPCTLL RSENT0.SPCT.UINT8[LL]
#define RSENT0MST RSENT0.MST.UINT32
#define RSENT0MSTL RSENT0.MST.UINT16[L]
#define RSENT0MSTLL RSENT0.MST.UINT8[LL]
#define RSENT0CS RSENT0.CS.UINT32
#define RSENT0CSL RSENT0.CS.UINT16[L]
#define RSENT0CSLL RSENT0.CS.UINT8[LL]
#define RSENT0CSLH RSENT0.CS.UINT8[LH]
#define RSENT0CSC RSENT0.CSC.UINT32
#define RSENT0CSCL RSENT0.CSC.UINT16[L]
#define RSENT0CSCLL RSENT0.CSC.UINT8[LL]
#define RSENT0CSCLH RSENT0.CSC.UINT8[LH]
#define RSENT0SRTS RSENT0.SRTS.UINT32
#define RSENT0SRTSL RSENT0.SRTS.UINT16[L]
#define RSENT0SRTSLL RSENT0.SRTS.UINT8[LL]
#define RSENT0SRTSLH RSENT0.SRTS.UINT8[LH]
#define RSENT0SRTSH RSENT0.SRTS.UINT16[H]
#define RSENT0SRTSHL RSENT0.SRTS.UINT8[HL]
#define RSENT0SRTSHH RSENT0.SRTS.UINT8[HH]
#define RSENT0SRXD RSENT0.SRXD
#define RSENT0CPL RSENT0.CPL.UINT32
#define RSENT0CPLL RSENT0.CPL.UINT16[L]
#define RSENT0CPLLL RSENT0.CPL.UINT8[LL]
#define RSENT0CPLLH RSENT0.CPL.UINT8[LH]
#define RSENT0CPLH RSENT0.CPL.UINT16[H]
#define RSENT0CPLHL RSENT0.CPL.UINT8[HL]
#define RSENT0ML RSENT0.ML.UINT32
#define RSENT0MLL RSENT0.ML.UINT16[L]
#define RSENT0MLLL RSENT0.ML.UINT8[LL]
#define RSENT0MLLH RSENT0.ML.UINT8[LH]
#define RSENT0MLH RSENT0.ML.UINT16[H]
#define RSENT0MLHL RSENT0.ML.UINT8[HL]
#define RSENT0FRTS RSENT0.FRTS.UINT32
#define RSENT0FRTSL RSENT0.FRTS.UINT16[L]
#define RSENT0FRTSLL RSENT0.FRTS.UINT8[LL]
#define RSENT0FRTSLH RSENT0.FRTS.UINT8[LH]
#define RSENT0FRTSH RSENT0.FRTS.UINT16[H]
#define RSENT0FRTSHL RSENT0.FRTS.UINT8[HL]
#define RSENT0FRTSHH RSENT0.FRTS.UINT8[HH]
#define RSENT0FRXD RSENT0.FRXD
#define RSENT1TSPC RSENT1.TSPC.UINT32
#define RSENT1TSPCL RSENT1.TSPC.UINT16[L]
#define RSENT1TSPCLL RSENT1.TSPC.UINT8[LL]
#define RSENT1TSPCLH RSENT1.TSPC.UINT8[LH]
#define RSENT1TSPCH RSENT1.TSPC.UINT16[H]
#define RSENT1TSPCHL RSENT1.TSPC.UINT8[HL]
#define RSENT1TSC RSENT1.TSC.UINT32
#define RSENT1TSCL RSENT1.TSC.UINT16[L]
#define RSENT1TSCLL RSENT1.TSC.UINT8[LL]
#define RSENT1TSCLH RSENT1.TSC.UINT8[LH]
#define RSENT1TSCH RSENT1.TSC.UINT16[H]
#define RSENT1TSCHL RSENT1.TSC.UINT8[HL]
#define RSENT1TSCHH RSENT1.TSC.UINT8[HH]
#define RSENT1CC RSENT1.CC.UINT32
#define RSENT1CCL RSENT1.CC.UINT16[L]
#define RSENT1CCLL RSENT1.CC.UINT8[LL]
#define RSENT1CCLH RSENT1.CC.UINT8[LH]
#define RSENT1BRP RSENT1.BRP.UINT32
#define RSENT1BRPL RSENT1.BRP.UINT16[L]
#define RSENT1BRPLL RSENT1.BRP.UINT8[LL]
#define RSENT1BRPLH RSENT1.BRP.UINT8[LH]
#define RSENT1BRPH RSENT1.BRP.UINT16[H]
#define RSENT1BRPHL RSENT1.BRP.UINT8[HL]
#define RSENT1BRPHH RSENT1.BRP.UINT8[HH]
#define RSENT1IDE RSENT1.IDE.UINT32
#define RSENT1IDEL RSENT1.IDE.UINT16[L]
#define RSENT1IDELL RSENT1.IDE.UINT8[LL]
#define RSENT1IDELH RSENT1.IDE.UINT8[LH]
#define RSENT1MDC RSENT1.MDC.UINT32
#define RSENT1MDCL RSENT1.MDC.UINT16[L]
#define RSENT1MDCLL RSENT1.MDC.UINT8[LL]
#define RSENT1SPCT RSENT1.SPCT.UINT32
#define RSENT1SPCTL RSENT1.SPCT.UINT16[L]
#define RSENT1SPCTLL RSENT1.SPCT.UINT8[LL]
#define RSENT1MST RSENT1.MST.UINT32
#define RSENT1MSTL RSENT1.MST.UINT16[L]
#define RSENT1MSTLL RSENT1.MST.UINT8[LL]
#define RSENT1CS RSENT1.CS.UINT32
#define RSENT1CSL RSENT1.CS.UINT16[L]
#define RSENT1CSLL RSENT1.CS.UINT8[LL]
#define RSENT1CSLH RSENT1.CS.UINT8[LH]
#define RSENT1CSC RSENT1.CSC.UINT32
#define RSENT1CSCL RSENT1.CSC.UINT16[L]
#define RSENT1CSCLL RSENT1.CSC.UINT8[LL]
#define RSENT1CSCLH RSENT1.CSC.UINT8[LH]
#define RSENT1SRTS RSENT1.SRTS.UINT32
#define RSENT1SRTSL RSENT1.SRTS.UINT16[L]
#define RSENT1SRTSLL RSENT1.SRTS.UINT8[LL]
#define RSENT1SRTSLH RSENT1.SRTS.UINT8[LH]
#define RSENT1SRTSH RSENT1.SRTS.UINT16[H]
#define RSENT1SRTSHL RSENT1.SRTS.UINT8[HL]
#define RSENT1SRTSHH RSENT1.SRTS.UINT8[HH]
#define RSENT1SRXD RSENT1.SRXD
#define RSENT1CPL RSENT1.CPL.UINT32
#define RSENT1CPLL RSENT1.CPL.UINT16[L]
#define RSENT1CPLLL RSENT1.CPL.UINT8[LL]
#define RSENT1CPLLH RSENT1.CPL.UINT8[LH]
#define RSENT1CPLH RSENT1.CPL.UINT16[H]
#define RSENT1CPLHL RSENT1.CPL.UINT8[HL]
#define RSENT1ML RSENT1.ML.UINT32
#define RSENT1MLL RSENT1.ML.UINT16[L]
#define RSENT1MLLL RSENT1.ML.UINT8[LL]
#define RSENT1MLLH RSENT1.ML.UINT8[LH]
#define RSENT1MLH RSENT1.ML.UINT16[H]
#define RSENT1MLHL RSENT1.ML.UINT8[HL]
#define RSENT1FRTS RSENT1.FRTS.UINT32
#define RSENT1FRTSL RSENT1.FRTS.UINT16[L]
#define RSENT1FRTSLL RSENT1.FRTS.UINT8[LL]
#define RSENT1FRTSLH RSENT1.FRTS.UINT8[LH]
#define RSENT1FRTSH RSENT1.FRTS.UINT16[H]
#define RSENT1FRTSHL RSENT1.FRTS.UINT8[HL]
#define RSENT1FRTSHH RSENT1.FRTS.UINT8[HH]
#define RSENT1FRXD RSENT1.FRXD
#define RSENT2TSPC RSENT2.TSPC.UINT32
#define RSENT2TSPCL RSENT2.TSPC.UINT16[L]
#define RSENT2TSPCLL RSENT2.TSPC.UINT8[LL]
#define RSENT2TSPCLH RSENT2.TSPC.UINT8[LH]
#define RSENT2TSPCH RSENT2.TSPC.UINT16[H]
#define RSENT2TSPCHL RSENT2.TSPC.UINT8[HL]
#define RSENT2TSC RSENT2.TSC.UINT32
#define RSENT2TSCL RSENT2.TSC.UINT16[L]
#define RSENT2TSCLL RSENT2.TSC.UINT8[LL]
#define RSENT2TSCLH RSENT2.TSC.UINT8[LH]
#define RSENT2TSCH RSENT2.TSC.UINT16[H]
#define RSENT2TSCHL RSENT2.TSC.UINT8[HL]
#define RSENT2TSCHH RSENT2.TSC.UINT8[HH]
#define RSENT2CC RSENT2.CC.UINT32
#define RSENT2CCL RSENT2.CC.UINT16[L]
#define RSENT2CCLL RSENT2.CC.UINT8[LL]
#define RSENT2CCLH RSENT2.CC.UINT8[LH]
#define RSENT2BRP RSENT2.BRP.UINT32
#define RSENT2BRPL RSENT2.BRP.UINT16[L]
#define RSENT2BRPLL RSENT2.BRP.UINT8[LL]
#define RSENT2BRPLH RSENT2.BRP.UINT8[LH]
#define RSENT2BRPH RSENT2.BRP.UINT16[H]
#define RSENT2BRPHL RSENT2.BRP.UINT8[HL]
#define RSENT2BRPHH RSENT2.BRP.UINT8[HH]
#define RSENT2IDE RSENT2.IDE.UINT32
#define RSENT2IDEL RSENT2.IDE.UINT16[L]
#define RSENT2IDELL RSENT2.IDE.UINT8[LL]
#define RSENT2IDELH RSENT2.IDE.UINT8[LH]
#define RSENT2MDC RSENT2.MDC.UINT32
#define RSENT2MDCL RSENT2.MDC.UINT16[L]
#define RSENT2MDCLL RSENT2.MDC.UINT8[LL]
#define RSENT2SPCT RSENT2.SPCT.UINT32
#define RSENT2SPCTL RSENT2.SPCT.UINT16[L]
#define RSENT2SPCTLL RSENT2.SPCT.UINT8[LL]
#define RSENT2MST RSENT2.MST.UINT32
#define RSENT2MSTL RSENT2.MST.UINT16[L]
#define RSENT2MSTLL RSENT2.MST.UINT8[LL]
#define RSENT2CS RSENT2.CS.UINT32
#define RSENT2CSL RSENT2.CS.UINT16[L]
#define RSENT2CSLL RSENT2.CS.UINT8[LL]
#define RSENT2CSLH RSENT2.CS.UINT8[LH]
#define RSENT2CSC RSENT2.CSC.UINT32
#define RSENT2CSCL RSENT2.CSC.UINT16[L]
#define RSENT2CSCLL RSENT2.CSC.UINT8[LL]
#define RSENT2CSCLH RSENT2.CSC.UINT8[LH]
#define RSENT2SRTS RSENT2.SRTS.UINT32
#define RSENT2SRTSL RSENT2.SRTS.UINT16[L]
#define RSENT2SRTSLL RSENT2.SRTS.UINT8[LL]
#define RSENT2SRTSLH RSENT2.SRTS.UINT8[LH]
#define RSENT2SRTSH RSENT2.SRTS.UINT16[H]
#define RSENT2SRTSHL RSENT2.SRTS.UINT8[HL]
#define RSENT2SRTSHH RSENT2.SRTS.UINT8[HH]
#define RSENT2SRXD RSENT2.SRXD
#define RSENT2CPL RSENT2.CPL.UINT32
#define RSENT2CPLL RSENT2.CPL.UINT16[L]
#define RSENT2CPLLL RSENT2.CPL.UINT8[LL]
#define RSENT2CPLLH RSENT2.CPL.UINT8[LH]
#define RSENT2CPLH RSENT2.CPL.UINT16[H]
#define RSENT2CPLHL RSENT2.CPL.UINT8[HL]
#define RSENT2ML RSENT2.ML.UINT32
#define RSENT2MLL RSENT2.ML.UINT16[L]
#define RSENT2MLLL RSENT2.ML.UINT8[LL]
#define RSENT2MLLH RSENT2.ML.UINT8[LH]
#define RSENT2MLH RSENT2.ML.UINT16[H]
#define RSENT2MLHL RSENT2.ML.UINT8[HL]
#define RSENT2FRTS RSENT2.FRTS.UINT32
#define RSENT2FRTSL RSENT2.FRTS.UINT16[L]
#define RSENT2FRTSLL RSENT2.FRTS.UINT8[LL]
#define RSENT2FRTSLH RSENT2.FRTS.UINT8[LH]
#define RSENT2FRTSH RSENT2.FRTS.UINT16[H]
#define RSENT2FRTSHL RSENT2.FRTS.UINT8[HL]
#define RSENT2FRTSHH RSENT2.FRTS.UINT8[HH]
#define RSENT2FRXD RSENT2.FRXD
#define RSENT3TSPC RSENT3.TSPC.UINT32
#define RSENT3TSPCL RSENT3.TSPC.UINT16[L]
#define RSENT3TSPCLL RSENT3.TSPC.UINT8[LL]
#define RSENT3TSPCLH RSENT3.TSPC.UINT8[LH]
#define RSENT3TSPCH RSENT3.TSPC.UINT16[H]
#define RSENT3TSPCHL RSENT3.TSPC.UINT8[HL]
#define RSENT3TSC RSENT3.TSC.UINT32
#define RSENT3TSCL RSENT3.TSC.UINT16[L]
#define RSENT3TSCLL RSENT3.TSC.UINT8[LL]
#define RSENT3TSCLH RSENT3.TSC.UINT8[LH]
#define RSENT3TSCH RSENT3.TSC.UINT16[H]
#define RSENT3TSCHL RSENT3.TSC.UINT8[HL]
#define RSENT3TSCHH RSENT3.TSC.UINT8[HH]
#define RSENT3CC RSENT3.CC.UINT32
#define RSENT3CCL RSENT3.CC.UINT16[L]
#define RSENT3CCLL RSENT3.CC.UINT8[LL]
#define RSENT3CCLH RSENT3.CC.UINT8[LH]
#define RSENT3BRP RSENT3.BRP.UINT32
#define RSENT3BRPL RSENT3.BRP.UINT16[L]
#define RSENT3BRPLL RSENT3.BRP.UINT8[LL]
#define RSENT3BRPLH RSENT3.BRP.UINT8[LH]
#define RSENT3BRPH RSENT3.BRP.UINT16[H]
#define RSENT3BRPHL RSENT3.BRP.UINT8[HL]
#define RSENT3BRPHH RSENT3.BRP.UINT8[HH]
#define RSENT3IDE RSENT3.IDE.UINT32
#define RSENT3IDEL RSENT3.IDE.UINT16[L]
#define RSENT3IDELL RSENT3.IDE.UINT8[LL]
#define RSENT3IDELH RSENT3.IDE.UINT8[LH]
#define RSENT3MDC RSENT3.MDC.UINT32
#define RSENT3MDCL RSENT3.MDC.UINT16[L]
#define RSENT3MDCLL RSENT3.MDC.UINT8[LL]
#define RSENT3SPCT RSENT3.SPCT.UINT32
#define RSENT3SPCTL RSENT3.SPCT.UINT16[L]
#define RSENT3SPCTLL RSENT3.SPCT.UINT8[LL]
#define RSENT3MST RSENT3.MST.UINT32
#define RSENT3MSTL RSENT3.MST.UINT16[L]
#define RSENT3MSTLL RSENT3.MST.UINT8[LL]
#define RSENT3CS RSENT3.CS.UINT32
#define RSENT3CSL RSENT3.CS.UINT16[L]
#define RSENT3CSLL RSENT3.CS.UINT8[LL]
#define RSENT3CSLH RSENT3.CS.UINT8[LH]
#define RSENT3CSC RSENT3.CSC.UINT32
#define RSENT3CSCL RSENT3.CSC.UINT16[L]
#define RSENT3CSCLL RSENT3.CSC.UINT8[LL]
#define RSENT3CSCLH RSENT3.CSC.UINT8[LH]
#define RSENT3SRTS RSENT3.SRTS.UINT32
#define RSENT3SRTSL RSENT3.SRTS.UINT16[L]
#define RSENT3SRTSLL RSENT3.SRTS.UINT8[LL]
#define RSENT3SRTSLH RSENT3.SRTS.UINT8[LH]
#define RSENT3SRTSH RSENT3.SRTS.UINT16[H]
#define RSENT3SRTSHL RSENT3.SRTS.UINT8[HL]
#define RSENT3SRTSHH RSENT3.SRTS.UINT8[HH]
#define RSENT3SRXD RSENT3.SRXD
#define RSENT3CPL RSENT3.CPL.UINT32
#define RSENT3CPLL RSENT3.CPL.UINT16[L]
#define RSENT3CPLLL RSENT3.CPL.UINT8[LL]
#define RSENT3CPLLH RSENT3.CPL.UINT8[LH]
#define RSENT3CPLH RSENT3.CPL.UINT16[H]
#define RSENT3CPLHL RSENT3.CPL.UINT8[HL]
#define RSENT3ML RSENT3.ML.UINT32
#define RSENT3MLL RSENT3.ML.UINT16[L]
#define RSENT3MLLL RSENT3.ML.UINT8[LL]
#define RSENT3MLLH RSENT3.ML.UINT8[LH]
#define RSENT3MLH RSENT3.ML.UINT16[H]
#define RSENT3MLHL RSENT3.ML.UINT8[HL]
#define RSENT3FRTS RSENT3.FRTS.UINT32
#define RSENT3FRTSL RSENT3.FRTS.UINT16[L]
#define RSENT3FRTSLL RSENT3.FRTS.UINT8[LL]
#define RSENT3FRTSLH RSENT3.FRTS.UINT8[LH]
#define RSENT3FRTSH RSENT3.FRTS.UINT16[H]
#define RSENT3FRTSHL RSENT3.FRTS.UINT8[HL]
#define RSENT3FRTSHH RSENT3.FRTS.UINT8[HH]
#define RSENT3FRXD RSENT3.FRXD
#define RSENT4TSPC RSENT4.TSPC.UINT32
#define RSENT4TSPCL RSENT4.TSPC.UINT16[L]
#define RSENT4TSPCLL RSENT4.TSPC.UINT8[LL]
#define RSENT4TSPCLH RSENT4.TSPC.UINT8[LH]
#define RSENT4TSPCH RSENT4.TSPC.UINT16[H]
#define RSENT4TSPCHL RSENT4.TSPC.UINT8[HL]
#define RSENT4TSC RSENT4.TSC.UINT32
#define RSENT4TSCL RSENT4.TSC.UINT16[L]
#define RSENT4TSCLL RSENT4.TSC.UINT8[LL]
#define RSENT4TSCLH RSENT4.TSC.UINT8[LH]
#define RSENT4TSCH RSENT4.TSC.UINT16[H]
#define RSENT4TSCHL RSENT4.TSC.UINT8[HL]
#define RSENT4TSCHH RSENT4.TSC.UINT8[HH]
#define RSENT4CC RSENT4.CC.UINT32
#define RSENT4CCL RSENT4.CC.UINT16[L]
#define RSENT4CCLL RSENT4.CC.UINT8[LL]
#define RSENT4CCLH RSENT4.CC.UINT8[LH]
#define RSENT4BRP RSENT4.BRP.UINT32
#define RSENT4BRPL RSENT4.BRP.UINT16[L]
#define RSENT4BRPLL RSENT4.BRP.UINT8[LL]
#define RSENT4BRPLH RSENT4.BRP.UINT8[LH]
#define RSENT4BRPH RSENT4.BRP.UINT16[H]
#define RSENT4BRPHL RSENT4.BRP.UINT8[HL]
#define RSENT4BRPHH RSENT4.BRP.UINT8[HH]
#define RSENT4IDE RSENT4.IDE.UINT32
#define RSENT4IDEL RSENT4.IDE.UINT16[L]
#define RSENT4IDELL RSENT4.IDE.UINT8[LL]
#define RSENT4IDELH RSENT4.IDE.UINT8[LH]
#define RSENT4MDC RSENT4.MDC.UINT32
#define RSENT4MDCL RSENT4.MDC.UINT16[L]
#define RSENT4MDCLL RSENT4.MDC.UINT8[LL]
#define RSENT4SPCT RSENT4.SPCT.UINT32
#define RSENT4SPCTL RSENT4.SPCT.UINT16[L]
#define RSENT4SPCTLL RSENT4.SPCT.UINT8[LL]
#define RSENT4MST RSENT4.MST.UINT32
#define RSENT4MSTL RSENT4.MST.UINT16[L]
#define RSENT4MSTLL RSENT4.MST.UINT8[LL]
#define RSENT4CS RSENT4.CS.UINT32
#define RSENT4CSL RSENT4.CS.UINT16[L]
#define RSENT4CSLL RSENT4.CS.UINT8[LL]
#define RSENT4CSLH RSENT4.CS.UINT8[LH]
#define RSENT4CSC RSENT4.CSC.UINT32
#define RSENT4CSCL RSENT4.CSC.UINT16[L]
#define RSENT4CSCLL RSENT4.CSC.UINT8[LL]
#define RSENT4CSCLH RSENT4.CSC.UINT8[LH]
#define RSENT4SRTS RSENT4.SRTS.UINT32
#define RSENT4SRTSL RSENT4.SRTS.UINT16[L]
#define RSENT4SRTSLL RSENT4.SRTS.UINT8[LL]
#define RSENT4SRTSLH RSENT4.SRTS.UINT8[LH]
#define RSENT4SRTSH RSENT4.SRTS.UINT16[H]
#define RSENT4SRTSHL RSENT4.SRTS.UINT8[HL]
#define RSENT4SRTSHH RSENT4.SRTS.UINT8[HH]
#define RSENT4SRXD RSENT4.SRXD
#define RSENT4CPL RSENT4.CPL.UINT32
#define RSENT4CPLL RSENT4.CPL.UINT16[L]
#define RSENT4CPLLL RSENT4.CPL.UINT8[LL]
#define RSENT4CPLLH RSENT4.CPL.UINT8[LH]
#define RSENT4CPLH RSENT4.CPL.UINT16[H]
#define RSENT4CPLHL RSENT4.CPL.UINT8[HL]
#define RSENT4ML RSENT4.ML.UINT32
#define RSENT4MLL RSENT4.ML.UINT16[L]
#define RSENT4MLLL RSENT4.ML.UINT8[LL]
#define RSENT4MLLH RSENT4.ML.UINT8[LH]
#define RSENT4MLH RSENT4.ML.UINT16[H]
#define RSENT4MLHL RSENT4.ML.UINT8[HL]
#define RSENT4FRTS RSENT4.FRTS.UINT32
#define RSENT4FRTSL RSENT4.FRTS.UINT16[L]
#define RSENT4FRTSLL RSENT4.FRTS.UINT8[LL]
#define RSENT4FRTSLH RSENT4.FRTS.UINT8[LH]
#define RSENT4FRTSH RSENT4.FRTS.UINT16[H]
#define RSENT4FRTSHL RSENT4.FRTS.UINT8[HL]
#define RSENT4FRTSHH RSENT4.FRTS.UINT8[HH]
#define RSENT4FRXD RSENT4.FRXD
#define RSENT5TSPC RSENT5.TSPC.UINT32
#define RSENT5TSPCL RSENT5.TSPC.UINT16[L]
#define RSENT5TSPCLL RSENT5.TSPC.UINT8[LL]
#define RSENT5TSPCLH RSENT5.TSPC.UINT8[LH]
#define RSENT5TSPCH RSENT5.TSPC.UINT16[H]
#define RSENT5TSPCHL RSENT5.TSPC.UINT8[HL]
#define RSENT5TSC RSENT5.TSC.UINT32
#define RSENT5TSCL RSENT5.TSC.UINT16[L]
#define RSENT5TSCLL RSENT5.TSC.UINT8[LL]
#define RSENT5TSCLH RSENT5.TSC.UINT8[LH]
#define RSENT5TSCH RSENT5.TSC.UINT16[H]
#define RSENT5TSCHL RSENT5.TSC.UINT8[HL]
#define RSENT5TSCHH RSENT5.TSC.UINT8[HH]
#define RSENT5CC RSENT5.CC.UINT32
#define RSENT5CCL RSENT5.CC.UINT16[L]
#define RSENT5CCLL RSENT5.CC.UINT8[LL]
#define RSENT5CCLH RSENT5.CC.UINT8[LH]
#define RSENT5BRP RSENT5.BRP.UINT32
#define RSENT5BRPL RSENT5.BRP.UINT16[L]
#define RSENT5BRPLL RSENT5.BRP.UINT8[LL]
#define RSENT5BRPLH RSENT5.BRP.UINT8[LH]
#define RSENT5BRPH RSENT5.BRP.UINT16[H]
#define RSENT5BRPHL RSENT5.BRP.UINT8[HL]
#define RSENT5BRPHH RSENT5.BRP.UINT8[HH]
#define RSENT5IDE RSENT5.IDE.UINT32
#define RSENT5IDEL RSENT5.IDE.UINT16[L]
#define RSENT5IDELL RSENT5.IDE.UINT8[LL]
#define RSENT5IDELH RSENT5.IDE.UINT8[LH]
#define RSENT5MDC RSENT5.MDC.UINT32
#define RSENT5MDCL RSENT5.MDC.UINT16[L]
#define RSENT5MDCLL RSENT5.MDC.UINT8[LL]
#define RSENT5SPCT RSENT5.SPCT.UINT32
#define RSENT5SPCTL RSENT5.SPCT.UINT16[L]
#define RSENT5SPCTLL RSENT5.SPCT.UINT8[LL]
#define RSENT5MST RSENT5.MST.UINT32
#define RSENT5MSTL RSENT5.MST.UINT16[L]
#define RSENT5MSTLL RSENT5.MST.UINT8[LL]
#define RSENT5CS RSENT5.CS.UINT32
#define RSENT5CSL RSENT5.CS.UINT16[L]
#define RSENT5CSLL RSENT5.CS.UINT8[LL]
#define RSENT5CSLH RSENT5.CS.UINT8[LH]
#define RSENT5CSC RSENT5.CSC.UINT32
#define RSENT5CSCL RSENT5.CSC.UINT16[L]
#define RSENT5CSCLL RSENT5.CSC.UINT8[LL]
#define RSENT5CSCLH RSENT5.CSC.UINT8[LH]
#define RSENT5SRTS RSENT5.SRTS.UINT32
#define RSENT5SRTSL RSENT5.SRTS.UINT16[L]
#define RSENT5SRTSLL RSENT5.SRTS.UINT8[LL]
#define RSENT5SRTSLH RSENT5.SRTS.UINT8[LH]
#define RSENT5SRTSH RSENT5.SRTS.UINT16[H]
#define RSENT5SRTSHL RSENT5.SRTS.UINT8[HL]
#define RSENT5SRTSHH RSENT5.SRTS.UINT8[HH]
#define RSENT5SRXD RSENT5.SRXD
#define RSENT5CPL RSENT5.CPL.UINT32
#define RSENT5CPLL RSENT5.CPL.UINT16[L]
#define RSENT5CPLLL RSENT5.CPL.UINT8[LL]
#define RSENT5CPLLH RSENT5.CPL.UINT8[LH]
#define RSENT5CPLH RSENT5.CPL.UINT16[H]
#define RSENT5CPLHL RSENT5.CPL.UINT8[HL]
#define RSENT5ML RSENT5.ML.UINT32
#define RSENT5MLL RSENT5.ML.UINT16[L]
#define RSENT5MLLL RSENT5.ML.UINT8[LL]
#define RSENT5MLLH RSENT5.ML.UINT8[LH]
#define RSENT5MLH RSENT5.ML.UINT16[H]
#define RSENT5MLHL RSENT5.ML.UINT8[HL]
#define RSENT5FRTS RSENT5.FRTS.UINT32
#define RSENT5FRTSL RSENT5.FRTS.UINT16[L]
#define RSENT5FRTSLL RSENT5.FRTS.UINT8[LL]
#define RSENT5FRTSLH RSENT5.FRTS.UINT8[LH]
#define RSENT5FRTSH RSENT5.FRTS.UINT16[H]
#define RSENT5FRTSHL RSENT5.FRTS.UINT8[HL]
#define RSENT5FRTSHH RSENT5.FRTS.UINT8[HH]
#define RSENT5FRXD RSENT5.FRXD
#define RSENT6TSPC RSENT6.TSPC
#define SINTR0 SINT.R0
#define SINTR1 SINT.R1
#define SINTR2 SINT.R2
#define MTTCAN0CREL MTTCAN0.CREL.UINT32
#define MTTCAN0CRELL MTTCAN0.CREL.UINT16[L]
#define MTTCAN0CRELLL MTTCAN0.CREL.UINT8[LL]
#define MTTCAN0CRELLH MTTCAN0.CREL.UINT8[LH]
#define MTTCAN0CRELH MTTCAN0.CREL.UINT16[H]
#define MTTCAN0CRELHL MTTCAN0.CREL.UINT8[HL]
#define MTTCAN0CRELHH MTTCAN0.CREL.UINT8[HH]
#define MTTCAN0ENDN MTTCAN0.ENDN.UINT32
#define MTTCAN0ENDNL MTTCAN0.ENDN.UINT16[L]
#define MTTCAN0ENDNLL MTTCAN0.ENDN.UINT8[LL]
#define MTTCAN0ENDNLH MTTCAN0.ENDN.UINT8[LH]
#define MTTCAN0ENDNH MTTCAN0.ENDN.UINT16[H]
#define MTTCAN0ENDNHL MTTCAN0.ENDN.UINT8[HL]
#define MTTCAN0ENDNHH MTTCAN0.ENDN.UINT8[HH]
#define MTTCAN0DBTP MTTCAN0.DBTP.UINT32
#define MTTCAN0FBTP MTTCAN0.DBTP.UINT32
#define MTTCAN0DBTPL MTTCAN0.DBTP.UINT16[L]
#define MTTCAN0FBTPL MTTCAN0.DBTP.UINT16[L]
#define MTTCAN0DBTPLL MTTCAN0.DBTP.UINT8[LL]
#define MTTCAN0FBTPLL MTTCAN0.DBTP.UINT8[LL]
#define MTTCAN0DBTPLH MTTCAN0.DBTP.UINT8[LH]
#define MTTCAN0FBTPLH MTTCAN0.DBTP.UINT8[LH]
#define MTTCAN0DBTPH MTTCAN0.DBTP.UINT16[H]
#define MTTCAN0FBTPH MTTCAN0.DBTP.UINT16[H]
#define MTTCAN0DBTPHL MTTCAN0.DBTP.UINT8[HL]
#define MTTCAN0FBTPHL MTTCAN0.DBTP.UINT8[HL]
#define MTTCAN0DBTPHH MTTCAN0.DBTP.UINT8[HH]
#define MTTCAN0FBTPHH MTTCAN0.DBTP.UINT8[HH]
#define MTTCAN0TEST MTTCAN0.TEST.UINT32
#define MTTCAN0TESTL MTTCAN0.TEST.UINT16[L]
#define MTTCAN0TESTLL MTTCAN0.TEST.UINT8[LL]
#define MTTCAN0TESTLH MTTCAN0.TEST.UINT8[LH]
#define MTTCAN0RWD MTTCAN0.RWD.UINT32
#define MTTCAN0RWDL MTTCAN0.RWD.UINT16[L]
#define MTTCAN0RWDLL MTTCAN0.RWD.UINT8[LL]
#define MTTCAN0RWDLH MTTCAN0.RWD.UINT8[LH]
#define MTTCAN0CCCR MTTCAN0.CCCR.UINT32
#define MTTCAN0CCCRL MTTCAN0.CCCR.UINT16[L]
#define MTTCAN0CCCRLL MTTCAN0.CCCR.UINT8[LL]
#define MTTCAN0CCCRLH MTTCAN0.CCCR.UINT8[LH]
#define MTTCAN0BTP MTTCAN0.BTP.UINT32
#define MTTCAN0NBTP MTTCAN0.BTP.UINT32
#define MTTCAN0BTPL MTTCAN0.BTP.UINT16[L]
#define MTTCAN0NBTPL MTTCAN0.BTP.UINT16[L]
#define MTTCAN0BTPLL MTTCAN0.BTP.UINT8[LL]
#define MTTCAN0NBTPLL MTTCAN0.BTP.UINT8[LL]
#define MTTCAN0BTPLH MTTCAN0.BTP.UINT8[LH]
#define MTTCAN0NBTPLH MTTCAN0.BTP.UINT8[LH]
#define MTTCAN0BTPH MTTCAN0.BTP.UINT16[H]
#define MTTCAN0NBTPH MTTCAN0.BTP.UINT16[H]
#define MTTCAN0BTPHL MTTCAN0.BTP.UINT8[HL]
#define MTTCAN0NBTPHL MTTCAN0.BTP.UINT8[HL]
#define MTTCAN0BTPHH MTTCAN0.BTP.UINT8[HH]
#define MTTCAN0NBTPHH MTTCAN0.BTP.UINT8[HH]
#define MTTCAN0TSCV MTTCAN0.TSCV.UINT32
#define MTTCAN0TSCVL MTTCAN0.TSCV.UINT16[L]
#define MTTCAN0TSCVLL MTTCAN0.TSCV.UINT8[LL]
#define MTTCAN0TSCVLH MTTCAN0.TSCV.UINT8[LH]
#define MTTCAN0TOCC MTTCAN0.TOCC.UINT32
#define MTTCAN0TOCCL MTTCAN0.TOCC.UINT16[L]
#define MTTCAN0TOCCLL MTTCAN0.TOCC.UINT8[LL]
#define MTTCAN0TOCCLH MTTCAN0.TOCC.UINT8[LH]
#define MTTCAN0TOCCH MTTCAN0.TOCC.UINT16[H]
#define MTTCAN0TOCCHL MTTCAN0.TOCC.UINT8[HL]
#define MTTCAN0TOCCHH MTTCAN0.TOCC.UINT8[HH]
#define MTTCAN0TOCV MTTCAN0.TOCV.UINT32
#define MTTCAN0TOCVL MTTCAN0.TOCV.UINT16[L]
#define MTTCAN0TOCVLL MTTCAN0.TOCV.UINT8[LL]
#define MTTCAN0TOCVLH MTTCAN0.TOCV.UINT8[LH]
#define MTTCAN0ECR MTTCAN0.ECR.UINT32
#define MTTCAN0ECRL MTTCAN0.ECR.UINT16[L]
#define MTTCAN0ECRLL MTTCAN0.ECR.UINT8[LL]
#define MTTCAN0ECRLH MTTCAN0.ECR.UINT8[LH]
#define MTTCAN0ECRH MTTCAN0.ECR.UINT16[H]
#define MTTCAN0ECRHL MTTCAN0.ECR.UINT8[HL]
#define MTTCAN0ECRHH MTTCAN0.ECR.UINT8[HH]
#define MTTCAN0PSR MTTCAN0.PSR.UINT32
#define MTTCAN0PSRL MTTCAN0.PSR.UINT16[L]
#define MTTCAN0PSRLL MTTCAN0.PSR.UINT8[LL]
#define MTTCAN0PSRLH MTTCAN0.PSR.UINT8[LH]
#define MTTCAN0TDCR MTTCAN0.TDCR.UINT32
#define MTTCAN0TDCRL MTTCAN0.TDCR.UINT16[L]
#define MTTCAN0TDCRLL MTTCAN0.TDCR.UINT8[LL]
#define MTTCAN0TDCRLH MTTCAN0.TDCR.UINT8[LH]
#define MTTCAN0IR MTTCAN0.IR.UINT32
#define MTTCAN0IRL MTTCAN0.IR.UINT16[L]
#define MTTCAN0IRLL MTTCAN0.IR.UINT8[LL]
#define MTTCAN0IRLH MTTCAN0.IR.UINT8[LH]
#define MTTCAN0IRH MTTCAN0.IR.UINT16[H]
#define MTTCAN0IRHL MTTCAN0.IR.UINT8[HL]
#define MTTCAN0IRHH MTTCAN0.IR.UINT8[HH]
#define MTTCAN0IE MTTCAN0.IE.UINT32
#define MTTCAN0IEL MTTCAN0.IE.UINT16[L]
#define MTTCAN0IELL MTTCAN0.IE.UINT8[LL]
#define MTTCAN0IELH MTTCAN0.IE.UINT8[LH]
#define MTTCAN0IEH MTTCAN0.IE.UINT16[H]
#define MTTCAN0IEHL MTTCAN0.IE.UINT8[HL]
#define MTTCAN0IEHH MTTCAN0.IE.UINT8[HH]
#define MTTCAN0ILS MTTCAN0.ILS.UINT32
#define MTTCAN0ILSL MTTCAN0.ILS.UINT16[L]
#define MTTCAN0ILSLL MTTCAN0.ILS.UINT8[LL]
#define MTTCAN0ILSLH MTTCAN0.ILS.UINT8[LH]
#define MTTCAN0ILSH MTTCAN0.ILS.UINT16[H]
#define MTTCAN0ILSHL MTTCAN0.ILS.UINT8[HL]
#define MTTCAN0ILSHH MTTCAN0.ILS.UINT8[HH]
#define MTTCAN0ILE MTTCAN0.ILE.UINT32
#define MTTCAN0ILEL MTTCAN0.ILE.UINT16[L]
#define MTTCAN0ILELL MTTCAN0.ILE.UINT8[LL]
#define MTTCAN0ILELH MTTCAN0.ILE.UINT8[LH]
#define MTTCAN0GFC MTTCAN0.GFC.UINT32
#define MTTCAN0GFCL MTTCAN0.GFC.UINT16[L]
#define MTTCAN0GFCLL MTTCAN0.GFC.UINT8[LL]
#define MTTCAN0GFCLH MTTCAN0.GFC.UINT8[LH]
#define MTTCAN0SIDFC MTTCAN0.SIDFC.UINT32
#define MTTCAN0SIDFCL MTTCAN0.SIDFC.UINT16[L]
#define MTTCAN0SIDFCLL MTTCAN0.SIDFC.UINT8[LL]
#define MTTCAN0SIDFCLH MTTCAN0.SIDFC.UINT8[LH]
#define MTTCAN0SIDFCH MTTCAN0.SIDFC.UINT16[H]
#define MTTCAN0SIDFCHL MTTCAN0.SIDFC.UINT8[HL]
#define MTTCAN0SIDFCHH MTTCAN0.SIDFC.UINT8[HH]
#define MTTCAN0XIDFC MTTCAN0.XIDFC.UINT32
#define MTTCAN0XIDFCL MTTCAN0.XIDFC.UINT16[L]
#define MTTCAN0XIDFCLL MTTCAN0.XIDFC.UINT8[LL]
#define MTTCAN0XIDFCLH MTTCAN0.XIDFC.UINT8[LH]
#define MTTCAN0XIDFCH MTTCAN0.XIDFC.UINT16[H]
#define MTTCAN0XIDFCHL MTTCAN0.XIDFC.UINT8[HL]
#define MTTCAN0XIDFCHH MTTCAN0.XIDFC.UINT8[HH]
#define MTTCAN0XIDAM MTTCAN0.XIDAM.UINT32
#define MTTCAN0XIDAML MTTCAN0.XIDAM.UINT16[L]
#define MTTCAN0XIDAMLL MTTCAN0.XIDAM.UINT8[LL]
#define MTTCAN0XIDAMLH MTTCAN0.XIDAM.UINT8[LH]
#define MTTCAN0XIDAMH MTTCAN0.XIDAM.UINT16[H]
#define MTTCAN0XIDAMHL MTTCAN0.XIDAM.UINT8[HL]
#define MTTCAN0XIDAMHH MTTCAN0.XIDAM.UINT8[HH]
#define MTTCAN0HPMS MTTCAN0.HPMS.UINT32
#define MTTCAN0HPMSL MTTCAN0.HPMS.UINT16[L]
#define MTTCAN0HPMSLL MTTCAN0.HPMS.UINT8[LL]
#define MTTCAN0HPMSLH MTTCAN0.HPMS.UINT8[LH]
#define MTTCAN0NDAT1 MTTCAN0.NDAT1.UINT32
#define MTTCAN0NDAT1L MTTCAN0.NDAT1.UINT16[L]
#define MTTCAN0NDAT1LL MTTCAN0.NDAT1.UINT8[LL]
#define MTTCAN0NDAT1LH MTTCAN0.NDAT1.UINT8[LH]
#define MTTCAN0NDAT1H MTTCAN0.NDAT1.UINT16[H]
#define MTTCAN0NDAT1HL MTTCAN0.NDAT1.UINT8[HL]
#define MTTCAN0NDAT1HH MTTCAN0.NDAT1.UINT8[HH]
#define MTTCAN0NDAT2 MTTCAN0.NDAT2.UINT32
#define MTTCAN0NDAT2L MTTCAN0.NDAT2.UINT16[L]
#define MTTCAN0NDAT2LL MTTCAN0.NDAT2.UINT8[LL]
#define MTTCAN0NDAT2LH MTTCAN0.NDAT2.UINT8[LH]
#define MTTCAN0NDAT2H MTTCAN0.NDAT2.UINT16[H]
#define MTTCAN0NDAT2HL MTTCAN0.NDAT2.UINT8[HL]
#define MTTCAN0NDAT2HH MTTCAN0.NDAT2.UINT8[HH]
#define MTTCAN0RXF0C MTTCAN0.RXF0C.UINT32
#define MTTCAN0RXF0CL MTTCAN0.RXF0C.UINT16[L]
#define MTTCAN0RXF0CLL MTTCAN0.RXF0C.UINT8[LL]
#define MTTCAN0RXF0CLH MTTCAN0.RXF0C.UINT8[LH]
#define MTTCAN0RXF0CH MTTCAN0.RXF0C.UINT16[H]
#define MTTCAN0RXF0CHL MTTCAN0.RXF0C.UINT8[HL]
#define MTTCAN0RXF0CHH MTTCAN0.RXF0C.UINT8[HH]
#define MTTCAN0RXF0S MTTCAN0.RXF0S.UINT32
#define MTTCAN0RXF0SL MTTCAN0.RXF0S.UINT16[L]
#define MTTCAN0RXF0SLL MTTCAN0.RXF0S.UINT8[LL]
#define MTTCAN0RXF0SLH MTTCAN0.RXF0S.UINT8[LH]
#define MTTCAN0RXF0SH MTTCAN0.RXF0S.UINT16[H]
#define MTTCAN0RXF0SHL MTTCAN0.RXF0S.UINT8[HL]
#define MTTCAN0RXF0SHH MTTCAN0.RXF0S.UINT8[HH]
#define MTTCAN0RXF0A MTTCAN0.RXF0A.UINT32
#define MTTCAN0RXF0AL MTTCAN0.RXF0A.UINT16[L]
#define MTTCAN0RXF0ALL MTTCAN0.RXF0A.UINT8[LL]
#define MTTCAN0RXF0ALH MTTCAN0.RXF0A.UINT8[LH]
#define MTTCAN0RXBC MTTCAN0.RXBC.UINT32
#define MTTCAN0RXBCL MTTCAN0.RXBC.UINT16[L]
#define MTTCAN0RXBCLL MTTCAN0.RXBC.UINT8[LL]
#define MTTCAN0RXBCLH MTTCAN0.RXBC.UINT8[LH]
#define MTTCAN0RXF1C MTTCAN0.RXF1C.UINT32
#define MTTCAN0RXF1CL MTTCAN0.RXF1C.UINT16[L]
#define MTTCAN0RXF1CLL MTTCAN0.RXF1C.UINT8[LL]
#define MTTCAN0RXF1CLH MTTCAN0.RXF1C.UINT8[LH]
#define MTTCAN0RXF1CH MTTCAN0.RXF1C.UINT16[H]
#define MTTCAN0RXF1CHL MTTCAN0.RXF1C.UINT8[HL]
#define MTTCAN0RXF1CHH MTTCAN0.RXF1C.UINT8[HH]
#define MTTCAN0RXF1S MTTCAN0.RXF1S.UINT32
#define MTTCAN0RXF1SL MTTCAN0.RXF1S.UINT16[L]
#define MTTCAN0RXF1SLL MTTCAN0.RXF1S.UINT8[LL]
#define MTTCAN0RXF1SLH MTTCAN0.RXF1S.UINT8[LH]
#define MTTCAN0RXF1SH MTTCAN0.RXF1S.UINT16[H]
#define MTTCAN0RXF1SHL MTTCAN0.RXF1S.UINT8[HL]
#define MTTCAN0RXF1SHH MTTCAN0.RXF1S.UINT8[HH]
#define MTTCAN0RXF1A MTTCAN0.RXF1A.UINT32
#define MTTCAN0RXF1AL MTTCAN0.RXF1A.UINT16[L]
#define MTTCAN0RXF1ALL MTTCAN0.RXF1A.UINT8[LL]
#define MTTCAN0RXF1ALH MTTCAN0.RXF1A.UINT8[LH]
#define MTTCAN0RXESC MTTCAN0.RXESC.UINT32
#define MTTCAN0RXESCL MTTCAN0.RXESC.UINT16[L]
#define MTTCAN0RXESCLL MTTCAN0.RXESC.UINT8[LL]
#define MTTCAN0RXESCLH MTTCAN0.RXESC.UINT8[LH]
#define MTTCAN0TXBC MTTCAN0.TXBC.UINT32
#define MTTCAN0TXBCL MTTCAN0.TXBC.UINT16[L]
#define MTTCAN0TXBCLL MTTCAN0.TXBC.UINT8[LL]
#define MTTCAN0TXBCLH MTTCAN0.TXBC.UINT8[LH]
#define MTTCAN0TXBCH MTTCAN0.TXBC.UINT16[H]
#define MTTCAN0TXBCHL MTTCAN0.TXBC.UINT8[HL]
#define MTTCAN0TXBCHH MTTCAN0.TXBC.UINT8[HH]
#define MTTCAN0TXFQS MTTCAN0.TXFQS.UINT32
#define MTTCAN0TXFQSL MTTCAN0.TXFQS.UINT16[L]
#define MTTCAN0TXFQSLL MTTCAN0.TXFQS.UINT8[LL]
#define MTTCAN0TXFQSLH MTTCAN0.TXFQS.UINT8[LH]
#define MTTCAN0TXFQSH MTTCAN0.TXFQS.UINT16[H]
#define MTTCAN0TXFQSHL MTTCAN0.TXFQS.UINT8[HL]
#define MTTCAN0TXFQSHH MTTCAN0.TXFQS.UINT8[HH]
#define MTTCAN0TXESC MTTCAN0.TXESC.UINT32
#define MTTCAN0TXESCL MTTCAN0.TXESC.UINT16[L]
#define MTTCAN0TXESCLL MTTCAN0.TXESC.UINT8[LL]
#define MTTCAN0TXESCLH MTTCAN0.TXESC.UINT8[LH]
#define MTTCAN0TXBRP MTTCAN0.TXBRP.UINT32
#define MTTCAN0TXBRPL MTTCAN0.TXBRP.UINT16[L]
#define MTTCAN0TXBRPLL MTTCAN0.TXBRP.UINT8[LL]
#define MTTCAN0TXBRPLH MTTCAN0.TXBRP.UINT8[LH]
#define MTTCAN0TXBRPH MTTCAN0.TXBRP.UINT16[H]
#define MTTCAN0TXBRPHL MTTCAN0.TXBRP.UINT8[HL]
#define MTTCAN0TXBRPHH MTTCAN0.TXBRP.UINT8[HH]
#define MTTCAN0TXBAR MTTCAN0.TXBAR.UINT32
#define MTTCAN0TXBARL MTTCAN0.TXBAR.UINT16[L]
#define MTTCAN0TXBARLL MTTCAN0.TXBAR.UINT8[LL]
#define MTTCAN0TXBARLH MTTCAN0.TXBAR.UINT8[LH]
#define MTTCAN0TXBARH MTTCAN0.TXBAR.UINT16[H]
#define MTTCAN0TXBARHL MTTCAN0.TXBAR.UINT8[HL]
#define MTTCAN0TXBARHH MTTCAN0.TXBAR.UINT8[HH]
#define MTTCAN0TXBCR MTTCAN0.TXBCR.UINT32
#define MTTCAN0TXBCRL MTTCAN0.TXBCR.UINT16[L]
#define MTTCAN0TXBCRLL MTTCAN0.TXBCR.UINT8[LL]
#define MTTCAN0TXBCRLH MTTCAN0.TXBCR.UINT8[LH]
#define MTTCAN0TXBCRH MTTCAN0.TXBCR.UINT16[H]
#define MTTCAN0TXBCRHL MTTCAN0.TXBCR.UINT8[HL]
#define MTTCAN0TXBCRHH MTTCAN0.TXBCR.UINT8[HH]
#define MTTCAN0TXBTO MTTCAN0.TXBTO.UINT32
#define MTTCAN0TXBTOL MTTCAN0.TXBTO.UINT16[L]
#define MTTCAN0TXBTOLL MTTCAN0.TXBTO.UINT8[LL]
#define MTTCAN0TXBTOLH MTTCAN0.TXBTO.UINT8[LH]
#define MTTCAN0TXBTOH MTTCAN0.TXBTO.UINT16[H]
#define MTTCAN0TXBTOHL MTTCAN0.TXBTO.UINT8[HL]
#define MTTCAN0TXBTOHH MTTCAN0.TXBTO.UINT8[HH]
#define MTTCAN0TXBCF MTTCAN0.TXBCF.UINT32
#define MTTCAN0TXBCFL MTTCAN0.TXBCF.UINT16[L]
#define MTTCAN0TXBCFLL MTTCAN0.TXBCF.UINT8[LL]
#define MTTCAN0TXBCFLH MTTCAN0.TXBCF.UINT8[LH]
#define MTTCAN0TXBCFH MTTCAN0.TXBCF.UINT16[H]
#define MTTCAN0TXBCFHL MTTCAN0.TXBCF.UINT8[HL]
#define MTTCAN0TXBCFHH MTTCAN0.TXBCF.UINT8[HH]
#define MTTCAN0TXBTIE MTTCAN0.TXBTIE.UINT32
#define MTTCAN0TXBTIEL MTTCAN0.TXBTIE.UINT16[L]
#define MTTCAN0TXBTIELL MTTCAN0.TXBTIE.UINT8[LL]
#define MTTCAN0TXBTIELH MTTCAN0.TXBTIE.UINT8[LH]
#define MTTCAN0TXBTIEH MTTCAN0.TXBTIE.UINT16[H]
#define MTTCAN0TXBTIEHL MTTCAN0.TXBTIE.UINT8[HL]
#define MTTCAN0TXBTIEHH MTTCAN0.TXBTIE.UINT8[HH]
#define MTTCAN0TXBCIE MTTCAN0.TXBCIE.UINT32
#define MTTCAN0TXBCIEL MTTCAN0.TXBCIE.UINT16[L]
#define MTTCAN0TXBCIELL MTTCAN0.TXBCIE.UINT8[LL]
#define MTTCAN0TXBCIELH MTTCAN0.TXBCIE.UINT8[LH]
#define MTTCAN0TXBCIEH MTTCAN0.TXBCIE.UINT16[H]
#define MTTCAN0TXBCIEHL MTTCAN0.TXBCIE.UINT8[HL]
#define MTTCAN0TXBCIEHH MTTCAN0.TXBCIE.UINT8[HH]
#define MTTCAN0TXEFC MTTCAN0.TXEFC.UINT32
#define MTTCAN0TXEFCL MTTCAN0.TXEFC.UINT16[L]
#define MTTCAN0TXEFCLL MTTCAN0.TXEFC.UINT8[LL]
#define MTTCAN0TXEFCLH MTTCAN0.TXEFC.UINT8[LH]
#define MTTCAN0TXEFCH MTTCAN0.TXEFC.UINT16[H]
#define MTTCAN0TXEFCHL MTTCAN0.TXEFC.UINT8[HL]
#define MTTCAN0TXEFCHH MTTCAN0.TXEFC.UINT8[HH]
#define MTTCAN0TXEFS MTTCAN0.TXEFS.UINT32
#define MTTCAN0TXEFSL MTTCAN0.TXEFS.UINT16[L]
#define MTTCAN0TXEFSLL MTTCAN0.TXEFS.UINT8[LL]
#define MTTCAN0TXEFSLH MTTCAN0.TXEFS.UINT8[LH]
#define MTTCAN0TXEFSH MTTCAN0.TXEFS.UINT16[H]
#define MTTCAN0TXEFSHL MTTCAN0.TXEFS.UINT8[HL]
#define MTTCAN0TXEFSHH MTTCAN0.TXEFS.UINT8[HH]
#define MTTCAN0TXEFA MTTCAN0.TXEFA.UINT32
#define MTTCAN0TXEFAL MTTCAN0.TXEFA.UINT16[L]
#define MTTCAN0TXEFALL MTTCAN0.TXEFA.UINT8[LL]
#define MTTCAN0TXEFALH MTTCAN0.TXEFA.UINT8[LH]
#define MTTCAN0TTTMC MTTCAN0.TTTMC.UINT32
#define MTTCAN0TTTMCL MTTCAN0.TTTMC.UINT16[L]
#define MTTCAN0TTTMCLL MTTCAN0.TTTMC.UINT8[LL]
#define MTTCAN0TTTMCLH MTTCAN0.TTTMC.UINT8[LH]
#define MTTCAN0TTTMCH MTTCAN0.TTTMC.UINT16[H]
#define MTTCAN0TTTMCHL MTTCAN0.TTTMC.UINT8[HL]
#define MTTCAN0TTTMCHH MTTCAN0.TTTMC.UINT8[HH]
#define MTTCAN0TTRMC MTTCAN0.TTRMC.UINT32
#define MTTCAN0TTRMCL MTTCAN0.TTRMC.UINT16[L]
#define MTTCAN0TTRMCLL MTTCAN0.TTRMC.UINT8[LL]
#define MTTCAN0TTRMCLH MTTCAN0.TTRMC.UINT8[LH]
#define MTTCAN0TTRMCH MTTCAN0.TTRMC.UINT16[H]
#define MTTCAN0TTRMCHL MTTCAN0.TTRMC.UINT8[HL]
#define MTTCAN0TTRMCHH MTTCAN0.TTRMC.UINT8[HH]
#define MTTCAN0TTOCF MTTCAN0.TTOCF.UINT32
#define MTTCAN0TTOCFL MTTCAN0.TTOCF.UINT16[L]
#define MTTCAN0TTOCFLL MTTCAN0.TTOCF.UINT8[LL]
#define MTTCAN0TTOCFLH MTTCAN0.TTOCF.UINT8[LH]
#define MTTCAN0TTOCFH MTTCAN0.TTOCF.UINT16[H]
#define MTTCAN0TTOCFHL MTTCAN0.TTOCF.UINT8[HL]
#define MTTCAN0TTOCFHH MTTCAN0.TTOCF.UINT8[HH]
#define MTTCAN0TTMLM MTTCAN0.TTMLM.UINT32
#define MTTCAN0TTMLML MTTCAN0.TTMLM.UINT16[L]
#define MTTCAN0TTMLMLL MTTCAN0.TTMLM.UINT8[LL]
#define MTTCAN0TTMLMLH MTTCAN0.TTMLM.UINT8[LH]
#define MTTCAN0TTMLMH MTTCAN0.TTMLM.UINT16[H]
#define MTTCAN0TTMLMHL MTTCAN0.TTMLM.UINT8[HL]
#define MTTCAN0TTMLMHH MTTCAN0.TTMLM.UINT8[HH]
#define MTTCAN0TURCF MTTCAN0.TURCF.UINT32
#define MTTCAN0TURCFL MTTCAN0.TURCF.UINT16[L]
#define MTTCAN0TURCFLL MTTCAN0.TURCF.UINT8[LL]
#define MTTCAN0TURCFLH MTTCAN0.TURCF.UINT8[LH]
#define MTTCAN0TURCFH MTTCAN0.TURCF.UINT16[H]
#define MTTCAN0TURCFHL MTTCAN0.TURCF.UINT8[HL]
#define MTTCAN0TURCFHH MTTCAN0.TURCF.UINT8[HH]
#define MTTCAN0TTOCN MTTCAN0.TTOCN.UINT32
#define MTTCAN0TTOCNL MTTCAN0.TTOCN.UINT16[L]
#define MTTCAN0TTOCNLL MTTCAN0.TTOCN.UINT8[LL]
#define MTTCAN0TTOCNLH MTTCAN0.TTOCN.UINT8[LH]
#define MTTCAN0TTGTP MTTCAN0.TTGTP.UINT32
#define MTTCAN0TTGTPL MTTCAN0.TTGTP.UINT16[L]
#define MTTCAN0TTGTPLL MTTCAN0.TTGTP.UINT8[LL]
#define MTTCAN0TTGTPLH MTTCAN0.TTGTP.UINT8[LH]
#define MTTCAN0TTGTPH MTTCAN0.TTGTP.UINT16[H]
#define MTTCAN0TTGTPHL MTTCAN0.TTGTP.UINT8[HL]
#define MTTCAN0TTGTPHH MTTCAN0.TTGTP.UINT8[HH]
#define MTTCAN0TTTMK MTTCAN0.TTTMK.UINT32
#define MTTCAN0TTTMKL MTTCAN0.TTTMK.UINT16[L]
#define MTTCAN0TTTMKLL MTTCAN0.TTTMK.UINT8[LL]
#define MTTCAN0TTTMKLH MTTCAN0.TTTMK.UINT8[LH]
#define MTTCAN0TTTMKH MTTCAN0.TTTMK.UINT16[H]
#define MTTCAN0TTTMKHL MTTCAN0.TTTMK.UINT8[HL]
#define MTTCAN0TTTMKHH MTTCAN0.TTTMK.UINT8[HH]
#define MTTCAN0TTIR MTTCAN0.TTIR.UINT32
#define MTTCAN0TTIRL MTTCAN0.TTIR.UINT16[L]
#define MTTCAN0TTIRLL MTTCAN0.TTIR.UINT8[LL]
#define MTTCAN0TTIRLH MTTCAN0.TTIR.UINT8[LH]
#define MTTCAN0TTIRH MTTCAN0.TTIR.UINT16[H]
#define MTTCAN0TTIRHL MTTCAN0.TTIR.UINT8[HL]
#define MTTCAN0TTIRHH MTTCAN0.TTIR.UINT8[HH]
#define MTTCAN0TTIE MTTCAN0.TTIE.UINT32
#define MTTCAN0TTIEL MTTCAN0.TTIE.UINT16[L]
#define MTTCAN0TTIELL MTTCAN0.TTIE.UINT8[LL]
#define MTTCAN0TTIELH MTTCAN0.TTIE.UINT8[LH]
#define MTTCAN0TTIEH MTTCAN0.TTIE.UINT16[H]
#define MTTCAN0TTIEHL MTTCAN0.TTIE.UINT8[HL]
#define MTTCAN0TTIEHH MTTCAN0.TTIE.UINT8[HH]
#define MTTCAN0TTILS MTTCAN0.TTILS.UINT32
#define MTTCAN0TTILSL MTTCAN0.TTILS.UINT16[L]
#define MTTCAN0TTILSLL MTTCAN0.TTILS.UINT8[LL]
#define MTTCAN0TTILSLH MTTCAN0.TTILS.UINT8[LH]
#define MTTCAN0TTILSH MTTCAN0.TTILS.UINT16[H]
#define MTTCAN0TTILSHL MTTCAN0.TTILS.UINT8[HL]
#define MTTCAN0TTILSHH MTTCAN0.TTILS.UINT8[HH]
#define MTTCAN0TTOST MTTCAN0.TTOST.UINT32
#define MTTCAN0TTOSTL MTTCAN0.TTOST.UINT16[L]
#define MTTCAN0TTOSTLL MTTCAN0.TTOST.UINT8[LL]
#define MTTCAN0TTOSTLH MTTCAN0.TTOST.UINT8[LH]
#define MTTCAN0TTOSTH MTTCAN0.TTOST.UINT16[H]
#define MTTCAN0TTOSTHL MTTCAN0.TTOST.UINT8[HL]
#define MTTCAN0TTOSTHH MTTCAN0.TTOST.UINT8[HH]
#define MTTCAN0TURNA MTTCAN0.TURNA.UINT32
#define MTTCAN0TURNAL MTTCAN0.TURNA.UINT16[L]
#define MTTCAN0TURNALL MTTCAN0.TURNA.UINT8[LL]
#define MTTCAN0TURNALH MTTCAN0.TURNA.UINT8[LH]
#define MTTCAN0TURNAH MTTCAN0.TURNA.UINT16[H]
#define MTTCAN0TURNAHL MTTCAN0.TURNA.UINT8[HL]
#define MTTCAN0TURNAHH MTTCAN0.TURNA.UINT8[HH]
#define MTTCAN0TTLGT MTTCAN0.TTLGT.UINT32
#define MTTCAN0TTLGTL MTTCAN0.TTLGT.UINT16[L]
#define MTTCAN0TTLGTLL MTTCAN0.TTLGT.UINT8[LL]
#define MTTCAN0TTLGTLH MTTCAN0.TTLGT.UINT8[LH]
#define MTTCAN0TTLGTH MTTCAN0.TTLGT.UINT16[H]
#define MTTCAN0TTLGTHL MTTCAN0.TTLGT.UINT8[HL]
#define MTTCAN0TTLGTHH MTTCAN0.TTLGT.UINT8[HH]
#define MTTCAN0TTCTC MTTCAN0.TTCTC.UINT32
#define MTTCAN0TTCTCL MTTCAN0.TTCTC.UINT16[L]
#define MTTCAN0TTCTCLL MTTCAN0.TTCTC.UINT8[LL]
#define MTTCAN0TTCTCLH MTTCAN0.TTCTC.UINT8[LH]
#define MTTCAN0TTCTCH MTTCAN0.TTCTC.UINT16[H]
#define MTTCAN0TTCTCHL MTTCAN0.TTCTC.UINT8[HL]
#define MTTCAN0TTCTCHH MTTCAN0.TTCTC.UINT8[HH]
#define MTTCAN0TTCPT MTTCAN0.TTCPT.UINT32
#define MTTCAN0TTCPTL MTTCAN0.TTCPT.UINT16[L]
#define MTTCAN0TTCPTLL MTTCAN0.TTCPT.UINT8[LL]
#define MTTCAN0TTCPTLH MTTCAN0.TTCPT.UINT8[LH]
#define MTTCAN0TTCPTH MTTCAN0.TTCPT.UINT16[H]
#define MTTCAN0TTCPTHL MTTCAN0.TTCPT.UINT8[HL]
#define MTTCAN0TTCPTHH MTTCAN0.TTCPT.UINT8[HH]
#define MTTCAN0TTCSM MTTCAN0.TTCSM.UINT32
#define MTTCAN0TTCSML MTTCAN0.TTCSM.UINT16[L]
#define MTTCAN0TTCSMLL MTTCAN0.TTCSM.UINT8[LL]
#define MTTCAN0TTCSMLH MTTCAN0.TTCSM.UINT8[LH]
#define MCAN1CREL MCAN1.CREL.UINT32
#define MCAN1CRELL MCAN1.CREL.UINT16[L]
#define MCAN1CRELLL MCAN1.CREL.UINT8[LL]
#define MCAN1CRELLH MCAN1.CREL.UINT8[LH]
#define MCAN1CRELH MCAN1.CREL.UINT16[H]
#define MCAN1CRELHL MCAN1.CREL.UINT8[HL]
#define MCAN1CRELHH MCAN1.CREL.UINT8[HH]
#define MCAN1ENDN MCAN1.ENDN.UINT32
#define MCAN1ENDNL MCAN1.ENDN.UINT16[L]
#define MCAN1ENDNLL MCAN1.ENDN.UINT8[LL]
#define MCAN1ENDNLH MCAN1.ENDN.UINT8[LH]
#define MCAN1ENDNH MCAN1.ENDN.UINT16[H]
#define MCAN1ENDNHL MCAN1.ENDN.UINT8[HL]
#define MCAN1ENDNHH MCAN1.ENDN.UINT8[HH]
#define MCAN1DBTP MCAN1.DBTP.UINT32
#define MCAN1FBTP MCAN1.DBTP.UINT32
#define MCAN1DBTPL MCAN1.DBTP.UINT16[L]
#define MCAN1FBTPL MCAN1.DBTP.UINT16[L]
#define MCAN1DBTPLL MCAN1.DBTP.UINT8[LL]
#define MCAN1FBTPLL MCAN1.DBTP.UINT8[LL]
#define MCAN1DBTPLH MCAN1.DBTP.UINT8[LH]
#define MCAN1FBTPLH MCAN1.DBTP.UINT8[LH]
#define MCAN1DBTPH MCAN1.DBTP.UINT16[H]
#define MCAN1FBTPH MCAN1.DBTP.UINT16[H]
#define MCAN1DBTPHL MCAN1.DBTP.UINT8[HL]
#define MCAN1FBTPHL MCAN1.DBTP.UINT8[HL]
#define MCAN1DBTPHH MCAN1.DBTP.UINT8[HH]
#define MCAN1FBTPHH MCAN1.DBTP.UINT8[HH]
#define MCAN1RWD MCAN1.RWD.UINT32
#define MCAN1RWDL MCAN1.RWD.UINT16[L]
#define MCAN1RWDLL MCAN1.RWD.UINT8[LL]
#define MCAN1RWDLH MCAN1.RWD.UINT8[LH]
#define MCAN1CCCR MCAN1.CCCR.UINT32
#define MCAN1CCCRL MCAN1.CCCR.UINT16[L]
#define MCAN1CCCRLL MCAN1.CCCR.UINT8[LL]
#define MCAN1CCCRLH MCAN1.CCCR.UINT8[LH]
#define MCAN1BTP MCAN1.BTP.UINT32
#define MCAN1NBTP MCAN1.BTP.UINT32
#define MCAN1BTPL MCAN1.BTP.UINT16[L]
#define MCAN1NBTPL MCAN1.BTP.UINT16[L]
#define MCAN1BTPLL MCAN1.BTP.UINT8[LL]
#define MCAN1NBTPLL MCAN1.BTP.UINT8[LL]
#define MCAN1BTPLH MCAN1.BTP.UINT8[LH]
#define MCAN1NBTPLH MCAN1.BTP.UINT8[LH]
#define MCAN1BTPH MCAN1.BTP.UINT16[H]
#define MCAN1NBTPH MCAN1.BTP.UINT16[H]
#define MCAN1BTPHL MCAN1.BTP.UINT8[HL]
#define MCAN1NBTPHL MCAN1.BTP.UINT8[HL]
#define MCAN1BTPHH MCAN1.BTP.UINT8[HH]
#define MCAN1NBTPHH MCAN1.BTP.UINT8[HH]
#define MCAN1TSCC MCAN1.TSCC.UINT32
#define MCAN1TSCCL MCAN1.TSCC.UINT16[L]
#define MCAN1TSCCLL MCAN1.TSCC.UINT8[LL]
#define MCAN1TSCCLH MCAN1.TSCC.UINT8[LH]
#define MCAN1TSCCH MCAN1.TSCC.UINT16[H]
#define MCAN1TSCCHL MCAN1.TSCC.UINT8[HL]
#define MCAN1TSCCHH MCAN1.TSCC.UINT8[HH]
#define MCAN1TSCV MCAN1.TSCV.UINT32
#define MCAN1TSCVL MCAN1.TSCV.UINT16[L]
#define MCAN1TSCVLL MCAN1.TSCV.UINT8[LL]
#define MCAN1TSCVLH MCAN1.TSCV.UINT8[LH]
#define MCAN1TOCC MCAN1.TOCC.UINT32
#define MCAN1TOCCL MCAN1.TOCC.UINT16[L]
#define MCAN1TOCCLL MCAN1.TOCC.UINT8[LL]
#define MCAN1TOCCLH MCAN1.TOCC.UINT8[LH]
#define MCAN1TOCCH MCAN1.TOCC.UINT16[H]
#define MCAN1TOCCHL MCAN1.TOCC.UINT8[HL]
#define MCAN1TOCCHH MCAN1.TOCC.UINT8[HH]
#define MCAN1TOCV MCAN1.TOCV.UINT32
#define MCAN1TOCVL MCAN1.TOCV.UINT16[L]
#define MCAN1TOCVLL MCAN1.TOCV.UINT8[LL]
#define MCAN1TOCVLH MCAN1.TOCV.UINT8[LH]
#define MCAN1ECR MCAN1.ECR.UINT32
#define MCAN1ECRL MCAN1.ECR.UINT16[L]
#define MCAN1ECRLL MCAN1.ECR.UINT8[LL]
#define MCAN1ECRLH MCAN1.ECR.UINT8[LH]
#define MCAN1ECRH MCAN1.ECR.UINT16[H]
#define MCAN1ECRHL MCAN1.ECR.UINT8[HL]
#define MCAN1ECRHH MCAN1.ECR.UINT8[HH]
#define MCAN1PSR MCAN1.PSR.UINT32
#define MCAN1PSRL MCAN1.PSR.UINT16[L]
#define MCAN1PSRLL MCAN1.PSR.UINT8[LL]
#define MCAN1PSRLH MCAN1.PSR.UINT8[LH]
#define MCAN1TDCR MCAN1.TDCR.UINT32
#define MCAN1TDCRL MCAN1.TDCR.UINT16[L]
#define MCAN1TDCRLL MCAN1.TDCR.UINT8[LL]
#define MCAN1TDCRLH MCAN1.TDCR.UINT8[LH]
#define MCAN1IR MCAN1.IR.UINT32
#define MCAN1IRL MCAN1.IR.UINT16[L]
#define MCAN1IRLL MCAN1.IR.UINT8[LL]
#define MCAN1IRLH MCAN1.IR.UINT8[LH]
#define MCAN1IRH MCAN1.IR.UINT16[H]
#define MCAN1IRHL MCAN1.IR.UINT8[HL]
#define MCAN1IRHH MCAN1.IR.UINT8[HH]
#define MCAN1IE MCAN1.IE.UINT32
#define MCAN1IEL MCAN1.IE.UINT16[L]
#define MCAN1IELL MCAN1.IE.UINT8[LL]
#define MCAN1IELH MCAN1.IE.UINT8[LH]
#define MCAN1IEH MCAN1.IE.UINT16[H]
#define MCAN1IEHL MCAN1.IE.UINT8[HL]
#define MCAN1IEHH MCAN1.IE.UINT8[HH]
#define MCAN1ILS MCAN1.ILS.UINT32
#define MCAN1ILSL MCAN1.ILS.UINT16[L]
#define MCAN1ILSLL MCAN1.ILS.UINT8[LL]
#define MCAN1ILSLH MCAN1.ILS.UINT8[LH]
#define MCAN1ILSH MCAN1.ILS.UINT16[H]
#define MCAN1ILSHL MCAN1.ILS.UINT8[HL]
#define MCAN1ILSHH MCAN1.ILS.UINT8[HH]
#define MCAN1ILE MCAN1.ILE.UINT32
#define MCAN1ILEL MCAN1.ILE.UINT16[L]
#define MCAN1ILELL MCAN1.ILE.UINT8[LL]
#define MCAN1ILELH MCAN1.ILE.UINT8[LH]
#define MCAN1GFC MCAN1.GFC.UINT32
#define MCAN1GFCL MCAN1.GFC.UINT16[L]
#define MCAN1GFCLL MCAN1.GFC.UINT8[LL]
#define MCAN1GFCLH MCAN1.GFC.UINT8[LH]
#define MCAN1SIDFC MCAN1.SIDFC.UINT32
#define MCAN1SIDFCL MCAN1.SIDFC.UINT16[L]
#define MCAN1SIDFCLL MCAN1.SIDFC.UINT8[LL]
#define MCAN1SIDFCLH MCAN1.SIDFC.UINT8[LH]
#define MCAN1SIDFCH MCAN1.SIDFC.UINT16[H]
#define MCAN1SIDFCHL MCAN1.SIDFC.UINT8[HL]
#define MCAN1SIDFCHH MCAN1.SIDFC.UINT8[HH]
#define MCAN1XIDFC MCAN1.XIDFC.UINT32
#define MCAN1XIDFCL MCAN1.XIDFC.UINT16[L]
#define MCAN1XIDFCLL MCAN1.XIDFC.UINT8[LL]
#define MCAN1XIDFCLH MCAN1.XIDFC.UINT8[LH]
#define MCAN1XIDFCH MCAN1.XIDFC.UINT16[H]
#define MCAN1XIDFCHL MCAN1.XIDFC.UINT8[HL]
#define MCAN1XIDFCHH MCAN1.XIDFC.UINT8[HH]
#define MCAN1XIDAM MCAN1.XIDAM.UINT32
#define MCAN1XIDAML MCAN1.XIDAM.UINT16[L]
#define MCAN1XIDAMLL MCAN1.XIDAM.UINT8[LL]
#define MCAN1XIDAMLH MCAN1.XIDAM.UINT8[LH]
#define MCAN1XIDAMH MCAN1.XIDAM.UINT16[H]
#define MCAN1XIDAMHL MCAN1.XIDAM.UINT8[HL]
#define MCAN1XIDAMHH MCAN1.XIDAM.UINT8[HH]
#define MCAN1HPMS MCAN1.HPMS.UINT32
#define MCAN1HPMSL MCAN1.HPMS.UINT16[L]
#define MCAN1HPMSLL MCAN1.HPMS.UINT8[LL]
#define MCAN1HPMSLH MCAN1.HPMS.UINT8[LH]
#define MCAN1NDAT1 MCAN1.NDAT1.UINT32
#define MCAN1NDAT1L MCAN1.NDAT1.UINT16[L]
#define MCAN1NDAT1LL MCAN1.NDAT1.UINT8[LL]
#define MCAN1NDAT1LH MCAN1.NDAT1.UINT8[LH]
#define MCAN1NDAT1H MCAN1.NDAT1.UINT16[H]
#define MCAN1NDAT1HL MCAN1.NDAT1.UINT8[HL]
#define MCAN1NDAT1HH MCAN1.NDAT1.UINT8[HH]
#define MCAN1NDAT2 MCAN1.NDAT2.UINT32
#define MCAN1NDAT2L MCAN1.NDAT2.UINT16[L]
#define MCAN1NDAT2LL MCAN1.NDAT2.UINT8[LL]
#define MCAN1NDAT2LH MCAN1.NDAT2.UINT8[LH]
#define MCAN1NDAT2H MCAN1.NDAT2.UINT16[H]
#define MCAN1NDAT2HL MCAN1.NDAT2.UINT8[HL]
#define MCAN1NDAT2HH MCAN1.NDAT2.UINT8[HH]
#define MCAN1RXF0C MCAN1.RXF0C.UINT32
#define MCAN1RXF0CL MCAN1.RXF0C.UINT16[L]
#define MCAN1RXF0CLL MCAN1.RXF0C.UINT8[LL]
#define MCAN1RXF0CLH MCAN1.RXF0C.UINT8[LH]
#define MCAN1RXF0CH MCAN1.RXF0C.UINT16[H]
#define MCAN1RXF0CHL MCAN1.RXF0C.UINT8[HL]
#define MCAN1RXF0CHH MCAN1.RXF0C.UINT8[HH]
#define MCAN1RXF0S MCAN1.RXF0S.UINT32
#define MCAN1RXF0SL MCAN1.RXF0S.UINT16[L]
#define MCAN1RXF0SLL MCAN1.RXF0S.UINT8[LL]
#define MCAN1RXF0SLH MCAN1.RXF0S.UINT8[LH]
#define MCAN1RXF0SH MCAN1.RXF0S.UINT16[H]
#define MCAN1RXF0SHL MCAN1.RXF0S.UINT8[HL]
#define MCAN1RXF0SHH MCAN1.RXF0S.UINT8[HH]
#define MCAN1RXF0A MCAN1.RXF0A.UINT32
#define MCAN1RXF0AL MCAN1.RXF0A.UINT16[L]
#define MCAN1RXF0ALL MCAN1.RXF0A.UINT8[LL]
#define MCAN1RXF0ALH MCAN1.RXF0A.UINT8[LH]
#define MCAN1RXBC MCAN1.RXBC.UINT32
#define MCAN1RXBCL MCAN1.RXBC.UINT16[L]
#define MCAN1RXBCLL MCAN1.RXBC.UINT8[LL]
#define MCAN1RXBCLH MCAN1.RXBC.UINT8[LH]
#define MCAN1RXF1C MCAN1.RXF1C.UINT32
#define MCAN1RXF1CL MCAN1.RXF1C.UINT16[L]
#define MCAN1RXF1CLL MCAN1.RXF1C.UINT8[LL]
#define MCAN1RXF1CLH MCAN1.RXF1C.UINT8[LH]
#define MCAN1RXF1CH MCAN1.RXF1C.UINT16[H]
#define MCAN1RXF1CHL MCAN1.RXF1C.UINT8[HL]
#define MCAN1RXF1CHH MCAN1.RXF1C.UINT8[HH]
#define MCAN1RXF1S MCAN1.RXF1S.UINT32
#define MCAN1RXF1SL MCAN1.RXF1S.UINT16[L]
#define MCAN1RXF1SLL MCAN1.RXF1S.UINT8[LL]
#define MCAN1RXF1SLH MCAN1.RXF1S.UINT8[LH]
#define MCAN1RXF1SH MCAN1.RXF1S.UINT16[H]
#define MCAN1RXF1SHL MCAN1.RXF1S.UINT8[HL]
#define MCAN1RXF1SHH MCAN1.RXF1S.UINT8[HH]
#define MCAN1RXF1A MCAN1.RXF1A.UINT32
#define MCAN1RXF1AL MCAN1.RXF1A.UINT16[L]
#define MCAN1RXF1ALL MCAN1.RXF1A.UINT8[LL]
#define MCAN1RXF1ALH MCAN1.RXF1A.UINT8[LH]
#define MCAN1RXESC MCAN1.RXESC.UINT32
#define MCAN1RXESCL MCAN1.RXESC.UINT16[L]
#define MCAN1RXESCLL MCAN1.RXESC.UINT8[LL]
#define MCAN1RXESCLH MCAN1.RXESC.UINT8[LH]
#define MCAN1TXBC MCAN1.TXBC.UINT32
#define MCAN1TXBCL MCAN1.TXBC.UINT16[L]
#define MCAN1TXBCLL MCAN1.TXBC.UINT8[LL]
#define MCAN1TXBCLH MCAN1.TXBC.UINT8[LH]
#define MCAN1TXBCH MCAN1.TXBC.UINT16[H]
#define MCAN1TXBCHL MCAN1.TXBC.UINT8[HL]
#define MCAN1TXBCHH MCAN1.TXBC.UINT8[HH]
#define MCAN1TXFQS MCAN1.TXFQS.UINT32
#define MCAN1TXFQSL MCAN1.TXFQS.UINT16[L]
#define MCAN1TXFQSLL MCAN1.TXFQS.UINT8[LL]
#define MCAN1TXFQSLH MCAN1.TXFQS.UINT8[LH]
#define MCAN1TXFQSH MCAN1.TXFQS.UINT16[H]
#define MCAN1TXFQSHL MCAN1.TXFQS.UINT8[HL]
#define MCAN1TXFQSHH MCAN1.TXFQS.UINT8[HH]
#define MCAN1TXESC MCAN1.TXESC.UINT32
#define MCAN1TXESCL MCAN1.TXESC.UINT16[L]
#define MCAN1TXESCLL MCAN1.TXESC.UINT8[LL]
#define MCAN1TXESCLH MCAN1.TXESC.UINT8[LH]
#define MCAN1TXBRP MCAN1.TXBRP.UINT32
#define MCAN1TXBRPL MCAN1.TXBRP.UINT16[L]
#define MCAN1TXBRPLL MCAN1.TXBRP.UINT8[LL]
#define MCAN1TXBRPLH MCAN1.TXBRP.UINT8[LH]
#define MCAN1TXBRPH MCAN1.TXBRP.UINT16[H]
#define MCAN1TXBRPHL MCAN1.TXBRP.UINT8[HL]
#define MCAN1TXBRPHH MCAN1.TXBRP.UINT8[HH]
#define MCAN1TXBAR MCAN1.TXBAR.UINT32
#define MCAN1TXBARL MCAN1.TXBAR.UINT16[L]
#define MCAN1TXBARLL MCAN1.TXBAR.UINT8[LL]
#define MCAN1TXBARLH MCAN1.TXBAR.UINT8[LH]
#define MCAN1TXBARH MCAN1.TXBAR.UINT16[H]
#define MCAN1TXBARHL MCAN1.TXBAR.UINT8[HL]
#define MCAN1TXBARHH MCAN1.TXBAR.UINT8[HH]
#define MCAN1TXBCR MCAN1.TXBCR.UINT32
#define MCAN1TXBCRL MCAN1.TXBCR.UINT16[L]
#define MCAN1TXBCRLL MCAN1.TXBCR.UINT8[LL]
#define MCAN1TXBCRLH MCAN1.TXBCR.UINT8[LH]
#define MCAN1TXBCRH MCAN1.TXBCR.UINT16[H]
#define MCAN1TXBCRHL MCAN1.TXBCR.UINT8[HL]
#define MCAN1TXBCRHH MCAN1.TXBCR.UINT8[HH]
#define MCAN1TXBTO MCAN1.TXBTO.UINT32
#define MCAN1TXBTOL MCAN1.TXBTO.UINT16[L]
#define MCAN1TXBTOLL MCAN1.TXBTO.UINT8[LL]
#define MCAN1TXBTOLH MCAN1.TXBTO.UINT8[LH]
#define MCAN1TXBTOH MCAN1.TXBTO.UINT16[H]
#define MCAN1TXBTOHL MCAN1.TXBTO.UINT8[HL]
#define MCAN1TXBTOHH MCAN1.TXBTO.UINT8[HH]
#define MCAN1TXBCF MCAN1.TXBCF.UINT32
#define MCAN1TXBCFL MCAN1.TXBCF.UINT16[L]
#define MCAN1TXBCFLL MCAN1.TXBCF.UINT8[LL]
#define MCAN1TXBCFLH MCAN1.TXBCF.UINT8[LH]
#define MCAN1TXBCFH MCAN1.TXBCF.UINT16[H]
#define MCAN1TXBCFHL MCAN1.TXBCF.UINT8[HL]
#define MCAN1TXBCFHH MCAN1.TXBCF.UINT8[HH]
#define MCAN1TXBTIE MCAN1.TXBTIE.UINT32
#define MCAN1TXBTIEL MCAN1.TXBTIE.UINT16[L]
#define MCAN1TXBTIELL MCAN1.TXBTIE.UINT8[LL]
#define MCAN1TXBTIELH MCAN1.TXBTIE.UINT8[LH]
#define MCAN1TXBTIEH MCAN1.TXBTIE.UINT16[H]
#define MCAN1TXBTIEHL MCAN1.TXBTIE.UINT8[HL]
#define MCAN1TXBTIEHH MCAN1.TXBTIE.UINT8[HH]
#define MCAN1TXBCIE MCAN1.TXBCIE.UINT32
#define MCAN1TXBCIEL MCAN1.TXBCIE.UINT16[L]
#define MCAN1TXBCIELL MCAN1.TXBCIE.UINT8[LL]
#define MCAN1TXBCIELH MCAN1.TXBCIE.UINT8[LH]
#define MCAN1TXBCIEH MCAN1.TXBCIE.UINT16[H]
#define MCAN1TXBCIEHL MCAN1.TXBCIE.UINT8[HL]
#define MCAN1TXBCIEHH MCAN1.TXBCIE.UINT8[HH]
#define MCAN1TXEFC MCAN1.TXEFC.UINT32
#define MCAN1TXEFCL MCAN1.TXEFC.UINT16[L]
#define MCAN1TXEFCLL MCAN1.TXEFC.UINT8[LL]
#define MCAN1TXEFCLH MCAN1.TXEFC.UINT8[LH]
#define MCAN1TXEFCH MCAN1.TXEFC.UINT16[H]
#define MCAN1TXEFCHL MCAN1.TXEFC.UINT8[HL]
#define MCAN1TXEFCHH MCAN1.TXEFC.UINT8[HH]
#define MCAN1TXEFS MCAN1.TXEFS.UINT32
#define MCAN1TXEFSL MCAN1.TXEFS.UINT16[L]
#define MCAN1TXEFSLL MCAN1.TXEFS.UINT8[LL]
#define MCAN1TXEFSLH MCAN1.TXEFS.UINT8[LH]
#define MCAN1TXEFSH MCAN1.TXEFS.UINT16[H]
#define MCAN1TXEFSHL MCAN1.TXEFS.UINT8[HL]
#define MCAN1TXEFSHH MCAN1.TXEFS.UINT8[HH]
#define MCAN1TXEFA MCAN1.TXEFA.UINT32
#define MCAN1TXEFAL MCAN1.TXEFA.UINT16[L]
#define MCAN1TXEFALL MCAN1.TXEFA.UINT8[LL]
#define MCAN1TXEFALH MCAN1.TXEFA.UINT8[LH]
#define DCRB0CIN DCRB0.CIN
#define DCRB0COUT DCRB0.COUT
#define DCRB0CTL DCRB0.CTL
#define DCRB2CIN DCRB2.CIN
#define DCRB2COUT DCRB2.COUT
#define DCRB2CTL DCRB2.CTL
#define ECMM0ESET ECMM0.ESET
#define ECMM0ECLR ECMM0.ECLR
#define ECMM0ESSTR0 ECMM0.ESSTR0
#define ECMM0ESSTR1 ECMM0.ESSTR1
#define ECMM0ESSTR2 ECMM0.ESSTR2
#define ECMM0PCMD0 ECMM0.PCMD0
#define ECMC0ESET ECMC0.ESET
#define ECMC0ECLR ECMC0.ECLR
#define ECMC0ESSTR0 ECMC0.ESSTR0
#define ECMC0ESSTR1 ECMC0.ESSTR1
#define ECMC0ESSTR2 ECMC0.ESSTR2
#define ECMC0PCMD0 ECMC0.PCMD0
#define ECM0EPCFG ECM0.EPCFG
#define ECM0MICFG0 ECM0.MICFG0
#define ECM0MICFG1 ECM0.MICFG1
#define ECM0MICFG2 ECM0.MICFG2
#define ECM0NMICFG0 ECM0.NMICFG0
#define ECM0NMICFG1 ECM0.NMICFG1
#define ECM0NMICFG2 ECM0.NMICFG2
#define ECM0IRCFG0 ECM0.IRCFG0
#define ECM0IRCFG1 ECM0.IRCFG1
#define ECM0IRCFG2 ECM0.IRCFG2
#define ECM0EMK0 ECM0.EMK0
#define ECM0EMK1 ECM0.EMK1
#define ECM0EMK2 ECM0.EMK2
#define ECM0ESSTC0 ECM0.ESSTC0
#define ECM0ESSTC1 ECM0.ESSTC1
#define ECM0ESSTC2 ECM0.ESSTC2
#define ECM0PCMD1 ECM0.PCMD1
#define ECM0PS ECM0.PS
#define ECM0PE0 ECM0.PE0
#define ECM0PE1 ECM0.PE1
#define ECM0PE2 ECM0.PE2
#define ECM0DTMCTL ECM0.DTMCTL
#define ECM0DTMR ECM0.DTMR
#define ECM0DTMCMP ECM0.DTMCMP
#define ECM0DTMCFG0 ECM0.DTMCFG0
#define ECM0DTMCFG1 ECM0.DTMCFG1
#define ECM0DTMCFG2 ECM0.DTMCFG2
#define ECM0DTMCFG3 ECM0.DTMCFG3
#define ECM0DTMCFG4 ECM0.DTMCFG4
#define ECM0DTMCFG5 ECM0.DTMCFG5
#define ECM0EOCCFG ECM0.EOCCFG
#define ECM0PEM ECM0.PEM
#define PIC2CTRGPREMUX0 PIC2C.TRGPREMUX0
#define PIC2CTRGPREMUX1 PIC2C.TRGPREMUX1
#define PIC2CTRGMUX0 PIC2C.TRGMUX0
#define PIC2CTRGMUX1 PIC2C.TRGMUX1
#define PIC2CEDGSEL0 PIC2C.EDGSEL0
#define PIC2CEDGSEL1 PIC2C.EDGSEL1
#define PIC2CENP2TIM0 PIC2C.ENP2TIM0
#define PIC2CENP2TIM1 PIC2C.ENP2TIM1
#define PIC2CENHIZDTM PIC2C.ENHIZDTM
#define CSIH0CTL0 CSIH0.CTL0.UINT8
#define CSIH0MBS CSIH0.CTL0.BIT.MBS
#define CSIH0JOBE CSIH0.CTL0.BIT.JOBE
#define CSIH0RXE CSIH0.CTL0.BIT.RXE
#define CSIH0TXE CSIH0.CTL0.BIT.TXE
#define CSIH0PWR CSIH0.CTL0.BIT.PWR
#define CSIH0CTL1 CSIH0.CTL1
#define CSIH0CTL2 CSIH0.CTL2
#define CSIH0MCTL1 CSIH0.MCTL1
#define CSIH0MCTL2 CSIH0.MCTL2
#define CSIH0TX0W CSIH0.TX0W
#define CSIH0TX0H CSIH0.TX0H
#define CSIH0RX0W CSIH0.RX0W
#define CSIH0RX0H CSIH0.RX0H
#define CSIH0MRWP0 CSIH0.MRWP0
#define CSIH0STR0 CSIH0.STR0
#define CSIH0STCR0 CSIH0.STCR0
#define CSIH0MCTL0 CSIH0.MCTL0
#define CSIH0CFG0 CSIH0.CFG0
#define CSIH0CFG1 CSIH0.CFG1
#define CSIH0CFG2 CSIH0.CFG2
#define CSIH0CFG3 CSIH0.CFG3
#define CSIH0CFG4 CSIH0.CFG4
#define CSIH0CFG5 CSIH0.CFG5
#define CSIH0CFG6 CSIH0.CFG6
#define CSIH0CFG7 CSIH0.CFG7
#define CSIH0BRS0 CSIH0.BRS0
#define CSIH0BRS1 CSIH0.BRS1
#define CSIH0BRS2 CSIH0.BRS2
#define CSIH0BRS3 CSIH0.BRS3
#define PMMA0CTL PMMA0.CTL
#define PMMA0TCTL0 PMMA0.TCTL0
#define PMMA0TCTL1 PMMA0.TCTL1
#define PMMA0TCTL2 PMMA0.TCTL2
#define PMMA0TCTL3 PMMA0.TCTL3
#define PMMA0TCTL4 PMMA0.TCTL4
#define PMMA0TCTL5 PMMA0.TCTL5
#define PMMA0TCTL6 PMMA0.TCTL6
#define PMMA0TCTL7 PMMA0.TCTL7
#define PMMA0TTX0 PMMA0.TTX0
#define PMMA0TTX1 PMMA0.TTX1
#define PMMA0TTX2 PMMA0.TTX2
#define PMMA0TTX3 PMMA0.TTX3
#define PMMA0TTX4 PMMA0.TTX4
#define PMMA0TTX5 PMMA0.TTX5
#define PMMA0TTX6 PMMA0.TTX6
#define PMMA0TTX7 PMMA0.TTX7
#define PMMA0RX PMMA0.RX
#define PMMA0TCNT0 PMMA0.TCNT0
#define PMMA0TCNT1 PMMA0.TCNT1
#define PMMA0TCNT2 PMMA0.TCNT2
#define PMMA0TCNT3 PMMA0.TCNT3
#define PMMA0TCNT4 PMMA0.TCNT4
#define PMMA0TCNT5 PMMA0.TCNT5
#define PMMA0TCNT6 PMMA0.TCNT6
#define PMMA0TCNT7 PMMA0.TCNT7
#define PMMA0STR0 PMMA0.STR0
#define PMMA0STR1 PMMA0.STR1
#define PMMA0STC PMMA0.STC
#define CSIH2CTL0 CSIH2.CTL0.UINT8
#define CSIH2MBS CSIH2.CTL0.BIT.MBS
#define CSIH2JOBE CSIH2.CTL0.BIT.JOBE
#define CSIH2RXE CSIH2.CTL0.BIT.RXE
#define CSIH2TXE CSIH2.CTL0.BIT.TXE
#define CSIH2PWR CSIH2.CTL0.BIT.PWR
#define CSIH2CTL1 CSIH2.CTL1
#define CSIH2CTL2 CSIH2.CTL2
#define CSIH2MCTL1 CSIH2.MCTL1
#define CSIH2MCTL2 CSIH2.MCTL2
#define CSIH2TX0W CSIH2.TX0W
#define CSIH2TX0H CSIH2.TX0H
#define CSIH2RX0W CSIH2.RX0W
#define CSIH2RX0H CSIH2.RX0H
#define CSIH2MRWP0 CSIH2.MRWP0
#define CSIH2STR0 CSIH2.STR0
#define CSIH2STCR0 CSIH2.STCR0
#define CSIH2MCTL0 CSIH2.MCTL0
#define CSIH2CFG0 CSIH2.CFG0
#define CSIH2CFG1 CSIH2.CFG1
#define CSIH2CFG2 CSIH2.CFG2
#define CSIH2CFG3 CSIH2.CFG3
#define CSIH2CFG4 CSIH2.CFG4
#define CSIH2CFG5 CSIH2.CFG5
#define CSIH2CFG6 CSIH2.CFG6
#define CSIH2CFG7 CSIH2.CFG7
#define CSIH2BRS0 CSIH2.BRS0
#define CSIH2BRS1 CSIH2.BRS1
#define CSIH2BRS2 CSIH2.BRS2
#define CSIH2BRS3 CSIH2.BRS3
#define PMMA2CTL PMMA2.CTL
#define PMMA2TCTL0 PMMA2.TCTL0
#define PMMA2TCTL1 PMMA2.TCTL1
#define PMMA2TCTL2 PMMA2.TCTL2
#define PMMA2TCTL3 PMMA2.TCTL3
#define PMMA2TCTL4 PMMA2.TCTL4
#define PMMA2TCTL5 PMMA2.TCTL5
#define PMMA2TCTL6 PMMA2.TCTL6
#define PMMA2TCTL7 PMMA2.TCTL7
#define PMMA2TTX0 PMMA2.TTX0
#define PMMA2TTX1 PMMA2.TTX1
#define PMMA2TTX2 PMMA2.TTX2
#define PMMA2TTX3 PMMA2.TTX3
#define PMMA2TTX4 PMMA2.TTX4
#define PMMA2TTX5 PMMA2.TTX5
#define PMMA2TTX6 PMMA2.TTX6
#define PMMA2TTX7 PMMA2.TTX7
#define PMMA2RX PMMA2.RX
#define PMMA2TCNT0 PMMA2.TCNT0
#define PMMA2TCNT1 PMMA2.TCNT1
#define PMMA2TCNT2 PMMA2.TCNT2
#define PMMA2TCNT3 PMMA2.TCNT3
#define PMMA2TCNT4 PMMA2.TCNT4
#define PMMA2TCNT5 PMMA2.TCNT5
#define PMMA2TCNT6 PMMA2.TCNT6
#define PMMA2TCNT7 PMMA2.TCNT7
#define PMMA2STR0 PMMA2.STR0
#define PMMA2STR1 PMMA2.STR1
#define PMMA2STC PMMA2.STC
#define HSUS0CKEN HSUS0.CKEN
#define HSUS0SRST HSUS0.SRST
#define HSUS0EN HSUS0.EN
#define HSUS0MD HSUS0.MD
#define HSUS0CTL HSUS0.CTL
#define HSUS0TDIV HSUS0.TDIV
#define HSUS0TSAR HSUS0.TSAR
#define HSUS0TPFM HSUS0.TPFM
#define HSUS0RDAR HSUS0.RDAR
#define HSUS0RPFM HSUS0.RPFM
#define HSUS0RGFM HSUS0.RGFM
#define HSUS0IREN HSUS0.IREN
#define HSUS0IRST HSUS0.IRST
#define HSUS0IRCL HSUS0.IRCL.UINT32
#define HSUS0IRCLL HSUS0.IRCL.UINT16[L]
#define HSUS0IRCLLL HSUS0.IRCL.UINT8[LL]
#define HSUS0CST HSUS0.CST
#define HSUS0CTFM HSUS0.CTFM
#define HSUS0CRFM HSUS0.CRFM
#define RLN30LWBR RLN30.LWBR
#define RLN30LBRP01 RLN30.LBRP01.UINT16
#define RLN30LBRP0 RLN30.LBRP01.UINT8[L]
#define RLN30LBRP1 RLN30.LBRP01.UINT8[H]
#define RLN30LSTC RLN30.LSTC
#define RLN30LMD RLN30.LMD
#define RLN30LBFC RLN30.LBFC
#define RLN30LSC RLN30.LSC
#define RLN30LWUP RLN30.LWUP
#define RLN30LIE RLN30.LIE
#define RLN30LEDE RLN30.LEDE
#define RLN30LCUC RLN30.LCUC
#define RLN30LTRC RLN30.LTRC
#define RLN30LMST RLN30.LMST
#define RLN30LST RLN30.LST
#define RLN30LEST RLN30.LEST
#define RLN30LDFC RLN30.LDFC
#define RLN30LIDB RLN30.LIDB
#define RLN30LCBR RLN30.LCBR
#define RLN30LUDB0 RLN30.LUDB0
#define RLN30LDBR1 RLN30.LDBR1
#define RLN30LDBR2 RLN30.LDBR2
#define RLN30LDBR3 RLN30.LDBR3
#define RLN30LDBR4 RLN30.LDBR4
#define RLN30LDBR5 RLN30.LDBR5
#define RLN30LDBR6 RLN30.LDBR6
#define RLN30LDBR7 RLN30.LDBR7
#define RLN30LDBR8 RLN30.LDBR8
#define RLN30LUOER RLN30.LUOER
#define RLN30LUOR1 RLN30.LUOR1
#define RLN30LUTDR RLN30.LUTDR.UINT16
#define RLN30LUTDRL RLN30.LUTDR.UINT8[L]
#define RLN30LUTDRH RLN30.LUTDR.UINT8[H]
#define RLN30LURDR RLN30.LURDR.UINT16
#define RLN30LURDRL RLN30.LURDR.UINT8[L]
#define RLN30LURDRH RLN30.LURDR.UINT8[H]
#define RLN30LUWTDR RLN30.LUWTDR.UINT16
#define RLN30LUWTDRL RLN30.LUWTDR.UINT8[L]
#define RLN30LUWTDRH RLN30.LUWTDR.UINT8[H]
#define STM0CKSEL STM0.CKSEL.UINT32
#define STM0CKSELLL STM0.CKSEL.UINT8[LL]
#define STM0TS STM0.TS.UINT32
#define STM0TSLL STM0.TS.UINT8[LL]
#define STM0TT STM0.TT.UINT32
#define STM0TTLL STM0.TT.UINT8[LL]
#define STM0CSTR STM0.CSTR.UINT32
#define STM0CSTRLL STM0.CSTR.UINT8[LL]
#define STM0STR STM0.STR
#define STM0STC STM0.STC
#define STM0IS STM0.IS.UINT32
#define STM0ISLL STM0.IS.UINT8[LL]
#define STM0ISLH STM0.IS.UINT8[LH]
#define STM0RM STM0.RM.UINT32
#define STM0RMLL STM0.RM.UINT8[LL]
#define STM0CNT0L STM0.CNT0L
#define STM0CNT0H STM0.CNT0H
#define STM0CMP0AL STM0.CMP0AL
#define STM0CMP0AH STM0.CMP0AH
#define STM0CMP0BL STM0.CMP0BL
#define STM0CMP0BH STM0.CMP0BH
#define STM0CMP0CL STM0.CMP0CL
#define STM0CMP0CH STM0.CMP0CH
#define STM0CMP0DL STM0.CMP0DL
#define STM0CMP0DH STM0.CMP0DH
#define STM0CNT1 STM0.CNT1
#define STM0CMP1A STM0.CMP1A
#define STM0CMP1B STM0.CMP1B
#define STM0CMP1C STM0.CMP1C
#define STM0CMP1D STM0.CMP1D
#define STM0CNT2 STM0.CNT2
#define STM0CMP2A STM0.CMP2A
#define STM0CMP2B STM0.CMP2B
#define STM0CMP2C STM0.CMP2C
#define STM0CMP2D STM0.CMP2D
#define STM0CNT3 STM0.CNT3
#define STM0CMP3A STM0.CMP3A
#define STM0CMP3B STM0.CMP3B
#define STM0CMP3C STM0.CMP3C
#define STM0CMP3D STM0.CMP3D
#define FSGD2APROT00 FSGD2A.PROT00.UINT32
#define FSGD2APROT00L FSGD2A.PROT00.UINT16[L]
#define FSGD2APROT00LL FSGD2A.PROT00.UINT8[LL]
#define FSGD2APROT00LH FSGD2A.PROT00.UINT8[LH]
#define FSGD2APROT00H FSGD2A.PROT00.UINT16[H]
#define FSGD2APROT00HL FSGD2A.PROT00.UINT8[HL]
#define FSGD2APROT00HH FSGD2A.PROT00.UINT8[HH]
#define FSGD2ASPID00 FSGD2A.SPID00.UINT32
#define FSGD2ASPID00L FSGD2A.SPID00.UINT16[L]
#define FSGD2ASPID00LL FSGD2A.SPID00.UINT8[LL]
#define FSGD2ASPID00LH FSGD2A.SPID00.UINT8[LH]
#define FSGD2ASPID00H FSGD2A.SPID00.UINT16[H]
#define FSGD2ASPID00HL FSGD2A.SPID00.UINT8[HL]
#define FSGD2ASPID00HH FSGD2A.SPID00.UINT8[HH]
#define FSGD2APROT01 FSGD2A.PROT01.UINT32
#define FSGD2APROT01L FSGD2A.PROT01.UINT16[L]
#define FSGD2APROT01LL FSGD2A.PROT01.UINT8[LL]
#define FSGD2APROT01LH FSGD2A.PROT01.UINT8[LH]
#define FSGD2APROT01H FSGD2A.PROT01.UINT16[H]
#define FSGD2APROT01HL FSGD2A.PROT01.UINT8[HL]
#define FSGD2APROT01HH FSGD2A.PROT01.UINT8[HH]
#define FSGD2ASPID01 FSGD2A.SPID01.UINT32
#define FSGD2ASPID01L FSGD2A.SPID01.UINT16[L]
#define FSGD2ASPID01LL FSGD2A.SPID01.UINT8[LL]
#define FSGD2ASPID01LH FSGD2A.SPID01.UINT8[LH]
#define FSGD2ASPID01H FSGD2A.SPID01.UINT16[H]
#define FSGD2ASPID01HL FSGD2A.SPID01.UINT8[HL]
#define FSGD2ASPID01HH FSGD2A.SPID01.UINT8[HH]
#define FSGD2APROT02 FSGD2A.PROT02.UINT32
#define FSGD2APROT02L FSGD2A.PROT02.UINT16[L]
#define FSGD2APROT02LL FSGD2A.PROT02.UINT8[LL]
#define FSGD2APROT02LH FSGD2A.PROT02.UINT8[LH]
#define FSGD2APROT02H FSGD2A.PROT02.UINT16[H]
#define FSGD2APROT02HL FSGD2A.PROT02.UINT8[HL]
#define FSGD2APROT02HH FSGD2A.PROT02.UINT8[HH]
#define FSGD2ASPID02 FSGD2A.SPID02.UINT32
#define FSGD2ASPID02L FSGD2A.SPID02.UINT16[L]
#define FSGD2ASPID02LL FSGD2A.SPID02.UINT8[LL]
#define FSGD2ASPID02LH FSGD2A.SPID02.UINT8[LH]
#define FSGD2ASPID02H FSGD2A.SPID02.UINT16[H]
#define FSGD2ASPID02HL FSGD2A.SPID02.UINT8[HL]
#define FSGD2ASPID02HH FSGD2A.SPID02.UINT8[HH]
#define FSGD2APROT03 FSGD2A.PROT03.UINT32
#define FSGD2APROT03L FSGD2A.PROT03.UINT16[L]
#define FSGD2APROT03LL FSGD2A.PROT03.UINT8[LL]
#define FSGD2APROT03LH FSGD2A.PROT03.UINT8[LH]
#define FSGD2APROT03H FSGD2A.PROT03.UINT16[H]
#define FSGD2APROT03HL FSGD2A.PROT03.UINT8[HL]
#define FSGD2APROT03HH FSGD2A.PROT03.UINT8[HH]
#define FSGD2ASPID03 FSGD2A.SPID03.UINT32
#define FSGD2ASPID03L FSGD2A.SPID03.UINT16[L]
#define FSGD2ASPID03LL FSGD2A.SPID03.UINT8[LL]
#define FSGD2ASPID03LH FSGD2A.SPID03.UINT8[LH]
#define FSGD2ASPID03H FSGD2A.SPID03.UINT16[H]
#define FSGD2ASPID03HL FSGD2A.SPID03.UINT8[HL]
#define FSGD2ASPID03HH FSGD2A.SPID03.UINT8[HH]
#define FSGD2APROT04 FSGD2A.PROT04.UINT32
#define FSGD2APROT04L FSGD2A.PROT04.UINT16[L]
#define FSGD2APROT04LL FSGD2A.PROT04.UINT8[LL]
#define FSGD2APROT04LH FSGD2A.PROT04.UINT8[LH]
#define FSGD2APROT04H FSGD2A.PROT04.UINT16[H]
#define FSGD2APROT04HL FSGD2A.PROT04.UINT8[HL]
#define FSGD2APROT04HH FSGD2A.PROT04.UINT8[HH]
#define FSGD2ASPID04 FSGD2A.SPID04.UINT32
#define FSGD2ASPID04L FSGD2A.SPID04.UINT16[L]
#define FSGD2ASPID04LL FSGD2A.SPID04.UINT8[LL]
#define FSGD2ASPID04LH FSGD2A.SPID04.UINT8[LH]
#define FSGD2ASPID04H FSGD2A.SPID04.UINT16[H]
#define FSGD2ASPID04HL FSGD2A.SPID04.UINT8[HL]
#define FSGD2ASPID04HH FSGD2A.SPID04.UINT8[HH]
#define FSGD2APROT05 FSGD2A.PROT05.UINT32
#define FSGD2APROT05L FSGD2A.PROT05.UINT16[L]
#define FSGD2APROT05LL FSGD2A.PROT05.UINT8[LL]
#define FSGD2APROT05LH FSGD2A.PROT05.UINT8[LH]
#define FSGD2APROT05H FSGD2A.PROT05.UINT16[H]
#define FSGD2APROT05HL FSGD2A.PROT05.UINT8[HL]
#define FSGD2APROT05HH FSGD2A.PROT05.UINT8[HH]
#define FSGD2ASPID05 FSGD2A.SPID05.UINT32
#define FSGD2ASPID05L FSGD2A.SPID05.UINT16[L]
#define FSGD2ASPID05LL FSGD2A.SPID05.UINT8[LL]
#define FSGD2ASPID05LH FSGD2A.SPID05.UINT8[LH]
#define FSGD2ASPID05H FSGD2A.SPID05.UINT16[H]
#define FSGD2ASPID05HL FSGD2A.SPID05.UINT8[HL]
#define FSGD2ASPID05HH FSGD2A.SPID05.UINT8[HH]
#define FSGD2APROT06 FSGD2A.PROT06.UINT32
#define FSGD2APROT06L FSGD2A.PROT06.UINT16[L]
#define FSGD2APROT06LL FSGD2A.PROT06.UINT8[LL]
#define FSGD2APROT06LH FSGD2A.PROT06.UINT8[LH]
#define FSGD2APROT06H FSGD2A.PROT06.UINT16[H]
#define FSGD2APROT06HL FSGD2A.PROT06.UINT8[HL]
#define FSGD2APROT06HH FSGD2A.PROT06.UINT8[HH]
#define FSGD2ASPID06 FSGD2A.SPID06.UINT32
#define FSGD2ASPID06L FSGD2A.SPID06.UINT16[L]
#define FSGD2ASPID06LL FSGD2A.SPID06.UINT8[LL]
#define FSGD2ASPID06LH FSGD2A.SPID06.UINT8[LH]
#define FSGD2ASPID06H FSGD2A.SPID06.UINT16[H]
#define FSGD2ASPID06HL FSGD2A.SPID06.UINT8[HL]
#define FSGD2ASPID06HH FSGD2A.SPID06.UINT8[HH]
#define FSGD2APROT07 FSGD2A.PROT07.UINT32
#define FSGD2APROT07L FSGD2A.PROT07.UINT16[L]
#define FSGD2APROT07LL FSGD2A.PROT07.UINT8[LL]
#define FSGD2APROT07LH FSGD2A.PROT07.UINT8[LH]
#define FSGD2APROT07H FSGD2A.PROT07.UINT16[H]
#define FSGD2APROT07HL FSGD2A.PROT07.UINT8[HL]
#define FSGD2APROT07HH FSGD2A.PROT07.UINT8[HH]
#define FSGD2ASPID07 FSGD2A.SPID07.UINT32
#define FSGD2ASPID07L FSGD2A.SPID07.UINT16[L]
#define FSGD2ASPID07LL FSGD2A.SPID07.UINT8[LL]
#define FSGD2ASPID07LH FSGD2A.SPID07.UINT8[LH]
#define FSGD2ASPID07H FSGD2A.SPID07.UINT16[H]
#define FSGD2ASPID07HL FSGD2A.SPID07.UINT8[HL]
#define FSGD2ASPID07HH FSGD2A.SPID07.UINT8[HH]
#define FSGD2APROT10 FSGD2A.PROT10.UINT32
#define FSGD2APROT10L FSGD2A.PROT10.UINT16[L]
#define FSGD2APROT10LL FSGD2A.PROT10.UINT8[LL]
#define FSGD2APROT10LH FSGD2A.PROT10.UINT8[LH]
#define FSGD2APROT10H FSGD2A.PROT10.UINT16[H]
#define FSGD2APROT10HL FSGD2A.PROT10.UINT8[HL]
#define FSGD2APROT10HH FSGD2A.PROT10.UINT8[HH]
#define FSGD2ASPID10 FSGD2A.SPID10.UINT32
#define FSGD2ASPID10L FSGD2A.SPID10.UINT16[L]
#define FSGD2ASPID10LL FSGD2A.SPID10.UINT8[LL]
#define FSGD2ASPID10LH FSGD2A.SPID10.UINT8[LH]
#define FSGD2ASPID10H FSGD2A.SPID10.UINT16[H]
#define FSGD2ASPID10HL FSGD2A.SPID10.UINT8[HL]
#define FSGD2ASPID10HH FSGD2A.SPID10.UINT8[HH]
#define FSGD2APROT11 FSGD2A.PROT11.UINT32
#define FSGD2APROT11L FSGD2A.PROT11.UINT16[L]
#define FSGD2APROT11LL FSGD2A.PROT11.UINT8[LL]
#define FSGD2APROT11LH FSGD2A.PROT11.UINT8[LH]
#define FSGD2APROT11H FSGD2A.PROT11.UINT16[H]
#define FSGD2APROT11HL FSGD2A.PROT11.UINT8[HL]
#define FSGD2APROT11HH FSGD2A.PROT11.UINT8[HH]
#define FSGD2ASPID11 FSGD2A.SPID11.UINT32
#define FSGD2ASPID11L FSGD2A.SPID11.UINT16[L]
#define FSGD2ASPID11LL FSGD2A.SPID11.UINT8[LL]
#define FSGD2ASPID11LH FSGD2A.SPID11.UINT8[LH]
#define FSGD2ASPID11H FSGD2A.SPID11.UINT16[H]
#define FSGD2ASPID11HL FSGD2A.SPID11.UINT8[HL]
#define FSGD2ASPID11HH FSGD2A.SPID11.UINT8[HH]
#define ERRSLV2CTL ERRSLV2.CTL
#define ERRSLV2STAT ERRSLV2.STAT
#define ERRSLV2TYPE ERRSLV2.TYPE
#define ERRSLV2AICTL ERRSLV2AI.CTL
#define ERRSLV2AISTAT ERRSLV2AI.STAT
#define ERRSLV2AITYPE ERRSLV2AI.TYPE
#define GTM0GTMREV GTM0.GTMREV
#define GTM0GTMRST GTM0.GTMRST
#define GTM0GTMCTRL GTM0.GTMCTRL
#define GTM0GTMAEIADDRXPT GTM0.GTMAEIADDRXPT
#define GTM0GTMIRQNOTIFY GTM0.GTMIRQNOTIFY
#define GTM0GTMIRQEN GTM0.GTMIRQEN
#define GTM0GTMIRQFORCINT GTM0.GTMIRQFORCINT
#define GTM0GTMIRQMODE GTM0.GTMIRQMODE
#define GTM0GTMEIRQEN GTM0.GTMEIRQEN
#define GTM0GTMHWCONF GTM0.GTMHWCONF
#define GTM0GTMBRIDGEMODE GTM0.GTMBRIDGEMODE
#define GTM0GTMBRIDGEPTR1 GTM0.GTMBRIDGEPTR1
#define GTM0GTMBRIDGEPTR2 GTM0.GTMBRIDGEPTR2
#define GTM0GTMTIM0AUXINSRC GTM0.GTMTIM0AUXINSRC
#define GTM0GTMTIM1AUXINSRC GTM0.GTMTIM1AUXINSRC
#define GTM0GTMEXTCAPEN0 GTM0.GTMEXTCAPEN0
#define GTM0GTMATOM0OUT GTM0.GTMATOM0OUT
#define GTM0TBUCHEN GTM0.TBUCHEN
#define GTM0TBU0CTRL GTM0.TBU0CTRL
#define GTM0TBU0BASE GTM0.TBU0BASE
#define GTM0TBU1CTRL GTM0.TBU1CTRL
#define GTM0TBU1BASE GTM0.TBU1BASE
#define GTM0MONSTATUS GTM0.MONSTATUS
#define GTM0MONACTIVITY0 GTM0.MONACTIVITY0
#define GTM0MONACTIVITYMCS0 GTM0.MONACTIVITYMCS0
#define GTM0CMPEN GTM0.CMPEN
#define GTM0CMPIRQNOTIFY GTM0.CMPIRQNOTIFY
#define GTM0CMPIRQEN GTM0.CMPIRQEN
#define GTM0CMPIRQFORCINT GTM0.CMPIRQFORCINT
#define GTM0CMPIRQMODE GTM0.CMPIRQMODE
#define GTM0CMPEIRQEN GTM0.CMPEIRQEN
#define GTM0ARUACCESS GTM0.ARUACCESS
#define GTM0ARUDATAH GTM0.ARUDATAH
#define GTM0ARUDATAL GTM0.ARUDATAL
#define GTM0ARUDBGACCESS0 GTM0.ARUDBGACCESS0
#define GTM0ARUDBGDATA0H GTM0.ARUDBGDATA0H
#define GTM0ARUDBGDATA0L GTM0.ARUDBGDATA0L
#define GTM0ARUDBGACCESS1 GTM0.ARUDBGACCESS1
#define GTM0ARUDBGDATA1H GTM0.ARUDBGDATA1H
#define GTM0ARUDBGDATA1L GTM0.ARUDBGDATA1L
#define GTM0ARUIRQNOTIFY GTM0.ARUIRQNOTIFY
#define GTM0ARUIRQEN GTM0.ARUIRQEN
#define GTM0ARUIRQFORCINT GTM0.ARUIRQFORCINT
#define GTM0ARUIRQMODE GTM0.ARUIRQMODE
#define GTM0ARUCADDREND GTM0.ARUCADDREND
#define GTM0CMUCLKEN GTM0.CMUCLKEN
#define GTM0CMUGCLKNUM GTM0.CMUGCLKNUM
#define GTM0CMUGCLKDEN GTM0.CMUGCLKDEN
#define GTM0CMUCLK0CTRL GTM0.CMUCLK0CTRL
#define GTM0CMUCLK1CTRL GTM0.CMUCLK1CTRL
#define GTM0CMUCLK2CTRL GTM0.CMUCLK2CTRL
#define GTM0CMUCLK3CTRL GTM0.CMUCLK3CTRL
#define GTM0CMUCLK4CTRL GTM0.CMUCLK4CTRL
#define GTM0CMUCLK5CTRL GTM0.CMUCLK5CTRL
#define GTM0CMUCLK6CTRL GTM0.CMUCLK6CTRL
#define GTM0CMUCLK7CTRL GTM0.CMUCLK7CTRL
#define GTM0CMUGLBCTRL GTM0.CMUGLBCTRL
#define GTM0ICMIRQG0 GTM0.ICMIRQG0
#define GTM0ICMIRQG2 GTM0.ICMIRQG2
#define GTM0ICMIRQG4 GTM0.ICMIRQG4
#define GTM0ICMIRQG9 GTM0.ICMIRQG9
#define GTM0ICMIRQGMEI GTM0.ICMIRQGMEI
#define GTM0ICMIRQGCEI1 GTM0.ICMIRQGCEI1
#define GTM0ICMIRQGCEI3 GTM0.ICMIRQGCEI3
#define GTM0ICMIRQGMCS0CI GTM0.ICMIRQGMCS0CI
#define GTM0ICMIRQGMCS0CEI GTM0.ICMIRQGMCS0CEI
#define GTM0TIM00GPR0 GTM0.TIM00GPR0
#define GTM0TIM00GPR1 GTM0.TIM00GPR1
#define GTM0TIM00CNT GTM0.TIM00CNT
#define GTM0TIM00ECNT GTM0.TIM00ECNT
#define GTM0TIM00CNTS GTM0.TIM00CNTS
#define GTM0TIM00TDUC GTM0.TIM00TDUC
#define GTM0TIM00TDUV GTM0.TIM00TDUV
#define GTM0TIM00FLTRE GTM0.TIM00FLTRE
#define GTM0TIM00FLTFE GTM0.TIM00FLTFE
#define GTM0TIM00CTRL GTM0.TIM00CTRL
#define GTM0TIM00ECTRL GTM0.TIM00ECTRL
#define GTM0TIM00IRQNOTIFY GTM0.TIM00IRQNOTIFY
#define GTM0TIM00IRQEN GTM0.TIM00IRQEN
#define GTM0TIM00IRQFORCINT GTM0.TIM00IRQFORCINT
#define GTM0TIM00IRQMODE GTM0.TIM00IRQMODE
#define GTM0TIM00EIRQEN GTM0.TIM00EIRQEN
#define GTM0TIM0INPVAL GTM0.TIM0INPVAL
#define GTM0TIM0INSRC GTM0.TIM0INSRC
#define GTM0TIM0RST GTM0.TIM0RST
#define GTM0TIM01GPR0 GTM0.TIM01GPR0
#define GTM0TIM01GPR1 GTM0.TIM01GPR1
#define GTM0TIM01CNT GTM0.TIM01CNT
#define GTM0TIM01ECNT GTM0.TIM01ECNT
#define GTM0TIM01CNTS GTM0.TIM01CNTS
#define GTM0TIM01TDUC GTM0.TIM01TDUC
#define GTM0TIM01TDUV GTM0.TIM01TDUV
#define GTM0TIM01FLTRE GTM0.TIM01FLTRE
#define GTM0TIM01FLTFE GTM0.TIM01FLTFE
#define GTM0TIM01CTRL GTM0.TIM01CTRL
#define GTM0TIM01ECTRL GTM0.TIM01ECTRL
#define GTM0TIM01IRQNOTIFY GTM0.TIM01IRQNOTIFY
#define GTM0TIM01IRQEN GTM0.TIM01IRQEN
#define GTM0TIM01IRQFORCINT GTM0.TIM01IRQFORCINT
#define GTM0TIM01IRQMODE GTM0.TIM01IRQMODE
#define GTM0TIM01EIRQEN GTM0.TIM01EIRQEN
#define GTM0TIM02GPR0 GTM0.TIM02GPR0
#define GTM0TIM02GPR1 GTM0.TIM02GPR1
#define GTM0TIM02CNT GTM0.TIM02CNT
#define GTM0TIM02ECNT GTM0.TIM02ECNT
#define GTM0TIM02CNTS GTM0.TIM02CNTS
#define GTM0TIM02TDUC GTM0.TIM02TDUC
#define GTM0TIM02TDUV GTM0.TIM02TDUV
#define GTM0TIM02FLTRE GTM0.TIM02FLTRE
#define GTM0TIM02FLTFE GTM0.TIM02FLTFE
#define GTM0TIM02CTRL GTM0.TIM02CTRL
#define GTM0TIM02ECTRL GTM0.TIM02ECTRL
#define GTM0TIM02IRQNOTIFY GTM0.TIM02IRQNOTIFY
#define GTM0TIM02IRQEN GTM0.TIM02IRQEN
#define GTM0TIM02IRQFORCINT GTM0.TIM02IRQFORCINT
#define GTM0TIM02IRQMODE GTM0.TIM02IRQMODE
#define GTM0TIM02EIRQEN GTM0.TIM02EIRQEN
#define GTM0TIM03GPR0 GTM0.TIM03GPR0
#define GTM0TIM03GPR1 GTM0.TIM03GPR1
#define GTM0TIM03CNT GTM0.TIM03CNT
#define GTM0TIM03ECNT GTM0.TIM03ECNT
#define GTM0TIM03CNTS GTM0.TIM03CNTS
#define GTM0TIM03TDUC GTM0.TIM03TDUC
#define GTM0TIM03TDUV GTM0.TIM03TDUV
#define GTM0TIM03FLTRE GTM0.TIM03FLTRE
#define GTM0TIM03FLTFE GTM0.TIM03FLTFE
#define GTM0TIM03CTRL GTM0.TIM03CTRL
#define GTM0TIM03ECTRL GTM0.TIM03ECTRL
#define GTM0TIM03IRQNOTIFY GTM0.TIM03IRQNOTIFY
#define GTM0TIM03IRQEN GTM0.TIM03IRQEN
#define GTM0TIM03IRQFORCINT GTM0.TIM03IRQFORCINT
#define GTM0TIM03IRQMODE GTM0.TIM03IRQMODE
#define GTM0TIM03EIRQEN GTM0.TIM03EIRQEN
#define GTM0TIM04GPR0 GTM0.TIM04GPR0
#define GTM0TIM04GPR1 GTM0.TIM04GPR1
#define GTM0TIM04CNT GTM0.TIM04CNT
#define GTM0TIM04ECNT GTM0.TIM04ECNT
#define GTM0TIM04CNTS GTM0.TIM04CNTS
#define GTM0TIM04TDUC GTM0.TIM04TDUC
#define GTM0TIM04TDUV GTM0.TIM04TDUV
#define GTM0TIM04FLTRE GTM0.TIM04FLTRE
#define GTM0TIM04FLTFE GTM0.TIM04FLTFE
#define GTM0TIM04CTRL GTM0.TIM04CTRL
#define GTM0TIM04ECTRL GTM0.TIM04ECTRL
#define GTM0TIM04IRQNOTIFY GTM0.TIM04IRQNOTIFY
#define GTM0TIM04IRQEN GTM0.TIM04IRQEN
#define GTM0TIM04IRQFORCINT GTM0.TIM04IRQFORCINT
#define GTM0TIM04IRQMODE GTM0.TIM04IRQMODE
#define GTM0TIM04EIRQEN GTM0.TIM04EIRQEN
#define GTM0TIM05GPR0 GTM0.TIM05GPR0
#define GTM0TIM05GPR1 GTM0.TIM05GPR1
#define GTM0TIM05CNT GTM0.TIM05CNT
#define GTM0TIM05ECNT GTM0.TIM05ECNT
#define GTM0TIM05CNTS GTM0.TIM05CNTS
#define GTM0TIM05TDUC GTM0.TIM05TDUC
#define GTM0TIM05TDUV GTM0.TIM05TDUV
#define GTM0TIM05FLTRE GTM0.TIM05FLTRE
#define GTM0TIM05FLTFE GTM0.TIM05FLTFE
#define GTM0TIM05CTRL GTM0.TIM05CTRL
#define GTM0TIM05ECTRL GTM0.TIM05ECTRL
#define GTM0TIM05IRQNOTIFY GTM0.TIM05IRQNOTIFY
#define GTM0TIM05IRQEN GTM0.TIM05IRQEN
#define GTM0TIM05IRQFORCINT GTM0.TIM05IRQFORCINT
#define GTM0TIM05IRQMODE GTM0.TIM05IRQMODE
#define GTM0TIM05EIRQEN GTM0.TIM05EIRQEN
#define GTM0TIM06GPR0 GTM0.TIM06GPR0
#define GTM0TIM06GPR1 GTM0.TIM06GPR1
#define GTM0TIM06CNT GTM0.TIM06CNT
#define GTM0TIM06ECNT GTM0.TIM06ECNT
#define GTM0TIM06CNTS GTM0.TIM06CNTS
#define GTM0TIM06TDUC GTM0.TIM06TDUC
#define GTM0TIM06TDUV GTM0.TIM06TDUV
#define GTM0TIM06FLTRE GTM0.TIM06FLTRE
#define GTM0TIM06FLTFE GTM0.TIM06FLTFE
#define GTM0TIM06CTRL GTM0.TIM06CTRL
#define GTM0TIM06ECTRL GTM0.TIM06ECTRL
#define GTM0TIM06IRQNOTIFY GTM0.TIM06IRQNOTIFY
#define GTM0TIM06IRQEN GTM0.TIM06IRQEN
#define GTM0TIM06IRQFORCINT GTM0.TIM06IRQFORCINT
#define GTM0TIM06IRQMODE GTM0.TIM06IRQMODE
#define GTM0TIM06EIRQEN GTM0.TIM06EIRQEN
#define GTM0TIM07GPR0 GTM0.TIM07GPR0
#define GTM0TIM07GPR1 GTM0.TIM07GPR1
#define GTM0TIM07CNT GTM0.TIM07CNT
#define GTM0TIM07ECNT GTM0.TIM07ECNT
#define GTM0TIM07CNTS GTM0.TIM07CNTS
#define GTM0TIM07TDUC GTM0.TIM07TDUC
#define GTM0TIM07TDUV GTM0.TIM07TDUV
#define GTM0TIM07FLTRE GTM0.TIM07FLTRE
#define GTM0TIM07FLTFE GTM0.TIM07FLTFE
#define GTM0TIM07CTRL GTM0.TIM07CTRL
#define GTM0TIM07ECTRL GTM0.TIM07ECTRL
#define GTM0TIM07IRQNOTIFY GTM0.TIM07IRQNOTIFY
#define GTM0TIM07IRQEN GTM0.TIM07IRQEN
#define GTM0TIM07IRQFORCINT GTM0.TIM07IRQFORCINT
#define GTM0TIM07IRQMODE GTM0.TIM07IRQMODE
#define GTM0TIM07EIRQEN GTM0.TIM07EIRQEN
#define GTM0TIM10GPR0 GTM0.TIM10GPR0
#define GTM0TIM10GPR1 GTM0.TIM10GPR1
#define GTM0TIM10CNT GTM0.TIM10CNT
#define GTM0TIM10ECNT GTM0.TIM10ECNT
#define GTM0TIM10CNTS GTM0.TIM10CNTS
#define GTM0TIM10TDUC GTM0.TIM10TDUC
#define GTM0TIM10TDUV GTM0.TIM10TDUV
#define GTM0TIM10FLTRE GTM0.TIM10FLTRE
#define GTM0TIM10FLTFE GTM0.TIM10FLTFE
#define GTM0TIM10CTRL GTM0.TIM10CTRL
#define GTM0TIM10ECTRL GTM0.TIM10ECTRL
#define GTM0TIM10IRQNOTIFY GTM0.TIM10IRQNOTIFY
#define GTM0TIM10IRQEN GTM0.TIM10IRQEN
#define GTM0TIM10IRQFORCINT GTM0.TIM10IRQFORCINT
#define GTM0TIM10IRQMODE GTM0.TIM10IRQMODE
#define GTM0TIM10EIRQEN GTM0.TIM10EIRQEN
#define GTM0TIM1INPVAL GTM0.TIM1INPVAL
#define GTM0TIM1INSRC GTM0.TIM1INSRC
#define GTM0TIM1RST GTM0.TIM1RST
#define GTM0TIM11GPR0 GTM0.TIM11GPR0
#define GTM0TIM11GPR1 GTM0.TIM11GPR1
#define GTM0TIM11CNT GTM0.TIM11CNT
#define GTM0TIM11ECNT GTM0.TIM11ECNT
#define GTM0TIM11CNTS GTM0.TIM11CNTS
#define GTM0TIM11TDUC GTM0.TIM11TDUC
#define GTM0TIM11TDUV GTM0.TIM11TDUV
#define GTM0TIM11FLTRE GTM0.TIM11FLTRE
#define GTM0TIM11FLTFE GTM0.TIM11FLTFE
#define GTM0TIM11CTRL GTM0.TIM11CTRL
#define GTM0TIM11ECTRL GTM0.TIM11ECTRL
#define GTM0TIM11IRQNOTIFY GTM0.TIM11IRQNOTIFY
#define GTM0TIM11IRQEN GTM0.TIM11IRQEN
#define GTM0TIM11IRQFORCINT GTM0.TIM11IRQFORCINT
#define GTM0TIM11IRQMODE GTM0.TIM11IRQMODE
#define GTM0TIM11EIRQEN GTM0.TIM11EIRQEN
#define GTM0TIM12GPR0 GTM0.TIM12GPR0
#define GTM0TIM12GPR1 GTM0.TIM12GPR1
#define GTM0TIM12CNT GTM0.TIM12CNT
#define GTM0TIM12ECNT GTM0.TIM12ECNT
#define GTM0TIM12CNTS GTM0.TIM12CNTS
#define GTM0TIM12TDUC GTM0.TIM12TDUC
#define GTM0TIM12TDUV GTM0.TIM12TDUV
#define GTM0TIM12FLTRE GTM0.TIM12FLTRE
#define GTM0TIM12FLTFE GTM0.TIM12FLTFE
#define GTM0TIM12CTRL GTM0.TIM12CTRL
#define GTM0TIM12ECTRL GTM0.TIM12ECTRL
#define GTM0TIM12IRQNOTIFY GTM0.TIM12IRQNOTIFY
#define GTM0TIM12IRQEN GTM0.TIM12IRQEN
#define GTM0TIM12IRQFORCINT GTM0.TIM12IRQFORCINT
#define GTM0TIM12IRQMODE GTM0.TIM12IRQMODE
#define GTM0TIM12EIRQEN GTM0.TIM12EIRQEN
#define GTM0TIM13GPR0 GTM0.TIM13GPR0
#define GTM0TIM13GPR1 GTM0.TIM13GPR1
#define GTM0TIM13CNT GTM0.TIM13CNT
#define GTM0TIM13ECNT GTM0.TIM13ECNT
#define GTM0TIM13CNTS GTM0.TIM13CNTS
#define GTM0TIM13TDUC GTM0.TIM13TDUC
#define GTM0TIM13TDUV GTM0.TIM13TDUV
#define GTM0TIM13FLTRE GTM0.TIM13FLTRE
#define GTM0TIM13FLTFE GTM0.TIM13FLTFE
#define GTM0TIM13CTRL GTM0.TIM13CTRL
#define GTM0TIM13ECTRL GTM0.TIM13ECTRL
#define GTM0TIM13IRQNOTIFY GTM0.TIM13IRQNOTIFY
#define GTM0TIM13IRQEN GTM0.TIM13IRQEN
#define GTM0TIM13IRQFORCINT GTM0.TIM13IRQFORCINT
#define GTM0TIM13IRQMODE GTM0.TIM13IRQMODE
#define GTM0TIM13EIRQEN GTM0.TIM13EIRQEN
#define GTM0TIM14GPR0 GTM0.TIM14GPR0
#define GTM0TIM14GPR1 GTM0.TIM14GPR1
#define GTM0TIM14CNT GTM0.TIM14CNT
#define GTM0TIM14ECNT GTM0.TIM14ECNT
#define GTM0TIM14CNTS GTM0.TIM14CNTS
#define GTM0TIM14TDUC GTM0.TIM14TDUC
#define GTM0TIM14TDUV GTM0.TIM14TDUV
#define GTM0TIM14FLTRE GTM0.TIM14FLTRE
#define GTM0TIM14FLTFE GTM0.TIM14FLTFE
#define GTM0TIM14CTRL GTM0.TIM14CTRL
#define GTM0TIM14ECTRL GTM0.TIM14ECTRL
#define GTM0TIM14IRQNOTIFY GTM0.TIM14IRQNOTIFY
#define GTM0TIM14IRQEN GTM0.TIM14IRQEN
#define GTM0TIM14IRQFORCINT GTM0.TIM14IRQFORCINT
#define GTM0TIM14IRQMODE GTM0.TIM14IRQMODE
#define GTM0TIM14EIRQEN GTM0.TIM14EIRQEN
#define GTM0TIM15GPR0 GTM0.TIM15GPR0
#define GTM0TIM15GPR1 GTM0.TIM15GPR1
#define GTM0TIM15CNT GTM0.TIM15CNT
#define GTM0TIM15ECNT GTM0.TIM15ECNT
#define GTM0TIM15CNTS GTM0.TIM15CNTS
#define GTM0TIM15TDUC GTM0.TIM15TDUC
#define GTM0TIM15TDUV GTM0.TIM15TDUV
#define GTM0TIM15FLTRE GTM0.TIM15FLTRE
#define GTM0TIM15FLTFE GTM0.TIM15FLTFE
#define GTM0TIM15CTRL GTM0.TIM15CTRL
#define GTM0TIM15ECTRL GTM0.TIM15ECTRL
#define GTM0TIM15IRQNOTIFY GTM0.TIM15IRQNOTIFY
#define GTM0TIM15IRQEN GTM0.TIM15IRQEN
#define GTM0TIM15IRQFORCINT GTM0.TIM15IRQFORCINT
#define GTM0TIM15IRQMODE GTM0.TIM15IRQMODE
#define GTM0TIM15EIRQEN GTM0.TIM15EIRQEN
#define GTM0TIM16GPR0 GTM0.TIM16GPR0
#define GTM0TIM16GPR1 GTM0.TIM16GPR1
#define GTM0TIM16CNT GTM0.TIM16CNT
#define GTM0TIM16ECNT GTM0.TIM16ECNT
#define GTM0TIM16CNTS GTM0.TIM16CNTS
#define GTM0TIM16TDUC GTM0.TIM16TDUC
#define GTM0TIM16TDUV GTM0.TIM16TDUV
#define GTM0TIM16FLTRE GTM0.TIM16FLTRE
#define GTM0TIM16FLTFE GTM0.TIM16FLTFE
#define GTM0TIM16CTRL GTM0.TIM16CTRL
#define GTM0TIM16ECTRL GTM0.TIM16ECTRL
#define GTM0TIM16IRQNOTIFY GTM0.TIM16IRQNOTIFY
#define GTM0TIM16IRQEN GTM0.TIM16IRQEN
#define GTM0TIM16IRQFORCINT GTM0.TIM16IRQFORCINT
#define GTM0TIM16IRQMODE GTM0.TIM16IRQMODE
#define GTM0TIM16EIRQEN GTM0.TIM16EIRQEN
#define GTM0TIM17GPR0 GTM0.TIM17GPR0
#define GTM0TIM17GPR1 GTM0.TIM17GPR1
#define GTM0TIM17CNT GTM0.TIM17CNT
#define GTM0TIM17ECNT GTM0.TIM17ECNT
#define GTM0TIM17CNTS GTM0.TIM17CNTS
#define GTM0TIM17TDUC GTM0.TIM17TDUC
#define GTM0TIM17TDUV GTM0.TIM17TDUV
#define GTM0TIM17FLTRE GTM0.TIM17FLTRE
#define GTM0TIM17FLTFE GTM0.TIM17FLTFE
#define GTM0TIM17CTRL GTM0.TIM17CTRL
#define GTM0TIM17ECTRL GTM0.TIM17ECTRL
#define GTM0TIM17IRQNOTIFY GTM0.TIM17IRQNOTIFY
#define GTM0TIM17IRQEN GTM0.TIM17IRQEN
#define GTM0TIM17IRQFORCINT GTM0.TIM17IRQFORCINT
#define GTM0TIM17IRQMODE GTM0.TIM17IRQMODE
#define GTM0TIM17EIRQEN GTM0.TIM17EIRQEN
#define GTM0ATOM00RDADDR GTM0.ATOM00RDADDR
#define GTM0ATOM00CTRL GTM0.ATOM00CTRL
#define GTM0ATOM00SR0 GTM0.ATOM00SR0
#define GTM0ATOM00SR1 GTM0.ATOM00SR1
#define GTM0ATOM00CM0 GTM0.ATOM00CM0
#define GTM0ATOM00CM1 GTM0.ATOM00CM1
#define GTM0ATOM00CN0 GTM0.ATOM00CN0
#define GTM0ATOM00STAT GTM0.ATOM00STAT
#define GTM0ATOM00IRQNOTIFY GTM0.ATOM00IRQNOTIFY
#define GTM0ATOM00IRQEN GTM0.ATOM00IRQEN
#define GTM0ATOM00IRQFORCINT GTM0.ATOM00IRQFORCINT
#define GTM0ATOM00IRQMODE GTM0.ATOM00IRQMODE
#define GTM0ATOM0AGCGLBCTRL GTM0.ATOM0AGCGLBCTRL
#define GTM0ATOM0AGCENDISCTRL GTM0.ATOM0AGCENDISCTRL
#define GTM0ATOM0AGCENDISSTAT GTM0.ATOM0AGCENDISSTAT
#define GTM0ATOM0AGCACTTB GTM0.ATOM0AGCACTTB
#define GTM0ATOM0AGCOUTENCTRL GTM0.ATOM0AGCOUTENCTRL
#define GTM0ATOM0AGCOUTENSTAT GTM0.ATOM0AGCOUTENSTAT
#define GTM0ATOM0AGCFUPDCTRL GTM0.ATOM0AGCFUPDCTRL
#define GTM0ATOM0AGCINTTRIG GTM0.ATOM0AGCINTTRIG
#define GTM0ATOM01RDADDR GTM0.ATOM01RDADDR
#define GTM0ATOM01CTRL GTM0.ATOM01CTRL
#define GTM0ATOM01SR0 GTM0.ATOM01SR0
#define GTM0ATOM01SR1 GTM0.ATOM01SR1
#define GTM0ATOM01CM0 GTM0.ATOM01CM0
#define GTM0ATOM01CM1 GTM0.ATOM01CM1
#define GTM0ATOM01CN0 GTM0.ATOM01CN0
#define GTM0ATOM01STAT GTM0.ATOM01STAT
#define GTM0ATOM01IRQNOTIFY GTM0.ATOM01IRQNOTIFY
#define GTM0ATOM01IRQEN GTM0.ATOM01IRQEN
#define GTM0ATOM01IRQFORCINT GTM0.ATOM01IRQFORCINT
#define GTM0ATOM01IRQMODE GTM0.ATOM01IRQMODE
#define GTM0ATOM02RDADDR GTM0.ATOM02RDADDR
#define GTM0ATOM02CTRL GTM0.ATOM02CTRL
#define GTM0ATOM02SR0 GTM0.ATOM02SR0
#define GTM0ATOM02SR1 GTM0.ATOM02SR1
#define GTM0ATOM02CM0 GTM0.ATOM02CM0
#define GTM0ATOM02CM1 GTM0.ATOM02CM1
#define GTM0ATOM02CN0 GTM0.ATOM02CN0
#define GTM0ATOM02STAT GTM0.ATOM02STAT
#define GTM0ATOM02IRQNOTIFY GTM0.ATOM02IRQNOTIFY
#define GTM0ATOM02IRQEN GTM0.ATOM02IRQEN
#define GTM0ATOM02IRQFORCINT GTM0.ATOM02IRQFORCINT
#define GTM0ATOM02IRQMODE GTM0.ATOM02IRQMODE
#define GTM0ATOM03RDADDR GTM0.ATOM03RDADDR
#define GTM0ATOM03CTRL GTM0.ATOM03CTRL
#define GTM0ATOM03SR0 GTM0.ATOM03SR0
#define GTM0ATOM03SR1 GTM0.ATOM03SR1
#define GTM0ATOM03CM0 GTM0.ATOM03CM0
#define GTM0ATOM03CM1 GTM0.ATOM03CM1
#define GTM0ATOM03CN0 GTM0.ATOM03CN0
#define GTM0ATOM03STAT GTM0.ATOM03STAT
#define GTM0ATOM03IRQNOTIFY GTM0.ATOM03IRQNOTIFY
#define GTM0ATOM03IRQEN GTM0.ATOM03IRQEN
#define GTM0ATOM03IRQFORCINT GTM0.ATOM03IRQFORCINT
#define GTM0ATOM03IRQMODE GTM0.ATOM03IRQMODE
#define GTM0ATOM04RDADDR GTM0.ATOM04RDADDR
#define GTM0ATOM04CTRL GTM0.ATOM04CTRL
#define GTM0ATOM04SR0 GTM0.ATOM04SR0
#define GTM0ATOM04SR1 GTM0.ATOM04SR1
#define GTM0ATOM04CM0 GTM0.ATOM04CM0
#define GTM0ATOM04CM1 GTM0.ATOM04CM1
#define GTM0ATOM04CN0 GTM0.ATOM04CN0
#define GTM0ATOM04STAT GTM0.ATOM04STAT
#define GTM0ATOM04IRQNOTIFY GTM0.ATOM04IRQNOTIFY
#define GTM0ATOM04IRQEN GTM0.ATOM04IRQEN
#define GTM0ATOM04IRQFORCINT GTM0.ATOM04IRQFORCINT
#define GTM0ATOM04IRQMODE GTM0.ATOM04IRQMODE
#define GTM0ATOM05RDADDR GTM0.ATOM05RDADDR
#define GTM0ATOM05CTRL GTM0.ATOM05CTRL
#define GTM0ATOM05SR0 GTM0.ATOM05SR0
#define GTM0ATOM05SR1 GTM0.ATOM05SR1
#define GTM0ATOM05CM0 GTM0.ATOM05CM0
#define GTM0ATOM05CM1 GTM0.ATOM05CM1
#define GTM0ATOM05CN0 GTM0.ATOM05CN0
#define GTM0ATOM05STAT GTM0.ATOM05STAT
#define GTM0ATOM05IRQNOTIFY GTM0.ATOM05IRQNOTIFY
#define GTM0ATOM05IRQEN GTM0.ATOM05IRQEN
#define GTM0ATOM05IRQFORCINT GTM0.ATOM05IRQFORCINT
#define GTM0ATOM05IRQMODE GTM0.ATOM05IRQMODE
#define GTM0ATOM06RDADDR GTM0.ATOM06RDADDR
#define GTM0ATOM06CTRL GTM0.ATOM06CTRL
#define GTM0ATOM06SR0 GTM0.ATOM06SR0
#define GTM0ATOM06SR1 GTM0.ATOM06SR1
#define GTM0ATOM06CM0 GTM0.ATOM06CM0
#define GTM0ATOM06CM1 GTM0.ATOM06CM1
#define GTM0ATOM06CN0 GTM0.ATOM06CN0
#define GTM0ATOM06STAT GTM0.ATOM06STAT
#define GTM0ATOM06IRQNOTIFY GTM0.ATOM06IRQNOTIFY
#define GTM0ATOM06IRQEN GTM0.ATOM06IRQEN
#define GTM0ATOM06IRQFORCINT GTM0.ATOM06IRQFORCINT
#define GTM0ATOM06IRQMODE GTM0.ATOM06IRQMODE
#define GTM0ATOM07RDADDR GTM0.ATOM07RDADDR
#define GTM0ATOM07CTRL GTM0.ATOM07CTRL
#define GTM0ATOM07SR0 GTM0.ATOM07SR0
#define GTM0ATOM07SR1 GTM0.ATOM07SR1
#define GTM0ATOM07CM0 GTM0.ATOM07CM0
#define GTM0ATOM07CM1 GTM0.ATOM07CM1
#define GTM0ATOM07CN0 GTM0.ATOM07CN0
#define GTM0ATOM07STAT GTM0.ATOM07STAT
#define GTM0ATOM07IRQNOTIFY GTM0.ATOM07IRQNOTIFY
#define GTM0ATOM07IRQEN GTM0.ATOM07IRQEN
#define GTM0ATOM07IRQFORCINT GTM0.ATOM07IRQFORCINT
#define GTM0ATOM07IRQMODE GTM0.ATOM07IRQMODE
#define GTM0ATOM10RDADDR GTM0.ATOM10RDADDR
#define GTM0ATOM10CTRL GTM0.ATOM10CTRL
#define GTM0ATOM10SR0 GTM0.ATOM10SR0
#define GTM0ATOM10SR1 GTM0.ATOM10SR1
#define GTM0ATOM10CM0 GTM0.ATOM10CM0
#define GTM0ATOM10CM1 GTM0.ATOM10CM1
#define GTM0ATOM10CN0 GTM0.ATOM10CN0
#define GTM0ATOM10STAT GTM0.ATOM10STAT
#define GTM0ATOM10IRQNOTIFY GTM0.ATOM10IRQNOTIFY
#define GTM0ATOM10IRQEN GTM0.ATOM10IRQEN
#define GTM0ATOM10IRQFORCINT GTM0.ATOM10IRQFORCINT
#define GTM0ATOM10IRQMODE GTM0.ATOM10IRQMODE
#define GTM0ATOM1AGCGLBCTRL GTM0.ATOM1AGCGLBCTRL
#define GTM0ATOM1AGCENDISCTRL GTM0.ATOM1AGCENDISCTRL
#define GTM0ATOM1AGCENDISSTAT GTM0.ATOM1AGCENDISSTAT
#define GTM0ATOM1AGCACTTB GTM0.ATOM1AGCACTTB
#define GTM0ATOM1AGCOUTENCTRL GTM0.ATOM1AGCOUTENCTRL
#define GTM0ATOM1AGCOUTENSTAT GTM0.ATOM1AGCOUTENSTAT
#define GTM0ATOM1AGCFUPDCTRL GTM0.ATOM1AGCFUPDCTRL
#define GTM0ATOM1AGCINTTRIG GTM0.ATOM1AGCINTTRIG
#define GTM0ATOM11RDADDR GTM0.ATOM11RDADDR
#define GTM0ATOM11CTRL GTM0.ATOM11CTRL
#define GTM0ATOM11SR0 GTM0.ATOM11SR0
#define GTM0ATOM11SR1 GTM0.ATOM11SR1
#define GTM0ATOM11CM0 GTM0.ATOM11CM0
#define GTM0ATOM11CM1 GTM0.ATOM11CM1
#define GTM0ATOM11CN0 GTM0.ATOM11CN0
#define GTM0ATOM11STAT GTM0.ATOM11STAT
#define GTM0ATOM11IRQNOTIFY GTM0.ATOM11IRQNOTIFY
#define GTM0ATOM11IRQEN GTM0.ATOM11IRQEN
#define GTM0ATOM11IRQFORCINT GTM0.ATOM11IRQFORCINT
#define GTM0ATOM11IRQMODE GTM0.ATOM11IRQMODE
#define GTM0ATOM12RDADDR GTM0.ATOM12RDADDR
#define GTM0ATOM12CTRL GTM0.ATOM12CTRL
#define GTM0ATOM12SR0 GTM0.ATOM12SR0
#define GTM0ATOM12SR1 GTM0.ATOM12SR1
#define GTM0ATOM12CM0 GTM0.ATOM12CM0
#define GTM0ATOM12CM1 GTM0.ATOM12CM1
#define GTM0ATOM12CN0 GTM0.ATOM12CN0
#define GTM0ATOM12STAT GTM0.ATOM12STAT
#define GTM0ATOM12IRQNOTIFY GTM0.ATOM12IRQNOTIFY
#define GTM0ATOM12IRQEN GTM0.ATOM12IRQEN
#define GTM0ATOM12IRQFORCINT GTM0.ATOM12IRQFORCINT
#define GTM0ATOM12IRQMODE GTM0.ATOM12IRQMODE
#define GTM0ATOM13RDADDR GTM0.ATOM13RDADDR
#define GTM0ATOM13CTRL GTM0.ATOM13CTRL
#define GTM0ATOM13SR0 GTM0.ATOM13SR0
#define GTM0ATOM13SR1 GTM0.ATOM13SR1
#define GTM0ATOM13CM0 GTM0.ATOM13CM0
#define GTM0ATOM13CM1 GTM0.ATOM13CM1
#define GTM0ATOM13CN0 GTM0.ATOM13CN0
#define GTM0ATOM13STAT GTM0.ATOM13STAT
#define GTM0ATOM13IRQNOTIFY GTM0.ATOM13IRQNOTIFY
#define GTM0ATOM13IRQEN GTM0.ATOM13IRQEN
#define GTM0ATOM13IRQFORCINT GTM0.ATOM13IRQFORCINT
#define GTM0ATOM13IRQMODE GTM0.ATOM13IRQMODE
#define GTM0DTM24CTRL GTM0.DTM24CTRL
#define GTM0DTM24CHCTRL1 GTM0.DTM24CHCTRL1
#define GTM0DTM24CHCTRL2 GTM0.DTM24CHCTRL2
#define GTM0DTM24CHCTRL2SR GTM0.DTM24CHCTRL2SR
#define GTM0DTM24PSCTRL GTM0.DTM24PSCTRL
#define GTM0DTM240DTV GTM0.DTM240DTV
#define GTM0DTM241DTV GTM0.DTM241DTV
#define GTM0DTM242DTV GTM0.DTM242DTV
#define GTM0DTM243DTV GTM0.DTM243DTV
#define GTM0DTM24CHSR GTM0.DTM24CHSR
#define GTM0DTM26CTRL GTM0.DTM26CTRL
#define GTM0DTM26CHCTRL1 GTM0.DTM26CHCTRL1
#define GTM0DTM26CHCTRL2 GTM0.DTM26CHCTRL2
#define GTM0DTM26CHCTRL2SR GTM0.DTM26CHCTRL2SR
#define GTM0DTM26PSCTRL GTM0.DTM26PSCTRL
#define GTM0DTM260DTV GTM0.DTM260DTV
#define GTM0DTM261DTV GTM0.DTM261DTV
#define GTM0DTM262DTV GTM0.DTM262DTV
#define GTM0DTM263DTV GTM0.DTM263DTV
#define GTM0DTM26CHSR GTM0.DTM26CHSR
#define GTM0MCS00R0 GTM0.MCS00R0
#define GTM0MCS00R1 GTM0.MCS00R1
#define GTM0MCS00R2 GTM0.MCS00R2
#define GTM0MCS00R3 GTM0.MCS00R3
#define GTM0MCS00R4 GTM0.MCS00R4
#define GTM0MCS00R5 GTM0.MCS00R5
#define GTM0MCS00R6 GTM0.MCS00R6
#define GTM0MCS00R7 GTM0.MCS00R7
#define GTM0MCS00CTRL GTM0.MCS00CTRL
#define GTM0MCS00ACB GTM0.MCS00ACB
#define GTM0MCS0CTRG GTM0.MCS0CTRG
#define GTM0MCS0STRG GTM0.MCS0STRG
#define GTM0MCS00MHB GTM0.MCS00MHB
#define GTM0MCS00PC GTM0.MCS00PC
#define GTM0MCS00IRQNOTIFY GTM0.MCS00IRQNOTIFY
#define GTM0MCS00IRQEN GTM0.MCS00IRQEN
#define GTM0MCS00IRQFORCINT GTM0.MCS00IRQFORCINT
#define GTM0MCS00IRQMODE GTM0.MCS00IRQMODE
#define GTM0MCS00EIRQEN GTM0.MCS00EIRQEN
#define GTM0MCS0CTRLSTAT GTM0.MCS0CTRLSTAT
#define GTM0MCS0RESET GTM0.MCS0RESET
#define GTM0MCS0CAT GTM0.MCS0CAT
#define GTM0MCS0CWT GTM0.MCS0CWT
#define GTM0MCS0ERR GTM0.MCS0ERR
#define GTM0MCS01R0 GTM0.MCS01R0
#define GTM0MCS01R1 GTM0.MCS01R1
#define GTM0MCS01R2 GTM0.MCS01R2
#define GTM0MCS01R3 GTM0.MCS01R3
#define GTM0MCS01R4 GTM0.MCS01R4
#define GTM0MCS01R5 GTM0.MCS01R5
#define GTM0MCS01R6 GTM0.MCS01R6
#define GTM0MCS01R7 GTM0.MCS01R7
#define GTM0MCS01CTRL GTM0.MCS01CTRL
#define GTM0MCS01ACB GTM0.MCS01ACB
#define GTM0MCS01MHB GTM0.MCS01MHB
#define GTM0MCS01PC GTM0.MCS01PC
#define GTM0MCS01IRQNOTIFY GTM0.MCS01IRQNOTIFY
#define GTM0MCS01IRQEN GTM0.MCS01IRQEN
#define GTM0MCS01IRQFORCINT GTM0.MCS01IRQFORCINT
#define GTM0MCS01IRQMODE GTM0.MCS01IRQMODE
#define GTM0MCS01EIRQEN GTM0.MCS01EIRQEN
#define GTM0MCS02R0 GTM0.MCS02R0
#define GTM0MCS02R1 GTM0.MCS02R1
#define GTM0MCS02R2 GTM0.MCS02R2
#define GTM0MCS02R3 GTM0.MCS02R3
#define GTM0MCS02R4 GTM0.MCS02R4
#define GTM0MCS02R5 GTM0.MCS02R5
#define GTM0MCS02R6 GTM0.MCS02R6
#define GTM0MCS02R7 GTM0.MCS02R7
#define GTM0MCS02CTRL GTM0.MCS02CTRL
#define GTM0MCS02ACB GTM0.MCS02ACB
#define GTM0MCS02MHB GTM0.MCS02MHB
#define GTM0MCS02PC GTM0.MCS02PC
#define GTM0MCS02IRQNOTIFY GTM0.MCS02IRQNOTIFY
#define GTM0MCS02IRQEN GTM0.MCS02IRQEN
#define GTM0MCS02IRQFORCINT GTM0.MCS02IRQFORCINT
#define GTM0MCS02IRQMODE GTM0.MCS02IRQMODE
#define GTM0MCS02EIRQEN GTM0.MCS02EIRQEN
#define GTM0MCS03R0 GTM0.MCS03R0
#define GTM0MCS03R1 GTM0.MCS03R1
#define GTM0MCS03R2 GTM0.MCS03R2
#define GTM0MCS03R3 GTM0.MCS03R3
#define GTM0MCS03R4 GTM0.MCS03R4
#define GTM0MCS03R5 GTM0.MCS03R5
#define GTM0MCS03R6 GTM0.MCS03R6
#define GTM0MCS03R7 GTM0.MCS03R7
#define GTM0MCS03CTRL GTM0.MCS03CTRL
#define GTM0MCS03ACB GTM0.MCS03ACB
#define GTM0MCS03MHB GTM0.MCS03MHB
#define GTM0MCS03PC GTM0.MCS03PC
#define GTM0MCS03IRQNOTIFY GTM0.MCS03IRQNOTIFY
#define GTM0MCS03IRQEN GTM0.MCS03IRQEN
#define GTM0MCS03IRQFORCINT GTM0.MCS03IRQFORCINT
#define GTM0MCS03IRQMODE GTM0.MCS03IRQMODE
#define GTM0MCS03EIRQEN GTM0.MCS03EIRQEN
#define GTM0MCS04R0 GTM0.MCS04R0
#define GTM0MCS04R1 GTM0.MCS04R1
#define GTM0MCS04R2 GTM0.MCS04R2
#define GTM0MCS04R3 GTM0.MCS04R3
#define GTM0MCS04R4 GTM0.MCS04R4
#define GTM0MCS04R5 GTM0.MCS04R5
#define GTM0MCS04R6 GTM0.MCS04R6
#define GTM0MCS04R7 GTM0.MCS04R7
#define GTM0MCS04CTRL GTM0.MCS04CTRL
#define GTM0MCS04ACB GTM0.MCS04ACB
#define GTM0MCS04MHB GTM0.MCS04MHB
#define GTM0MCS04PC GTM0.MCS04PC
#define GTM0MCS04IRQNOTIFY GTM0.MCS04IRQNOTIFY
#define GTM0MCS04IRQEN GTM0.MCS04IRQEN
#define GTM0MCS04IRQFORCINT GTM0.MCS04IRQFORCINT
#define GTM0MCS04IRQMODE GTM0.MCS04IRQMODE
#define GTM0MCS04EIRQEN GTM0.MCS04EIRQEN
#define GTM0MCS05R0 GTM0.MCS05R0
#define GTM0MCS05R1 GTM0.MCS05R1
#define GTM0MCS05R2 GTM0.MCS05R2
#define GTM0MCS05R3 GTM0.MCS05R3
#define GTM0MCS05R4 GTM0.MCS05R4
#define GTM0MCS05R5 GTM0.MCS05R5
#define GTM0MCS05R6 GTM0.MCS05R6
#define GTM0MCS05R7 GTM0.MCS05R7
#define GTM0MCS05CTRL GTM0.MCS05CTRL
#define GTM0MCS05ACB GTM0.MCS05ACB
#define GTM0MCS05MHB GTM0.MCS05MHB
#define GTM0MCS05PC GTM0.MCS05PC
#define GTM0MCS05IRQNOTIFY GTM0.MCS05IRQNOTIFY
#define GTM0MCS05IRQEN GTM0.MCS05IRQEN
#define GTM0MCS05IRQFORCINT GTM0.MCS05IRQFORCINT
#define GTM0MCS05IRQMODE GTM0.MCS05IRQMODE
#define GTM0MCS05EIRQEN GTM0.MCS05EIRQEN
#define GTM0MCS06R0 GTM0.MCS06R0
#define GTM0MCS06R1 GTM0.MCS06R1
#define GTM0MCS06R2 GTM0.MCS06R2
#define GTM0MCS06R3 GTM0.MCS06R3
#define GTM0MCS06R4 GTM0.MCS06R4
#define GTM0MCS06R5 GTM0.MCS06R5
#define GTM0MCS06R6 GTM0.MCS06R6
#define GTM0MCS06R7 GTM0.MCS06R7
#define GTM0MCS06CTRL GTM0.MCS06CTRL
#define GTM0MCS06ACB GTM0.MCS06ACB
#define GTM0MCS06MHB GTM0.MCS06MHB
#define GTM0MCS06PC GTM0.MCS06PC
#define GTM0MCS06IRQNOTIFY GTM0.MCS06IRQNOTIFY
#define GTM0MCS06IRQEN GTM0.MCS06IRQEN
#define GTM0MCS06IRQFORCINT GTM0.MCS06IRQFORCINT
#define GTM0MCS06IRQMODE GTM0.MCS06IRQMODE
#define GTM0MCS06EIRQEN GTM0.MCS06EIRQEN
#define GTM0MCS07R0 GTM0.MCS07R0
#define GTM0MCS07R1 GTM0.MCS07R1
#define GTM0MCS07R2 GTM0.MCS07R2
#define GTM0MCS07R3 GTM0.MCS07R3
#define GTM0MCS07R4 GTM0.MCS07R4
#define GTM0MCS07R5 GTM0.MCS07R5
#define GTM0MCS07R6 GTM0.MCS07R6
#define GTM0MCS07R7 GTM0.MCS07R7
#define GTM0MCS07CTRL GTM0.MCS07CTRL
#define GTM0MCS07ACB GTM0.MCS07ACB
#define GTM0MCS07MHB GTM0.MCS07MHB
#define GTM0MCS07PC GTM0.MCS07PC
#define GTM0MCS07IRQNOTIFY GTM0.MCS07IRQNOTIFY
#define GTM0MCS07IRQEN GTM0.MCS07IRQEN
#define GTM0MCS07IRQFORCINT GTM0.MCS07IRQFORCINT
#define GTM0MCS07IRQMODE GTM0.MCS07IRQMODE
#define GTM0MCS07EIRQEN GTM0.MCS07EIRQEN
#define GTM0MCS08R0 GTM0.MCS08R0
#define GTM0MCS08R1 GTM0.MCS08R1
#define GTM0MCS08R2 GTM0.MCS08R2
#define GTM0MCS08R3 GTM0.MCS08R3
#define GTM0MCS08R4 GTM0.MCS08R4
#define GTM0MCS08R5 GTM0.MCS08R5
#define GTM0MCS08R6 GTM0.MCS08R6
#define GTM0MCS08R7 GTM0.MCS08R7
#define GTM0MCS08CTRL GTM0.MCS08CTRL
#define GTM0MCS08ACB GTM0.MCS08ACB
#define GTM0MCS08MHB GTM0.MCS08MHB
#define GTM0MCS08PC GTM0.MCS08PC
#define GTM0MCS08IRQNOTIFY GTM0.MCS08IRQNOTIFY
#define GTM0MCS08IRQEN GTM0.MCS08IRQEN
#define GTM0MCS08IRQFORCINT GTM0.MCS08IRQFORCINT
#define GTM0MCS08IRQMODE GTM0.MCS08IRQMODE
#define GTM0MCS08EIRQEN GTM0.MCS08EIRQEN
#define ECCGTM0CTL ECCGTM0.CTL
#define ECCGTM0TMC ECCGTM0.TMC
#define ECCGTM0TRC ECCGTM0.TRC
#define ECCGTM0TED ECCGTM0.TED
#define ECCGTM0EAD0 ECCGTM0.EAD0
#define ECCGTM1CTL ECCGTM1.CTL
#define ECCGTM1TMC ECCGTM1.TMC
#define ECCGTM1TRC ECCGTM1.TRC
#define ECCGTM1TED ECCGTM1.TED
#define ECCGTM1EAD0 ECCGTM1.EAD0
#define ECCGTM2CTL ECCGTM2.CTL
#define ECCGTM2TMC ECCGTM2.TMC
#define ECCGTM2TRC ECCGTM2.TRC
#define ECCGTM2TED ECCGTM2.TED
#define ECCGTM2EAD0 ECCGTM2.EAD0
#define ECCGTM3CTL ECCGTM3.CTL
#define ECCGTM3TMC ECCGTM3.TMC
#define ECCGTM3TRC ECCGTM3.TRC
#define ECCGTM3TED ECCGTM3.TED
#define ECCGTM3EAD0 ECCGTM3.EAD0
#define WDTA0WDTE WDTA0.WDTE
#define WDTA0EVAC WDTA0.EVAC
#define WDTA0REF WDTA0.REF
#define WDTA0MD WDTA0.MD
#define SWD0CLR SWD0.CLR
#define SWD0STS0 SWD0.STS0
#define SWD0STS1 SWD0.STS1
#define SWD0STSC SWD0.STSC
#define SWD0WDTE SWD0.WDTE
#define SWD0MD SWD0.MD
#define SWD0PCAD SWD0.PCAD
#define FSGD1APROT00 FSGD1A.PROT00.UINT32
#define FSGD1APROT00L FSGD1A.PROT00.UINT16[L]
#define FSGD1APROT00LL FSGD1A.PROT00.UINT8[LL]
#define FSGD1APROT00LH FSGD1A.PROT00.UINT8[LH]
#define FSGD1APROT00H FSGD1A.PROT00.UINT16[H]
#define FSGD1APROT00HL FSGD1A.PROT00.UINT8[HL]
#define FSGD1APROT00HH FSGD1A.PROT00.UINT8[HH]
#define FSGD1ASPID00 FSGD1A.SPID00.UINT32
#define FSGD1ASPID00L FSGD1A.SPID00.UINT16[L]
#define FSGD1ASPID00LL FSGD1A.SPID00.UINT8[LL]
#define FSGD1ASPID00LH FSGD1A.SPID00.UINT8[LH]
#define FSGD1ASPID00H FSGD1A.SPID00.UINT16[H]
#define FSGD1ASPID00HL FSGD1A.SPID00.UINT8[HL]
#define FSGD1ASPID00HH FSGD1A.SPID00.UINT8[HH]
#define FSGD1APROT01 FSGD1A.PROT01.UINT32
#define FSGD1APROT01L FSGD1A.PROT01.UINT16[L]
#define FSGD1APROT01LL FSGD1A.PROT01.UINT8[LL]
#define FSGD1APROT01LH FSGD1A.PROT01.UINT8[LH]
#define FSGD1APROT01H FSGD1A.PROT01.UINT16[H]
#define FSGD1APROT01HL FSGD1A.PROT01.UINT8[HL]
#define FSGD1APROT01HH FSGD1A.PROT01.UINT8[HH]
#define FSGD1ASPID01 FSGD1A.SPID01.UINT32
#define FSGD1ASPID01L FSGD1A.SPID01.UINT16[L]
#define FSGD1ASPID01LL FSGD1A.SPID01.UINT8[LL]
#define FSGD1ASPID01LH FSGD1A.SPID01.UINT8[LH]
#define FSGD1ASPID01H FSGD1A.SPID01.UINT16[H]
#define FSGD1ASPID01HL FSGD1A.SPID01.UINT8[HL]
#define FSGD1ASPID01HH FSGD1A.SPID01.UINT8[HH]
#define FSGD1APROT02 FSGD1A.PROT02.UINT32
#define FSGD1APROT02L FSGD1A.PROT02.UINT16[L]
#define FSGD1APROT02LL FSGD1A.PROT02.UINT8[LL]
#define FSGD1APROT02LH FSGD1A.PROT02.UINT8[LH]
#define FSGD1APROT02H FSGD1A.PROT02.UINT16[H]
#define FSGD1APROT02HL FSGD1A.PROT02.UINT8[HL]
#define FSGD1APROT02HH FSGD1A.PROT02.UINT8[HH]
#define FSGD1ASPID02 FSGD1A.SPID02.UINT32
#define FSGD1ASPID02L FSGD1A.SPID02.UINT16[L]
#define FSGD1ASPID02LL FSGD1A.SPID02.UINT8[LL]
#define FSGD1ASPID02LH FSGD1A.SPID02.UINT8[LH]
#define FSGD1ASPID02H FSGD1A.SPID02.UINT16[H]
#define FSGD1ASPID02HL FSGD1A.SPID02.UINT8[HL]
#define FSGD1ASPID02HH FSGD1A.SPID02.UINT8[HH]
#define FSGD1APROT03 FSGD1A.PROT03.UINT32
#define FSGD1APROT03L FSGD1A.PROT03.UINT16[L]
#define FSGD1APROT03LL FSGD1A.PROT03.UINT8[LL]
#define FSGD1APROT03LH FSGD1A.PROT03.UINT8[LH]
#define FSGD1APROT03H FSGD1A.PROT03.UINT16[H]
#define FSGD1APROT03HL FSGD1A.PROT03.UINT8[HL]
#define FSGD1APROT03HH FSGD1A.PROT03.UINT8[HH]
#define FSGD1ASPID03 FSGD1A.SPID03.UINT32
#define FSGD1ASPID03L FSGD1A.SPID03.UINT16[L]
#define FSGD1ASPID03LL FSGD1A.SPID03.UINT8[LL]
#define FSGD1ASPID03LH FSGD1A.SPID03.UINT8[LH]
#define FSGD1ASPID03H FSGD1A.SPID03.UINT16[H]
#define FSGD1ASPID03HL FSGD1A.SPID03.UINT8[HL]
#define FSGD1ASPID03HH FSGD1A.SPID03.UINT8[HH]
#define FSGD1APROT04 FSGD1A.PROT04.UINT32
#define FSGD1APROT04L FSGD1A.PROT04.UINT16[L]
#define FSGD1APROT04LL FSGD1A.PROT04.UINT8[LL]
#define FSGD1APROT04LH FSGD1A.PROT04.UINT8[LH]
#define FSGD1APROT04H FSGD1A.PROT04.UINT16[H]
#define FSGD1APROT04HL FSGD1A.PROT04.UINT8[HL]
#define FSGD1APROT04HH FSGD1A.PROT04.UINT8[HH]
#define FSGD1ASPID04 FSGD1A.SPID04.UINT32
#define FSGD1ASPID04L FSGD1A.SPID04.UINT16[L]
#define FSGD1ASPID04LL FSGD1A.SPID04.UINT8[LL]
#define FSGD1ASPID04LH FSGD1A.SPID04.UINT8[LH]
#define FSGD1ASPID04H FSGD1A.SPID04.UINT16[H]
#define FSGD1ASPID04HL FSGD1A.SPID04.UINT8[HL]
#define FSGD1ASPID04HH FSGD1A.SPID04.UINT8[HH]
#define FSGD1APROT05 FSGD1A.PROT05.UINT32
#define FSGD1APROT05L FSGD1A.PROT05.UINT16[L]
#define FSGD1APROT05LL FSGD1A.PROT05.UINT8[LL]
#define FSGD1APROT05LH FSGD1A.PROT05.UINT8[LH]
#define FSGD1APROT05H FSGD1A.PROT05.UINT16[H]
#define FSGD1APROT05HL FSGD1A.PROT05.UINT8[HL]
#define FSGD1APROT05HH FSGD1A.PROT05.UINT8[HH]
#define FSGD1ASPID05 FSGD1A.SPID05.UINT32
#define FSGD1ASPID05L FSGD1A.SPID05.UINT16[L]
#define FSGD1ASPID05LL FSGD1A.SPID05.UINT8[LL]
#define FSGD1ASPID05LH FSGD1A.SPID05.UINT8[LH]
#define FSGD1ASPID05H FSGD1A.SPID05.UINT16[H]
#define FSGD1ASPID05HL FSGD1A.SPID05.UINT8[HL]
#define FSGD1ASPID05HH FSGD1A.SPID05.UINT8[HH]
#define ERRSLV1CTL ERRSLV1.CTL
#define ERRSLV1STAT ERRSLV1.STAT
#define ERRSLV1TYPE ERRSLV1.TYPE
#define FSGD1BPROT00 FSGD1B.PROT00.UINT32
#define FSGD1BPROT00L FSGD1B.PROT00.UINT16[L]
#define FSGD1BPROT00LL FSGD1B.PROT00.UINT8[LL]
#define FSGD1BPROT00LH FSGD1B.PROT00.UINT8[LH]
#define FSGD1BPROT00H FSGD1B.PROT00.UINT16[H]
#define FSGD1BPROT00HL FSGD1B.PROT00.UINT8[HL]
#define FSGD1BPROT00HH FSGD1B.PROT00.UINT8[HH]
#define FSGD1BSPID00 FSGD1B.SPID00.UINT32
#define FSGD1BSPID00L FSGD1B.SPID00.UINT16[L]
#define FSGD1BSPID00LL FSGD1B.SPID00.UINT8[LL]
#define FSGD1BSPID00LH FSGD1B.SPID00.UINT8[LH]
#define FSGD1BSPID00H FSGD1B.SPID00.UINT16[H]
#define FSGD1BSPID00HL FSGD1B.SPID00.UINT8[HL]
#define FSGD1BSPID00HH FSGD1B.SPID00.UINT8[HH]
#define FSGD1BPROT01 FSGD1B.PROT01.UINT32
#define FSGD1BPROT01L FSGD1B.PROT01.UINT16[L]
#define FSGD1BPROT01LL FSGD1B.PROT01.UINT8[LL]
#define FSGD1BPROT01LH FSGD1B.PROT01.UINT8[LH]
#define FSGD1BPROT01H FSGD1B.PROT01.UINT16[H]
#define FSGD1BPROT01HL FSGD1B.PROT01.UINT8[HL]
#define FSGD1BPROT01HH FSGD1B.PROT01.UINT8[HH]
#define FSGD1BSPID01 FSGD1B.SPID01.UINT32
#define FSGD1BSPID01L FSGD1B.SPID01.UINT16[L]
#define FSGD1BSPID01LL FSGD1B.SPID01.UINT8[LL]
#define FSGD1BSPID01LH FSGD1B.SPID01.UINT8[LH]
#define FSGD1BSPID01H FSGD1B.SPID01.UINT16[H]
#define FSGD1BSPID01HL FSGD1B.SPID01.UINT8[HL]
#define FSGD1BSPID01HH FSGD1B.SPID01.UINT8[HH]
#define FSGD1BPROT06 FSGD1B.PROT06.UINT32
#define FSGD1BPROT06L FSGD1B.PROT06.UINT16[L]
#define FSGD1BPROT06LL FSGD1B.PROT06.UINT8[LL]
#define FSGD1BPROT06LH FSGD1B.PROT06.UINT8[LH]
#define FSGD1BPROT06H FSGD1B.PROT06.UINT16[H]
#define FSGD1BPROT06HL FSGD1B.PROT06.UINT8[HL]
#define FSGD1BPROT06HH FSGD1B.PROT06.UINT8[HH]
#define FSGD1BSPID06 FSGD1B.SPID06.UINT32
#define FSGD1BSPID06L FSGD1B.SPID06.UINT16[L]
#define FSGD1BSPID06LL FSGD1B.SPID06.UINT8[LL]
#define FSGD1BSPID06LH FSGD1B.SPID06.UINT8[LH]
#define FSGD1BSPID06H FSGD1B.SPID06.UINT16[H]
#define FSGD1BSPID06HL FSGD1B.SPID06.UINT8[HL]
#define FSGD1BSPID06HH FSGD1B.SPID06.UINT8[HH]
#define FSGD1BPROT07 FSGD1B.PROT07.UINT32
#define FSGD1BPROT07L FSGD1B.PROT07.UINT16[L]
#define FSGD1BPROT07LL FSGD1B.PROT07.UINT8[LL]
#define FSGD1BPROT07LH FSGD1B.PROT07.UINT8[LH]
#define FSGD1BPROT07H FSGD1B.PROT07.UINT16[H]
#define FSGD1BPROT07HL FSGD1B.PROT07.UINT8[HL]
#define FSGD1BPROT07HH FSGD1B.PROT07.UINT8[HH]
#define FSGD1BSPID07 FSGD1B.SPID07.UINT32
#define FSGD1BSPID07L FSGD1B.SPID07.UINT16[L]
#define FSGD1BSPID07LL FSGD1B.SPID07.UINT8[LL]
#define FSGD1BSPID07LH FSGD1B.SPID07.UINT8[LH]
#define FSGD1BSPID07H FSGD1B.SPID07.UINT16[H]
#define FSGD1BSPID07HL FSGD1B.SPID07.UINT8[HL]
#define FSGD1BSPID07HH FSGD1B.SPID07.UINT8[HH]
#define FSGD1BPROT10 FSGD1B.PROT10.UINT32
#define FSGD1BPROT10L FSGD1B.PROT10.UINT16[L]
#define FSGD1BPROT10LL FSGD1B.PROT10.UINT8[LL]
#define FSGD1BPROT10LH FSGD1B.PROT10.UINT8[LH]
#define FSGD1BPROT10H FSGD1B.PROT10.UINT16[H]
#define FSGD1BPROT10HL FSGD1B.PROT10.UINT8[HL]
#define FSGD1BPROT10HH FSGD1B.PROT10.UINT8[HH]
#define FSGD1BSPID10 FSGD1B.SPID10.UINT32
#define FSGD1BSPID10L FSGD1B.SPID10.UINT16[L]
#define FSGD1BSPID10LL FSGD1B.SPID10.UINT8[LL]
#define FSGD1BSPID10LH FSGD1B.SPID10.UINT8[LH]
#define FSGD1BSPID10H FSGD1B.SPID10.UINT16[H]
#define FSGD1BSPID10HL FSGD1B.SPID10.UINT8[HL]
#define FSGD1BSPID10HH FSGD1B.SPID10.UINT8[HH]
#define FSGD1BPROT11 FSGD1B.PROT11.UINT32
#define FSGD1BPROT11L FSGD1B.PROT11.UINT16[L]
#define FSGD1BPROT11LL FSGD1B.PROT11.UINT8[LL]
#define FSGD1BPROT11LH FSGD1B.PROT11.UINT8[LH]
#define FSGD1BPROT11H FSGD1B.PROT11.UINT16[H]
#define FSGD1BPROT11HL FSGD1B.PROT11.UINT8[HL]
#define FSGD1BPROT11HH FSGD1B.PROT11.UINT8[HH]
#define FSGD1BSPID11 FSGD1B.SPID11.UINT32
#define FSGD1BSPID11L FSGD1B.SPID11.UINT16[L]
#define FSGD1BSPID11LL FSGD1B.SPID11.UINT8[LL]
#define FSGD1BSPID11LH FSGD1B.SPID11.UINT8[LH]
#define FSGD1BSPID11H FSGD1B.SPID11.UINT16[H]
#define FSGD1BSPID11HL FSGD1B.SPID11.UINT8[HL]
#define FSGD1BSPID11HH FSGD1B.SPID11.UINT8[HH]
#define FSGD1BPROT12 FSGD1B.PROT12.UINT32
#define FSGD1BPROT12L FSGD1B.PROT12.UINT16[L]
#define FSGD1BPROT12LL FSGD1B.PROT12.UINT8[LL]
#define FSGD1BPROT12LH FSGD1B.PROT12.UINT8[LH]
#define FSGD1BPROT12H FSGD1B.PROT12.UINT16[H]
#define FSGD1BPROT12HL FSGD1B.PROT12.UINT8[HL]
#define FSGD1BPROT12HH FSGD1B.PROT12.UINT8[HH]
#define FSGD1BSPID12 FSGD1B.SPID12.UINT32
#define FSGD1BSPID12L FSGD1B.SPID12.UINT16[L]
#define FSGD1BSPID12LL FSGD1B.SPID12.UINT8[LL]
#define FSGD1BSPID12LH FSGD1B.SPID12.UINT8[LH]
#define FSGD1BSPID12H FSGD1B.SPID12.UINT16[H]
#define FSGD1BSPID12HL FSGD1B.SPID12.UINT8[HL]
#define FSGD1BSPID12HH FSGD1B.SPID12.UINT8[HH]
#define FSGD1BPROT13 FSGD1B.PROT13.UINT32
#define FSGD1BPROT13L FSGD1B.PROT13.UINT16[L]
#define FSGD1BPROT13LL FSGD1B.PROT13.UINT8[LL]
#define FSGD1BPROT13LH FSGD1B.PROT13.UINT8[LH]
#define FSGD1BPROT13H FSGD1B.PROT13.UINT16[H]
#define FSGD1BPROT13HL FSGD1B.PROT13.UINT8[HL]
#define FSGD1BPROT13HH FSGD1B.PROT13.UINT8[HH]
#define FSGD1BSPID13 FSGD1B.SPID13.UINT32
#define FSGD1BSPID13L FSGD1B.SPID13.UINT16[L]
#define FSGD1BSPID13LL FSGD1B.SPID13.UINT8[LL]
#define FSGD1BSPID13LH FSGD1B.SPID13.UINT8[LH]
#define FSGD1BSPID13H FSGD1B.SPID13.UINT16[H]
#define FSGD1BSPID13HL FSGD1B.SPID13.UINT8[HL]
#define FSGD1BSPID13HH FSGD1B.SPID13.UINT8[HH]
#define ERRSLV1AICTL ERRSLV1AI.CTL
#define ERRSLV1AISTAT ERRSLV1AI.STAT
#define ERRSLV1AITYPE ERRSLV1AI.TYPE
#define MCAN0CREL MCAN0.CREL.UINT32
#define MCAN0CRELL MCAN0.CREL.UINT16[L]
#define MCAN0CRELLL MCAN0.CREL.UINT8[LL]
#define MCAN0CRELLH MCAN0.CREL.UINT8[LH]
#define MCAN0CRELH MCAN0.CREL.UINT16[H]
#define MCAN0CRELHL MCAN0.CREL.UINT8[HL]
#define MCAN0CRELHH MCAN0.CREL.UINT8[HH]
#define MCAN0ENDN MCAN0.ENDN.UINT32
#define MCAN0ENDNL MCAN0.ENDN.UINT16[L]
#define MCAN0ENDNLL MCAN0.ENDN.UINT8[LL]
#define MCAN0ENDNLH MCAN0.ENDN.UINT8[LH]
#define MCAN0ENDNH MCAN0.ENDN.UINT16[H]
#define MCAN0ENDNHL MCAN0.ENDN.UINT8[HL]
#define MCAN0ENDNHH MCAN0.ENDN.UINT8[HH]
#define MCAN0DBTP MCAN0.DBTP.UINT32
#define MCAN0FBTP MCAN0.DBTP.UINT32
#define MCAN0DBTPL MCAN0.DBTP.UINT16[L]
#define MCAN0FBTPL MCAN0.DBTP.UINT16[L]
#define MCAN0DBTPLL MCAN0.DBTP.UINT8[LL]
#define MCAN0FBTPLL MCAN0.DBTP.UINT8[LL]
#define MCAN0DBTPLH MCAN0.DBTP.UINT8[LH]
#define MCAN0FBTPLH MCAN0.DBTP.UINT8[LH]
#define MCAN0DBTPH MCAN0.DBTP.UINT16[H]
#define MCAN0FBTPH MCAN0.DBTP.UINT16[H]
#define MCAN0DBTPHL MCAN0.DBTP.UINT8[HL]
#define MCAN0FBTPHL MCAN0.DBTP.UINT8[HL]
#define MCAN0DBTPHH MCAN0.DBTP.UINT8[HH]
#define MCAN0FBTPHH MCAN0.DBTP.UINT8[HH]
#define MCAN0TEST MCAN0.TEST.UINT32
#define MCAN0TESTL MCAN0.TEST.UINT16[L]
#define MCAN0TESTLL MCAN0.TEST.UINT8[LL]
#define MCAN0TESTLH MCAN0.TEST.UINT8[LH]
#define MCAN0RWD MCAN0.RWD.UINT32
#define MCAN0RWDL MCAN0.RWD.UINT16[L]
#define MCAN0RWDLL MCAN0.RWD.UINT8[LL]
#define MCAN0RWDLH MCAN0.RWD.UINT8[LH]
#define MCAN0CCCR MCAN0.CCCR.UINT32
#define MCAN0CCCRL MCAN0.CCCR.UINT16[L]
#define MCAN0CCCRLL MCAN0.CCCR.UINT8[LL]
#define MCAN0CCCRLH MCAN0.CCCR.UINT8[LH]
#define MCAN0BTP MCAN0.BTP.UINT32
#define MCAN0NBTP MCAN0.BTP.UINT32
#define MCAN0BTPL MCAN0.BTP.UINT16[L]
#define MCAN0NBTPL MCAN0.BTP.UINT16[L]
#define MCAN0BTPLL MCAN0.BTP.UINT8[LL]
#define MCAN0NBTPLL MCAN0.BTP.UINT8[LL]
#define MCAN0BTPLH MCAN0.BTP.UINT8[LH]
#define MCAN0NBTPLH MCAN0.BTP.UINT8[LH]
#define MCAN0BTPH MCAN0.BTP.UINT16[H]
#define MCAN0NBTPH MCAN0.BTP.UINT16[H]
#define MCAN0BTPHL MCAN0.BTP.UINT8[HL]
#define MCAN0NBTPHL MCAN0.BTP.UINT8[HL]
#define MCAN0BTPHH MCAN0.BTP.UINT8[HH]
#define MCAN0NBTPHH MCAN0.BTP.UINT8[HH]
#define MCAN0TSCC MCAN0.TSCC.UINT32
#define MCAN0TSCCL MCAN0.TSCC.UINT16[L]
#define MCAN0TSCCLL MCAN0.TSCC.UINT8[LL]
#define MCAN0TSCCLH MCAN0.TSCC.UINT8[LH]
#define MCAN0TSCCH MCAN0.TSCC.UINT16[H]
#define MCAN0TSCCHL MCAN0.TSCC.UINT8[HL]
#define MCAN0TSCCHH MCAN0.TSCC.UINT8[HH]
#define MCAN0TSCV MCAN0.TSCV.UINT32
#define MCAN0TSCVL MCAN0.TSCV.UINT16[L]
#define MCAN0TSCVLL MCAN0.TSCV.UINT8[LL]
#define MCAN0TSCVLH MCAN0.TSCV.UINT8[LH]
#define MCAN0TOCC MCAN0.TOCC.UINT32
#define MCAN0TOCCL MCAN0.TOCC.UINT16[L]
#define MCAN0TOCCLL MCAN0.TOCC.UINT8[LL]
#define MCAN0TOCCLH MCAN0.TOCC.UINT8[LH]
#define MCAN0TOCCH MCAN0.TOCC.UINT16[H]
#define MCAN0TOCCHL MCAN0.TOCC.UINT8[HL]
#define MCAN0TOCCHH MCAN0.TOCC.UINT8[HH]
#define MCAN0TOCV MCAN0.TOCV.UINT32
#define MCAN0TOCVL MCAN0.TOCV.UINT16[L]
#define MCAN0TOCVLL MCAN0.TOCV.UINT8[LL]
#define MCAN0TOCVLH MCAN0.TOCV.UINT8[LH]
#define MCAN0ECR MCAN0.ECR.UINT32
#define MCAN0ECRL MCAN0.ECR.UINT16[L]
#define MCAN0ECRLL MCAN0.ECR.UINT8[LL]
#define MCAN0ECRLH MCAN0.ECR.UINT8[LH]
#define MCAN0ECRH MCAN0.ECR.UINT16[H]
#define MCAN0ECRHL MCAN0.ECR.UINT8[HL]
#define MCAN0ECRHH MCAN0.ECR.UINT8[HH]
#define MCAN0PSR MCAN0.PSR.UINT32
#define MCAN0PSRL MCAN0.PSR.UINT16[L]
#define MCAN0PSRLL MCAN0.PSR.UINT8[LL]
#define MCAN0PSRLH MCAN0.PSR.UINT8[LH]
#define MCAN0TDCR MCAN0.TDCR.UINT32
#define MCAN0TDCRL MCAN0.TDCR.UINT16[L]
#define MCAN0TDCRLL MCAN0.TDCR.UINT8[LL]
#define MCAN0TDCRLH MCAN0.TDCR.UINT8[LH]
#define MCAN0IR MCAN0.IR.UINT32
#define MCAN0IRL MCAN0.IR.UINT16[L]
#define MCAN0IRLL MCAN0.IR.UINT8[LL]
#define MCAN0IRLH MCAN0.IR.UINT8[LH]
#define MCAN0IRH MCAN0.IR.UINT16[H]
#define MCAN0IRHL MCAN0.IR.UINT8[HL]
#define MCAN0IRHH MCAN0.IR.UINT8[HH]
#define MCAN0IE MCAN0.IE.UINT32
#define MCAN0IEL MCAN0.IE.UINT16[L]
#define MCAN0IELL MCAN0.IE.UINT8[LL]
#define MCAN0IELH MCAN0.IE.UINT8[LH]
#define MCAN0IEH MCAN0.IE.UINT16[H]
#define MCAN0IEHL MCAN0.IE.UINT8[HL]
#define MCAN0IEHH MCAN0.IE.UINT8[HH]
#define MCAN0ILS MCAN0.ILS.UINT32
#define MCAN0ILSL MCAN0.ILS.UINT16[L]
#define MCAN0ILSLL MCAN0.ILS.UINT8[LL]
#define MCAN0ILSLH MCAN0.ILS.UINT8[LH]
#define MCAN0ILSH MCAN0.ILS.UINT16[H]
#define MCAN0ILSHL MCAN0.ILS.UINT8[HL]
#define MCAN0ILSHH MCAN0.ILS.UINT8[HH]
#define MCAN0ILE MCAN0.ILE.UINT32
#define MCAN0ILEL MCAN0.ILE.UINT16[L]
#define MCAN0ILELL MCAN0.ILE.UINT8[LL]
#define MCAN0ILELH MCAN0.ILE.UINT8[LH]
#define MCAN0GFC MCAN0.GFC.UINT32
#define MCAN0GFCL MCAN0.GFC.UINT16[L]
#define MCAN0GFCLL MCAN0.GFC.UINT8[LL]
#define MCAN0GFCLH MCAN0.GFC.UINT8[LH]
#define MCAN0SIDFC MCAN0.SIDFC.UINT32
#define MCAN0SIDFCL MCAN0.SIDFC.UINT16[L]
#define MCAN0SIDFCLL MCAN0.SIDFC.UINT8[LL]
#define MCAN0SIDFCLH MCAN0.SIDFC.UINT8[LH]
#define MCAN0SIDFCH MCAN0.SIDFC.UINT16[H]
#define MCAN0SIDFCHL MCAN0.SIDFC.UINT8[HL]
#define MCAN0SIDFCHH MCAN0.SIDFC.UINT8[HH]
#define MCAN0XIDFC MCAN0.XIDFC.UINT32
#define MCAN0XIDFCL MCAN0.XIDFC.UINT16[L]
#define MCAN0XIDFCLL MCAN0.XIDFC.UINT8[LL]
#define MCAN0XIDFCLH MCAN0.XIDFC.UINT8[LH]
#define MCAN0XIDFCH MCAN0.XIDFC.UINT16[H]
#define MCAN0XIDFCHL MCAN0.XIDFC.UINT8[HL]
#define MCAN0XIDFCHH MCAN0.XIDFC.UINT8[HH]
#define MCAN0XIDAM MCAN0.XIDAM.UINT32
#define MCAN0XIDAML MCAN0.XIDAM.UINT16[L]
#define MCAN0XIDAMLL MCAN0.XIDAM.UINT8[LL]
#define MCAN0XIDAMLH MCAN0.XIDAM.UINT8[LH]
#define MCAN0XIDAMH MCAN0.XIDAM.UINT16[H]
#define MCAN0XIDAMHL MCAN0.XIDAM.UINT8[HL]
#define MCAN0XIDAMHH MCAN0.XIDAM.UINT8[HH]
#define MCAN0HPMS MCAN0.HPMS.UINT32
#define MCAN0HPMSL MCAN0.HPMS.UINT16[L]
#define MCAN0HPMSLL MCAN0.HPMS.UINT8[LL]
#define MCAN0HPMSLH MCAN0.HPMS.UINT8[LH]
#define MCAN0NDAT1 MCAN0.NDAT1.UINT32
#define MCAN0NDAT1L MCAN0.NDAT1.UINT16[L]
#define MCAN0NDAT1LL MCAN0.NDAT1.UINT8[LL]
#define MCAN0NDAT1LH MCAN0.NDAT1.UINT8[LH]
#define MCAN0NDAT1H MCAN0.NDAT1.UINT16[H]
#define MCAN0NDAT1HL MCAN0.NDAT1.UINT8[HL]
#define MCAN0NDAT1HH MCAN0.NDAT1.UINT8[HH]
#define MCAN0NDAT2 MCAN0.NDAT2.UINT32
#define MCAN0NDAT2L MCAN0.NDAT2.UINT16[L]
#define MCAN0NDAT2LL MCAN0.NDAT2.UINT8[LL]
#define MCAN0NDAT2LH MCAN0.NDAT2.UINT8[LH]
#define MCAN0NDAT2H MCAN0.NDAT2.UINT16[H]
#define MCAN0NDAT2HL MCAN0.NDAT2.UINT8[HL]
#define MCAN0NDAT2HH MCAN0.NDAT2.UINT8[HH]
#define MCAN0RXF0C MCAN0.RXF0C.UINT32
#define MCAN0RXF0CL MCAN0.RXF0C.UINT16[L]
#define MCAN0RXF0CLL MCAN0.RXF0C.UINT8[LL]
#define MCAN0RXF0CLH MCAN0.RXF0C.UINT8[LH]
#define MCAN0RXF0CH MCAN0.RXF0C.UINT16[H]
#define MCAN0RXF0CHL MCAN0.RXF0C.UINT8[HL]
#define MCAN0RXF0CHH MCAN0.RXF0C.UINT8[HH]
#define MCAN0RXF0S MCAN0.RXF0S.UINT32
#define MCAN0RXF0SL MCAN0.RXF0S.UINT16[L]
#define MCAN0RXF0SLL MCAN0.RXF0S.UINT8[LL]
#define MCAN0RXF0SLH MCAN0.RXF0S.UINT8[LH]
#define MCAN0RXF0SH MCAN0.RXF0S.UINT16[H]
#define MCAN0RXF0SHL MCAN0.RXF0S.UINT8[HL]
#define MCAN0RXF0SHH MCAN0.RXF0S.UINT8[HH]
#define MCAN0RXF0A MCAN0.RXF0A.UINT32
#define MCAN0RXF0AL MCAN0.RXF0A.UINT16[L]
#define MCAN0RXF0ALL MCAN0.RXF0A.UINT8[LL]
#define MCAN0RXF0ALH MCAN0.RXF0A.UINT8[LH]
#define MCAN0RXBC MCAN0.RXBC.UINT32
#define MCAN0RXBCL MCAN0.RXBC.UINT16[L]
#define MCAN0RXBCLL MCAN0.RXBC.UINT8[LL]
#define MCAN0RXBCLH MCAN0.RXBC.UINT8[LH]
#define MCAN0RXF1C MCAN0.RXF1C.UINT32
#define MCAN0RXF1CL MCAN0.RXF1C.UINT16[L]
#define MCAN0RXF1CLL MCAN0.RXF1C.UINT8[LL]
#define MCAN0RXF1CLH MCAN0.RXF1C.UINT8[LH]
#define MCAN0RXF1CH MCAN0.RXF1C.UINT16[H]
#define MCAN0RXF1CHL MCAN0.RXF1C.UINT8[HL]
#define MCAN0RXF1CHH MCAN0.RXF1C.UINT8[HH]
#define MCAN0RXF1S MCAN0.RXF1S.UINT32
#define MCAN0RXF1SL MCAN0.RXF1S.UINT16[L]
#define MCAN0RXF1SLL MCAN0.RXF1S.UINT8[LL]
#define MCAN0RXF1SLH MCAN0.RXF1S.UINT8[LH]
#define MCAN0RXF1SH MCAN0.RXF1S.UINT16[H]
#define MCAN0RXF1SHL MCAN0.RXF1S.UINT8[HL]
#define MCAN0RXF1SHH MCAN0.RXF1S.UINT8[HH]
#define MCAN0RXF1A MCAN0.RXF1A.UINT32
#define MCAN0RXF1AL MCAN0.RXF1A.UINT16[L]
#define MCAN0RXF1ALL MCAN0.RXF1A.UINT8[LL]
#define MCAN0RXF1ALH MCAN0.RXF1A.UINT8[LH]
#define MCAN0RXESC MCAN0.RXESC.UINT32
#define MCAN0RXESCL MCAN0.RXESC.UINT16[L]
#define MCAN0RXESCLL MCAN0.RXESC.UINT8[LL]
#define MCAN0RXESCLH MCAN0.RXESC.UINT8[LH]
#define MCAN0TXBC MCAN0.TXBC.UINT32
#define MCAN0TXBCL MCAN0.TXBC.UINT16[L]
#define MCAN0TXBCLL MCAN0.TXBC.UINT8[LL]
#define MCAN0TXBCLH MCAN0.TXBC.UINT8[LH]
#define MCAN0TXBCH MCAN0.TXBC.UINT16[H]
#define MCAN0TXBCHL MCAN0.TXBC.UINT8[HL]
#define MCAN0TXBCHH MCAN0.TXBC.UINT8[HH]
#define MCAN0TXFQS MCAN0.TXFQS.UINT32
#define MCAN0TXFQSL MCAN0.TXFQS.UINT16[L]
#define MCAN0TXFQSLL MCAN0.TXFQS.UINT8[LL]
#define MCAN0TXFQSLH MCAN0.TXFQS.UINT8[LH]
#define MCAN0TXFQSH MCAN0.TXFQS.UINT16[H]
#define MCAN0TXFQSHL MCAN0.TXFQS.UINT8[HL]
#define MCAN0TXFQSHH MCAN0.TXFQS.UINT8[HH]
#define MCAN0TXESC MCAN0.TXESC.UINT32
#define MCAN0TXESCL MCAN0.TXESC.UINT16[L]
#define MCAN0TXESCLL MCAN0.TXESC.UINT8[LL]
#define MCAN0TXESCLH MCAN0.TXESC.UINT8[LH]
#define MCAN0TXBRP MCAN0.TXBRP.UINT32
#define MCAN0TXBRPL MCAN0.TXBRP.UINT16[L]
#define MCAN0TXBRPLL MCAN0.TXBRP.UINT8[LL]
#define MCAN0TXBRPLH MCAN0.TXBRP.UINT8[LH]
#define MCAN0TXBRPH MCAN0.TXBRP.UINT16[H]
#define MCAN0TXBRPHL MCAN0.TXBRP.UINT8[HL]
#define MCAN0TXBRPHH MCAN0.TXBRP.UINT8[HH]
#define MCAN0TXBAR MCAN0.TXBAR.UINT32
#define MCAN0TXBARL MCAN0.TXBAR.UINT16[L]
#define MCAN0TXBARLL MCAN0.TXBAR.UINT8[LL]
#define MCAN0TXBARLH MCAN0.TXBAR.UINT8[LH]
#define MCAN0TXBARH MCAN0.TXBAR.UINT16[H]
#define MCAN0TXBARHL MCAN0.TXBAR.UINT8[HL]
#define MCAN0TXBARHH MCAN0.TXBAR.UINT8[HH]
#define MCAN0TXBCR MCAN0.TXBCR.UINT32
#define MCAN0TXBCRL MCAN0.TXBCR.UINT16[L]
#define MCAN0TXBCRLL MCAN0.TXBCR.UINT8[LL]
#define MCAN0TXBCRLH MCAN0.TXBCR.UINT8[LH]
#define MCAN0TXBCRH MCAN0.TXBCR.UINT16[H]
#define MCAN0TXBCRHL MCAN0.TXBCR.UINT8[HL]
#define MCAN0TXBCRHH MCAN0.TXBCR.UINT8[HH]
#define MCAN0TXBTO MCAN0.TXBTO.UINT32
#define MCAN0TXBTOL MCAN0.TXBTO.UINT16[L]
#define MCAN0TXBTOLL MCAN0.TXBTO.UINT8[LL]
#define MCAN0TXBTOLH MCAN0.TXBTO.UINT8[LH]
#define MCAN0TXBTOH MCAN0.TXBTO.UINT16[H]
#define MCAN0TXBTOHL MCAN0.TXBTO.UINT8[HL]
#define MCAN0TXBTOHH MCAN0.TXBTO.UINT8[HH]
#define MCAN0TXBCF MCAN0.TXBCF.UINT32
#define MCAN0TXBCFL MCAN0.TXBCF.UINT16[L]
#define MCAN0TXBCFLL MCAN0.TXBCF.UINT8[LL]
#define MCAN0TXBCFLH MCAN0.TXBCF.UINT8[LH]
#define MCAN0TXBCFH MCAN0.TXBCF.UINT16[H]
#define MCAN0TXBCFHL MCAN0.TXBCF.UINT8[HL]
#define MCAN0TXBCFHH MCAN0.TXBCF.UINT8[HH]
#define MCAN0TXBTIE MCAN0.TXBTIE.UINT32
#define MCAN0TXBTIEL MCAN0.TXBTIE.UINT16[L]
#define MCAN0TXBTIELL MCAN0.TXBTIE.UINT8[LL]
#define MCAN0TXBTIELH MCAN0.TXBTIE.UINT8[LH]
#define MCAN0TXBTIEH MCAN0.TXBTIE.UINT16[H]
#define MCAN0TXBTIEHL MCAN0.TXBTIE.UINT8[HL]
#define MCAN0TXBTIEHH MCAN0.TXBTIE.UINT8[HH]
#define MCAN0TXBCIE MCAN0.TXBCIE.UINT32
#define MCAN0TXBCIEL MCAN0.TXBCIE.UINT16[L]
#define MCAN0TXBCIELL MCAN0.TXBCIE.UINT8[LL]
#define MCAN0TXBCIELH MCAN0.TXBCIE.UINT8[LH]
#define MCAN0TXBCIEH MCAN0.TXBCIE.UINT16[H]
#define MCAN0TXBCIEHL MCAN0.TXBCIE.UINT8[HL]
#define MCAN0TXBCIEHH MCAN0.TXBCIE.UINT8[HH]
#define MCAN0TXEFC MCAN0.TXEFC.UINT32
#define MCAN0TXEFCL MCAN0.TXEFC.UINT16[L]
#define MCAN0TXEFCLL MCAN0.TXEFC.UINT8[LL]
#define MCAN0TXEFCLH MCAN0.TXEFC.UINT8[LH]
#define MCAN0TXEFCH MCAN0.TXEFC.UINT16[H]
#define MCAN0TXEFCHL MCAN0.TXEFC.UINT8[HL]
#define MCAN0TXEFCHH MCAN0.TXEFC.UINT8[HH]
#define MCAN0TXEFS MCAN0.TXEFS.UINT32
#define MCAN0TXEFSL MCAN0.TXEFS.UINT16[L]
#define MCAN0TXEFSLL MCAN0.TXEFS.UINT8[LL]
#define MCAN0TXEFSLH MCAN0.TXEFS.UINT8[LH]
#define MCAN0TXEFSH MCAN0.TXEFS.UINT16[H]
#define MCAN0TXEFSHL MCAN0.TXEFS.UINT8[HL]
#define MCAN0TXEFSHH MCAN0.TXEFS.UINT8[HH]
#define MCAN0TXEFA MCAN0.TXEFA.UINT32
#define MCAN0TXEFAL MCAN0.TXEFA.UINT16[L]
#define MCAN0TXEFALL MCAN0.TXEFA.UINT8[LL]
#define MCAN0TXEFALH MCAN0.TXEFA.UINT8[LH]
#define DCRB1CIN DCRB1.CIN
#define DCRB1COUT DCRB1.COUT
#define DCRB1CTL DCRB1.CTL
#define DCRB3CIN DCRB3.CIN
#define DCRB3COUT DCRB3.COUT
#define DCRB3CTL DCRB3.CTL
#define CLMA0CTL0 CLMA0.CTL0
#define CLMA0CMPL CLMA0.CMPL
#define CLMA0CMPH CLMA0.CMPH
#define CLMA0PCMD CLMA0.PCMD
#define CLMA0PS CLMA0.PS
#define CLMA0EMU0 CLMA0.EMU0
#define CLMA1CTL0 CLMA1.CTL0
#define CLMA1CMPL CLMA1.CMPL
#define CLMA1CMPH CLMA1.CMPH
#define CLMA1PCMD CLMA1.PCMD
#define CLMA1PS CLMA1.PS
#define CLMA1EMU0 CLMA1.EMU0
#define CLMA2CTL0 CLMA2.CTL0
#define CLMA2CMPL CLMA2.CMPL
#define CLMA2CMPH CLMA2.CMPH
#define CLMA2PCMD CLMA2.PCMD
#define CLMA2PS CLMA2.PS
#define CLMA2EMU0 CLMA2.EMU0
#define CLMA3CTL0 CLMA3.CTL0
#define CLMA3CMPL CLMA3.CMPL
#define CLMA3CMPH CLMA3.CMPH
#define CLMA3PCMD CLMA3.PCMD
#define CLMA3PS CLMA3.PS
#define CLMA3EMU0 CLMA3.EMU0
#define CLMA5CTL0 CLMA5.CTL0
#define CLMA5CTL1 CLMA5.CTL1
#define CLMA5CMPL CLMA5.CMPL
#define CLMA5CMPH CLMA5.CMPH
#define CLMA5PCMD CLMA5.PCMD
#define CLMA5PS CLMA5.PS
#define CLMA5EMU0 CLMA5.EMU0
#define FSGD4APROT00 FSGD4A.PROT00.UINT32
#define FSGD4APROT00L FSGD4A.PROT00.UINT16[L]
#define FSGD4APROT00LL FSGD4A.PROT00.UINT8[LL]
#define FSGD4APROT00LH FSGD4A.PROT00.UINT8[LH]
#define FSGD4APROT00H FSGD4A.PROT00.UINT16[H]
#define FSGD4APROT00HL FSGD4A.PROT00.UINT8[HL]
#define FSGD4APROT00HH FSGD4A.PROT00.UINT8[HH]
#define FSGD4ASPID00 FSGD4A.SPID00.UINT32
#define FSGD4ASPID00L FSGD4A.SPID00.UINT16[L]
#define FSGD4ASPID00LL FSGD4A.SPID00.UINT8[LL]
#define FSGD4ASPID00LH FSGD4A.SPID00.UINT8[LH]
#define FSGD4ASPID00H FSGD4A.SPID00.UINT16[H]
#define FSGD4ASPID00HL FSGD4A.SPID00.UINT8[HL]
#define FSGD4ASPID00HH FSGD4A.SPID00.UINT8[HH]
#define FSGD4APROT01 FSGD4A.PROT01.UINT32
#define FSGD4APROT01L FSGD4A.PROT01.UINT16[L]
#define FSGD4APROT01LL FSGD4A.PROT01.UINT8[LL]
#define FSGD4APROT01LH FSGD4A.PROT01.UINT8[LH]
#define FSGD4APROT01H FSGD4A.PROT01.UINT16[H]
#define FSGD4APROT01HL FSGD4A.PROT01.UINT8[HL]
#define FSGD4APROT01HH FSGD4A.PROT01.UINT8[HH]
#define FSGD4ASPID01 FSGD4A.SPID01.UINT32
#define FSGD4ASPID01L FSGD4A.SPID01.UINT16[L]
#define FSGD4ASPID01LL FSGD4A.SPID01.UINT8[LL]
#define FSGD4ASPID01LH FSGD4A.SPID01.UINT8[LH]
#define FSGD4ASPID01H FSGD4A.SPID01.UINT16[H]
#define FSGD4ASPID01HL FSGD4A.SPID01.UINT8[HL]
#define FSGD4ASPID01HH FSGD4A.SPID01.UINT8[HH]
#define FSGD4APROT02 FSGD4A.PROT02.UINT32
#define FSGD4APROT02L FSGD4A.PROT02.UINT16[L]
#define FSGD4APROT02LL FSGD4A.PROT02.UINT8[LL]
#define FSGD4APROT02LH FSGD4A.PROT02.UINT8[LH]
#define FSGD4APROT02H FSGD4A.PROT02.UINT16[H]
#define FSGD4APROT02HL FSGD4A.PROT02.UINT8[HL]
#define FSGD4APROT02HH FSGD4A.PROT02.UINT8[HH]
#define FSGD4ASPID02 FSGD4A.SPID02.UINT32
#define FSGD4ASPID02L FSGD4A.SPID02.UINT16[L]
#define FSGD4ASPID02LL FSGD4A.SPID02.UINT8[LL]
#define FSGD4ASPID02LH FSGD4A.SPID02.UINT8[LH]
#define FSGD4ASPID02H FSGD4A.SPID02.UINT16[H]
#define FSGD4ASPID02HL FSGD4A.SPID02.UINT8[HL]
#define FSGD4ASPID02HH FSGD4A.SPID02.UINT8[HH]
#define FSGD4APROT03 FSGD4A.PROT03.UINT32
#define FSGD4APROT03L FSGD4A.PROT03.UINT16[L]
#define FSGD4APROT03LL FSGD4A.PROT03.UINT8[LL]
#define FSGD4APROT03LH FSGD4A.PROT03.UINT8[LH]
#define FSGD4APROT03H FSGD4A.PROT03.UINT16[H]
#define FSGD4APROT03HL FSGD4A.PROT03.UINT8[HL]
#define FSGD4APROT03HH FSGD4A.PROT03.UINT8[HH]
#define FSGD4ASPID03 FSGD4A.SPID03.UINT32
#define FSGD4ASPID03L FSGD4A.SPID03.UINT16[L]
#define FSGD4ASPID03LL FSGD4A.SPID03.UINT8[LL]
#define FSGD4ASPID03LH FSGD4A.SPID03.UINT8[LH]
#define FSGD4ASPID03H FSGD4A.SPID03.UINT16[H]
#define FSGD4ASPID03HL FSGD4A.SPID03.UINT8[HL]
#define FSGD4ASPID03HH FSGD4A.SPID03.UINT8[HH]
#define FSGD4APROT04 FSGD4A.PROT04.UINT32
#define FSGD4APROT04L FSGD4A.PROT04.UINT16[L]
#define FSGD4APROT04LL FSGD4A.PROT04.UINT8[LL]
#define FSGD4APROT04LH FSGD4A.PROT04.UINT8[LH]
#define FSGD4APROT04H FSGD4A.PROT04.UINT16[H]
#define FSGD4APROT04HL FSGD4A.PROT04.UINT8[HL]
#define FSGD4APROT04HH FSGD4A.PROT04.UINT8[HH]
#define FSGD4ASPID04 FSGD4A.SPID04.UINT32
#define FSGD4ASPID04L FSGD4A.SPID04.UINT16[L]
#define FSGD4ASPID04LL FSGD4A.SPID04.UINT8[LL]
#define FSGD4ASPID04LH FSGD4A.SPID04.UINT8[LH]
#define FSGD4ASPID04H FSGD4A.SPID04.UINT16[H]
#define FSGD4ASPID04HL FSGD4A.SPID04.UINT8[HL]
#define FSGD4ASPID04HH FSGD4A.SPID04.UINT8[HH]
#define FSGD4APROT05 FSGD4A.PROT05.UINT32
#define FSGD4APROT05L FSGD4A.PROT05.UINT16[L]
#define FSGD4APROT05LL FSGD4A.PROT05.UINT8[LL]
#define FSGD4APROT05LH FSGD4A.PROT05.UINT8[LH]
#define FSGD4APROT05H FSGD4A.PROT05.UINT16[H]
#define FSGD4APROT05HL FSGD4A.PROT05.UINT8[HL]
#define FSGD4APROT05HH FSGD4A.PROT05.UINT8[HH]
#define FSGD4ASPID05 FSGD4A.SPID05.UINT32
#define FSGD4ASPID05L FSGD4A.SPID05.UINT16[L]
#define FSGD4ASPID05LL FSGD4A.SPID05.UINT8[LL]
#define FSGD4ASPID05LH FSGD4A.SPID05.UINT8[LH]
#define FSGD4ASPID05H FSGD4A.SPID05.UINT16[H]
#define FSGD4ASPID05HL FSGD4A.SPID05.UINT8[HL]
#define FSGD4ASPID05HH FSGD4A.SPID05.UINT8[HH]
#define FSGD4APROT06 FSGD4A.PROT06.UINT32
#define FSGD4APROT06L FSGD4A.PROT06.UINT16[L]
#define FSGD4APROT06LL FSGD4A.PROT06.UINT8[LL]
#define FSGD4APROT06LH FSGD4A.PROT06.UINT8[LH]
#define FSGD4APROT06H FSGD4A.PROT06.UINT16[H]
#define FSGD4APROT06HL FSGD4A.PROT06.UINT8[HL]
#define FSGD4APROT06HH FSGD4A.PROT06.UINT8[HH]
#define FSGD4ASPID06 FSGD4A.SPID06.UINT32
#define FSGD4ASPID06L FSGD4A.SPID06.UINT16[L]
#define FSGD4ASPID06LL FSGD4A.SPID06.UINT8[LL]
#define FSGD4ASPID06LH FSGD4A.SPID06.UINT8[LH]
#define FSGD4ASPID06H FSGD4A.SPID06.UINT16[H]
#define FSGD4ASPID06HL FSGD4A.SPID06.UINT8[HL]
#define FSGD4ASPID06HH FSGD4A.SPID06.UINT8[HH]
#define FSGD4APROT07 FSGD4A.PROT07.UINT32
#define FSGD4APROT07L FSGD4A.PROT07.UINT16[L]
#define FSGD4APROT07LL FSGD4A.PROT07.UINT8[LL]
#define FSGD4APROT07LH FSGD4A.PROT07.UINT8[LH]
#define FSGD4APROT07H FSGD4A.PROT07.UINT16[H]
#define FSGD4APROT07HL FSGD4A.PROT07.UINT8[HL]
#define FSGD4APROT07HH FSGD4A.PROT07.UINT8[HH]
#define FSGD4ASPID07 FSGD4A.SPID07.UINT32
#define FSGD4ASPID07L FSGD4A.SPID07.UINT16[L]
#define FSGD4ASPID07LL FSGD4A.SPID07.UINT8[LL]
#define FSGD4ASPID07LH FSGD4A.SPID07.UINT8[LH]
#define FSGD4ASPID07H FSGD4A.SPID07.UINT16[H]
#define FSGD4ASPID07HL FSGD4A.SPID07.UINT8[HL]
#define FSGD4ASPID07HH FSGD4A.SPID07.UINT8[HH]
#define FSGD4APROT08 FSGD4A.PROT08.UINT32
#define FSGD4APROT08L FSGD4A.PROT08.UINT16[L]
#define FSGD4APROT08LL FSGD4A.PROT08.UINT8[LL]
#define FSGD4APROT08LH FSGD4A.PROT08.UINT8[LH]
#define FSGD4APROT08H FSGD4A.PROT08.UINT16[H]
#define FSGD4APROT08HL FSGD4A.PROT08.UINT8[HL]
#define FSGD4APROT08HH FSGD4A.PROT08.UINT8[HH]
#define FSGD4ASPID08 FSGD4A.SPID08.UINT32
#define FSGD4ASPID08L FSGD4A.SPID08.UINT16[L]
#define FSGD4ASPID08LL FSGD4A.SPID08.UINT8[LL]
#define FSGD4ASPID08LH FSGD4A.SPID08.UINT8[LH]
#define FSGD4ASPID08H FSGD4A.SPID08.UINT16[H]
#define FSGD4ASPID08HL FSGD4A.SPID08.UINT8[HL]
#define FSGD4ASPID08HH FSGD4A.SPID08.UINT8[HH]
#define FSGD4APROT09 FSGD4A.PROT09.UINT32
#define FSGD4APROT09L FSGD4A.PROT09.UINT16[L]
#define FSGD4APROT09LL FSGD4A.PROT09.UINT8[LL]
#define FSGD4APROT09LH FSGD4A.PROT09.UINT8[LH]
#define FSGD4APROT09H FSGD4A.PROT09.UINT16[H]
#define FSGD4APROT09HL FSGD4A.PROT09.UINT8[HL]
#define FSGD4APROT09HH FSGD4A.PROT09.UINT8[HH]
#define FSGD4ASPID09 FSGD4A.SPID09.UINT32
#define FSGD4ASPID09L FSGD4A.SPID09.UINT16[L]
#define FSGD4ASPID09LL FSGD4A.SPID09.UINT8[LL]
#define FSGD4ASPID09LH FSGD4A.SPID09.UINT8[LH]
#define FSGD4ASPID09H FSGD4A.SPID09.UINT16[H]
#define FSGD4ASPID09HL FSGD4A.SPID09.UINT8[HL]
#define FSGD4ASPID09HH FSGD4A.SPID09.UINT8[HH]
#define FSGD4APROT10 FSGD4A.PROT10.UINT32
#define FSGD4APROT10L FSGD4A.PROT10.UINT16[L]
#define FSGD4APROT10LL FSGD4A.PROT10.UINT8[LL]
#define FSGD4APROT10LH FSGD4A.PROT10.UINT8[LH]
#define FSGD4APROT10H FSGD4A.PROT10.UINT16[H]
#define FSGD4APROT10HL FSGD4A.PROT10.UINT8[HL]
#define FSGD4APROT10HH FSGD4A.PROT10.UINT8[HH]
#define FSGD4ASPID10 FSGD4A.SPID10.UINT32
#define FSGD4ASPID10L FSGD4A.SPID10.UINT16[L]
#define FSGD4ASPID10LL FSGD4A.SPID10.UINT8[LL]
#define FSGD4ASPID10LH FSGD4A.SPID10.UINT8[LH]
#define FSGD4ASPID10H FSGD4A.SPID10.UINT16[H]
#define FSGD4ASPID10HL FSGD4A.SPID10.UINT8[HL]
#define FSGD4ASPID10HH FSGD4A.SPID10.UINT8[HH]
#define FSGD4APROT11 FSGD4A.PROT11.UINT32
#define FSGD4APROT11L FSGD4A.PROT11.UINT16[L]
#define FSGD4APROT11LL FSGD4A.PROT11.UINT8[LL]
#define FSGD4APROT11LH FSGD4A.PROT11.UINT8[LH]
#define FSGD4APROT11H FSGD4A.PROT11.UINT16[H]
#define FSGD4APROT11HL FSGD4A.PROT11.UINT8[HL]
#define FSGD4APROT11HH FSGD4A.PROT11.UINT8[HH]
#define FSGD4ASPID11 FSGD4A.SPID11.UINT32
#define FSGD4ASPID11L FSGD4A.SPID11.UINT16[L]
#define FSGD4ASPID11LL FSGD4A.SPID11.UINT8[LL]
#define FSGD4ASPID11LH FSGD4A.SPID11.UINT8[LH]
#define FSGD4ASPID11H FSGD4A.SPID11.UINT16[H]
#define FSGD4ASPID11HL FSGD4A.SPID11.UINT8[HL]
#define FSGD4ASPID11HH FSGD4A.SPID11.UINT8[HH]
#define FSGD4APROT12 FSGD4A.PROT12.UINT32
#define FSGD4APROT12L FSGD4A.PROT12.UINT16[L]
#define FSGD4APROT12LL FSGD4A.PROT12.UINT8[LL]
#define FSGD4APROT12LH FSGD4A.PROT12.UINT8[LH]
#define FSGD4APROT12H FSGD4A.PROT12.UINT16[H]
#define FSGD4APROT12HL FSGD4A.PROT12.UINT8[HL]
#define FSGD4APROT12HH FSGD4A.PROT12.UINT8[HH]
#define FSGD4ASPID12 FSGD4A.SPID12.UINT32
#define FSGD4ASPID12L FSGD4A.SPID12.UINT16[L]
#define FSGD4ASPID12LL FSGD4A.SPID12.UINT8[LL]
#define FSGD4ASPID12LH FSGD4A.SPID12.UINT8[LH]
#define FSGD4ASPID12H FSGD4A.SPID12.UINT16[H]
#define FSGD4ASPID12HL FSGD4A.SPID12.UINT8[HL]
#define FSGD4ASPID12HH FSGD4A.SPID12.UINT8[HH]
#define FSGD4APROT13 FSGD4A.PROT13.UINT32
#define FSGD4APROT13L FSGD4A.PROT13.UINT16[L]
#define FSGD4APROT13LL FSGD4A.PROT13.UINT8[LL]
#define FSGD4APROT13LH FSGD4A.PROT13.UINT8[LH]
#define FSGD4APROT13H FSGD4A.PROT13.UINT16[H]
#define FSGD4APROT13HL FSGD4A.PROT13.UINT8[HL]
#define FSGD4APROT13HH FSGD4A.PROT13.UINT8[HH]
#define FSGD4ASPID13 FSGD4A.SPID13.UINT32
#define FSGD4ASPID13L FSGD4A.SPID13.UINT16[L]
#define FSGD4ASPID13LL FSGD4A.SPID13.UINT8[LL]
#define FSGD4ASPID13LH FSGD4A.SPID13.UINT8[LH]
#define FSGD4ASPID13H FSGD4A.SPID13.UINT16[H]
#define FSGD4ASPID13HL FSGD4A.SPID13.UINT8[HL]
#define FSGD4ASPID13HH FSGD4A.SPID13.UINT8[HH]
#define FSGD4APROT14 FSGD4A.PROT14.UINT32
#define FSGD4APROT14L FSGD4A.PROT14.UINT16[L]
#define FSGD4APROT14LL FSGD4A.PROT14.UINT8[LL]
#define FSGD4APROT14LH FSGD4A.PROT14.UINT8[LH]
#define FSGD4APROT14H FSGD4A.PROT14.UINT16[H]
#define FSGD4APROT14HL FSGD4A.PROT14.UINT8[HL]
#define FSGD4APROT14HH FSGD4A.PROT14.UINT8[HH]
#define FSGD4ASPID14 FSGD4A.SPID14.UINT32
#define FSGD4ASPID14L FSGD4A.SPID14.UINT16[L]
#define FSGD4ASPID14LL FSGD4A.SPID14.UINT8[LL]
#define FSGD4ASPID14LH FSGD4A.SPID14.UINT8[LH]
#define FSGD4ASPID14H FSGD4A.SPID14.UINT16[H]
#define FSGD4ASPID14HL FSGD4A.SPID14.UINT8[HL]
#define FSGD4ASPID14HH FSGD4A.SPID14.UINT8[HH]
#define FSGD4APROT15 FSGD4A.PROT15.UINT32
#define FSGD4APROT15L FSGD4A.PROT15.UINT16[L]
#define FSGD4APROT15LL FSGD4A.PROT15.UINT8[LL]
#define FSGD4APROT15LH FSGD4A.PROT15.UINT8[LH]
#define FSGD4APROT15H FSGD4A.PROT15.UINT16[H]
#define FSGD4APROT15HL FSGD4A.PROT15.UINT8[HL]
#define FSGD4APROT15HH FSGD4A.PROT15.UINT8[HH]
#define FSGD4ASPID15 FSGD4A.SPID15.UINT32
#define FSGD4ASPID15L FSGD4A.SPID15.UINT16[L]
#define FSGD4ASPID15LL FSGD4A.SPID15.UINT8[LL]
#define FSGD4ASPID15LH FSGD4A.SPID15.UINT8[LH]
#define FSGD4ASPID15H FSGD4A.SPID15.UINT16[H]
#define FSGD4ASPID15HL FSGD4A.SPID15.UINT8[HL]
#define FSGD4ASPID15HH FSGD4A.SPID15.UINT8[HH]
#define ERRSLV4CTL ERRSLV4.CTL
#define ERRSLV4STAT ERRSLV4.STAT
#define ERRSLV4TYPE ERRSLV4.TYPE
#define FSGD4BPROT00 FSGD4B.PROT00.UINT32
#define FSGD4BPROT00L FSGD4B.PROT00.UINT16[L]
#define FSGD4BPROT00LL FSGD4B.PROT00.UINT8[LL]
#define FSGD4BPROT00LH FSGD4B.PROT00.UINT8[LH]
#define FSGD4BPROT00H FSGD4B.PROT00.UINT16[H]
#define FSGD4BPROT00HL FSGD4B.PROT00.UINT8[HL]
#define FSGD4BPROT00HH FSGD4B.PROT00.UINT8[HH]
#define FSGD4BSPID00 FSGD4B.SPID00.UINT32
#define FSGD4BSPID00L FSGD4B.SPID00.UINT16[L]
#define FSGD4BSPID00LL FSGD4B.SPID00.UINT8[LL]
#define FSGD4BSPID00LH FSGD4B.SPID00.UINT8[LH]
#define FSGD4BSPID00H FSGD4B.SPID00.UINT16[H]
#define FSGD4BSPID00HL FSGD4B.SPID00.UINT8[HL]
#define FSGD4BSPID00HH FSGD4B.SPID00.UINT8[HH]
#define FSGD4BPROT01 FSGD4B.PROT01.UINT32
#define FSGD4BPROT01L FSGD4B.PROT01.UINT16[L]
#define FSGD4BPROT01LL FSGD4B.PROT01.UINT8[LL]
#define FSGD4BPROT01LH FSGD4B.PROT01.UINT8[LH]
#define FSGD4BPROT01H FSGD4B.PROT01.UINT16[H]
#define FSGD4BPROT01HL FSGD4B.PROT01.UINT8[HL]
#define FSGD4BPROT01HH FSGD4B.PROT01.UINT8[HH]
#define FSGD4BSPID01 FSGD4B.SPID01.UINT32
#define FSGD4BSPID01L FSGD4B.SPID01.UINT16[L]
#define FSGD4BSPID01LL FSGD4B.SPID01.UINT8[LL]
#define FSGD4BSPID01LH FSGD4B.SPID01.UINT8[LH]
#define FSGD4BSPID01H FSGD4B.SPID01.UINT16[H]
#define FSGD4BSPID01HL FSGD4B.SPID01.UINT8[HL]
#define FSGD4BSPID01HH FSGD4B.SPID01.UINT8[HH]
#define FSGD4BPROT02 FSGD4B.PROT02.UINT32
#define FSGD4BPROT02L FSGD4B.PROT02.UINT16[L]
#define FSGD4BPROT02LL FSGD4B.PROT02.UINT8[LL]
#define FSGD4BPROT02LH FSGD4B.PROT02.UINT8[LH]
#define FSGD4BPROT02H FSGD4B.PROT02.UINT16[H]
#define FSGD4BPROT02HL FSGD4B.PROT02.UINT8[HL]
#define FSGD4BPROT02HH FSGD4B.PROT02.UINT8[HH]
#define FSGD4BSPID02 FSGD4B.SPID02.UINT32
#define FSGD4BSPID02L FSGD4B.SPID02.UINT16[L]
#define FSGD4BSPID02LL FSGD4B.SPID02.UINT8[LL]
#define FSGD4BSPID02LH FSGD4B.SPID02.UINT8[LH]
#define FSGD4BSPID02H FSGD4B.SPID02.UINT16[H]
#define FSGD4BSPID02HL FSGD4B.SPID02.UINT8[HL]
#define FSGD4BSPID02HH FSGD4B.SPID02.UINT8[HH]
#define FSGD4BPROT03 FSGD4B.PROT03.UINT32
#define FSGD4BPROT03L FSGD4B.PROT03.UINT16[L]
#define FSGD4BPROT03LL FSGD4B.PROT03.UINT8[LL]
#define FSGD4BPROT03LH FSGD4B.PROT03.UINT8[LH]
#define FSGD4BPROT03H FSGD4B.PROT03.UINT16[H]
#define FSGD4BPROT03HL FSGD4B.PROT03.UINT8[HL]
#define FSGD4BPROT03HH FSGD4B.PROT03.UINT8[HH]
#define FSGD4BSPID03 FSGD4B.SPID03.UINT32
#define FSGD4BSPID03L FSGD4B.SPID03.UINT16[L]
#define FSGD4BSPID03LL FSGD4B.SPID03.UINT8[LL]
#define FSGD4BSPID03LH FSGD4B.SPID03.UINT8[LH]
#define FSGD4BSPID03H FSGD4B.SPID03.UINT16[H]
#define FSGD4BSPID03HL FSGD4B.SPID03.UINT8[HL]
#define FSGD4BSPID03HH FSGD4B.SPID03.UINT8[HH]
#define FSGD4BPROT04 FSGD4B.PROT04.UINT32
#define FSGD4BPROT04L FSGD4B.PROT04.UINT16[L]
#define FSGD4BPROT04LL FSGD4B.PROT04.UINT8[LL]
#define FSGD4BPROT04LH FSGD4B.PROT04.UINT8[LH]
#define FSGD4BPROT04H FSGD4B.PROT04.UINT16[H]
#define FSGD4BPROT04HL FSGD4B.PROT04.UINT8[HL]
#define FSGD4BPROT04HH FSGD4B.PROT04.UINT8[HH]
#define FSGD4BSPID04 FSGD4B.SPID04.UINT32
#define FSGD4BSPID04L FSGD4B.SPID04.UINT16[L]
#define FSGD4BSPID04LL FSGD4B.SPID04.UINT8[LL]
#define FSGD4BSPID04LH FSGD4B.SPID04.UINT8[LH]
#define FSGD4BSPID04H FSGD4B.SPID04.UINT16[H]
#define FSGD4BSPID04HL FSGD4B.SPID04.UINT8[HL]
#define FSGD4BSPID04HH FSGD4B.SPID04.UINT8[HH]
#define FSGD4BPROT05 FSGD4B.PROT05.UINT32
#define FSGD4BPROT05L FSGD4B.PROT05.UINT16[L]
#define FSGD4BPROT05LL FSGD4B.PROT05.UINT8[LL]
#define FSGD4BPROT05LH FSGD4B.PROT05.UINT8[LH]
#define FSGD4BPROT05H FSGD4B.PROT05.UINT16[H]
#define FSGD4BPROT05HL FSGD4B.PROT05.UINT8[HL]
#define FSGD4BPROT05HH FSGD4B.PROT05.UINT8[HH]
#define FSGD4BSPID05 FSGD4B.SPID05.UINT32
#define FSGD4BSPID05L FSGD4B.SPID05.UINT16[L]
#define FSGD4BSPID05LL FSGD4B.SPID05.UINT8[LL]
#define FSGD4BSPID05LH FSGD4B.SPID05.UINT8[LH]
#define FSGD4BSPID05H FSGD4B.SPID05.UINT16[H]
#define FSGD4BSPID05HL FSGD4B.SPID05.UINT8[HL]
#define FSGD4BSPID05HH FSGD4B.SPID05.UINT8[HH]
#define FSGD4BPROT06 FSGD4B.PROT06.UINT32
#define FSGD4BPROT06L FSGD4B.PROT06.UINT16[L]
#define FSGD4BPROT06LL FSGD4B.PROT06.UINT8[LL]
#define FSGD4BPROT06LH FSGD4B.PROT06.UINT8[LH]
#define FSGD4BPROT06H FSGD4B.PROT06.UINT16[H]
#define FSGD4BPROT06HL FSGD4B.PROT06.UINT8[HL]
#define FSGD4BPROT06HH FSGD4B.PROT06.UINT8[HH]
#define FSGD4BSPID06 FSGD4B.SPID06.UINT32
#define FSGD4BSPID06L FSGD4B.SPID06.UINT16[L]
#define FSGD4BSPID06LL FSGD4B.SPID06.UINT8[LL]
#define FSGD4BSPID06LH FSGD4B.SPID06.UINT8[LH]
#define FSGD4BSPID06H FSGD4B.SPID06.UINT16[H]
#define FSGD4BSPID06HL FSGD4B.SPID06.UINT8[HL]
#define FSGD4BSPID06HH FSGD4B.SPID06.UINT8[HH]
#define FSGD4BPROT07 FSGD4B.PROT07.UINT32
#define FSGD4BPROT07L FSGD4B.PROT07.UINT16[L]
#define FSGD4BPROT07LL FSGD4B.PROT07.UINT8[LL]
#define FSGD4BPROT07LH FSGD4B.PROT07.UINT8[LH]
#define FSGD4BPROT07H FSGD4B.PROT07.UINT16[H]
#define FSGD4BPROT07HL FSGD4B.PROT07.UINT8[HL]
#define FSGD4BPROT07HH FSGD4B.PROT07.UINT8[HH]
#define FSGD4BSPID07 FSGD4B.SPID07.UINT32
#define FSGD4BSPID07L FSGD4B.SPID07.UINT16[L]
#define FSGD4BSPID07LL FSGD4B.SPID07.UINT8[LL]
#define FSGD4BSPID07LH FSGD4B.SPID07.UINT8[LH]
#define FSGD4BSPID07H FSGD4B.SPID07.UINT16[H]
#define FSGD4BSPID07HL FSGD4B.SPID07.UINT8[HL]
#define FSGD4BSPID07HH FSGD4B.SPID07.UINT8[HH]
#define FSGD4BPROT08 FSGD4B.PROT08.UINT32
#define FSGD4BPROT08L FSGD4B.PROT08.UINT16[L]
#define FSGD4BPROT08LL FSGD4B.PROT08.UINT8[LL]
#define FSGD4BPROT08LH FSGD4B.PROT08.UINT8[LH]
#define FSGD4BPROT08H FSGD4B.PROT08.UINT16[H]
#define FSGD4BPROT08HL FSGD4B.PROT08.UINT8[HL]
#define FSGD4BPROT08HH FSGD4B.PROT08.UINT8[HH]
#define FSGD4BSPID08 FSGD4B.SPID08.UINT32
#define FSGD4BSPID08L FSGD4B.SPID08.UINT16[L]
#define FSGD4BSPID08LL FSGD4B.SPID08.UINT8[LL]
#define FSGD4BSPID08LH FSGD4B.SPID08.UINT8[LH]
#define FSGD4BSPID08H FSGD4B.SPID08.UINT16[H]
#define FSGD4BSPID08HL FSGD4B.SPID08.UINT8[HL]
#define FSGD4BSPID08HH FSGD4B.SPID08.UINT8[HH]
#define FSGD4BPROT09 FSGD4B.PROT09.UINT32
#define FSGD4BPROT09L FSGD4B.PROT09.UINT16[L]
#define FSGD4BPROT09LL FSGD4B.PROT09.UINT8[LL]
#define FSGD4BPROT09LH FSGD4B.PROT09.UINT8[LH]
#define FSGD4BPROT09H FSGD4B.PROT09.UINT16[H]
#define FSGD4BPROT09HL FSGD4B.PROT09.UINT8[HL]
#define FSGD4BPROT09HH FSGD4B.PROT09.UINT8[HH]
#define FSGD4BSPID09 FSGD4B.SPID09.UINT32
#define FSGD4BSPID09L FSGD4B.SPID09.UINT16[L]
#define FSGD4BSPID09LL FSGD4B.SPID09.UINT8[LL]
#define FSGD4BSPID09LH FSGD4B.SPID09.UINT8[LH]
#define FSGD4BSPID09H FSGD4B.SPID09.UINT16[H]
#define FSGD4BSPID09HL FSGD4B.SPID09.UINT8[HL]
#define FSGD4BSPID09HH FSGD4B.SPID09.UINT8[HH]
#define FSGD4BPROT10 FSGD4B.PROT10.UINT32
#define FSGD4BPROT10L FSGD4B.PROT10.UINT16[L]
#define FSGD4BPROT10LL FSGD4B.PROT10.UINT8[LL]
#define FSGD4BPROT10LH FSGD4B.PROT10.UINT8[LH]
#define FSGD4BPROT10H FSGD4B.PROT10.UINT16[H]
#define FSGD4BPROT10HL FSGD4B.PROT10.UINT8[HL]
#define FSGD4BPROT10HH FSGD4B.PROT10.UINT8[HH]
#define FSGD4BSPID10 FSGD4B.SPID10.UINT32
#define FSGD4BSPID10L FSGD4B.SPID10.UINT16[L]
#define FSGD4BSPID10LL FSGD4B.SPID10.UINT8[LL]
#define FSGD4BSPID10LH FSGD4B.SPID10.UINT8[LH]
#define FSGD4BSPID10H FSGD4B.SPID10.UINT16[H]
#define FSGD4BSPID10HL FSGD4B.SPID10.UINT8[HL]
#define FSGD4BSPID10HH FSGD4B.SPID10.UINT8[HH]
#define FSGD4BPROT11 FSGD4B.PROT11.UINT32
#define FSGD4BPROT11L FSGD4B.PROT11.UINT16[L]
#define FSGD4BPROT11LL FSGD4B.PROT11.UINT8[LL]
#define FSGD4BPROT11LH FSGD4B.PROT11.UINT8[LH]
#define FSGD4BPROT11H FSGD4B.PROT11.UINT16[H]
#define FSGD4BPROT11HL FSGD4B.PROT11.UINT8[HL]
#define FSGD4BPROT11HH FSGD4B.PROT11.UINT8[HH]
#define FSGD4BSPID11 FSGD4B.SPID11.UINT32
#define FSGD4BSPID11L FSGD4B.SPID11.UINT16[L]
#define FSGD4BSPID11LL FSGD4B.SPID11.UINT8[LL]
#define FSGD4BSPID11LH FSGD4B.SPID11.UINT8[LH]
#define FSGD4BSPID11H FSGD4B.SPID11.UINT16[H]
#define FSGD4BSPID11HL FSGD4B.SPID11.UINT8[HL]
#define FSGD4BSPID11HH FSGD4B.SPID11.UINT8[HH]
#define FSGD4BPROT12 FSGD4B.PROT12.UINT32
#define FSGD4BPROT12L FSGD4B.PROT12.UINT16[L]
#define FSGD4BPROT12LL FSGD4B.PROT12.UINT8[LL]
#define FSGD4BPROT12LH FSGD4B.PROT12.UINT8[LH]
#define FSGD4BPROT12H FSGD4B.PROT12.UINT16[H]
#define FSGD4BPROT12HL FSGD4B.PROT12.UINT8[HL]
#define FSGD4BPROT12HH FSGD4B.PROT12.UINT8[HH]
#define FSGD4BSPID12 FSGD4B.SPID12.UINT32
#define FSGD4BSPID12L FSGD4B.SPID12.UINT16[L]
#define FSGD4BSPID12LL FSGD4B.SPID12.UINT8[LL]
#define FSGD4BSPID12LH FSGD4B.SPID12.UINT8[LH]
#define FSGD4BSPID12H FSGD4B.SPID12.UINT16[H]
#define FSGD4BSPID12HL FSGD4B.SPID12.UINT8[HL]
#define FSGD4BSPID12HH FSGD4B.SPID12.UINT8[HH]
#define FSGD4BPROT13 FSGD4B.PROT13.UINT32
#define FSGD4BPROT13L FSGD4B.PROT13.UINT16[L]
#define FSGD4BPROT13LL FSGD4B.PROT13.UINT8[LL]
#define FSGD4BPROT13LH FSGD4B.PROT13.UINT8[LH]
#define FSGD4BPROT13H FSGD4B.PROT13.UINT16[H]
#define FSGD4BPROT13HL FSGD4B.PROT13.UINT8[HL]
#define FSGD4BPROT13HH FSGD4B.PROT13.UINT8[HH]
#define FSGD4BSPID13 FSGD4B.SPID13.UINT32
#define FSGD4BSPID13L FSGD4B.SPID13.UINT16[L]
#define FSGD4BSPID13LL FSGD4B.SPID13.UINT8[LL]
#define FSGD4BSPID13LH FSGD4B.SPID13.UINT8[LH]
#define FSGD4BSPID13H FSGD4B.SPID13.UINT16[H]
#define FSGD4BSPID13HL FSGD4B.SPID13.UINT8[HL]
#define FSGD4BSPID13HH FSGD4B.SPID13.UINT8[HH]
#define FSGD4CPROT00 FSGD4C.PROT00.UINT32
#define FSGD4CPROT00L FSGD4C.PROT00.UINT16[L]
#define FSGD4CPROT00LL FSGD4C.PROT00.UINT8[LL]
#define FSGD4CPROT00LH FSGD4C.PROT00.UINT8[LH]
#define FSGD4CPROT00H FSGD4C.PROT00.UINT16[H]
#define FSGD4CPROT00HL FSGD4C.PROT00.UINT8[HL]
#define FSGD4CPROT00HH FSGD4C.PROT00.UINT8[HH]
#define FSGD4CSPID00 FSGD4C.SPID00.UINT32
#define FSGD4CSPID00L FSGD4C.SPID00.UINT16[L]
#define FSGD4CSPID00LL FSGD4C.SPID00.UINT8[LL]
#define FSGD4CSPID00LH FSGD4C.SPID00.UINT8[LH]
#define FSGD4CSPID00H FSGD4C.SPID00.UINT16[H]
#define FSGD4CSPID00HL FSGD4C.SPID00.UINT8[HL]
#define FSGD4CSPID00HH FSGD4C.SPID00.UINT8[HH]
#define FSGD4CPROT01 FSGD4C.PROT01.UINT32
#define FSGD4CPROT01L FSGD4C.PROT01.UINT16[L]
#define FSGD4CPROT01LL FSGD4C.PROT01.UINT8[LL]
#define FSGD4CPROT01LH FSGD4C.PROT01.UINT8[LH]
#define FSGD4CPROT01H FSGD4C.PROT01.UINT16[H]
#define FSGD4CPROT01HL FSGD4C.PROT01.UINT8[HL]
#define FSGD4CPROT01HH FSGD4C.PROT01.UINT8[HH]
#define FSGD4CSPID01 FSGD4C.SPID01.UINT32
#define FSGD4CSPID01L FSGD4C.SPID01.UINT16[L]
#define FSGD4CSPID01LL FSGD4C.SPID01.UINT8[LL]
#define FSGD4CSPID01LH FSGD4C.SPID01.UINT8[LH]
#define FSGD4CSPID01H FSGD4C.SPID01.UINT16[H]
#define FSGD4CSPID01HL FSGD4C.SPID01.UINT8[HL]
#define FSGD4CSPID01HH FSGD4C.SPID01.UINT8[HH]
#define FSGD4CPROT02 FSGD4C.PROT02.UINT32
#define FSGD4CPROT02L FSGD4C.PROT02.UINT16[L]
#define FSGD4CPROT02LL FSGD4C.PROT02.UINT8[LL]
#define FSGD4CPROT02LH FSGD4C.PROT02.UINT8[LH]
#define FSGD4CPROT02H FSGD4C.PROT02.UINT16[H]
#define FSGD4CPROT02HL FSGD4C.PROT02.UINT8[HL]
#define FSGD4CPROT02HH FSGD4C.PROT02.UINT8[HH]
#define FSGD4CSPID02 FSGD4C.SPID02.UINT32
#define FSGD4CSPID02L FSGD4C.SPID02.UINT16[L]
#define FSGD4CSPID02LL FSGD4C.SPID02.UINT8[LL]
#define FSGD4CSPID02LH FSGD4C.SPID02.UINT8[LH]
#define FSGD4CSPID02H FSGD4C.SPID02.UINT16[H]
#define FSGD4CSPID02HL FSGD4C.SPID02.UINT8[HL]
#define FSGD4CSPID02HH FSGD4C.SPID02.UINT8[HH]
#define FSGD4CPROT03 FSGD4C.PROT03.UINT32
#define FSGD4CPROT03L FSGD4C.PROT03.UINT16[L]
#define FSGD4CPROT03LL FSGD4C.PROT03.UINT8[LL]
#define FSGD4CPROT03LH FSGD4C.PROT03.UINT8[LH]
#define FSGD4CPROT03H FSGD4C.PROT03.UINT16[H]
#define FSGD4CPROT03HL FSGD4C.PROT03.UINT8[HL]
#define FSGD4CPROT03HH FSGD4C.PROT03.UINT8[HH]
#define FSGD4CSPID03 FSGD4C.SPID03.UINT32
#define FSGD4CSPID03L FSGD4C.SPID03.UINT16[L]
#define FSGD4CSPID03LL FSGD4C.SPID03.UINT8[LL]
#define FSGD4CSPID03LH FSGD4C.SPID03.UINT8[LH]
#define FSGD4CSPID03H FSGD4C.SPID03.UINT16[H]
#define FSGD4CSPID03HL FSGD4C.SPID03.UINT8[HL]
#define FSGD4CSPID03HH FSGD4C.SPID03.UINT8[HH]
#define FSGD4CPROT04 FSGD4C.PROT04.UINT32
#define FSGD4CPROT04L FSGD4C.PROT04.UINT16[L]
#define FSGD4CPROT04LL FSGD4C.PROT04.UINT8[LL]
#define FSGD4CPROT04LH FSGD4C.PROT04.UINT8[LH]
#define FSGD4CPROT04H FSGD4C.PROT04.UINT16[H]
#define FSGD4CPROT04HL FSGD4C.PROT04.UINT8[HL]
#define FSGD4CPROT04HH FSGD4C.PROT04.UINT8[HH]
#define FSGD4CSPID04 FSGD4C.SPID04.UINT32
#define FSGD4CSPID04L FSGD4C.SPID04.UINT16[L]
#define FSGD4CSPID04LL FSGD4C.SPID04.UINT8[LL]
#define FSGD4CSPID04LH FSGD4C.SPID04.UINT8[LH]
#define FSGD4CSPID04H FSGD4C.SPID04.UINT16[H]
#define FSGD4CSPID04HL FSGD4C.SPID04.UINT8[HL]
#define FSGD4CSPID04HH FSGD4C.SPID04.UINT8[HH]
#define FSGD4CPROT05 FSGD4C.PROT05.UINT32
#define FSGD4CPROT05L FSGD4C.PROT05.UINT16[L]
#define FSGD4CPROT05LL FSGD4C.PROT05.UINT8[LL]
#define FSGD4CPROT05LH FSGD4C.PROT05.UINT8[LH]
#define FSGD4CPROT05H FSGD4C.PROT05.UINT16[H]
#define FSGD4CPROT05HL FSGD4C.PROT05.UINT8[HL]
#define FSGD4CPROT05HH FSGD4C.PROT05.UINT8[HH]
#define FSGD4CSPID05 FSGD4C.SPID05.UINT32
#define FSGD4CSPID05L FSGD4C.SPID05.UINT16[L]
#define FSGD4CSPID05LL FSGD4C.SPID05.UINT8[LL]
#define FSGD4CSPID05LH FSGD4C.SPID05.UINT8[LH]
#define FSGD4CSPID05H FSGD4C.SPID05.UINT16[H]
#define FSGD4CSPID05HL FSGD4C.SPID05.UINT8[HL]
#define FSGD4CSPID05HH FSGD4C.SPID05.UINT8[HH]
#define FSGD4CPROT06 FSGD4C.PROT06.UINT32
#define FSGD4CPROT06L FSGD4C.PROT06.UINT16[L]
#define FSGD4CPROT06LL FSGD4C.PROT06.UINT8[LL]
#define FSGD4CPROT06LH FSGD4C.PROT06.UINT8[LH]
#define FSGD4CPROT06H FSGD4C.PROT06.UINT16[H]
#define FSGD4CPROT06HL FSGD4C.PROT06.UINT8[HL]
#define FSGD4CPROT06HH FSGD4C.PROT06.UINT8[HH]
#define FSGD4CSPID06 FSGD4C.SPID06.UINT32
#define FSGD4CSPID06L FSGD4C.SPID06.UINT16[L]
#define FSGD4CSPID06LL FSGD4C.SPID06.UINT8[LL]
#define FSGD4CSPID06LH FSGD4C.SPID06.UINT8[LH]
#define FSGD4CSPID06H FSGD4C.SPID06.UINT16[H]
#define FSGD4CSPID06HL FSGD4C.SPID06.UINT8[HL]
#define FSGD4CSPID06HH FSGD4C.SPID06.UINT8[HH]
#define FSGD4CPROT07 FSGD4C.PROT07.UINT32
#define FSGD4CPROT07L FSGD4C.PROT07.UINT16[L]
#define FSGD4CPROT07LL FSGD4C.PROT07.UINT8[LL]
#define FSGD4CPROT07LH FSGD4C.PROT07.UINT8[LH]
#define FSGD4CPROT07H FSGD4C.PROT07.UINT16[H]
#define FSGD4CPROT07HL FSGD4C.PROT07.UINT8[HL]
#define FSGD4CPROT07HH FSGD4C.PROT07.UINT8[HH]
#define FSGD4CSPID07 FSGD4C.SPID07.UINT32
#define FSGD4CSPID07L FSGD4C.SPID07.UINT16[L]
#define FSGD4CSPID07LL FSGD4C.SPID07.UINT8[LL]
#define FSGD4CSPID07LH FSGD4C.SPID07.UINT8[LH]
#define FSGD4CSPID07H FSGD4C.SPID07.UINT16[H]
#define FSGD4CSPID07HL FSGD4C.SPID07.UINT8[HL]
#define FSGD4CSPID07HH FSGD4C.SPID07.UINT8[HH]
#define FSGD4CPROT08 FSGD4C.PROT08.UINT32
#define FSGD4CPROT08L FSGD4C.PROT08.UINT16[L]
#define FSGD4CPROT08LL FSGD4C.PROT08.UINT8[LL]
#define FSGD4CPROT08LH FSGD4C.PROT08.UINT8[LH]
#define FSGD4CPROT08H FSGD4C.PROT08.UINT16[H]
#define FSGD4CPROT08HL FSGD4C.PROT08.UINT8[HL]
#define FSGD4CPROT08HH FSGD4C.PROT08.UINT8[HH]
#define FSGD4CSPID08 FSGD4C.SPID08.UINT32
#define FSGD4CSPID08L FSGD4C.SPID08.UINT16[L]
#define FSGD4CSPID08LL FSGD4C.SPID08.UINT8[LL]
#define FSGD4CSPID08LH FSGD4C.SPID08.UINT8[LH]
#define FSGD4CSPID08H FSGD4C.SPID08.UINT16[H]
#define FSGD4CSPID08HL FSGD4C.SPID08.UINT8[HL]
#define FSGD4CSPID08HH FSGD4C.SPID08.UINT8[HH]
#define FSGD4CPROT09 FSGD4C.PROT09.UINT32
#define FSGD4CPROT09L FSGD4C.PROT09.UINT16[L]
#define FSGD4CPROT09LL FSGD4C.PROT09.UINT8[LL]
#define FSGD4CPROT09LH FSGD4C.PROT09.UINT8[LH]
#define FSGD4CPROT09H FSGD4C.PROT09.UINT16[H]
#define FSGD4CPROT09HL FSGD4C.PROT09.UINT8[HL]
#define FSGD4CPROT09HH FSGD4C.PROT09.UINT8[HH]
#define FSGD4CSPID09 FSGD4C.SPID09.UINT32
#define FSGD4CSPID09L FSGD4C.SPID09.UINT16[L]
#define FSGD4CSPID09LL FSGD4C.SPID09.UINT8[LL]
#define FSGD4CSPID09LH FSGD4C.SPID09.UINT8[LH]
#define FSGD4CSPID09H FSGD4C.SPID09.UINT16[H]
#define FSGD4CSPID09HL FSGD4C.SPID09.UINT8[HL]
#define FSGD4CSPID09HH FSGD4C.SPID09.UINT8[HH]
#define FSGD4CPROT10 FSGD4C.PROT10.UINT32
#define FSGD4CPROT10L FSGD4C.PROT10.UINT16[L]
#define FSGD4CPROT10LL FSGD4C.PROT10.UINT8[LL]
#define FSGD4CPROT10LH FSGD4C.PROT10.UINT8[LH]
#define FSGD4CPROT10H FSGD4C.PROT10.UINT16[H]
#define FSGD4CPROT10HL FSGD4C.PROT10.UINT8[HL]
#define FSGD4CPROT10HH FSGD4C.PROT10.UINT8[HH]
#define FSGD4CSPID10 FSGD4C.SPID10.UINT32
#define FSGD4CSPID10L FSGD4C.SPID10.UINT16[L]
#define FSGD4CSPID10LL FSGD4C.SPID10.UINT8[LL]
#define FSGD4CSPID10LH FSGD4C.SPID10.UINT8[LH]
#define FSGD4CSPID10H FSGD4C.SPID10.UINT16[H]
#define FSGD4CSPID10HL FSGD4C.SPID10.UINT8[HL]
#define FSGD4CSPID10HH FSGD4C.SPID10.UINT8[HH]
#define FSGD4CPROT11 FSGD4C.PROT11.UINT32
#define FSGD4CPROT11L FSGD4C.PROT11.UINT16[L]
#define FSGD4CPROT11LL FSGD4C.PROT11.UINT8[LL]
#define FSGD4CPROT11LH FSGD4C.PROT11.UINT8[LH]
#define FSGD4CPROT11H FSGD4C.PROT11.UINT16[H]
#define FSGD4CPROT11HL FSGD4C.PROT11.UINT8[HL]
#define FSGD4CPROT11HH FSGD4C.PROT11.UINT8[HH]
#define FSGD4CSPID11 FSGD4C.SPID11.UINT32
#define FSGD4CSPID11L FSGD4C.SPID11.UINT16[L]
#define FSGD4CSPID11LL FSGD4C.SPID11.UINT8[LL]
#define FSGD4CSPID11LH FSGD4C.SPID11.UINT8[LH]
#define FSGD4CSPID11H FSGD4C.SPID11.UINT16[H]
#define FSGD4CSPID11HL FSGD4C.SPID11.UINT8[HL]
#define FSGD4CSPID11HH FSGD4C.SPID11.UINT8[HH]
#define FSGD4CPROT12 FSGD4C.PROT12.UINT32
#define FSGD4CPROT12L FSGD4C.PROT12.UINT16[L]
#define FSGD4CPROT12LL FSGD4C.PROT12.UINT8[LL]
#define FSGD4CPROT12LH FSGD4C.PROT12.UINT8[LH]
#define FSGD4CPROT12H FSGD4C.PROT12.UINT16[H]
#define FSGD4CPROT12HL FSGD4C.PROT12.UINT8[HL]
#define FSGD4CPROT12HH FSGD4C.PROT12.UINT8[HH]
#define FSGD4CSPID12 FSGD4C.SPID12.UINT32
#define FSGD4CSPID12L FSGD4C.SPID12.UINT16[L]
#define FSGD4CSPID12LL FSGD4C.SPID12.UINT8[LL]
#define FSGD4CSPID12LH FSGD4C.SPID12.UINT8[LH]
#define FSGD4CSPID12H FSGD4C.SPID12.UINT16[H]
#define FSGD4CSPID12HL FSGD4C.SPID12.UINT8[HL]
#define FSGD4CSPID12HH FSGD4C.SPID12.UINT8[HH]
#define FSGD4CPROT13 FSGD4C.PROT13.UINT32
#define FSGD4CPROT13L FSGD4C.PROT13.UINT16[L]
#define FSGD4CPROT13LL FSGD4C.PROT13.UINT8[LL]
#define FSGD4CPROT13LH FSGD4C.PROT13.UINT8[LH]
#define FSGD4CPROT13H FSGD4C.PROT13.UINT16[H]
#define FSGD4CPROT13HL FSGD4C.PROT13.UINT8[HL]
#define FSGD4CPROT13HH FSGD4C.PROT13.UINT8[HH]
#define FSGD4CSPID13 FSGD4C.SPID13.UINT32
#define FSGD4CSPID13L FSGD4C.SPID13.UINT16[L]
#define FSGD4CSPID13LL FSGD4C.SPID13.UINT8[LL]
#define FSGD4CSPID13LH FSGD4C.SPID13.UINT8[LH]
#define FSGD4CSPID13H FSGD4C.SPID13.UINT16[H]
#define FSGD4CSPID13HL FSGD4C.SPID13.UINT8[HL]
#define FSGD4CSPID13HH FSGD4C.SPID13.UINT8[HH]
#define ERRSLV4CCTL ERRSLV4C.CTL
#define ERRSLV4CSTAT ERRSLV4C.STAT
#define ERRSLV4CTYPE ERRSLV4C.TYPE
#define ERRSLV4AICTL ERRSLV4AI.CTL
#define ERRSLV4AISTAT ERRSLV4AI.STAT
#define ERRSLV4AITYPE ERRSLV4AI.TYPE
#define ADCF0VCR0 ADCF0.VCR0
#define ADCF0VCR1 ADCF0.VCR1
#define ADCF0VCR2 ADCF0.VCR2
#define ADCF0VCR3 ADCF0.VCR3
#define ADCF0VCR4 ADCF0.VCR4
#define ADCF0VCR5 ADCF0.VCR5
#define ADCF0VCR6 ADCF0.VCR6
#define ADCF0VCR7 ADCF0.VCR7
#define ADCF0VCR8 ADCF0.VCR8
#define ADCF0VCR9 ADCF0.VCR9
#define ADCF0VCR10 ADCF0.VCR10
#define ADCF0VCR11 ADCF0.VCR11
#define ADCF0VCR12 ADCF0.VCR12
#define ADCF0VCR13 ADCF0.VCR13
#define ADCF0VCR14 ADCF0.VCR14
#define ADCF0VCR15 ADCF0.VCR15
#define ADCF0VCR16 ADCF0.VCR16
#define ADCF0VCR17 ADCF0.VCR17
#define ADCF0VCR18 ADCF0.VCR18
#define ADCF0VCR19 ADCF0.VCR19
#define ADCF0VCR20 ADCF0.VCR20
#define ADCF0VCR21 ADCF0.VCR21
#define ADCF0VCR22 ADCF0.VCR22
#define ADCF0VCR23 ADCF0.VCR23
#define ADCF0DR00 ADCF0.DR00
#define ADCF0DR02 ADCF0.DR02
#define ADCF0DR04 ADCF0.DR04
#define ADCF0DR06 ADCF0.DR06
#define ADCF0DR08 ADCF0.DR08
#define ADCF0DR10 ADCF0.DR10
#define ADCF0DR12 ADCF0.DR12
#define ADCF0DR14 ADCF0.DR14
#define ADCF0DR16 ADCF0.DR16
#define ADCF0DR18 ADCF0.DR18
#define ADCF0DR20 ADCF0.DR20
#define ADCF0DR22 ADCF0.DR22
#define ADCF0DIR0 ADCF0.DIR0
#define ADCF0DIR1 ADCF0.DIR1
#define ADCF0DIR2 ADCF0.DIR2
#define ADCF0DIR3 ADCF0.DIR3
#define ADCF0DIR4 ADCF0.DIR4
#define ADCF0DIR5 ADCF0.DIR5
#define ADCF0DIR6 ADCF0.DIR6
#define ADCF0DIR7 ADCF0.DIR7
#define ADCF0DIR8 ADCF0.DIR8
#define ADCF0DIR9 ADCF0.DIR9
#define ADCF0DIR10 ADCF0.DIR10
#define ADCF0DIR11 ADCF0.DIR11
#define ADCF0DIR12 ADCF0.DIR12
#define ADCF0DIR13 ADCF0.DIR13
#define ADCF0DIR14 ADCF0.DIR14
#define ADCF0DIR15 ADCF0.DIR15
#define ADCF0DIR16 ADCF0.DIR16
#define ADCF0DIR17 ADCF0.DIR17
#define ADCF0DIR18 ADCF0.DIR18
#define ADCF0DIR19 ADCF0.DIR19
#define ADCF0DIR20 ADCF0.DIR20
#define ADCF0DIR21 ADCF0.DIR21
#define ADCF0DIR22 ADCF0.DIR22
#define ADCF0DIR23 ADCF0.DIR23
#define ADCF0ADSYNSTCR ADCF0.ADSYNSTCR
#define ADCF0ADTSYNSTCR ADCF0.ADTSYNSTCR
#define ADCF0ADHALTR ADCF0.ADHALTR
#define ADCF0ADCR1 ADCF0.ADCR1
#define ADCF0MPXCURCR ADCF0.MPXCURCR
#define ADCF0MPXCURR ADCF0.MPXCURR
#define ADCF0MPXOWR ADCF0.MPXOWR
#define ADCF0ADCR2 ADCF0.ADCR2
#define ADCF0ADENDP0 ADCF0.ADENDP0
#define ADCF0SFTCR ADCF0.SFTCR
#define ADCF0TDCR ADCF0.TDCR
#define ADCF0ULLMTBR0 ADCF0.ULLMTBR0.UINT32
#define ADCF0ULLMTBR0L ADCF0.ULLMTBR0.UINT16[L]
#define ADCF0ULLMTBR0H ADCF0.ULLMTBR0.UINT16[H]
#define ADCF0ULLMTBR1 ADCF0.ULLMTBR1.UINT32
#define ADCF0ULLMTBR1L ADCF0.ULLMTBR1.UINT16[L]
#define ADCF0ULLMTBR1H ADCF0.ULLMTBR1.UINT16[H]
#define ADCF0ULLMTBR2 ADCF0.ULLMTBR2.UINT32
#define ADCF0ULLMTBR2L ADCF0.ULLMTBR2.UINT16[L]
#define ADCF0ULLMTBR2H ADCF0.ULLMTBR2.UINT16[H]
#define ADCF0ECR ADCF0.ECR
#define ADCF0ULER ADCF0.ULER
#define ADCF0OWER ADCF0.OWER
#define ADCF0PER ADCF0.PER
#define ADCF0IDER ADCF0.IDER
#define ADCF0SGSTCR0 ADCF0.SGSTCR0
#define ADCF0SGCR0 ADCF0.SGCR0
#define ADCF0SGVCSP0 ADCF0.SGVCSP0
#define ADCF0SGVCEP0 ADCF0.SGVCEP0
#define ADCF0SGMCYCR0 ADCF0.SGMCYCR0
#define ADCF0SGSR0 ADCF0.SGSR0
#define ADCF0ULLMSR0 ADCF0.ULLMSR0
#define ADCF0SGSTCR1 ADCF0.SGSTCR1
#define ADCF0SGCR1 ADCF0.SGCR1
#define ADCF0SGVCSP1 ADCF0.SGVCSP1
#define ADCF0SGVCEP1 ADCF0.SGVCEP1
#define ADCF0SGMCYCR1 ADCF0.SGMCYCR1
#define ADCF0SGSR1 ADCF0.SGSR1
#define ADCF0ULLMSR1 ADCF0.ULLMSR1
#define ADCF0SGSTCR2 ADCF0.SGSTCR2
#define ADCF0SGCR2 ADCF0.SGCR2
#define ADCF0SGVCSP2 ADCF0.SGVCSP2
#define ADCF0SGVCEP2 ADCF0.SGVCEP2
#define ADCF0SGMCYCR2 ADCF0.SGMCYCR2
#define ADCF0SGSR2 ADCF0.SGSR2
#define ADCF0ULLMSR2 ADCF0.ULLMSR2
#define ADCF0SGSTCR3 ADCF0.SGSTCR3
#define ADCF0ADTSTCR3 ADCF0.ADTSTCR3
#define ADCF0ADTENDCR3 ADCF0.ADTENDCR3
#define ADCF0SGCR3 ADCF0.SGCR3
#define ADCF0SGVCSP3 ADCF0.SGVCSP3
#define ADCF0SGVCEP3 ADCF0.SGVCEP3
#define ADCF0SGMCYCR3 ADCF0.SGMCYCR3
#define ADCF0SGSR3 ADCF0.SGSR3
#define ADCF0ADTIPR3 ADCF0.ADTIPR3
#define ADCF0ADTPRR3 ADCF0.ADTPRR3
#define ADCF0ULLMSR3 ADCF0.ULLMSR3
#define ADCF0SGSTCR4 ADCF0.SGSTCR4
#define ADCF0ADTSTCR4 ADCF0.ADTSTCR4
#define ADCF0ADTENDCR4 ADCF0.ADTENDCR4
#define ADCF0SGCR4 ADCF0.SGCR4
#define ADCF0SGVCSP4 ADCF0.SGVCSP4
#define ADCF0SGVCEP4 ADCF0.SGVCEP4
#define ADCF0SGMCYCR4 ADCF0.SGMCYCR4
#define ADCF0SGSR4 ADCF0.SGSR4
#define ADCF0ADTIPR4 ADCF0.ADTIPR4
#define ADCF0ADTPRR4 ADCF0.ADTPRR4
#define ADCF0ULLMSR4 ADCF0.ULLMSR4
#define ADCF1VCR0 ADCF1.VCR0
#define ADCF1VCR1 ADCF1.VCR1
#define ADCF1VCR2 ADCF1.VCR2
#define ADCF1VCR3 ADCF1.VCR3
#define ADCF1VCR4 ADCF1.VCR4
#define ADCF1VCR5 ADCF1.VCR5
#define ADCF1VCR6 ADCF1.VCR6
#define ADCF1VCR7 ADCF1.VCR7
#define ADCF1VCR8 ADCF1.VCR8
#define ADCF1VCR9 ADCF1.VCR9
#define ADCF1VCR10 ADCF1.VCR10
#define ADCF1VCR11 ADCF1.VCR11
#define ADCF1VCR12 ADCF1.VCR12
#define ADCF1VCR13 ADCF1.VCR13
#define ADCF1VCR14 ADCF1.VCR14
#define ADCF1VCR15 ADCF1.VCR15
#define ADCF1VCR16 ADCF1.VCR16
#define ADCF1VCR17 ADCF1.VCR17
#define ADCF1VCR18 ADCF1.VCR18
#define ADCF1VCR19 ADCF1.VCR19
#define ADCF1DR00 ADCF1.DR00
#define ADCF1DR02 ADCF1.DR02
#define ADCF1DR04 ADCF1.DR04
#define ADCF1DR06 ADCF1.DR06
#define ADCF1DR08 ADCF1.DR08
#define ADCF1DR10 ADCF1.DR10
#define ADCF1DR12 ADCF1.DR12
#define ADCF1DR14 ADCF1.DR14
#define ADCF1DR16 ADCF1.DR16
#define ADCF1DR18 ADCF1.DR18
#define ADCF1DIR0 ADCF1.DIR0
#define ADCF1DIR1 ADCF1.DIR1
#define ADCF1DIR2 ADCF1.DIR2
#define ADCF1DIR3 ADCF1.DIR3
#define ADCF1DIR4 ADCF1.DIR4
#define ADCF1DIR5 ADCF1.DIR5
#define ADCF1DIR6 ADCF1.DIR6
#define ADCF1DIR7 ADCF1.DIR7
#define ADCF1DIR8 ADCF1.DIR8
#define ADCF1DIR9 ADCF1.DIR9
#define ADCF1DIR10 ADCF1.DIR10
#define ADCF1DIR11 ADCF1.DIR11
#define ADCF1DIR12 ADCF1.DIR12
#define ADCF1DIR13 ADCF1.DIR13
#define ADCF1DIR14 ADCF1.DIR14
#define ADCF1DIR15 ADCF1.DIR15
#define ADCF1DIR16 ADCF1.DIR16
#define ADCF1DIR17 ADCF1.DIR17
#define ADCF1DIR18 ADCF1.DIR18
#define ADCF1DIR19 ADCF1.DIR19
#define ADCF1ADHALTR ADCF1.ADHALTR
#define ADCF1ADCR1 ADCF1.ADCR1
#define ADCF1MPXCURCR ADCF1.MPXCURCR
#define ADCF1MPXCURR ADCF1.MPXCURR
#define ADCF1MPXOWR ADCF1.MPXOWR
#define ADCF1ADCR2 ADCF1.ADCR2
#define ADCF1ADENDP0 ADCF1.ADENDP0
#define ADCF1SFTCR ADCF1.SFTCR
#define ADCF1TDCR ADCF1.TDCR
#define ADCF1ULLMTBR0 ADCF1.ULLMTBR0.UINT32
#define ADCF1ULLMTBR0L ADCF1.ULLMTBR0.UINT16[L]
#define ADCF1ULLMTBR0H ADCF1.ULLMTBR0.UINT16[H]
#define ADCF1ULLMTBR1 ADCF1.ULLMTBR1.UINT32
#define ADCF1ULLMTBR1L ADCF1.ULLMTBR1.UINT16[L]
#define ADCF1ULLMTBR1H ADCF1.ULLMTBR1.UINT16[H]
#define ADCF1ULLMTBR2 ADCF1.ULLMTBR2.UINT32
#define ADCF1ULLMTBR2L ADCF1.ULLMTBR2.UINT16[L]
#define ADCF1ULLMTBR2H ADCF1.ULLMTBR2.UINT16[H]
#define ADCF1ECR ADCF1.ECR
#define ADCF1ULER ADCF1.ULER
#define ADCF1OWER ADCF1.OWER
#define ADCF1PER ADCF1.PER
#define ADCF1IDER ADCF1.IDER
#define ADCF1SGSTCR0 ADCF1.SGSTCR0
#define ADCF1SGCR0 ADCF1.SGCR0
#define ADCF1SGVCSP0 ADCF1.SGVCSP0
#define ADCF1SGVCEP0 ADCF1.SGVCEP0
#define ADCF1SGMCYCR0 ADCF1.SGMCYCR0
#define ADCF1SGSR0 ADCF1.SGSR0
#define ADCF1ULLMSR0 ADCF1.ULLMSR0
#define ADCF1SGSTCR1 ADCF1.SGSTCR1
#define ADCF1SGCR1 ADCF1.SGCR1
#define ADCF1SGVCSP1 ADCF1.SGVCSP1
#define ADCF1SGVCEP1 ADCF1.SGVCEP1
#define ADCF1SGMCYCR1 ADCF1.SGMCYCR1
#define ADCF1SGSR1 ADCF1.SGSR1
#define ADCF1ULLMSR1 ADCF1.ULLMSR1
#define ADCF1SGSTCR2 ADCF1.SGSTCR2
#define ADCF1SGCR2 ADCF1.SGCR2
#define ADCF1SGVCSP2 ADCF1.SGVCSP2
#define ADCF1SGVCEP2 ADCF1.SGVCEP2
#define ADCF1SGMCYCR2 ADCF1.SGMCYCR2
#define ADCF1SGSR2 ADCF1.SGSR2
#define ADCF1ULLMSR2 ADCF1.ULLMSR2
#define ADCF1SGSTCR3 ADCF1.SGSTCR3
#define ADCF1ADTSTCR3 ADCF1.ADTSTCR3
#define ADCF1ADTENDCR3 ADCF1.ADTENDCR3
#define ADCF1SGCR3 ADCF1.SGCR3
#define ADCF1SGVCSP3 ADCF1.SGVCSP3
#define ADCF1SGVCEP3 ADCF1.SGVCEP3
#define ADCF1SGMCYCR3 ADCF1.SGMCYCR3
#define ADCF1SGSR3 ADCF1.SGSR3
#define ADCF1ADTIPR3 ADCF1.ADTIPR3
#define ADCF1ADTPRR3 ADCF1.ADTPRR3
#define ADCF1ULLMSR3 ADCF1.ULLMSR3
#define ADCF1SGSTCR4 ADCF1.SGSTCR4
#define ADCF1ADTSTCR4 ADCF1.ADTSTCR4
#define ADCF1ADTENDCR4 ADCF1.ADTENDCR4
#define ADCF1SGCR4 ADCF1.SGCR4
#define ADCF1SGVCSP4 ADCF1.SGVCSP4
#define ADCF1SGVCEP4 ADCF1.SGVCEP4
#define ADCF1SGMCYCR4 ADCF1.SGMCYCR4
#define ADCF1SGSR4 ADCF1.SGSR4
#define ADCF1ADTIPR4 ADCF1.ADTIPR4
#define ADCF1ADTPRR4 ADCF1.ADTPRR4
#define ADCF1ULLMSR4 ADCF1.ULLMSR4
#define OTS0OTSTCR OTS0.OTSTCR
#define OTS0OTENDCR OTS0.OTENDCR
#define OTS0OTCR OTS0.OTCR
#define OTS0OTFCR OTS0.OTFCR
#define OTS0OTFR OTS0.OTFR
#define OTS0OTSTR OTS0.OTSTR
#define OTS0OTDR OTS0.OTDR
#define OTS0HTBRAU OTS0.HTBRAU
#define OTS0HTBRAL OTS0.HTBRAL
#define OTS0HTBRBU OTS0.HTBRBU
#define OTS0HTBRBL OTS0.HTBRBL
#define OTS0LTBRAU OTS0.LTBRAU
#define OTS0LTBRAL OTS0.LTBRAL
#define OTS0TDLR OTS0.TDLR
#define OTS0COEFFRA OTS0.COEFFRA
#define OTS0COEFFRB OTS0.COEFFRB
#define OTS0COEFFRC OTS0.COEFFRC
#define FSGD3APROT00 FSGD3A.PROT00.UINT32
#define FSGD3APROT00L FSGD3A.PROT00.UINT16[L]
#define FSGD3APROT00LL FSGD3A.PROT00.UINT8[LL]
#define FSGD3APROT00LH FSGD3A.PROT00.UINT8[LH]
#define FSGD3APROT00H FSGD3A.PROT00.UINT16[H]
#define FSGD3APROT00HL FSGD3A.PROT00.UINT8[HL]
#define FSGD3APROT00HH FSGD3A.PROT00.UINT8[HH]
#define FSGD3ASPID00 FSGD3A.SPID00.UINT32
#define FSGD3ASPID00L FSGD3A.SPID00.UINT16[L]
#define FSGD3ASPID00LL FSGD3A.SPID00.UINT8[LL]
#define FSGD3ASPID00LH FSGD3A.SPID00.UINT8[LH]
#define FSGD3ASPID00H FSGD3A.SPID00.UINT16[H]
#define FSGD3ASPID00HL FSGD3A.SPID00.UINT8[HL]
#define FSGD3ASPID00HH FSGD3A.SPID00.UINT8[HH]
#define FSGD3APROT01 FSGD3A.PROT01.UINT32
#define FSGD3APROT01L FSGD3A.PROT01.UINT16[L]
#define FSGD3APROT01LL FSGD3A.PROT01.UINT8[LL]
#define FSGD3APROT01LH FSGD3A.PROT01.UINT8[LH]
#define FSGD3APROT01H FSGD3A.PROT01.UINT16[H]
#define FSGD3APROT01HL FSGD3A.PROT01.UINT8[HL]
#define FSGD3APROT01HH FSGD3A.PROT01.UINT8[HH]
#define FSGD3ASPID01 FSGD3A.SPID01.UINT32
#define FSGD3ASPID01L FSGD3A.SPID01.UINT16[L]
#define FSGD3ASPID01LL FSGD3A.SPID01.UINT8[LL]
#define FSGD3ASPID01LH FSGD3A.SPID01.UINT8[LH]
#define FSGD3ASPID01H FSGD3A.SPID01.UINT16[H]
#define FSGD3ASPID01HL FSGD3A.SPID01.UINT8[HL]
#define FSGD3ASPID01HH FSGD3A.SPID01.UINT8[HH]
#define FSGD3APROT02 FSGD3A.PROT02.UINT32
#define FSGD3APROT02L FSGD3A.PROT02.UINT16[L]
#define FSGD3APROT02LL FSGD3A.PROT02.UINT8[LL]
#define FSGD3APROT02LH FSGD3A.PROT02.UINT8[LH]
#define FSGD3APROT02H FSGD3A.PROT02.UINT16[H]
#define FSGD3APROT02HL FSGD3A.PROT02.UINT8[HL]
#define FSGD3APROT02HH FSGD3A.PROT02.UINT8[HH]
#define FSGD3ASPID02 FSGD3A.SPID02.UINT32
#define FSGD3ASPID02L FSGD3A.SPID02.UINT16[L]
#define FSGD3ASPID02LL FSGD3A.SPID02.UINT8[LL]
#define FSGD3ASPID02LH FSGD3A.SPID02.UINT8[LH]
#define FSGD3ASPID02H FSGD3A.SPID02.UINT16[H]
#define FSGD3ASPID02HL FSGD3A.SPID02.UINT8[HL]
#define FSGD3ASPID02HH FSGD3A.SPID02.UINT8[HH]
#define FSGD3APROT03 FSGD3A.PROT03.UINT32
#define FSGD3APROT03L FSGD3A.PROT03.UINT16[L]
#define FSGD3APROT03LL FSGD3A.PROT03.UINT8[LL]
#define FSGD3APROT03LH FSGD3A.PROT03.UINT8[LH]
#define FSGD3APROT03H FSGD3A.PROT03.UINT16[H]
#define FSGD3APROT03HL FSGD3A.PROT03.UINT8[HL]
#define FSGD3APROT03HH FSGD3A.PROT03.UINT8[HH]
#define FSGD3ASPID03 FSGD3A.SPID03.UINT32
#define FSGD3ASPID03L FSGD3A.SPID03.UINT16[L]
#define FSGD3ASPID03LL FSGD3A.SPID03.UINT8[LL]
#define FSGD3ASPID03LH FSGD3A.SPID03.UINT8[LH]
#define FSGD3ASPID03H FSGD3A.SPID03.UINT16[H]
#define FSGD3ASPID03HL FSGD3A.SPID03.UINT8[HL]
#define FSGD3ASPID03HH FSGD3A.SPID03.UINT8[HH]
#define FSGD3APROT04 FSGD3A.PROT04.UINT32
#define FSGD3APROT04L FSGD3A.PROT04.UINT16[L]
#define FSGD3APROT04LL FSGD3A.PROT04.UINT8[LL]
#define FSGD3APROT04LH FSGD3A.PROT04.UINT8[LH]
#define FSGD3APROT04H FSGD3A.PROT04.UINT16[H]
#define FSGD3APROT04HL FSGD3A.PROT04.UINT8[HL]
#define FSGD3APROT04HH FSGD3A.PROT04.UINT8[HH]
#define FSGD3ASPID04 FSGD3A.SPID04.UINT32
#define FSGD3ASPID04L FSGD3A.SPID04.UINT16[L]
#define FSGD3ASPID04LL FSGD3A.SPID04.UINT8[LL]
#define FSGD3ASPID04LH FSGD3A.SPID04.UINT8[LH]
#define FSGD3ASPID04H FSGD3A.SPID04.UINT16[H]
#define FSGD3ASPID04HL FSGD3A.SPID04.UINT8[HL]
#define FSGD3ASPID04HH FSGD3A.SPID04.UINT8[HH]
#define FSGD3APROT05 FSGD3A.PROT05.UINT32
#define FSGD3APROT05L FSGD3A.PROT05.UINT16[L]
#define FSGD3APROT05LL FSGD3A.PROT05.UINT8[LL]
#define FSGD3APROT05LH FSGD3A.PROT05.UINT8[LH]
#define FSGD3APROT05H FSGD3A.PROT05.UINT16[H]
#define FSGD3APROT05HL FSGD3A.PROT05.UINT8[HL]
#define FSGD3APROT05HH FSGD3A.PROT05.UINT8[HH]
#define FSGD3ASPID05 FSGD3A.SPID05.UINT32
#define FSGD3ASPID05L FSGD3A.SPID05.UINT16[L]
#define FSGD3ASPID05LL FSGD3A.SPID05.UINT8[LL]
#define FSGD3ASPID05LH FSGD3A.SPID05.UINT8[LH]
#define FSGD3ASPID05H FSGD3A.SPID05.UINT16[H]
#define FSGD3ASPID05HL FSGD3A.SPID05.UINT8[HL]
#define FSGD3ASPID05HH FSGD3A.SPID05.UINT8[HH]
#define FSGD3APROT06 FSGD3A.PROT06.UINT32
#define FSGD3APROT06L FSGD3A.PROT06.UINT16[L]
#define FSGD3APROT06LL FSGD3A.PROT06.UINT8[LL]
#define FSGD3APROT06LH FSGD3A.PROT06.UINT8[LH]
#define FSGD3APROT06H FSGD3A.PROT06.UINT16[H]
#define FSGD3APROT06HL FSGD3A.PROT06.UINT8[HL]
#define FSGD3APROT06HH FSGD3A.PROT06.UINT8[HH]
#define FSGD3ASPID06 FSGD3A.SPID06.UINT32
#define FSGD3ASPID06L FSGD3A.SPID06.UINT16[L]
#define FSGD3ASPID06LL FSGD3A.SPID06.UINT8[LL]
#define FSGD3ASPID06LH FSGD3A.SPID06.UINT8[LH]
#define FSGD3ASPID06H FSGD3A.SPID06.UINT16[H]
#define FSGD3ASPID06HL FSGD3A.SPID06.UINT8[HL]
#define FSGD3ASPID06HH FSGD3A.SPID06.UINT8[HH]
#define FSGD3APROT07 FSGD3A.PROT07.UINT32
#define FSGD3APROT07L FSGD3A.PROT07.UINT16[L]
#define FSGD3APROT07LL FSGD3A.PROT07.UINT8[LL]
#define FSGD3APROT07LH FSGD3A.PROT07.UINT8[LH]
#define FSGD3APROT07H FSGD3A.PROT07.UINT16[H]
#define FSGD3APROT07HL FSGD3A.PROT07.UINT8[HL]
#define FSGD3APROT07HH FSGD3A.PROT07.UINT8[HH]
#define FSGD3ASPID07 FSGD3A.SPID07.UINT32
#define FSGD3ASPID07L FSGD3A.SPID07.UINT16[L]
#define FSGD3ASPID07LL FSGD3A.SPID07.UINT8[LL]
#define FSGD3ASPID07LH FSGD3A.SPID07.UINT8[LH]
#define FSGD3ASPID07H FSGD3A.SPID07.UINT16[H]
#define FSGD3ASPID07HL FSGD3A.SPID07.UINT8[HL]
#define FSGD3ASPID07HH FSGD3A.SPID07.UINT8[HH]
#define FSGD3APROT08 FSGD3A.PROT08.UINT32
#define FSGD3APROT08L FSGD3A.PROT08.UINT16[L]
#define FSGD3APROT08LL FSGD3A.PROT08.UINT8[LL]
#define FSGD3APROT08LH FSGD3A.PROT08.UINT8[LH]
#define FSGD3APROT08H FSGD3A.PROT08.UINT16[H]
#define FSGD3APROT08HL FSGD3A.PROT08.UINT8[HL]
#define FSGD3APROT08HH FSGD3A.PROT08.UINT8[HH]
#define FSGD3ASPID08 FSGD3A.SPID08.UINT32
#define FSGD3ASPID08L FSGD3A.SPID08.UINT16[L]
#define FSGD3ASPID08LL FSGD3A.SPID08.UINT8[LL]
#define FSGD3ASPID08LH FSGD3A.SPID08.UINT8[LH]
#define FSGD3ASPID08H FSGD3A.SPID08.UINT16[H]
#define FSGD3ASPID08HL FSGD3A.SPID08.UINT8[HL]
#define FSGD3ASPID08HH FSGD3A.SPID08.UINT8[HH]
#define FSGD3APROT09 FSGD3A.PROT09.UINT32
#define FSGD3APROT09L FSGD3A.PROT09.UINT16[L]
#define FSGD3APROT09LL FSGD3A.PROT09.UINT8[LL]
#define FSGD3APROT09LH FSGD3A.PROT09.UINT8[LH]
#define FSGD3APROT09H FSGD3A.PROT09.UINT16[H]
#define FSGD3APROT09HL FSGD3A.PROT09.UINT8[HL]
#define FSGD3APROT09HH FSGD3A.PROT09.UINT8[HH]
#define FSGD3ASPID09 FSGD3A.SPID09.UINT32
#define FSGD3ASPID09L FSGD3A.SPID09.UINT16[L]
#define FSGD3ASPID09LL FSGD3A.SPID09.UINT8[LL]
#define FSGD3ASPID09LH FSGD3A.SPID09.UINT8[LH]
#define FSGD3ASPID09H FSGD3A.SPID09.UINT16[H]
#define FSGD3ASPID09HL FSGD3A.SPID09.UINT8[HL]
#define FSGD3ASPID09HH FSGD3A.SPID09.UINT8[HH]
#define FSGD3APROT10 FSGD3A.PROT10.UINT32
#define FSGD3APROT10L FSGD3A.PROT10.UINT16[L]
#define FSGD3APROT10LL FSGD3A.PROT10.UINT8[LL]
#define FSGD3APROT10LH FSGD3A.PROT10.UINT8[LH]
#define FSGD3APROT10H FSGD3A.PROT10.UINT16[H]
#define FSGD3APROT10HL FSGD3A.PROT10.UINT8[HL]
#define FSGD3APROT10HH FSGD3A.PROT10.UINT8[HH]
#define FSGD3ASPID10 FSGD3A.SPID10.UINT32
#define FSGD3ASPID10L FSGD3A.SPID10.UINT16[L]
#define FSGD3ASPID10LL FSGD3A.SPID10.UINT8[LL]
#define FSGD3ASPID10LH FSGD3A.SPID10.UINT8[LH]
#define FSGD3ASPID10H FSGD3A.SPID10.UINT16[H]
#define FSGD3ASPID10HL FSGD3A.SPID10.UINT8[HL]
#define FSGD3ASPID10HH FSGD3A.SPID10.UINT8[HH]
#define FSGD3APROT11 FSGD3A.PROT11.UINT32
#define FSGD3APROT11L FSGD3A.PROT11.UINT16[L]
#define FSGD3APROT11LL FSGD3A.PROT11.UINT8[LL]
#define FSGD3APROT11LH FSGD3A.PROT11.UINT8[LH]
#define FSGD3APROT11H FSGD3A.PROT11.UINT16[H]
#define FSGD3APROT11HL FSGD3A.PROT11.UINT8[HL]
#define FSGD3APROT11HH FSGD3A.PROT11.UINT8[HH]
#define FSGD3ASPID11 FSGD3A.SPID11.UINT32
#define FSGD3ASPID11L FSGD3A.SPID11.UINT16[L]
#define FSGD3ASPID11LL FSGD3A.SPID11.UINT8[LL]
#define FSGD3ASPID11LH FSGD3A.SPID11.UINT8[LH]
#define FSGD3ASPID11H FSGD3A.SPID11.UINT16[H]
#define FSGD3ASPID11HL FSGD3A.SPID11.UINT8[HL]
#define FSGD3ASPID11HH FSGD3A.SPID11.UINT8[HH]
#define FSGD3APROT12 FSGD3A.PROT12.UINT32
#define FSGD3APROT12L FSGD3A.PROT12.UINT16[L]
#define FSGD3APROT12LL FSGD3A.PROT12.UINT8[LL]
#define FSGD3APROT12LH FSGD3A.PROT12.UINT8[LH]
#define FSGD3APROT12H FSGD3A.PROT12.UINT16[H]
#define FSGD3APROT12HL FSGD3A.PROT12.UINT8[HL]
#define FSGD3APROT12HH FSGD3A.PROT12.UINT8[HH]
#define FSGD3ASPID12 FSGD3A.SPID12.UINT32
#define FSGD3ASPID12L FSGD3A.SPID12.UINT16[L]
#define FSGD3ASPID12LL FSGD3A.SPID12.UINT8[LL]
#define FSGD3ASPID12LH FSGD3A.SPID12.UINT8[LH]
#define FSGD3ASPID12H FSGD3A.SPID12.UINT16[H]
#define FSGD3ASPID12HL FSGD3A.SPID12.UINT8[HL]
#define FSGD3ASPID12HH FSGD3A.SPID12.UINT8[HH]
#define FSGD3APROT13 FSGD3A.PROT13.UINT32
#define FSGD3APROT13L FSGD3A.PROT13.UINT16[L]
#define FSGD3APROT13LL FSGD3A.PROT13.UINT8[LL]
#define FSGD3APROT13LH FSGD3A.PROT13.UINT8[LH]
#define FSGD3APROT13H FSGD3A.PROT13.UINT16[H]
#define FSGD3APROT13HL FSGD3A.PROT13.UINT8[HL]
#define FSGD3APROT13HH FSGD3A.PROT13.UINT8[HH]
#define FSGD3ASPID13 FSGD3A.SPID13.UINT32
#define FSGD3ASPID13L FSGD3A.SPID13.UINT16[L]
#define FSGD3ASPID13LL FSGD3A.SPID13.UINT8[LL]
#define FSGD3ASPID13LH FSGD3A.SPID13.UINT8[LH]
#define FSGD3ASPID13H FSGD3A.SPID13.UINT16[H]
#define FSGD3ASPID13HL FSGD3A.SPID13.UINT8[HL]
#define FSGD3ASPID13HH FSGD3A.SPID13.UINT8[HH]
#define FSGD3APROT14 FSGD3A.PROT14.UINT32
#define FSGD3APROT14L FSGD3A.PROT14.UINT16[L]
#define FSGD3APROT14LL FSGD3A.PROT14.UINT8[LL]
#define FSGD3APROT14LH FSGD3A.PROT14.UINT8[LH]
#define FSGD3APROT14H FSGD3A.PROT14.UINT16[H]
#define FSGD3APROT14HL FSGD3A.PROT14.UINT8[HL]
#define FSGD3APROT14HH FSGD3A.PROT14.UINT8[HH]
#define FSGD3ASPID14 FSGD3A.SPID14.UINT32
#define FSGD3ASPID14L FSGD3A.SPID14.UINT16[L]
#define FSGD3ASPID14LL FSGD3A.SPID14.UINT8[LL]
#define FSGD3ASPID14LH FSGD3A.SPID14.UINT8[LH]
#define FSGD3ASPID14H FSGD3A.SPID14.UINT16[H]
#define FSGD3ASPID14HL FSGD3A.SPID14.UINT8[HL]
#define FSGD3ASPID14HH FSGD3A.SPID14.UINT8[HH]
#define FSGD3APROT15 FSGD3A.PROT15.UINT32
#define FSGD3APROT15L FSGD3A.PROT15.UINT16[L]
#define FSGD3APROT15LL FSGD3A.PROT15.UINT8[LL]
#define FSGD3APROT15LH FSGD3A.PROT15.UINT8[LH]
#define FSGD3APROT15H FSGD3A.PROT15.UINT16[H]
#define FSGD3APROT15HL FSGD3A.PROT15.UINT8[HL]
#define FSGD3APROT15HH FSGD3A.PROT15.UINT8[HH]
#define FSGD3ASPID15 FSGD3A.SPID15.UINT32
#define FSGD3ASPID15L FSGD3A.SPID15.UINT16[L]
#define FSGD3ASPID15LL FSGD3A.SPID15.UINT8[LL]
#define FSGD3ASPID15LH FSGD3A.SPID15.UINT8[LH]
#define FSGD3ASPID15H FSGD3A.SPID15.UINT16[H]
#define FSGD3ASPID15HL FSGD3A.SPID15.UINT8[HL]
#define FSGD3ASPID15HH FSGD3A.SPID15.UINT8[HH]
#define ERRSLV3CTL ERRSLV3.CTL
#define ERRSLV3STAT ERRSLV3.STAT
#define ERRSLV3TYPE ERRSLV3.TYPE
#define FSGD3BPROT00 FSGD3B.PROT00.UINT32
#define FSGD3BPROT00L FSGD3B.PROT00.UINT16[L]
#define FSGD3BPROT00LL FSGD3B.PROT00.UINT8[LL]
#define FSGD3BPROT00LH FSGD3B.PROT00.UINT8[LH]
#define FSGD3BPROT00H FSGD3B.PROT00.UINT16[H]
#define FSGD3BPROT00HL FSGD3B.PROT00.UINT8[HL]
#define FSGD3BPROT00HH FSGD3B.PROT00.UINT8[HH]
#define FSGD3BSPID00 FSGD3B.SPID00.UINT32
#define FSGD3BSPID00L FSGD3B.SPID00.UINT16[L]
#define FSGD3BSPID00LL FSGD3B.SPID00.UINT8[LL]
#define FSGD3BSPID00LH FSGD3B.SPID00.UINT8[LH]
#define FSGD3BSPID00H FSGD3B.SPID00.UINT16[H]
#define FSGD3BSPID00HL FSGD3B.SPID00.UINT8[HL]
#define FSGD3BSPID00HH FSGD3B.SPID00.UINT8[HH]
#define FSGD3BPROT01 FSGD3B.PROT01.UINT32
#define FSGD3BPROT01L FSGD3B.PROT01.UINT16[L]
#define FSGD3BPROT01LL FSGD3B.PROT01.UINT8[LL]
#define FSGD3BPROT01LH FSGD3B.PROT01.UINT8[LH]
#define FSGD3BPROT01H FSGD3B.PROT01.UINT16[H]
#define FSGD3BPROT01HL FSGD3B.PROT01.UINT8[HL]
#define FSGD3BPROT01HH FSGD3B.PROT01.UINT8[HH]
#define FSGD3BSPID01 FSGD3B.SPID01.UINT32
#define FSGD3BSPID01L FSGD3B.SPID01.UINT16[L]
#define FSGD3BSPID01LL FSGD3B.SPID01.UINT8[LL]
#define FSGD3BSPID01LH FSGD3B.SPID01.UINT8[LH]
#define FSGD3BSPID01H FSGD3B.SPID01.UINT16[H]
#define FSGD3BSPID01HL FSGD3B.SPID01.UINT8[HL]
#define FSGD3BSPID01HH FSGD3B.SPID01.UINT8[HH]
#define FSGD3BPROT02 FSGD3B.PROT02.UINT32
#define FSGD3BPROT02L FSGD3B.PROT02.UINT16[L]
#define FSGD3BPROT02LL FSGD3B.PROT02.UINT8[LL]
#define FSGD3BPROT02LH FSGD3B.PROT02.UINT8[LH]
#define FSGD3BPROT02H FSGD3B.PROT02.UINT16[H]
#define FSGD3BPROT02HL FSGD3B.PROT02.UINT8[HL]
#define FSGD3BPROT02HH FSGD3B.PROT02.UINT8[HH]
#define FSGD3BSPID02 FSGD3B.SPID02.UINT32
#define FSGD3BSPID02L FSGD3B.SPID02.UINT16[L]
#define FSGD3BSPID02LL FSGD3B.SPID02.UINT8[LL]
#define FSGD3BSPID02LH FSGD3B.SPID02.UINT8[LH]
#define FSGD3BSPID02H FSGD3B.SPID02.UINT16[H]
#define FSGD3BSPID02HL FSGD3B.SPID02.UINT8[HL]
#define FSGD3BSPID02HH FSGD3B.SPID02.UINT8[HH]
#define FSGD3BPROT03 FSGD3B.PROT03.UINT32
#define FSGD3BPROT03L FSGD3B.PROT03.UINT16[L]
#define FSGD3BPROT03LL FSGD3B.PROT03.UINT8[LL]
#define FSGD3BPROT03LH FSGD3B.PROT03.UINT8[LH]
#define FSGD3BPROT03H FSGD3B.PROT03.UINT16[H]
#define FSGD3BPROT03HL FSGD3B.PROT03.UINT8[HL]
#define FSGD3BPROT03HH FSGD3B.PROT03.UINT8[HH]
#define FSGD3BSPID03 FSGD3B.SPID03.UINT32
#define FSGD3BSPID03L FSGD3B.SPID03.UINT16[L]
#define FSGD3BSPID03LL FSGD3B.SPID03.UINT8[LL]
#define FSGD3BSPID03LH FSGD3B.SPID03.UINT8[LH]
#define FSGD3BSPID03H FSGD3B.SPID03.UINT16[H]
#define FSGD3BSPID03HL FSGD3B.SPID03.UINT8[HL]
#define FSGD3BSPID03HH FSGD3B.SPID03.UINT8[HH]
#define FSGD3BPROT06 FSGD3B.PROT06.UINT32
#define FSGD3BPROT06L FSGD3B.PROT06.UINT16[L]
#define FSGD3BPROT06LL FSGD3B.PROT06.UINT8[LL]
#define FSGD3BPROT06LH FSGD3B.PROT06.UINT8[LH]
#define FSGD3BPROT06H FSGD3B.PROT06.UINT16[H]
#define FSGD3BPROT06HL FSGD3B.PROT06.UINT8[HL]
#define FSGD3BPROT06HH FSGD3B.PROT06.UINT8[HH]
#define FSGD3BSPID06 FSGD3B.SPID06.UINT32
#define FSGD3BSPID06L FSGD3B.SPID06.UINT16[L]
#define FSGD3BSPID06LL FSGD3B.SPID06.UINT8[LL]
#define FSGD3BSPID06LH FSGD3B.SPID06.UINT8[LH]
#define FSGD3BSPID06H FSGD3B.SPID06.UINT16[H]
#define FSGD3BSPID06HL FSGD3B.SPID06.UINT8[HL]
#define FSGD3BSPID06HH FSGD3B.SPID06.UINT8[HH]
#define FSGD3BPROT07 FSGD3B.PROT07.UINT32
#define FSGD3BPROT07L FSGD3B.PROT07.UINT16[L]
#define FSGD3BPROT07LL FSGD3B.PROT07.UINT8[LL]
#define FSGD3BPROT07LH FSGD3B.PROT07.UINT8[LH]
#define FSGD3BPROT07H FSGD3B.PROT07.UINT16[H]
#define FSGD3BPROT07HL FSGD3B.PROT07.UINT8[HL]
#define FSGD3BPROT07HH FSGD3B.PROT07.UINT8[HH]
#define FSGD3BSPID07 FSGD3B.SPID07.UINT32
#define FSGD3BSPID07L FSGD3B.SPID07.UINT16[L]
#define FSGD3BSPID07LL FSGD3B.SPID07.UINT8[LL]
#define FSGD3BSPID07LH FSGD3B.SPID07.UINT8[LH]
#define FSGD3BSPID07H FSGD3B.SPID07.UINT16[H]
#define FSGD3BSPID07HL FSGD3B.SPID07.UINT8[HL]
#define FSGD3BSPID07HH FSGD3B.SPID07.UINT8[HH]
#define FSGD3BPROT10 FSGD3B.PROT10.UINT32
#define FSGD3BPROT10L FSGD3B.PROT10.UINT16[L]
#define FSGD3BPROT10LL FSGD3B.PROT10.UINT8[LL]
#define FSGD3BPROT10LH FSGD3B.PROT10.UINT8[LH]
#define FSGD3BPROT10H FSGD3B.PROT10.UINT16[H]
#define FSGD3BPROT10HL FSGD3B.PROT10.UINT8[HL]
#define FSGD3BPROT10HH FSGD3B.PROT10.UINT8[HH]
#define FSGD3BSPID10 FSGD3B.SPID10.UINT32
#define FSGD3BSPID10L FSGD3B.SPID10.UINT16[L]
#define FSGD3BSPID10LL FSGD3B.SPID10.UINT8[LL]
#define FSGD3BSPID10LH FSGD3B.SPID10.UINT8[LH]
#define FSGD3BSPID10H FSGD3B.SPID10.UINT16[H]
#define FSGD3BSPID10HL FSGD3B.SPID10.UINT8[HL]
#define FSGD3BSPID10HH FSGD3B.SPID10.UINT8[HH]
#define FSGD3BPROT11 FSGD3B.PROT11.UINT32
#define FSGD3BPROT11L FSGD3B.PROT11.UINT16[L]
#define FSGD3BPROT11LL FSGD3B.PROT11.UINT8[LL]
#define FSGD3BPROT11LH FSGD3B.PROT11.UINT8[LH]
#define FSGD3BPROT11H FSGD3B.PROT11.UINT16[H]
#define FSGD3BPROT11HL FSGD3B.PROT11.UINT8[HL]
#define FSGD3BPROT11HH FSGD3B.PROT11.UINT8[HH]
#define FSGD3BSPID11 FSGD3B.SPID11.UINT32
#define FSGD3BSPID11L FSGD3B.SPID11.UINT16[L]
#define FSGD3BSPID11LL FSGD3B.SPID11.UINT8[LL]
#define FSGD3BSPID11LH FSGD3B.SPID11.UINT8[LH]
#define FSGD3BSPID11H FSGD3B.SPID11.UINT16[H]
#define FSGD3BSPID11HL FSGD3B.SPID11.UINT8[HL]
#define FSGD3BSPID11HH FSGD3B.SPID11.UINT8[HH]
#define FSGD3BPROT12 FSGD3B.PROT12.UINT32
#define FSGD3BPROT12L FSGD3B.PROT12.UINT16[L]
#define FSGD3BPROT12LL FSGD3B.PROT12.UINT8[LL]
#define FSGD3BPROT12LH FSGD3B.PROT12.UINT8[LH]
#define FSGD3BPROT12H FSGD3B.PROT12.UINT16[H]
#define FSGD3BPROT12HL FSGD3B.PROT12.UINT8[HL]
#define FSGD3BPROT12HH FSGD3B.PROT12.UINT8[HH]
#define FSGD3BSPID12 FSGD3B.SPID12.UINT32
#define FSGD3BSPID12L FSGD3B.SPID12.UINT16[L]
#define FSGD3BSPID12LL FSGD3B.SPID12.UINT8[LL]
#define FSGD3BSPID12LH FSGD3B.SPID12.UINT8[LH]
#define FSGD3BSPID12H FSGD3B.SPID12.UINT16[H]
#define FSGD3BSPID12HL FSGD3B.SPID12.UINT8[HL]
#define FSGD3BSPID12HH FSGD3B.SPID12.UINT8[HH]
#define FSGD3BPROT13 FSGD3B.PROT13.UINT32
#define FSGD3BPROT13L FSGD3B.PROT13.UINT16[L]
#define FSGD3BPROT13LL FSGD3B.PROT13.UINT8[LL]
#define FSGD3BPROT13LH FSGD3B.PROT13.UINT8[LH]
#define FSGD3BPROT13H FSGD3B.PROT13.UINT16[H]
#define FSGD3BPROT13HL FSGD3B.PROT13.UINT8[HL]
#define FSGD3BPROT13HH FSGD3B.PROT13.UINT8[HH]
#define FSGD3BSPID13 FSGD3B.SPID13.UINT32
#define FSGD3BSPID13L FSGD3B.SPID13.UINT16[L]
#define FSGD3BSPID13LL FSGD3B.SPID13.UINT8[LL]
#define FSGD3BSPID13LH FSGD3B.SPID13.UINT8[LH]
#define FSGD3BSPID13H FSGD3B.SPID13.UINT16[H]
#define FSGD3BSPID13HL FSGD3B.SPID13.UINT8[HL]
#define FSGD3BSPID13HH FSGD3B.SPID13.UINT8[HH]
#define ERRSLV3AICTL ERRSLV3AI.CTL
#define ERRSLV3AISTAT ERRSLV3AI.STAT
#define ERRSLV3AITYPE ERRSLV3AI.TYPE
#define NTU0PRSCTL NTU0.PRSCTL
#define NTU0PRSCMP NTU0.PRSCMP
#define NTU0BPRSCTL NTU0.BPRSCTL
#define NTU0BPRSCMP NTU0.BPRSCMP
#define NTU0CPRSCTL NTU0.CPRSCTL
#define NTU0CPRSCMP NTU0.CPRSCMP
#define NTU0CCTL0 NTU0.CCTL0
#define NTU0CCMPL NTU0.CCMPL
#define NTU0CCMPH NTU0.CCMPH
#define NTU0CPCMD NTU0.CPCMD
#define NTU0CPS NTU0.CPS
#define NTU0RST NTU0.RST
#define NTU0CFG NTU0.CFG
#define NTU0CLMEN NTU0.CLMEN
#define NTU0MON NTU0.MON
#define FSGDF0PROT00 FSGDF0.PROT00.UINT32
#define FSGDF0PROT00L FSGDF0.PROT00.UINT16[L]
#define FSGDF0PROT00LL FSGDF0.PROT00.UINT8[LL]
#define FSGDF0PROT00LH FSGDF0.PROT00.UINT8[LH]
#define FSGDF0PROT00H FSGDF0.PROT00.UINT16[H]
#define FSGDF0PROT00HL FSGDF0.PROT00.UINT8[HL]
#define FSGDF0PROT00HH FSGDF0.PROT00.UINT8[HH]
#define FSGDF0SPID00 FSGDF0.SPID00.UINT32
#define FSGDF0SPID00L FSGDF0.SPID00.UINT16[L]
#define FSGDF0SPID00LL FSGDF0.SPID00.UINT8[LL]
#define FSGDF0SPID00LH FSGDF0.SPID00.UINT8[LH]
#define FSGDF0SPID00H FSGDF0.SPID00.UINT16[H]
#define FSGDF0SPID00HL FSGDF0.SPID00.UINT8[HL]
#define FSGDF0SPID00HH FSGDF0.SPID00.UINT8[HH]
#define FSGDF0PROT01 FSGDF0.PROT01.UINT32
#define FSGDF0PROT01L FSGDF0.PROT01.UINT16[L]
#define FSGDF0PROT01LL FSGDF0.PROT01.UINT8[LL]
#define FSGDF0PROT01LH FSGDF0.PROT01.UINT8[LH]
#define FSGDF0PROT01H FSGDF0.PROT01.UINT16[H]
#define FSGDF0PROT01HL FSGDF0.PROT01.UINT8[HL]
#define FSGDF0PROT01HH FSGDF0.PROT01.UINT8[HH]
#define FSGDF0SPID01 FSGDF0.SPID01.UINT32
#define FSGDF0SPID01L FSGDF0.SPID01.UINT16[L]
#define FSGDF0SPID01LL FSGDF0.SPID01.UINT8[LL]
#define FSGDF0SPID01LH FSGDF0.SPID01.UINT8[LH]
#define FSGDF0SPID01H FSGDF0.SPID01.UINT16[H]
#define FSGDF0SPID01HL FSGDF0.SPID01.UINT8[HL]
#define FSGDF0SPID01HH FSGDF0.SPID01.UINT8[HH]
#define ERRSLVF0CTL ERRSLVF0.CTL
#define ERRSLVF0STAT ERRSLVF0.STAT
#define ERRSLVF0TYPE ERRSLVF0.TYPE
#define FSGDE0PROT00 FSGDE0.PROT00.UINT32
#define FSGDE0PROT00L FSGDE0.PROT00.UINT16[L]
#define FSGDE0PROT00LL FSGDE0.PROT00.UINT8[LL]
#define FSGDE0PROT00LH FSGDE0.PROT00.UINT8[LH]
#define FSGDE0PROT00H FSGDE0.PROT00.UINT16[H]
#define FSGDE0PROT00HL FSGDE0.PROT00.UINT8[HL]
#define FSGDE0PROT00HH FSGDE0.PROT00.UINT8[HH]
#define FSGDE0SPID00 FSGDE0.SPID00.UINT32
#define FSGDE0SPID00L FSGDE0.SPID00.UINT16[L]
#define FSGDE0SPID00LL FSGDE0.SPID00.UINT8[LL]
#define FSGDE0SPID00LH FSGDE0.SPID00.UINT8[LH]
#define FSGDE0SPID00H FSGDE0.SPID00.UINT16[H]
#define FSGDE0SPID00HL FSGDE0.SPID00.UINT8[HL]
#define FSGDE0SPID00HH FSGDE0.SPID00.UINT8[HH]
#define FSGDE0PROT01 FSGDE0.PROT01.UINT32
#define FSGDE0PROT01L FSGDE0.PROT01.UINT16[L]
#define FSGDE0PROT01LL FSGDE0.PROT01.UINT8[LL]
#define FSGDE0PROT01LH FSGDE0.PROT01.UINT8[LH]
#define FSGDE0PROT01H FSGDE0.PROT01.UINT16[H]
#define FSGDE0PROT01HL FSGDE0.PROT01.UINT8[HL]
#define FSGDE0PROT01HH FSGDE0.PROT01.UINT8[HH]
#define FSGDE0SPID01 FSGDE0.SPID01.UINT32
#define FSGDE0SPID01L FSGDE0.SPID01.UINT16[L]
#define FSGDE0SPID01LL FSGDE0.SPID01.UINT8[LL]
#define FSGDE0SPID01LH FSGDE0.SPID01.UINT8[LH]
#define FSGDE0SPID01H FSGDE0.SPID01.UINT16[H]
#define FSGDE0SPID01HL FSGDE0.SPID01.UINT8[HL]
#define FSGDE0SPID01HH FSGDE0.SPID01.UINT8[HH]
#define ERRSLVE0CTL ERRSLVE0.CTL
#define ERRSLVE0STAT ERRSLVE0.STAT
#define ERRSLVE0TYPE ERRSLVE0.TYPE
#define ERRSLVFICTL ERRSLVFI.CTL
#define ERRSLVFISTAT ERRSLVFI.STAT
#define ERRSLVFITYPE ERRSLVFI.TYPE
#define ERRSLVEICTL ERRSLVEI.CTL
#define ERRSLVEISTAT ERRSLVEI.STAT
#define ERRSLVEITYPE ERRSLVEI.TYPE
#define ERRSLVMICTL ERRSLVMI.CTL
#define ERRSLVMISTAT ERRSLVMI.STAT
#define ERRSLVMITYPE ERRSLVMI.TYPE
#define ERRSLVHICTL ERRSLVHI.CTL
#define ERRSLVHISTAT ERRSLVHI.STAT
#define ERRSLVHITYPE ERRSLVHI.TYPE
#define ERRSLVXICTL ERRSLVXI.CTL
#define ERRSLVXISTAT ERRSLVXI.STAT
#define ERRSLVXITYPE ERRSLVXI.TYPE
#define HSSPIDRG0 HSSPID.RG0
#define HSSPIDRG1 HSSPID.RG1
#define HSSPIDRG2 HSSPID.RG2
#define HSSPIDRG3 HSSPID.RG3
#define HSSPIDRG4 HSSPID.RG4
#define HSSPIDRG5 HSSPID.RG5
#define HSSPIDRG6 HSSPID.RG6
#define HSSPIDRG7 HSSPID.RG7
#define HTHDMACTL HTHDMA.CTL.UINT32
#define HTHDMACTLL HTHDMA.CTL.UINT16[L]
#define HTHDMACTLLL HTHDMA.CTL.UINT8[LL]
#define HTHDMASTAT HTHDMA.STAT.UINT32
#define HTHDMASTATL HTHDMA.STAT.UINT16[L]
#define HTHDMASTATLL HTHDMA.STAT.UINT8[LL]
#define IPGECRUM IPG.ECRUM
#define IPGADRUM IPG.ADRUM
#define IPGENUM IPG.ENUM.UINT8
#define IPGE IPG.ENUM.BIT.E
#define IPGIRE IPG.ENUM.BIT.IRE
#define IPGPMTUM0 IPG.PMTUM0.UINT8
#define IPGR0 IPG.PMTUM0.BIT.R0
#define IPGW0 IPG.PMTUM0.BIT.W0
#define IPGX0 IPG.PMTUM0.BIT.X0
#define IPGR1 IPG.PMTUM0.BIT.R1
#define IPGW1 IPG.PMTUM0.BIT.W1
#define IPGX1 IPG.PMTUM0.BIT.X1
#define IPGPMTUM1 IPG.PMTUM1.UINT8
#define IPGPMTUM2 IPG.PMTUM2.UINT8
#define IPGPMTUM3 IPG.PMTUM3.UINT8
#define IPGPMTUM4 IPG.PMTUM4.UINT8
#define PEGG0MK PEG.G0MK.UINT32
#define PEGG0MKL PEG.G0MK.UINT16[L]
#define PEGG0MKLL PEG.G0MK.UINT8[LL]
#define PEGG0MKLH PEG.G0MK.UINT8[LH]
#define PEGG0MKH PEG.G0MK.UINT16[H]
#define PEGG0MKHL PEG.G0MK.UINT8[HL]
#define PEGG0MKHH PEG.G0MK.UINT8[HH]
#define PEGG0BA PEG.G0BA.UINT32
#define PEGG0BAL PEG.G0BA.UINT16[L]
#define PEGG0BALL PEG.G0BA.UINT8[LL]
#define PEGG0BALH PEG.G0BA.UINT8[LH]
#define PEGG0BAH PEG.G0BA.UINT16[H]
#define PEGG0BAHL PEG.G0BA.UINT8[HL]
#define PEGG0BAHH PEG.G0BA.UINT8[HH]
#define PEGG0SP PEG.G0SP.UINT32
#define PEGG0SPL PEG.G0SP.UINT16[L]
#define PEGG0SPLL PEG.G0SP.UINT8[LL]
#define PEGG0SPLH PEG.G0SP.UINT8[LH]
#define PEGG0SPH PEG.G0SP.UINT16[H]
#define PEGG0SPHL PEG.G0SP.UINT8[HL]
#define PEGG0SPHH PEG.G0SP.UINT8[HH]
#define PEGG1MK PEG.G1MK.UINT32
#define PEGG1MKL PEG.G1MK.UINT16[L]
#define PEGG1MKLL PEG.G1MK.UINT8[LL]
#define PEGG1MKLH PEG.G1MK.UINT8[LH]
#define PEGG1MKH PEG.G1MK.UINT16[H]
#define PEGG1MKHL PEG.G1MK.UINT8[HL]
#define PEGG1MKHH PEG.G1MK.UINT8[HH]
#define PEGG1BA PEG.G1BA.UINT32
#define PEGG1BAL PEG.G1BA.UINT16[L]
#define PEGG1BALL PEG.G1BA.UINT8[LL]
#define PEGG1BALH PEG.G1BA.UINT8[LH]
#define PEGG1BAH PEG.G1BA.UINT16[H]
#define PEGG1BAHL PEG.G1BA.UINT8[HL]
#define PEGG1BAHH PEG.G1BA.UINT8[HH]
#define PEGG1SP PEG.G1SP.UINT32
#define PEGG1SPL PEG.G1SP.UINT16[L]
#define PEGG1SPLL PEG.G1SP.UINT8[LL]
#define PEGG1SPLH PEG.G1SP.UINT8[LH]
#define PEGG1SPH PEG.G1SP.UINT16[H]
#define PEGG1SPHL PEG.G1SP.UINT8[HL]
#define PEGG1SPHH PEG.G1SP.UINT8[HH]
#define PEGG2MK PEG.G2MK.UINT32
#define PEGG2MKL PEG.G2MK.UINT16[L]
#define PEGG2MKLL PEG.G2MK.UINT8[LL]
#define PEGG2MKLH PEG.G2MK.UINT8[LH]
#define PEGG2MKH PEG.G2MK.UINT16[H]
#define PEGG2MKHL PEG.G2MK.UINT8[HL]
#define PEGG2MKHH PEG.G2MK.UINT8[HH]
#define PEGG2BA PEG.G2BA.UINT32
#define PEGG2BAL PEG.G2BA.UINT16[L]
#define PEGG2BALL PEG.G2BA.UINT8[LL]
#define PEGG2BALH PEG.G2BA.UINT8[LH]
#define PEGG2BAH PEG.G2BA.UINT16[H]
#define PEGG2BAHL PEG.G2BA.UINT8[HL]
#define PEGG2BAHH PEG.G2BA.UINT8[HH]
#define PEGG2SP PEG.G2SP.UINT32
#define PEGG2SPL PEG.G2SP.UINT16[L]
#define PEGG2SPLL PEG.G2SP.UINT8[LL]
#define PEGG2SPLH PEG.G2SP.UINT8[LH]
#define PEGG2SPH PEG.G2SP.UINT16[H]
#define PEGG2SPHL PEG.G2SP.UINT8[HL]
#define PEGG2SPHH PEG.G2SP.UINT8[HH]
#define PEGG3MK PEG.G3MK.UINT32
#define PEGG3MKL PEG.G3MK.UINT16[L]
#define PEGG3MKLL PEG.G3MK.UINT8[LL]
#define PEGG3MKLH PEG.G3MK.UINT8[LH]
#define PEGG3MKH PEG.G3MK.UINT16[H]
#define PEGG3MKHL PEG.G3MK.UINT8[HL]
#define PEGG3MKHH PEG.G3MK.UINT8[HH]
#define PEGG3BA PEG.G3BA.UINT32
#define PEGG3BAL PEG.G3BA.UINT16[L]
#define PEGG3BALL PEG.G3BA.UINT8[LL]
#define PEGG3BALH PEG.G3BA.UINT8[LH]
#define PEGG3BAH PEG.G3BA.UINT16[H]
#define PEGG3BAHL PEG.G3BA.UINT8[HL]
#define PEGG3BAHH PEG.G3BA.UINT8[HH]
#define PEGG3SP PEG.G3SP.UINT32
#define PEGG3SPL PEG.G3SP.UINT16[L]
#define PEGG3SPLL PEG.G3SP.UINT8[LL]
#define PEGG3SPLH PEG.G3SP.UINT8[LH]
#define PEGG3SPH PEG.G3SP.UINT16[H]
#define PEGG3SPHL PEG.G3SP.UINT8[HL]
#define PEGG3SPHH PEG.G3SP.UINT8[HH]
#define PEGG4MK PEG.G4MK.UINT32
#define PEGG4MKL PEG.G4MK.UINT16[L]
#define PEGG4MKLL PEG.G4MK.UINT8[LL]
#define PEGG4MKLH PEG.G4MK.UINT8[LH]
#define PEGG4MKH PEG.G4MK.UINT16[H]
#define PEGG4MKHL PEG.G4MK.UINT8[HL]
#define PEGG4MKHH PEG.G4MK.UINT8[HH]
#define PEGG4BA PEG.G4BA.UINT32
#define PEGG4BAL PEG.G4BA.UINT16[L]
#define PEGG4BALL PEG.G4BA.UINT8[LL]
#define PEGG4BALH PEG.G4BA.UINT8[LH]
#define PEGG4BAH PEG.G4BA.UINT16[H]
#define PEGG4BAHL PEG.G4BA.UINT8[HL]
#define PEGG4BAHH PEG.G4BA.UINT8[HH]
#define PEGG4SP PEG.G4SP.UINT32
#define PEGG4SPL PEG.G4SP.UINT16[L]
#define PEGG4SPLL PEG.G4SP.UINT8[LL]
#define PEGG4SPLH PEG.G4SP.UINT8[LH]
#define PEGG4SPH PEG.G4SP.UINT16[H]
#define PEGG4SPHL PEG.G4SP.UINT8[HL]
#define PEGG4SPHH PEG.G4SP.UINT8[HH]
#define PEGG5MK PEG.G5MK.UINT32
#define PEGG5MKL PEG.G5MK.UINT16[L]
#define PEGG5MKLL PEG.G5MK.UINT8[LL]
#define PEGG5MKLH PEG.G5MK.UINT8[LH]
#define PEGG5MKH PEG.G5MK.UINT16[H]
#define PEGG5MKHL PEG.G5MK.UINT8[HL]
#define PEGG5MKHH PEG.G5MK.UINT8[HH]
#define PEGG5BA PEG.G5BA.UINT32
#define PEGG5BAL PEG.G5BA.UINT16[L]
#define PEGG5BALL PEG.G5BA.UINT8[LL]
#define PEGG5BALH PEG.G5BA.UINT8[LH]
#define PEGG5BAH PEG.G5BA.UINT16[H]
#define PEGG5BAHL PEG.G5BA.UINT8[HL]
#define PEGG5BAHH PEG.G5BA.UINT8[HH]
#define PEGG5SP PEG.G5SP.UINT32
#define PEGG5SPL PEG.G5SP.UINT16[L]
#define PEGG5SPLL PEG.G5SP.UINT8[LL]
#define PEGG5SPLH PEG.G5SP.UINT8[LH]
#define PEGG5SPH PEG.G5SP.UINT16[H]
#define PEGG5SPHL PEG.G5SP.UINT8[HL]
#define PEGG5SPHH PEG.G5SP.UINT8[HH]
#define PEGG6MK PEG.G6MK.UINT32
#define PEGG6MKL PEG.G6MK.UINT16[L]
#define PEGG6MKLL PEG.G6MK.UINT8[LL]
#define PEGG6MKLH PEG.G6MK.UINT8[LH]
#define PEGG6MKH PEG.G6MK.UINT16[H]
#define PEGG6MKHL PEG.G6MK.UINT8[HL]
#define PEGG6MKHH PEG.G6MK.UINT8[HH]
#define PEGG6BA PEG.G6BA.UINT32
#define PEGG6BAL PEG.G6BA.UINT16[L]
#define PEGG6BALL PEG.G6BA.UINT8[LL]
#define PEGG6BALH PEG.G6BA.UINT8[LH]
#define PEGG6BAH PEG.G6BA.UINT16[H]
#define PEGG6BAHL PEG.G6BA.UINT8[HL]
#define PEGG6BAHH PEG.G6BA.UINT8[HH]
#define PEGG6SP PEG.G6SP.UINT32
#define PEGG6SPL PEG.G6SP.UINT16[L]
#define PEGG6SPLL PEG.G6SP.UINT8[LL]
#define PEGG6SPLH PEG.G6SP.UINT8[LH]
#define PEGG6SPH PEG.G6SP.UINT16[H]
#define PEGG6SPHL PEG.G6SP.UINT8[HL]
#define PEGG6SPHH PEG.G6SP.UINT8[HH]
#define PEGG7MK PEG.G7MK.UINT32
#define PEGG7MKL PEG.G7MK.UINT16[L]
#define PEGG7MKLL PEG.G7MK.UINT8[LL]
#define PEGG7MKLH PEG.G7MK.UINT8[LH]
#define PEGG7MKH PEG.G7MK.UINT16[H]
#define PEGG7MKHL PEG.G7MK.UINT8[HL]
#define PEGG7MKHH PEG.G7MK.UINT8[HH]
#define PEGG7BA PEG.G7BA.UINT32
#define PEGG7BAL PEG.G7BA.UINT16[L]
#define PEGG7BALL PEG.G7BA.UINT8[LL]
#define PEGG7BALH PEG.G7BA.UINT8[LH]
#define PEGG7BAH PEG.G7BA.UINT16[H]
#define PEGG7BAHL PEG.G7BA.UINT8[HL]
#define PEGG7BAHH PEG.G7BA.UINT8[HH]
#define PEGG7SP PEG.G7SP.UINT32
#define PEGG7SPL PEG.G7SP.UINT16[L]
#define PEGG7SPLL PEG.G7SP.UINT8[LL]
#define PEGG7SPLH PEG.G7SP.UINT8[LH]
#define PEGG7SPH PEG.G7SP.UINT16[H]
#define PEGG7SPHL PEG.G7SP.UINT8[HL]
#define PEGG7SPHH PEG.G7SP.UINT8[HH]
#define SEGCONT SEG.CONT
#define SEGFLAG SEG.FLAG
#define SEGTYPE SEG.TYPE
#define SEGSIDE SEG.SIDE
#define SEGADDR SEG.ADDR.UINT32
#define SEGADDRL SEG.ADDR.UINT16[L]
#define SEGADDRH SEG.ADDR.UINT16[H]
#endif
