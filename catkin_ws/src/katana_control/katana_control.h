//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: katana_control.h
//
// Code generated for Simulink model 'katana_control'.
//
// Model version                  : 1.39
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Oct  4 19:24:45 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_katana_control_h_
#define RTW_HEADER_katana_control_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "katana_control_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Block signals (default storage)
typedef struct {
  SL_Bus_katana_control_std_msgs_Float64MultiArray In1;// '<S11>/In1'
  SL_Bus_katana_control_std_msgs_Float32MultiArray In1_a;// '<S12>/In1'
  SL_Bus_katana_control_std_msgs_Float64MultiArray BusAssignment1;// '<S3>/Bus Assignment1' 
  SL_Bus_katana_control_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_katana_control_std_msgs_Float32MultiArray b_varargout_2_m;
  SL_Bus_katana_control_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T b_I[36];
  real_T tempR[36];
  real_T T[16];
  real_T Tinv[16];
  real_T a[16];
  real_T b[16];
  real_T a_c[16];
  real_T TJ[16];
  real_T obj[16];
  real_T R[9];
  real_T tempR_k[9];
  real_T dv[9];
  real_T R_c[9];
  real_T tempR_b[9];
  real_T RateTransition1[7];           // '<S3>/Rate Transition1'
  real_T TmpSignalConversionAtSFunct[7];// '<S1>/MATLAB Function1'
  real_T torque[7];                    // '<S1>/MATLAB Function1'
  real_T tau[7];
  real_T q[7];
  real32_T b_varargout_2_Data[14];
  real32_T RateTransition3[14];        // '<S4>/Rate Transition3'
  real_T a0[6];
  real_T y[6];
  real_T X[6];
  real_T b_I_p[6];
  int8_T msubspace_data[36];
  real_T result_data[4];
  int32_T l_data[7];
  real32_T MATLABSystem[7];            // '<S5>/MATLAB System'
  real_T v[3];
  real_T v_c[3];
  char_T cv[17];
  char_T cv1[15];
  char_T cv2[12];
  char_T b_f[9];
  char_T b_g[8];
  char_T b_g1[8];
  char_T b_m[8];
  real_T nb;
  real_T sth;
  real_T a_idx_1;
  real_T a_idx_0;
  real_T tempR_tmp;
  real_T tempR_tmp_n;
  real_T tempR_tmp_p;
  real_T tempR_tmp_l;
  real_T b_j;
  real_T axang_idx_0;
  real_T axang_idx_1;
  real_T axang_idx_2;
  char_T b_d[5];
  char_T b_gu[5];
  char_T b_l[5];
  int32_T i;
  int32_T b_k;
  int32_T m;
  int32_T inner;
  int32_T aoffset;
  int32_T b_kstr;
  int32_T i_d;
  int32_T loop_ub_tmp;
  int32_T c_tmp;
  int32_T obj_tmp;
  int32_T kstr;
  int32_T b_kstr_d;
  int32_T obj_tmp_l;
  int32_T obj_tmp_tmp;
  int32_T kstr_o;
  int32_T b_kstr_b;
  int32_T newNumel;
  int32_T i_n;
  int32_T newNumel_b;
  int32_T i_l;
  int32_T newNumel_h;
  int32_T i_b;
  int32_T kstr_d;
  int32_T b_kstr_e;
  int32_T i_bj;
  int32_T i_j;
  int32_T i_f;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  uint32_T b_varargout_2_Layout_Dim_SL_I_o;
  boolean_T b_varargout_1;
  boolean_T b_bool;
  boolean_T b_bool_n;
  boolean_T b_bool_i;
} B_katana_control_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slmanip_internal_blo_T obj; // '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_1;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_2;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_3;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_4;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_5;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_6;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_7;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_8;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_9;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_10;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_11;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_12;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_13;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_14;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_15;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_16;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_17;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_18;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_19;// '<S5>/MATLAB System'
  r_robotics_manip_internal_Rig_T gobj_20;// '<S5>/MATLAB System'
  ros_slros_internal_block_GetP_T obj_l;// '<S2>/Get Parameter'
  ros_slros_internal_block_GetP_T obj_p;// '<S2>/Get Parameter1'
  ros_slros_internal_block_GetP_T obj_m;// '<S2>/Get Parameter2'
  ros_slros_internal_block_GetP_T obj_f;// '<S2>/Get Parameter3'
  ros_slros_internal_block_GetP_T obj_py;// '<S2>/Get Parameter4'
  ros_slros_internal_block_GetP_T obj_h;// '<S2>/Get Parameter5'
  ros_slros_internal_block_GetP_T obj_pg;// '<S2>/Get Parameter6'
  ros_slros_internal_block_Publ_T obj_lv;// '<S8>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_b;// '<S10>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_a;// '<S9>/SourceBlock'
  real_T RateTransition1_Buffer0[7];   // '<S3>/Rate Transition1'
} DW_katana_control_T;

// Parameters (default storage)
struct P_katana_control_T_ {
  SL_Bus_katana_control_std_msgs_Float32MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                              //  Referenced by: '<S12>/Out1'

  SL_Bus_katana_control_std_msgs_Float32MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                                     //  Referenced by: '<S10>/Constant'

  SL_Bus_katana_control_std_msgs_Float64MultiArray Out1_Y0_o;// Computed Parameter: Out1_Y0_o
                                                                //  Referenced by: '<S11>/Out1'

  SL_Bus_katana_control_std_msgs_Float64MultiArray Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                                      //  Referenced by: '<S9>/Constant'

  SL_Bus_katana_control_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                                      //  Referenced by: '<S7>/Constant'

  real_T RateTransition1_InitialConditio;// Expression: 0
                                            //  Referenced by: '<S3>/Rate Transition1'

  uint32_T Constant_Value_g;           // Computed Parameter: Constant_Value_g
                                          //  Referenced by: '<S3>/Constant'

};

// Real-time Model Data Structure
struct tag_RTM_katana_control_T {
  const char_T *errorStatus;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    struct {
      uint16_T TID[2];
    } TaskCounters;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern P_katana_control_T katana_control_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_katana_control_T katana_control_B;

#ifdef __cplusplus

}
#endif

// Block states (default storage)
extern DW_katana_control_T katana_control_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void katana_control_initialize(void);
  extern void katana_control_step(void);
  extern void katana_control_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_katana_control_T *const katana_control_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S5>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'katana_control'
//  '<S1>'   : 'katana_control/PD+ Control'
//  '<S2>'   : 'katana_control/ROS Params PD'
//  '<S3>'   : 'katana_control/ROS Publishers'
//  '<S4>'   : 'katana_control/ROS Subscribers'
//  '<S5>'   : 'katana_control/PD+ Control/Gravity Torque'
//  '<S6>'   : 'katana_control/PD+ Control/MATLAB Function1'
//  '<S7>'   : 'katana_control/ROS Publishers/Blank Message1'
//  '<S8>'   : 'katana_control/ROS Publishers/Publish1'
//  '<S9>'   : 'katana_control/ROS Subscribers/Subscribe'
//  '<S10>'  : 'katana_control/ROS Subscribers/Subscribe1'
//  '<S11>'  : 'katana_control/ROS Subscribers/Subscribe/Enabled Subsystem'
//  '<S12>'  : 'katana_control/ROS Subscribers/Subscribe1/Enabled Subsystem'

#endif                                 // RTW_HEADER_katana_control_h_

//
// File trailer for generated code.
//
// [EOF]
//
