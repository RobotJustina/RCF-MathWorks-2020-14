//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: smo.h
//
// Code generated for Simulink model 'smo'.
//
// Model version                  : 1.263
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Sat Oct  3 22:54:48 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_smo_h_
#define RTW_HEADER_smo_h_
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#ifndef smo_COMMON_INCLUDES_
# define smo_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#endif                                 // smo_COMMON_INCLUDES_

#include "smo_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rt_defines.h"
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
  SL_Bus_smo_std_msgs_Float64MultiArray In1;// '<S12>/In1'
  SL_Bus_smo_std_msgs_Float64MultiArray In1_k;// '<S11>/In1'
  SL_Bus_smo_std_msgs_Float64MultiArray BusAssignment3;// '<S2>/Bus Assignment3' 
  SL_Bus_smo_std_msgs_Float64MultiArray b_varargout_2;
  SL_Bus_smo_std_msgs_Float64MultiArray b_varargout_2_m;
  SL_Bus_smo_std_msgs_MultiArrayDimension b_varargout_2_Layout_Dim[16];
  real_T MATLABSystem[49];             // '<S17>/MATLAB System'
  real_T b_I[36];
  real_T Xtree[36];
  real_T R[36];
  real_T X[36];
  real_T X_c[36];
  real_T T1[16];
  real_T T2[16];
  real_T R_k[16];
  real_T T[16];
  real_T Tinv[16];
  real_T TJ[16];
  real_T obj[16];
  real_T T_c[16];
  real_T dv[16];
  real_T TJ_b[16];
  real_T obj_p[16];
  real_T c_f1[16];
  real_T a[16];
  real_T b[16];
  real_T a_c[16];
  real_T T_f[16];
  real_T dv1[16];
  real_T TJ_g[16];
  real_T obj_g[16];
  real_T TJ_m[16];
  real_T obj_n[16];
  e_cell_wrap_smo_T expl_temp;
  real_T xp_est[14];                   // '<S15>/Observer'
  real_T R_p[9];
  real_T R_l[9];
  real_T R_j[9];
  real_T R_d[9];
  real_T dv2[9];
  real_T dv3[9];
  real_T dv4[9];
  real_T R_g[9];
  real_T tempR[9];
  real_T R_ld[9];
  real_T tempR_d[9];
  real_T R_dy[9];
  real_T tempR_l[9];
  real_T dv5[9];
  real_T dv6[9];
  real_T R_o[9];
  real_T tempR_b[9];
  real_T R_n[9];
  real_T tempR_bs[9];
  real_T R_ln[9];
  real_T R_h[9];
  real_T z[7];                         // '<S15>/Observer'
  real_T bias[7];
  real_T dv7[7];
  real_T q_data[7];
  real_T q_data_b[7];
  real_T q_data_d[7];
  real_T a0[6];
  real_T y[6];
  real_T vJ[6];
  real_T b_I_e[6];
  real_T b_I_b[6];
  real_T R_jz[6];
  int32_T nonFixedIndices_data[10];
  int32_T ii_data[10];
  real_T result_data[4];
  real_T result_data_f[4];
  real_T result_data_a[4];
  int32_T e_data[7];
  real_T CoordinateTransformationConvers[3];
                               // '<S14>/Coordinate Transformation Conversion1'
  real_T v[3];
  real_T v_j[3];
  real_T v_jz[3];
  real_T v_o[3];
  real_T v_n[3];
  real_T v_i[3];
  real_T v_oy[3];
  char_T b_n[19];
  char_T b_m[14];
  int32_T rtb_MATLABSystem_d_size[3];
  int32_T rtb_MATLABSystem_d_size_c[3];
  int32_T tmp_size[3];
  int32_T rtb_MATLABSystem_d_size_m[3];
  int32_T sy_size[3];
  boolean_T mask[10];
  char_T b_m3[9];
  char_T b_j[9];
  char_T b_h[8];
  char_T b_c[8];
  char_T b_ct[8];
  char_T b_p[8];
  char_T b_p5[8];
  char_T b_a[8];
  real_T GetParameter7_o1;             // '<S1>/Get Parameter7'
  real_T GetParameter8_o1;             // '<S1>/Get Parameter8'
  real_T GetParameter9_o1;             // '<S1>/Get Parameter9'
  real_T t;
  real_T bid1;
  real_T vNum;
  real_T j;
  real_T rtb_MATLABSystem_d_data;
  real_T rtb_MATLABSystem_d_data_e;
  real_T tmp_data;
  real_T rtb_MATLABSystem_d_data_a;
  real_T rtb_LowPassz1_tmp;
  real_T rtb_LowPassz1_tmp_a;
  real_T nb;
  real_T a_idx_1;
  real_T a_idx_0;
  real_T b_idx_0;
  real_T b_idx_1;
  real_T cth;
  real_T sth;
  real_T tempR_tmp;
  real_T tempR_tmp_i;
  real_T tempR_tmp_l;
  real_T tempR_tmp_o;
  real_T tempR_tmp_o2;
  real_T nb_i;
  real_T vNum_f;
  real_T pid;
  real_T temp;
  real_T p_idx_1;
  real_T b_idx_0_i;
  real_T b_idx_1_f;
  real_T tempR_tmp_g;
  real_T tempR_tmp_c;
  real_T tempR_tmp_o3;
  real_T b_l;
  real_T n;
  real_T k;
  real_T sth_m;
  real_T tempR_tmp_m;
  real_T tempR_tmp_cn;
  real_T tempR_tmp_f;
  real_T tempR_tmp_p;
  real_T nb_e;
  real_T vNum_o;
  real_T pid_h;
  real_T temp_l;
  real_T p_idx_1_h;
  real_T b_idx_0_m;
  real_T b_idx_1_m;
  real_T cth_h;
  real_T sth_c;
  SL_Bus_smo_std_msgs_Float64 BusAssignment2;// '<S2>/Bus Assignment2'
  char_T b_k[5];
  char_T b_pc[5];
  char_T b_px[5];
  char_T b_p4[5];
  char_T b_ap[5];
  int32_T n_j;
  int32_T iend;
  int32_T j_e;
  int32_T i;
  int32_T loop_ub;
  int32_T u1;
  int32_T i_o;
  int32_T b_k_b;
  int32_T m;
  int32_T inner;
  int32_T aoffset;
  int32_T c_i;
  int32_T i_a;
  int32_T q_size;
  int32_T unnamed_idx_1;
  int32_T loop_ub_tmp;
  int32_T p_tmp;
  int32_T o_tmp;
  int32_T kstr;
  int32_T b_kstr;
  int32_T obj_tmp;
  int32_T obj_tmp_tmp;
  int32_T kstr_g;
  int32_T b_kstr_e;
  int32_T i_f;
  int32_T i_h;
  int32_T b_i;
  int32_T cb;
  int32_T idx;
  int32_T n_e;
  int32_T aoffset_c;
  int32_T i_ax;
  int32_T b_j_d;
  int32_T c_i_a;
  int32_T nm1d2;
  int32_T m_p;
  int32_T coffset;
  int32_T boffset;
  int32_T q_size_m;
  int32_T unnamed_idx_1_o;
  int32_T pid_tmp;
  int32_T q_size_tmp;
  int32_T kstr_n;
  int32_T b_kstr_l;
  int32_T obj_tmp_p;
  int32_T obj_tmp_tmp_p;
  int32_T d;
  int32_T e;
  int32_T ntilecols;
  int32_T b_jtilecol;
  int32_T b_kstr_f;
  int32_T loop_ub_i;
  int32_T kstr_o;
  int32_T b_kstr_k;
  int32_T c;
  int32_T b_i_i;
  int32_T f;
  int32_T n_o;
  int32_T aoffset_m;
  int32_T i_c;
  int32_T b_j_f;
  int32_T c_i_h;
  int32_T m_m;
  int32_T coffset_a;
  int32_T boffset_k;
  int32_T q_size_p;
  int32_T c_tmp;
  int32_T pid_tmp_b;
  int32_T q_size_tmp_c;
  int32_T X_tmp;
  int32_T i1;
  int32_T i2;
  int32_T X_tmp_n;
  int32_T X_tmp_i;
  int32_T i3;
  int32_T Tinv_tmp;
  int32_T newNumel;
  int32_T i_m;
  int32_T newNumel_j;
  int32_T i_e;
  int32_T newNumel_m;
  int32_T i_m0;
  int32_T i_j;
  int32_T i_fo;
  int32_T i_a5;
  uint32_T b_varargout_2_Data_SL_Info_Curr;
  uint32_T b_varargout_2_Data_SL_Info_Rece;
  uint32_T b_varargout_2_Layout_DataOffset;
  uint32_T b_varargout_2_Layout_Dim_SL_Inf;
  uint32_T b_varargout_2_Layout_Dim_SL_I_n;
  boolean_T b_varargout_1;
  boolean_T b_bool;
  boolean_T b_bool_c;
  boolean_T b_bool_f;
  boolean_T b_bool_p;
  boolean_T b_bool_p2;
  boolean_T b_bool_n;
  boolean_T b_bool_k;
} B_smo_T;

