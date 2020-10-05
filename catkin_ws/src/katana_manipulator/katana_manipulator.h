//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: katana_manipulator.h
//
// Code generated for Simulink model 'katana_manipulator'.
//
// Model version                  : 1.45
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Oct  4 20:11:04 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_katana_manipulator_h_
#define RTW_HEADER_katana_manipulator_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "nesl_rtw.h"
#include "katana_manipulator_279f9268_1_gateway.h"
#include "katana_manipulator_types.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_katana_manipulator_std_msgs_Float64MultiArray In1;// '<S7>/In1'
  SL_Bus_katana_manipulator_std_msgs_Float64MultiArray BusAssignment1;// '<S1>/Bus Assignment1' 
  SL_Bus_katana_manipulator_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_katana_manipulator_std_msgs_MultiArrayDimension
    b_varargout_2_Layout_Dim[16];
  real_T dv[46];
  real_T dv1[32];
  real_T dv2[32];
  real_T dv3[32];
  real_T dv4[32];
  real_T dv5[32];
  real_T STATE_1[14];                  // '<S51>/STATE_1'
  real_T b_varargout_2_Data[7];
  NeModelParameters modelParameters;
  NeModelParameters modelParameters_m;
  int_T iv[10];
  int_T iv1[9];
  int_T iv2[9];
  int_T iv3[9];
  int_T iv4[9];
  int_T iv5[9];
  real_T INPUT_8_1_1[4];               // '<S51>/INPUT_8_1_1'
  real_T RateTransition1[7];           // '<Root>/Rate Transition1'
  real_T INPUT_7_1_1[4];               // '<S51>/INPUT_7_1_1'
  real_T INPUT_1_1_1[4];               // '<S51>/INPUT_1_1_1'
  real_T INPUT_2_1_1[4];               // '<S51>/INPUT_2_1_1'
  real_T INPUT_3_1_1[4];               // '<S51>/INPUT_3_1_1'
  real_T INPUT_4_1_1[4];               // '<S51>/INPUT_4_1_1'
  real_T INPUT_5_1_1[4];               // '<S51>/INPUT_5_1_1'
  real_T INPUT_6_1_1[4];               // '<S51>/INPUT_6_1_1'
  real_T OUTPUT_1_0[7];                // '<S51>/OUTPUT_1_0'
  char_T cv[23];
  char_T cv1[17];
  char_T cv2[15];
  real_T RateTransition;               // '<Root>/Rate Transition'
  real_T time;
  real_T time_c;
  real_T time_tmp;
  SL_Bus_katana_manipulator_std_msgs_Float64 In1_c;// '<S8>/In1'
  SL_Bus_katana_manipulator_std_msgs_Float64 b_varargout_2_k;
} B_katana_manipulator_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  ros_slros_internal_block_Publ_T obj; // '<S6>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_d;// '<S3>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_c;// '<S2>/SourceBlock'
  real_T INPUT_8_1_1_Discrete[2];      // '<S51>/INPUT_8_1_1'
  real_T INPUT_7_1_1_Discrete[2];      // '<S51>/INPUT_7_1_1'
  real_T INPUT_1_1_1_Discrete[2];      // '<S51>/INPUT_1_1_1'
  real_T INPUT_2_1_1_Discrete[2];      // '<S51>/INPUT_2_1_1'
  real_T INPUT_3_1_1_Discrete[2];      // '<S51>/INPUT_3_1_1'
  real_T INPUT_4_1_1_Discrete[2];      // '<S51>/INPUT_4_1_1'
  real_T INPUT_5_1_1_Discrete[2];      // '<S51>/INPUT_5_1_1'
  real_T INPUT_6_1_1_Discrete[2];      // '<S51>/INPUT_6_1_1'
  real_T STATE_1_Discrete;             // '<S51>/STATE_1'
  real_T RateTransition_Buffer0;       // '<Root>/Rate Transition'
  real_T RateTransition1_Buffer0[7];   // '<Root>/Rate Transition1'
  real_T OUTPUT_1_0_Discrete;          // '<S51>/OUTPUT_1_0'
  real_T RateTransition2_Buffer[7];    // '<Root>/Rate Transition2'
  void* STATE_1_Simulator;             // '<S51>/STATE_1'
  void* STATE_1_SimData;               // '<S51>/STATE_1'
  void* STATE_1_DiagMgr;               // '<S51>/STATE_1'
  void* STATE_1_ZcLogger;              // '<S51>/STATE_1'
  void* STATE_1_TsIndex;               // '<S51>/STATE_1'
  void* OUTPUT_1_0_Simulator;          // '<S51>/OUTPUT_1_0'
  void* OUTPUT_1_0_SimData;            // '<S51>/OUTPUT_1_0'
  void* OUTPUT_1_0_DiagMgr;            // '<S51>/OUTPUT_1_0'
  void* OUTPUT_1_0_ZcLogger;           // '<S51>/OUTPUT_1_0'
  void* OUTPUT_1_0_TsIndex;            // '<S51>/OUTPUT_1_0'
  int_T STATE_1_Modes;                 // '<S51>/STATE_1'
  int_T OUTPUT_1_0_Modes;              // '<S51>/OUTPUT_1_0'
  boolean_T STATE_1_FirstOutput;       // '<S51>/STATE_1'
  boolean_T OUTPUT_1_0_FirstOutput;    // '<S51>/OUTPUT_1_0'
} DW_katana_manipulator_T;

// Continuous states (default storage)
typedef struct {
  real_T katana_manipulatorSubsystemkata[14];// '<S51>/STATE_1'
} X_katana_manipulator_T;

// State derivatives (default storage)
typedef struct {
  real_T katana_manipulatorSubsystemkata[14];// '<S51>/STATE_1'
} XDot_katana_manipulator_T;

