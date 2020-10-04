//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: justina_ekf.h
//
// Code generated for Simulink model 'justina_ekf'.
//
// Model version                  : 1.263
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Oct  4 15:02:54 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_justina_ekf_h_
#define RTW_HEADER_justina_ekf_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "justina_ekf_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

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
  SL_Bus_justina_ekf_std_msgs_Float64MultiArray In1;// '<S12>/In1'
  SL_Bus_justina_ekf_std_msgs_Float64MultiArray In1_k;// '<S11>/In1'
  SL_Bus_justina_ekf_std_msgs_Float64MultiArray BusAssignment3;// '<S3>/Bus Assignment3' 
  SL_Bus_justina_ekf_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_justina_ekf_std_msgs_Float64MultiArray b_varargout_2_m;
  SL_Bus_justina_ekf_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T F[196];
  real_T F_c[196];
  real_T dv[196];
  real_T X[98];
  real_T X_k[98];
  real_T R[49];
  real_T R_tmp[49];
  real_T b_I[36];
  real_T R_c[36];
  real_T X_b[36];
  real_T T[16];
  real_T Tinv[16];
  real_T TJ[16];
  real_T obj[16];
  real_T T_p[16];
  real_T dv1[16];
  real_T TJ_c[16];
  real_T obj_f[16];
  real_T xp[14];                       // '<S1>/EKF'
  real_T Pp[196];                      // '<S1>/EKF'
  real_T R_g[9];
  real_T R_g1[9];
  real_T dv2[9];
  real_T R_m[9];
  real_T tempR[9];
  real_T R_n[9];
  real_T tempR_p[9];
  real_T dv3[9];
  real_T dv4[9];
  real_T R_l[9];
  real_T R_j[9];
  real_T e[7];
  real_T bias[7];
  real_T q_data[7];
  real_T q_data_d[7];
  real_T a0[6];
  real_T y[6];
  real_T X_g[6];
  real_T b_I_l[6];
  int32_T nonFixedIndices_data[10];
  int32_T ii_data[10];
  int8_T msubspace_data[36];
  real_T result_data[4];
  real_T v[3];
  real_T v_d[3];
  char_T cv[22];
  char_T cv1[17];
  char_T cv2[15];
  boolean_T mask[10];
  char_T b[9];
  char_T b_d[9];
  char_T b_l[8];
  char_T b_o[8];
  char_T b_b[8];
  real_T GetParameter7_o1;             // '<S2>/Get Parameter7'
  real_T GetParameter8_o1;             // '<S2>/Get Parameter8'
  real_T vNum;
  real_T k;
  real_T j;
  real_T nb;
  real_T a_idx_1;
  real_T a_idx_0;
  real_T b_idx_0;
  real_T b_idx_1;
  real_T cth;
  real_T sth;
  real_T tempR_tmp;
  real_T tempR_tmp_n;
  real_T tempR_tmp_b;
  real_T tempR_tmp_l;
  real_T tempR_tmp_h;
  real_T nb_b;
  real_T vNum_d;
  real_T pid;
  real_T s;
  real_T p_idx_1;
  real_T b_idx_0_e;
  real_T b_idx_1_b;
  real_T b_j;
  real_T axang_idx_0;
  real_T axang_idx_1;
  real_T axang_idx_2;
  int8_T ipiv[7];
  char_T b_f[5];
  char_T b_a[5];
  char_T b_ju[5];
  char_T b_jz[5];
  int32_T kBcol;
  int32_T jA;
  int32_T c_ix;
  int32_T n;
  int32_T iend;
  int32_T i;
  int32_T loop_ub;
  int32_T u1;
  int32_T b_k;
  int32_T p;
  int32_T m;
  int32_T inner;
  int32_T aoffset;
  int32_T i_o;
  int32_T q_size;
  int32_T unnamed_idx_1;
  int32_T loop_ub_tmp;
  int32_T q_size_tmp;
  int32_T kstr;
  int32_T b_kstr;
  int32_T obj_tmp;
  int32_T obj_tmp_tmp;
  int32_T kstr_n;
  int32_T b_kstr_i;
  int32_T b_i;
  int32_T f;
  int32_T cb;
  int32_T idx;
  int32_T n_o;
  int32_T nm1d2;
  int32_T m_n;
  int32_T coffset;
  int32_T boffset;
  int32_T aoffset_m;
  int32_T loop_ub_c;
  int32_T q_size_m;
  int32_T pid_tmp;
  int32_T X_tmp;
  int32_T coffset_tmp;
  int32_T kstr_m;
  int32_T b_kstr_j;
  int32_T obj_tmp_h;
  int32_T obj_tmp_tmp_c;
  int32_T i_c;
  int32_T i1;
  int32_T X_tmp_p;
  int32_T X_tmp_p5;
  int32_T i2;
  int32_T Tinv_tmp;
  int32_T newNumel;
  int32_T i_a;
  int32_T newNumel_e;
  int32_T i_ax;
  int32_T newNumel_a;
  int32_T i_i;
  int32_T i_l;
  int32_T i_oj;
  int32_T i_o2;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  uint32_T b_varargout_2_Layout_Dim_SL_I_f;
  boolean_T b_varargout_1;
  boolean_T b_bool;
  boolean_T b_bool_g;
  boolean_T b_bool_c;
  boolean_T b_bool_o;
  boolean_T b_bool_l;
} B_justina_ekf_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slmanip_internal_blo_T obj; // '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_1;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_2;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_3;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_4;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_5;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_6;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_7;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_8;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_9;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_10;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_11;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_12;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_13;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_14;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_15;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_16;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_17;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_18;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_19;// '<S6>/MATLAB System'
  o_robotics_manip_internal_Rig_T gobj_20;// '<S6>/MATLAB System'
  ros_slros_internal_block_GetP_T obj_a;// '<S2>/Get Parameter7'
  ros_slros_internal_block_GetP_T obj_o;// '<S2>/Get Parameter8'
  ros_slros_internal_block_Publ_T obj_b;// '<S8>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_ay;// '<S10>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_m;// '<S9>/SourceBlock'
} DW_justina_ekf_T;

