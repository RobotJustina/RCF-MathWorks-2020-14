//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: justina_ekf.cpp
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
#include "justina_ekf.h"
#include "justina_ekf_private.h"

// Block signals (default storage)
B_justina_ekf_T justina_ekf_B;

// Continuous states
X_justina_ekf_T justina_ekf_X;

// Block states (default storage)
DW_justina_ekf_T justina_ekf_DW;

// Real-time model
RT_MODEL_justina_ekf_T justina_ekf_M_ = RT_MODEL_justina_ekf_T();
RT_MODEL_justina_ekf_T *const justina_ekf_M = &justina_ekf_M_;

// Forward declaration for local functions
static void justina_ekf_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void justina_ekf_SystemCore_step_p(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void justina_ekf_emxInit_real_T(emxArray_real_T_justina_ekf_T **pEmxArray,
  int32_T numDimensions);
static void justin_emxEnsureCapacity_real_T(emxArray_real_T_justina_ekf_T
  *emxArray, int32_T oldNumel);
static void justina_ekf_emxInit_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray, int32_T numDimensions);
static void j_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  *emxArray, int32_T oldNumel);
static void ju_rigidBodyJoint_get_JointAxis(const c_rigidBodyJoint_justina_ekf_T
  *obj, real_T ax[3]);
static void justina_ekf_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyT_p(const c_rigidBodyJoint_justina_ekf_T
  *obj, const real_T q_data[], const int32_T *q_size, real_T T[16]);
static void rigidBodyJoint_transformBodyToP(const c_rigidBodyJoint_justina_ekf_T
  *obj, real_T T[16]);
static void justina_ekf_tforminv(const real_T T[16], real_T Tinv[16]);
static void justina_ekf_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void justina_ekf_emxInit_char_T(emxArray_char_T_justina_ekf_T **pEmxArray,
  int32_T numDimensions);
static void justin_emxEnsureCapacity_char_T(emxArray_char_T_justina_ekf_T
  *emxArray, int32_T oldNumel);
static void justina_ekf_emxFree_char_T(emxArray_char_T_justina_ekf_T **pEmxArray);
static void justina_ekf_emxFree_real_T(emxArray_real_T_justina_ekf_T **pEmxArray);
static void justina_ekf_emxFree_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray);
static void RigidBodyTreeDynamics_massMatri(q_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], emxArray_real_T_justina_ekf_T *H,
  emxArray_real_T_justina_ekf_T *lambda);
static void RigidBodyTreeDynamics_inverseDy(q_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], const real_T qdot[7], const real_T fext[60], real_T
  tau[7]);
static void matlabCodegenHandle_matlabC_pxd(ros_slros_internal_block_Subs_T *obj);
static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_ekf_T
  *pStruct);