// State disabled
typedef struct {
  boolean_T katana_manipulatorSubsystemkata[14];// '<S51>/STATE_1'
} XDis_katana_manipulator_T;

#ifndef ODE5_INTG
#define ODE5_INTG

// ODE5 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[6];                        // derivatives
} ODE5_IntgData;

#endif

// Parameters (default storage)
struct P_katana_manipulator_T_ {
  SL_Bus_katana_manipulator_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                                  //  Referenced by: '<S7>/Out1'

  SL_Bus_katana_manipulator_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                      //  Referenced by: '<S2>/Constant'

  SL_Bus_katana_manipulator_std_msgs_Float64MultiArray Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                                      //  Referenced by: '<S5>/Constant'

  SL_Bus_katana_manipulator_std_msgs_Float64 Out1_Y0_h;// Computed Parameter: Out1_Y0_h
                                                          //  Referenced by: '<S8>/Out1'

  SL_Bus_katana_manipulator_std_msgs_Float64 Constant_Value_j;// Computed Parameter: Constant_Value_j
                                                                 //  Referenced by: '<S3>/Constant'

  real_T RateTransition_InitialCondition;// Expression: 0
                                            //  Referenced by: '<Root>/Rate Transition'

  real_T RateTransition1_InitialConditio;// Expression: 0
                                            //  Referenced by: '<Root>/Rate Transition1'

  uint32_T Constant_Value_f;           // Computed Parameter: Constant_Value_f
                                          //  Referenced by: '<S1>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_katana_manipulator_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_katana_manipulator_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[14];
  real_T odeF[6][14];
  ODE5_IntgData intgData;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    struct {
      uint16_T TID[4];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_katana_manipulator_T katana_manipulator_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_katana_manipulator_T katana_manipulator_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_katana_manipulator_T katana_manipulator_X;

// Block states (default storage)
extern DW_katana_manipulator_T katana_manipulator_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void katana_manipulator_initialize(void);
  extern void katana_manipulator_step(void);
  extern void katana_manipulator_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_katana_manipulator_T *const katana_manipulator_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S1>/Rate Transition2' : Eliminated since input and output rates are identical


//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'katana_manipulator'
//  '<S1>'   : 'katana_manipulator/ROS Publishers'
//  '<S2>'   : 'katana_manipulator/Subscribe'
//  '<S3>'   : 'katana_manipulator/Subscribe1'
//  '<S4>'   : 'katana_manipulator/Subsystem'
//  '<S5>'   : 'katana_manipulator/ROS Publishers/Blank Message1'
//  '<S6>'   : 'katana_manipulator/ROS Publishers/Publish1'
//  '<S7>'   : 'katana_manipulator/Subscribe/Enabled Subsystem'
//  '<S8>'   : 'katana_manipulator/Subscribe1/Enabled Subsystem'
//  '<S9>'   : 'katana_manipulator/Subsystem/PS-Simulink Converter'
//  '<S10>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter1'
//  '<S11>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter2'
//  '<S12>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter3'
//  '<S13>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter4'
//  '<S14>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter5'
//  '<S15>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter6'
//  '<S16>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter'
//  '<S17>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter1'
//  '<S18>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter2'
//  '<S19>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter3'
//  '<S20>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter4'
//  '<S21>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter5'
//  '<S22>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter6'
//  '<S23>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter7'
//  '<S24>'  : 'katana_manipulator/Subsystem/Solver Configuration'
//  '<S25>'  : 'katana_manipulator/Subsystem/katana_base_frame'
//  '<S26>'  : 'katana_manipulator/Subsystem/katana_base_link'
//  '<S27>'  : 'katana_manipulator/Subsystem/katana_gripper_link'
//  '<S28>'  : 'katana_manipulator/Subsystem/katana_gripper_tool_frame'
//  '<S29>'  : 'katana_manipulator/Subsystem/katana_l_finger_link'
//  '<S30>'  : 'katana_manipulator/Subsystem/katana_motor1_pan_link'
//  '<S31>'  : 'katana_manipulator/Subsystem/katana_motor2_lift_link'
//  '<S32>'  : 'katana_manipulator/Subsystem/katana_motor3_lift_link'
//  '<S33>'  : 'katana_manipulator/Subsystem/katana_motor4_lift_link'
//  '<S34>'  : 'katana_manipulator/Subsystem/katana_motor5_wrist_roll_link'
//  '<S35>'  : 'katana_manipulator/Subsystem/katana_r_finger_link'
//  '<S36>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter/EVAL_KEY'
//  '<S37>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter1/EVAL_KEY'
//  '<S38>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter2/EVAL_KEY'
//  '<S39>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter3/EVAL_KEY'
//  '<S40>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter4/EVAL_KEY'
//  '<S41>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter5/EVAL_KEY'
//  '<S42>'  : 'katana_manipulator/Subsystem/PS-Simulink Converter6/EVAL_KEY'
//  '<S43>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter/EVAL_KEY'
//  '<S44>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter1/EVAL_KEY'
//  '<S45>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter2/EVAL_KEY'
//  '<S46>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter3/EVAL_KEY'
//  '<S47>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter4/EVAL_KEY'
//  '<S48>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter5/EVAL_KEY'
//  '<S49>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter6/EVAL_KEY'
//  '<S50>'  : 'katana_manipulator/Subsystem/Simulink-PS Converter7/EVAL_KEY'
//  '<S51>'  : 'katana_manipulator/Subsystem/Solver Configuration/EVAL_KEY'

#endif                                 // RTW_HEADER_katana_manipulator_h_

//
// File trailer for generated code.
//
// [EOF]
//
