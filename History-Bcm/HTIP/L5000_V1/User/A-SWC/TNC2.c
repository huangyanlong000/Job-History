/*
 * File: TNC2.c
 *
 * Code generated for Simulink model 'TNC2'.
 *
 * Model version                  : 1.99
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Fri May 12 16:45:48 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: NXP->Cortex-M3
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TNC2.h"
#include "TNC2_private.h"

/* Block states (default storage) */
DW_TNC2_T TNC2_DW;

/* External inputs (root inport signals with default storage) */
ExtU_TNC2_T TNC2_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_TNC2_T TNC2_Y;

/* Output and update for Simulink Function: '<S1>/Simulink Function' */
void TNC2_RTE_Get_DataU8(uint8_T rtu_x, uint8_T rtu_y, uint8_T *rty_val)
{
  /* SignalConversion generated from: '<S2>/val' incorporates:
   *  SignalConversion generated from: '<S2>/x'
   *  SignalConversion generated from: '<S2>/y'
   *  Sum: '<S2>/Sum'
   */
  *rty_val = (uint8_T)((uint32_T)rtu_x + rtu_y);
}

/* Model step function for TID1 */
void Tick_Function(void)               /* Explicit Task: Tick_Function */
{
  /* RootInportFunctionCallGenerator generated from: '<Root>/Tick_Function' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* DataStoreWrite: '<S1>/Data Store Write' incorporates:
   *  Constant: '<S1>/Constant'
   *  DataStoreRead: '<S1>/Data Store Read'
   *  Sum: '<S1>/Add'
   */
  TNC2_DW.SYS_TICK++;

  /* FunctionCaller: '<S1>/Function Caller' incorporates:
   *  Inport: '<Root>/x'
   *  Inport: '<Root>/y'
   *  Outport: '<Root>/val'
   */
  TNC2_RTE_Get_DataU8(TNC2_U.x, TNC2_U.y, &TNC2_Y.val);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Tick_Function' */
}

/* Model initialize function */
void TNC2_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void TNC2_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
