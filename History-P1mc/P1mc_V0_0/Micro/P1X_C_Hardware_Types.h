/******************************************************************************/
/*                                                                            */
/* Device     : RH/RH850G3M/R7F701370A, R7F701388, R7F701389, R7F701390,      */
/*              R7F701391, R7F701371, R7F701372, R7F701372A, R7F701396A,      */
/*              R7F701373 R7F701373A, R7F701374, R7F701374A                   */
/* File Name  : P1X_C_Hardware_Types.h                                        */
/* Abstract   : Definition of I/O Register                                    */
/* History    : V1.30_1 [Device File version]                                 */
/* This is a typical example.                                                 */
/*                                                                            */
/* Copyright(c) 2020 Renesas Electronics Corporation. All rights reserved.    */
/*                                                                            */
/******************************************************************************/
#ifndef P1X_C_HARDWARE_TYPES_H
#define P1X_C_HARDWARE_TYPES_H

#include <io_macros_v2.h>
#include <Platform_Types.h>

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
} bitf_T;

#define  REN_P1XC_HWH_BITF_L 0
#define  REN_P1XC_HWH_BITF_H 1
#define REN_P1XC_HWH_BITF_LL 0
#define REN_P1XC_HWH_BITF_LH 1
#define REN_P1XC_HWH_BITF_HL 2
#define REN_P1XC_HWH_BITF_HH 3