// Block states (default storage) for system '<Root>'
typedef struct {
  robotics_slmanip_internal__a4_T obj; // '<S19>/MATLAB System'
  robotics_slmanip_internal_b_a_T obj_h;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_0;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_1;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_2;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_3;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_4;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_5;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_6;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_7;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_8;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_9;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_10;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_11;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_12;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_13;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_14;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_15;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_16;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_17;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_18;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_19;// '<S19>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_0_h;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_1_p;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_2_e;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_3_d;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_4_m;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_5_n;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_6_c;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_7_a;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_8_j;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_9_b;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_10_j;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_11_g;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_12_f;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_13_a;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_14_m;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_15_j;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_16_f;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_17_a;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_18_i;// '<S17>/MATLAB System'
  j_robotics_manip_internal_R_a_T gobj_19_g;// '<S17>/MATLAB System'
  robotics_slmanip_internal_blo_T obj_o;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_0_h4;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_1_h;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_2_h;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_3_l;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_4_n;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_5_nh;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_6_k;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_7_e;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_8_h;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_9_a;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_10_l;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_11_d;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_12_c;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_13_g;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_14_b;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_15_i;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_16_e;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_17_p;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_18_d;// '<S16>/MATLAB System'
  j_robotics_manip_internal_Rig_T gobj_19_e;// '<S16>/MATLAB System'
  ros_slros_internal_block_GetP_T obj_a;// '<S1>/Get Parameter7'
  ros_slros_internal_block_GetP_T obj_oo;// '<S1>/Get Parameter8'
  ros_slros_internal_block_GetP_T obj_ok;// '<S1>/Get Parameter9'
  ros_slros_internal_block_Publ_T obj_b;// '<S8>/SinkBlock'
  ros_slros_internal_block_Publ_T obj_ap;// '<S7>/SinkBlock'
  ros_slros_internal_block_Subs_T obj_ay;// '<S10>/SourceBlock'
  ros_slros_internal_block_Subs_T obj_m;// '<S9>/SourceBlock'
  real_T RateTransition_Buffer;        // '<S2>/Rate Transition'
} DW_smo_T;

