/*****************************************************************************
* Copyright (C) 2021, Trugo Automotive Technology Co., Ltd
* File Name:    irq.h
* Description:  Interrupt cfg hand code.
* Processor:    RH850P1M
* Compiler:     GHS 7.1.6d
********************************* Revision **********************************
* Date          Version     Author      	Description
* 2022-1-10      0.00      Huangzichen	    Create it
*****************************************************************************/

#include "Std_Types.h"
#include "dr7f701373.dvf.h"
#include "dr7f701373_irq.h"

typedef uint8  Std_ParamType_8;
typedef uint16 Std_ParamType_16;
typedef uint32 Std_ParamType_32;

typedef uint8  Std_ReturnType_8;
typedef uint16 Std_ReturnType_16;
typedef uint32 Std_ReturnType_32;

extern uint32 P1x_EIC_EN(uint32 IrqAdd, uint8 IrqPrio);