static void emxFreeStruct_p_robotics_manip_(p_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_q_robotics_manip_(q_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_o_robotics_manip_(o_robotics_manip_internal_Rig_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabCo_px(ros_slros_internal_block_Publ_T *obj);
static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_ekf_T
  *pStruct);
static void emxInitStruct_p_robotics_manip_(p_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_q_robotics_manip_(q_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_o_robotics_manip_(o_robotics_manip_internal_Rig_T
  *pStruct);
static o_robotics_manip_internal_Rig_T *justina_ekf_RigidBody_RigidBody
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina_e_RigidBody_RigidBody_p
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina__RigidBody_RigidBody_px
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina_RigidBody_RigidBody_pxd
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justin_RigidBody_RigidBody_pxdx
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justi_RigidBody_RigidBody_pxdxu
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *just_RigidBody_RigidBody_pxdxu3
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *jus_RigidBody_RigidBody_pxdxu33
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *ju_RigidBody_RigidBody_pxdxu333
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *j_RigidBody_RigidBody_pxdxu3331
  (o_robotics_manip_internal_Rig_T *obj);
static p_robotics_manip_internal_Rig_T *RigidBody_RigidBody_pxdxu3331d
  (p_robotics_manip_internal_Rig_T *obj);
static q_robotics_manip_internal_Rig_T *jus_RigidBodyTree_RigidBodyTree
  (q_robotics_manip_internal_Rig_T *obj, o_robotics_manip_internal_Rig_T *iobj_0,
   o_robotics_manip_internal_Rig_T *iobj_1, o_robotics_manip_internal_Rig_T
   *iobj_2, o_robotics_manip_internal_Rig_T *iobj_3,
   o_robotics_manip_internal_Rig_T *iobj_4, o_robotics_manip_internal_Rig_T
   *iobj_5, o_robotics_manip_internal_Rig_T *iobj_6,
   o_robotics_manip_internal_Rig_T *iobj_7, o_robotics_manip_internal_Rig_T
   *iobj_8, o_robotics_manip_internal_Rig_T *iobj_9);
static void rate_scheduler(void);

//
//   This function updates active task flag for each subrate.
// The function is called at model base rate, hence the
// generated code self-manages all its subrates.
//
static void rate_scheduler(void)
{
  // Compute which subrates run during the next base time step.  Subrates
  //  are an integer multiple of the base rate counter.  Therefore, the subtask
  //  counter is reset when it reaches its limit (zero means run).

  (justina_ekf_M->Timing.TaskCounters.TID[2])++;
  if ((justina_ekf_M->Timing.TaskCounters.TID[2]) > 249) {// Sample time: [1.0s, 0.0s] 
    justina_ekf_M->Timing.TaskCounters.TID[2] = 0;
  }
}

//
// This function updates continuous states using the ODE4 fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE4_IntgData *id = static_cast<ODE4_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T temp;
  int_T i;
  int_T nXc = 210;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  justina_ekf_derivatives();

  // f1 = f(t + (h/2), y + (h/2)*f0)
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  justina_ekf_step();
  justina_ekf_derivatives();

  // f2 = f(t + (h/2), y + (h/2)*f1)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  justina_ekf_step();
  justina_ekf_derivatives();

  // f3 = f(t + h, y + h*f2)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  justina_ekf_step();
  justina_ekf_derivatives();

  // tnew = t + h
  // ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3)
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void justina_ekf_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_justina_ekf_299.getLatestMessage
    (&justina_ekf_B.b_varargout_2_m);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = justina_ekf_B.b_varargout_2_m.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_ekf_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_ekf_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    justina_ekf_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &justina_ekf_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_justina_ekf_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_ekf_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_ekf_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void justina_ekf_SystemCore_step_p(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_justina_ekf_638.getLatestMessage
    (&justina_ekf_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = justina_ekf_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_ekf_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_ekf_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = justina_ekf_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &justina_ekf_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_justina_ekf_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_ekf_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_ekf_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void justina_ekf_emxInit_real_T(emxArray_real_T_justina_ekf_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_justina_ekf_T *emxArray;
  *pEmxArray = (emxArray_real_T_justina_ekf_T *)malloc(sizeof
    (emxArray_real_T_justina_ekf_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_ekf_B.i_oj = 0; justina_ekf_B.i_oj < numDimensions;
       justina_ekf_B.i_oj++) {
    emxArray->size[justina_ekf_B.i_oj] = 0;
  }
}

static void justin_emxEnsureCapacity_real_T(emxArray_real_T_justina_ekf_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_ekf_B.newNumel = 1;
  for (justina_ekf_B.i_a = 0; justina_ekf_B.i_a < emxArray->numDimensions;
       justina_ekf_B.i_a++) {
    justina_ekf_B.newNumel *= emxArray->size[justina_ekf_B.i_a];
  }

  if (justina_ekf_B.newNumel > emxArray->allocatedSize) {
    justina_ekf_B.i_a = emxArray->allocatedSize;
    if (justina_ekf_B.i_a < 16) {
      justina_ekf_B.i_a = 16;
    }

    while (justina_ekf_B.i_a < justina_ekf_B.newNumel) {
      if (justina_ekf_B.i_a > 1073741823) {
        justina_ekf_B.i_a = MAX_int32_T;
      } else {
        justina_ekf_B.i_a <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_ekf_B.i_a), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = justina_ekf_B.i_a;
    emxArray->canFreeData = true;
  }
}

static void justina_ekf_emxInit_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_justina__T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_justina__T *)malloc(sizeof
    (emxArray_f_cell_wrap_justina__T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_justina_ekf_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_ekf_B.i_o2 = 0; justina_ekf_B.i_o2 < numDimensions;
       justina_ekf_B.i_o2++) {
    emxArray->size[justina_ekf_B.i_o2] = 0;
  }
}

static void j_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_ekf_B.newNumel_a = 1;
  for (justina_ekf_B.i_i = 0; justina_ekf_B.i_i < emxArray->numDimensions;
       justina_ekf_B.i_i++) {
    justina_ekf_B.newNumel_a *= emxArray->size[justina_ekf_B.i_i];
  }

  if (justina_ekf_B.newNumel_a > emxArray->allocatedSize) {
    justina_ekf_B.i_i = emxArray->allocatedSize;
    if (justina_ekf_B.i_i < 16) {
      justina_ekf_B.i_i = 16;
    }

    while (justina_ekf_B.i_i < justina_ekf_B.newNumel_a) {
      if (justina_ekf_B.i_i > 1073741823) {
        justina_ekf_B.i_i = MAX_int32_T;
      } else {
        justina_ekf_B.i_i <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_ekf_B.i_i), sizeof
                     (f_cell_wrap_justina_ekf_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_justina_ekf_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_justina_ekf_T *)newData;
    emxArray->allocatedSize = justina_ekf_B.i_i;
    emxArray->canFreeData = true;
  }
}

static void ju_rigidBodyJoint_get_JointAxis(const c_rigidBodyJoint_justina_ekf_T
  *obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (justina_ekf_B.b_kstr_i = 0; justina_ekf_B.b_kstr_i < 8;
       justina_ekf_B.b_kstr_i++) {
    justina_ekf_B.b_o[justina_ekf_B.b_kstr_i] = tmp[justina_ekf_B.b_kstr_i];
  }

  justina_ekf_B.b_bool_c = false;
  if (obj->Type->size[1] == 8) {
    justina_ekf_B.b_kstr_i = 1;
    do {
      exitg1 = 0;
      if (justina_ekf_B.b_kstr_i - 1 < 8) {
        justina_ekf_B.kstr_n = justina_ekf_B.b_kstr_i - 1;
        if (obj->Type->data[justina_ekf_B.kstr_n] !=
            justina_ekf_B.b_o[justina_ekf_B.kstr_n]) {
          exitg1 = 1;
        } else {
          justina_ekf_B.b_kstr_i++;
        }
      } else {
        justina_ekf_B.b_bool_c = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (justina_ekf_B.b_bool_c) {
    guard1 = true;
  } else {
    for (justina_ekf_B.b_kstr_i = 0; justina_ekf_B.b_kstr_i < 9;
         justina_ekf_B.b_kstr_i++) {
      justina_ekf_B.b[justina_ekf_B.b_kstr_i] = tmp_0[justina_ekf_B.b_kstr_i];
    }

    justina_ekf_B.b_bool_c = false;
    if (obj->Type->size[1] == 9) {
      justina_ekf_B.b_kstr_i = 1;
      do {
        exitg1 = 0;
        if (justina_ekf_B.b_kstr_i - 1 < 9) {
          justina_ekf_B.kstr_n = justina_ekf_B.b_kstr_i - 1;
          if (obj->Type->data[justina_ekf_B.kstr_n] !=
              justina_ekf_B.b[justina_ekf_B.kstr_n]) {
            exitg1 = 1;
          } else {
            justina_ekf_B.b_kstr_i++;
          }
        } else {
          justina_ekf_B.b_bool_c = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_ekf_B.b_bool_c) {
      guard1 = true;
    } else {
      ax[0] = (rtNaN);
      ax[1] = (rtNaN);
      ax[2] = (rtNaN);
    }
  }

  if (guard1) {
    ax[0] = obj->JointAxisInternal[0];
    ax[1] = obj->JointAxisInternal[1];
    ax[2] = obj->JointAxisInternal[2];
  }
}

static void justina_ekf_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9])
{
  y[0] = varargin_1;
  y[1] = varargin_2;
  y[2] = varargin_3;
  y[3] = varargin_4;
  y[4] = varargin_5;
  y[5] = varargin_6;
  y[6] = varargin_7;
  y[7] = varargin_8;
  y[8] = varargin_9;
}

static void rigidBodyJoint_transformBodyT_p(const c_rigidBodyJoint_justina_ekf_T
  *obj, const real_T q_data[], const int32_T *q_size, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (justina_ekf_B.b_kstr = 0; justina_ekf_B.b_kstr < 5; justina_ekf_B.b_kstr
       ++) {
    justina_ekf_B.b_a[justina_ekf_B.b_kstr] = tmp[justina_ekf_B.b_kstr];
  }

  justina_ekf_B.b_bool_g = false;
  if (obj->Type->size[1] == 5) {
    justina_ekf_B.b_kstr = 1;
    do {
      exitg1 = 0;
      if (justina_ekf_B.b_kstr - 1 < 5) {
        justina_ekf_B.kstr = justina_ekf_B.b_kstr - 1;
        if (obj->Type->data[justina_ekf_B.kstr] !=
            justina_ekf_B.b_a[justina_ekf_B.kstr]) {
          exitg1 = 1;
        } else {
          justina_ekf_B.b_kstr++;
        }
      } else {
        justina_ekf_B.b_bool_g = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (justina_ekf_B.b_bool_g) {
    justina_ekf_B.b_kstr = 0;
  } else {
    for (justina_ekf_B.b_kstr = 0; justina_ekf_B.b_kstr < 8;
         justina_ekf_B.b_kstr++) {
      justina_ekf_B.b_l[justina_ekf_B.b_kstr] = tmp_0[justina_ekf_B.b_kstr];
    }

    justina_ekf_B.b_bool_g = false;
    if (obj->Type->size[1] == 8) {
      justina_ekf_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (justina_ekf_B.b_kstr - 1 < 8) {
          justina_ekf_B.kstr = justina_ekf_B.b_kstr - 1;
          if (obj->Type->data[justina_ekf_B.kstr] !=
              justina_ekf_B.b_l[justina_ekf_B.kstr]) {
            exitg1 = 1;
          } else {
            justina_ekf_B.b_kstr++;
          }
        } else {
          justina_ekf_B.b_bool_g = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_ekf_B.b_bool_g) {
      justina_ekf_B.b_kstr = 1;
    } else {
      justina_ekf_B.b_kstr = -1;
    }
  }

  switch (justina_ekf_B.b_kstr) {
   case 0:
    memset(&justina_ekf_B.TJ[0], 0, sizeof(real_T) << 4U);
    justina_ekf_B.TJ[0] = 1.0;
    justina_ekf_B.TJ[5] = 1.0;
    justina_ekf_B.TJ[10] = 1.0;
    justina_ekf_B.TJ[15] = 1.0;
    break;

   case 1:
    ju_rigidBodyJoint_get_JointAxis(obj, justina_ekf_B.v);
    justina_ekf_B.result_data[0] = justina_ekf_B.v[0];
    justina_ekf_B.result_data[1] = justina_ekf_B.v[1];
    justina_ekf_B.result_data[2] = justina_ekf_B.v[2];
    if (0 <= (*q_size != 0) - 1) {
      justina_ekf_B.result_data[3] = q_data[0];
    }

    justina_ekf_B.cth = 1.0 / sqrt((justina_ekf_B.result_data[0] *
      justina_ekf_B.result_data[0] + justina_ekf_B.result_data[1] *
      justina_ekf_B.result_data[1]) + justina_ekf_B.result_data[2] *
      justina_ekf_B.result_data[2]);
    justina_ekf_B.v[0] = justina_ekf_B.result_data[0] * justina_ekf_B.cth;
    justina_ekf_B.v[1] = justina_ekf_B.result_data[1] * justina_ekf_B.cth;
    justina_ekf_B.v[2] = justina_ekf_B.result_data[2] * justina_ekf_B.cth;
    justina_ekf_B.cth = cos(justina_ekf_B.result_data[3]);
    justina_ekf_B.sth = sin(justina_ekf_B.result_data[3]);
    justina_ekf_B.tempR_tmp = justina_ekf_B.v[1] * justina_ekf_B.v[0] * (1.0 -
      justina_ekf_B.cth);
    justina_ekf_B.tempR_tmp_n = justina_ekf_B.v[2] * justina_ekf_B.sth;
    justina_ekf_B.tempR_tmp_b = justina_ekf_B.v[2] * justina_ekf_B.v[0] * (1.0 -
      justina_ekf_B.cth);
    justina_ekf_B.tempR_tmp_l = justina_ekf_B.v[1] * justina_ekf_B.sth;
    justina_ekf_B.tempR_tmp_h = justina_ekf_B.v[2] * justina_ekf_B.v[1] * (1.0 -
      justina_ekf_B.cth);
    justina_ekf_B.sth *= justina_ekf_B.v[0];
    justina_ekf_cat(justina_ekf_B.v[0] * justina_ekf_B.v[0] * (1.0 -
      justina_ekf_B.cth) + justina_ekf_B.cth, justina_ekf_B.tempR_tmp -
                    justina_ekf_B.tempR_tmp_n, justina_ekf_B.tempR_tmp_b +
                    justina_ekf_B.tempR_tmp_l, justina_ekf_B.tempR_tmp +
                    justina_ekf_B.tempR_tmp_n, justina_ekf_B.v[1] *
                    justina_ekf_B.v[1] * (1.0 - justina_ekf_B.cth) +
                    justina_ekf_B.cth, justina_ekf_B.tempR_tmp_h -
                    justina_ekf_B.sth, justina_ekf_B.tempR_tmp_b -
                    justina_ekf_B.tempR_tmp_l, justina_ekf_B.tempR_tmp_h +
                    justina_ekf_B.sth, justina_ekf_B.v[2] * justina_ekf_B.v[2] *
                    (1.0 - justina_ekf_B.cth) + justina_ekf_B.cth,
                    justina_ekf_B.tempR);
    for (justina_ekf_B.b_kstr = 0; justina_ekf_B.b_kstr < 3;
         justina_ekf_B.b_kstr++) {
      justina_ekf_B.kstr = justina_ekf_B.b_kstr + 1;
      justina_ekf_B.R_m[justina_ekf_B.kstr - 1] = justina_ekf_B.tempR
        [(justina_ekf_B.kstr - 1) * 3];
      justina_ekf_B.kstr = justina_ekf_B.b_kstr + 1;
      justina_ekf_B.R_m[justina_ekf_B.kstr + 2] = justina_ekf_B.tempR
        [(justina_ekf_B.kstr - 1) * 3 + 1];
      justina_ekf_B.kstr = justina_ekf_B.b_kstr + 1;
      justina_ekf_B.R_m[justina_ekf_B.kstr + 5] = justina_ekf_B.tempR
        [(justina_ekf_B.kstr - 1) * 3 + 2];
    }

    memset(&justina_ekf_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (justina_ekf_B.b_kstr = 0; justina_ekf_B.b_kstr < 3;
         justina_ekf_B.b_kstr++) {
      justina_ekf_B.kstr = justina_ekf_B.b_kstr << 2;
      justina_ekf_B.TJ[justina_ekf_B.kstr] = justina_ekf_B.R_m[3 *
        justina_ekf_B.b_kstr];
      justina_ekf_B.TJ[justina_ekf_B.kstr + 1] = justina_ekf_B.R_m[3 *
        justina_ekf_B.b_kstr + 1];
      justina_ekf_B.TJ[justina_ekf_B.kstr + 2] = justina_ekf_B.R_m[3 *
        justina_ekf_B.b_kstr + 2];
    }

    justina_ekf_B.TJ[15] = 1.0;
    break;

   default:
    ju_rigidBodyJoint_get_JointAxis(obj, justina_ekf_B.v);
    memset(&justina_ekf_B.tempR[0], 0, 9U * sizeof(real_T));
    justina_ekf_B.tempR[0] = 1.0;
    justina_ekf_B.tempR[4] = 1.0;
    justina_ekf_B.tempR[8] = 1.0;
    for (justina_ekf_B.b_kstr = 0; justina_ekf_B.b_kstr < 3;
         justina_ekf_B.b_kstr++) {
      justina_ekf_B.kstr = justina_ekf_B.b_kstr << 2;
      justina_ekf_B.TJ[justina_ekf_B.kstr] = justina_ekf_B.tempR[3 *
        justina_ekf_B.b_kstr];
      justina_ekf_B.TJ[justina_ekf_B.kstr + 1] = justina_ekf_B.tempR[3 *
        justina_ekf_B.b_kstr + 1];
      justina_ekf_B.TJ[justina_ekf_B.kstr + 2] = justina_ekf_B.tempR[3 *
        justina_ekf_B.b_kstr + 2];
      justina_ekf_B.TJ[justina_ekf_B.b_kstr + 12] =
        justina_ekf_B.v[justina_ekf_B.b_kstr] * q_data[0];
    }

    justina_ekf_B.TJ[3] = 0.0;
    justina_ekf_B.TJ[7] = 0.0;
    justina_ekf_B.TJ[11] = 0.0;
    justina_ekf_B.TJ[15] = 1.0;
    break;
  }

  for (justina_ekf_B.b_kstr = 0; justina_ekf_B.b_kstr < 4; justina_ekf_B.b_kstr
       ++) {
    for (justina_ekf_B.kstr = 0; justina_ekf_B.kstr < 4; justina_ekf_B.kstr++) {
      justina_ekf_B.obj_tmp_tmp = justina_ekf_B.kstr << 2;
      justina_ekf_B.obj_tmp = justina_ekf_B.b_kstr + justina_ekf_B.obj_tmp_tmp;
      justina_ekf_B.obj[justina_ekf_B.obj_tmp] = 0.0;
      justina_ekf_B.obj[justina_ekf_B.obj_tmp] +=
        justina_ekf_B.TJ[justina_ekf_B.obj_tmp_tmp] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr];
      justina_ekf_B.obj[justina_ekf_B.obj_tmp] +=
        justina_ekf_B.TJ[justina_ekf_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr + 4];
      justina_ekf_B.obj[justina_ekf_B.obj_tmp] +=
        justina_ekf_B.TJ[justina_ekf_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr + 8];
      justina_ekf_B.obj[justina_ekf_B.obj_tmp] +=
        justina_ekf_B.TJ[justina_ekf_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr + 12];
    }

    for (justina_ekf_B.kstr = 0; justina_ekf_B.kstr < 4; justina_ekf_B.kstr++) {
      justina_ekf_B.obj_tmp_tmp = justina_ekf_B.kstr << 2;
      justina_ekf_B.obj_tmp = justina_ekf_B.b_kstr + justina_ekf_B.obj_tmp_tmp;
      T[justina_ekf_B.obj_tmp] = 0.0;
      T[justina_ekf_B.obj_tmp] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp] *
        justina_ekf_B.obj[justina_ekf_B.b_kstr];
      T[justina_ekf_B.obj_tmp] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp + 1] *
        justina_ekf_B.obj[justina_ekf_B.b_kstr + 4];
      T[justina_ekf_B.obj_tmp] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp + 2] *
        justina_ekf_B.obj[justina_ekf_B.b_kstr + 8];
      T[justina_ekf_B.obj_tmp] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp + 3] *
        justina_ekf_B.obj[justina_ekf_B.b_kstr + 12];
    }
  }
}

static void rigidBodyJoint_transformBodyToP(const c_rigidBodyJoint_justina_ekf_T
  *obj, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (justina_ekf_B.b_kstr_j = 0; justina_ekf_B.b_kstr_j < 5;
       justina_ekf_B.b_kstr_j++) {
    justina_ekf_B.b_jz[justina_ekf_B.b_kstr_j] = tmp[justina_ekf_B.b_kstr_j];
  }

  justina_ekf_B.b_bool_l = false;
  if (obj->Type->size[1] == 5) {
    justina_ekf_B.b_kstr_j = 1;
    do {
      exitg1 = 0;
      if (justina_ekf_B.b_kstr_j - 1 < 5) {
        justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j - 1;
        if (obj->Type->data[justina_ekf_B.kstr_m] !=
            justina_ekf_B.b_jz[justina_ekf_B.kstr_m]) {
          exitg1 = 1;
        } else {
          justina_ekf_B.b_kstr_j++;
        }
      } else {
        justina_ekf_B.b_bool_l = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (justina_ekf_B.b_bool_l) {
    justina_ekf_B.b_kstr_j = 0;
  } else {
    for (justina_ekf_B.b_kstr_j = 0; justina_ekf_B.b_kstr_j < 8;
         justina_ekf_B.b_kstr_j++) {
      justina_ekf_B.b_b[justina_ekf_B.b_kstr_j] = tmp_0[justina_ekf_B.b_kstr_j];
    }

    justina_ekf_B.b_bool_l = false;
    if (obj->Type->size[1] == 8) {
      justina_ekf_B.b_kstr_j = 1;
      do {
        exitg1 = 0;
        if (justina_ekf_B.b_kstr_j - 1 < 8) {
          justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j - 1;
          if (obj->Type->data[justina_ekf_B.kstr_m] !=
              justina_ekf_B.b_b[justina_ekf_B.kstr_m]) {
            exitg1 = 1;
          } else {
            justina_ekf_B.b_kstr_j++;
          }
        } else {
          justina_ekf_B.b_bool_l = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_ekf_B.b_bool_l) {
      justina_ekf_B.b_kstr_j = 1;
    } else {
      justina_ekf_B.b_kstr_j = -1;
    }
  }

  switch (justina_ekf_B.b_kstr_j) {
   case 0:
    memset(&justina_ekf_B.TJ_c[0], 0, sizeof(real_T) << 4U);
    justina_ekf_B.TJ_c[0] = 1.0;
    justina_ekf_B.TJ_c[5] = 1.0;
    justina_ekf_B.TJ_c[10] = 1.0;
    justina_ekf_B.TJ_c[15] = 1.0;
    break;

   case 1:
    ju_rigidBodyJoint_get_JointAxis(obj, justina_ekf_B.v_d);
    justina_ekf_B.axang_idx_0 = justina_ekf_B.v_d[0];
    justina_ekf_B.axang_idx_1 = justina_ekf_B.v_d[1];
    justina_ekf_B.axang_idx_2 = justina_ekf_B.v_d[2];
    justina_ekf_B.b_j = 1.0 / sqrt((justina_ekf_B.axang_idx_0 *
      justina_ekf_B.axang_idx_0 + justina_ekf_B.axang_idx_1 *
      justina_ekf_B.axang_idx_1) + justina_ekf_B.axang_idx_2 *
      justina_ekf_B.axang_idx_2);
    justina_ekf_B.v_d[0] = justina_ekf_B.axang_idx_0 * justina_ekf_B.b_j;
    justina_ekf_B.v_d[1] = justina_ekf_B.axang_idx_1 * justina_ekf_B.b_j;
    justina_ekf_B.v_d[2] = justina_ekf_B.axang_idx_2 * justina_ekf_B.b_j;
    justina_ekf_B.axang_idx_0 = justina_ekf_B.v_d[1] * justina_ekf_B.v_d[0] *
      0.0;
    justina_ekf_B.axang_idx_1 = justina_ekf_B.v_d[2] * justina_ekf_B.v_d[0] *
      0.0;
    justina_ekf_B.axang_idx_2 = justina_ekf_B.v_d[2] * justina_ekf_B.v_d[1] *
      0.0;
    justina_ekf_cat(justina_ekf_B.v_d[0] * justina_ekf_B.v_d[0] * 0.0 + 1.0,
                    justina_ekf_B.axang_idx_0 - justina_ekf_B.v_d[2] * 0.0,
                    justina_ekf_B.axang_idx_1 + justina_ekf_B.v_d[1] * 0.0,
                    justina_ekf_B.axang_idx_0 + justina_ekf_B.v_d[2] * 0.0,
                    justina_ekf_B.v_d[1] * justina_ekf_B.v_d[1] * 0.0 + 1.0,
                    justina_ekf_B.axang_idx_2 - justina_ekf_B.v_d[0] * 0.0,
                    justina_ekf_B.axang_idx_1 - justina_ekf_B.v_d[1] * 0.0,
                    justina_ekf_B.axang_idx_2 + justina_ekf_B.v_d[0] * 0.0,
                    justina_ekf_B.v_d[2] * justina_ekf_B.v_d[2] * 0.0 + 1.0,
                    justina_ekf_B.tempR_p);
    for (justina_ekf_B.b_kstr_j = 0; justina_ekf_B.b_kstr_j < 3;
         justina_ekf_B.b_kstr_j++) {
      justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j + 1;
      justina_ekf_B.R_n[justina_ekf_B.kstr_m - 1] = justina_ekf_B.tempR_p
        [(justina_ekf_B.kstr_m - 1) * 3];
      justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j + 1;
      justina_ekf_B.R_n[justina_ekf_B.kstr_m + 2] = justina_ekf_B.tempR_p
        [(justina_ekf_B.kstr_m - 1) * 3 + 1];
      justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j + 1;
      justina_ekf_B.R_n[justina_ekf_B.kstr_m + 5] = justina_ekf_B.tempR_p
        [(justina_ekf_B.kstr_m - 1) * 3 + 2];
    }

    memset(&justina_ekf_B.TJ_c[0], 0, sizeof(real_T) << 4U);
    for (justina_ekf_B.b_kstr_j = 0; justina_ekf_B.b_kstr_j < 3;
         justina_ekf_B.b_kstr_j++) {
      justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j << 2;
      justina_ekf_B.TJ_c[justina_ekf_B.kstr_m] = justina_ekf_B.R_n[3 *
        justina_ekf_B.b_kstr_j];
      justina_ekf_B.TJ_c[justina_ekf_B.kstr_m + 1] = justina_ekf_B.R_n[3 *
        justina_ekf_B.b_kstr_j + 1];
      justina_ekf_B.TJ_c[justina_ekf_B.kstr_m + 2] = justina_ekf_B.R_n[3 *
        justina_ekf_B.b_kstr_j + 2];
    }

    justina_ekf_B.TJ_c[15] = 1.0;
    break;

   default:
    ju_rigidBodyJoint_get_JointAxis(obj, justina_ekf_B.v_d);
    memset(&justina_ekf_B.tempR_p[0], 0, 9U * sizeof(real_T));
    justina_ekf_B.tempR_p[0] = 1.0;
    justina_ekf_B.tempR_p[4] = 1.0;
    justina_ekf_B.tempR_p[8] = 1.0;
    for (justina_ekf_B.b_kstr_j = 0; justina_ekf_B.b_kstr_j < 3;
         justina_ekf_B.b_kstr_j++) {
      justina_ekf_B.kstr_m = justina_ekf_B.b_kstr_j << 2;
      justina_ekf_B.TJ_c[justina_ekf_B.kstr_m] = justina_ekf_B.tempR_p[3 *
        justina_ekf_B.b_kstr_j];
      justina_ekf_B.TJ_c[justina_ekf_B.kstr_m + 1] = justina_ekf_B.tempR_p[3 *
        justina_ekf_B.b_kstr_j + 1];
      justina_ekf_B.TJ_c[justina_ekf_B.kstr_m + 2] = justina_ekf_B.tempR_p[3 *
        justina_ekf_B.b_kstr_j + 2];
      justina_ekf_B.TJ_c[justina_ekf_B.b_kstr_j + 12] =
        justina_ekf_B.v_d[justina_ekf_B.b_kstr_j] * 0.0;
    }

    justina_ekf_B.TJ_c[3] = 0.0;
    justina_ekf_B.TJ_c[7] = 0.0;
    justina_ekf_B.TJ_c[11] = 0.0;
    justina_ekf_B.TJ_c[15] = 1.0;
    break;
  }

  for (justina_ekf_B.b_kstr_j = 0; justina_ekf_B.b_kstr_j < 4;
       justina_ekf_B.b_kstr_j++) {
    for (justina_ekf_B.kstr_m = 0; justina_ekf_B.kstr_m < 4;
         justina_ekf_B.kstr_m++) {
      justina_ekf_B.obj_tmp_tmp_c = justina_ekf_B.kstr_m << 2;
      justina_ekf_B.obj_tmp_h = justina_ekf_B.b_kstr_j +
        justina_ekf_B.obj_tmp_tmp_c;
      justina_ekf_B.obj_f[justina_ekf_B.obj_tmp_h] = 0.0;
      justina_ekf_B.obj_f[justina_ekf_B.obj_tmp_h] +=
        justina_ekf_B.TJ_c[justina_ekf_B.obj_tmp_tmp_c] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr_j];
      justina_ekf_B.obj_f[justina_ekf_B.obj_tmp_h] +=
        justina_ekf_B.TJ_c[justina_ekf_B.obj_tmp_tmp_c + 1] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr_j + 4];
      justina_ekf_B.obj_f[justina_ekf_B.obj_tmp_h] +=
        justina_ekf_B.TJ_c[justina_ekf_B.obj_tmp_tmp_c + 2] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr_j + 8];
      justina_ekf_B.obj_f[justina_ekf_B.obj_tmp_h] +=
        justina_ekf_B.TJ_c[justina_ekf_B.obj_tmp_tmp_c + 3] *
        obj->JointToParentTransform[justina_ekf_B.b_kstr_j + 12];
    }

    for (justina_ekf_B.kstr_m = 0; justina_ekf_B.kstr_m < 4;
         justina_ekf_B.kstr_m++) {
      justina_ekf_B.obj_tmp_tmp_c = justina_ekf_B.kstr_m << 2;
      justina_ekf_B.obj_tmp_h = justina_ekf_B.b_kstr_j +
        justina_ekf_B.obj_tmp_tmp_c;
      T[justina_ekf_B.obj_tmp_h] = 0.0;
      T[justina_ekf_B.obj_tmp_h] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp_c] *
        justina_ekf_B.obj_f[justina_ekf_B.b_kstr_j];
      T[justina_ekf_B.obj_tmp_h] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp_c + 1] *
        justina_ekf_B.obj_f[justina_ekf_B.b_kstr_j + 4];
      T[justina_ekf_B.obj_tmp_h] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp_c + 2] *
        justina_ekf_B.obj_f[justina_ekf_B.b_kstr_j + 8];
      T[justina_ekf_B.obj_tmp_h] += obj->
        ChildToJointTransform[justina_ekf_B.obj_tmp_tmp_c + 3] *
        justina_ekf_B.obj_f[justina_ekf_B.b_kstr_j + 12];
    }
  }
}

static void justina_ekf_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (justina_ekf_B.i2 = 0; justina_ekf_B.i2 < 3; justina_ekf_B.i2++) {
    justina_ekf_B.R_l[3 * justina_ekf_B.i2] = T[justina_ekf_B.i2];
    justina_ekf_B.R_l[3 * justina_ekf_B.i2 + 1] = T[justina_ekf_B.i2 + 4];
    justina_ekf_B.R_l[3 * justina_ekf_B.i2 + 2] = T[justina_ekf_B.i2 + 8];
  }

  for (justina_ekf_B.i2 = 0; justina_ekf_B.i2 < 9; justina_ekf_B.i2++) {
    justina_ekf_B.R_j[justina_ekf_B.i2] = -justina_ekf_B.R_l[justina_ekf_B.i2];
  }

  for (justina_ekf_B.i2 = 0; justina_ekf_B.i2 < 3; justina_ekf_B.i2++) {
    justina_ekf_B.Tinv_tmp = justina_ekf_B.i2 << 2;
    Tinv[justina_ekf_B.Tinv_tmp] = justina_ekf_B.R_l[3 * justina_ekf_B.i2];
    Tinv[justina_ekf_B.Tinv_tmp + 1] = justina_ekf_B.R_l[3 * justina_ekf_B.i2 +
      1];
    Tinv[justina_ekf_B.Tinv_tmp + 2] = justina_ekf_B.R_l[3 * justina_ekf_B.i2 +
      2];
    Tinv[justina_ekf_B.i2 + 12] = justina_ekf_B.R_j[justina_ekf_B.i2 + 6] * T[14]
      + (justina_ekf_B.R_j[justina_ekf_B.i2 + 3] * T[13] +
         justina_ekf_B.R_j[justina_ekf_B.i2] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void justina_ekf_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  justina_ekf_B.dv3[0] = 0.0;
  justina_ekf_B.dv3[3] = -T[14];
  justina_ekf_B.dv3[6] = T[13];
  justina_ekf_B.dv3[1] = T[14];
  justina_ekf_B.dv3[4] = 0.0;
  justina_ekf_B.dv3[7] = -T[12];
  justina_ekf_B.dv3[2] = -T[13];
  justina_ekf_B.dv3[5] = T[12];
  justina_ekf_B.dv3[8] = 0.0;
  for (justina_ekf_B.i_c = 0; justina_ekf_B.i_c < 3; justina_ekf_B.i_c++) {
    for (justina_ekf_B.X_tmp_p = 0; justina_ekf_B.X_tmp_p < 3;
         justina_ekf_B.X_tmp_p++) {
      justina_ekf_B.X_tmp_p5 = justina_ekf_B.i_c + 3 * justina_ekf_B.X_tmp_p;
      justina_ekf_B.dv4[justina_ekf_B.X_tmp_p5] = 0.0;
      justina_ekf_B.i1 = justina_ekf_B.X_tmp_p << 2;
      justina_ekf_B.dv4[justina_ekf_B.X_tmp_p5] += T[justina_ekf_B.i1] *
        justina_ekf_B.dv3[justina_ekf_B.i_c];
      justina_ekf_B.dv4[justina_ekf_B.X_tmp_p5] += T[justina_ekf_B.i1 + 1] *
        justina_ekf_B.dv3[justina_ekf_B.i_c + 3];
      justina_ekf_B.dv4[justina_ekf_B.X_tmp_p5] += T[justina_ekf_B.i1 + 2] *
        justina_ekf_B.dv3[justina_ekf_B.i_c + 6];
      X[justina_ekf_B.X_tmp_p + 6 * justina_ekf_B.i_c] = T[(justina_ekf_B.i_c <<
        2) + justina_ekf_B.X_tmp_p];
      X[justina_ekf_B.X_tmp_p + 6 * (justina_ekf_B.i_c + 3)] = 0.0;
    }
  }

  for (justina_ekf_B.i_c = 0; justina_ekf_B.i_c < 3; justina_ekf_B.i_c++) {
    X[6 * justina_ekf_B.i_c + 3] = justina_ekf_B.dv4[3 * justina_ekf_B.i_c];
    justina_ekf_B.X_tmp_p = justina_ekf_B.i_c << 2;
    justina_ekf_B.X_tmp_p5 = 6 * (justina_ekf_B.i_c + 3);
    X[justina_ekf_B.X_tmp_p5 + 3] = T[justina_ekf_B.X_tmp_p];
    X[6 * justina_ekf_B.i_c + 4] = justina_ekf_B.dv4[3 * justina_ekf_B.i_c + 1];
    X[justina_ekf_B.X_tmp_p5 + 4] = T[justina_ekf_B.X_tmp_p + 1];
    X[6 * justina_ekf_B.i_c + 5] = justina_ekf_B.dv4[3 * justina_ekf_B.i_c + 2];
    X[justina_ekf_B.X_tmp_p5 + 5] = T[justina_ekf_B.X_tmp_p + 2];
  }
}

static void justina_ekf_emxInit_char_T(emxArray_char_T_justina_ekf_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_char_T_justina_ekf_T *emxArray;
  *pEmxArray = (emxArray_char_T_justina_ekf_T *)malloc(sizeof
    (emxArray_char_T_justina_ekf_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_ekf_B.i_l = 0; justina_ekf_B.i_l < numDimensions;
       justina_ekf_B.i_l++) {
    emxArray->size[justina_ekf_B.i_l] = 0;
  }
}

static void justin_emxEnsureCapacity_char_T(emxArray_char_T_justina_ekf_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_ekf_B.newNumel_e = 1;
  for (justina_ekf_B.i_ax = 0; justina_ekf_B.i_ax < emxArray->numDimensions;
       justina_ekf_B.i_ax++) {
    justina_ekf_B.newNumel_e *= emxArray->size[justina_ekf_B.i_ax];
  }

  if (justina_ekf_B.newNumel_e > emxArray->allocatedSize) {
    justina_ekf_B.i_ax = emxArray->allocatedSize;
    if (justina_ekf_B.i_ax < 16) {
      justina_ekf_B.i_ax = 16;
    }

    while (justina_ekf_B.i_ax < justina_ekf_B.newNumel_e) {
      if (justina_ekf_B.i_ax > 1073741823) {
        justina_ekf_B.i_ax = MAX_int32_T;
      } else {
        justina_ekf_B.i_ax <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_ekf_B.i_ax), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = justina_ekf_B.i_ax;
    emxArray->canFreeData = true;
  }
}

static void justina_ekf_emxFree_char_T(emxArray_char_T_justina_ekf_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_justina_ekf_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_justina_ekf_T *)NULL;
  }
}

static void justina_ekf_emxFree_real_T(emxArray_real_T_justina_ekf_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_justina_ekf_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_justina_ekf_T *)NULL;
  }
}

static void justina_ekf_emxFree_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_justina__T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_justina_ekf_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_justina__T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMatri(q_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], emxArray_real_T_justina_ekf_T *H,
  emxArray_real_T_justina_ekf_T *lambda)
{
  emxArray_f_cell_wrap_justina__T *Ic;
  emxArray_f_cell_wrap_justina__T *X;
  emxArray_real_T_justina_ekf_T *lambda_;
  emxArray_real_T_justina_ekf_T *Si;
  emxArray_real_T_justina_ekf_T *Fi;
  emxArray_real_T_justina_ekf_T *Hji;
  emxArray_real_T_justina_ekf_T *s;
  o_robotics_manip_internal_Rig_T *obj;
  emxArray_char_T_justina_ekf_T *a;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T exitg1;
  int32_T exitg2;
  justina_ekf_B.nb_b = robot->NumBodies;
  justina_ekf_B.vNum_d = robot->VelocityNumber;
  justina_ekf_B.f = H->size[0] * H->size[1];
  justina_ekf_B.b_i = static_cast<int32_T>(justina_ekf_B.vNum_d);
  H->size[0] = justina_ekf_B.b_i;
  H->size[1] = justina_ekf_B.b_i;
  justin_emxEnsureCapacity_real_T(H, justina_ekf_B.f);
  justina_ekf_B.loop_ub_c = justina_ekf_B.b_i * justina_ekf_B.b_i - 1;
  for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
       justina_ekf_B.f++) {
    H->data[justina_ekf_B.f] = 0.0;
  }

  justina_ekf_emxInit_real_T(&lambda_, 2);
  justina_ekf_B.f = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  justina_ekf_B.nm1d2 = static_cast<int32_T>(justina_ekf_B.nb_b);
  lambda_->size[1] = justina_ekf_B.nm1d2;
  justin_emxEnsureCapacity_real_T(lambda_, justina_ekf_B.f);
  justina_ekf_B.idx = justina_ekf_B.nm1d2 - 1;
  for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.idx;
       justina_ekf_B.f++) {
    lambda_->data[justina_ekf_B.f] = 0.0;
  }

  justina_ekf_B.f = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = justina_ekf_B.b_i;
  justin_emxEnsureCapacity_real_T(lambda, justina_ekf_B.f);
  justina_ekf_B.loop_ub_c = justina_ekf_B.b_i - 1;
  for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
       justina_ekf_B.f++) {
    lambda->data[justina_ekf_B.f] = 0.0;
  }

  justina_ekf_emxInit_f_cell_wrap(&Ic, 2);
  justina_ekf_emxInit_f_cell_wrap(&X, 2);
  justina_ekf_B.f = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = justina_ekf_B.nm1d2;
  j_emxEnsureCapacity_f_cell_wrap(Ic, justina_ekf_B.f);
  justina_ekf_B.f = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = justina_ekf_B.nm1d2;
  j_emxEnsureCapacity_f_cell_wrap(X, justina_ekf_B.f);
  for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i <= justina_ekf_B.idx;
       justina_ekf_B.b_i++) {
    for (justina_ekf_B.f = 0; justina_ekf_B.f < 36; justina_ekf_B.f++) {
      Ic->data[justina_ekf_B.b_i].f1[justina_ekf_B.f] = robot->
        Bodies[justina_ekf_B.b_i]->SpatialInertia[justina_ekf_B.f];
    }

    justina_ekf_B.vNum_d = robot->PositionDoFMap[justina_ekf_B.b_i];
    justina_ekf_B.p_idx_1 = robot->PositionDoFMap[justina_ekf_B.b_i + 10];
    if (justina_ekf_B.p_idx_1 < justina_ekf_B.vNum_d) {
      obj = robot->Bodies[justina_ekf_B.b_i];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, justina_ekf_B.T_p);
    } else {
      if (justina_ekf_B.vNum_d > justina_ekf_B.p_idx_1) {
        justina_ekf_B.nm1d2 = 0;
        justina_ekf_B.f = -1;
      } else {
        justina_ekf_B.nm1d2 = static_cast<int32_T>(justina_ekf_B.vNum_d) - 1;
        justina_ekf_B.f = static_cast<int32_T>(justina_ekf_B.p_idx_1) - 1;
      }

      obj = robot->Bodies[justina_ekf_B.b_i];
      justina_ekf_B.loop_ub_c = justina_ekf_B.f - justina_ekf_B.nm1d2;
      justina_ekf_B.q_size_m = justina_ekf_B.loop_ub_c + 1;
      for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
           justina_ekf_B.f++) {
        justina_ekf_B.q_data_d[justina_ekf_B.f] = q[justina_ekf_B.nm1d2 +
          justina_ekf_B.f];
      }

      rigidBodyJoint_transformBodyT_p(&obj->JointInternal,
        justina_ekf_B.q_data_d, &justina_ekf_B.q_size_m, justina_ekf_B.T_p);
    }

    justina_ekf_tforminv(justina_ekf_B.T_p, justina_ekf_B.dv1);
    justina_ekf_tformToSpatialXform(justina_ekf_B.dv1, X->data[justina_ekf_B.b_i]
      .f1);
  }

  justina_ekf_B.nm1d2 = static_cast<int32_T>(((-1.0 - justina_ekf_B.nb_b) + 1.0)
    / -1.0) - 1;
  justina_ekf_emxInit_real_T(&Si, 2);
  justina_ekf_emxInit_real_T(&Fi, 2);
  justina_ekf_emxInit_real_T(&Hji, 2);
  justina_ekf_emxInit_char_T(&a, 2);
  for (justina_ekf_B.idx = 0; justina_ekf_B.idx <= justina_ekf_B.nm1d2;
       justina_ekf_B.idx++) {
    justina_ekf_B.n_o = static_cast<int32_T>(justina_ekf_B.nb_b +
      -static_cast<real_T>(justina_ekf_B.idx));
    justina_ekf_B.pid_tmp = justina_ekf_B.n_o - 1;
    justina_ekf_B.pid = robot->Bodies[justina_ekf_B.pid_tmp]->ParentIndex;
    justina_ekf_B.vNum_d = robot->VelocityDoFMap[justina_ekf_B.n_o - 1];
    justina_ekf_B.p_idx_1 = robot->VelocityDoFMap[justina_ekf_B.n_o + 9];
    if (justina_ekf_B.pid > 0.0) {
      for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++) {
        for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < 6; justina_ekf_B.b_i++)
        {
          justina_ekf_B.X_tmp = justina_ekf_B.f + 6 * justina_ekf_B.b_i;
          justina_ekf_B.X_b[justina_ekf_B.X_tmp] = 0.0;
          for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c < 6;
               justina_ekf_B.loop_ub_c++) {
            justina_ekf_B.X_b[justina_ekf_B.X_tmp] += X->
              data[justina_ekf_B.pid_tmp].f1[6 * justina_ekf_B.f +
              justina_ekf_B.loop_ub_c] * Ic->data[justina_ekf_B.pid_tmp].f1[6 *
              justina_ekf_B.b_i + justina_ekf_B.loop_ub_c];
          }
        }
      }

      for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++) {
        for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < 6; justina_ekf_B.b_i++)
        {
          justina_ekf_B.b_idx_0_e = 0.0;
          for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c < 6;
               justina_ekf_B.loop_ub_c++) {
            justina_ekf_B.b_idx_0_e += justina_ekf_B.X_b[6 *
              justina_ekf_B.loop_ub_c + justina_ekf_B.f] * X->
              data[justina_ekf_B.pid_tmp].f1[6 * justina_ekf_B.b_i +
              justina_ekf_B.loop_ub_c];
          }

          justina_ekf_B.loop_ub_c = 6 * justina_ekf_B.b_i + justina_ekf_B.f;
          Ic->data[static_cast<int32_T>(justina_ekf_B.pid) - 1]
            .f1[justina_ekf_B.loop_ub_c] += justina_ekf_B.b_idx_0_e;
        }
      }

      lambda_->data[justina_ekf_B.pid_tmp] = justina_ekf_B.pid;
      exitg1 = false;
      while ((!exitg1) && (lambda_->data[justina_ekf_B.pid_tmp] > 0.0)) {
        obj = robot->Bodies[static_cast<int32_T>(lambda_->
          data[justina_ekf_B.pid_tmp]) - 1];
        justina_ekf_B.f = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = obj->JointInternal.Type->size[1];
        justin_emxEnsureCapacity_char_T(a, justina_ekf_B.f);
        justina_ekf_B.loop_ub_c = obj->JointInternal.Type->size[0] *
          obj->JointInternal.Type->size[1] - 1;
        for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
             justina_ekf_B.f++) {
          a->data[justina_ekf_B.f] = obj->JointInternal.Type->
            data[justina_ekf_B.f];
        }

        for (justina_ekf_B.f = 0; justina_ekf_B.f < 5; justina_ekf_B.f++) {
          justina_ekf_B.b_ju[justina_ekf_B.f] = tmp[justina_ekf_B.f];
        }

        justina_ekf_B.b_bool_o = false;
        if (a->size[1] == 5) {
          justina_ekf_B.f = 1;
          do {
            exitg2 = 0;
            if (justina_ekf_B.f - 1 < 5) {
              justina_ekf_B.b_i = justina_ekf_B.f - 1;
              if (a->data[justina_ekf_B.b_i] !=
                  justina_ekf_B.b_ju[justina_ekf_B.b_i]) {
                exitg2 = 1;
              } else {
                justina_ekf_B.f++;
              }
            } else {
              justina_ekf_B.b_bool_o = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (justina_ekf_B.b_bool_o) {
          lambda_->data[justina_ekf_B.pid_tmp] = robot->Bodies
            [static_cast<int32_T>(lambda_->data[justina_ekf_B.pid_tmp]) - 1]
            ->ParentIndex;
        } else {
          exitg1 = true;
        }
      }
    }

    justina_ekf_B.b_idx_0_e = robot->VelocityDoFMap[justina_ekf_B.n_o - 1];
    justina_ekf_B.b_idx_1_b = robot->VelocityDoFMap[justina_ekf_B.n_o + 9];
    if (justina_ekf_B.b_idx_0_e <= justina_ekf_B.b_idx_1_b) {
      obj = robot->Bodies[justina_ekf_B.pid_tmp];
      justina_ekf_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      justin_emxEnsureCapacity_real_T(Si, justina_ekf_B.f);
      justina_ekf_B.loop_ub_c = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
           justina_ekf_B.f++) {
        Si->data[justina_ekf_B.f] = obj->JointInternal.MotionSubspace->
          data[justina_ekf_B.f];
      }

      justina_ekf_B.n_o = Si->size[1] - 1;
      justina_ekf_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      justin_emxEnsureCapacity_real_T(Fi, justina_ekf_B.f);
      for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c <=
           justina_ekf_B.n_o; justina_ekf_B.loop_ub_c++) {
        justina_ekf_B.coffset_tmp = justina_ekf_B.loop_ub_c * 6 - 1;
        for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < 6; justina_ekf_B.b_i++)
        {
          justina_ekf_B.s = 0.0;
          for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++) {
            justina_ekf_B.s += Ic->data[justina_ekf_B.pid_tmp]
              .f1[justina_ekf_B.f * 6 + justina_ekf_B.b_i] * Si->data
              [(justina_ekf_B.coffset_tmp + justina_ekf_B.f) + 1];
          }

          Fi->data[(justina_ekf_B.coffset_tmp + justina_ekf_B.b_i) + 1] =
            justina_ekf_B.s;
        }
      }

      if (justina_ekf_B.vNum_d > justina_ekf_B.p_idx_1) {
        justina_ekf_B.coffset_tmp = 0;
        justina_ekf_B.cb = 0;
      } else {
        justina_ekf_B.coffset_tmp = static_cast<int32_T>(justina_ekf_B.vNum_d) -
          1;
        justina_ekf_B.cb = static_cast<int32_T>(justina_ekf_B.vNum_d) - 1;
      }

      justina_ekf_B.m_n = Si->size[1];
      justina_ekf_B.n_o = Fi->size[1] - 1;
      justina_ekf_B.f = Hji->size[0] * Hji->size[1];
      Hji->size[0] = Si->size[1];
      Hji->size[1] = Fi->size[1];
      justin_emxEnsureCapacity_real_T(Hji, justina_ekf_B.f);
      for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c <=
           justina_ekf_B.n_o; justina_ekf_B.loop_ub_c++) {
        justina_ekf_B.coffset = justina_ekf_B.loop_ub_c * justina_ekf_B.m_n - 1;
        justina_ekf_B.boffset = justina_ekf_B.loop_ub_c * 6 - 1;
        for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < justina_ekf_B.m_n;
             justina_ekf_B.b_i++) {
          justina_ekf_B.aoffset_m = justina_ekf_B.b_i * 6 - 1;
          justina_ekf_B.s = 0.0;
          for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++) {
            justina_ekf_B.X_tmp = justina_ekf_B.f + 1;
            justina_ekf_B.s += Si->data[justina_ekf_B.aoffset_m +
              justina_ekf_B.X_tmp] * Fi->data[justina_ekf_B.boffset +
              justina_ekf_B.X_tmp];
          }

          Hji->data[(justina_ekf_B.coffset + justina_ekf_B.b_i) + 1] =
            justina_ekf_B.s;
        }
      }

      justina_ekf_B.loop_ub_c = Hji->size[1];
      for (justina_ekf_B.f = 0; justina_ekf_B.f < justina_ekf_B.loop_ub_c;
           justina_ekf_B.f++) {
        justina_ekf_B.n_o = Hji->size[0];
        for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < justina_ekf_B.n_o;
             justina_ekf_B.b_i++) {
          H->data[(justina_ekf_B.coffset_tmp + justina_ekf_B.b_i) + H->size[0] *
            (justina_ekf_B.cb + justina_ekf_B.f)] = Hji->data[Hji->size[0] *
            justina_ekf_B.f + justina_ekf_B.b_i];
        }
      }

      justina_ekf_B.n_o = Fi->size[1];
      justina_ekf_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = Fi->size[1];
      justin_emxEnsureCapacity_real_T(Si, justina_ekf_B.f);
      justina_ekf_B.loop_ub_c = Fi->size[0] * Fi->size[1] - 1;
      for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
           justina_ekf_B.f++) {
        Si->data[justina_ekf_B.f] = Fi->data[justina_ekf_B.f];
      }

      justina_ekf_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = justina_ekf_B.n_o;
      justin_emxEnsureCapacity_real_T(Fi, justina_ekf_B.f);
      for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c <
           justina_ekf_B.n_o; justina_ekf_B.loop_ub_c++) {
        justina_ekf_B.coffset_tmp = justina_ekf_B.loop_ub_c * 6 - 1;
        for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < 6; justina_ekf_B.b_i++)
        {
          justina_ekf_B.aoffset_m = justina_ekf_B.b_i * 6 - 1;
          justina_ekf_B.s = 0.0;
          for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++) {
            justina_ekf_B.X_tmp = justina_ekf_B.f + 1;
            justina_ekf_B.s += X->data[justina_ekf_B.pid_tmp]
              .f1[justina_ekf_B.aoffset_m + justina_ekf_B.X_tmp] * Si->
              data[justina_ekf_B.coffset_tmp + justina_ekf_B.X_tmp];
          }

          Fi->data[(justina_ekf_B.coffset_tmp + justina_ekf_B.b_i) + 1] =
            justina_ekf_B.s;
        }
      }

      while (justina_ekf_B.pid > 0.0) {
        justina_ekf_B.b_i = static_cast<int32_T>(justina_ekf_B.pid);
        justina_ekf_B.pid_tmp = justina_ekf_B.b_i - 1;
        obj = robot->Bodies[justina_ekf_B.pid_tmp];
        justina_ekf_B.f = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
        justin_emxEnsureCapacity_real_T(Si, justina_ekf_B.f);
        justina_ekf_B.loop_ub_c = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
             justina_ekf_B.f++) {
          Si->data[justina_ekf_B.f] = obj->JointInternal.MotionSubspace->
            data[justina_ekf_B.f];
        }

        justina_ekf_B.b_idx_0_e = robot->VelocityDoFMap[justina_ekf_B.b_i - 1];
        justina_ekf_B.b_idx_1_b = robot->VelocityDoFMap[justina_ekf_B.b_i + 9];
        if (justina_ekf_B.b_idx_0_e <= justina_ekf_B.b_idx_1_b) {
          justina_ekf_B.m_n = Si->size[1];
          justina_ekf_B.n_o = Fi->size[1] - 1;
          justina_ekf_B.f = Hji->size[0] * Hji->size[1];
          Hji->size[0] = Si->size[1];
          Hji->size[1] = Fi->size[1];
          justin_emxEnsureCapacity_real_T(Hji, justina_ekf_B.f);
          for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c <=
               justina_ekf_B.n_o; justina_ekf_B.loop_ub_c++) {
            justina_ekf_B.coffset = justina_ekf_B.loop_ub_c * justina_ekf_B.m_n
              - 1;
            justina_ekf_B.boffset = justina_ekf_B.loop_ub_c * 6 - 1;
            for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < justina_ekf_B.m_n;
                 justina_ekf_B.b_i++) {
              justina_ekf_B.aoffset_m = justina_ekf_B.b_i * 6 - 1;
              justina_ekf_B.s = 0.0;
              for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++)
              {
                justina_ekf_B.X_tmp = justina_ekf_B.f + 1;
                justina_ekf_B.s += Si->data[justina_ekf_B.aoffset_m +
                  justina_ekf_B.X_tmp] * Fi->data[justina_ekf_B.boffset +
                  justina_ekf_B.X_tmp];
              }

              Hji->data[(justina_ekf_B.coffset + justina_ekf_B.b_i) + 1] =
                justina_ekf_B.s;
            }
          }

          if (justina_ekf_B.b_idx_0_e > justina_ekf_B.b_idx_1_b) {
            justina_ekf_B.X_tmp = 0;
          } else {
            justina_ekf_B.X_tmp = static_cast<int32_T>(justina_ekf_B.b_idx_0_e)
              - 1;
          }

          if (justina_ekf_B.vNum_d > justina_ekf_B.p_idx_1) {
            justina_ekf_B.coffset_tmp = 0;
          } else {
            justina_ekf_B.coffset_tmp = static_cast<int32_T>
              (justina_ekf_B.vNum_d) - 1;
          }

          justina_ekf_B.loop_ub_c = Hji->size[1];
          for (justina_ekf_B.f = 0; justina_ekf_B.f < justina_ekf_B.loop_ub_c;
               justina_ekf_B.f++) {
            justina_ekf_B.n_o = Hji->size[0];
            for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < justina_ekf_B.n_o;
                 justina_ekf_B.b_i++) {
              H->data[(justina_ekf_B.X_tmp + justina_ekf_B.b_i) + H->size[0] *
                (justina_ekf_B.coffset_tmp + justina_ekf_B.f)] = Hji->data
                [Hji->size[0] * justina_ekf_B.f + justina_ekf_B.b_i];
            }
          }

          if (justina_ekf_B.vNum_d > justina_ekf_B.p_idx_1) {
            justina_ekf_B.X_tmp = 0;
          } else {
            justina_ekf_B.X_tmp = static_cast<int32_T>(justina_ekf_B.vNum_d) - 1;
          }

          if (justina_ekf_B.b_idx_0_e > justina_ekf_B.b_idx_1_b) {
            justina_ekf_B.coffset_tmp = 0;
          } else {
            justina_ekf_B.coffset_tmp = static_cast<int32_T>
              (justina_ekf_B.b_idx_0_e) - 1;
          }

          justina_ekf_B.loop_ub_c = Hji->size[0];
          for (justina_ekf_B.f = 0; justina_ekf_B.f < justina_ekf_B.loop_ub_c;
               justina_ekf_B.f++) {
            justina_ekf_B.n_o = Hji->size[1];
            for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < justina_ekf_B.n_o;
                 justina_ekf_B.b_i++) {
              H->data[(justina_ekf_B.X_tmp + justina_ekf_B.b_i) + H->size[0] *
                (justina_ekf_B.coffset_tmp + justina_ekf_B.f)] = Hji->data
                [Hji->size[0] * justina_ekf_B.b_i + justina_ekf_B.f];
            }
          }
        }

        justina_ekf_B.n_o = Fi->size[1];
        justina_ekf_B.f = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = Fi->size[1];
        justin_emxEnsureCapacity_real_T(Si, justina_ekf_B.f);
        justina_ekf_B.loop_ub_c = Fi->size[0] * Fi->size[1] - 1;
        for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
             justina_ekf_B.f++) {
          Si->data[justina_ekf_B.f] = Fi->data[justina_ekf_B.f];
        }

        justina_ekf_B.f = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = justina_ekf_B.n_o;
        justin_emxEnsureCapacity_real_T(Fi, justina_ekf_B.f);
        for (justina_ekf_B.loop_ub_c = 0; justina_ekf_B.loop_ub_c <
             justina_ekf_B.n_o; justina_ekf_B.loop_ub_c++) {
          justina_ekf_B.coffset_tmp = justina_ekf_B.loop_ub_c * 6 - 1;
          for (justina_ekf_B.b_i = 0; justina_ekf_B.b_i < 6; justina_ekf_B.b_i++)
          {
            justina_ekf_B.aoffset_m = justina_ekf_B.b_i * 6 - 1;
            justina_ekf_B.s = 0.0;
            for (justina_ekf_B.f = 0; justina_ekf_B.f < 6; justina_ekf_B.f++) {
              justina_ekf_B.X_tmp = justina_ekf_B.f + 1;
              justina_ekf_B.s += X->data[justina_ekf_B.pid_tmp]
                .f1[justina_ekf_B.aoffset_m + justina_ekf_B.X_tmp] * Si->
                data[justina_ekf_B.coffset_tmp + justina_ekf_B.X_tmp];
            }

            Fi->data[(justina_ekf_B.coffset_tmp + justina_ekf_B.b_i) + 1] =
              justina_ekf_B.s;
          }
        }

        justina_ekf_B.pid = robot->Bodies[justina_ekf_B.pid_tmp]->ParentIndex;
      }
    }
  }

  justina_ekf_emxFree_char_T(&a);
  justina_ekf_emxFree_real_T(&Hji);
  justina_ekf_emxFree_real_T(&Fi);
  justina_ekf_emxFree_real_T(&Si);
  justina_ekf_emxFree_f_cell_wrap(&X);
  justina_ekf_emxFree_f_cell_wrap(&Ic);
  for (justina_ekf_B.f = 0; justina_ekf_B.f < 10; justina_ekf_B.f++) {
    justina_ekf_B.mask[justina_ekf_B.f] = (robot->VelocityDoFMap[justina_ekf_B.f]
      <= robot->VelocityDoFMap[justina_ekf_B.f + 10]);
  }

  justina_ekf_B.idx = 0;
  justina_ekf_B.f = 1;
  exitg1 = false;
  while ((!exitg1) && (justina_ekf_B.f - 1 < 10)) {
    if (justina_ekf_B.mask[justina_ekf_B.f - 1]) {
      justina_ekf_B.idx++;
      justina_ekf_B.ii_data[justina_ekf_B.idx - 1] = justina_ekf_B.f;
      if (justina_ekf_B.idx >= 10) {
        exitg1 = true;
      } else {
        justina_ekf_B.f++;
      }
    } else {
      justina_ekf_B.f++;
    }
  }

  if (1 > justina_ekf_B.idx) {
    justina_ekf_B.idx = 0;
  }

  for (justina_ekf_B.f = 0; justina_ekf_B.f < justina_ekf_B.idx; justina_ekf_B.f
       ++) {
    justina_ekf_B.nonFixedIndices_data[justina_ekf_B.f] =
      justina_ekf_B.ii_data[justina_ekf_B.f];
  }

  justina_ekf_B.b_i = justina_ekf_B.idx - 1;
  justina_ekf_emxInit_real_T(&s, 2);
  for (justina_ekf_B.idx = 0; justina_ekf_B.idx <= justina_ekf_B.b_i;
       justina_ekf_B.idx++) {
    justina_ekf_B.vNum_d = robot->
      VelocityDoFMap[justina_ekf_B.nonFixedIndices_data[justina_ekf_B.idx] - 1];
    justina_ekf_B.p_idx_1 = robot->
      VelocityDoFMap[justina_ekf_B.nonFixedIndices_data[justina_ekf_B.idx] + 9];
    if (rtIsNaN(justina_ekf_B.vNum_d) || rtIsNaN(justina_ekf_B.p_idx_1)) {
      justina_ekf_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      justin_emxEnsureCapacity_real_T(s, justina_ekf_B.f);
      s->data[0] = (rtNaN);
    } else if (justina_ekf_B.p_idx_1 < justina_ekf_B.vNum_d) {
      s->size[0] = 1;
      s->size[1] = 0;
    } else if ((rtIsInf(justina_ekf_B.vNum_d) || rtIsInf(justina_ekf_B.p_idx_1))
               && (justina_ekf_B.vNum_d == justina_ekf_B.p_idx_1)) {
      justina_ekf_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      justin_emxEnsureCapacity_real_T(s, justina_ekf_B.f);
      s->data[0] = (rtNaN);
    } else if (floor(justina_ekf_B.vNum_d) == justina_ekf_B.vNum_d) {
      justina_ekf_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      justina_ekf_B.loop_ub_c = static_cast<int32_T>(floor(justina_ekf_B.p_idx_1
        - justina_ekf_B.vNum_d));
      s->size[1] = justina_ekf_B.loop_ub_c + 1;
      justin_emxEnsureCapacity_real_T(s, justina_ekf_B.f);
      for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
           justina_ekf_B.f++) {
        s->data[justina_ekf_B.f] = justina_ekf_B.vNum_d + static_cast<real_T>
          (justina_ekf_B.f);
      }
    } else {
      justina_ekf_B.nb_b = floor((justina_ekf_B.p_idx_1 - justina_ekf_B.vNum_d)
        + 0.5);
      justina_ekf_B.pid = justina_ekf_B.vNum_d + justina_ekf_B.nb_b;
      justina_ekf_B.b_idx_0_e = justina_ekf_B.pid - justina_ekf_B.p_idx_1;
      justina_ekf_B.b_idx_1_b = fabs(justina_ekf_B.vNum_d);
      justina_ekf_B.s = fabs(justina_ekf_B.p_idx_1);
      if ((justina_ekf_B.b_idx_1_b > justina_ekf_B.s) || rtIsNaN(justina_ekf_B.s))
      {
        justina_ekf_B.s = justina_ekf_B.b_idx_1_b;
      }

      if (fabs(justina_ekf_B.b_idx_0_e) < 4.4408920985006262E-16 *
          justina_ekf_B.s) {
        justina_ekf_B.nb_b++;
        justina_ekf_B.pid = justina_ekf_B.p_idx_1;
      } else if (justina_ekf_B.b_idx_0_e > 0.0) {
        justina_ekf_B.pid = (justina_ekf_B.nb_b - 1.0) + justina_ekf_B.vNum_d;
      } else {
        justina_ekf_B.nb_b++;
      }

      if (justina_ekf_B.nb_b >= 0.0) {
        justina_ekf_B.f = static_cast<int32_T>(justina_ekf_B.nb_b);
      } else {
        justina_ekf_B.f = 0;
      }

      justina_ekf_B.n_o = justina_ekf_B.f - 1;
      justina_ekf_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = justina_ekf_B.n_o + 1;
      justin_emxEnsureCapacity_real_T(s, justina_ekf_B.f);
      if (justina_ekf_B.n_o + 1 > 0) {
        s->data[0] = justina_ekf_B.vNum_d;
        if (justina_ekf_B.n_o + 1 > 1) {
          s->data[justina_ekf_B.n_o] = justina_ekf_B.pid;
          justina_ekf_B.nm1d2 = justina_ekf_B.n_o / 2;
          justina_ekf_B.loop_ub_c = justina_ekf_B.nm1d2 - 2;
          for (justina_ekf_B.f = 0; justina_ekf_B.f <= justina_ekf_B.loop_ub_c;
               justina_ekf_B.f++) {
            justina_ekf_B.X_tmp = justina_ekf_B.f + 1;
            s->data[justina_ekf_B.X_tmp] = justina_ekf_B.vNum_d +
              static_cast<real_T>(justina_ekf_B.X_tmp);
            s->data[justina_ekf_B.n_o - justina_ekf_B.X_tmp] = justina_ekf_B.pid
              - static_cast<real_T>(justina_ekf_B.X_tmp);
          }

          if (justina_ekf_B.nm1d2 << 1 == justina_ekf_B.n_o) {
            s->data[justina_ekf_B.nm1d2] = (justina_ekf_B.vNum_d +
              justina_ekf_B.pid) / 2.0;
          } else {
            s->data[justina_ekf_B.nm1d2] = justina_ekf_B.vNum_d +
              static_cast<real_T>(justina_ekf_B.nm1d2);
            s->data[justina_ekf_B.nm1d2 + 1] = justina_ekf_B.pid -
              static_cast<real_T>(justina_ekf_B.nm1d2);
          }
        }
      }
    }

    if (justina_ekf_B.vNum_d > justina_ekf_B.p_idx_1) {
      justina_ekf_B.nm1d2 = 0;
    } else {
      justina_ekf_B.nm1d2 = static_cast<int32_T>(justina_ekf_B.vNum_d) - 1;
    }

    justina_ekf_B.loop_ub_c = s->size[1];
    for (justina_ekf_B.f = 0; justina_ekf_B.f < justina_ekf_B.loop_ub_c;
         justina_ekf_B.f++) {
      lambda->data[justina_ekf_B.nm1d2 + justina_ekf_B.f] = s->
        data[justina_ekf_B.f] - 1.0;
    }

    if (lambda_->data[justina_ekf_B.nonFixedIndices_data[justina_ekf_B.idx] - 1]
        == 0.0) {
      lambda->data[static_cast<int32_T>(justina_ekf_B.vNum_d) - 1] = 0.0;
    } else {
      justina_ekf_B.f = static_cast<int32_T>(lambda_->
        data[justina_ekf_B.nonFixedIndices_data[justina_ekf_B.idx] - 1]);
      justina_ekf_B.b_idx_1_b = robot->VelocityDoFMap[justina_ekf_B.f + 9];
      lambda->data[static_cast<int32_T>(justina_ekf_B.vNum_d) - 1] =
        justina_ekf_B.b_idx_1_b;
    }
  }

  justina_ekf_emxFree_real_T(&s);
  justina_ekf_emxFree_real_T(&lambda_);
}