// Continuous states (default storage)
typedef struct {
  real_T Integrator_CSTATE[14];        // '<S15>/Integrator'
  real_T LowPassz1_CSTATE[4];          // '<S13>/Low Pass (z1)'
  real_T LowPassz11_CSTATE[4];         // '<S13>/Low Pass (z1)1'
  real_T LowPassz12_CSTATE[4];         // '<S13>/Low Pass (z1)2'
  real_T LowPassz13_CSTATE[4];         // '<S13>/Low Pass (z1)3'
  real_T LowPassz14_CSTATE[4];         // '<S13>/Low Pass (z1)4'
  real_T LowPassz15_CSTATE[4];         // '<S13>/Low Pass (z1)5'
  real_T LowPassz16_CSTATE[4];         // '<S13>/Low Pass (z1)6'
} X_smo_T;

// State derivatives (default storage)
typedef struct {
  real_T Integrator_CSTATE[14];        // '<S15>/Integrator'
  real_T LowPassz1_CSTATE[4];          // '<S13>/Low Pass (z1)'
  real_T LowPassz11_CSTATE[4];         // '<S13>/Low Pass (z1)1'
  real_T LowPassz12_CSTATE[4];         // '<S13>/Low Pass (z1)2'
  real_T LowPassz13_CSTATE[4];         // '<S13>/Low Pass (z1)3'
  real_T LowPassz14_CSTATE[4];         // '<S13>/Low Pass (z1)4'
  real_T LowPassz15_CSTATE[4];         // '<S13>/Low Pass (z1)5'
  real_T LowPassz16_CSTATE[4];         // '<S13>/Low Pass (z1)6'
} XDot_smo_T;

