/*
 * File: TNC2.h
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

#ifndef RTW_HEADER_TNC2_h_
#define RTW_HEADER_TNC2_h_
#ifndef TNC2_COMMON_INCLUDES_
#define TNC2_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TNC2_COMMON_INCLUDES_ */

#include "TNC2_types.h"

/* Macros for accessing real-time model data structure */

/* Block states (default storage) for system '<Root>' */
typedef struct {
  uint32_T SYS_TICK;                   /* '<Root>/Data Store Memory' */
} DW_TNC2_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T x;                           /* '<Root>/x' */
  uint8_T y;                           /* '<Root>/y' */
} ExtU_TNC2_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  uint8_T val;                         /* '<Root>/val' */
} ExtY_TNC2_T;

/* Block states (default storage) */
extern DW_TNC2_T TNC2_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_TNC2_T TNC2_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_TNC2_T TNC2_Y;

/* Model entry point functions */
extern void TNC2_initialize(void);
extern void TNC2_terminate(void);

/* Exported entry point function */
extern void Tick_Function(void);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TNC2'
 * '<S1>'   : 'TNC2/Function-Call Subsystem'
 * '<S2>'   : 'TNC2/Function-Call Subsystem/Simulink Function'
 */
#endif                                 /* RTW_HEADER_TNC2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
