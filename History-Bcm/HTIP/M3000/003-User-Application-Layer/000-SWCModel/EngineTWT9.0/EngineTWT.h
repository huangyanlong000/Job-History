/*
 * File: EngineTWT.h
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

#ifndef RTW_HEADER_EngineTWT_h_
#define RTW_HEADER_EngineTWT_h_
#ifndef EngineTWT_COMMON_INCLUDES_
#define EngineTWT_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EngineTWT_COMMON_INCLUDES_ */

#include "EngineTWT_types.h"
#include "rte_get_uint16_val.h"
#include "rte_get_uint32_val.h"
#include "rte_get_uint8_val.h"
#include "rte_set_uint32_val.h"
#include "rte_set_uint8_val.h"

/* Macros for accessing real-time model data structure */

/* Model entry point functions */
extern void EngineTWT_initialize(void);
extern void EngineTWT_terminate(void);

/* Exported entry point function */
extern void EngineTWT_Runable_CY(void);

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
 * '<Root>' : 'EngineTWT'
 * '<S1>'   : 'EngineTWT/Function-Call Subsystem'
 * '<S2>'   : 'EngineTWT/Function-Call Subsystem/Initialize Function'
 * '<S3>'   : 'EngineTWT/Function-Call Subsystem/Subsystem1'
 * '<S4>'   : 'EngineTWT/Function-Call Subsystem/Subsystem8'
 * '<S5>'   : 'EngineTWT/Function-Call Subsystem/Terminate Function'
 * '<S6>'   : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem1'
 * '<S7>'   : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2'
 * '<S8>'   : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem'
 * '<S9>'   : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem1'
 * '<S10>'  : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem/Chart2'
 * '<S11>'  : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem/Subsystem1'
 * '<S12>'  : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem1/Chart1'
 * '<S13>'  : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem1/Subsystem'
 * '<S14>'  : 'EngineTWT/Function-Call Subsystem/Subsystem1/Subsystem2/Subsystem1/Subsystem1'
 * '<S15>'  : 'EngineTWT/Function-Call Subsystem/Subsystem8/Subsystem'
 */
#endif                                 /* RTW_HEADER_EngineTWT_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