// State disabled
typedef struct {
  boolean_T Integrator_CSTATE[14];     // '<S15>/Integrator'
  boolean_T LowPassz1_CSTATE[4];       // '<S13>/Low Pass (z1)'
  boolean_T LowPassz11_CSTATE[4];      // '<S13>/Low Pass (z1)1'
  boolean_T LowPassz12_CSTATE[4];      // '<S13>/Low Pass (z1)2'
  boolean_T LowPassz13_CSTATE[4];      // '<S13>/Low Pass (z1)3'
  boolean_T LowPassz14_CSTATE[4];      // '<S13>/Low Pass (z1)4'
  boolean_T LowPassz15_CSTATE[4];      // '<S13>/Low Pass (z1)5'
  boolean_T LowPassz16_CSTATE[4];      // '<S13>/Low Pass (z1)6'
} XDis_smo_T;

#ifndef ODE4_INTG
#define ODE4_INTG

// ODE4 Integration Data
typedef struct {
  real_T *y;                           // output
  real_T *f[4];                        // derivatives
} ODE4_IntgData;

#endif

// Parameters (default storage)
struct P_smo_T_ {
  real_T lowpass_A[5];                 // Variable: lowpass_A
                                          //  Referenced by:
                                          //    '<S13>/Low Pass (z1)'
                                          //    '<S13>/Low Pass (z1)1'
                                          //    '<S13>/Low Pass (z1)2'
                                          //    '<S13>/Low Pass (z1)3'
                                          //    '<S13>/Low Pass (z1)4'
                                          //    '<S13>/Low Pass (z1)5'
                                          //    '<S13>/Low Pass (z1)6'

  real_T lowpass_B[5];                 // Variable: lowpass_B
                                          //  Referenced by:
                                          //    '<S13>/Low Pass (z1)'
                                          //    '<S13>/Low Pass (z1)1'
                                          //    '<S13>/Low Pass (z1)2'
                                          //    '<S13>/Low Pass (z1)3'
                                          //    '<S13>/Low Pass (z1)4'
                                          //    '<S13>/Low Pass (z1)5'
                                          //    '<S13>/Low Pass (z1)6'

  SL_Bus_smo_std_msgs_Float64MultiArray Out1_Y0;// Computed Parameter: Out1_Y0
                                                   //  Referenced by: '<S11>/Out1'

  SL_Bus_smo_std_msgs_Float64MultiArray Constant_Value;// Computed Parameter: Constant_Value
                                                          //  Referenced by: '<S9>/Constant'

  SL_Bus_smo_std_msgs_Float64MultiArray Out1_Y0_k;// Computed Parameter: Out1_Y0_k
                                                     //  Referenced by: '<S12>/Out1'