static void RigidBodyTreeDynamics_inverseDy(q_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], const real_T qdot[7], const real_T fext[60], real_T
  tau[7])
{
  emxArray_f_cell_wrap_justina__T *X;
  emxArray_f_cell_wrap_justina__T *Xtree;
  emxArray_real_T_justina_ekf_T *vJ;
  emxArray_real_T_justina_ekf_T *vB;
  emxArray_real_T_justina_ekf_T *aB;
  emxArray_real_T_justina_ekf_T *f;
  emxArray_real_T_justina_ekf_T *S;
  emxArray_real_T_justina_ekf_T *taui;
  o_robotics_manip_internal_Rig_T *obj;
  emxArray_char_T_justina_ekf_T *a;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  justina_ekf_B.a0[0] = 0.0;
  justina_ekf_B.a0[1] = 0.0;
  justina_ekf_B.a0[2] = 0.0;
  justina_ekf_B.a0[3] = -robot->Gravity[0];
  justina_ekf_B.a0[4] = -robot->Gravity[1];
  justina_ekf_B.a0[5] = -robot->Gravity[2];
  justina_ekf_emxInit_real_T(&vJ, 2);
  justina_ekf_B.nb = robot->NumBodies;
  justina_ekf_B.i_o = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  justina_ekf_B.unnamed_idx_1 = static_cast<int32_T>(justina_ekf_B.nb);
  vJ->size[1] = justina_ekf_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(vJ, justina_ekf_B.i_o);
  justina_ekf_B.loop_ub_tmp = 6 * justina_ekf_B.unnamed_idx_1 - 1;
  for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.loop_ub_tmp;
       justina_ekf_B.i_o++) {
    vJ->data[justina_ekf_B.i_o] = 0.0;
  }

  justina_ekf_emxInit_real_T(&vB, 2);
  justina_ekf_B.i_o = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = justina_ekf_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(vB, justina_ekf_B.i_o);
  for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.loop_ub_tmp;
       justina_ekf_B.i_o++) {
    vB->data[justina_ekf_B.i_o] = 0.0;
  }

  justina_ekf_emxInit_real_T(&aB, 2);
  justina_ekf_B.i_o = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = justina_ekf_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(aB, justina_ekf_B.i_o);
  for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.loop_ub_tmp;
       justina_ekf_B.i_o++) {
    aB->data[justina_ekf_B.i_o] = 0.0;
  }

  for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 7; justina_ekf_B.i_o++) {
    tau[justina_ekf_B.i_o] = 0.0;
  }

  justina_ekf_emxInit_f_cell_wrap(&X, 2);
  justina_ekf_emxInit_f_cell_wrap(&Xtree, 2);
  justina_ekf_B.loop_ub_tmp = justina_ekf_B.unnamed_idx_1 - 1;
  justina_ekf_B.i_o = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = justina_ekf_B.unnamed_idx_1;
  j_emxEnsureCapacity_f_cell_wrap(Xtree, justina_ekf_B.i_o);
  justina_ekf_B.i_o = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = justina_ekf_B.unnamed_idx_1;
  j_emxEnsureCapacity_f_cell_wrap(X, justina_ekf_B.i_o);
  for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k <= justina_ekf_B.loop_ub_tmp;
       justina_ekf_B.b_k++) {
    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 36; justina_ekf_B.i_o++) {
      Xtree->data[justina_ekf_B.b_k].f1[justina_ekf_B.i_o] = 0.0;
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
      Xtree->data[justina_ekf_B.b_k].f1[justina_ekf_B.i_o + 6 *
        justina_ekf_B.i_o] = 1.0;
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 36; justina_ekf_B.i_o++) {
      X->data[justina_ekf_B.b_k].f1[justina_ekf_B.i_o] = 0.0;
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
      X->data[justina_ekf_B.b_k].f1[justina_ekf_B.i_o + 6 * justina_ekf_B.i_o] =
        1.0;
    }
  }

  justina_ekf_emxInit_real_T(&f, 2);
  justina_ekf_B.i_o = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = justina_ekf_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(f, justina_ekf_B.i_o);
  justina_ekf_emxInit_real_T(&S, 2);
  if (0 <= justina_ekf_B.loop_ub_tmp) {
    justina_ekf_B.dv2[0] = 0.0;
    justina_ekf_B.dv2[4] = 0.0;
    justina_ekf_B.dv2[8] = 0.0;
  }

  for (justina_ekf_B.unnamed_idx_1 = 0; justina_ekf_B.unnamed_idx_1 <=
       justina_ekf_B.loop_ub_tmp; justina_ekf_B.unnamed_idx_1++) {
    obj = robot->Bodies[justina_ekf_B.unnamed_idx_1];
    justina_ekf_B.i_o = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    justin_emxEnsureCapacity_real_T(S, justina_ekf_B.i_o);
    justina_ekf_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.b_k;
         justina_ekf_B.i_o++) {
      S->data[justina_ekf_B.i_o] = obj->JointInternal.MotionSubspace->
        data[justina_ekf_B.i_o];
    }

    justina_ekf_B.a_idx_0 = robot->PositionDoFMap[justina_ekf_B.unnamed_idx_1];
    justina_ekf_B.a_idx_1 = robot->PositionDoFMap[justina_ekf_B.unnamed_idx_1 +
      10];
    justina_ekf_B.b_idx_0 = robot->VelocityDoFMap[justina_ekf_B.unnamed_idx_1];
    justina_ekf_B.b_idx_1 = robot->VelocityDoFMap[justina_ekf_B.unnamed_idx_1 +
      10];
    if (justina_ekf_B.a_idx_1 < justina_ekf_B.a_idx_0) {
      obj = robot->Bodies[justina_ekf_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, justina_ekf_B.T);
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        vJ->data[justina_ekf_B.i_o + 6 * justina_ekf_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (justina_ekf_B.a_idx_0 > justina_ekf_B.a_idx_1) {
        justina_ekf_B.b_k = 0;
        justina_ekf_B.i_o = -1;
      } else {
        justina_ekf_B.b_k = static_cast<int32_T>(justina_ekf_B.a_idx_0) - 1;
        justina_ekf_B.i_o = static_cast<int32_T>(justina_ekf_B.a_idx_1) - 1;
      }

      if (justina_ekf_B.b_idx_0 > justina_ekf_B.b_idx_1) {
        justina_ekf_B.p = -1;
      } else {
        justina_ekf_B.p = static_cast<int32_T>(justina_ekf_B.b_idx_0) - 2;
      }

      obj = robot->Bodies[justina_ekf_B.unnamed_idx_1];
      justina_ekf_B.q_size_tmp = justina_ekf_B.i_o - justina_ekf_B.b_k;
      justina_ekf_B.q_size = justina_ekf_B.q_size_tmp + 1;
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.q_size_tmp;
           justina_ekf_B.i_o++) {
        justina_ekf_B.q_data[justina_ekf_B.i_o] = q[justina_ekf_B.b_k +
          justina_ekf_B.i_o];
      }

      rigidBodyJoint_transformBodyT_p(&obj->JointInternal, justina_ekf_B.q_data,
        &justina_ekf_B.q_size, justina_ekf_B.T);
      justina_ekf_B.inner = S->size[1] - 1;
      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++) {
        vJ->data[justina_ekf_B.b_k + 6 * justina_ekf_B.unnamed_idx_1] = 0.0;
      }

      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k <= justina_ekf_B.inner;
           justina_ekf_B.b_k++) {
        justina_ekf_B.aoffset = justina_ekf_B.b_k * 6 - 1;
        for (justina_ekf_B.q_size_tmp = 0; justina_ekf_B.q_size_tmp < 6;
             justina_ekf_B.q_size_tmp++) {
          justina_ekf_B.i_o = 6 * justina_ekf_B.unnamed_idx_1 +
            justina_ekf_B.q_size_tmp;
          vJ->data[justina_ekf_B.i_o] += S->data[(justina_ekf_B.aoffset +
            justina_ekf_B.q_size_tmp) + 1] * qdot[(justina_ekf_B.p +
            justina_ekf_B.b_k) + 1];
        }
      }
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
      justina_ekf_B.R_g[3 * justina_ekf_B.i_o] =
        justina_ekf_B.T[justina_ekf_B.i_o];
      justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 1] =
        justina_ekf_B.T[justina_ekf_B.i_o + 4];
      justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 2] =
        justina_ekf_B.T[justina_ekf_B.i_o + 8];
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 9; justina_ekf_B.i_o++) {
      justina_ekf_B.R_g1[justina_ekf_B.i_o] =
        -justina_ekf_B.R_g[justina_ekf_B.i_o];
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
      justina_ekf_B.b_k = justina_ekf_B.i_o << 2;
      justina_ekf_B.Tinv[justina_ekf_B.b_k] = justina_ekf_B.R_g[3 *
        justina_ekf_B.i_o];
      justina_ekf_B.Tinv[justina_ekf_B.b_k + 1] = justina_ekf_B.R_g[3 *
        justina_ekf_B.i_o + 1];
      justina_ekf_B.Tinv[justina_ekf_B.b_k + 2] = justina_ekf_B.R_g[3 *
        justina_ekf_B.i_o + 2];
      justina_ekf_B.Tinv[justina_ekf_B.i_o + 12] =
        justina_ekf_B.R_g1[justina_ekf_B.i_o + 6] * justina_ekf_B.T[14] +
        (justina_ekf_B.R_g1[justina_ekf_B.i_o + 3] * justina_ekf_B.T[13] +
         justina_ekf_B.R_g1[justina_ekf_B.i_o] * justina_ekf_B.T[12]);
    }

    justina_ekf_B.Tinv[3] = 0.0;
    justina_ekf_B.Tinv[7] = 0.0;
    justina_ekf_B.Tinv[11] = 0.0;
    justina_ekf_B.Tinv[15] = 1.0;
    justina_ekf_B.dv2[3] = -justina_ekf_B.Tinv[14];
    justina_ekf_B.dv2[6] = justina_ekf_B.Tinv[13];
    justina_ekf_B.dv2[1] = justina_ekf_B.Tinv[14];
    justina_ekf_B.dv2[7] = -justina_ekf_B.Tinv[12];
    justina_ekf_B.dv2[2] = -justina_ekf_B.Tinv[13];
    justina_ekf_B.dv2[5] = justina_ekf_B.Tinv[12];
    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 3; justina_ekf_B.b_k++) {
        justina_ekf_B.q_size_tmp = justina_ekf_B.i_o + 3 * justina_ekf_B.b_k;
        justina_ekf_B.R_g[justina_ekf_B.q_size_tmp] = 0.0;
        justina_ekf_B.p = justina_ekf_B.b_k << 2;
        justina_ekf_B.R_g[justina_ekf_B.q_size_tmp] +=
          justina_ekf_B.Tinv[justina_ekf_B.p] *
          justina_ekf_B.dv2[justina_ekf_B.i_o];
        justina_ekf_B.R_g[justina_ekf_B.q_size_tmp] +=
          justina_ekf_B.Tinv[justina_ekf_B.p + 1] *
          justina_ekf_B.dv2[justina_ekf_B.i_o + 3];
        justina_ekf_B.R_g[justina_ekf_B.q_size_tmp] +=
          justina_ekf_B.Tinv[justina_ekf_B.p + 2] *
          justina_ekf_B.dv2[justina_ekf_B.i_o + 6];
        X->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.b_k + 6 *
          justina_ekf_B.i_o] = justina_ekf_B.Tinv[(justina_ekf_B.i_o << 2) +
          justina_ekf_B.b_k];
        X->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.b_k + 6 *
          (justina_ekf_B.i_o + 3)] = 0.0;
      }
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
      X->data[justina_ekf_B.unnamed_idx_1].f1[6 * justina_ekf_B.i_o + 3] =
        justina_ekf_B.R_g[3 * justina_ekf_B.i_o];
      justina_ekf_B.b_k = justina_ekf_B.i_o << 2;
      justina_ekf_B.q_size_tmp = 6 * (justina_ekf_B.i_o + 3);
      X->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.q_size_tmp + 3] =
        justina_ekf_B.Tinv[justina_ekf_B.b_k];
      X->data[justina_ekf_B.unnamed_idx_1].f1[6 * justina_ekf_B.i_o + 4] =
        justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 1];
      X->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.q_size_tmp + 4] =
        justina_ekf_B.Tinv[justina_ekf_B.b_k + 1];
      X->data[justina_ekf_B.unnamed_idx_1].f1[6 * justina_ekf_B.i_o + 5] =
        justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 2];
      X->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.q_size_tmp + 5] =
        justina_ekf_B.Tinv[justina_ekf_B.b_k + 2];
    }

    justina_ekf_B.a_idx_0 = robot->Bodies[justina_ekf_B.unnamed_idx_1]
      ->ParentIndex;
    if (justina_ekf_B.a_idx_0 > 0.0) {
      justina_ekf_B.m = static_cast<int32_T>(justina_ekf_B.a_idx_0);
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        justina_ekf_B.a_idx_1 = 0.0;
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.a_idx_1 += vB->data[(justina_ekf_B.m - 1) * 6 +
            justina_ekf_B.b_k] * X->data[justina_ekf_B.unnamed_idx_1].f1[6 *
            justina_ekf_B.b_k + justina_ekf_B.i_o];
        }

        justina_ekf_B.y[justina_ekf_B.i_o] = vJ->data[6 *
          justina_ekf_B.unnamed_idx_1 + justina_ekf_B.i_o] +
          justina_ekf_B.a_idx_1;
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        vB->data[justina_ekf_B.i_o + 6 * justina_ekf_B.unnamed_idx_1] =
          justina_ekf_B.y[justina_ekf_B.i_o];
      }

      justina_ekf_B.inner = S->size[1] - 1;
      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++) {
        justina_ekf_B.y[justina_ekf_B.b_k] = 0.0;
      }

      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k <= justina_ekf_B.inner;
           justina_ekf_B.b_k++) {
        justina_ekf_B.aoffset = justina_ekf_B.b_k * 6 - 1;
        for (justina_ekf_B.q_size_tmp = 0; justina_ekf_B.q_size_tmp < 6;
             justina_ekf_B.q_size_tmp++) {
          justina_ekf_B.a_idx_1 = S->data[(justina_ekf_B.aoffset +
            justina_ekf_B.q_size_tmp) + 1] * 0.0 +
            justina_ekf_B.y[justina_ekf_B.q_size_tmp];
          justina_ekf_B.y[justina_ekf_B.q_size_tmp] = justina_ekf_B.a_idx_1;
        }
      }

      justina_ekf_B.R_g[0] = 0.0;
      justina_ekf_B.b_k = 6 * justina_ekf_B.unnamed_idx_1 + 2;
      justina_ekf_B.R_g[3] = -vB->data[justina_ekf_B.b_k];
      justina_ekf_B.i_o = 6 * justina_ekf_B.unnamed_idx_1 + 1;
      justina_ekf_B.R_g[6] = vB->data[justina_ekf_B.i_o];
      justina_ekf_B.R_g[1] = vB->data[justina_ekf_B.b_k];
      justina_ekf_B.R_g[4] = 0.0;
      justina_ekf_B.R_g[7] = -vB->data[6 * justina_ekf_B.unnamed_idx_1];
      justina_ekf_B.R_g[2] = -vB->data[justina_ekf_B.i_o];
      justina_ekf_B.R_g[5] = vB->data[6 * justina_ekf_B.unnamed_idx_1];
      justina_ekf_B.R_g[8] = 0.0;
      justina_ekf_B.R_c[3] = 0.0;
      justina_ekf_B.b_k = 6 * justina_ekf_B.unnamed_idx_1 + 5;
      justina_ekf_B.R_c[9] = -vB->data[justina_ekf_B.b_k];
      justina_ekf_B.i_o = 6 * justina_ekf_B.unnamed_idx_1 + 4;
      justina_ekf_B.R_c[15] = vB->data[justina_ekf_B.i_o];
      justina_ekf_B.R_c[4] = vB->data[justina_ekf_B.b_k];
      justina_ekf_B.R_c[10] = 0.0;
      justina_ekf_B.b_k = 6 * justina_ekf_B.unnamed_idx_1 + 3;
      justina_ekf_B.R_c[16] = -vB->data[justina_ekf_B.b_k];
      justina_ekf_B.R_c[5] = -vB->data[justina_ekf_B.i_o];
      justina_ekf_B.R_c[11] = vB->data[justina_ekf_B.b_k];
      justina_ekf_B.R_c[17] = 0.0;
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
        justina_ekf_B.a_idx_1 = justina_ekf_B.R_g[3 * justina_ekf_B.i_o];
        justina_ekf_B.R_c[6 * justina_ekf_B.i_o] = justina_ekf_B.a_idx_1;
        justina_ekf_B.b_k = 6 * (justina_ekf_B.i_o + 3);
        justina_ekf_B.R_c[justina_ekf_B.b_k] = 0.0;
        justina_ekf_B.R_c[justina_ekf_B.b_k + 3] = justina_ekf_B.a_idx_1;
        justina_ekf_B.a_idx_1 = justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 1];
        justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 1] = justina_ekf_B.a_idx_1;
        justina_ekf_B.R_c[justina_ekf_B.b_k + 1] = 0.0;
        justina_ekf_B.R_c[justina_ekf_B.b_k + 4] = justina_ekf_B.a_idx_1;
        justina_ekf_B.a_idx_1 = justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 2];
        justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 2] = justina_ekf_B.a_idx_1;
        justina_ekf_B.R_c[justina_ekf_B.b_k + 2] = 0.0;
        justina_ekf_B.R_c[justina_ekf_B.b_k + 5] = justina_ekf_B.a_idx_1;
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        justina_ekf_B.a_idx_1 = 0.0;
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.a_idx_1 += aB->data[(justina_ekf_B.m - 1) * 6 +
            justina_ekf_B.b_k] * X->data[justina_ekf_B.unnamed_idx_1].f1[6 *
            justina_ekf_B.b_k + justina_ekf_B.i_o];
        }

        justina_ekf_B.X_g[justina_ekf_B.i_o] = justina_ekf_B.a_idx_1 +
          justina_ekf_B.y[justina_ekf_B.i_o];
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        justina_ekf_B.y[justina_ekf_B.i_o] = 0.0;
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.a_idx_1 = justina_ekf_B.R_c[6 * justina_ekf_B.b_k +
            justina_ekf_B.i_o] * vJ->data[6 * justina_ekf_B.unnamed_idx_1 +
            justina_ekf_B.b_k] + justina_ekf_B.y[justina_ekf_B.i_o];
          justina_ekf_B.y[justina_ekf_B.i_o] = justina_ekf_B.a_idx_1;
        }

        aB->data[justina_ekf_B.i_o + 6 * justina_ekf_B.unnamed_idx_1] =
          justina_ekf_B.X_g[justina_ekf_B.i_o] +
          justina_ekf_B.y[justina_ekf_B.i_o];
      }

      justina_ekf_B.R_g[0] = 0.0;
      justina_ekf_B.R_g[3] = -justina_ekf_B.T[14];
      justina_ekf_B.R_g[6] = justina_ekf_B.T[13];
      justina_ekf_B.R_g[1] = justina_ekf_B.T[14];
      justina_ekf_B.R_g[4] = 0.0;
      justina_ekf_B.R_g[7] = -justina_ekf_B.T[12];
      justina_ekf_B.R_g[2] = -justina_ekf_B.T[13];
      justina_ekf_B.R_g[5] = justina_ekf_B.T[12];
      justina_ekf_B.R_g[8] = 0.0;
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 3; justina_ekf_B.b_k++)
        {
          justina_ekf_B.q_size_tmp = justina_ekf_B.i_o + 3 * justina_ekf_B.b_k;
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] = 0.0;
          justina_ekf_B.p = justina_ekf_B.b_k << 2;
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] +=
            justina_ekf_B.T[justina_ekf_B.p] *
            justina_ekf_B.R_g[justina_ekf_B.i_o];
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] +=
            justina_ekf_B.T[justina_ekf_B.p + 1] *
            justina_ekf_B.R_g[justina_ekf_B.i_o + 3];
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] +=
            justina_ekf_B.T[justina_ekf_B.p + 2] *
            justina_ekf_B.R_g[justina_ekf_B.i_o + 6];
          justina_ekf_B.R_c[justina_ekf_B.b_k + 6 * justina_ekf_B.i_o] =
            justina_ekf_B.T[(justina_ekf_B.i_o << 2) + justina_ekf_B.b_k];
          justina_ekf_B.R_c[justina_ekf_B.b_k + 6 * (justina_ekf_B.i_o + 3)] =
            0.0;
        }
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
        justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 3] = justina_ekf_B.R_g1[3 *
          justina_ekf_B.i_o];
        justina_ekf_B.b_k = justina_ekf_B.i_o << 2;
        justina_ekf_B.q_size_tmp = 6 * (justina_ekf_B.i_o + 3);
        justina_ekf_B.R_c[justina_ekf_B.q_size_tmp + 3] =
          justina_ekf_B.T[justina_ekf_B.b_k];
        justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 4] = justina_ekf_B.R_g1[3 *
          justina_ekf_B.i_o + 1];
        justina_ekf_B.R_c[justina_ekf_B.q_size_tmp + 4] =
          justina_ekf_B.T[justina_ekf_B.b_k + 1];
        justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 5] = justina_ekf_B.R_g1[3 *
          justina_ekf_B.i_o + 2];
        justina_ekf_B.R_c[justina_ekf_B.q_size_tmp + 5] =
          justina_ekf_B.T[justina_ekf_B.b_k + 2];
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.p = justina_ekf_B.i_o + 6 * justina_ekf_B.b_k;
          justina_ekf_B.b_I[justina_ekf_B.p] = 0.0;
          for (justina_ekf_B.q_size_tmp = 0; justina_ekf_B.q_size_tmp < 6;
               justina_ekf_B.q_size_tmp++) {
            justina_ekf_B.b_I[justina_ekf_B.p] += Xtree->data
              [static_cast<int32_T>(justina_ekf_B.a_idx_0) - 1].f1[6 *
              justina_ekf_B.q_size_tmp + justina_ekf_B.i_o] * justina_ekf_B.R_c
              [6 * justina_ekf_B.b_k + justina_ekf_B.q_size_tmp];
          }
        }
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 36; justina_ekf_B.i_o++) {
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.i_o] =
          justina_ekf_B.b_I[justina_ekf_B.i_o];
      }
    } else {
      justina_ekf_B.inner = S->size[1] - 1;
      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++) {
        justina_ekf_B.i_o = 6 * justina_ekf_B.unnamed_idx_1 + justina_ekf_B.b_k;
        vB->data[justina_ekf_B.i_o] = vJ->data[justina_ekf_B.i_o];
        justina_ekf_B.y[justina_ekf_B.b_k] = 0.0;
      }

      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k <= justina_ekf_B.inner;
           justina_ekf_B.b_k++) {
        justina_ekf_B.aoffset = justina_ekf_B.b_k * 6 - 1;
        for (justina_ekf_B.q_size_tmp = 0; justina_ekf_B.q_size_tmp < 6;
             justina_ekf_B.q_size_tmp++) {
          justina_ekf_B.a_idx_1 = S->data[(justina_ekf_B.aoffset +
            justina_ekf_B.q_size_tmp) + 1] * 0.0 +
            justina_ekf_B.y[justina_ekf_B.q_size_tmp];
          justina_ekf_B.y[justina_ekf_B.q_size_tmp] = justina_ekf_B.a_idx_1;
        }
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        justina_ekf_B.a_idx_1 = 0.0;
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.a_idx_1 += X->data[justina_ekf_B.unnamed_idx_1].f1[6 *
            justina_ekf_B.b_k + justina_ekf_B.i_o] *
            justina_ekf_B.a0[justina_ekf_B.b_k];
        }

        aB->data[justina_ekf_B.i_o + 6 * justina_ekf_B.unnamed_idx_1] =
          justina_ekf_B.a_idx_1 + justina_ekf_B.y[justina_ekf_B.i_o];
      }

      justina_ekf_B.R_g[0] = 0.0;
      justina_ekf_B.R_g[3] = -justina_ekf_B.T[14];
      justina_ekf_B.R_g[6] = justina_ekf_B.T[13];
      justina_ekf_B.R_g[1] = justina_ekf_B.T[14];
      justina_ekf_B.R_g[4] = 0.0;
      justina_ekf_B.R_g[7] = -justina_ekf_B.T[12];
      justina_ekf_B.R_g[2] = -justina_ekf_B.T[13];
      justina_ekf_B.R_g[5] = justina_ekf_B.T[12];
      justina_ekf_B.R_g[8] = 0.0;
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 3; justina_ekf_B.b_k++)
        {
          justina_ekf_B.q_size_tmp = justina_ekf_B.i_o + 3 * justina_ekf_B.b_k;
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] = 0.0;
          justina_ekf_B.p = justina_ekf_B.b_k << 2;
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] +=
            justina_ekf_B.T[justina_ekf_B.p] *
            justina_ekf_B.R_g[justina_ekf_B.i_o];
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] +=
            justina_ekf_B.T[justina_ekf_B.p + 1] *
            justina_ekf_B.R_g[justina_ekf_B.i_o + 3];
          justina_ekf_B.R_g1[justina_ekf_B.q_size_tmp] +=
            justina_ekf_B.T[justina_ekf_B.p + 2] *
            justina_ekf_B.R_g[justina_ekf_B.i_o + 6];
          Xtree->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.b_k + 6 *
            justina_ekf_B.i_o] = justina_ekf_B.T[(justina_ekf_B.i_o << 2) +
            justina_ekf_B.b_k];
          Xtree->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.b_k + 6 *
            (justina_ekf_B.i_o + 3)] = 0.0;
        }
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[6 * justina_ekf_B.i_o + 3] =
          justina_ekf_B.R_g1[3 * justina_ekf_B.i_o];
        justina_ekf_B.b_k = justina_ekf_B.i_o << 2;
        justina_ekf_B.q_size_tmp = 6 * (justina_ekf_B.i_o + 3);
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.q_size_tmp + 3]
          = justina_ekf_B.T[justina_ekf_B.b_k];
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[6 * justina_ekf_B.i_o + 4] =
          justina_ekf_B.R_g1[3 * justina_ekf_B.i_o + 1];
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.q_size_tmp + 4]
          = justina_ekf_B.T[justina_ekf_B.b_k + 1];
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[6 * justina_ekf_B.i_o + 5] =
          justina_ekf_B.R_g1[3 * justina_ekf_B.i_o + 2];
        Xtree->data[justina_ekf_B.unnamed_idx_1].f1[justina_ekf_B.q_size_tmp + 5]
          = justina_ekf_B.T[justina_ekf_B.b_k + 2];
      }
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 36; justina_ekf_B.i_o++) {
      justina_ekf_B.b_I[justina_ekf_B.i_o] = robot->
        Bodies[justina_ekf_B.unnamed_idx_1]->SpatialInertia[justina_ekf_B.i_o];
    }

    justina_ekf_B.R_g[0] = 0.0;
    justina_ekf_B.b_k = 6 * justina_ekf_B.unnamed_idx_1 + 2;
    justina_ekf_B.R_g[3] = -vB->data[justina_ekf_B.b_k];
    justina_ekf_B.i_o = 6 * justina_ekf_B.unnamed_idx_1 + 1;
    justina_ekf_B.R_g[6] = vB->data[justina_ekf_B.i_o];
    justina_ekf_B.R_g[1] = vB->data[justina_ekf_B.b_k];
    justina_ekf_B.R_g[4] = 0.0;
    justina_ekf_B.R_g[7] = -vB->data[6 * justina_ekf_B.unnamed_idx_1];
    justina_ekf_B.R_g[2] = -vB->data[justina_ekf_B.i_o];
    justina_ekf_B.R_g[5] = vB->data[6 * justina_ekf_B.unnamed_idx_1];
    justina_ekf_B.R_g[8] = 0.0;
    justina_ekf_B.R_c[18] = 0.0;
    justina_ekf_B.b_k = 6 * justina_ekf_B.unnamed_idx_1 + 5;
    justina_ekf_B.R_c[24] = -vB->data[justina_ekf_B.b_k];
    justina_ekf_B.i_o = 6 * justina_ekf_B.unnamed_idx_1 + 4;
    justina_ekf_B.R_c[30] = vB->data[justina_ekf_B.i_o];
    justina_ekf_B.R_c[19] = vB->data[justina_ekf_B.b_k];
    justina_ekf_B.R_c[25] = 0.0;
    justina_ekf_B.b_k = 6 * justina_ekf_B.unnamed_idx_1 + 3;
    justina_ekf_B.R_c[31] = -vB->data[justina_ekf_B.b_k];
    justina_ekf_B.R_c[20] = -vB->data[justina_ekf_B.i_o];
    justina_ekf_B.R_c[26] = vB->data[justina_ekf_B.b_k];
    justina_ekf_B.R_c[32] = 0.0;
    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 3; justina_ekf_B.i_o++) {
      justina_ekf_B.a_idx_1 = justina_ekf_B.R_g[3 * justina_ekf_B.i_o];
      justina_ekf_B.R_c[6 * justina_ekf_B.i_o] = justina_ekf_B.a_idx_1;
      justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 3] = 0.0;
      justina_ekf_B.b_k = 6 * (justina_ekf_B.i_o + 3);
      justina_ekf_B.R_c[justina_ekf_B.b_k + 3] = justina_ekf_B.a_idx_1;
      justina_ekf_B.a_idx_1 = justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 1];
      justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 1] = justina_ekf_B.a_idx_1;
      justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 4] = 0.0;
      justina_ekf_B.R_c[justina_ekf_B.b_k + 4] = justina_ekf_B.a_idx_1;
      justina_ekf_B.a_idx_1 = justina_ekf_B.R_g[3 * justina_ekf_B.i_o + 2];
      justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 2] = justina_ekf_B.a_idx_1;
      justina_ekf_B.R_c[6 * justina_ekf_B.i_o + 5] = 0.0;
      justina_ekf_B.R_c[justina_ekf_B.b_k + 5] = justina_ekf_B.a_idx_1;
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
      justina_ekf_B.X_g[justina_ekf_B.i_o] = 0.0;
      justina_ekf_B.b_I_l[justina_ekf_B.i_o] = 0.0;
      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++) {
        justina_ekf_B.a_idx_0 = justina_ekf_B.b_I[6 * justina_ekf_B.b_k +
          justina_ekf_B.i_o];
        justina_ekf_B.q_size_tmp = 6 * justina_ekf_B.unnamed_idx_1 +
          justina_ekf_B.b_k;
        justina_ekf_B.a_idx_1 = vB->data[justina_ekf_B.q_size_tmp] *
          justina_ekf_B.a_idx_0 + justina_ekf_B.X_g[justina_ekf_B.i_o];
        justina_ekf_B.a_idx_0 = aB->data[justina_ekf_B.q_size_tmp] *
          justina_ekf_B.a_idx_0 + justina_ekf_B.b_I_l[justina_ekf_B.i_o];
        justina_ekf_B.X_g[justina_ekf_B.i_o] = justina_ekf_B.a_idx_1;
        justina_ekf_B.b_I_l[justina_ekf_B.i_o] = justina_ekf_B.a_idx_0;
      }
    }

    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
      justina_ekf_B.y[justina_ekf_B.i_o] = 0.0;
      justina_ekf_B.a_idx_1 = 0.0;
      for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++) {
        justina_ekf_B.a_idx_1 += Xtree->data[justina_ekf_B.unnamed_idx_1].f1[6 *
          justina_ekf_B.i_o + justina_ekf_B.b_k] * fext[6 *
          justina_ekf_B.unnamed_idx_1 + justina_ekf_B.b_k];
        justina_ekf_B.y[justina_ekf_B.i_o] += justina_ekf_B.R_c[6 *
          justina_ekf_B.b_k + justina_ekf_B.i_o] *
          justina_ekf_B.X_g[justina_ekf_B.b_k];
      }

      f->data[justina_ekf_B.i_o + 6 * justina_ekf_B.unnamed_idx_1] =
        (justina_ekf_B.b_I_l[justina_ekf_B.i_o] +
         justina_ekf_B.y[justina_ekf_B.i_o]) - justina_ekf_B.a_idx_1;
    }
  }

  justina_ekf_emxFree_real_T(&aB);
  justina_ekf_emxFree_real_T(&vB);
  justina_ekf_emxFree_real_T(&vJ);
  justina_ekf_emxFree_f_cell_wrap(&Xtree);
  justina_ekf_B.q_size_tmp = static_cast<int32_T>(((-1.0 - justina_ekf_B.nb) +
    1.0) / -1.0) - 1;
  justina_ekf_emxInit_real_T(&taui, 1);
  justina_ekf_emxInit_char_T(&a, 2);
  if (0 <= justina_ekf_B.q_size_tmp) {
    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 5; justina_ekf_B.i_o++) {
      justina_ekf_B.b_f[justina_ekf_B.i_o] = tmp[justina_ekf_B.i_o];
    }
  }

  for (justina_ekf_B.loop_ub_tmp = 0; justina_ekf_B.loop_ub_tmp <=
       justina_ekf_B.q_size_tmp; justina_ekf_B.loop_ub_tmp++) {
    justina_ekf_B.a_idx_0 = justina_ekf_B.nb + -static_cast<real_T>
      (justina_ekf_B.loop_ub_tmp);
    justina_ekf_B.p = static_cast<int32_T>(justina_ekf_B.a_idx_0);
    justina_ekf_B.inner = justina_ekf_B.p - 1;
    obj = robot->Bodies[justina_ekf_B.inner];
    justina_ekf_B.i_o = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->JointInternal.Type->size[1];
    justin_emxEnsureCapacity_char_T(a, justina_ekf_B.i_o);
    justina_ekf_B.b_k = obj->JointInternal.Type->size[0] *
      obj->JointInternal.Type->size[1] - 1;
    for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.b_k;
         justina_ekf_B.i_o++) {
      a->data[justina_ekf_B.i_o] = obj->JointInternal.Type->
        data[justina_ekf_B.i_o];
    }

    justina_ekf_B.b_bool = false;
    if (a->size[1] == 5) {
      justina_ekf_B.i_o = 1;
      do {
        exitg1 = 0;
        if (justina_ekf_B.i_o - 1 < 5) {
          justina_ekf_B.unnamed_idx_1 = justina_ekf_B.i_o - 1;
          if (a->data[justina_ekf_B.unnamed_idx_1] !=
              justina_ekf_B.b_f[justina_ekf_B.unnamed_idx_1]) {
            exitg1 = 1;
          } else {
            justina_ekf_B.i_o++;
          }
        } else {
          justina_ekf_B.b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!justina_ekf_B.b_bool) {
      obj = robot->Bodies[justina_ekf_B.inner];
      justina_ekf_B.i_o = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      justin_emxEnsureCapacity_real_T(S, justina_ekf_B.i_o);
      justina_ekf_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <= justina_ekf_B.b_k;
           justina_ekf_B.i_o++) {
        S->data[justina_ekf_B.i_o] = obj->JointInternal.MotionSubspace->
          data[justina_ekf_B.i_o];
      }

      justina_ekf_B.m = S->size[1] - 1;
      justina_ekf_B.i_o = taui->size[0];
      taui->size[0] = S->size[1];
      justin_emxEnsureCapacity_real_T(taui, justina_ekf_B.i_o);
      for (justina_ekf_B.unnamed_idx_1 = 0; justina_ekf_B.unnamed_idx_1 <=
           justina_ekf_B.m; justina_ekf_B.unnamed_idx_1++) {
        justina_ekf_B.aoffset = justina_ekf_B.unnamed_idx_1 * 6 - 1;
        justina_ekf_B.a_idx_1 = 0.0;
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.a_idx_1 += f->data[(static_cast<int32_T>
            (justina_ekf_B.a_idx_0) - 1) * 6 + justina_ekf_B.b_k] * S->data
            [(justina_ekf_B.aoffset + justina_ekf_B.b_k) + 1];
        }

        taui->data[justina_ekf_B.unnamed_idx_1] = justina_ekf_B.a_idx_1;
      }

      justina_ekf_B.b_idx_0 = robot->VelocityDoFMap[justina_ekf_B.p - 1];
      justina_ekf_B.b_idx_1 = robot->VelocityDoFMap[justina_ekf_B.p + 9];
      if (justina_ekf_B.b_idx_0 > justina_ekf_B.b_idx_1) {
        justina_ekf_B.b_k = 0;
        justina_ekf_B.i_o = 0;
      } else {
        justina_ekf_B.b_k = static_cast<int32_T>(justina_ekf_B.b_idx_0) - 1;
        justina_ekf_B.i_o = static_cast<int32_T>(justina_ekf_B.b_idx_1);
      }

      justina_ekf_B.unnamed_idx_1 = justina_ekf_B.i_o - justina_ekf_B.b_k;
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o <
           justina_ekf_B.unnamed_idx_1; justina_ekf_B.i_o++) {
        tau[justina_ekf_B.b_k + justina_ekf_B.i_o] = taui->
          data[justina_ekf_B.i_o];
      }
    }

    justina_ekf_B.a_idx_0 = robot->Bodies[justina_ekf_B.inner]->ParentIndex;
    if (justina_ekf_B.a_idx_0 > 0.0) {
      justina_ekf_B.m = static_cast<int32_T>(justina_ekf_B.a_idx_0);
      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        justina_ekf_B.a_idx_1 = 0.0;
        for (justina_ekf_B.b_k = 0; justina_ekf_B.b_k < 6; justina_ekf_B.b_k++)
        {
          justina_ekf_B.a_idx_1 += f->data[(justina_ekf_B.p - 1) * 6 +
            justina_ekf_B.b_k] * X->data[justina_ekf_B.inner].f1[6 *
            justina_ekf_B.i_o + justina_ekf_B.b_k];
        }

        justina_ekf_B.a0[justina_ekf_B.i_o] = f->data[(justina_ekf_B.m - 1) * 6
          + justina_ekf_B.i_o] + justina_ekf_B.a_idx_1;
      }

      for (justina_ekf_B.i_o = 0; justina_ekf_B.i_o < 6; justina_ekf_B.i_o++) {
        f->data[justina_ekf_B.i_o + 6 * (justina_ekf_B.m - 1)] =
          justina_ekf_B.a0[justina_ekf_B.i_o];
      }
    }
  }

  justina_ekf_emxFree_char_T(&a);
  justina_ekf_emxFree_real_T(&taui);
  justina_ekf_emxFree_real_T(&S);
  justina_ekf_emxFree_real_T(&f);
  justina_ekf_emxFree_f_cell_wrap(&X);
}