// Continuous states (default storage)
typedef struct {
  real_T Integrator1_CSTATE[196];      // '<S1>/Integrator1'
  real_T Integrator_CSTATE[14];        // '<S1>/Integrator'
} X_justina_ekf_T;

// State derivatives (default storage)
typedef struct {
  real_T Integrator1_CSTATE[196];      // '<S1>/Integrator1'
  real_T Integrator_CSTATE[14];        // '<S1>/Integrator'
} XDot_justina_ekf_T;

// State disabled
typedef struct {
  boolean_T Integrator1_CSTATE[196];   // '<S1>/Integrator1'
  boolean_T Integrator_CSTATE[14];     // '<S1>/Integrator'
} XDis_justina_ekf_T;

#ifndef ODE4_INTG
#define ODE4_INTG

// ODE4 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[4];                        // derivatives
} ODE4_IntgData;

#endif

// Parameters (default storage)
struct P_justina_ekf_T_ {
  SL_Bus_justina_ekf_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                           //  Referenced by: '<S11>/Out1'

  SL_Bus_justina_ekf_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                  //  Referenced by: '<S9>/Constant'

  SL_Bus_justina_ekf_std_msgs_Float64MultiArray Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                             //  Referenced by: '<S12>/Out1'

  SL_Bus_justina_ekf_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                    //  Referenced by: '<S10>/Constant'

  SL_Bus_justina_ekf_std_msgs_Float64MultiArray Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                    //  Referenced by: '<S7>/Constant'

  real_T Integrator1_IC[196];          // Expression: eye(14)*0.001
                                          //  Referenced by: '<S1>/Integrator1'

  real_T Integrator_IC;                // Expression: 0
                                          //  Referenced by: '<S1>/Integrator'

  real_T Constant2_Value[60];          // Expression: zeros(6,10)
                                          //  Referenced by: '<S1>/Constant2'

  real_T delta_t_Value;                // Expression: 0.004
                                          //  Referenced by: '<S1>/delta_t'

  uint32_T Constant1_Value;            // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S3>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_justina_ekf_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_justina_ekf_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[210];
  real_T odeF[4][210];
  ODE4_IntgData intgData;

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
      uint16_T TID[3];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[3];
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_justina_ekf_T justina_ekf_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_justina_ekf_T justina_ekf_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_justina_ekf_T justina_ekf_X;

// Block states (default storage)
extern DW_justina_ekf_T justina_ekf_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void justina_ekf_initialize(void);
  extern void justina_ekf_step(void);
  extern void justina_ekf_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_justina_ekf_T *const justina_ekf_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S6>/Reshape' : Reshape block reduction
//  Block '<S3>/Rate Transition4' : Eliminated since input and output rates are identical
//  Block '<S4>/Rate Transition1' : Eliminated since input and output rates are identical
//  Block '<S4>/Rate Transition2' : Eliminated since input and output rates are identical


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
//  '<Root>' : 'justina_ekf'
//  '<S1>'   : 'justina_ekf/EKF'
//  '<S2>'   : 'justina_ekf/ROS Params SMO'
//  '<S3>'   : 'justina_ekf/ROS Publishers'
//  '<S4>'   : 'justina_ekf/ROS Subscribers'
//  '<S5>'   : 'justina_ekf/EKF/EKF'
//  '<S6>'   : 'justina_ekf/EKF/NominalModel'
//  '<S7>'   : 'justina_ekf/ROS Publishers/Blank Message3'
//  '<S8>'   : 'justina_ekf/ROS Publishers/Publish3'
//  '<S9>'   : 'justina_ekf/ROS Subscribers/Subscribe'
//  '<S10>'  : 'justina_ekf/ROS Subscribers/Subscribe1'
//  '<S11>'  : 'justina_ekf/ROS Subscribers/Subscribe/Enabled Subsystem'
//  '<S12>'  : 'justina_ekf/ROS Subscribers/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_justina_ekf_h_

//
// File trailer for generated code.
//
// [EOF]
//