typedef struct ST_FLXA0
{                                                          /* FLXA0           */
    uint32  FRPV;                                          /*  FRPV           */

    union                                                  /*                 */
    {                                                      /* FROC            */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FROC;                                                /*                 */

    uint8  dummy0[4];                                      /*                 */

    union                                                  /*                 */
    {                                                      /* FROS            */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FROS;                                                /*                 */

    union                                                  /*                 */
    {                                                      /* FRTEST1         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRTEST1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRTEST2         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRTEST2;                                             /*                 */

    uint8  dummy1[4];                                      /*                 */

    union                                                  /*                 */
    {                                                      /* FRLCK           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRLCK;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FREIR           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FREIR;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSIR           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSIR;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FREILS          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FREILS;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSILS          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSILS;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FREIES          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FREIES;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FREIER          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FREIER;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSIES          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSIES;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRSIER          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSIER;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRILE           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRILE;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRT0C           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRT0C;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRT1C           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRT1C;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSTPW1         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSTPW1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSTPW2         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSTPW2;                                             /*                 */

    uint8  dummy2[44];                                     /*                 */

    union                                                  /*                 */
    {                                                      /* FRSUCC1         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSUCC1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSUCC2         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSUCC2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRSUCC3         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSUCC3;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRNEMC          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRNEMC;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRPRTC1         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRPRTC1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRPRTC2         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRPRTC2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRMHDC          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRMHDC;                                              /*                 */

    uint8  dummy3[4];                                      /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC1         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC2         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC3         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC3;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC4         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC4;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC5         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC5;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC6         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC6;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC7         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC7;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC8         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC8;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC9         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC9;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC10        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC10;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRGTUC11        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRGTUC11;                                            /*                 */

    uint8  dummy4[52];                                     /*                 */

    union                                                  /*                 */
    {                                                      /* FRCCSV          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRCCSV;                                              /*                 */

    union                                                  /*                 */
    {                                                      /* FRCCEV          */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRCCEV;                                              /*                 */

    uint8  dummy5[8];                                      /*                 */

    union                                                  /*                 */
    {                                                      /* FRSCV           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSCV;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRMTCCV         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRMTCCV;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRRCV           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRRCV;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FROCV           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FROCV;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSFS           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSFS;                                               /*                 */

    union                                                  /*                 */
    {                                                      /* FRSWNIT         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRSWNIT;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRACS           */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRACS;                                               /*                 */

    uint8  dummy6[4];                                      /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID1         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID1;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID2         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID2;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID3         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID3;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID4         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID4;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID5         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID5;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID6         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID6;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID7         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID7;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID8         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID8;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID9         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID9;                                             /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID10        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID10;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID11        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID11;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID12        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID12;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID13        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID13;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID14        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID14;                                            /*                 */

    union                                                  /*                 */
    {                                                      /* FRESID15        */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                 /*  16-bit Access  */
        uint8   UINT8[4];                                  /*  8-bit Access   */
    } FRESID15;                                            /*                 */

    uint8  dummy7[4];                                     /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID4          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID5          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID5;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID6          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID6;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID7          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID7;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID8          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID8;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID9          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID9;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID10         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID10;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID11         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID11;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID12         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID12;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID13         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID13;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID14         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID14;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FROSID15         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROSID15;                                           /*                  */

    uint8  dummy8[4];                                     /*                  */

    union                                                 /*                  */
    {                                                     /* FRNMV1           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNMV1;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRNMV2           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNMV2;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRNMV3           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNMV3;                                             /*                  */

    uint8  dummy9[324];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* FRMRC            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMRC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRFRF            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRFRF;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRFRFM           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRFRFM;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRFCL            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRFCL;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRMHDS           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMHDS;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRLDTS           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRLDTS;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRFSR            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRFSR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRMHDF           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMHDF;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRTXRQ1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRTXRQ2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRTXRQ3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRTXRQ4          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRTXRQ4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNDAT1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNDAT2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNDAT3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRNDAT4          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRNDAT4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMBSC1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMBSC2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMBSC3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBSC4          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMBSC4;                                            /*                  */

    uint8  dummy10[160];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* FRCREL           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRCREL;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRENDN           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRENDN;                                             /*                  */

    uint8  dummy11[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS4          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS5          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS5;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS6          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS6;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS7          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS7;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS8          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS8;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS9          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS9;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS10         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS10;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS11         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS11;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS12         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS12;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS13         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS13;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS14         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS14;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS15         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS15;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS16         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS16;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS17         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS17;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS18         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS18;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS19         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS19;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS20         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS20;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS21         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS21;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS22         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS22;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS23         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS23;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS24         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS24;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS25         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS25;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS26         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS26;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS27         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS27;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS28         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS28;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS29         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS29;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS30         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS30;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS31         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS31;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS32         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS32;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS33         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS33;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS34         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS34;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS35         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS35;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS36         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS36;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS37         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS37;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS38         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS38;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS39         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS39;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS40         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS40;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS41         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS41;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS42         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS42;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS43         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS43;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS44         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS44;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS45         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS45;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS46         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS46;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS47         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS47;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS48         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS48;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS49         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS49;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS50         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS50;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS51         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS51;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS52         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS52;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS53         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS53;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS54         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS54;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS55         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS55;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS56         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS56;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS57         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS57;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS58         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS58;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS59         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS59;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS60         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS60;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS61         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS61;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS62         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS62;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS63         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS63;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRDS64         */
        uint32  UINT32;                                   /*  32-bit Access  */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRDS64;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRHS1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRHS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRHS2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRHS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRWRHS3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRWRHS3;                                            /*                  */

    uint8  dummy12[4];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* FRIBCM           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRIBCM;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FRIBCR           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRIBCR;                                             /*                  */

    uint8  dummy13[232];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS4          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS4;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS5          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS5;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS6          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS6;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS7          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS7;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS8          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS8;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS9          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS9;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS10         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS10;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS11         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS11;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS12         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS12;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS13         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS13;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS14         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS14;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS15         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS15;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS16         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS16;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS17         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS17;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS18         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS18;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS19         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS19;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS20         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS20;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS21         */
        uint32  UINT32;                                    /*  32-bit Access  */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS21;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS22         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS22;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS23         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS23;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS24         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS24;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS25         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS25;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS26         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS26;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS27         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS27;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS28         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS28;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS29         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS29;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS30         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS30;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS31         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS31;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS32         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS32;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS33         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS33;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS34         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS34;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS35         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS35;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS36         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS36;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS37         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS37;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS38         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS38;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS39         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS39;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS40         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS40;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS41         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS41;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS42         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS42;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS43         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS43;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS44         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS44;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS45         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS45;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS46         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS46;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS47         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS47;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS48         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS48;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS49         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS49;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS50         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS50;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS51         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS51;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS52         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS52;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS53         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS53;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS54         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS54;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS55         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS55;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS56         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS56;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS57         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS57;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS58         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS58;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS59         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS59;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS60         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS60;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS61         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS61;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS62         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS62;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS63         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS63;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDDS64         */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDDS64;                                           /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDHS1          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDHS1;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDHS2          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDHS2;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRRDHS3          */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRRDHS3;                                            /*                  */

    union                                                 /*                  */
    {                                                     /* FRMBS            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRMBS;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROBCM           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROBCM;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* FROBCR           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROBCR;                                             /*                  */

    uint8  dummy14[232];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* FRITC            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRITC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROTC            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROTC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRIBA            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRIBA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRFBA            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRFBA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROBA            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROBA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRIQC            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRIQC;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRUIR            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRUIR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRUOR            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRUOR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRITS            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRITS;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FROTS            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FROTS;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRAES            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRAES;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRAEA            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRAEA;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* FRDA(0-3)        */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRDA[4];                                            /*                  */

    uint8  dummy15[4];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* FRT2C            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } FRT2C;                                              /*                  */

}T_FLXA0;
typedef struct EthernetRegStruct
{
    uint32  EDSR;                                             /*  EDSR        */
    uint8  dummy76[12];                                       /*              */
    uint32  TDLAR;                                            /*  TDLAR       */
    uint32  TDFAR;                                            /*  TDFAR       */
    uint32  TDFXR;                                            /*  TDFXR       */
    uint32  TDFFR;                                            /*  TDFFR       */
    uint8  dummy77[16];                                       /*              */
    uint32  RDLAR;                                            /*  RDLAR       */
    uint32  RDFAR;                                            /*  RDFAR       */
    uint32  RDFXR;                                            /*  RDFXR       */
    uint32  RDFFR;                                            /*  RDFFR       */
    uint8  dummy78[960];                                      /*              */
    uint32  EDMR;                                             /*  EDMR        */
    uint8  dummy79[4];                                        /*              */
    uint32  EDTRR;                                            /*  EDTRR       */
    uint8  dummy80[4];                                        /*              */
    uint32  EDRRR;                                            /*  EDRRR       */
    uint8  dummy81[20];                                       /*              */
    uint32  EESR;                                             /*  EESR        */
    uint8  dummy82[4];                                        /*              */
    uint32  EESIPR;                                           /*  EESIPR      */
    uint8  dummy83[4];                                        /*              */
    uint32  TRSCER;                                           /*  TRSCER      */
    uint8  dummy84[4];                                        /*              */
    uint32  RMFCR;                                            /*  RMFCR       */
    uint8  dummy85[12];                                       /*              */
    uint32  FDR;                                              /*  FDR         */
    uint8  dummy86[4];                                        /*              */
    uint32  RMCR;                                             /*  RMCR        */
    uint8  dummy87[4];                                        /*              */
    uint32  RPADIR;                                           /*  RPADIR      */
    uint8  dummy88[4];                                        /*              */
    uint32  FCFTR;                                            /*  FCFTR       */
    uint8  dummy89[20];                                       /*              */
    uint32  TFSR;                                             /*  TFSR        */
    uint8  dummy90[4];                                        /*              */
    uint32  RFSR;                                             /*  RFSR        */
    uint8  dummy91[116];                                      /*              */
    uint32  ECMR;                                             /*  ECMR        */
    uint8  dummy92[4];                                        /*              */
    uint32  RFLR;                                             /*  RFLR        */
    uint8  dummy93[4];                                        /*              */
    uint32  ECSR;                                             /*  ECSR        */
    uint8  dummy94[4];                                        /*              */
    uint32  ECSIPR;                                           /*  ECSIPR      */
    uint8  dummy95[4];                                        /*              */
    uint32  PIR;                                              /*  PIR         */
    uint8  dummy96[4];                                        /*              */
    uint32  PLSR;                                             /*  PLSR        */
    uint8  dummy97[40];                                       /*              */
    uint32  APR;                                              /*  APR         */
    uint32  MPR;                                              /*  MPR         */
    uint32  PFTCR;                                            /*  PFTCR       */
    uint32  PFRCR;                                            /*  PFRCR       */
    uint32  TPAUSER;                                          /*  TPAUSER     */
    uint8  dummy98[4];                                        /*              */
    uint32  BCFRR;                                            /*  BCFRR       */
    uint32  CRBCFRR;                                          /*  CRBCFRR     */
    uint8  dummy99[60];                                       /*              */
    uint32  EMR;                                              /*  EMR         */
    uint8  dummy100[12];                                      /*              */
    uint32  MAHR;                                             /*  MAHR        */
    uint8  dummy101[4];                                       /*              */
    uint32  MALR;                                             /*  MALR        */
    uint8  dummy102[308];                                     /*              */
    uint32  TROCR;                                            /*  TROCR       */
    uint8  dummy103[4];                                       /*              */
    uint32  CDCR;                                             /*  CDCR        */
    uint8  dummy104[4];                                       /*              */
    uint32  LCCR;                                             /*  LCCR        */
    uint8  dummy105[44];                                      /*              */
    uint32  CEFCR;                                            /*  CEFCR       */
    uint8  dummy106[4];                                       /*              */
    uint32  FRECR;                                            /*  FRECR       */
    uint8  dummy107[4];                                       /*              */
    uint32  TSFRCR;                                           /*  TSFRCR      */
    uint8  dummy108[4];                                       /*              */
    uint32  TLFRCR;                                           /*  TLFRCR      */
    uint8  dummy109[4];                                       /*              */
    uint32  RFCR;                                             /*  RFCR        */
    uint8  dummy110[20];                                      /*              */
    uint32  MAFCR;                                            /*  MAFCR       */
    uint8  dummy111[1160];                                    /*              */
    uint32  HDMMDR;                                           /*  HDMMDR      */
    uint8  dummy112[8];                                       /*              */
    uint32  HDMISR;                                           /*  HDMISR      */
    uint32  HDMIER;                                           /*  HDMIER      */
}T_ETNA;

typedef struct EthernetCommonRegStruct
{
    uint32  ARSTR;                                        /*  ARSTR           */
    uint32  TSU_CTRST;                                    /*  TSU_CTRST       */
    uint8  dummy68[40];                                   /*                  */
    uint32  TSU_FWSL0;                                    /*  TSU_FWSL0       */
    uint32  TSU_FWSL1;                                    /*  TSU_FWSL1       */
    uint32  TSU_FWSLC;                                    /*  TSU_FWSLC       */
    uint8  dummy69[20];                                   /*                  */
    uint32  TSU_FWSR;                                     /*  TSU_FWSR        */
    uint32  TSU_FWINMK;                                   /*  TSU_FWINMK      */
    uint32  TSU_VTAG0;                                    /*  TSU_VTAG0       */
    uint32  TSU_VTAG1;                                    /*  TSU_VTAG1       */
    uint32  TSU_ADSBSY;                                   /*  TSU_ADSBSY      */
    uint32  TSU_TEN;                                      /*  TSU_TEN         */
    uint8  dummy70[8];                                    /*                  */
    uint32  TSU_POST1;                                    /*  TSU_POST1       */
    uint32  TSU_POST2;                                    /*  TSU_POST2       */
    uint32  TSU_POST3;                                    /*  TSU_POST3       */
    uint32  TSU_POST4;                                    /*  TSU_POST4       */
}T_CommonRegType;

typedef struct EthernetTSUReg
{
 uint32  TSU_ADRH;                                         /*  TSU_ADRH       */
 uint32  TSU_ADRL;                                         /*  TSU_ADRL       */
}T_TSURegType;

typedef struct ST_FLMD
{                                                         /* FLMD             */
     uint32 CNT;                                          /*  CNT             */
     uint32 PCMD;                                         /*  PCMD            */
     uint32 PS;                                           /*  PS              */
} T_FLMD;

typedef struct ST_DNFA2
{                                                        /* DNFA2            */
  union                                                  /*                  */
  {                                                      /* CTL              */
      uint8  UINT8;                                      /*  8-bit Access    */
      struct                                             /*                  */
      {                                                  /*  Bit Access      */
          uint8  PRS0:1;                                 /*   PRS0           */
          uint8  PRS1:1;                                 /*   PRS1           */
          uint8  PRS2:1;                                 /*   PRS2           */
          uint8  :2;                                     /*   Reserved Bits  */
          uint8  NFSTS0:1;                               /*   NFSTS0         */
          uint8  NFSTS1:1;                               /*   NFSTS1         */
          uint8  :1;                                     /*   Reserved Bits  */
      } BIT;                                             /*                  */
  } CTL;                                                 /*                  */

  uint8  dummy369[3];                                    /*                  */

  union                                                  /*                  */
  {                                                      /* EN               */
      uint16 UINT16;                                     /*  16-bit Access   */
      uint8  UINT8[2];                                   /*  8-bit Access    */
      struct                                             /*                  */
      {                                                  /*  Bit Access      */
          uint8  NFENL0:1;                               /*   NFENL0         */
          uint8  NFENL1:1;                               /*   NFENL1         */
          uint8  :6;                                     /*   Reserved Bits  */
          uint8  :8;                                     /*   Reserved Bits  */
      } BIT;                                             /*                  */
  } EN;                                                  /*                  */
}T_DNFA2;

typedef struct ST_DNFA3
{                                                         /* DNFA3            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  PRS0:1;                                /*   PRS0           */
            uint8  PRS1:1;                                /*   PRS1           */
            uint8  PRS2:1;                                /*   PRS2           */
            uint8  :2;                                    /*   Reserved Bits  */
            uint8  NFSTS0:1;                              /*   NFSTS0         */
            uint8  NFSTS1:1;                              /*   NFSTS1         */
            uint8  :1;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    uint8  dummy370[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  NFENL0:1;                              /*   NFENL0         */
            uint8  NFENL1:1;                              /*   NFENL1         */
            uint8  :6;                                    /*   Reserved Bits  */
            uint8  :8;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA3;

typedef struct ST_DNFA4
{                                                         /* DNFA4            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  PRS0:1;                                /*   PRS0           */
            uint8  PRS1:1;                                /*   PRS1           */
            uint8  PRS2:1;                                /*   PRS2           */
            uint8  :2;                                    /*   Reserved Bits  */
            uint8  NFSTS0:1;                              /*   NFSTS0         */
            uint8  NFSTS1:1;                              /*   NFSTS1         */
            uint8  :1;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    uint8  dummy371[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  NFENL0:1;                              /*   NFENL0         */
            uint8  NFENL1:1;                              /*   NFENL1         */
            uint8  :6;                                    /*   Reserved Bits  */
            uint8  :8;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA4;

typedef struct ST_DNFA5
{                                                         /* DNFA5            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  PRS0:1;                                /*   PRS0           */
            uint8  PRS1:1;                                /*   PRS1           */
            uint8  PRS2:1;                                /*   PRS2           */
            uint8  :2;                                    /*   Reserved Bits  */
            uint8  NFSTS0:1;                              /*   NFSTS0         */
            uint8  NFSTS1:1;                              /*   NFSTS1         */
            uint8  :1;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    uint8  dummy372[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  NFENL0:1;                              /*   NFENL0         */
            uint8  NFENL1:1;                              /*   NFENL1         */
            uint8  NFENL2:1;                              /*   NFENL2         */
            uint8  NFENL3:1;                              /*   NFENL3         */
            uint8  NFENL4:1;                              /*   NFENL4         */
            uint8  NFENL5:1;                              /*   NFENL5         */
            uint8  NFENL6:1;                              /*   NFENL6         */
            uint8  NFENL7:1;                              /*   NFENL7         */
            uint8  :8;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA5;

typedef struct ST_DNFA6
{                                                         /* DNFA6            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  PRS0:1;                                /*   PRS0           */
            uint8  PRS1:1;                                /*   PRS1           */
            uint8  PRS2:1;                                /*   PRS2           */
            uint8  :2;                                    /*   Reserved Bits  */
            uint8  NFSTS0:1;                              /*   NFSTS0         */
            uint8  NFSTS1:1;                              /*   NFSTS1         */
            uint8  :1;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    uint8  dummy373[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  NFENL0:1;                              /*   NFENL0         */
            uint8  NFENL1:1;                              /*   NFENL1         */
            uint8  :6;                                    /*   Reserved Bits  */
            uint8  :8;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA6;

typedef struct ST_DNFA7
{                                                         /* DNFA7            */
    union                                                 /*                  */
    {                                                     /* CTL              */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  PRS0:1;                                /*   PRS0           */
            uint8  PRS1:1;                                /*   PRS1           */
            uint8  PRS2:1;                                /*   PRS2           */
            uint8  :2;                                    /*   Reserved Bits  */
            uint8  NFSTS0:1;                              /*   NFSTS0         */
            uint8  NFSTS1:1;                              /*   NFSTS1         */
            uint8  :1;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL;                                                /*                  */

    uint8  dummy374[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* EN               */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  NFENL0:1;                              /*   NFENL0         */
            uint8  NFENL1:1;                              /*   NFENL1         */
            uint8  :6;                                    /*   Reserved Bits  */
            uint8  :8;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } EN;                                                 /*                  */

}T_DNFA7;

typedef struct ST_FCLA_ICU
{
 volatile uint8 ulFCLA_INTP[273];
/* FCLA0CTL0_NMI         - offset 0x00  */
/* FCLA0CTL1_INTP0       - offset 0x04  */
/* FCLA0CTL2_INTP1       - offset 0x08  */
/* FCLA0CTL3_INTP2       - offset 0x0C  */
/* FCLA0CTL4_INTP3       - offset 0x10  */
/* FCLA0CTL5_INTP4       - offset 0x14  */
/* FCLA0CTL6_INTP5       - offset 0x18  */
/* FCLA0CTL7_INTP6       - offset 0x1C  */
/* FCLA1CTL0_INTP7       - offset 0x100 */
/* FCLA1CTL1_INTP8       - offset 0x104 */
/* FCLA1CTL2_INTP9       - offset 0x108 */
/* FCLA1CTL3_INTP10      - offset 0x10C */
/* FCLA1CTL4_INTP11      - offset 0x110 */
}T_FCLA_ICU;


typedef struct ST_FCLA0
{                                                         /* FCLA0            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR0:1;                               /*   INTR0          */
            uint8  INTF0:1;                               /*   INTF0          */
            uint8  INTL0:1;                               /*   INTL0          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy375[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR1:1;                               /*   INTR1          */
            uint8  INTF1:1;                               /*   INTF1          */
            uint8  INTL1:1;                               /*   INTL1          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

    uint8  dummy376[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL2             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR2:1;                               /*   INTR2          */
            uint8  INTF2:1;                               /*   INTF2          */
            uint8  INTL2:1;                               /*   INTL2          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL2;                                               /*                  */

    uint8  dummy377[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL3             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR3:1;                               /*   INTR3          */
            uint8  INTF3:1;                               /*   INTF3          */
            uint8  INTL3:1;                               /*   INTL3          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL3;                                               /*                  */

    uint8  dummy378[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL4             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR4:1;                               /*   INTR4          */
            uint8  INTF4:1;                               /*   INTF4          */
            uint8  INTL4:1;                               /*   INTL4          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL4;                                               /*                  */

    uint8  dummy379[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL5             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR5:1;                               /*   INTR5          */
            uint8  INTF5:1;                               /*   INTF5          */
            uint8  INTL5:1;                               /*   INTL5          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL5;                                               /*                  */

    uint8  dummy380[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL6             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR6:1;                               /*   INTR6          */
            uint8  INTF6:1;                               /*   INTF6          */
            uint8  INTL6:1;                               /*   INTL6          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL6;                                               /*                  */

    uint8  dummy381[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL7             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR7:1;                               /*   INTR7          */
            uint8  INTF7:1;                               /*   INTF7          */
            uint8  INTL7:1;                               /*   INTL7          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL7;                                               /*                  */

}T_FCLA0;

typedef struct ST_FCLA1
{                                                         /* FCLA1            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR0:1;                               /*   INTR0          */
            uint8  INTF0:1;                               /*   INTF0          */
            uint8  INTL0:1;                               /*   INTL0          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy382[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR1:1;                               /*   INTR1          */
            uint8  INTF1:1;                               /*   INTF1          */
            uint8  INTL1:1;                               /*   INTL1          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

    uint8  dummy383[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL2             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR2:1;                               /*   INTR2          */
            uint8  INTF2:1;                               /*   INTF2          */
            uint8  INTL2:1;                               /*   INTL2          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL2;                                               /*                  */

    uint8  dummy384[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL3             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR3:1;                               /*   INTR3          */
            uint8  INTF3:1;                               /*   INTF3          */
            uint8  INTL3:1;                               /*   INTL3          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL3;                                               /*                  */

    uint8  dummy385[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL4             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR4:1;                               /*   INTR4          */
            uint8  INTF4:1;                               /*   INTF4          */
            uint8  INTL4:1;                               /*   INTL4          */
            uint8  :5;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL4;                                               /*                  */

}T_FCLA1;

typedef struct ST_FCLA2
{                                                         /* FCLA2            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR0:1;                               /*   INTR0          */
            uint8  INTF0:1;                               /*   INTF0          */
            uint8  :6;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy386[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR1:1;                               /*   INTR1          */
            uint8  INTF1:1;                               /*   INTF1          */
            uint8  :6;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA2;

typedef struct ST_FCLA3
{                                                         /* FCLA3            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR0:1;                               /*   INTR0          */
            uint8  INTF0:1;                               /*   INTF0          */
            uint8  :6;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy387[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR1:1;                               /*   INTR1          */
            uint8  INTF1:1;                               /*   INTF1          */
            uint8  :6;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA3;

typedef struct ST_FCLA4
{                                                         /* FCLA4            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR0:1;                               /*   INTR0          */
            uint8  INTF0:1;                               /*   INTF0          */
            uint8  :6;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy388[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  INTR1:1;                               /*   INTR1          */
            uint8  INTF1:1;                               /*   INTF1          */
            uint8  :6;                                    /*   Reserved Bits  */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA4;

typedef struct ST_FCLA5
{                                                         /* FCLA5            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS0:1;                               /*   BYPS0          */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy389[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS1:1;                               /*   BYPS1          */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

    uint8  dummy390[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL2             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS2:1;                               /*   BYPS2          */
        } BIT;                                            /*                  */
    } CTL2;                                               /*                  */

    uint8  dummy391[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL3             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS3:1;                               /*   BYPS3          */
        } BIT;                                            /*                  */
    } CTL3;                                               /*                  */

    uint8  dummy392[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL4             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS4:1;                               /*   BYPS4          */
        } BIT;                                            /*                  */
    } CTL4;                                               /*                  */

    uint8  dummy393[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL5             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS5:1;                               /*   BYPS5          */
        } BIT;                                            /*                  */
    } CTL5;                                               /*                  */

    uint8  dummy394[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL6             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS6:1;                               /*   BYPS6          */
        } BIT;                                            /*                  */
    } CTL6;                                               /*                  */

    uint8  dummy395[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL7             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS7:1;                               /*   BYPS7          */
        } BIT;                                            /*                  */
    } CTL7;                                               /*                  */

}T_FCLA5;

typedef struct ST_FCLA6
{                                                         /* FCLA6            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS0:1;                               /*   BYPS0          */
        } BIT;                                            /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy396[3];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* CTL1             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  :7;                                    /*   Reserved Bits  */
            uint8  BYPS1:1;                               /*   BYPS1          */
        } BIT;                                            /*                  */
    } CTL1;                                               /*                  */

}T_FCLA6;

typedef struct ST_DCRB0
{                                                         /* DCRB0            */
    uint32  CIN;                                          /*  CIN             */
    uint32  COUT;                                         /*  COUT            */
    uint8  dummy565[24];                                  /*                  */
    uint8  CTL;                                           /*  CTL             */
}T_DCRB0;

typedef struct ST_ECMM0
{                                                         /* ECMM0            */
    uint8   ESET;                                         /*  ESET            */
    uint8   dummy569[3];                                  /*                  */
    uint8   ECLR;                                         /*  ECLR            */
    uint8   dummy570[3];                                  /*                  */
    uint32  ESSTR0;                                       /*  ESSTR0          */
    uint32  ESSTR1;                                       /*  ESSTR1          */
    uint32  ESSTR2;                                       /*  ESSTR2          */
    uint32  PCMD0;                                        /*  PCMD0           */
}T_ECMM0;

typedef struct ST_ECMC0
{                                                         /* ECMC0            */
    uint8   ESET;                                         /*  ESET            */
    uint8   dummy571[3];                                  /*                  */
    uint8   ECLR;                                         /*  ECLR            */
    uint8   dummy572[3];                                  /*                  */
    uint32  ESSTR0;                                       /*  ESSTR0          */
    uint32  ESSTR1;                                       /*  ESSTR1          */
    uint32  ESSTR2;                                       /*  ESSTR2          */
    uint32  PCMD0;                                        /*  PCMD0           */
}T_ECMC0;

typedef struct ST_ECM0
{                                                         /* ECM0             */
    uint32  EPCFG;                                        /*  EPCFG           */
    uint32  MICFG0;                                       /*  MICFG0          */
    uint32  MICFG1;                                       /*  MICFG1          */
    uint32  MICFG2;                                       /*  MICFG2          */
    uint32  NMICFG0;                                      /*  NMICFG0         */
    uint32  NMICFG1;                                      /*  NMICFG1         */
    uint32  NMICFG2;                                      /*  NMICFG2         */
    uint32  IRCFG0;                                       /*  IRCFG0          */
    uint32  IRCFG1;                                       /*  IRCFG1          */
    uint32  IRCFG2;                                       /*  IRCFG2          */
    uint32  EMK0;                                         /*  EMK0            */
    uint32  EMK1;                                         /*  EMK1            */
    uint32  EMK2;                                         /*  EMK2            */
    uint32  ESSTC0;                                       /*  ESSTC0          */
    uint32  ESSTC1;                                       /*  ESSTC1          */
    uint32  ESSTC2;                                       /*  ESSTC2          */
    uint32  PCMD1;                                        /*  PCMD1           */
    uint8   PS;                                           /*  PS              */
    uint8   dummy574[3];                                  /*                  */
    uint32  PE0;                                          /*  PE0             */
    uint32  PE1;                                          /*  PE1             */
    uint32  PE2;                                          /*  PE2             */
    uint32  DTMCTL;                                       /*  DTMCTL          */
    uint16  DTMR;                                         /*  DTMR            */
    uint8   dummy576[2];                                  /*                  */
    uint32  DTMCMP;                                       /*  DTMCMP          */
    uint32  DTMCFG0;                                      /*  DTMCFG0         */
    uint32  DTMCFG1;                                      /*  DTMCFG1         */
    uint32  DTMCFG2;                                      /*  DTMCFG2         */
    uint32  DTMCFG3;                                      /*  DTMCFG3         */
    uint32  DTMCFG4;                                      /*  DTMCFG4         */
    uint32  DTMCFG5;                                      /*  DTMCFG5         */
    uint32  EOCCFG;                                       /*  EOCCFG          */
    uint32  PEM;                                          /*  PEM             */
}T_ECM0;

typedef struct ST_CSIH0
{                                                         /* CSIH0            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8  UINT8;                                     /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8  MBS:1;                                 /*   MBS            */
            uint8  JOBE:1;                                /*   JOBE           */
            uint8  :3;                                    /*   Reserved Bits  */
            uint8  RXE:1;                                 /*   RXE            */
            uint8  TXE:1;                                 /*   TXE            */
            uint8  PWR:1;                                 /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    uint8   dummy578[15];                                 /*                  */
    uint32  CTL1;                                         /*  CTL1            */
    uint16  CTL2;                                         /*  CTL2            */
    uint8   dummy579[4074];                               /*                  */
    uint32  MCTL1;                                        /*  MCTL1           */
    uint32  MCTL2;                                        /*  MCTL2           */
    uint32  TX0W;                                         /*  TX0W            */
    uint16  TX0H;                                         /*  TX0H            */
    uint8   dummy580[2];                                  /*                  */
    uint32  RX0W;                                         /*  RX0W            */
    uint16  RX0H;                                         /*  RX0H            */
    uint8   dummy581[2];                                  /*                  */
    uint32  MRWP0;                                        /*  MRWP0           */
    uint32  STR0;                                         /*  STR0            */
    uint16  STCR0;                                        /*  STCR0           */
    uint8   dummy582[30];                                 /*                  */
    uint16  MCTL0;                                        /*  MCTL0           */
    uint8   dummy583[2];                                  /*                  */
    uint32  CFG[8];                                       /*  CFG0-CFG7       */
    uint8   dummy584[4];                                  /*                  */
    uint16  BRS0;                                         /*  BRS0            */
    uint8   dummy585[2];                                  /*                  */
    uint16  BRS1;                                         /*  BRS1            */
    uint8   dummy586[2];                                  /*                  */
    uint16  BRS2;                                         /*  BRS2            */
    uint8   dummy587[2];                                  /*                  */
    uint16  BRS3;                                         /*  BRS3            */
}T_CSIH0;


typedef struct ST_CSIH1
{                                                         /* CSIH1            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8 UINT8;                                      /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8 MBS:1;                                  /*   MBS            */
            uint8 JOBE:1;                                 /*   JOBE           */
            uint8 :3;                                     /*   Reserved Bits  */
            uint8 RXE:1;                                  /*   RXE            */
            uint8 TXE:1;                                  /*   TXE            */
            uint8 PWR:1;                                  /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy157[15];                                  /*                  */
    uint32 CTL1;                                          /*  CTL1            */
    uint16 CTL2;                                          /*  CTL2            */
    uint8  dummy158[4074];                                /*                  */
    uint32 MCTL1;                                         /*  MCTL1           */
    uint32 MCTL2;                                         /*  MCTL2           */
    uint32 TX0W;                                          /*  TX0W            */
    uint16 TX0H;                                          /*  TX0H            */
    uint8  dummy159[2];                                   /*                  */
    uint32 RX0W;                                          /*  RX0W            */
    uint16 RX0H;                                          /*  RX0H            */
    uint8  dummy160[2];                                   /*                  */
    uint32 MRWP0;                                         /*  MRWP0           */
    uint32 STR0;                                          /*  STR0            */
    uint16 STCR0;                                         /*  STCR0           */
    uint8  dummy161[30];                                  /*                  */
    uint16 MCTL0;                                         /*  MCTL0           */
    uint8  dummy162[2];                                   /*                  */
    uint32 CFG[8];                                        /*  CFG0-CFG7       */
    uint8  dummy163[4];                                   /*                  */
    uint16 BRS0;                                          /*  BRS0            */
    uint8  dummy164[2];                                   /*                  */
    uint16 BRS1;                                          /*  BRS1            */
    uint8  dummy165[2];                                   /*                  */
    uint16 BRS2;                                          /*  BRS2            */
    uint8  dummy166[2];                                   /*                  */
    uint16 BRS3;                                          /*  BRS3            */
} T_CSIH1;


typedef struct ST_CSIH2
{                                                         /* CSIH2            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8 UINT8;                                      /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8 MBS:1;                                  /*   MBS            */
            uint8 JOBE:1;                                 /*   JOBE           */
            uint8 :3;                                     /*   Reserved Bits  */
            uint8 RXE:1;                                  /*   RXE            */
            uint8 TXE:1;                                  /*   TXE            */
            uint8 PWR:1;                                  /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy247[15];                                  /*                  */
    uint32 CTL1;                                          /*  CTL1            */
    uint16 CTL2;                                          /*  CTL2            */
    uint8  dummy248[4074];                                /*                  */
    uint32 MCTL1;                                         /*  MCTL1           */
    uint32 MCTL2;                                         /*  MCTL2           */
    uint32 TX0W;                                          /*  TX0W            */
    uint16 TX0H;                                          /*  TX0H            */
    uint8  dummy249[2];                                   /*                  */
    uint32 RX0W;                                          /*  RX0W            */
    uint16 RX0H;                                          /*  RX0H            */
    uint8  dummy250[2];                                   /*                  */
    uint32 MRWP0;                                         /*  MRWP0           */
    uint32 STR0;                                          /*  STR0            */
    uint16 STCR0;                                         /*  STCR0           */
    uint8  dummy251[30];                                  /*                  */
    uint16 MCTL0;                                         /*  MCTL0           */
    uint8  dummy252[2];                                   /*                  */
    uint32 CFG[8];                                        /*  CFG0-CFG7       */
    uint8  dummy253[4];                                   /*                  */
    uint16 BRS0;                                          /*  BRS0            */
    uint8  dummy254[2];                                   /*                  */
    uint16 BRS1;                                          /*  BRS1            */
    uint8  dummy255[2];                                   /*                  */
    uint16 BRS2;                                          /*  BRS2            */
    uint8  dummy256[2];                                   /*                  */
    uint16 BRS3;                                          /*  BRS3            */
} T_CSIH2;

typedef struct ST_CSIH3
{                                                         /* CSIH3            */
    union                                                 /*                  */
    {                                                     /* CTL0             */
        uint8 UINT8;                                      /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*  Bit Access      */
            uint8 MBS:1;                                  /*   MBS            */
            uint8 JOBE:1;                                 /*   JOBE           */
            uint8 :3;                                     /*   Reserved Bits  */
            uint8 RXE:1;                                  /*   RXE            */
            uint8 TXE:1;                                  /*   TXE            */
            uint8 PWR:1;                                  /*   PWR            */
        }BIT;                                             /*                  */
    } CTL0;                                               /*                  */

    uint8  dummy167[15];                                  /*                  */
    uint32 CTL1;                                          /*  CTL1            */
    uint16 CTL2;                                          /*  CTL2            */
    uint8  dummy168[4074];                                /*                  */
    uint32 MCTL1;                                         /*  MCTL1           */
    uint32 MCTL2;                                         /*  MCTL2           */
    uint32 TX0W;                                          /*  TX0W            */
    uint16 TX0H;                                          /*  TX0H            */
    uint8  dummy169[2];                                   /*                  */
    uint32 RX0W;                                          /*  RX0W            */
    uint16 RX0H;                                          /*  RX0H            */
    uint8  dummy170[2];                                   /*                  */
    uint32 MRWP0;                                         /*  MRWP0           */
    uint32 STR0;                                          /*  STR0            */
    uint16 STCR0;                                         /*  STCR0           */
    uint8  dummy171[30];                                  /*                  */
    uint16 MCTL0;                                         /*  MCTL0           */
    uint8  dummy172[2];                                   /*                  */
    uint32 CFG[8];                                        /*  CFG0-CFG7       */
    uint8  dummy173[4];                                   /*                  */
    uint16 BRS0;                                          /*  BRS0            */
    uint8  dummy174[2];                                   /*                  */
    uint16 BRS1;                                          /*  BRS1            */
    uint8  dummy175[2];                                   /*                  */
    uint16 BRS2;                                          /*  BRS2            */
    uint8  dummy176[2];                                   /*                  */
    uint16 BRS3;                                          /*  BRS3            */
} T_CSIH3;



typedef struct ST_RLN30
{                                                         /* RLN30            */
    uint8  dummy598[1];                                   /*                  */
    uint8  LWBR;                                          /*  LWBR            */

    union                                                 /*                  */
    {                                                     /* LBRP01           */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
        struct                                            /*                  */
        {                                                 /*                  */
            union                                         /*                  */
            {                                             /*   LBRP0          */
                uint8  UINT8;                             /*   8-bit Access   */
            } LBRP0;                                      /*                  */
            union                                         /*                  */
            {                                             /*   LBRP1          */
                uint8  UINT8;                             /*   8-bit Access   */
            } LBRP1;                                      /*                  */
        } REGS8;                                          /*                  */
    } LBRP01;                                             /*                  */

    uint8  LSTC;                                          /*  LSTC            */
    uint8  dummy599[3];                                   /*                  */
    uint8  LMD;                                           /*  LMD             */
    uint8  LBFC;                                          /*  LBFC            */
    uint8  LSC;                                           /*  LSC             */
    uint8  LWUP;                                          /*  LWUP            */
    uint8  LIE;                                           /*  LIE             */
    uint8  LEDE;                                          /*  LEDE            */
    uint8  LCUC;                                          /*  LCUC            */
    uint8  dummy600[1];                                   /*                  */
    uint8  LTRC;                                          /*  LTRC            */
    uint8  LMST;                                          /*  LMST            */
    uint8  LST;                                           /*  LST             */
    uint8  LEST;                                          /*  LEST            */
    uint8  LDFC;                                          /*  LDFC            */
    uint8  LIDB;                                          /*  LIDB            */
    uint8  LCBR;                                          /*  LCBR            */
    uint8  LUDB0;                                         /*  LUDB0           */
    uint8  LDBR1;                                         /*  LDBR1           */
    uint8  LDBR2;                                         /*  LDBR2           */
    uint8  LDBR3;                                         /*  LDBR3           */
    uint8  LDBR4;                                         /*  LDBR4           */
    uint8  LDBR5;                                         /*  LDBR5           */
    uint8  LDBR6;                                         /*  LDBR6           */
    uint8  LDBR7;                                         /*  LDBR7           */
    uint8  LDBR8;                                         /*  LDBR8           */
    uint8  LUOER;                                         /*  LUOER           */
    uint8  LUOR1;                                         /*  LUOR1           */
    uint8  dummy601[2];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* LUTDR            */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
    } LUTDR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* LURDR            */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
    } LURDR;                                              /*                  */

    union                                                 /*                  */
    {                                                     /* LUWTDR           */
        uint16 UINT16;                                    /*  16-bit Access   */
        uint8  UINT8[2];                                  /*  8-bit Access    */
    } LUWTDR;                                             /*                  */

}T_RLN30;
typedef struct ST_FSGD2A
{                                                         /* FSGD2A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD2A;
typedef struct ST_WDTA0
{                                                         /* WDTA0            */
    uint8  WDTE;                                          /*  WDTE            */
    uint8  dummy721[3];                                   /*                  */
    uint8  EVAC;                                          /*  EVAC            */
    uint8  dummy722[3];                                   /*                  */
    uint8  REF;                                           /*  REF             */
    uint8  dummy723[3];                                   /*                  */
    uint8  MD;                                            /*  MD              */
}T_WDTA0;
typedef struct ST_FSGD1A
{                                                         /* FSGD1A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

}T_FSGD1A;
typedef struct ST_FSGD1B
{                                                         /* FSGD1B           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } PROT02;

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    uint8  dummy731[16];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD1B;
typedef struct ST_CLMA0
{                                                         /* CLMA0            */
    uint8  CTL0;                                          /*  CTL0            */
    uint8  dummy823[7];                                   /*                  */
    uint16 CMPL;                                          /*  CMPL            */
    uint8  dummy824[2];                                   /*                  */
    uint16 CMPH;                                          /*  CMPH            */
    uint8  dummy825[2];                                   /*                  */
    uint8  PCMD;                                          /*  PCMD            */
    uint8  dummy826[3];                                   /*                  */
    uint8  PS;                                            /*  PS              */
    uint8  dummy827[3];                                   /*                  */
    uint8  EMU0;                                          /*  EMU0            */
}T_CLMA0;
typedef struct ST_FSGD4A
{                                                         /* FSGD4A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT14           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID14           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT15           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT15;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID15           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID15;                                             /*                  */

}T_FSGD4A;
typedef struct ST_FSGD4B
{                                                         /* FSGD4B           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD4B;

#define ADCX_NUMBER_OF_CHANNELS       24
#define ADCX_NUMBER_OF_GROUPS         5

/*******************************************************************************
** Structure for HW Unit Registers, which are used to read or write           **
** the status or configured values for proper working of the ADC driver       **
*******************************************************************************/
typedef struct STag_Adc_AdcxSgRegs
{
  /*START Msg(2:3132)-2 */
  /* Scan group x start control register */
  uint8 volatile ucADCXnSGSTCRx;
  /* Reserved area */
  const uint8 Res1[7];
  /* AD timer y start control register */
  uint8 volatile ucADCXnADTSTCRy;
  /* Reserved area */
  const uint8 Res2[3];
  /* AD timer y end control register */
  uint8 volatile ucADCXnADTENDCRy;
  /* Reserved area */
  const uint8 Res3[3];
  /* Scan group x control register */
  uint8 volatile ucADCXnSGCRx;
  /* Reserved area */
  const uint8 Res4[3];
  /* Scan group x start virtual channel pointer */
  uint8 volatile ucADCXnSGVCSPx;
  /* Reserved area */
  const uint8 Res5[3];
  /* Scan group x end virtual channel pointer */
  uint8 volatile ucADCXnSGVCEPx;
  /* Reserved area */
  const uint8 Res6[3];
  /* Scan group x multi-cycle register */
  uint8 volatile ucADCXnSGMCYCRx;
  /* Reserved area */
  const uint8 Res7[7];
  /* Scan group x status register */
  uint8 volatile ucADCXnSGSRx;
  /* Reserved area */
  const uint8 Res8[3];
  /* AD timer y initial phase register */
  uint32 volatile ulADCXnADTIPRy;
  /* AD timer y period register */
  uint32 volatile ulADCXnADTPRRy;
  /* Scan group x upper-limit/lower-limit table select register */
  uint8 volatile ucADCXnULLMSRx;
  /* Reserved area */
  const uint8 Res9[79];
  /* END Msg(2:3132)-2 */
}Adc_AdcxSgRegs;

typedef struct STag_AdcConfigRegisters
{
  /*START Msg(2:3132)-2 */
  /* Virtual channel register j */
  uint32 volatile ulADCXnVCRj[ADCX_NUMBER_OF_CHANNELS];
  /* Reserved area 1 */
  const uint8 AdcdCh_Res1[160];
  /* Data register j (j = only even numbers) */
  uint32 volatile ulADCXnDRj[ADCX_NUMBER_OF_CHANNELS];
  /* Reserved area 2 */
  const uint8 AdcdCh_Res2[160];
  /* Data supplementary information register j */
  uint32 volatile ulADCXnDIRj[ADCX_NUMBER_OF_CHANNELS];
  /* Reserved area 3 */
  const uint8 AdcdCh_Res3[160];
  /* AD synchronization start control register */
  uint8 volatile ucADCD0ADSYNSTCR;
  /* Reserved area */
  const uint8 Res1[3];
  /* AD timer synchronization start control register */
  uint8 volatile ucADCD0ADTSYNSTCR;
  /* Reserved area */
  const uint8 Res2[59];
  /* A/D conversion time control register */
  uint16 volatile usADCXnSMPCR;
  /* Reserved area */
  const uint8 Res3[62];
  /* AD halt register */
  uint8 volatile ucADCXnADHALTR;
  /* Reserved area */
  const uint8 Res4[3];
  /* AD control register1 */
  uint8 volatile ucADCXnADCR1;
  /* Reserved area */
  const uint8 Res5[3];
  /* MPX current control register */
  uint8 volatile ucADCXnMPXCURCR;
  /* Reserved area */
  const uint8 Res6[3];
  /* MPX current register */
  uint32 volatile ulADCXnMPXCURR;
  /* MPX optional wait register */
  uint8 volatile ucADCXnMPXOWR;
  /* Reserved area */
  const uint8 Res7[7];
  /* AD control register 2 */
  uint8 volatile ucADCXnADCR2;
  /* Reserved area */
  const uint8 Res8[7];
  /* A/D conversion monitor virtual channel pointer 0 */
  uint8 volatile ucADCXnADENDP0;
  /* Reserved area */
  const uint8 Res9[3];
  /* A/D conversion monitor virtual channel pointer 1 */
  uint8 volatile ucADCXnADENDP1;
  /* Reserved area */
  const uint8 Res10[3];
  /* A/D conversion monitor virtual channel pointer 2 */
  uint8 volatile ucADCXnADENDP2;
  /* Reserved area */
  const uint8 Res11[3];
  /* A/D conversion monitor virtual channel pointer 3 */
  uint8 volatile ucADCXnADENDP3;
  /* Reserved area */
  const uint8 Res12[3];
  /* A/D conversion monitor virtual channel pointer 4 */
  uint8 volatile ucADCXnADENDP4;
  /* Reserved area */
  const uint8 Res13[15];
  /* Safety control register */
  uint8 volatile ucADCXnSFTCR;
  /* Reserved area */
  const uint8 Res14[3];
  /* Pin level self-diagnostic control register */
  uint8 volatile ucADCXnTDCR;
  /* Reserved area */
  const uint8 Res15[3];
  /* Wiring-break detection control register */
  uint32 volatile ulADCXnODCR;
  /* Upper-limit/lower-limit table register 0 */
  uint32 volatile ulADCXnULLMTBR0;
  /* Upper-limit/lower-limit table register 1 */
  uint32 volatile ulADCXnULLMTBR1;
  /* Upper-limit/lower-limit table register 2 */
  uint32 volatile ulADCXnULLMTBR2;
  /* Error clear register */
  uint8 volatile ucADCXnECR;
  /* Reserved area */
  const uint8 Res16[3];
  /* Upper-limit/lower-limit error register */
  uint8 volatile ucADCXnULER;
  /* Reserved area */
  const uint8 Res17[3];
  /* Overwrite error register */
  uint8 volatile ucADCXnOWER;
  /* Reserved area */
  const uint8 Res18[3];
  /* Parity error register */
  uint8 volatile ucADCXnPER;
  /* Reserved area */
  const uint8 Res19[3];
  /* ID error register */
  uint8 volatile ucADCXnIDER;
  /* Reserved area */
  const uint8 Res20[23];
  /* T&H sampling start control register */
  uint8 volatile ucADCXnTHSMPSTCR;
  /* Reserved area */
  const uint8 Res21[3];
  /* T&H stop control register */
  uint8 volatile ucADCXnTHSTPCR;
  /* Reserved area */
  const uint8 Res22[3];
  /* T&H control register */
  uint8 volatile ucADCXnTHCR;
  /* Reserved area */
  const uint8 Res23[7];
  /* T&H group A hold start control register */
  uint8 volatile ucADCXnTHAHLDSTCR;
  /* Reserved area */
  const uint8 Res24[3];
  /* T&H group B hold start control register */
  uint8 volatile ucADCXnTHBHLDSTCR;
  /* Reserved area */
  const uint8 Res25[11];
  /* T&H group A control register */
  uint8 volatile ucADCXnTHACR;
  /* Reserved area */
  const uint8 Res26[3];
  /* T&H group B control register */
  uint8 volatile ucADCXnTHBCR;
  /* Reserved area */
  const uint8 Res27[11];
  /* T&H enable register */
  uint8 volatile ucADCXnTHER;
  /* Reserved area */
  const uint8 Res28[3];
  /* T&H group select register */
  uint16 volatile usADCXnTHGSR;
  /* Reserved area */
  const uint8 AdcdGp_Res[74];
  /* END Msg(2:3132)-2 */
  /* Hardware Scan Group registers */
  Adc_AdcxSgRegs volatile AdcxSgRegs[ADCX_NUMBER_OF_GROUPS];
}Adc_ConfigRegisters;

typedef struct STag_Adc_DmaAddrRegs
{
  /* Address for source address register */
  uint32 volatile ulDSAn;
  /* Address for lower destination address register */
  uint32 volatile ulDDAn;
  /* Transfer count register */
  uint32 volatile ulDTCn;
  /* Transfer control register */
  uint32 volatile ulDTCTn;
  /* DMAC reload source address */
  uint32 volatile ulDRSAn;
  /* DMAC reload destination address */
  uint32 volatile ulDRDAn;
  /* DMAC reload transfer count */
  uint32 volatile ulDRTCn;
  /* DMAC transfer count compare */
  uint32 volatile ulDTCCn;
  /* DMAC Channel Operation Enable Setting Register */
  uint32 volatile ulDCENn;
  /* Transfer status register */
  uint32 volatile ulDCSTn;
  /* Transfer status set register */
  uint32 volatile ulDCSTSn;
  /* Transfer status clear register */
  uint32 volatile ulDCSTCn;
  /* Trigger factor Register */
  uint32 volatile ulDTFRn;
  /* DTFR transfer request status */
  uint32 volatile ulDTFRRQn;
  /* DTFR transfer request clear */
  uint32 volatile ulDTFRRQCn;

}Adc_DmaAddrRegs;

typedef struct ST_FSGD3A
{                                                         /* FSGD3A           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID04           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID04;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID05           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID05;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT14           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID14           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID14;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT15           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT15;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID15           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID15;                                             /*                  */

}T_FSGD3A;
typedef struct ST_FSGD3B
{                                                         /* FSGD3B           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID02           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID02;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT03;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID03           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID03;                                             /*                  */

    uint8  dummy995[16];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* PROT06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID06           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID06;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID07           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID07;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID08           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID08;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID09           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID09;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID10           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID10;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID11           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID11;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID12           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID12;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT13;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID13           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID13;                                             /*                  */

}T_FSGD3B;
typedef struct ST_FSGDF0
{                                                         /* FSGDF0           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

}T_FSGDF0;
typedef struct ST_FSGDE0
{                                                         /* FSGDE0           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } SPID01;                                             /*                  */

}T_FSGDE0;
typedef struct STag_PortRegisters
{
 uint16 usP;
 uint16 ucdummy1;
 uint32 ulPSR;
 uint16 usPNOT;
 uint16 ucdummy2;
 uint16 usPPR;
 uint16 ucdummy3;
 uint16 usPM;
 uint16 ucdummy4;
 uint16 usPMC;
 uint16 ucdummy5;
 uint16 usPFC;
 uint16 ucdummy6;
 uint16 usPFCE;
 uint16 ucdummy7;
 uint32 ulPMSR;
 uint32 ulPMCSR;
 uint32 ucdummy30[2];
 uint16 usPINV;
 uint16 ucdummy8[8167];
 uint16 usPIBC;
 uint16 ucdummy9;
 uint16 usPBDC;
 uint16 ucdummy10;
 uint16 usPIPC;
 uint16 ucdummy11;
 uint16 usPU;
 uint16 ucdummy12;
 uint16 usPD;
 uint16 ucdummy13;
 uint32 ulPODC;
 uint32 ulPDSC;
 uint16 usPIS;
 uint32 ucdummy32;
 uint16 usPISA;
 uint16 ucdummy15;
 uint32 ulPUCC;
 uint32 ucdummy33[3];
 uint32 ulPODCE;
}Port_Registers;
typedef struct STag_JPortRegisters
{
 uint8  usP;
 uint8  ucdummy16[3];
 uint32 ulPSR;
 uint8  usPNOT;
 uint8  ucdummy17[3];
 uint8  usPPR;
 uint8  ucdummy18[3];
 uint8  usPM;
 uint8  ucdummy19[3];
 uint8  usPMC;
 uint8  ucdummy20[3];
 uint8  usPFC;
 uint8  ucdummy21[3];
 uint8  usPFCE;
 uint8  ucdummy22[3];
 uint32 ulPMSR;
 uint32 ulPMCSR;
 uint32 ucdummy31[2];
 uint8  usPINV;
 uint8  ucdummy35;
 uint16 udummy34[8167];
 uint8  usPIBC;
 uint8  ucdummy24[3];
 uint8  usPBDC;
 uint8  ucdummy26[7];
 uint8  usPU;
 uint8  ucdummy27[3];
 uint8  usPD;
 uint8  ucdummy28[3];
 uint32 ulPODC;
 uint32 ulPDSC;
 uint8  usPIS;
 uint8  ucdummy29[7];
 uint8  usPISA;
 uint8  ucdummy30[3];
 uint32 ulPUCC;
 uint32 ucdummy36[3];
 uint32 ulPODCE;
}JPort_Registers;

typedef struct STag_Adc_PicAddrRegs
{
  /* A/D converter trigger select 0/1 */
  uint32 volatile ulPIC2CTRGPREMUXn[2];
  /* A/D converter trigger select 0/1 */
  const uint8  Res0[8];
  /* A/D converter trigger select control 0/1 */
  uint32 volatile ulPIC2CTRGMUXn[2];
  /* A/D converter trigger edge control 0/1 */
  uint32 volatile ulPIC2CEDGSELn[2];
  /* Path to TIM0 enable control register 0/1 */
  uint32 volatile ulPIC2CENP2TIMn[2];
  /* Hi-Z function for GTM output enable control register */
  uint32 volatile ulPIC2CENHIZDTM;
}Adc_PicRegisters;


typedef struct ST_TIMOS
{   /*Structure for TIM related registers*/
   volatile uint32 TIMmINPVAL;
   volatile uint32 TIMmINSRC;
   volatile uint32 TIMmRST;
}T_TIMOS;

typedef struct ST_TIMUS
{   /*Structure for TIM related registers*/
    volatile uint32   TIMmnGPR0;
    volatile uint32   TIMmnGPR1;
    volatile uint32   TIMmnCNT;
    volatile uint32   TIMmnECNT;
    volatile uint32   TIMmnCNTS;
    volatile uint32   TIMmnTDUC;
    volatile uint32   TIMmnTDUV;
    volatile uint32   TIMmnFLTRE;
    volatile uint32   TIMmnFLTFE;
    volatile uint32   TIMmnCTRL;
    volatile uint32   TIMmnECTRL;
    volatile uint32   TIMmnIRQNOTIFY;
    volatile uint32   TIMmnIRQEN;
    volatile uint32   TIMmnIRQFORCINT;
    volatile uint32   TIMmnIRQMODE;
    volatile uint32   TIMmnEIRQEN;
}T_TIMUS;


typedef struct ST_GTM0
{                                                         /* GTM0             */
    uint32  GTMREV;                                       /*  GTMREV          */
    uint32  GTMRST;                                       /*  GTMRST          */
    uint32  GTMCTRL;                                      /*  GTMCTRL         */
    uint32  GTMAEIADDRXPT;                                /*  GTMAEIADDRXPT   */
    uint32  GTMIRQNOTIFY;                                 /*  GTMIRQNOTIFY    */
    uint32  GTMIRQEN;                                     /*  GTMIRQEN        */
    uint32  GTMIRQFORCINT;                                /*  GTMIRQFORCINT   */
    uint32  GTMIRQMODE;                                   /*  GTMIRQMODE      */
    uint32  GTMEIRQEN;                                    /*  GTMEIRQEN       */
    uint32  GTMHWCONF;                                    /*  GTMHWCONF       */
    uint8   dummy625[8];                                  /*                  */
    uint32  GTMBRIDGEMODE;                                /*  GTMBRIDGEMODE   */
    uint32  GTMBRIDGEPTR1;                                /*  GTMBRIDGEPTR1   */
    uint32  GTMBRIDGEPTR2;                                /*  GTMBRIDGEPTR2   */
    uint8   dummy626[4];                                  /*                  */
    uint32  GTMTIM0AUXINSRC;                              /*  GTMTIM0AUXINSRC */
    uint32  GTMTIM1AUXINSRC;                              /*  GTMTIM1AUXINSRC */
    uint8   dummy627[20];                                 /*                  */
    uint32  GTMEXTCAPEN0;                                 /*  GTMEXTCAPEN0    */
    uint32  GTMEXTCAPEN1;                                 /*  GTMEXTCAPEN1    */
    uint32  GTMEXTCAPEN2;                                 /*  GTMEXTCAPEN2    */
    uint32  GTMEXTCAPEN3;                                 /*  GTMEXTCAPEN3    */
    uint32  GTMEXTCAPEN4;                                 /*  GTMEXTCAPEN4    */
    uint32  GTMEXTCAPEN5;                                 /*  GTMEXTCAPEN5    */
    uint32  GTMEXTCAPEN6;                                 /*  GTMEXTCAPEN6    */
    uint32  GTMEXTCAPEN7;                                 /*  GTMEXTCAPEN7    */
    uint8   dummy628[28];                                 /*                  */
    uint32  GTMATOM0OUT;                                  /*  GTMATOM0OUT     */
    uint32  GTMATOM2OUT;                                  /*  GTMATOM2OUT     */
    uint8   dummy629[96];                                 /*                  */
    uint32  TBUCHEN;                                      /*  TBUCHEN         */
    uint32  TBU0CTRL;                                     /*  TBU0CTRL        */
    uint32  TBU0BASE;                                     /*  TBU0BASE        */
    uint32  TBU1CTRL;                                     /*  TBU1CTRL        */
    uint32  TBU1BASE;                                     /*  TBU1BASE        */
    uint8   dummy630[108];                                /*                  */
    uint32  MONSTATUS;                                    /*  MONSTATUS       */
    uint8   dummy631[8];                                  /*                  */
    uint32  MONACTIVITYMCS0;                              /*  MONACTIVITYMCS0 */
    uint32  MONACTIVITYMCS1;                              /*  MONACTIVITYMCS1 */
    uint8   dummy632[108];                                /*                  */
    uint32  CMPEN;                                        /*  CMPEN           */
    uint32  CMPIRQNOTIFY;                                 /*  CMPIRQNOTIFY    */
    uint32  CMPIRQEN;                                     /*  CMPIRQEN        */
    uint32  CMPIRQFORCINT;                                /*  CMPIRQFORCINT   */
    uint32  CMPIRQMODE;                                   /*  CMPIRQMODE      */
    uint32  CMPEIRQEN;                                    /*  CMPEIRQEN       */
    uint8   dummy633[104];                                /*                  */
    uint32  ARUACCESS;                                    /*  ARUACCESS       */
    uint32  ARUDATAH;                                     /*  ARUDATAH        */
    uint32  ARUDATAL;                                     /*  ARUDATAL        */
    uint32  ARUDBGACCESS0;                                /*  ARUDBGACCESS0   */
    uint32  ARUDBGDATA0H;                                 /*  ARUDBGDATA0H    */
    uint32  ARUDBGDATA0L;                                 /*  ARUDBGDATA0L    */
    uint32  ARUDBGACCESS1;                                /*  ARUDBGACCESS1   */
    uint32  ARUDBGDATA1H;                                 /*  ARUDBGDATA1H    */
    uint32  ARUDBGDATA1L;                                 /*  ARUDBGDATA1L    */
    uint32  ARUIRQNOTIFY;                                 /*  ARUIRQNOTIFY    */
    uint32  ARUIRQEN;                                     /*  ARUIRQEN        */
    uint32  ARUIRQFORCINT;                                /*  ARUIRQFORCINT   */
    uint32  ARUIRQMODE;                                   /*  ARUIRQMODE      */
    uint32  ARUCADDREND;                                  /*  ARUCADDREND     */
    uint8   dummy634[72];                                 /*                  */
    uint32  CMUCLKEN;                                     /*  CMUCLKEN        */
    uint32  CMUGCLKNUM;                                   /*  CMUGCLKNUM      */
    uint32  CMUGCLKDEN;                                   /*  CMUGCLKDEN      */
    uint32  CMUCLK0CTRL;                                  /*  CMUCLK0CTRL     */
    uint32  CMUCLK1CTRL;                                  /*  CMUCLK1CTRL     */
    uint32  CMUCLK2CTRL;                                  /*  CMUCLK2CTRL     */
    uint32  CMUCLK3CTRL;                                  /*  CMUCLK3CTRL     */
    uint32  CMUCLK4CTRL;                                  /*  CMUCLK4CTRL     */
    uint32  CMUCLK5CTRL;                                  /*  CMUCLK5CTRL     */
    uint32  CMUCLK6CTRL;                                  /*  CMUCLK6CTRL     */
    uint32  CMUCLK7CTRL;                                  /*  CMUCLK7CTRL     */
    uint8   dummy635[28];                                 /*                  */
    uint32  CMUGLBCTRL;                                   /*  CMUGLBCTRL      */
    uint8   dummy636[692];                                /*                  */
    uint32  ICMIRQG0;                                     /*  ICMIRQG0        */
    uint8   dummy637[4];                                  /*                  */
    uint32  ICMIRQG2;                                     /*  ICMIRQG2        */
    uint8   dummy638[24];                                 /*                  */
    uint32  ICMIRQG9;                                     /*  ICMIRQG9        */
    uint8   dummy639[8];                                  /*                  */
    uint32  ICMIRQGMEI;                                   /*  ICMIRQGMEI      */
    uint8   dummy640[4];                                  /*                  */
    uint32  ICMIRQGCEI1;                                  /*  ICMIRQGCEI1     */
    uint8   dummy641[12];                                 /*                  */
    uint32  ICMIRQGMCS0CI;                                /*  ICMIRQGMCS0CI   */
    uint32  ICMIRQGMCS1CI;                                /*  ICMIRQGMCS1CI   */
    uint8   dummy642[20];                                 /*                  */
    uint32  ICMIRQGMCS0CEI;                               /*  ICMIRQGMCS0CEI  */
    uint32  ICMIRQGMCS1CEI;                               /*  ICMIRQGMCS1CEI  */
    uint8   dummy643[2260];                               /*                  */
    uint32  MCFGCTRL;                                     /*  MCFGCTRL        */
    uint8   dummy644[188];                                /*                  */
    uint32  TIM00GPR0;                                    /*  TIM00GPR0       */
    uint32  TIM00GPR1;                                    /*  TIM00GPR1       */
    uint32  TIM00CNT;                                     /*  TIM00CNT        */
    uint32  TIM00ECNT;                                    /*  TIM00ECNT       */
    uint32  TIM00CNTS;                                    /*  TIM00CNTS       */
    uint32  TIM00TDUC;                                    /*  TIM00TDUC       */
    uint32  TIM00TDUV;                                    /*  TIM00TDUV       */
    uint32  TIM00FLTRE;                                   /*  TIM00FLTRE      */
    uint32  TIM00FLTFE;                                   /*  TIM00FLTFE      */
    uint32  TIM00CTRL;                                    /*  TIM00CTRL       */
    uint32  TIM00ECTRL;                                   /*  TIM00ECTRL      */
    uint32  TIM00IRQNOTIFY;                               /*  TIM00IRQNOTIFY  */
    uint32  TIM00IRQEN;                                   /*  TIM00IRQEN      */
    uint32  TIM00IRQFORCINT;                              /*  TIM00IRQFORCINT */
    uint32  TIM00IRQMODE;                                 /*  TIM00IRQMODE    */
    uint32  TIM00EIRQEN;                                  /*  TIM00EIRQEN     */
    uint8   dummy645[52];                                 /*                  */
    uint32  TIM0INPVAL;                                   /*  TIM0INPVAL      */
    uint32  TIM0INSRC;                                    /*  TIM0INSRC       */
    uint32  TIM0RST;                                      /*  TIM0RST         */
    uint32  TIM01GPR0;                                    /*  TIM01GPR0       */
    uint32  TIM01GPR1;                                    /*  TIM01GPR1       */
    uint32  TIM01CNT;                                     /*  TIM01CNT        */
    uint32  TIM01ECNT;                                    /*  TIM01ECNT       */
    uint32  TIM01CNTS;                                    /*  TIM01CNTS       */
    uint32  TIM01TDUC;                                    /*  TIM01TDUC       */
    uint32  TIM01TDUV;                                    /*  TIM01TDUV       */
    uint32  TIM01FLTRE;                                   /*  TIM01FLTRE      */
    uint32  TIM01FLTFE;                                   /*  TIM01FLTFE      */
    uint32  TIM01CTRL;                                    /*  TIM01CTRL       */
    uint32  TIM01ECTRL;                                   /*  TIM01ECTRL      */
    uint32  TIM01IRQNOTIFY;                               /*  TIM01IRQNOTIFY  */
    uint32  TIM01IRQEN;                                   /*  TIM01IRQEN      */
    uint32  TIM01IRQFORCINT;                              /*  TIM01IRQFORCINT */
    uint32  TIM01IRQMODE;                                 /*  TIM01IRQMODE    */
    uint32  TIM01EIRQEN;                                  /*  TIM01EIRQEN     */
    uint8   dummy646[64];                                 /*                  */
    uint32  TIM02GPR0;                                    /*  TIM02GPR0       */
    uint32  TIM02GPR1;                                    /*  TIM02GPR1       */
    uint32  TIM02CNT;                                     /*  TIM02CNT        */
    uint32  TIM02ECNT;                                    /*  TIM02ECNT       */
    uint32  TIM02CNTS;                                    /*  TIM02CNTS       */
    uint32  TIM02TDUC;                                    /*  TIM02TDUC       */
    uint32  TIM02TDUV;                                    /*  TIM02TDUV       */
    uint32  TIM02FLTRE;                                   /*  TIM02FLTRE      */
    uint32  TIM02FLTFE;                                   /*  TIM02FLTFE      */
    uint32  TIM02CTRL;                                    /*  TIM02CTRL       */
    uint32  TIM02ECTRL;                                   /*  TIM02ECTRL      */
    uint32  TIM02IRQNOTIFY;                               /*  TIM02IRQNOTIFY  */
    uint32  TIM02IRQEN;                                   /*  TIM02IRQEN      */
    uint32  TIM02IRQFORCINT;                              /*  TIM02IRQFORCINT */
    uint32  TIM02IRQMODE;                                 /*  TIM02IRQMODE    */
    uint32  TIM02EIRQEN;                                  /*  TIM02EIRQEN     */
    uint8   dummy647[64];                                 /*                  */
    uint32  TIM03GPR0;                                    /*  TIM03GPR0       */
    uint32  TIM03GPR1;                                    /*  TIM03GPR1       */
    uint32  TIM03CNT;                                     /*  TIM03CNT        */
    uint32  TIM03ECNT;                                    /*  TIM03ECNT       */
    uint32  TIM03CNTS;                                    /*  TIM03CNTS       */
    uint32  TIM03TDUC;                                    /*  TIM03TDUC       */
    uint32  TIM03TDUV;                                    /*  TIM03TDUV       */
    uint32  TIM03FLTRE;                                   /*  TIM03FLTRE      */
    uint32  TIM03FLTFE;                                   /*  TIM03FLTFE      */
    uint32  TIM03CTRL;                                    /*  TIM03CTRL       */
    uint32  TIM03ECTRL;                                   /*  TIM03ECTRL      */
    uint32  TIM03IRQNOTIFY;                               /*  TIM03IRQNOTIFY  */
    uint32  TIM03IRQEN;                                   /*  TIM03IRQEN      */
    uint32  TIM03IRQFORCINT;                              /*  TIM03IRQFORCINT */
    uint32  TIM03IRQMODE;                                 /*  TIM03IRQMODE    */
    uint32  TIM03EIRQEN;                                  /*  TIM03EIRQEN     */
    uint8   dummy648[64];                                 /*                  */
    uint32  TIM04GPR0;                                    /*  TIM04GPR0       */
    uint32  TIM04GPR1;                                    /*  TIM04GPR1       */
    uint32  TIM04CNT;                                     /*  TIM04CNT        */
    uint32  TIM04ECNT;                                    /*  TIM04ECNT       */
    uint32  TIM04CNTS;                                    /*  TIM04CNTS       */
    uint32  TIM04TDUC;                                    /*  TIM04TDUC       */
    uint32  TIM04TDUV;                                    /*  TIM04TDUV       */
    uint32  TIM04FLTRE;                                   /*  TIM04FLTRE      */
    uint32  TIM04FLTFE;                                   /*  TIM04FLTFE      */
    uint32  TIM04CTRL;                                    /*  TIM04CTRL       */
    uint32  TIM04ECTRL;                                   /*  TIM04ECTRL      */
    uint32  TIM04IRQNOTIFY;                               /*  TIM04IRQNOTIFY  */
    uint32  TIM04IRQEN;                                   /*  TIM04IRQEN      */
    uint32  TIM04IRQFORCINT;                              /*  TIM04IRQFORCINT */
    uint32  TIM04IRQMODE;                                 /*  TIM04IRQMODE    */
    uint32  TIM04EIRQEN;                                  /*  TIM04EIRQEN     */
    uint8   dummy649[64];                                 /*                  */
    uint32  TIM05GPR0;                                    /*  TIM05GPR0       */
    uint32  TIM05GPR1;                                    /*  TIM05GPR1       */
    uint32  TIM05CNT;                                     /*  TIM05CNT        */
    uint32  TIM05ECNT;                                    /*  TIM05ECNT       */
    uint32  TIM05CNTS;                                    /*  TIM05CNTS       */
    uint32  TIM05TDUC;                                    /*  TIM05TDUC       */
    uint32  TIM05TDUV;                                    /*  TIM05TDUV       */
    uint32  TIM05FLTRE;                                   /*  TIM05FLTRE      */
    uint32  TIM05FLTFE;                                   /*  TIM05FLTFE      */
    uint32  TIM05CTRL;                                    /*  TIM05CTRL       */
    uint32  TIM05ECTRL;                                   /*  TIM05ECTRL      */
    uint32  TIM05IRQNOTIFY;                               /*  TIM05IRQNOTIFY  */
    uint32  TIM05IRQEN;                                   /*  TIM05IRQEN      */
    uint32  TIM05IRQFORCINT;                              /*  TIM05IRQFORCINT */
    uint32  TIM05IRQMODE;                                 /*  TIM05IRQMODE    */
    uint32  TIM05EIRQEN;                                  /*  TIM05EIRQEN     */
    uint8   dummy650[64];                                 /*                  */
    uint32  TIM06GPR0;                                    /*  TIM06GPR0       */
    uint32  TIM06GPR1;                                    /*  TIM06GPR1       */
    uint32  TIM06CNT;                                     /*  TIM06CNT        */
    uint32  TIM06ECNT;                                    /*  TIM06ECNT       */
    uint32  TIM06CNTS;                                    /*  TIM06CNTS       */
    uint32  TIM06TDUC;                                    /*  TIM06TDUC       */
    uint32  TIM06TDUV;                                    /*  TIM06TDUV       */
    uint32  TIM06FLTRE;                                   /*  TIM06FLTRE      */
    uint32  TIM06FLTFE;                                   /*  TIM06FLTFE      */
    uint32  TIM06CTRL;                                    /*  TIM06CTRL       */
    uint32  TIM06ECTRL;                                   /*  TIM06ECTRL      */
    uint32  TIM06IRQNOTIFY;                               /*  TIM06IRQNOTIFY  */
    uint32  TIM06IRQEN;                                   /*  TIM06IRQEN      */
    uint32  TIM06IRQFORCINT;                              /*  TIM06IRQFORCINT */
    uint32  TIM06IRQMODE;                                 /*  TIM06IRQMODE    */
    uint32  TIM06EIRQEN;                                  /*  TIM06EIRQEN     */
    uint8   dummy651[64];                                 /*                  */
    uint32  TIM07GPR0;                                    /*  TIM07GPR0       */
    uint32  TIM07GPR1;                                    /*  TIM07GPR1       */
    uint32  TIM07CNT;                                     /*  TIM07CNT        */
    uint32  TIM07ECNT;                                    /*  TIM07ECNT       */
    uint32  TIM07CNTS;                                    /*  TIM07CNTS       */
    uint32  TIM07TDUC;                                    /*  TIM07TDUC       */
    uint32  TIM07TDUV;                                    /*  TIM07TDUV       */
    uint32  TIM07FLTRE;                                   /*  TIM07FLTRE      */
    uint32  TIM07FLTFE;                                   /*  TIM07FLTFE      */
    uint32  TIM07CTRL;                                    /*  TIM07CTRL       */
    uint32  TIM07ECTRL;                                   /*  TIM07ECTRL      */
    uint32  TIM07IRQNOTIFY;                               /*  TIM07IRQNOTIFY  */
    uint32  TIM07IRQEN;                                   /*  TIM07IRQEN      */
    uint32  TIM07IRQFORCINT;                              /*  TIM07IRQFORCINT */
    uint32  TIM07IRQMODE;                                 /*  TIM07IRQMODE    */
    uint32  TIM07EIRQEN;                                  /*  TIM07EIRQEN     */
    uint8   dummy652[1088];                               /*                  */
    uint32  TIM10GPR0;                                    /*  TIM10GPR0       */
    uint32  TIM10GPR1;                                    /*  TIM10GPR1       */
    uint32  TIM10CNT;                                     /*  TIM10CNT        */
    uint32  TIM10ECNT;                                    /*  TIM10ECNT       */
    uint32  TIM10CNTS;                                    /*  TIM10CNTS       */
    uint32  TIM10TDUC;                                    /*  TIM10TDUC       */
    uint32  TIM10TDUV;                                    /*  TIM10TDUV       */
    uint32  TIM10FLTRE;                                   /*  TIM10FLTRE      */
    uint32  TIM10FLTFE;                                   /*  TIM10FLTFE      */
    uint32  TIM10CTRL;                                    /*  TIM10CTRL       */
    uint32  TIM10ECTRL;                                   /*  TIM10ECTRL      */
    uint32  TIM10IRQNOTIFY;                               /*  TIM10IRQNOTIFY  */
    uint32  TIM10IRQEN;                                   /*  TIM10IRQEN      */
    uint32  TIM10IRQFORCINT;                              /*  TIM10IRQFORCINT */
    uint32  TIM10IRQMODE;                                 /*  TIM10IRQMODE    */
    uint32  TIM10EIRQEN;                                  /*  TIM10EIRQEN     */
    uint8   dummy653[52];                                 /*                  */
    uint32  TIM1INPVAL;                                   /*  TIM1INPVAL      */
    uint32  TIM1INSRC;                                    /*  TIM1INSRC       */
    uint32  TIM1RST;                                      /*  TIM1RST         */
    uint32  TIM11GPR0;                                    /*  TIM11GPR0       */
    uint32  TIM11GPR1;                                    /*  TIM11GPR1       */
    uint32  TIM11CNT;                                     /*  TIM11CNT        */
    uint32  TIM11ECNT;                                    /*  TIM11ECNT       */
    uint32  TIM11CNTS;                                    /*  TIM11CNTS       */
    uint32  TIM11TDUC;                                    /*  TIM11TDUC       */
    uint32  TIM11TDUV;                                    /*  TIM11TDUV       */
    uint32  TIM11FLTRE;                                   /*  TIM11FLTRE      */
    uint32  TIM11FLTFE;                                   /*  TIM11FLTFE      */
    uint32  TIM11CTRL;                                    /*  TIM11CTRL       */
    uint32  TIM11ECTRL;                                   /*  TIM11ECTRL      */
    uint32  TIM11IRQNOTIFY;                               /*  TIM11IRQNOTIFY  */
    uint32  TIM11IRQEN;                                   /*  TIM11IRQEN      */
    uint32  TIM11IRQFORCINT;                              /*  TIM11IRQFORCINT */
    uint32  TIM11IRQMODE;                                 /*  TIM11IRQMODE    */
    uint32  TIM11EIRQEN;                                  /*  TIM11EIRQEN     */
    uint8   dummy654[64];                                 /*                  */
    uint32  TIM12GPR0;                                    /*  TIM12GPR0       */
    uint32  TIM12GPR1;                                    /*  TIM12GPR1       */
    uint32  TIM12CNT;                                     /*  TIM12CNT        */
    uint32  TIM12ECNT;                                    /*  TIM12ECNT       */
    uint32  TIM12CNTS;                                    /*  TIM12CNTS       */
    uint32  TIM12TDUC;                                    /*  TIM12TDUC       */
    uint32  TIM12TDUV;                                    /*  TIM12TDUV       */
    uint32  TIM12FLTRE;                                   /*  TIM12FLTRE      */
    uint32  TIM12FLTFE;                                   /*  TIM12FLTFE      */
    uint32  TIM12CTRL;                                    /*  TIM12CTRL       */
    uint32  TIM12ECTRL;                                   /*  TIM12ECTRL      */
    uint32  TIM12IRQNOTIFY;                               /*  TIM12IRQNOTIFY  */
    uint32  TIM12IRQEN;                                   /*  TIM12IRQEN      */
    uint32  TIM12IRQFORCINT;                              /*  TIM12IRQFORCINT */
    uint32  TIM12IRQMODE;                                 /*  TIM12IRQMODE    */
    uint32  TIM12EIRQEN;                                  /*  TIM12EIRQEN     */
    uint8   dummy655[64];                                 /*                  */
    uint32  TIM13GPR0;                                    /*  TIM13GPR0       */
    uint32  TIM13GPR1;                                    /*  TIM13GPR1       */
    uint32  TIM13CNT;                                     /*  TIM13CNT        */
    uint32  TIM13ECNT;                                    /*  TIM13ECNT       */
    uint32  TIM13CNTS;                                    /*  TIM13CNTS       */
    uint32  TIM13TDUC;                                    /*  TIM13TDUC       */
    uint32  TIM13TDUV;                                    /*  TIM13TDUV       */
    uint32  TIM13FLTRE;                                   /*  TIM13FLTRE      */
    uint32  TIM13FLTFE;                                   /*  TIM13FLTFE      */
    uint32  TIM13CTRL;                                    /*  TIM13CTRL       */
    uint32  TIM13ECTRL;                                   /*  TIM13ECTRL      */
    uint32  TIM13IRQNOTIFY;                               /*  TIM13IRQNOTIFY  */
    uint32  TIM13IRQEN;                                   /*  TIM13IRQEN      */
    uint32  TIM13IRQFORCINT;                              /*  TIM13IRQFORCINT */
    uint32  TIM13IRQMODE;                                 /*  TIM13IRQMODE    */
    uint32  TIM13EIRQEN;                                  /*  TIM13EIRQEN     */
    uint8   dummy656[64];                                 /*                  */
    uint32  TIM14GPR0;                                    /*  TIM14GPR0       */
    uint32  TIM14GPR1;                                    /*  TIM14GPR1       */
    uint32  TIM14CNT;                                     /*  TIM14CNT        */
    uint32  TIM14ECNT;                                    /*  TIM14ECNT       */
    uint32  TIM14CNTS;                                    /*  TIM14CNTS       */
    uint32  TIM14TDUC;                                    /*  TIM14TDUC       */
    uint32  TIM14TDUV;                                    /*  TIM14TDUV       */
    uint32  TIM14FLTRE;                                   /*  TIM14FLTRE      */
    uint32  TIM14FLTFE;                                   /*  TIM14FLTFE      */
    uint32  TIM14CTRL;                                    /*  TIM14CTRL       */
    uint32  TIM14ECTRL;                                   /*  TIM14ECTRL      */
    uint32  TIM14IRQNOTIFY;                               /*  TIM14IRQNOTIFY  */
    uint32  TIM14IRQEN;                                   /*  TIM14IRQEN      */
    uint32  TIM14IRQFORCINT;                              /*  TIM14IRQFORCINT */
    uint32  TIM14IRQMODE;                                 /*  TIM14IRQMODE    */
    uint32  TIM14EIRQEN;                                  /*  TIM14EIRQEN     */
    uint8   dummy657[64];                                 /*                  */
    uint32  TIM15GPR0;                                    /*  TIM15GPR0       */
    uint32  TIM15GPR1;                                    /*  TIM15GPR1       */
    uint32  TIM15CNT;                                     /*  TIM15CNT        */
    uint32  TIM15ECNT;                                    /*  TIM15ECNT       */
    uint32  TIM15CNTS;                                    /*  TIM15CNTS       */
    uint32  TIM15TDUC;                                    /*  TIM15TDUC       */
    uint32  TIM15TDUV;                                    /*  TIM15TDUV       */
    uint32  TIM15FLTRE;                                   /*  TIM15FLTRE      */
    uint32  TIM15FLTFE;                                   /*  TIM15FLTFE      */
    uint32  TIM15CTRL;                                    /*  TIM15CTRL       */
    uint32  TIM15ECTRL;                                   /*  TIM15ECTRL      */
    uint32  TIM15IRQNOTIFY;                               /*  TIM15IRQNOTIFY  */
    uint32  TIM15IRQEN;                                   /*  TIM15IRQEN      */
    uint32  TIM15IRQFORCINT;                              /*  TIM15IRQFORCINT */
    uint32  TIM15IRQMODE;                                 /*  TIM15IRQMODE    */
    uint32  TIM15EIRQEN;                                  /*  TIM15EIRQEN     */
    uint8   dummy658[64];                                 /*                  */
    uint32  TIM16GPR0;                                    /*  TIM16GPR0       */
    uint32  TIM16GPR1;                                    /*  TIM16GPR1       */
    uint32  TIM16CNT;                                     /*  TIM16CNT        */
    uint32  TIM16ECNT;                                    /*  TIM16ECNT       */
    uint32  TIM16CNTS;                                    /*  TIM16CNTS       */
    uint32  TIM16TDUC;                                    /*  TIM16TDUC       */
    uint32  TIM16TDUV;                                    /*  TIM16TDUV       */
    uint32  TIM16FLTRE;                                   /*  TIM16FLTRE      */
    uint32  TIM16FLTFE;                                   /*  TIM16FLTFE      */
    uint32  TIM16CTRL;                                    /*  TIM16CTRL       */
    uint32  TIM16ECTRL;                                   /*  TIM16ECTRL      */
    uint32  TIM16IRQNOTIFY;                               /*  TIM16IRQNOTIFY  */
    uint32  TIM16IRQEN;                                   /*  TIM16IRQEN      */
    uint32  TIM16IRQFORCINT;                              /*  TIM16IRQFORCINT */
    uint32  TIM16IRQMODE;                                 /*  TIM16IRQMODE    */
    uint32  TIM16EIRQEN;                                  /*  TIM16EIRQEN     */
    uint8   dummy659[64];                                 /*                  */
    uint32  TIM17GPR0;                                    /*  TIM17GPR0       */
    uint32  TIM17GPR1;                                    /*  TIM17GPR1       */
    uint32  TIM17CNT;                                     /*  TIM17CNT        */
    uint32  TIM17ECNT;                                    /*  TIM17ECNT       */
    uint32  TIM17CNTS;                                    /*  TIM17CNTS       */
    uint32  TIM17TDUC;                                    /*  TIM17TDUC       */
    uint32  TIM17TDUV;                                    /*  TIM17TDUV       */
    uint32  TIM17FLTRE;                                   /*  TIM17FLTRE      */
    uint32  TIM17FLTFE;                                   /*  TIM17FLTFE      */
    uint32  TIM17CTRL;                                    /*  TIM17CTRL       */
    uint32  TIM17ECTRL;                                   /*  TIM17ECTRL      */
    uint32  TIM17IRQNOTIFY;                               /*  TIM17IRQNOTIFY  */
    uint32  TIM17IRQEN;                                   /*  TIM17IRQEN      */
    uint32  TIM17IRQFORCINT;                              /*  TIM17IRQFORCINT */
    uint32  TIM17IRQMODE;                                 /*  TIM17IRQMODE    */
    uint32  TIM17EIRQEN;                                  /*  TIM17EIRQEN     */
    uint8   dummy660[46144];                              /*                  */
    uint32  ATOM00RDADDR;                                 /*  ATOM00RDADDR    */
    uint32  ATOM00CTRL;                                   /*  ATOM00CTRL      */
    uint32  ATOM00SR0;                                    /*  ATOM00SR0       */
    uint32  ATOM00SR1;                                    /*  ATOM00SR1       */
    uint32  ATOM00CM0;                                    /*  ATOM00CM0       */
    uint32  ATOM00CM1;                                    /*  ATOM00CM1       */
    uint32  ATOM00CN0;                                    /*  ATOM00CN0       */
    uint32  ATOM00STAT;                                   /*  ATOM00STAT      */
    uint32  ATOM00IRQNOTIFY;                              /*  ATOM00IRQNOTIFY */
    uint32  ATOM00IRQEN;                                  /*  ATOM00IRQEN     */
    uint32  ATOM00IRQFORCINT;                             /*  ATOM00IRQFORCINT*/
    uint32  ATOM00IRQMODE;                                /*  ATOM00IRQMODE   */
    uint8   dummy661[16];                                 /*                  */
    uint32  ATOM0AGCGLBCTRL;                              /*  ATOM0AGCGLBCTRL */
    uint32  ATOM0AGCENDISCTRL;                            /* ATOM0AGCENDISCTRL*/
    uint32  ATOM0AGCENDISSTAT;                            /* ATOM0AGCENDISSTAT*/
    uint32  ATOM0AGCACTTB;                                /*  ATOM0AGCACTTB   */
    uint32  ATOM0AGCOUTENCTRL;                            /* ATOM0AGCOUTENCTRL*/
    uint32  ATOM0AGCOUTENSTAT;                            /* ATOM0AGCOUTENSTAT*/
    uint32  ATOM0AGCFUPDCTRL;                             /*  ATOM0AGCFUPDCTRL*/
    uint32  ATOM0AGCINTTRIG;                              /*  ATOM0AGCINTTRIG */
    uint8   dummy662[32];                                 /*                  */
    uint32  ATOM01RDADDR;                                 /*  ATOM01RDADDR    */
    uint32  ATOM01CTRL;                                   /*  ATOM01CTRL      */
    uint32  ATOM01SR0;                                    /*  ATOM01SR0       */
    uint32  ATOM01SR1;                                    /*  ATOM01SR1       */
    uint32  ATOM01CM0;                                    /*  ATOM01CM0       */
    uint32  ATOM01CM1;                                    /*  ATOM01CM1       */
    uint32  ATOM01CN0;                                    /*  ATOM01CN0       */
    uint32  ATOM01STAT;                                   /*  ATOM01STAT      */
    uint32  ATOM01IRQNOTIFY;                              /*  ATOM01IRQNOTIFY */
    uint32  ATOM01IRQEN;                                  /*  ATOM01IRQEN     */
    uint32  ATOM01IRQFORCINT;                             /*  ATOM01IRQFORCINT*/
    uint32  ATOM01IRQMODE;                                /*  ATOM01IRQMODE   */
    uint8   dummy663[80];                                 /*                  */
    uint32  ATOM02RDADDR;                                 /*  ATOM02RDADDR    */
    uint32  ATOM02CTRL;                                   /*  ATOM02CTRL      */
    uint32  ATOM02SR0;                                    /*  ATOM02SR0       */
    uint32  ATOM02SR1;                                    /*  ATOM02SR1       */
    uint32  ATOM02CM0;                                    /*  ATOM02CM0       */
    uint32  ATOM02CM1;                                    /*  ATOM02CM1       */
    uint32  ATOM02CN0;                                    /*  ATOM02CN0       */
    uint32  ATOM02STAT;                                   /*  ATOM02STAT      */
    uint32  ATOM02IRQNOTIFY;                              /*  ATOM02IRQNOTIFY */
    uint32  ATOM02IRQEN;                                  /*  ATOM02IRQEN     */
    uint32  ATOM02IRQFORCINT;                             /*  ATOM02IRQFORCINT*/
    uint32  ATOM02IRQMODE;                                /*  ATOM02IRQMODE   */
    uint8   dummy664[80];                                 /*                  */
    uint32  ATOM03RDADDR;                                 /*  ATOM03RDADDR    */
    uint32  ATOM03CTRL;                                   /*  ATOM03CTRL      */
    uint32  ATOM03SR0;                                    /*  ATOM03SR0       */
    uint32  ATOM03SR1;                                    /*  ATOM03SR1       */
    uint32  ATOM03CM0;                                    /*  ATOM03CM0       */
    uint32  ATOM03CM1;                                    /*  ATOM03CM1       */
    uint32  ATOM03CN0;                                    /*  ATOM03CN0       */
    uint32  ATOM03STAT;                                   /*  ATOM03STAT      */
    uint32  ATOM03IRQNOTIFY;                              /*  ATOM03IRQNOTIFY */
    uint32  ATOM03IRQEN;                                  /*  ATOM03IRQEN     */
    uint32  ATOM03IRQFORCINT;                             /*  ATOM03IRQFORCINT*/
    uint32  ATOM03IRQMODE;                                /*  ATOM03IRQMODE   */
    uint8   dummy665[80];                                 /*                  */
    uint32  ATOM04RDADDR;                                 /*  ATOM04RDADDR    */
    uint32  ATOM04CTRL;                                   /*  ATOM04CTRL      */
    uint32  ATOM04SR0;                                    /*  ATOM04SR0       */
    uint32  ATOM04SR1;                                    /*  ATOM04SR1       */
    uint32  ATOM04CM0;                                    /*  ATOM04CM0       */
    uint32  ATOM04CM1;                                    /*  ATOM04CM1       */
    uint32  ATOM04CN0;                                    /*  ATOM04CN0       */
    uint32  ATOM04STAT;                                   /*  ATOM04STAT      */
    uint32  ATOM04IRQNOTIFY;                              /*  ATOM04IRQNOTIFY */
    uint32  ATOM04IRQEN;                                  /*  ATOM04IRQEN     */
    uint32  ATOM04IRQFORCINT;                             /*  ATOM04IRQFORCINT*/
    uint32  ATOM04IRQMODE;                                /*  ATOM04IRQMODE   */
    uint8   dummy666[80];                                 /*                  */
    uint32  ATOM05RDADDR;                                 /*  ATOM05RDADDR    */
    uint32  ATOM05CTRL;                                   /*  ATOM05CTRL      */
    uint32  ATOM05SR0;                                    /*  ATOM05SR0       */
    uint32  ATOM05SR1;                                    /*  ATOM05SR1       */
    uint32  ATOM05CM0;                                    /*  ATOM05CM0       */
    uint32  ATOM05CM1;                                    /*  ATOM05CM1       */
    uint32  ATOM05CN0;                                    /*  ATOM05CN0       */
    uint32  ATOM05STAT;                                   /*  ATOM05STAT      */
    uint32  ATOM05IRQNOTIFY;                              /*  ATOM05IRQNOTIFY */
    uint32  ATOM05IRQEN;                                  /*  ATOM05IRQEN     */
    uint32  ATOM05IRQFORCINT;                             /*  ATOM05IRQFORCINT*/
    uint32  ATOM05IRQMODE;                                /*  ATOM05IRQMODE   */
    uint8   dummy667[80];                                 /*                  */
    uint32  ATOM06RDADDR;                                 /*  ATOM06RDADDR    */
    uint32  ATOM06CTRL;                                   /*  ATOM06CTRL      */
    uint32  ATOM06SR0;                                    /*  ATOM06SR0       */
    uint32  ATOM06SR1;                                    /*  ATOM06SR1       */
    uint32  ATOM06CM0;                                    /*  ATOM06CM0       */
    uint32  ATOM06CM1;                                    /*  ATOM06CM1       */
    uint32  ATOM06CN0;                                    /*  ATOM06CN0       */
    uint32  ATOM06STAT;                                   /*  ATOM06STAT      */
    uint32  ATOM06IRQNOTIFY;                              /*  ATOM06IRQNOTIFY */
    uint32  ATOM06IRQEN;                                  /*  ATOM06IRQEN     */
    uint32  ATOM06IRQFORCINT;                             /*  ATOM06IRQFORCINT*/
    uint32  ATOM06IRQMODE;                                /*  ATOM06IRQMODE   */
    uint8   dummy668[80];                                 /*                  */
    uint32  ATOM07RDADDR;                                 /*  ATOM07RDADDR    */
    uint32  ATOM07CTRL;                                   /*  ATOM07CTRL      */
    uint32  ATOM07SR0;                                    /*  ATOM07SR0       */
    uint32  ATOM07SR1;                                    /*  ATOM07SR1       */
    uint32  ATOM07CM0;                                    /*  ATOM07CM0       */
    uint32  ATOM07CM1;                                    /*  ATOM07CM1       */
    uint32  ATOM07CN0;                                    /*  ATOM07CN0       */
    uint32  ATOM07STAT;                                   /*  ATOM07STAT      */
    uint32  ATOM07IRQNOTIFY;                              /*  ATOM07IRQNOTIFY */
    uint32  ATOM07IRQEN;                                  /*  ATOM07IRQEN     */
    uint32  ATOM07IRQFORCINT;                             /*  ATOM07IRQFORCINT*/
    uint32  ATOM07IRQMODE;                                /*  ATOM07IRQMODE   */
    uint8   dummy669[1104];                               /*                  */
    uint32  ATOM10RDADDR;                                 /*  ATOM10RDADDR    */
    uint32  ATOM10CTRL;                                   /*  ATOM10CTRL      */
    uint32  ATOM10SR0;                                    /*  ATOM10SR0       */
    uint32  ATOM10SR1;                                    /*  ATOM10SR1       */
    uint32  ATOM10CM0;                                    /*  ATOM10CM0       */
    uint32  ATOM10CM1;                                    /*  ATOM10CM1       */
    uint32  ATOM10CN0;                                    /*  ATOM10CN0       */
    uint32  ATOM10STAT;                                   /*  ATOM10STAT      */
    uint32  ATOM10IRQNOTIFY;                              /*  ATOM10IRQNOTIFY */
    uint32  ATOM10IRQEN;                                  /*  ATOM10IRQEN     */
    uint32  ATOM10IRQFORCINT;                             /*  ATOM10IRQFORCINT*/
    uint32  ATOM10IRQMODE;                                /*  ATOM10IRQMODE   */
    uint8   dummy670[16];                                 /*                  */
    uint32  ATOM1AGCGLBCTRL;                              /*  ATOM1AGCGLBCTRL */
    uint32  ATOM1AGCENDISCTRL;                            /* ATOM1AGCENDISCTRL*/
    uint32  ATOM1AGCENDISSTAT;                           /*  ATOM1AGCENDISSTAT*/
    uint32  ATOM1AGCACTTB;                                /*  ATOM1AGCACTTB   */
    uint32  ATOM1AGCOUTENCTRL;                            /*  ATOM1AGCOUTENCTR*/
    uint32  ATOM1AGCOUTENSTAT;                            /*  ATOM1AGCOUTENSTA*/
    uint32  ATOM1AGCFUPDCTRL;                             /*  ATOM1AGCFUPDCTRL*/
    uint32  ATOM1AGCINTTRIG;                              /*  ATOM1AGCINTTRIG */
    uint8   dummy671[32];                                 /*                  */
    uint32  ATOM11RDADDR;                                 /*  ATOM11RDADDR    */
    uint32  ATOM11CTRL;                                   /*  ATOM11CTRL      */
    uint32  ATOM11SR0;                                    /*  ATOM11SR0       */
    uint32  ATOM11SR1;                                    /*  ATOM11SR1       */
    uint32  ATOM11CM0;                                    /*  ATOM11CM0       */
    uint32  ATOM11CM1;                                    /*  ATOM11CM1       */
    uint32  ATOM11CN0;                                    /*  ATOM11CN0       */
    uint32  ATOM11STAT;                                   /*  ATOM11STAT      */
    uint32  ATOM11IRQNOTIFY;                              /*  ATOM11IRQNOTIFY */
    uint32  ATOM11IRQEN;                                  /*  ATOM11IRQEN     */
    uint32  ATOM11IRQFORCINT;                             /*  ATOM11IRQFORCINT*/
    uint32  ATOM11IRQMODE;                                /*  ATOM11IRQMODE   */
    uint8   dummy672[80];                                 /*                  */
    uint32  ATOM12RDADDR;                                 /*  ATOM12RDADDR    */
    uint32  ATOM12CTRL;                                   /*  ATOM12CTRL      */
    uint32  ATOM12SR0;                                    /*  ATOM12SR0       */
    uint32  ATOM12SR1;                                    /*  ATOM12SR1       */
    uint32  ATOM12CM0;                                    /*  ATOM12CM0       */
    uint32  ATOM12CM1;                                    /*  ATOM12CM1       */
    uint32  ATOM12CN0;                                    /*  ATOM12CN0       */
    uint32  ATOM12STAT;                                   /*  ATOM12STAT      */
    uint32  ATOM12IRQNOTIFY;                              /*  ATOM12IRQNOTIFY */
    uint32  ATOM12IRQEN;                                  /*  ATOM12IRQEN     */
    uint32  ATOM12IRQFORCINT;                             /*  ATOM12IRQFORCINT*/
    uint32  ATOM12IRQMODE;                                /*  ATOM12IRQMODE   */
    uint8   dummy673[80];                                 /*                  */
    uint32  ATOM13RDADDR;                                 /*  ATOM13RDADDR    */
    uint32  ATOM13CTRL;                                   /*  ATOM13CTRL      */
    uint32  ATOM13SR0;                                    /*  ATOM13SR0       */
    uint32  ATOM13SR1;                                    /*  ATOM13SR1       */
    uint32  ATOM13CM0;                                    /*  ATOM13CM0       */
    uint32  ATOM13CM1;                                    /*  ATOM13CM1       */
    uint32  ATOM13CN0;                                    /*  ATOM13CN0       */
    uint32  ATOM13STAT;                                   /*  ATOM13STAT      */
    uint32  ATOM13IRQNOTIFY;                              /*  ATOM13IRQNOTIFY */
    uint32  ATOM13IRQEN;                                  /*  ATOM13IRQEN     */
    uint32  ATOM13IRQFORCINT;                             /*  ATOM13IRQFORCINT*/
    uint32  ATOM13IRQMODE;                                /*  ATOM13IRQMODE   */
    uint8   dummy674[80];                                 /*                  */
    uint32  ATOM14RDADDR;                                 /*  ATOM14RDADDR    */
    uint32  ATOM14CTRL;                                   /*  ATOM14CTRL      */
    uint32  ATOM14SR0;                                    /*  ATOM14SR0       */
    uint32  ATOM14SR1;                                    /*  ATOM14SR1       */
    uint32  ATOM14CM0;                                    /*  ATOM14CM0       */
    uint32  ATOM14CM1;                                    /*  ATOM14CM1       */
    uint32  ATOM14CN0;                                    /*  ATOM14CN0       */
    uint32  ATOM14STAT;                                   /*  ATOM14STAT      */
    uint32  ATOM14IRQNOTIFY;                              /*  ATOM14IRQNOTIFY */
    uint32  ATOM14IRQEN;                                  /*  ATOM14IRQEN     */
    uint32  ATOM14IRQFORCINT;                             /*  ATOM14IRQFORCINT*/
    uint32  ATOM14IRQMODE;                                /*  ATOM14IRQMODE   */
    uint8   dummy675[80];                                 /*                  */
    uint32  ATOM15RDADDR;                                 /*  ATOM15RDADDR    */
    uint32  ATOM15CTRL;                                   /*  ATOM15CTRL      */
    uint32  ATOM15SR0;                                    /*  ATOM15SR0       */
    uint32  ATOM15SR1;                                    /*  ATOM15SR1       */
    uint32  ATOM15CM0;                                    /*  ATOM15CM0       */
    uint32  ATOM15CM1;                                    /*  ATOM15CM1       */
    uint32  ATOM15CN0;                                    /*  ATOM15CN0       */
    uint32  ATOM15STAT;                                   /*  ATOM15STAT      */
    uint32  ATOM15IRQNOTIFY;                              /*  ATOM15IRQNOTIFY */
    uint32  ATOM15IRQEN;                                  /*  ATOM15IRQEN     */
    uint32  ATOM15IRQFORCINT;                             /*  ATOM15IRQFORCINT*/
    uint32  ATOM15IRQMODE;                                /*  ATOM15IRQMODE   */
    uint8   dummy676[80];                                 /*                  */
    uint32  ATOM16RDADDR;                                 /*  ATOM16RDADDR    */
    uint32  ATOM16CTRL;                                   /*  ATOM16CTRL      */
    uint32  ATOM16SR0;                                    /*  ATOM16SR0       */
    uint32  ATOM16SR1;                                    /*  ATOM16SR1       */
    uint32  ATOM16CM0;                                    /*  ATOM16CM0       */
    uint32  ATOM16CM1;                                    /*  ATOM16CM1       */
    uint32  ATOM16CN0;                                    /*  ATOM16CN0       */
    uint32  ATOM16STAT;                                   /*  ATOM16STAT      */
    uint32  ATOM16IRQNOTIFY;                              /*  ATOM16IRQNOTIFY */
    uint32  ATOM16IRQEN;                                  /*  ATOM16IRQEN     */
    uint32  ATOM16IRQFORCINT;                             /*  ATOM16IRQFORCINT*/
    uint32  ATOM16IRQMODE;                                /*  ATOM16IRQMODE   */
    uint8   dummy677[80];                                 /*                  */
    uint32  ATOM17RDADDR;                                 /*  ATOM17RDADDR    */
    uint32  ATOM17CTRL;                                   /*  ATOM17CTRL      */
    uint32  ATOM17SR0;                                    /*  ATOM17SR0       */
    uint32  ATOM17SR1;                                    /*  ATOM17SR1       */
    uint32  ATOM17CM0;                                    /*  ATOM17CM0       */
    uint32  ATOM17CM1;                                    /*  ATOM17CM1       */
    uint32  ATOM17CN0;                                    /*  ATOM17CN0       */
    uint32  ATOM17STAT;                                   /*  ATOM17STAT      */
    uint32  ATOM17IRQNOTIFY;                              /*  ATOM17IRQNOTIFY */
    uint32  ATOM17IRQEN;                                  /*  ATOM17IRQEN     */
    uint32  ATOM17IRQFORCINT;                             /*  ATOM17IRQFORCINT*/
    uint32  ATOM17IRQMODE;                                /*  ATOM17IRQMODE   */
    uint8   dummy678[1104];                               /*                  */
    uint32  ATOM20RDADDR;                                 /*  ATOM20RDADDR    */
    uint32  ATOM20CTRL;                                   /*  ATOM20CTRL      */
    uint32  ATOM20SR0;                                    /*  ATOM20SR0       */
    uint32  ATOM20SR1;                                    /*  ATOM20SR1       */
    uint32  ATOM20CM0;                                    /*  ATOM20CM0       */
    uint32  ATOM20CM1;                                    /*  ATOM20CM1       */
    uint32  ATOM20CN0;                                    /*  ATOM20CN0       */
    uint32  ATOM20STAT;                                   /*  ATOM20STAT      */
    uint32  ATOM20IRQNOTIFY;                              /*  ATOM20IRQNOTIFY */
    uint32  ATOM20IRQEN;                                  /*  ATOM20IRQEN     */
    uint32  ATOM20IRQFORCINT;                             /*  ATOM20IRQFORCINT*/
    uint32  ATOM20IRQMODE;                                /*  ATOM20IRQMODE   */
    uint8   dummy679[16];                                 /*                  */
    uint32  ATOM2AGCGLBCTRL;                              /*  ATOM2AGCGLBCTRL */
    uint32  ATOM2AGCENDISCTRL;                            /* ATOM2AGCENDISCTRL*/
    uint32  ATOM2AGCENDISSTAT;                            /* ATOM2AGCENDISSTAT*/
    uint32  ATOM2AGCACTTB;                                /*  ATOM2AGCACTTB   */
    uint32  ATOM2AGCOUTENCTRL;                            /* ATOM2AGCOUTENCTRL*/
    uint32  ATOM2AGCOUTENSTAT;                            /* ATOM2AGCOUTENSTAT*/
    uint32  ATOM2AGCFUPDCTRL;                             /*  ATOM2AGCFUPDCTRL*/
    uint32  ATOM2AGCINTTRIG;                              /*  ATOM2AGCINTTRIG */
    uint8   dummy680[32];                                 /*                  */
    uint32  ATOM21RDADDR;                                 /*  ATOM21RDADDR    */
    uint32  ATOM21CTRL;                                   /*  ATOM21CTRL      */
    uint32  ATOM21SR0;                                    /*  ATOM21SR0       */
    uint32  ATOM21SR1;                                    /*  ATOM21SR1       */
    uint32  ATOM21CM0;                                    /*  ATOM21CM0       */
    uint32  ATOM21CM1;                                    /*  ATOM21CM1       */
    uint32  ATOM21CN0;                                    /*  ATOM21CN0       */
    uint32  ATOM21STAT;                                   /*  ATOM21STAT      */
    uint32  ATOM21IRQNOTIFY;                              /*  ATOM21IRQNOTIFY */
    uint32  ATOM21IRQEN;                                  /*  ATOM21IRQEN     */
    uint32  ATOM21IRQFORCINT;                             /*  ATOM21IRQFORCINT*/
    uint32  ATOM21IRQMODE;                                /*  ATOM21IRQMODE   */
    uint8   dummy681[80];                                 /*                  */
    uint32  ATOM22RDADDR;                                 /*  ATOM22RDADDR    */
    uint32  ATOM22CTRL;                                   /*  ATOM22CTRL      */
    uint32  ATOM22SR0;                                    /*  ATOM22SR0       */
    uint32  ATOM22SR1;                                    /*  ATOM22SR1       */
    uint32  ATOM22CM0;                                    /*  ATOM22CM0       */
    uint32  ATOM22CM1;                                    /*  ATOM22CM1       */
    uint32  ATOM22CN0;                                    /*  ATOM22CN0       */
    uint32  ATOM22STAT;                                   /*  ATOM22STAT      */
    uint32  ATOM22IRQNOTIFY;                              /*  ATOM22IRQNOTIFY */
    uint32  ATOM22IRQEN;                                  /*  ATOM22IRQEN     */
    uint32  ATOM22IRQFORCINT;                             /*  ATOM22IRQFORCINT*/
    uint32  ATOM22IRQMODE;                                /*  ATOM22IRQMODE   */
    uint8   dummy682[80];                                 /*                  */
    uint32  ATOM23RDADDR;                                 /*  ATOM23RDADDR    */
    uint32  ATOM23CTRL;                                   /*  ATOM23CTRL      */
    uint32  ATOM23SR0;                                    /*  ATOM23SR0       */
    uint32  ATOM23SR1;                                    /*  ATOM23SR1       */
    uint32  ATOM23CM0;                                    /*  ATOM23CM0       */
    uint32  ATOM23CM1;                                    /*  ATOM23CM1       */
    uint32  ATOM23CN0;                                    /*  ATOM23CN0       */
    uint32  ATOM23STAT;                                   /*  ATOM23STAT      */
    uint32  ATOM23IRQNOTIFY;                              /*  ATOM23IRQNOTIFY */
    uint32  ATOM23IRQEN;                                  /*  ATOM23IRQEN     */
    uint32  ATOM23IRQFORCINT;                             /*  ATOM23IRQFORCINT*/
    uint32  ATOM23IRQMODE;                                /*  ATOM23IRQMODE   */
    uint8   dummy683[80];                                 /*                  */
    uint32  ATOM24RDADDR;                                 /*  ATOM24RDADDR    */
    uint32  ATOM24CTRL;                                   /*  ATOM24CTRL      */
    uint32  ATOM24SR0;                                    /*  ATOM24SR0       */
    uint32  ATOM24SR1;                                    /*  ATOM24SR1       */
    uint32  ATOM24CM0;                                    /*  ATOM24CM0       */
    uint32  ATOM24CM1;                                    /*  ATOM24CM1       */
    uint32  ATOM24CN0;                                    /*  ATOM24CN0       */
    uint32  ATOM24STAT;                                   /*  ATOM24STAT      */
    uint32  ATOM24IRQNOTIFY;                              /*  ATOM24IRQNOTIFY */
    uint32  ATOM24IRQEN;                                  /*  ATOM24IRQEN     */
    uint32  ATOM24IRQFORCINT;                             /* ATOM24IRQFORCINT */
    uint32  ATOM24IRQMODE;                                /*  ATOM24IRQMODE   */
    uint8   dummy684[21456];                              /*                  */
    uint32  DTM24CTRL;                                    /*  DTM24CTRL       */
    uint32  DTM24CHCTRL1;                                 /*  DTM24CHCTRL1    */
    uint32  DTM24CHCTRL2;                                 /*  DTM24CHCTRL2    */
    uint32  DTM24CHCTRL2SR;                               /*  DTM24CHCTRL2SR  */
    uint32  DTM24PSCTRL;                                  /*  DTM24PSCTRL     */
    uint32  DTM240DTV;                                    /*  DTM240DTV       */
    uint32  DTM241DTV;                                    /*  DTM241DTV       */
    uint32  DTM242DTV;                                    /*  DTM242DTV       */
    uint32  DTM243DTV;                                    /*  DTM243DTV       */
    uint32  DTM24CHSR;                                    /*  DTM24CHSR       */
    uint8   dummy685[88];                                 /*                  */
    uint32  DTM26CTRL;                                    /*  DTM26CTRL       */
    uint32  DTM26CHCTRL1;                                 /*  DTM26CHCTRL1    */
    uint32  DTM26CHCTRL2;                                 /*  DTM26CHCTRL2    */
    uint32  DTM26CHCTRL2SR;                               /*  DTM26CHCTRL2SR  */
    uint32  DTM26PSCTRL;                                  /*  DTM26PSCTRL     */
    uint32  DTM260DTV;                                    /*  DTM260DTV       */
    uint32  DTM261DTV;                                    /*  DTM261DTV       */
    uint32  DTM262DTV;                                    /*  DTM262DTV       */
    uint32  DTM263DTV;                                    /*  DTM263DTV       */
    uint32  DTM26CHSR;                                    /*  DTM26CHSR       */
    uint8   dummy686[88];                                 /*                  */
    uint32  DTM28CTRL;                                    /*  DTM28CTRL       */
    uint32  DTM28CHCTRL1;                                 /*  DTM28CHCTRL1    */
    uint32  DTM28CHCTRL2;                                 /*  DTM28CHCTRL2    */
    uint32  DTM28CHCTRL2SR;                               /*  DTM28CHCTRL2SR  */
    uint32  DTM28PSCTRL;                                  /*  DTM28PSCTRL     */
    uint32  DTM280DTV;                                    /*  DTM280DTV       */
    uint32  DTM281DTV;                                    /*  DTM281DTV       */
    uint32  DTM282DTV;                                    /*  DTM282DTV       */
    uint32  DTM283DTV;                                    /*  DTM283DTV       */
    uint32  DTM28CHSR;                                    /*  DTM28CHSR       */
    uint8   dummy687[116952];                             /*                  */
    uint32  MCS00R0;                                      /*  MCS00R0         */
    uint32  MCS00R1;                                      /*  MCS00R1         */
    uint32  MCS00R2;                                      /*  MCS00R2         */
    uint32  MCS00R3;                                      /*  MCS00R3         */
    uint32  MCS00R4;                                      /*  MCS00R4         */
    uint32  MCS00R5;                                      /*  MCS00R5         */
    uint32  MCS00R6;                                      /*  MCS00R6         */
    uint32  MCS00R7;                                      /*  MCS00R7         */
    uint32  MCS00CTRL;                                    /*  MCS00CTRL       */
    uint32  MCS00ACB;                                     /*  MCS00ACB        */
    uint32  MCS0CTRG;                                     /*  MCS0CTRG        */
    uint32  MCS0STRG;                                     /*  MCS0STRG        */
    uint8   dummy688[12];                                 /*                  */
    uint32  MCS00MHB;                                     /*  MCS00MHB        */
    uint32  MCS00PC;                                      /*  MCS00PC         */
    uint32  MCS00IRQNOTIFY;                               /*  MCS00IRQNOTIFY  */
    uint32  MCS00IRQEN;                                   /*  MCS00IRQEN      */
    uint32  MCS00IRQFORCINT;                              /*  MCS00IRQFORCINT */
    uint32  MCS00IRQMODE;                                 /*  MCS00IRQMODE    */
    uint32  MCS00EIRQEN;                                  /*  MCS00EIRQEN     */
    uint8   dummy689[12];                                 /*                  */
    uint32  MCS0CTRLSTAT;                                 /*  MCS0CTRLSTAT    */
    uint32  MCS0RESET;                                    /*  MCS0RESET       */
    uint32  MCS0CAT;                                      /*  MCS0CAT         */
    uint32  MCS0CWT;                                      /*  MCS0CWT         */
    uint8   dummy690[8];                                  /*                  */
    uint32  MCS0ERR;                                      /*  MCS0ERR         */
    uint32  MCS01R0;                                      /*  MCS01R0         */
    uint32  MCS01R1;                                      /*  MCS01R1         */
    uint32  MCS01R2;                                      /*  MCS01R2         */
    uint32  MCS01R3;                                      /*  MCS01R3         */
    uint32  MCS01R4;                                      /*  MCS01R4         */
    uint32  MCS01R5;                                      /*  MCS01R5         */
    uint32  MCS01R6;                                      /*  MCS01R6         */
    uint32  MCS01R7;                                      /*  MCS01R7         */
    uint32  MCS01CTRL;                                    /*  MCS01CTRL       */
    uint32  MCS01ACB;                                     /*  MCS01ACB        */
    uint8   dummy691[20];                                 /*                  */
    uint32  MCS01MHB;                                     /*  MCS01MHB        */
    uint32  MCS01PC;                                      /*  MCS01PC         */
    uint32  MCS01IRQNOTIFY;                               /*  MCS01IRQNOTIFY  */
    uint32  MCS01IRQEN;                                   /*  MCS01IRQEN      */
    uint32  MCS01IRQFORCINT;                              /*  MCS01IRQFORCINT */
    uint32  MCS01IRQMODE;                                 /*  MCS01IRQMODE    */
    uint32  MCS01EIRQEN;                                  /*  MCS01EIRQEN     */
    uint8   dummy692[40];                                 /*                  */
    uint32  MCS02R0;                                      /*  MCS02R0         */
    uint32  MCS02R1;                                      /*  MCS02R1         */
    uint32  MCS02R2;                                      /*  MCS02R2         */
    uint32  MCS02R3;                                      /*  MCS02R3         */
    uint32  MCS02R4;                                      /*  MCS02R4         */
    uint32  MCS02R5;                                      /*  MCS02R5         */
    uint32  MCS02R6;                                      /*  MCS02R6         */
    uint32  MCS02R7;                                      /*  MCS02R7         */
    uint32  MCS02CTRL;                                    /*  MCS02CTRL       */
    uint32  MCS02ACB;                                     /*  MCS02ACB        */
    uint8   dummy693[20];                                 /*                  */
    uint32  MCS02MHB;                                     /*  MCS02MHB        */
    uint32  MCS02PC;                                      /*  MCS02PC         */
    uint32  MCS02IRQNOTIFY;                               /*  MCS02IRQNOTIFY  */
    uint32  MCS02IRQEN;                                   /*  MCS02IRQEN      */
    uint32  MCS02IRQFORCINT;                              /*  MCS02IRQFORCINT */
    uint32  MCS02IRQMODE;                                 /*  MCS02IRQMODE    */
    uint32  MCS02EIRQEN;                                  /*  MCS02EIRQEN     */
    uint8   dummy694[40];                                 /*                  */
    uint32  MCS03R0;                                      /*  MCS03R0         */
    uint32  MCS03R1;                                      /*  MCS03R1         */
    uint32  MCS03R2;                                      /*  MCS03R2         */
    uint32  MCS03R3;                                      /*  MCS03R3         */
    uint32  MCS03R4;                                      /*  MCS03R4         */
    uint32  MCS03R5;                                      /*  MCS03R5         */
    uint32  MCS03R6;                                      /*  MCS03R6         */
    uint32  MCS03R7;                                      /*  MCS03R7         */
    uint32  MCS03CTRL;                                    /*  MCS03CTRL       */
    uint32  MCS03ACB;                                     /*  MCS03ACB        */
    uint8   dummy695[20];                                 /*                  */
    uint32  MCS03MHB;                                     /*  MCS03MHB        */
    uint32  MCS03PC;                                      /*  MCS03PC         */
    uint32  MCS03IRQNOTIFY;                               /*  MCS03IRQNOTIFY  */
    uint32  MCS03IRQEN;                                   /*  MCS03IRQEN      */
    uint32  MCS03IRQFORCINT;                              /*  MCS03IRQFORCINT */
    uint32  MCS03IRQMODE;                                 /*  MCS03IRQMODE    */
    uint32  MCS03EIRQEN;                                  /*  MCS03EIRQEN     */
    uint8   dummy696[40];                                 /*                  */
    uint32  MCS04R0;                                      /*  MCS04R0         */
    uint32  MCS04R1;                                      /*  MCS04R1         */
    uint32  MCS04R2;                                      /*  MCS04R2         */
    uint32  MCS04R3;                                      /*  MCS04R3         */
    uint32  MCS04R4;                                      /*  MCS04R4         */
    uint32  MCS04R5;                                      /*  MCS04R5         */
    uint32  MCS04R6;                                      /*  MCS04R6         */
    uint32  MCS04R7;                                      /*  MCS04R7         */
    uint32  MCS04CTRL;                                    /*  MCS04CTRL       */
    uint32  MCS04ACB;                                     /*  MCS04ACB        */
    uint8   dummy697[20];                                 /*                  */
    uint32  MCS04MHB;                                     /*  MCS04MHB        */
    uint32  MCS04PC;                                      /*  MCS04PC         */
    uint32  MCS04IRQNOTIFY;                               /*  MCS04IRQNOTIFY  */
    uint32  MCS04IRQEN;                                   /*  MCS04IRQEN      */
    uint32  MCS04IRQFORCINT;                              /*  MCS04IRQFORCINT */
    uint32  MCS04IRQMODE;                                 /*  MCS04IRQMODE    */
    uint32  MCS04EIRQEN;                                  /*  MCS04EIRQEN     */
    uint8   dummy698[40];                                 /*                  */
    uint32  MCS05R0;                                      /*  MCS05R0         */
    uint32  MCS05R1;                                      /*  MCS05R1         */
    uint32  MCS05R2;                                      /*  MCS05R2         */
    uint32  MCS05R3;                                      /*  MCS05R3         */
    uint32  MCS05R4;                                      /*  MCS05R4         */
    uint32  MCS05R5;                                      /*  MCS05R5         */
    uint32  MCS05R6;                                      /*  MCS05R6         */
    uint32  MCS05R7;                                      /*  MCS05R7         */
    uint32  MCS05CTRL;                                    /*  MCS05CTRL       */
    uint32  MCS05ACB;                                     /*  MCS05ACB        */
    uint8   dummy699[20];                                 /*                  */
    uint32  MCS05MHB;                                     /*  MCS05MHB        */
    uint32  MCS05PC;                                      /*  MCS05PC         */
    uint32  MCS05IRQNOTIFY;                               /*  MCS05IRQNOTIFY  */
    uint32  MCS05IRQEN;                                   /*  MCS05IRQEN      */
    uint32  MCS05IRQFORCINT;                              /*  MCS05IRQFORCINT */
    uint32  MCS05IRQMODE;                                 /*  MCS05IRQMODE    */
    uint32  MCS05EIRQEN;                                  /*  MCS05EIRQEN     */
    uint8   dummy700[40];                                 /*                  */
    uint32  MCS06R0;                                      /*  MCS06R0         */
    uint32  MCS06R1;                                      /*  MCS06R1         */
    uint32  MCS06R2;                                      /*  MCS06R2         */
    uint32  MCS06R3;                                      /*  MCS06R3         */
    uint32  MCS06R4;                                      /*  MCS06R4         */
    uint32  MCS06R5;                                      /*  MCS06R5         */
    uint32  MCS06R6;                                      /*  MCS06R6         */
    uint32  MCS06R7;                                      /*  MCS06R7         */
    uint32  MCS06CTRL;                                    /*  MCS06CTRL       */
    uint32  MCS06ACB;                                     /*  MCS06ACB        */
    uint8   dummy701[20];                                 /*                  */
    uint32  MCS06MHB;                                     /*  MCS06MHB        */
    uint32  MCS06PC;                                      /*  MCS06PC         */
    uint32  MCS06IRQNOTIFY;                               /*  MCS06IRQNOTIFY  */
    uint32  MCS06IRQEN;                                   /*  MCS06IRQEN      */
    uint32  MCS06IRQFORCINT;                              /*  MCS06IRQFORCINT */
    uint32  MCS06IRQMODE;                                 /*  MCS06IRQMODE    */
    uint32  MCS06EIRQEN;                                  /*  MCS06EIRQEN     */
    uint8   dummy702[40];                                 /*                  */
    uint32  MCS07R0;                                      /*  MCS07R0         */
    uint32  MCS07R1;                                      /*  MCS07R1         */
    uint32  MCS07R2;                                      /*  MCS07R2         */
    uint32  MCS07R3;                                      /*  MCS07R3         */
    uint32  MCS07R4;                                      /*  MCS07R4         */
    uint32  MCS07R5;                                      /*  MCS07R5         */
    uint32  MCS07R6;                                      /*  MCS07R6         */
    uint32  MCS07R7;                                      /*  MCS07R7         */
    uint32  MCS07CTRL;                                    /*  MCS07CTRL       */
    uint32  MCS07ACB;                                     /*  MCS07ACB        */
    uint8   dummy703[20];                                 /*                  */
    uint32  MCS07MHB;                                     /*  MCS07MHB        */
    uint32  MCS07PC;                                      /*  MCS07PC         */
    uint32  MCS07IRQNOTIFY;                               /*  MCS07IRQNOTIFY  */
    uint32  MCS07IRQEN;                                   /*  MCS07IRQEN      */
    uint32  MCS07IRQFORCINT;                              /*  MCS07IRQFORCINT */
    uint32  MCS07IRQMODE;                                 /*  MCS07IRQMODE    */
    uint32  MCS07EIRQEN;                                  /*  MCS07EIRQEN     */
    uint8   dummy704[40];                                 /*                  */
    uint32  MCS08R0;                                      /*  MCS08R0         */
    uint32  MCS08R1;                                      /*  MCS08R1         */
    uint32  MCS08R2;                                      /*  MCS08R2         */
    uint32  MCS08R3;                                      /*  MCS08R3         */
    uint32  MCS08R4;                                      /*  MCS08R4         */
    uint32  MCS08R5;                                      /*  MCS08R5         */
    uint32  MCS08R6;                                      /*  MCS08R6         */
    uint32  MCS08R7;                                      /*  MCS08R7         */
    uint32  MCS08CTRL;                                    /*  MCS08CTRL       */
    uint32  MCS08ACB;                                     /*  MCS08ACB        */
    uint8   dummy705[20];                                 /*                  */
    uint32  MCS08MHB;                                     /*  MCS08MHB        */
    uint32  MCS08PC;                                      /*  MCS08PC         */
    uint32  MCS08IRQNOTIFY;                               /*  MCS08IRQNOTIFY  */
    uint32  MCS08IRQEN;                                   /*  MCS08IRQEN      */
    uint32  MCS08IRQFORCINT;                              /*  MCS08IRQFORCINT */
    uint32  MCS08IRQMODE;                                 /*  MCS08IRQMODE    */
    uint32  MCS08EIRQEN;                                  /*  MCS08EIRQEN     */
    uint8   dummy706[2984];                               /*                  */
    uint32  MCS10R0;                                      /*  MCS10R0         */
    uint32  MCS10R1;                                      /*  MCS10R1         */
    uint32  MCS10R2;                                      /*  MCS10R2         */
    uint32  MCS10R3;                                      /*  MCS10R3         */
    uint32  MCS10R4;                                      /*  MCS10R4         */
    uint32  MCS10R5;                                      /*  MCS10R5         */
    uint32  MCS10R6;                                      /*  MCS10R6         */
    uint32  MCS10R7;                                      /*  MCS10R7         */
    uint32  MCS10CTRL;                                    /*  MCS10CTRL       */
    uint32  MCS10ACB;                                     /*  MCS10ACB        */
    uint32  MCS1CTRG;                                     /*  MCS1CTRG        */
    uint32  MCS1STRG;                                     /*  MCS1STRG        */
    uint8   dummy707[12];                                 /*                  */
    uint32  MCS10MHB;                                     /*  MCS10MHB        */
    uint32  MCS10PC;                                      /*  MCS10PC         */
    uint32  MCS10IRQNOTIFY;                               /*  MCS10IRQNOTIFY  */
    uint32  MCS10IRQEN;                                   /*  MCS10IRQEN      */
    uint32  MCS10IRQFORCINT;                              /*  MCS10IRQFORCINT */
    uint32  MCS10IRQMODE;                                 /*  MCS10IRQMODE    */
    uint32  MCS10EIRQEN;                                  /*  MCS10EIRQEN     */
    uint8   dummy708[12];                                 /*                  */
    uint32  MCS1CTRLSTAT;                                 /*  MCS1CTRLSTAT    */
    uint32  MCS1RESET;                                    /*  MCS1RESET       */
    uint32  MCS1CAT;                                      /*  MCS1CAT         */
    uint32  MCS1CWT;                                      /*  MCS1CWT         */
    uint8   dummy709[8];                                  /*                  */
    uint32  MCS1ERR;                                      /*  MCS1ERR         */
    uint32  MCS11R0;                                      /*  MCS11R0         */
    uint32  MCS11R1;                                      /*  MCS11R1         */
    uint32  MCS11R2;                                      /*  MCS11R2         */
    uint32  MCS11R3;                                      /*  MCS11R3         */
    uint32  MCS11R4;                                      /*  MCS11R4         */
    uint32  MCS11R5;                                      /*  MCS11R5         */
    uint32  MCS11R6;                                      /*  MCS11R6         */
    uint32  MCS11R7;                                      /*  MCS11R7         */
    uint32  MCS11CTRL;                                    /*  MCS11CTRL       */
    uint32  MCS11ACB;                                     /*  MCS11ACB        */
    uint8   dummy710[20];                                 /*                  */
    uint32  MCS11MHB;                                     /*  MCS11MHB        */
    uint32  MCS11PC;                                      /*  MCS11PC         */
    uint32  MCS11IRQNOTIFY;                               /*  MCS11IRQNOTIFY  */
    uint32  MCS11IRQEN;                                   /*  MCS11IRQEN      */
    uint32  MCS11IRQFORCINT;                              /*  MCS11IRQFORCINT */
    uint32  MCS11IRQMODE;                                 /*  MCS11IRQMODE    */
    uint32  MCS11EIRQEN;                                  /*  MCS11EIRQEN     */
    uint8   dummy711[40];                                 /*                  */
    uint32  MCS12R0;                                      /*  MCS12R0         */
    uint32  MCS12R1;                                      /*  MCS12R1         */
    uint32  MCS12R2;                                      /*  MCS12R2         */
    uint32  MCS12R3;                                      /*  MCS12R3         */
    uint32  MCS12R4;                                      /*  MCS12R4         */
    uint32  MCS12R5;                                      /*  MCS12R5         */
    uint32  MCS12R6;                                      /*  MCS12R6         */
    uint32  MCS12R7;                                      /*  MCS12R7         */
    uint32  MCS12CTRL;                                    /*  MCS12CTRL       */
    uint32  MCS12ACB;                                     /*  MCS12ACB        */
    uint8   dummy712[20];                                 /*                  */
    uint32  MCS12MHB;                                     /*  MCS12MHB        */
    uint32  MCS12PC;                                      /*  MCS12PC         */
    uint32  MCS12IRQNOTIFY;                               /*  MCS12IRQNOTIFY  */
    uint32  MCS12IRQEN;                                   /*  MCS12IRQEN      */
    uint32  MCS12IRQFORCINT;                              /*  MCS12IRQFORCINT */
    uint32  MCS12IRQMODE;                                 /*  MCS12IRQMODE    */
    uint32  MCS12EIRQEN;                                  /*  MCS12EIRQEN     */
    uint8   dummy713[40];                                 /*                  */
    uint32  MCS13R0;                                      /*  MCS13R0         */
    uint32  MCS13R1;                                      /*  MCS13R1         */
    uint32  MCS13R2;                                      /*  MCS13R2         */
    uint32  MCS13R3;                                      /*  MCS13R3         */
    uint32  MCS13R4;                                      /*  MCS13R4         */
    uint32  MCS13R5;                                      /*  MCS13R5         */
    uint32  MCS13R6;                                      /*  MCS13R6         */
    uint32  MCS13R7;                                      /*  MCS13R7         */
    uint32  MCS13CTRL;                                    /*  MCS13CTRL       */
    uint32  MCS13ACB;                                     /*  MCS13ACB        */
    uint8   dummy714[20];                                 /*                  */
    uint32  MCS13MHB;                                     /*  MCS13MHB        */
    uint32  MCS13PC;                                      /*  MCS13PC         */
    uint32  MCS13IRQNOTIFY;                               /*  MCS13IRQNOTIFY  */
    uint32  MCS13IRQEN;                                   /*  MCS13IRQEN      */
    uint32  MCS13IRQFORCINT;                              /*  MCS13IRQFORCINT */
    uint32  MCS13IRQMODE;                                 /*  MCS13IRQMODE    */
    uint32  MCS13EIRQEN;                                  /*  MCS13EIRQEN     */
    uint8   dummy715[40];                                 /*                  */
    uint32  MCS14R0;                                      /*  MCS14R0         */
    uint32  MCS14R1;                                      /*  MCS14R1         */
    uint32  MCS14R2;                                      /*  MCS14R2         */
    uint32  MCS14R3;                                      /*  MCS14R3         */
    uint32  MCS14R4;                                      /*  MCS14R4         */
    uint32  MCS14R5;                                      /*  MCS14R5         */
    uint32  MCS14R6;                                      /*  MCS14R6         */
    uint32  MCS14R7;                                      /*  MCS14R7         */
    uint32  MCS14CTRL;                                    /*  MCS14CTRL       */
    uint32  MCS14ACB;                                     /*  MCS14ACB        */
    uint8   dummy716[20];                                 /*                  */
    uint32  MCS14MHB;                                     /*  MCS14MHB        */
    uint32  MCS14PC;                                      /*  MCS14PC         */
    uint32  MCS14IRQNOTIFY;                               /*  MCS14IRQNOTIFY  */
    uint32  MCS14IRQEN;                                   /*  MCS14IRQEN      */
    uint32  MCS14IRQFORCINT;                              /*  MCS14IRQFORCINT */
    uint32  MCS14IRQMODE;                                 /*  MCS14IRQMODE    */
    uint32  MCS14EIRQEN;                                  /*  MCS14EIRQEN     */
    uint8   dummy717[40];                                 /*                  */
    uint32  MCS15R0;                                      /*  MCS15R0         */
    uint32  MCS15R1;                                      /*  MCS15R1         */
    uint32  MCS15R2;                                      /*  MCS15R2         */
    uint32  MCS15R3;                                      /*  MCS15R3         */
    uint32  MCS15R4;                                      /*  MCS15R4         */
    uint32  MCS15R5;                                      /*  MCS15R5         */
    uint32  MCS15R6;                                      /*  MCS15R6         */
    uint32  MCS15R7;                                      /*  MCS15R7         */
    uint32  MCS15CTRL;                                    /*  MCS15CTRL       */
    uint32  MCS15ACB;                                     /*  MCS15ACB        */
    uint8   dummy718[20];                                 /*                  */
    uint32  MCS15MHB;                                     /*  MCS15MHB        */
    uint32  MCS15PC;                                      /*  MCS15PC         */
    uint32  MCS15IRQNOTIFY;                               /*  MCS15IRQNOTIFY  */
    uint32  MCS15IRQEN;                                   /*  MCS15IRQEN      */
    uint32  MCS15IRQFORCINT;                              /*  MCS15IRQFORCINT */
    uint32  MCS15IRQMODE;                                 /*  MCS15IRQMODE    */
    uint32  MCS15EIRQEN;                                  /*  MCS15EIRQEN     */
}T_GTM0;

typedef struct ST_ATOMGBL0
{
  uint32  ATOM0AGCGLBCTRL;                              /*  ATOM0AGCGLBCTRL   */
  uint32  ATOM0AGCENDISCTRL;                            /*  ATOM0AGCENDISCTRL */
  uint32  ATOM0AGCENDISSTAT;                            /*  ATOM0AGCENDISSTAT */
  uint32  ATOM0AGCACTTB;
  uint32  ATOM0AGCOUTENCTRL;
  uint32  ATOM0AGCOUTENSTAT;
}T_ATOM0;

typedef struct ST_ATOM0CH0
{
  uint32  ATOM00CTRL;                                    /*  ATOM00CTRL       */
  uint32  ATOM00SR0;                                     /*  ATOM00SR0        */
  uint32  ATOM00SR1;                                     /*  ATOM00SR1        */
  uint32  ATOM00CM0;                                     /*  ATOM00CM0        */
  uint32  ATOM00CM1;                                     /*  ATOM00CM1        */
  uint32  ATOM00CN0;                                     /*  ATOM00CN0        */
  uint32  ATOM00STAT;                                    /*  ATOM00STAT       */
  uint32  ATOM00IRQNOTIFY;                               /*  ATOM00IRQNOTIFY  */
  uint32  ATOM00IRQEN;                                   /*  ATOM00IRQEN      */
  uint32  ATOM00IRQFORCINT;                              /*  ATOM00IRQFORCINT */
  uint32  ATOM00IRQMODE;                                 /*  ATOM00IRQMODE    */
}T_ATOM0CH0;

typedef struct ST_STM0
{                                                         /* STM0             */
    union                                                 /*                  */
    {                                                     /* CKSEL            */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } CKSEL;                                              /*                  */

    uint8  dummy606[12];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* TS               */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } TS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* TT               */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } TT;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSTR             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } CSTR;                                               /*                  */

    uint8  dummy607[4];                                   /*                  */
    uint32  STR;                                          /*  STR             */
    uint32  STC;                                          /*  STC             */
    uint8  dummy608[8];                                   /*                  */

    union                                                 /*                  */
    {                                                     /* IS               */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } IS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* RM               */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } RM;                                                 /*                  */

    uint8   dummy609[8];                                  /*                  */
    uint32  CNT0L;                                        /*  CNT0L           */
    uint32  CNT0H;                                        /*  CNT0H           */
    uint8   dummy610[8];                                  /*                  */
    uint32  CMP0AL;                                       /*  CMP0AL          */
    uint32  CMP0AH;                                       /*  CMP0AH          */
    uint32  CMP0BL;                                       /*  CMP0BL          */
    uint32  CMP0BH;                                       /*  CMP0BH          */
    uint32  CMP0CL;                                       /*  CMP0CL          */
    uint32  CMP0CH;                                       /*  CMP0CH          */
    uint32  CMP0DL;                                       /*  CMP0DL          */
    uint32  CMP0DH;                                       /*  CMP0DH          */
    uint32  CNT1;                                         /*  CNT1            */
    uint8   dummy611[12];                                 /*                  */
    uint32  CMP1A;                                        /*  CMP1A           */
    uint32  CMP1B;                                        /*  CMP1B           */
    uint32  CMP1C;                                        /*  CMP1C           */
    uint32  CMP1D;                                        /*  CMP1D           */
    uint32  CNT2;                                         /*  CNT2            */
    uint8   dummy612[12];                                 /*                  */
    uint32  CMP2A;                                        /*  CMP2A           */
    uint32  CMP2B;                                        /*  CMP2B           */
    uint32  CMP2C;                                        /*  CMP2C           */
    uint32  CMP2D;                                        /*  CMP2D           */
    uint32  CNT3;                                         /*  CNT3            */
    uint8   dummy613[12];                                 /*                  */
    uint32  CMP3A;                                        /*  CMP3A           */
    uint32  CMP3B;                                        /*  CMP3B           */
    uint32  CMP3C;                                        /*  CMP3C           */
    uint32  CMP3D;                                        /*  CMP3D           */
}T_STM0;

typedef struct ST_FSGDF1
{                                                         /* FSGDF1           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPID01;                                             /*                  */

} T_FSGDF1;

typedef struct ST_FSGDE1
{                                                         /* FSGDE1           */
    union                                                 /*                  */
    {                                                     /* PROT00           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } PROT00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID00           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPID00;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* PROT01           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } PROT01;                                             /*                  */

    union                                                 /*                  */
    {                                                     /* SPID01           */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPID01;                                             /*                  */

} T_FSGDE1;


typedef struct ST_RSENT0
{                                                         /* RSENT0           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy193[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy194[3768];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT0;


typedef struct ST_RSENT1
{                                                         /* RSENT1           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy195[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy196[3516];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT1;


typedef struct ST_RSENT2
{                                                         /* RSENT2           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy197[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy198[3264];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT2;


typedef struct ST_RSENT3
{                                                         /* RSENT3           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy199[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy200[3012];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT3;


typedef struct ST_RSENT4
{                                                         /* RSENT4           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy201[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy202[2760];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT4;


typedef struct ST_RSENT5
{                                                         /* RSENT5           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy203[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy204[2508];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT5;


typedef struct ST_RSENT6
{                                                         /* RSENT6           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy205[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy206[2256];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT6;


typedef struct ST_RSENT7
{                                                         /* RSENT7           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy207[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy208[2004];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT7;


typedef struct ST_RSENT8
{                                                         /* RSENT8           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy209[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy210[1752];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT8;


typedef struct ST_RSENT9
{                                                         /* RSENT9           */
    union                                                 /*                  */
    {                                                     /* TSPC             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSPC;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* TSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } TSC;                                                /*                  */

    uint8 dummy211[8];                                    /*                  */

    union                                                 /*                  */
    {                                                     /* CC               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CC;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* BRP              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } BRP;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* IDE              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IDE;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* MDC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MDC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SPCT             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SPCT;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* MST              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } MST;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* CS               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CS;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* CSC              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CSC;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* SRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } SRTS;                                               /*                  */

    uint32 SRXD;                                          /*  SRXD            */

    union                                                 /*                  */
    {                                                     /* CPL              */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } CPL;                                                /*                  */

    union                                                 /*                  */
    {                                                     /* ML               */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } ML;                                                 /*                  */

    union                                                 /*                  */
    {                                                     /* FRTS             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } FRTS;                                               /*                  */

    uint32 FRXD;                                          /*  FRXD            */
    uint8 dummy212[1500];                                 /*                  */
    uint32 TSSEL;                                         /*  TSSEL           */
} T_RSENT9;



typedef struct ST_HSUS0
{                                                         /* HSUS0            */
    uint32 CKEN;                                          /*  CKEN            */
    uint32 SRST;                                          /*  SRST            */
    uint32 EN;                                            /*  EN              */
    uint32 MD;                                            /*  MD              */
    uint32 CTL;                                           /*  CTL             */
    uint32 TDIV;                                          /*  TDIV            */
    uint32 TSAR;                                          /*  TSAR            */
    uint32 TPFM;                                          /*  TPFM            */
    uint32 RDAR;                                          /*  RDAR            */
    uint32 RPFM;                                          /*  RPFM            */
    uint32 RGFM;                                          /*  RGFM            */
    uint32 IREN;                                          /*  IREN            */
    uint32 IRST;                                          /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IRCL;                                               /*                  */

    uint32 CST;                                           /*  CST             */
    uint32 CTFM;                                          /*  CTFM            */
    uint32 CRFM;                                          /*  CRFM            */
} T_HSUS0;

typedef struct ST_HSUS1
{                                                         /* HSUS1            */
    uint32 CKEN;                                          /*  CKEN            */
    uint32 SRST;                                          /*  SRST            */
    uint32 EN;                                            /*  EN              */
    uint32 MD;                                            /*  MD              */
    uint32 CTL;                                           /*  CTL             */
    uint32 TDIV;                                          /*  TDIV            */
    uint32 TSAR;                                          /*  TSAR            */
    uint32 TPFM;                                          /*  TPFM            */
    uint32 RDAR;                                          /*  RDAR            */
    uint32 RPFM;                                          /*  RPFM            */
    uint32 RGFM;                                          /*  RGFM            */
    uint32 IREN;                                          /*  IREN            */
    uint32 IRST;                                          /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IRCL;                                               /*                  */

    uint32 CST;                                           /*  CST             */
    uint32 CTFM;                                          /*  CTFM            */
    uint32 CRFM;                                          /*  CRFM            */
} T_HSUS1;


typedef struct ST_HSUS2
{                                                         /* HSUS2            */
    uint32 CKEN;                                          /*  CKEN            */
    uint32 SRST;                                          /*  SRST            */
    uint32 EN;                                            /*  EN              */
    uint32 MD;                                            /*  MD              */
    uint32 CTL;                                           /*  CTL             */
    uint32 TDIV;                                          /*  TDIV            */
    uint32 TSAR;                                          /*  TSAR            */
    uint32 TPFM;                                          /*  TPFM            */
    uint32 RDAR;                                          /*  RDAR            */
    uint32 RPFM;                                          /*  RPFM            */
    uint32 RGFM;                                          /*  RGFM            */
    uint32 IREN;                                          /*  IREN            */
    uint32 IRST;                                          /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IRCL;                                               /*                  */

    uint32 CST;                                           /*  CST             */
    uint32 CTFM;                                          /*  CTFM            */
    uint32 CRFM;                                          /*  CRFM            */
} T_HSUS2;

typedef struct ST_HSUS3
{                                                         /* HSUS3            */
    uint32 CKEN;                                          /*  CKEN            */
    uint32 SRST;                                          /*  SRST            */
    uint32 EN;                                            /*  EN              */
    uint32 MD;                                            /*  MD              */
    uint32 CTL;                                           /*  CTL             */
    uint32 TDIV;                                          /*  TDIV            */
    uint32 TSAR;                                          /*  TSAR            */
    uint32 TPFM;                                          /*  TPFM            */
    uint32 RDAR;                                          /*  RDAR            */
    uint32 RPFM;                                          /*  RPFM            */
    uint32 RGFM;                                          /*  RGFM            */
    uint32 IREN;                                          /*  IREN            */
    uint32 IRST;                                          /*  IRST            */

    union                                                 /*                  */
    {                                                     /* IRCL             */
        uint32 UINT32;                                    /*  32-bit Access   */
        uint16 UINT16[2];                                 /*  16-bit Access   */
        uint8  UINT8[4];                                  /*  8-bit Access    */
    } IRCL;                                               /*                  */

    uint32 CST;                                           /*  CST             */
    uint32 CTFM;                                          /*  CTFM            */
    uint32 CRFM;                                          /*  CRFM            */
} T_HSUS3;

typedef struct STag_Fcu_Registers
{
  uint8  ucReserved1[16];

  uint8  ucFASTAT;

  uint8  ucReserved11[3];

  uint8  ucFAEINT;  /* FAEINT Register (Base address + 0x0014) */

  uint8  ucReserved2[27];

  uint32 ulFSADDR;

  uint32 ulFEADDR;

  uint8  ucReserved3[28];

  uint16 usFCURAME;

  uint8  ucReserved8[2];

  uint16 usFRAMMCR;

  uint8  ucReserved4[36];

  uint32 ulFSTATR;

  uint16 usFENTRYR;

  uint8  ucReserved5[78];

  uint8  ucFBCSTAT;

  uint8  ucReserved6[3];

  uint32 ulFPSADDR;

  uint8  ucReserved7[8];

  uint16 usFPCKAR;

}FlsFACIReg;

typedef struct STag_Fcu_ECCReg
{
  uint16 usDFECCCTL;

  uint8  ucReserved8[2];

  uint32 ulDFERSTR;

  uint8  ucDFERSTC;

  uint8  ucReserved9[11];

  uint8  ucDFERRINT;

  uint8  ucReserved10[7];

  uint16 usDFTSTCTL;
}FlsECCReg;

struct st_peg
{                                                         /* PEG              */
    union                                                 /*                  */
    {                                                     /* G0MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G0MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G0BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G0BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G0SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G0SP;                                               /*                  */

    uint8  dummy1036[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G1MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G1MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G1BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G1BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G1SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G1SP;                                               /*                  */

    uint8  dummy1037[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G2MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G2MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G2BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G2BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G2SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G2SP;                                               /*                  */

    uint8  dummy1038[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G3MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G3MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G3BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G3BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G3SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G3SP;                                               /*                  */

    uint8  dummy1039[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G4MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G4MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G4BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G4BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G4SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G4SP;                                               /*                  */

    uint8  dummy1040[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G5MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G5MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G5BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G5BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G5SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G5SP;                                               /*                  */

    uint8  dummy1041[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G6MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G6MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G6BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G6BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G6SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G6SP;                                               /*                  */

    uint8  dummy1042[4];                                  /*                  */

    union                                                 /*                  */
    {                                                     /* G7MK             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G7MK;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G7BA             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G7BA;                                               /*                  */

    union                                                 /*                  */
    {                                                     /* G7SP             */
        uint32  UINT32;                                   /*  32-bit Access   */
        uint16  UINT16[2];                                /*  16-bit Access   */
        uint8   UINT8[4];                                 /*  8-bit Access    */
    } G7SP;                                               /*                  */

};
struct st_seg
{                                                         /* SEG              */
    uint16 CONT;                                          /*  CONT            */
    uint16 FLAG;                                          /*  FLAG            */
    uint16 TYPE;                                          /*  TYPE            */
    uint16 SIDE;                                          /*  SIDE            */
    uint16 ADDR;                                          /*  ADDR            */
};

typedef struct ST_ECCCSIH
{                                                      /* ECCCSIH             */
    union                                              /*                     */
    {                                                  /* CTL                 */
        uint32 UINT32;                                 /* 32-bit Access       */
        uint16 UINT16[2];                              /* 16-bit Access       */
        uint8  UINT8[4];                               /*  8-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            const uint8  ECEMF:1;                      /* ECEMF               */
            const uint8  ECER1F:1;                     /* ECER1F              */
            const uint8  ECER2F:1;                     /* ECER2F              */
            uint8  EC1EDIC:1;                          /* EC1EDIC             */
            uint8  EC2EDIC:1;                          /* EC2EDIC             */
            uint8  EC1ECP:1;                           /* EC1ECP              */
            uint8  :1;                                 /* Reserved Bits       */
            uint8  ECTHM:1;                            /* ECTHM               */
            uint8  :1;                                 /* Reserved Bits       */
            uint8  ECER1C:1;                           /* ECER1C              */
            uint8  ECER2C:1;                           /* ECER2C              */
            uint8  ECOVFF:1;                           /* ECOVFF              */
            uint8  :2;                                 /* Reserved Bits       */
            uint8  EMCA:2;                             /* EMCA[15:14]         */
            const uint8  ECSEDF0:1;                    /* ECSEDF0             */
            const uint8  ECDEDF0:1;                    /* ECDEDF0             */
            uint8  :6;                                 /* Reserved Bits       */
            uint8  :8;                                 /* Reserved Bits       */
        }BIT;
    } CTL;

    union                                              /*                     */
    {                                                  /* TMC                 */
        uint32 UINT32;                                 /* 32-bit Access       */
        uint16 UINT16[2];                              /* 16-bit Access       */
        uint8  UINT8[4];                               /*  8-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            uint8  ECREIS:1;                           /* ECREIS              */
            uint8  ECDCS:1;                            /* ECDCS               */
            uint8  ECENS:1;                            /* ECENS               */
            uint8  ECREOS:1;                           /* ECREOS              */
            uint8  ECTRRS:1;                           /* ECTRRS              */
            uint8  :2;                                 /* Reserved Bits       */
            uint8  ECTMCE:1;                           /* ECTMCE              */
            uint8  :6;                                 /* Reserved Bits       */
            uint8  ETMA:2;                             /* ETMA[15:14]         */
            uint8  :8;                                 /* Reserved Bits       */
            uint8  :8;                                 /* Reserved Bits       */
        }BIT;
    } TMC;

    union                                              /*                     */
    {                                                  /* TRC                 */
        uint32 UINT32;                                 /* 32-bit Access       */
        uint8  UINT8[4];                               /*  8-bit Access       */
        struct                                         /*                     */
        {                                              /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                uint8  UINT8;                          /* 8-bit Access        */
            } ERDB;                                    /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                uint8  UINT8;                          /* 8-bit Access        */
            } ECRD;                                    /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                uint8  UINT8;                          /* 8-bit Access        */
            } HORD;                                    /*                     */
            union                                      /*                     */
            {                                          /* IOR                 */
                uint8  UINT8;                          /* 8-bit Access        */
            } SYND;
        }REGS8;
        struct                                         /*                     */
        {                                              /* Bit Access          */
            uint8  ERDB:7;                             /* ERDB[6:0]           */
            uint8  :1;                                 /* Reserved Bits       */
            const uint8  ECRD:7;                       /* ECRD[14:8]          */
            uint8  :1;                                 /* Reserved Bits       */
            const uint8  HORD:7;                       /* HORD[22:16]         */
            uint8  :1;                                 /* Reserved Bits       */
            const uint8  SYND:7;                       /* SYND[30:24]         */
            uint8  :1;                                 /* Reserved Bits       */
        }BIT;
    } TRC;

    union                                              /*                     */
    {                                                  /* TED                 */
        uint32 UINT32;                                 /* 32-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            uint32 ECEDB:32;                           /* ECEDB[31:0]         */
        }BIT;
    } TED;

    union                                              /*                     */
    {                                                  /* EAD0                */
        const uint32 UINT32;                           /* 32-bit Access       */
        struct                                         /*                     */
        {                                              /* Bit Access          */
            const uint32 ECEAD:32;                     /* ECEAD[31:0]         */
        }BIT;
    } EAD0;

    uint8  dummy1043[12];
}T_ECCCSIH;

#endif

