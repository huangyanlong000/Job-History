/*
 * File: EngineTWT.c
 *
 * Code generated for Simulink model 'EngineTWT'.
 *
 * Model version                  : 1.288
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Mon Jul 10 13:27:27 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: NXP->Cortex-M3
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EngineTWT.h"
#include "EngineTWT_private.h"

/* Exported data definition */

/* Definition for custom storage class: Localizable */
static uint32_T EngineTWT_DelayEngierToalTimes;/* '<S8>/Unit Delay' */
static uint32_T EngineTWT_NVMengierLastToalTimes;/* '<S9>/Unit Delay2' */
static uint32_T EngineTWT_NVMengierToalTimes;/* '<S8>/Unit Delay1' */
static uint32_T Last_NBS;              /* '<S9>/Chart1' */
static uint32_T Local_Time;            /* '<S8>/Chart2' */
static uint32_T NBS_data;              /* '<S9>/Chart1' */
static uint32_T TimeCnt;               /* '<S9>/Chart1' */
static uint32_T ToalTime;              /* '<S8>/Chart2' */

/* Model step function */
void EngineTWT_Runable_CY(void)
{
  uint16_T rtb_FunctionCaller9;

  /* RootInportFunctionCallGenerator generated from: '<Root>/EngineTWT_Runable_CY' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* FunctionCaller: '<S1>/Function Caller9' incorporates:
   *  Constant: '<S1>/Constant18'
   *  Constant: '<S1>/Constant19'
   */
  rtb_FunctionCaller9 = rte_get_uint16_val(SIG_CLASS_NVM_CFG, NVM_CFG_ENG_TYPE);

  /* If: '<S1>/If5' incorporates:
   *  Constant: '<S3>/Constant10'
   *  Constant: '<S3>/Constant11'
   *  Constant: '<S4>/Constant1'
   *  Constant: '<S4>/Constant2'
   *  FunctionCaller: '<S3>/Function Caller'
   *  FunctionCaller: '<S4>/TypeU4'
   */
  if (rtb_FunctionCaller9 == 214) {
    uint8_T rtb_FunctionCaller;

    /* Outputs for IfAction SubSystem: '<S1>/Subsystem1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    rtb_FunctionCaller = rte_get_uint8_val(SIG_CLASS_SWC, REV_EngineSpeedState);

    /* If: '<S3>/If' incorporates:
     *  Constant: '<S3>/Constant10'
     *  Constant: '<S3>/Constant11'
     *  Constant: '<S7>/Constant4'
     *  Constant: '<S7>/Constant5'
     *  FunctionCaller: '<S3>/Function Caller'
     *  FunctionCaller: '<S7>/ret_Nbspeed'
     */
    if (rtb_FunctionCaller == 1) {
      uint32_T qY;
      uint32_T rtb_Add1;
      uint32_T rtb_TypeU4;
      boolean_T rtb_RelationalOperator_l;

      /* Outputs for IfAction SubSystem: '<S3>/Subsystem2' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      rtb_FunctionCaller9 = rte_get_uint16_val(SIG_CLASS_SWC, REV_EngineSpeed);

      /* RelationalOperator: '<S11>/Relational Operator1' incorporates:
       *  Constant: '<S7>/Constant4'
       *  Constant: '<S7>/Constant5'
       *  FunctionCaller: '<S7>/ret_Nbspeed'
       */
      rtb_RelationalOperator_l = (rtb_FunctionCaller9 > 500);

      /* Sum: '<S8>/Add' incorporates:
       *  Switch: '<S11>/Switch1'
       *  UnitDelay: '<S8>/Unit Delay'
       */
      rtb_TypeU4 = rtb_RelationalOperator_l + EngineTWT_DelayEngierToalTimes;

      /* Chart: '<S8>/Chart2' */
      ToalTime = 0U;
      qY = rtb_TypeU4 - /*MW:OvSatOk*/ Local_Time;
      if (qY > rtb_TypeU4) {
        qY = 0U;
      }

      if (qY == 3600U) {
        ToalTime = 1U;
        Local_Time = rtb_TypeU4;
      } else {
        ToalTime = 0U;
      }

      /* End of Chart: '<S8>/Chart2' */

      /* Sum: '<S8>/Add1' incorporates:
       *  UnitDelay: '<S8>/Unit Delay1'
       */
      rtb_Add1 = ToalTime + EngineTWT_NVMengierToalTimes;

      /* Saturate: '<S7>/Saturation3' */
      if (rtb_Add1 <= 1000000U) {
        qY = rtb_Add1;
      } else {
        qY = 1000000U;
      }

      /* End of Saturate: '<S7>/Saturation3' */

      /* FunctionCaller: '<S7>/Function Caller1' incorporates:
       *  Constant: '<S7>/Constant1'
       *  Constant: '<S7>/Constant2'
       */
      rte_set_uint32_val(SIG_CLASS_COMTX, TXSIG_EngHrRev_EGR_Total_engine_hours,
                         qY);

      /* Saturate: '<S7>/Saturation4' */
      if (rtb_Add1 <= 1000000U) {
        qY = rtb_Add1;
      } else {
        qY = 1000000U;
      }

      /* End of Saturate: '<S7>/Saturation4' */

      /* FunctionCaller: '<S7>/Function Caller5' incorporates:
       *  Constant: '<S7>/Constant'
       *  Constant: '<S7>/Constant13'
       */
      rte_set_uint32_val(SIG_CLASS_SWC, EngineTWT_Enginerunhours, qY);

      /* Saturate: '<S7>/Saturation1' */
      if (rtb_Add1 <= 1000000U) {
        qY = rtb_Add1;
      } else {
        qY = 1000000U;
      }

      /* End of Saturate: '<S7>/Saturation1' */

      /* FunctionCaller: '<S7>/Function Caller6' incorporates:
       *  Constant: '<S7>/Constant11'
       *  Constant: '<S7>/Constant12'
       *  DataTypeConversion: '<S7>/Data Type Conversion'
       *  Gain: '<S7>/Gain'
       */
      rte_set_uint32_val(SIG_CLASS_COMTX,
                         TXSIG_HOURS_EGR_EngineTotalHoursofOperation, (uint32_T)
                         (((uint64_T)qY << 31) >> 30));

      /* Chart: '<S9>/Chart1' incorporates:
       *  UnitDelay: '<S9>/Unit Delay2'
       */
      NBS_data = EngineTWT_NVMengierLastToalTimes;
      Last_NBS = EngineTWT_NVMengierLastToalTimes;
      if (TimeCnt == 5400U) {
        /* Saturate: '<S7>/Saturation2' */
        if (rtb_Add1 <= 1000000U) {
          NBS_data = rtb_Add1;
        } else {
          NBS_data = 1000000U;
        }

        /* End of Saturate: '<S7>/Saturation2' */
        TimeCnt = 0U;
      } else {
        qY = TimeCnt + /*MW:OvSatOk*/ 1U;
        if (TimeCnt + 1U < TimeCnt) {
          qY = MAX_uint32_T;
        }

        TimeCnt = qY;
      }

      /* End of Chart: '<S9>/Chart1' */

      /* If: '<S9>/If' incorporates:
       *  RelationalOperator: '<S9>/Relational Operator'
       */
      if (NBS_data != Last_NBS) {
        /* Outputs for IfAction SubSystem: '<S9>/Subsystem' incorporates:
         *  ActionPort: '<S13>/Action Port'
         */
        /* FunctionCaller: '<S13>/Function Caller7' incorporates:
         *  Constant: '<S13>/Constant14'
         *  Constant: '<S13>/Constant15'
         */
        rte_set_uint32_val(SIG_CLASS_NVM, NVM_HFV_Enginerunhours, NBS_data);

        /* End of Outputs for SubSystem: '<S9>/Subsystem' */
      }

      /* End of If: '<S9>/If' */

      /* FunctionCaller: '<S11>/Function Caller5' incorporates:
       *  Constant: '<S11>/Constant'
       *  Constant: '<S11>/Constant13'
       *  Switch: '<S11>/Switch2'
       */
      rte_set_uint8_val(SIG_CLASS_SWC, EngineTWT_EnginerunhoursState, (uint8_T)
                        rtb_RelationalOperator_l);

      /* Update for UnitDelay: '<S8>/Unit Delay' */
      EngineTWT_DelayEngierToalTimes = rtb_TypeU4;

      /* Update for UnitDelay: '<S8>/Unit Delay1' */
      EngineTWT_NVMengierToalTimes = rtb_Add1;

      /* Update for UnitDelay: '<S9>/Unit Delay2' */
      EngineTWT_NVMengierLastToalTimes = NBS_data;

      /* End of Outputs for SubSystem: '<S3>/Subsystem2' */
    }

    /* End of If: '<S3>/If' */
    /* End of Outputs for SubSystem: '<S1>/Subsystem1' */
  } else {
    uint32_T rtb_TypeU4;
    boolean_T rtb_RelationalOperator_l;

    /* Outputs for IfAction SubSystem: '<S1>/Subsystem8' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    rtb_TypeU4 = rte_get_uint32_val(SIG_CLASS_COMRX,
      RXSIG_EngHrRev_Total_engine_hours);

    /* RelationalOperator: '<S15>/Relational Operator' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Constant: '<S4>/Constant2'
     *  FunctionCaller: '<S4>/TypeU4'
     */
    rtb_RelationalOperator_l = (rtb_TypeU4 == 0U);

    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S15>/Constant1'
     *  DataTypeConversion: '<S15>/Data Type Conversion1'
     *  Gain: '<S15>/Gain1'
     */
    if (rtb_RelationalOperator_l) {
      rtb_TypeU4 = 65535U;
    } else {
      rtb_TypeU4 = (uint32_T)(0.5 * (real_T)rtb_TypeU4);
    }

    /* End of Switch: '<S15>/Switch' */

    /* FunctionCaller: '<S4>/Function Caller5' incorporates:
     *  Constant: '<S4>/Constant13'
     *  Constant: '<S4>/Constant3'
     */
    rte_set_uint32_val(SIG_CLASS_SWC, EngineTWT_Enginerunhours, rtb_TypeU4);

    /* FunctionCaller: '<S15>/Function Caller5' incorporates:
     *  Constant: '<S15>/Constant13'
     *  Constant: '<S15>/Constant2'
     *  Switch: '<S15>/Switch2'
     */
    rte_set_uint8_val(SIG_CLASS_SWC, EngineTWT_EnginerunhoursState, (uint8_T)
                      !rtb_RelationalOperator_l);

    /* End of Outputs for SubSystem: '<S1>/Subsystem8' */
  }

  /* End of If: '<S1>/If5' */
  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/EngineTWT_Runable_CY' */
}

/* Model initialize function */
void EngineTWT_initialize(void)
{
  {
    uint32_T rtb_FunctionCaller1;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/EngineTWT_Runable_CY' incorporates:
     *  SubSystem: '<Root>/Function-Call Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S1>/Initialize Function' */
    /* FunctionCaller: '<S2>/Function Caller1' incorporates:
     *  Constant: '<S2>/Constant3'
     *  Constant: '<S2>/Constant4'
     */
    rtb_FunctionCaller1 = rte_get_uint32_val(SIG_CLASS_NVM,
      NVM_HFV_Enginerunhours);

    /* StateWriter: '<S2>/State Writer' */
    EngineTWT_NVMengierToalTimes = rtb_FunctionCaller1;

    /* StateWriter: '<S2>/State Writer2' */
    EngineTWT_NVMengierLastToalTimes = rtb_FunctionCaller1;

    /* End of Outputs for SubSystem: '<S1>/Initialize Function' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/EngineTWT_Runable_CY' */
  }
}

/* Model terminate function */
void EngineTWT_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
