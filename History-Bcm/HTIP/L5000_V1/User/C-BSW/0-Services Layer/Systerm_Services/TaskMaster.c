#include "TaskMaster.h"


/*
    #应用：
*/
void Task_Push(void)
{
    for(;;)
    {
        RTE_MainFunction();

        TNC_step();
    }
}