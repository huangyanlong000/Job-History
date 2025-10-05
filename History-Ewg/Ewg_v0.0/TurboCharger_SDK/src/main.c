
/******************************************************************************
** @file main.c
** @brief
**         Main module.
**         This module contains user's application code.
** @addtogroup main_module main module documentation
#include "sdk_project_config.h"
******************************************************************************/

#include "bsp.h"

int main(void)
{
    /******************************************
     * @brief : the board software peripheral
     * ***************************************/
    Bsp_Init();

    return (0x00);
}