  SL_Bus_smo_std_msgs_Float64MultiArray Constant_Value_f;// Computed Parameter: Constant_Value_f
                                                            //  Referenced by: '<S10>/Constant'

  SL_Bus_smo_std_msgs_Float64MultiArray Constant_Value_i;// Computed Parameter: Constant_Value_i
                                                            //  Referenced by: '<S6>/Constant'

  SL_Bus_smo_std_msgs_Float64 Constant_Value_k;// Computed Parameter: Constant_Value_k
                                                  //  Referenced by: '<S5>/Constant'

  real_T Constant2_Value[60];          // Expression: zeros(6,10)
                                          //  Referenced by: '<S15>/Constant2'

  real_T Integrator_IC[14];         // Expression: [0 0 0 0 0 0 0 0 0 0 0 0 0 0]
                                       //  Referenced by: '<S15>/Integrator'

  uint32_T Constant1_Value;            // Computed Parameter: Constant1_Value
                                          //  Referenced by: '<S2>/Constant1'

};

// Real-time Model Data Structure
struct tag_RTM_smo_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_smo_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[42];
  real_T odeF[4][42];
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

  extern P_smo_T smo_P;

#ifdef __cplusplus

}
#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C" {

#endif

  extern B_smo_T smo_B;

#ifdef __cplusplus

}
#endif

// Continuous states (default storage)
extern X_smo_T smo_X;

// Block states (default storage)
extern DW_smo_T smo_DW;

#ifdef __cplusplus

extern "C" {

#endif

  // Model entry point functions
  extern void smo_initialize(void);
  extern void smo_step(void);
  extern void smo_terminate(void);

#ifdef __cplusplus

}
#endif

// Real-time Model object
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_smo_T *const smo_M;

#ifdef __cplusplus

}
#endif

//-
//  These blocks were eliminated from the model due to optimizations:
//
//  Block '<S2>/Rate Transition4' : Eliminated since input and output rates are identical
//  Block '<S3>/Rate Transition1' : Eliminated since input and output rates are identical
//  Block '<S3>/Rate Transition2' : Eliminated since input and output rates are identical
//  Block '<S19>/Reshape' : Reshape block reduction


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
//  '<Root>' : 'smo'
//  '<S1>'   : 'smo/ROS Params SMO'
//  '<S2>'   : 'smo/ROS Publishers'
//  '<S3>'   : 'smo/ROS Subscribers'
//  '<S4>'   : 'smo/Subsystem'
//  '<S5>'   : 'smo/ROS Publishers/Blank Message2'
//  '<S6>'   : 'smo/ROS Publishers/Blank Message3'
//  '<S7>'   : 'smo/ROS Publishers/Publish2'
//  '<S8>'   : 'smo/ROS Publishers/Publish3'
//  '<S9>'   : 'smo/ROS Subscribers/Subscribe'
//  '<S10>'  : 'smo/ROS Subscribers/Subscribe1'
//  '<S11>'  : 'smo/ROS Subscribers/Subscribe/Enabled Subsystem'
//  '<S12>'  : 'smo/ROS Subscribers/Subscribe1/Enabled Subsystem'
//  '<S13>'  : 'smo/Subsystem/Low Pass Filter'
//  '<S14>'  : 'smo/Subsystem/Mass Estimator'
//  '<S15>'  : 'smo/Subsystem/SMO'
//  '<S16>'  : 'smo/Subsystem/Mass Estimator/Get Transform'
//  '<S17>'  : 'smo/Subsystem/Mass Estimator/Joint Space Mass Matrix'
//  '<S18>'  : 'smo/Subsystem/Mass Estimator/mass estimator'
//  '<S19>'  : 'smo/Subsystem/SMO/Forward Dynamics'
//  '<S20>'  : 'smo/Subsystem/SMO/Observer'

#endif                                 // RTW_HEADER_smo_h_

//
// File trailer for generated code.
//
// [EOF]
//