static void matlabCodegenHandle_matlabC_pxd(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_ekf_T
  *pStruct)
{
  justina_ekf_emxFree_char_T(&pStruct->Type);
  justina_ekf_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_p_robotics_manip_(p_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_q_robotics_manip_(q_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_p_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_q_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_o_robotics_manip_(o_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCo_px(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_ekf_T
  *pStruct)
{
  justina_ekf_emxInit_char_T(&pStruct->Type, 2);
  justina_ekf_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_p_robotics_manip_(p_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_q_robotics_manip_(q_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_p_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_q_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_o_robotics_manip_(o_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static o_robotics_manip_internal_Rig_T *justina_ekf_RigidBody_RigidBody
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.30007875, 0.00021157499999999998, 0.0, 0.0,
    -0.0, -0.0052499999999999995, 0.00021157499999999998, 0.3005684315, 0.0, 0.0,
    0.0, -0.014105, 0.0, 0.0, 0.30064718149999997, 0.0052499999999999995,
    0.014105, 0.0, 0.0, 0.0, 0.0052499999999999995, 0.35, 0.0, 0.0, -0.0, 0.0,
    0.014105, 0.0, 0.35, 0.0, -0.0052499999999999995, -0.014105, 0.0, 0.0, 0.0,
    0.35 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.055, 0.09, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 0.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *justina_e_RigidBody_RigidBody_p
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.3, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.302205,
    0.0, 0.0, 0.0, -0.021, 0.0, 0.0, 0.302205, -0.0, 0.021, 0.0, 0.0, 0.0, -0.0,
    0.2, 0.0, 0.0, -0.0, 0.0, 0.021, 0.0, 0.2, 0.0, 0.0, -0.021, 0.0, 0.0, 0.0,
    0.2 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0603, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 1.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = -1.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *justina__RigidBody_RigidBody_px
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.3, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.307938,
    0.0, 0.0, 0.0, -0.0378, 0.0, 0.0, 0.307938, -0.0, 0.0378, 0.0, 0.0, 0.0,
    -0.0, 0.18, 0.0, 0.0, -0.0, 0.0, 0.0378, 0.0, 0.18, 0.0, 0.0, -0.0378, 0.0,
    0.0, 0.0, 0.18 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 2.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *justina_RigidBody_RigidBody_pxd
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.3, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.301458,
    0.0, 0.0, 0.0, -0.0162, 0.0, 0.0, 0.301458, -0.0, 0.0162, 0.0, 0.0, 0.0,
    -0.0, 0.18, 0.0, 0.0, -0.0, 0.0, 0.0162, 0.0, 0.18, 0.0, 0.0, -0.0162, 0.0,
    0.0, 0.0, 0.18 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.27, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 3.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *justin_RigidBody_RigidBody_pxdx
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.3, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.305832,
    0.0, 0.0, 0.0, -0.0324, 0.0, 0.0, 0.305832, -0.0, 0.0324, 0.0, 0.0, 0.0,
    -0.0, 0.18, 0.0, 0.0, -0.0, 0.0, 0.0324, 0.0, 0.18, 0.0, 0.0, -0.0324, 0.0,
    0.0, 0.0, 0.18 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 4.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *justi_RigidBody_RigidBody_pxdxu
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.3, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.300375,
    0.0, 0.0, 0.0, -0.0075, 0.0, 0.0, 0.300375, -0.0, 0.0075, 0.0, 0.0, 0.0,
    -0.0, 0.15, 0.0, 0.0, -0.0, 0.0, 0.0075, 0.0, 0.15, 0.0, 0.0, -0.0075, 0.0,
    0.0, 0.0, 0.15 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.2126, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, -1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 5.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *just_RigidBody_RigidBody_pxdxu3
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.3, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.3015,
    0.0, 0.0, 0.0, -0.015, 0.0, 0.0, 0.3015, -0.0, 0.015, 0.0, 0.0, 0.0, -0.0,
    0.15, 0.0, 0.0, -0.0, 0.0, 0.015, 0.0, 0.15, 0.0, 0.0, -0.015, 0.0, 0.0, 0.0,
    0.15 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 6.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *jus_RigidBody_RigidBody_pxdxu33
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0 };

  static const char_T tmp_1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_3[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_4[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.13, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 7.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_2[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_3[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_4[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_5[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *ju_RigidBody_RigidBody_pxdxu333
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0 };

  static const char_T tmp_1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_3[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_4[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, -0.04, 0.0, 1.0 };

  static const real_T tmp_5[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 8.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_2[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_3[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_4[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_5[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static o_robotics_manip_internal_Rig_T *j_RigidBody_RigidBody_pxdxu3331
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, -0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0,
    -0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, -0.0, 0.0, 0.0, 0.0, 0.0 };

  static const char_T tmp_1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_3[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_4[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.04, 0.0, 1.0 };

  static const real_T tmp_5[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 8.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_2[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      b_0[b_kstr] = tmp_3[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != b_0[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_4[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_5[b_kstr];
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static p_robotics_manip_internal_Rig_T *RigidBody_RigidBody_pxdxu3331d
  (p_robotics_manip_internal_Rig_T *obj)
{
  p_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_ekf_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  int32_T loop_ub;
  int8_T tmp[6];
  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_1[b_kstr];
  }

  b_bool = false;
  if (switch_expression->size[1] == 8) {
    b_kstr = 1;
    do {
      exitg1 = 0;
      if (b_kstr - 1 < 8) {
        loop_ub = b_kstr - 1;
        if (switch_expression->data[loop_ub] != b[loop_ub]) {
          exitg1 = 1;
        } else {
          b_kstr++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (b_bool) {
    b_kstr = 0;
  } else {
    for (b_kstr = 0; b_kstr < 9; b_kstr++) {
      justina_ekf_B.b_d[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != justina_ekf_B.b_d[loop_ub]) {
            exitg1 = 1;
          } else {
            b_kstr++;
          }
        } else {
          b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (b_bool) {
      b_kstr = 1;
    } else {
      b_kstr = -1;
    }
  }

  justina_ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_ekf_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 0;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 1;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_ekf_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_ekf_B.msubspace_data[b_kstr] = 0;
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  b_kstr = obj->JointInternal.MotionSubspace->size[0] *
    obj->JointInternal.MotionSubspace->size[1];
  obj->JointInternal.MotionSubspace->size[0] = 6;
  obj->JointInternal.MotionSubspace->size[1] = 1;
  justin_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] =
      justina_ekf_B.msubspace_data[b_kstr];
  }

  return b_obj;
}

static q_robotics_manip_internal_Rig_T *jus_RigidBodyTree_RigidBodyTree
  (q_robotics_manip_internal_Rig_T *obj, o_robotics_manip_internal_Rig_T *iobj_0,
   o_robotics_manip_internal_Rig_T *iobj_1, o_robotics_manip_internal_Rig_T
   *iobj_2, o_robotics_manip_internal_Rig_T *iobj_3,
   o_robotics_manip_internal_Rig_T *iobj_4, o_robotics_manip_internal_Rig_T
   *iobj_5, o_robotics_manip_internal_Rig_T *iobj_6,
   o_robotics_manip_internal_Rig_T *iobj_7, o_robotics_manip_internal_Rig_T
   *iobj_8, o_robotics_manip_internal_Rig_T *iobj_9)
{
  q_robotics_manip_internal_Rig_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 1, 2, 3, 4, 5, 6,
    7, -1, -1, -1 };

  b_obj = obj;
  obj->Bodies[0] = justina_ekf_RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = justina_e_RigidBody_RigidBody_p(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = justina__RigidBody_RigidBody_px(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = justina_RigidBody_RigidBody_pxd(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = justin_RigidBody_RigidBody_pxdx(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = justi_RigidBody_RigidBody_pxdxu(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = just_RigidBody_RigidBody_pxdxu3(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = jus_RigidBody_RigidBody_pxdxu33(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = ju_RigidBody_RigidBody_pxdxu333(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = j_RigidBody_RigidBody_pxdxu3331(iobj_8);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->Gravity[0] = 9.81;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = 0.0;
  obj->VelocityNumber = 7.0;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  RigidBody_RigidBody_pxdxu3331d(&obj->Base);
  return b_obj;
}

// Model step function
void justina_ekf_step(void)
{
  robotics_slmanip_internal_blo_T *obj;
  emxArray_real_T_justina_ekf_T *L;
  emxArray_real_T_justina_ekf_T *lambda;
  emxArray_real_T_justina_ekf_T *H;
  emxArray_real_T_justina_ekf_T *tmp;
  static const int8_T b_b[49] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 1 };

  static const int8_T f[98] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 1 };

  static const int8_T g[98] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0 };

  static const int8_T c_b[196] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  if (rtmIsMajorTimeStep(justina_ekf_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&justina_ekf_M->solverInfo,
                          ((justina_ekf_M->Timing.clockTick0+1)*
      justina_ekf_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(justina_ekf_M)) {
    justina_ekf_M->Timing.t[0] = rtsiGetT(&justina_ekf_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(justina_ekf_M) &&
      justina_ekf_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   Inport: '<S11>/In1'

    justina_ekf_SystemCore_step(&justina_ekf_B.b_varargout_1, justina_ekf_B.bias,
      &justina_ekf_B.b_varargout_2_Data_SL_Info_Curr,
      &justina_ekf_B.b_varargout_2_Data_SL_Info_Rece,
      &justina_ekf_B.b_varargout_2_Layout_DataOffset,
      justina_ekf_B.b_varargout_2_Layout_Dim,
      &justina_ekf_B.b_varargout_2_Layout_Dim_SL_Inf,
      &justina_ekf_B.b_varargout_2_Layout_Dim_SL_I_f);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S11>/Enable'

    if (justina_ekf_B.b_varargout_1) {
      for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
        justina_ekf_B.In1_k.Data[justina_ekf_B.i] =
          justina_ekf_B.bias[justina_ekf_B.i];
      }

      justina_ekf_B.In1_k.Data_SL_Info.CurrentLength =
        justina_ekf_B.b_varargout_2_Data_SL_Info_Curr;
      justina_ekf_B.In1_k.Data_SL_Info.ReceivedLength =
        justina_ekf_B.b_varargout_2_Data_SL_Info_Rece;
      justina_ekf_B.In1_k.Layout.DataOffset =
        justina_ekf_B.b_varargout_2_Layout_DataOffset;
      memcpy(&justina_ekf_B.In1_k.Layout.Dim[0],
             &justina_ekf_B.b_varargout_2_Layout_Dim[0], sizeof
             (SL_Bus_justina_ekf_std_msgs_MultiArrayDimension) << 4U);
      justina_ekf_B.In1_k.Layout.Dim_SL_Info.CurrentLength =
        justina_ekf_B.b_varargout_2_Layout_Dim_SL_Inf;
      justina_ekf_B.In1_k.Layout.Dim_SL_Info.ReceivedLength =
        justina_ekf_B.b_varargout_2_Layout_Dim_SL_I_f;
    }

    // End of MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe'

    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S10>/SourceBlock' incorporates:
    //   Inport: '<S12>/In1'

    justina_ekf_SystemCore_step_p(&justina_ekf_B.b_varargout_1,
      justina_ekf_B.bias, &justina_ekf_B.b_varargout_2_Data_SL_Info_Curr,
      &justina_ekf_B.b_varargout_2_Data_SL_Info_Rece,
      &justina_ekf_B.b_varargout_2_Layout_DataOffset,
      justina_ekf_B.b_varargout_2_Layout_Dim,
      &justina_ekf_B.b_varargout_2_Layout_Dim_SL_Inf,
      &justina_ekf_B.b_varargout_2_Layout_Dim_SL_I_f);

    // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S12>/Enable'

    if (justina_ekf_B.b_varargout_1) {
      for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
        justina_ekf_B.In1.Data[justina_ekf_B.i] =
          justina_ekf_B.bias[justina_ekf_B.i];
      }

      justina_ekf_B.In1.Data_SL_Info.CurrentLength =
        justina_ekf_B.b_varargout_2_Data_SL_Info_Curr;
      justina_ekf_B.In1.Data_SL_Info.ReceivedLength =
        justina_ekf_B.b_varargout_2_Data_SL_Info_Rece;
      justina_ekf_B.In1.Layout.DataOffset =
        justina_ekf_B.b_varargout_2_Layout_DataOffset;
      memcpy(&justina_ekf_B.In1.Layout.Dim[0],
             &justina_ekf_B.b_varargout_2_Layout_Dim[0], sizeof
             (SL_Bus_justina_ekf_std_msgs_MultiArrayDimension) << 4U);
      justina_ekf_B.In1.Layout.Dim_SL_Info.CurrentLength =
        justina_ekf_B.b_varargout_2_Layout_Dim_SL_Inf;
      justina_ekf_B.In1.Layout.Dim_SL_Info.ReceivedLength =
        justina_ekf_B.b_varargout_2_Layout_Dim_SL_I_f;
    }

    // End of MATLABSystem: '<S10>/SourceBlock'
    // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'
  }

  justina_ekf_emxInit_real_T(&L, 2);
  justina_ekf_emxInit_real_T(&lambda, 2);
  justina_ekf_emxInit_real_T(&tmp, 1);

  // MATLABSystem: '<S6>/MATLAB System' incorporates:
  //   Constant: '<S1>/Constant2'
  //   Integrator: '<S1>/Integrator'

  obj = &justina_ekf_DW.obj;
  RigidBodyTreeDynamics_massMatri(&justina_ekf_DW.obj.TreeInternal,
    &justina_ekf_X.Integrator_CSTATE[0], L, lambda);
  justina_ekf_B.vNum = obj->TreeInternal.VelocityNumber;
  justina_ekf_B.jA = static_cast<int32_T>(justina_ekf_B.vNum);
  justina_ekf_B.i = tmp->size[0];
  tmp->size[0] = justina_ekf_B.jA;
  justin_emxEnsureCapacity_real_T(tmp, justina_ekf_B.i);
  for (justina_ekf_B.i = 0; justina_ekf_B.i < justina_ekf_B.jA; justina_ekf_B.i
       ++) {
    tmp->data[justina_ekf_B.i] = 0.0;
  }

  RigidBodyTreeDynamics_inverseDy(&obj->TreeInternal,
    &justina_ekf_X.Integrator_CSTATE[0], &justina_ekf_X.Integrator_CSTATE[7],
    justina_ekf_P.Constant2_Value, justina_ekf_B.bias);
  justina_ekf_emxFree_real_T(&tmp);

  // MATLABSystem: '<S6>/MATLAB System'
  for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
    justina_ekf_B.bias[justina_ekf_B.i] = justina_ekf_B.In1.Data[justina_ekf_B.i]
      - justina_ekf_B.bias[justina_ekf_B.i];
  }

  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    justina_ekf_B.u1 = 0;
  } else {
    justina_ekf_B.i = L->size[0];
    justina_ekf_B.u1 = L->size[1];
    if (justina_ekf_B.i > justina_ekf_B.u1) {
      justina_ekf_B.u1 = justina_ekf_B.i;
    }
  }

  justina_ekf_emxInit_real_T(&H, 2);

  // MATLABSystem: '<S6>/MATLAB System'
  justina_ekf_B.i = H->size[0] * H->size[1];
  H->size[0] = L->size[0];
  H->size[1] = L->size[1];
  justin_emxEnsureCapacity_real_T(H, justina_ekf_B.i);
  justina_ekf_B.loop_ub = L->size[0] * L->size[1] - 1;
  for (justina_ekf_B.i = 0; justina_ekf_B.i <= justina_ekf_B.loop_ub;
       justina_ekf_B.i++) {
    H->data[justina_ekf_B.i] = L->data[justina_ekf_B.i];
  }

  justina_ekf_B.c_ix = static_cast<int32_T>(((-1.0 - static_cast<real_T>
    (justina_ekf_B.u1)) + 1.0) / -1.0) - 1;
  for (justina_ekf_B.loop_ub = 0; justina_ekf_B.loop_ub <= justina_ekf_B.c_ix;
       justina_ekf_B.loop_ub++) {
    justina_ekf_B.j = static_cast<real_T>(justina_ekf_B.u1) +
      -static_cast<real_T>(justina_ekf_B.loop_ub);
    justina_ekf_B.i = static_cast<int32_T>(justina_ekf_B.j);
    justina_ekf_B.n = justina_ekf_B.i - 1;
    H->data[(static_cast<int32_T>(justina_ekf_B.j) + H->size[0] *
             (static_cast<int32_T>(justina_ekf_B.j) - 1)) - 1] = sqrt(H->data
      [(justina_ekf_B.n * H->size[0] + justina_ekf_B.i) - 1]);
    justina_ekf_B.k = lambda->data[justina_ekf_B.n];
    while (justina_ekf_B.k > 0.0) {
      justina_ekf_B.iend = static_cast<int32_T>(justina_ekf_B.k) - 1;
      H->data[(static_cast<int32_T>(justina_ekf_B.j) + H->size[0] * (
                static_cast<int32_T>(justina_ekf_B.k) - 1)) - 1] = H->data
        [(justina_ekf_B.iend * H->size[0] + justina_ekf_B.i) - 1] / H->data[((
        static_cast<int32_T>(justina_ekf_B.j) - 1) * H->size[0] +
        static_cast<int32_T>(justina_ekf_B.j)) - 1];
      justina_ekf_B.k = lambda->data[justina_ekf_B.iend];
    }

    justina_ekf_B.k = lambda->data[justina_ekf_B.n];
    while (justina_ekf_B.k > 0.0) {
      justina_ekf_B.j = justina_ekf_B.k;
      while (justina_ekf_B.j > 0.0) {
        justina_ekf_B.n = static_cast<int32_T>(justina_ekf_B.j) - 1;
        H->data[(static_cast<int32_T>(justina_ekf_B.k) + H->size[0] * (
                  static_cast<int32_T>(justina_ekf_B.j) - 1)) - 1] = H->data
          [(justina_ekf_B.n * H->size[0] + static_cast<int32_T>(justina_ekf_B.k))
          - 1] - H->data[((static_cast<int32_T>(justina_ekf_B.k) - 1) * H->size
                          [0] + justina_ekf_B.i) - 1] * H->data
          [((static_cast<int32_T>(justina_ekf_B.j) - 1) * H->size[0] +
            justina_ekf_B.i) - 1];
        justina_ekf_B.j = lambda->data[justina_ekf_B.n];
      }

      justina_ekf_B.k = lambda->data[static_cast<int32_T>(justina_ekf_B.k) - 1];
    }
  }

  justina_ekf_B.i = L->size[0] * L->size[1];
  L->size[0] = H->size[0];
  L->size[1] = H->size[1];
  justin_emxEnsureCapacity_real_T(L, justina_ekf_B.i);
  justina_ekf_B.loop_ub = H->size[0] * H->size[1] - 1;
  for (justina_ekf_B.i = 0; justina_ekf_B.i <= justina_ekf_B.loop_ub;
       justina_ekf_B.i++) {
    L->data[justina_ekf_B.i] = H->data[justina_ekf_B.i];
  }

  justina_ekf_B.n = H->size[1];
  if ((H->size[0] == 0) || (H->size[1] == 0) || (1 >= H->size[1])) {
  } else {
    justina_ekf_B.iend = 0;
    for (justina_ekf_B.i = 2; justina_ekf_B.i <= justina_ekf_B.n;
         justina_ekf_B.i++) {
      for (justina_ekf_B.loop_ub = 0; justina_ekf_B.loop_ub <=
           justina_ekf_B.iend; justina_ekf_B.loop_ub++) {
        L->data[justina_ekf_B.loop_ub + L->size[0] * (justina_ekf_B.i - 1)] =
          0.0;
      }

      if (justina_ekf_B.iend + 1 < H->size[0]) {
        justina_ekf_B.iend++;
      }
    }
  }

  justina_ekf_emxFree_real_T(&H);

  // MATLABSystem: '<S6>/MATLAB System'
  justina_ekf_B.c_ix = static_cast<int32_T>(((-1.0 - justina_ekf_B.vNum) + 1.0) /
    -1.0) - 1;
  for (justina_ekf_B.loop_ub = 0; justina_ekf_B.loop_ub <= justina_ekf_B.c_ix;
       justina_ekf_B.loop_ub++) {
    justina_ekf_B.n = static_cast<int32_T>(justina_ekf_B.vNum +
      -static_cast<real_T>(justina_ekf_B.loop_ub));
    justina_ekf_B.i = justina_ekf_B.n - 1;
    justina_ekf_B.bias[justina_ekf_B.i] /= L->data[(justina_ekf_B.i * L->size[0]
      + justina_ekf_B.n) - 1];
    justina_ekf_B.j = lambda->data[justina_ekf_B.i];
    while (justina_ekf_B.j > 0.0) {
      justina_ekf_B.iend = static_cast<int32_T>(justina_ekf_B.j) - 1;
      justina_ekf_B.bias[justina_ekf_B.iend] -= L->data[(justina_ekf_B.iend *
        L->size[0] + justina_ekf_B.n) - 1] * justina_ekf_B.bias[justina_ekf_B.i];
      justina_ekf_B.j = lambda->data[justina_ekf_B.iend];
    }
  }

  justina_ekf_B.loop_ub = justina_ekf_B.jA - 1;
  for (justina_ekf_B.jA = 0; justina_ekf_B.jA <= justina_ekf_B.loop_ub;
       justina_ekf_B.jA++) {
    justina_ekf_B.j = lambda->data[justina_ekf_B.jA];
    while (justina_ekf_B.j > 0.0) {
      justina_ekf_B.i = static_cast<int32_T>(justina_ekf_B.j) - 1;
      justina_ekf_B.bias[justina_ekf_B.jA] -= L->data[justina_ekf_B.i * L->size
        [0] + justina_ekf_B.jA] * justina_ekf_B.bias[justina_ekf_B.i];
      justina_ekf_B.j = lambda->data[justina_ekf_B.i];
    }

    justina_ekf_B.bias[justina_ekf_B.jA] /= L->data[L->size[0] *
      justina_ekf_B.jA + justina_ekf_B.jA];
  }

  justina_ekf_emxFree_real_T(&lambda);
  justina_ekf_emxFree_real_T(&L);
  if (rtmIsMajorTimeStep(justina_ekf_M) &&
      justina_ekf_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S2>/Get Parameter7'
    ParamGet_justina_ekf_383.get_parameter(&justina_ekf_B.GetParameter7_o1);

    // MATLABSystem: '<S2>/Get Parameter8'
    ParamGet_justina_ekf_384.get_parameter(&justina_ekf_B.GetParameter8_o1);
  }

  // MATLAB Function: '<S1>/EKF' incorporates:
  //   Constant: '<S1>/delta_t'
  //   Integrator: '<S1>/Integrator'
  //   Integrator: '<S1>/Integrator1'
  //   MATLABSystem: '<S6>/MATLAB System'

  memset(&justina_ekf_B.xp[0], 0, 14U * sizeof(real_T));
  for (justina_ekf_B.i = 0; justina_ekf_B.i < 49; justina_ekf_B.i++) {
    justina_ekf_B.R[justina_ekf_B.i] = justina_ekf_B.GetParameter8_o1 *
      static_cast<real_T>(b_b[justina_ekf_B.i]);
    justina_ekf_B.R_tmp[justina_ekf_B.i] = static_cast<real_T>
      (b_b[justina_ekf_B.i]) * justina_ekf_P.delta_t_Value;
  }

  for (justina_ekf_B.i = 0; justina_ekf_B.i < 14; justina_ekf_B.i++) {
    for (justina_ekf_B.n = 0; justina_ekf_B.n < 7; justina_ekf_B.n++) {
      justina_ekf_B.F[justina_ekf_B.n + 14 * justina_ekf_B.i] = f[7 *
        justina_ekf_B.i + justina_ekf_B.n];
    }
  }

  for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
    for (justina_ekf_B.n = 0; justina_ekf_B.n < 7; justina_ekf_B.n++) {
      justina_ekf_B.vNum = justina_ekf_B.R_tmp[7 * justina_ekf_B.i +
        justina_ekf_B.n];
      justina_ekf_B.F[(justina_ekf_B.n + 14 * justina_ekf_B.i) + 7] =
        justina_ekf_B.vNum;
      justina_ekf_B.F[(justina_ekf_B.n + 14 * (justina_ekf_B.i + 7)) + 7] =
        justina_ekf_B.vNum;
    }
  }

  memcpy(&justina_ekf_B.R_tmp[0], &justina_ekf_B.R[0], 49U * sizeof(real_T));
  for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
    justina_ekf_B.ipiv[justina_ekf_B.i] = static_cast<int8_T>(justina_ekf_B.i +
      1);
  }

  for (justina_ekf_B.i = 0; justina_ekf_B.i < 6; justina_ekf_B.i++) {
    justina_ekf_B.loop_ub = justina_ekf_B.i << 3;
    justina_ekf_B.jA = 0;
    justina_ekf_B.n = justina_ekf_B.loop_ub;
    justina_ekf_B.vNum = fabs(justina_ekf_B.R_tmp[justina_ekf_B.loop_ub]);
    justina_ekf_B.iend = 2;
    while (justina_ekf_B.iend <= 7 - justina_ekf_B.i) {
      justina_ekf_B.n++;
      justina_ekf_B.k = fabs(justina_ekf_B.R_tmp[justina_ekf_B.n]);
      if (justina_ekf_B.k > justina_ekf_B.vNum) {
        justina_ekf_B.jA = justina_ekf_B.iend - 1;
        justina_ekf_B.vNum = justina_ekf_B.k;
      }

      justina_ekf_B.iend++;
    }

    if (justina_ekf_B.R_tmp[justina_ekf_B.loop_ub + justina_ekf_B.jA] != 0.0) {
      if (justina_ekf_B.jA != 0) {
        justina_ekf_B.iend = justina_ekf_B.i + justina_ekf_B.jA;
        justina_ekf_B.ipiv[justina_ekf_B.i] = static_cast<int8_T>
          (justina_ekf_B.iend + 1);
        justina_ekf_B.n = justina_ekf_B.i;
        for (justina_ekf_B.jA = 0; justina_ekf_B.jA < 7; justina_ekf_B.jA++) {
          justina_ekf_B.vNum = justina_ekf_B.R_tmp[justina_ekf_B.n];
          justina_ekf_B.R_tmp[justina_ekf_B.n] =
            justina_ekf_B.R_tmp[justina_ekf_B.iend];
          justina_ekf_B.R_tmp[justina_ekf_B.iend] = justina_ekf_B.vNum;
          justina_ekf_B.n += 7;
          justina_ekf_B.iend += 7;
        }
      }

      justina_ekf_B.c_ix = (justina_ekf_B.loop_ub - justina_ekf_B.i) + 7;
      justina_ekf_B.jA = justina_ekf_B.loop_ub + 1;
      while (justina_ekf_B.jA + 1 <= justina_ekf_B.c_ix) {
        justina_ekf_B.R_tmp[justina_ekf_B.jA] /=
          justina_ekf_B.R_tmp[justina_ekf_B.loop_ub];
        justina_ekf_B.jA++;
      }
    }

    justina_ekf_B.jA = justina_ekf_B.loop_ub;
    justina_ekf_B.n = justina_ekf_B.loop_ub + 7;
    justina_ekf_B.iend = 0;
    while (justina_ekf_B.iend <= 5 - justina_ekf_B.i) {
      if (justina_ekf_B.R_tmp[justina_ekf_B.n] != 0.0) {
        justina_ekf_B.vNum = -justina_ekf_B.R_tmp[justina_ekf_B.n];
        justina_ekf_B.c_ix = justina_ekf_B.loop_ub + 1;
        justina_ekf_B.u1 = (justina_ekf_B.jA - justina_ekf_B.i) + 14;
        justina_ekf_B.kBcol = justina_ekf_B.jA + 8;
        while (justina_ekf_B.kBcol + 1 <= justina_ekf_B.u1) {
          justina_ekf_B.R_tmp[justina_ekf_B.kBcol] +=
            justina_ekf_B.R_tmp[justina_ekf_B.c_ix] * justina_ekf_B.vNum;
          justina_ekf_B.c_ix++;
          justina_ekf_B.kBcol++;
        }
      }

      justina_ekf_B.n += 7;
      justina_ekf_B.jA += 7;
      justina_ekf_B.iend++;
    }
  }

  for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
    for (justina_ekf_B.n = 0; justina_ekf_B.n < 14; justina_ekf_B.n++) {
      justina_ekf_B.jA = justina_ekf_B.n + 14 * justina_ekf_B.i;
      justina_ekf_B.X[justina_ekf_B.jA] = 0.0;
      for (justina_ekf_B.iend = 0; justina_ekf_B.iend < 14; justina_ekf_B.iend++)
      {
        justina_ekf_B.X[justina_ekf_B.jA] += justina_ekf_X.Integrator1_CSTATE[14
          * justina_ekf_B.iend + justina_ekf_B.n] * static_cast<real_T>(g[14 *
          justina_ekf_B.i + justina_ekf_B.iend]);
      }
    }
  }

  for (justina_ekf_B.loop_ub = 0; justina_ekf_B.loop_ub < 7;
       justina_ekf_B.loop_ub++) {
    justina_ekf_B.iend = 14 * justina_ekf_B.loop_ub;
    justina_ekf_B.c_ix = 7 * justina_ekf_B.loop_ub;
    justina_ekf_B.u1 = 0;
    while (justina_ekf_B.u1 <= justina_ekf_B.loop_ub - 1) {
      justina_ekf_B.kBcol = 14 * justina_ekf_B.u1;
      justina_ekf_B.i = justina_ekf_B.u1 + justina_ekf_B.c_ix;
      if (justina_ekf_B.R_tmp[justina_ekf_B.i] != 0.0) {
        for (justina_ekf_B.n = 0; justina_ekf_B.n < 14; justina_ekf_B.n++) {
          justina_ekf_B.jA = justina_ekf_B.n + justina_ekf_B.iend;
          justina_ekf_B.X[justina_ekf_B.jA] -=
            justina_ekf_B.R_tmp[justina_ekf_B.i] *
            justina_ekf_B.X[justina_ekf_B.n + justina_ekf_B.kBcol];
        }
      }

      justina_ekf_B.u1++;
    }

    justina_ekf_B.vNum = 1.0 / justina_ekf_B.R_tmp[justina_ekf_B.loop_ub +
      justina_ekf_B.c_ix];
    for (justina_ekf_B.i = 0; justina_ekf_B.i < 14; justina_ekf_B.i++) {
      justina_ekf_B.jA = justina_ekf_B.i + justina_ekf_B.iend;
      justina_ekf_B.X[justina_ekf_B.jA] *= justina_ekf_B.vNum;
    }
  }

  for (justina_ekf_B.loop_ub = 6; justina_ekf_B.loop_ub >= 0;
       justina_ekf_B.loop_ub--) {
    justina_ekf_B.iend = 14 * justina_ekf_B.loop_ub;
    justina_ekf_B.c_ix = 7 * justina_ekf_B.loop_ub - 1;
    justina_ekf_B.u1 = justina_ekf_B.loop_ub + 2;
    while (justina_ekf_B.u1 < 8) {
      justina_ekf_B.kBcol = (justina_ekf_B.u1 - 1) * 14;
      justina_ekf_B.i = justina_ekf_B.u1 + justina_ekf_B.c_ix;
      if (justina_ekf_B.R_tmp[justina_ekf_B.i] != 0.0) {
        for (justina_ekf_B.n = 0; justina_ekf_B.n < 14; justina_ekf_B.n++) {
          justina_ekf_B.jA = justina_ekf_B.n + justina_ekf_B.iend;
          justina_ekf_B.X[justina_ekf_B.jA] -=
            justina_ekf_B.R_tmp[justina_ekf_B.i] *
            justina_ekf_B.X[justina_ekf_B.n + justina_ekf_B.kBcol];
        }
      }

      justina_ekf_B.u1++;
    }
  }

  for (justina_ekf_B.i = 5; justina_ekf_B.i >= 0; justina_ekf_B.i--) {
    if (justina_ekf_B.i + 1 != justina_ekf_B.ipiv[justina_ekf_B.i]) {
      justina_ekf_B.n = justina_ekf_B.ipiv[justina_ekf_B.i] - 1;
      for (justina_ekf_B.loop_ub = 0; justina_ekf_B.loop_ub < 14;
           justina_ekf_B.loop_ub++) {
        justina_ekf_B.iend = 14 * justina_ekf_B.i + justina_ekf_B.loop_ub;
        justina_ekf_B.vNum = justina_ekf_B.X[justina_ekf_B.iend];
        justina_ekf_B.jA = 14 * justina_ekf_B.n + justina_ekf_B.loop_ub;
        justina_ekf_B.X[justina_ekf_B.iend] = justina_ekf_B.X[justina_ekf_B.jA];
        justina_ekf_B.X[justina_ekf_B.jA] = justina_ekf_B.vNum;
      }
    }
  }

  for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
    justina_ekf_B.xp[justina_ekf_B.i] =
      justina_ekf_X.Integrator_CSTATE[justina_ekf_B.i + 7];
    justina_ekf_B.xp[justina_ekf_B.i + 7] = justina_ekf_B.bias[justina_ekf_B.i];
    justina_ekf_B.e[justina_ekf_B.i] = justina_ekf_B.In1_k.Data[justina_ekf_B.i]
      - justina_ekf_X.Integrator_CSTATE[justina_ekf_B.i];
  }

  for (justina_ekf_B.i = 0; justina_ekf_B.i < 14; justina_ekf_B.i++) {
    justina_ekf_B.vNum = 0.0;
    for (justina_ekf_B.n = 0; justina_ekf_B.n < 7; justina_ekf_B.n++) {
      justina_ekf_B.vNum += justina_ekf_B.X[14 * justina_ekf_B.n +
        justina_ekf_B.i] * justina_ekf_B.e[justina_ekf_B.n];
    }

    justina_ekf_B.xp[justina_ekf_B.i] += justina_ekf_B.vNum;
    for (justina_ekf_B.n = 0; justina_ekf_B.n < 14; justina_ekf_B.n++) {
      justina_ekf_B.loop_ub = justina_ekf_B.i + 14 * justina_ekf_B.n;
      justina_ekf_B.F_c[justina_ekf_B.loop_ub] = 0.0;
      justina_ekf_B.dv[justina_ekf_B.loop_ub] = 0.0;
      for (justina_ekf_B.iend = 0; justina_ekf_B.iend < 14; justina_ekf_B.iend++)
      {
        justina_ekf_B.jA = 14 * justina_ekf_B.iend + justina_ekf_B.i;
        justina_ekf_B.F_c[justina_ekf_B.loop_ub] +=
          justina_ekf_B.F[justina_ekf_B.jA] * justina_ekf_X.Integrator1_CSTATE
          [14 * justina_ekf_B.n + justina_ekf_B.iend];
        justina_ekf_B.dv[justina_ekf_B.loop_ub] +=
          justina_ekf_X.Integrator1_CSTATE[justina_ekf_B.jA] * justina_ekf_B.F
          [14 * justina_ekf_B.iend + justina_ekf_B.n];
      }
    }

    for (justina_ekf_B.n = 0; justina_ekf_B.n < 7; justina_ekf_B.n++) {
      justina_ekf_B.jA = justina_ekf_B.i + 14 * justina_ekf_B.n;
      justina_ekf_B.X_k[justina_ekf_B.jA] = 0.0;
      for (justina_ekf_B.iend = 0; justina_ekf_B.iend < 7; justina_ekf_B.iend++)
      {
        justina_ekf_B.X_k[justina_ekf_B.jA] += justina_ekf_B.X[14 *
          justina_ekf_B.iend + justina_ekf_B.i] * justina_ekf_B.R[7 *
          justina_ekf_B.n + justina_ekf_B.iend];
      }
    }

    for (justina_ekf_B.n = 0; justina_ekf_B.n < 14; justina_ekf_B.n++) {
      justina_ekf_B.vNum = 0.0;
      for (justina_ekf_B.iend = 0; justina_ekf_B.iend < 7; justina_ekf_B.iend++)
      {
        justina_ekf_B.vNum += justina_ekf_B.X_k[14 * justina_ekf_B.iend +
          justina_ekf_B.i] * justina_ekf_B.X[14 * justina_ekf_B.iend +
          justina_ekf_B.n];
      }

      justina_ekf_B.loop_ub = 14 * justina_ekf_B.n + justina_ekf_B.i;
      justina_ekf_B.Pp[justina_ekf_B.loop_ub] =
        ((justina_ekf_B.F_c[justina_ekf_B.loop_ub] +
          justina_ekf_B.dv[justina_ekf_B.loop_ub]) - justina_ekf_B.vNum) +
        static_cast<real_T>(c_b[justina_ekf_B.loop_ub]) *
        justina_ekf_B.GetParameter7_o1;
    }
  }

  // End of MATLAB Function: '<S1>/EKF'
  if (rtmIsMajorTimeStep(justina_ekf_M) &&
      justina_ekf_M->Timing.TaskCounters.TID[1] == 0) {
    // BusAssignment: '<S3>/Bus Assignment3' incorporates:
    //   Constant: '<S3>/Constant1'
    //   Constant: '<S7>/Constant'
    //   Integrator: '<S1>/Integrator'

    justina_ekf_B.BusAssignment3 = justina_ekf_P.Constant_Value_i;
    for (justina_ekf_B.i = 0; justina_ekf_B.i < 7; justina_ekf_B.i++) {
      justina_ekf_B.BusAssignment3.Data[justina_ekf_B.i] =
        justina_ekf_X.Integrator_CSTATE[justina_ekf_B.i + 7];
    }

    justina_ekf_B.BusAssignment3.Data_SL_Info.CurrentLength =
      justina_ekf_P.Constant1_Value;
    justina_ekf_B.BusAssignment3.Data_SL_Info.ReceivedLength =
      justina_ekf_P.Constant1_Value;

    // End of BusAssignment: '<S3>/Bus Assignment3'

    // Outputs for Atomic SubSystem: '<S3>/Publish3'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_justina_ekf_331.publish(&justina_ekf_B.BusAssignment3);

    // End of Outputs for SubSystem: '<S3>/Publish3'
  }

  if (rtmIsMajorTimeStep(justina_ekf_M)) {
    rt_ertODEUpdateContinuousStates(&justina_ekf_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++justina_ekf_M->Timing.clockTick0;
    justina_ekf_M->Timing.t[0] = rtsiGetSolverStopTime
      (&justina_ekf_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.004s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.004, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      justina_ekf_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void justina_ekf_derivatives(void)
{
  XDot_justina_ekf_T *_rtXdot;
  _rtXdot = ((XDot_justina_ekf_T *) justina_ekf_M->derivs);

  // Derivatives for Integrator: '<S1>/Integrator1'
  memcpy(&_rtXdot->Integrator1_CSTATE[0], &justina_ekf_B.Pp[0], 196U * sizeof
         (real_T));

  // Derivatives for Integrator: '<S1>/Integrator'
  memcpy(&_rtXdot->Integrator_CSTATE[0], &justina_ekf_B.xp[0], 14U * sizeof
         (real_T));
}

// Model initialize function
void justina_ekf_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&justina_ekf_M->solverInfo,
                          &justina_ekf_M->Timing.simTimeStep);
    rtsiSetTPtr(&justina_ekf_M->solverInfo, &rtmGetTPtr(justina_ekf_M));
    rtsiSetStepSizePtr(&justina_ekf_M->solverInfo,
                       &justina_ekf_M->Timing.stepSize0);
    rtsiSetdXPtr(&justina_ekf_M->solverInfo, &justina_ekf_M->derivs);
    rtsiSetContStatesPtr(&justina_ekf_M->solverInfo, (real_T **)
                         &justina_ekf_M->contStates);
    rtsiSetNumContStatesPtr(&justina_ekf_M->solverInfo,
      &justina_ekf_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&justina_ekf_M->solverInfo,
      &justina_ekf_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&justina_ekf_M->solverInfo,
      &justina_ekf_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&justina_ekf_M->solverInfo,
      &justina_ekf_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&justina_ekf_M->solverInfo, (&rtmGetErrorStatus
      (justina_ekf_M)));
    rtsiSetRTModelPtr(&justina_ekf_M->solverInfo, justina_ekf_M);
  }

  rtsiSetSimTimeStep(&justina_ekf_M->solverInfo, MAJOR_TIME_STEP);
  justina_ekf_M->intgData.y = justina_ekf_M->odeY;
  justina_ekf_M->intgData.f[0] = justina_ekf_M->odeF[0];
  justina_ekf_M->intgData.f[1] = justina_ekf_M->odeF[1];
  justina_ekf_M->intgData.f[2] = justina_ekf_M->odeF[2];
  justina_ekf_M->intgData.f[3] = justina_ekf_M->odeF[3];
  justina_ekf_M->contStates = ((X_justina_ekf_T *) &justina_ekf_X);
  rtsiSetSolverData(&justina_ekf_M->solverInfo, static_cast<void *>
                    (&justina_ekf_M->intgData));
  rtsiSetSolverName(&justina_ekf_M->solverInfo,"ode4");
  rtmSetTPtr(justina_ekf_M, &justina_ekf_M->Timing.tArray[0]);
  justina_ekf_M->Timing.stepSize0 = 0.004;

  {
    int32_T i;
    char_T tmp[7];
    static const char_T tmp_0[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p',
      'o', 's', 'i', 't', 'i', 'o', 'n', 's' };

    static const char_T tmp_1[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_2[21] = { '/', 'e', 'k', 'f', '/', 'e', 's', 't',
      'i', 'm', 'a', 't', 'e', 'd', '_', 's', 'p', 'e', 'e', 'd', 's' };

    static const char_T tmp_3[6] = { '/', 'e', 'k', 'f', '/', 'Q' };

    static const char_T tmp_4[6] = { '/', 'e', 'k', 'f', '/', 'R' };

    // InitializeConditions for Integrator: '<S1>/Integrator1'
    memcpy(&justina_ekf_X.Integrator1_CSTATE[0], &justina_ekf_P.Integrator1_IC[0],
           196U * sizeof(real_T));

    // InitializeConditions for Integrator: '<S1>/Integrator'
    for (i = 0; i < 14; i++) {
      justina_ekf_X.Integrator_CSTATE[i] = justina_ekf_P.Integrator_IC;
    }

    // End of InitializeConditions for Integrator: '<S1>/Integrator'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1'
    justina_ekf_B.In1_k = justina_ekf_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    justina_ekf_DW.obj_m.matlabCodegenIsDeleted = false;
    justina_ekf_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      justina_ekf_B.cv1[i] = tmp_0[i];
    }

    justina_ekf_B.cv1[16] = '\x00';
    Sub_justina_ekf_299.createSubscriber(justina_ekf_B.cv1, 1);
    justina_ekf_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    justina_ekf_B.In1 = justina_ekf_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    justina_ekf_DW.obj_ay.matlabCodegenIsDeleted = false;
    justina_ekf_DW.obj_ay.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      justina_ekf_B.cv2[i] = tmp_1[i];
    }

    justina_ekf_B.cv2[14] = '\x00';
    Sub_justina_ekf_638.createSubscriber(justina_ekf_B.cv2, 1);
    justina_ekf_DW.obj_ay.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S3>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    justina_ekf_DW.obj_b.matlabCodegenIsDeleted = false;
    justina_ekf_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      justina_ekf_B.cv[i] = tmp_2[i];
    }

    justina_ekf_B.cv[21] = '\x00';
    Pub_justina_ekf_331.createPublisher(justina_ekf_B.cv, 1);
    justina_ekf_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Publish3'
    emxInitStruct_robotics_slmanip_(&justina_ekf_DW.obj);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_1);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_20);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_19);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_18);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_17);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_16);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_15);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_14);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_13);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_12);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_11);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_10);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_9);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_8);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_7);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_6);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_5);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_4);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_3);
    emxInitStruct_o_robotics_manip_(&justina_ekf_DW.gobj_2);

    // Start for MATLABSystem: '<S6>/MATLAB System'
    justina_ekf_DW.obj.isInitialized = 0;
    justina_ekf_DW.obj.isInitialized = 1;
    jus_RigidBodyTree_RigidBodyTree(&justina_ekf_DW.obj.TreeInternal,
      &justina_ekf_DW.gobj_2, &justina_ekf_DW.gobj_4, &justina_ekf_DW.gobj_5,
      &justina_ekf_DW.gobj_6, &justina_ekf_DW.gobj_7, &justina_ekf_DW.gobj_8,
      &justina_ekf_DW.gobj_9, &justina_ekf_DW.gobj_10, &justina_ekf_DW.gobj_11,
      &justina_ekf_DW.gobj_3);

    // Start for MATLABSystem: '<S2>/Get Parameter7'
    justina_ekf_DW.obj_a.matlabCodegenIsDeleted = false;
    justina_ekf_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp[i] = tmp_3[i];
    }

    tmp[6] = '\x00';
    ParamGet_justina_ekf_383.initialize(tmp);
    ParamGet_justina_ekf_383.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_ekf_383.set_initial_value(0.0);
    justina_ekf_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter7'

    // Start for MATLABSystem: '<S2>/Get Parameter8'
    justina_ekf_DW.obj_o.matlabCodegenIsDeleted = false;
    justina_ekf_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp[i] = tmp_4[i];
    }

    tmp[6] = '\x00';
    ParamGet_justina_ekf_384.initialize(tmp);
    ParamGet_justina_ekf_384.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_ekf_384.set_initial_value(0.0);
    justina_ekf_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter8'
  }
}

// Model terminate function
void justina_ekf_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S4>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matlabC_pxd(&justina_ekf_DW.obj_m);

  // End of Terminate for SubSystem: '<S4>/Subscribe'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matlabC_pxd(&justina_ekf_DW.obj_ay);

  // End of Terminate for SubSystem: '<S4>/Subscribe1'
  emxFreeStruct_robotics_slmanip_(&justina_ekf_DW.obj);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_1);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_20);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_19);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_18);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_17);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_16);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_15);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_14);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_13);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_12);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_11);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_10);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_9);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_8);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_7);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_6);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_5);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_4);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_3);
  emxFreeStruct_o_robotics_manip_(&justina_ekf_DW.gobj_2);

  // Terminate for MATLABSystem: '<S2>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&justina_ekf_DW.obj_a);

  // Terminate for MATLABSystem: '<S2>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&justina_ekf_DW.obj_o);

  // Terminate for Atomic SubSystem: '<S3>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabCo_px(&justina_ekf_DW.obj_b);

  // End of Terminate for SubSystem: '<S3>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//
