/*****************************************************************************
* Copyright (C) 2021, Trugo Automotive Technology Co., Ltd
* File Name:    irq.c
* Description:  Interrupt cfg hand code.
* Processor:    RH850P1M
* Compiler:     GHS 7.1.6d
********************************* Revision **********************************
* Date          Version     Author      	Description
* 2022-1-10      0.00      Huangzichen	    Create it
*****************************************************************************/

#include "irq.h"
#include "dr7f701373_irq.h"

#define E_OK            (0x01)
#define E_NOT_OK        (0x00)
#define EIC_BASE0       0xFFFEEA00U
#define EIC_BASE1       0xFFFFB000U

#define EIC_CFG_MSK     0x7F30U
#define EIC_EICTn_MSK   0x8000U
#define EIC_EIMKn_MSK   0x0080U
#define EIC_EITBn_MSK   0x0040U
#define EIC_EIPn_MSK    0x000FU

uint16 Test_Reg;

/*****************************************************************************
 * @name  : P1x_EIC_EN
 * @brief : Please describe the fucntion of this 
 * @param : IrqAdd
 * @param : IrqPrio
 * **************************************************************************/
Std_ReturnType_32 P1x_EIC_EN(Std_ParamType_32 IrqAdd, Std_ParamType_8 IrqPrio)
{
    Std_ReturnType_32 RetVal = E_OK;

    volatile uint16 *EICntrlRegAdd;
    volatile uint16 EICntrlRegVal;

    Std_ReturnType_32 EIC_OffAdd;
    Std_ReturnType_32 EIC_NUM;

    EIC_NUM = (IrqAdd - IRQ_TABLE_START) >> 2;
    EIC_OffAdd = (IrqAdd - IRQ_TABLE_START) >> 1;

    if((EIC_NUM >= 0U) && (EIC_NUM < 32U))
    {
        EICntrlRegAdd = (volatile uint16 *)(EIC_BASE0 + EIC_OffAdd);
    }
    else if((EIC_NUM >= 32U) && (EIC_NUM < 384U))
    {
        EICntrlRegAdd = (volatile uint16 *)(EIC_BASE1 + EIC_OffAdd);
    }
    else
    {
        RetVal = E_NOT_OK;
    }

    if(RetVal == E_OK)
    {
        EICntrlRegVal = *EICntrlRegAdd & (uint16)EIC_CFG_MSK;
        *EICntrlRegAdd = EICntrlRegVal | (uint16)EIC_EITBn_MSK | (uint16)(IrqPrio & EIC_EIPn_MSK);

        RetVal = E_OK;
    }

    Test_Reg = *EICntrlRegAdd;

    return RetVal;
}
