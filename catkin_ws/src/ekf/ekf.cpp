//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: ekf.cpp
//
// Code generated for Simulink model 'ekf'.
//
// Model version                  : 1.262
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Sat Oct  3 22:47:04 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "ekf.h"
#include "ekf_private.h"

// Block signals (default storage)
B_ekf_T ekf_B;

// Continuous states
X_ekf_T ekf_X;

// Block states (default storage)
DW_ekf_T ekf_DW;

// Real-time model
RT_MODEL_ekf_T ekf_M_ = RT_MODEL_ekf_T();
RT_MODEL_ekf_T *const ekf_M = &ekf_M_;

// Forward declaration for local functions
static void ekf_SystemCore_step(boolean_T *varargout_1, real_T varargout_2_Data
  [7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0);
static void ekf_SystemCore_step_i(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0);
static void ekf_emxInit_real_T(emxArray_real_T_ekf_T **pEmxArray, int32_T
  numDimensions);
static void ekf_emxEnsureCapacity_real_T(emxArray_real_T_ekf_T *emxArray,
  int32_T oldNumel);
static void ekf_emxInit_f_cell_wrap(emxArray_f_cell_wrap_ekf_T **pEmxArray,
  int32_T numDimensions);
static void e_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_ekf_T *emxArray,
  int32_T oldNumel);
static void ek_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_ekf_T *obj,
  real_T ax[3]);
static void ekf_normalizeRows(const real_T matrix[3], real_T normRowMatrix[3]);
static void ekf_cat(real_T varargin_1, real_T varargin_2, real_T varargin_3,
                    real_T varargin_4, real_T varargin_5, real_T varargin_6,
                    real_T varargin_7, real_T varargin_8, real_T varargin_9,
                    real_T y[9]);
static void rigidBodyJoint_transformBodyT_i(const rigidBodyJoint_ekf_T *obj,
  const real_T q_data[], const int32_T *q_size, real_T T[16]);
static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_ekf_T *obj,
  real_T T[16]);
static void ekf_tforminv(const real_T T[16], real_T Tinv[16]);
static void ekf_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void ekf_emxInit_char_T(emxArray_char_T_ekf_T **pEmxArray, int32_T
  numDimensions);
static void ekf_emxEnsureCapacity_char_T(emxArray_char_T_ekf_T *emxArray,
  int32_T oldNumel);
static void ekf_emxFree_real_T(emxArray_real_T_ekf_T **pEmxArray);
static void ekf_emxFree_char_T(emxArray_char_T_ekf_T **pEmxArray);
static void ekf_emxFree_f_cell_wrap(emxArray_f_cell_wrap_ekf_T **pEmxArray);
static void RigidBodyTreeDynamics_massMatri(k_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], emxArray_real_T_ekf_T *H, emxArray_real_T_ekf_T
  *lambda);
static void RigidBodyTreeDynamics_inverseDy(k_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], const real_T qdot[7], const emxArray_real_T_ekf_T
  *qddot, const real_T fext[60], real_T tau[7]);
static void matlabCodegenHandle_matlabC_ibr(ros_slros_internal_block_Subs_T *obj);
static void ek_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_ekf_T *pStruct);
static void emxFreeStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_k_robotics_manip_(k_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_j_robotics_manip_(j_robotics_manip_internal_Rig_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabCo_ib(ros_slros_internal_block_Publ_T *obj);
static void ek_emxInitStruct_rigidBodyJoint(rigidBodyJoint_ekf_T *pStruct);
static void emxInitStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_k_robotics_manip_(k_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_j_robotics_manip_(j_robotics_manip_internal_Rig_T
  *pStruct);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_i
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ib
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibr
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrl
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrld
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrld2
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrld22
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *ek_RigidBody_RigidBody_ibrld22b
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *e_RigidBody_RigidBody_ibrld22b1
  (j_robotics_manip_internal_Rig_T *obj);
static i_robotics_manip_internal_Rig_T *RigidBody_RigidBody_ibrld22b1p
  (i_robotics_manip_internal_Rig_T *obj);
static k_robotics_manip_internal_Rig_T *ekf_RigidBodyTree_RigidBodyTree
  (k_robotics_manip_internal_Rig_T *obj, j_robotics_manip_internal_Rig_T *iobj_0,
   j_robotics_manip_internal_Rig_T *iobj_1, j_robotics_manip_internal_Rig_T
   *iobj_2, j_robotics_manip_internal_Rig_T *iobj_3,
   j_robotics_manip_internal_Rig_T *iobj_4, j_robotics_manip_internal_Rig_T
   *iobj_5, j_robotics_manip_internal_Rig_T *iobj_6,
   j_robotics_manip_internal_Rig_T *iobj_7, j_robotics_manip_internal_Rig_T
   *iobj_8, j_robotics_manip_internal_Rig_T *iobj_9);
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

  (ekf_M->Timing.TaskCounters.TID[2])++;
  if ((ekf_M->Timing.TaskCounters.TID[2]) > 249) {// Sample time: [1.0s, 0.0s]
    ekf_M->Timing.TaskCounters.TID[2] = 0;
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
  ekf_derivatives();

  // f1 = f(t + (h/2), y + (h/2)*f0)
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  ekf_step();
  ekf_derivatives();

  // f2 = f(t + (h/2), y + (h/2)*f1)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  ekf_step();
  ekf_derivatives();

  // f3 = f(t + h, y + h*f2)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  ekf_step();
  ekf_derivatives();

  // tnew = t + h
  // ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3)
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void ekf_SystemCore_step(boolean_T *varargout_1, real_T varargout_2_Data
  [7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_ekf_299.getLatestMessage(&ekf_B.b_varargout_2_m);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = ekf_B.b_varargout_2_m.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    ekf_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    ekf_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = ekf_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &ekf_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_ekf_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    ekf_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    ekf_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void ekf_SystemCore_step_i(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_ekf_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_ekf_638.getLatestMessage(&ekf_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = ekf_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    ekf_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    ekf_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = ekf_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &ekf_B.b_varargout_2.Layout.Dim[0], sizeof
         (SL_Bus_ekf_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    ekf_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    ekf_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void ekf_emxInit_real_T(emxArray_real_T_ekf_T **pEmxArray, int32_T
  numDimensions)
{
  emxArray_real_T_ekf_T *emxArray;
  *pEmxArray = (emxArray_real_T_ekf_T *)malloc(sizeof(emxArray_real_T_ekf_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ekf_B.i_g = 0; ekf_B.i_g < numDimensions; ekf_B.i_g++) {
    emxArray->size[ekf_B.i_g] = 0;
  }
}

static void ekf_emxEnsureCapacity_real_T(emxArray_real_T_ekf_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ekf_B.newNumel = 1;
  for (ekf_B.i_o = 0; ekf_B.i_o < emxArray->numDimensions; ekf_B.i_o++) {
    ekf_B.newNumel *= emxArray->size[ekf_B.i_o];
  }

  if (ekf_B.newNumel > emxArray->allocatedSize) {
    ekf_B.i_o = emxArray->allocatedSize;
    if (ekf_B.i_o < 16) {
      ekf_B.i_o = 16;
    }

    while (ekf_B.i_o < ekf_B.newNumel) {
      if (ekf_B.i_o > 1073741823) {
        ekf_B.i_o = MAX_int32_T;
      } else {
        ekf_B.i_o <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(ekf_B.i_o), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = ekf_B.i_o;
    emxArray->canFreeData = true;
  }
}

static void ekf_emxInit_f_cell_wrap(emxArray_f_cell_wrap_ekf_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_f_cell_wrap_ekf_T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_ekf_T *)malloc(sizeof
    (emxArray_f_cell_wrap_ekf_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_ekf_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ekf_B.i_o3 = 0; ekf_B.i_o3 < numDimensions; ekf_B.i_o3++) {
    emxArray->size[ekf_B.i_o3] = 0;
  }
}

static void e_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_ekf_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ekf_B.newNumel_iz = 1;
  for (ekf_B.i_ff = 0; ekf_B.i_ff < emxArray->numDimensions; ekf_B.i_ff++) {
    ekf_B.newNumel_iz *= emxArray->size[ekf_B.i_ff];
  }

  if (ekf_B.newNumel_iz > emxArray->allocatedSize) {
    ekf_B.i_ff = emxArray->allocatedSize;
    if (ekf_B.i_ff < 16) {
      ekf_B.i_ff = 16;
    }

    while (ekf_B.i_ff < ekf_B.newNumel_iz) {
      if (ekf_B.i_ff > 1073741823) {
        ekf_B.i_ff = MAX_int32_T;
      } else {
        ekf_B.i_ff <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(ekf_B.i_ff), sizeof(f_cell_wrap_ekf_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_ekf_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_ekf_T *)newData;
    emxArray->allocatedSize = ekf_B.i_ff;
    emxArray->canFreeData = true;
  }
}

static void ek_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_ekf_T *obj,
  real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (ekf_B.b_kstr_c = 0; ekf_B.b_kstr_c < 8; ekf_B.b_kstr_c++) {
    ekf_B.b_b[ekf_B.b_kstr_c] = tmp[ekf_B.b_kstr_c];
  }

  ekf_B.b_bool_p = false;
  if (obj->Type->size[1] == 8) {
    ekf_B.b_kstr_c = 1;
    do {
      exitg1 = 0;
      if (ekf_B.b_kstr_c - 1 < 8) {
        ekf_B.kstr_m = ekf_B.b_kstr_c - 1;
        if (obj->Type->data[ekf_B.kstr_m] != ekf_B.b_b[ekf_B.kstr_m]) {
          exitg1 = 1;
        } else {
          ekf_B.b_kstr_c++;
        }
      } else {
        ekf_B.b_bool_p = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (ekf_B.b_bool_p) {
    guard1 = true;
  } else {
    for (ekf_B.b_kstr_c = 0; ekf_B.b_kstr_c < 9; ekf_B.b_kstr_c++) {
      ekf_B.b[ekf_B.b_kstr_c] = tmp_0[ekf_B.b_kstr_c];
    }

    ekf_B.b_bool_p = false;
    if (obj->Type->size[1] == 9) {
      ekf_B.b_kstr_c = 1;
      do {
        exitg1 = 0;
        if (ekf_B.b_kstr_c - 1 < 9) {
          ekf_B.kstr_m = ekf_B.b_kstr_c - 1;
          if (obj->Type->data[ekf_B.kstr_m] != ekf_B.b[ekf_B.kstr_m]) {
            exitg1 = 1;
          } else {
            ekf_B.b_kstr_c++;
          }
        } else {
          ekf_B.b_bool_p = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (ekf_B.b_bool_p) {
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

static void ekf_normalizeRows(const real_T matrix[3], real_T normRowMatrix[3])
{
  ekf_B.b_j = 1.0 / sqrt((matrix[0] * matrix[0] + matrix[1] * matrix[1]) +
    matrix[2] * matrix[2]);
  normRowMatrix[0] = matrix[0] * ekf_B.b_j;
  normRowMatrix[1] = matrix[1] * ekf_B.b_j;
  normRowMatrix[2] = matrix[2] * ekf_B.b_j;
}

static void ekf_cat(real_T varargin_1, real_T varargin_2, real_T varargin_3,
                    real_T varargin_4, real_T varargin_5, real_T varargin_6,
                    real_T varargin_7, real_T varargin_8, real_T varargin_9,
                    real_T y[9])
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

static void rigidBodyJoint_transformBodyT_i(const rigidBodyJoint_ekf_T *obj,
  const real_T q_data[], const int32_T *q_size, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (ekf_B.b_kstr = 0; ekf_B.b_kstr < 5; ekf_B.b_kstr++) {
    ekf_B.b_ny[ekf_B.b_kstr] = tmp[ekf_B.b_kstr];
  }

  ekf_B.b_bool_f = false;
  if (obj->Type->size[1] == 5) {
    ekf_B.b_kstr = 1;
    do {
      exitg1 = 0;
      if (ekf_B.b_kstr - 1 < 5) {
        ekf_B.kstr = ekf_B.b_kstr - 1;
        if (obj->Type->data[ekf_B.kstr] != ekf_B.b_ny[ekf_B.kstr]) {
          exitg1 = 1;
        } else {
          ekf_B.b_kstr++;
        }
      } else {
        ekf_B.b_bool_f = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (ekf_B.b_bool_f) {
    ekf_B.b_kstr = 0;
  } else {
    for (ekf_B.b_kstr = 0; ekf_B.b_kstr < 8; ekf_B.b_kstr++) {
      ekf_B.b_o[ekf_B.b_kstr] = tmp_0[ekf_B.b_kstr];
    }

    ekf_B.b_bool_f = false;
    if (obj->Type->size[1] == 8) {
      ekf_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (ekf_B.b_kstr - 1 < 8) {
          ekf_B.kstr = ekf_B.b_kstr - 1;
          if (obj->Type->data[ekf_B.kstr] != ekf_B.b_o[ekf_B.kstr]) {
            exitg1 = 1;
          } else {
            ekf_B.b_kstr++;
          }
        } else {
          ekf_B.b_bool_f = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (ekf_B.b_bool_f) {
      ekf_B.b_kstr = 1;
    } else {
      ekf_B.b_kstr = -1;
    }
  }

  switch (ekf_B.b_kstr) {
   case 0:
    memset(&ekf_B.TJ[0], 0, sizeof(real_T) << 4U);
    ekf_B.TJ[0] = 1.0;
    ekf_B.TJ[5] = 1.0;
    ekf_B.TJ[10] = 1.0;
    ekf_B.TJ[15] = 1.0;
    break;

   case 1:
    ek_rigidBodyJoint_get_JointAxis(obj, ekf_B.v);
    ekf_B.result_data[0] = ekf_B.v[0];
    ekf_B.result_data[1] = ekf_B.v[1];
    ekf_B.result_data[2] = ekf_B.v[2];
    if (0 <= (*q_size != 0) - 1) {
      ekf_B.result_data[3] = q_data[0];
    }

    ekf_normalizeRows(&ekf_B.result_data[0], ekf_B.v);
    ekf_B.cth = cos(ekf_B.result_data[3]);
    ekf_B.sth = sin(ekf_B.result_data[3]);
    ekf_B.tempR_tmp = ekf_B.v[1] * ekf_B.v[0] * (1.0 - ekf_B.cth);
    ekf_B.tempR_tmp_b = ekf_B.v[2] * ekf_B.sth;
    ekf_B.tempR_tmp_l = ekf_B.v[2] * ekf_B.v[0] * (1.0 - ekf_B.cth);
    ekf_B.tempR_tmp_h = ekf_B.v[1] * ekf_B.sth;
    ekf_B.tempR_tmp_bn = ekf_B.v[2] * ekf_B.v[1] * (1.0 - ekf_B.cth);
    ekf_B.sth *= ekf_B.v[0];
    ekf_cat(ekf_B.v[0] * ekf_B.v[0] * (1.0 - ekf_B.cth) + ekf_B.cth,
            ekf_B.tempR_tmp - ekf_B.tempR_tmp_b, ekf_B.tempR_tmp_l +
            ekf_B.tempR_tmp_h, ekf_B.tempR_tmp + ekf_B.tempR_tmp_b, ekf_B.v[1] *
            ekf_B.v[1] * (1.0 - ekf_B.cth) + ekf_B.cth, ekf_B.tempR_tmp_bn -
            ekf_B.sth, ekf_B.tempR_tmp_l - ekf_B.tempR_tmp_h, ekf_B.tempR_tmp_bn
            + ekf_B.sth, ekf_B.v[2] * ekf_B.v[2] * (1.0 - ekf_B.cth) + ekf_B.cth,
            ekf_B.tempR);
    for (ekf_B.b_kstr = 0; ekf_B.b_kstr < 3; ekf_B.b_kstr++) {
      ekf_B.kstr = ekf_B.b_kstr + 1;
      ekf_B.R_g1[ekf_B.kstr - 1] = ekf_B.tempR[(ekf_B.kstr - 1) * 3];
      ekf_B.kstr = ekf_B.b_kstr + 1;
      ekf_B.R_g1[ekf_B.kstr + 2] = ekf_B.tempR[(ekf_B.kstr - 1) * 3 + 1];
      ekf_B.kstr = ekf_B.b_kstr + 1;
      ekf_B.R_g1[ekf_B.kstr + 5] = ekf_B.tempR[(ekf_B.kstr - 1) * 3 + 2];
    }

    memset(&ekf_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (ekf_B.b_kstr = 0; ekf_B.b_kstr < 3; ekf_B.b_kstr++) {
      ekf_B.kstr = ekf_B.b_kstr << 2;
      ekf_B.TJ[ekf_B.kstr] = ekf_B.R_g1[3 * ekf_B.b_kstr];
      ekf_B.TJ[ekf_B.kstr + 1] = ekf_B.R_g1[3 * ekf_B.b_kstr + 1];
      ekf_B.TJ[ekf_B.kstr + 2] = ekf_B.R_g1[3 * ekf_B.b_kstr + 2];
    }

    ekf_B.TJ[15] = 1.0;
    break;

   default:
    ek_rigidBodyJoint_get_JointAxis(obj, ekf_B.v);
    memset(&ekf_B.tempR[0], 0, 9U * sizeof(real_T));
    ekf_B.tempR[0] = 1.0;
    ekf_B.tempR[4] = 1.0;
    ekf_B.tempR[8] = 1.0;
    for (ekf_B.b_kstr = 0; ekf_B.b_kstr < 3; ekf_B.b_kstr++) {
      ekf_B.kstr = ekf_B.b_kstr << 2;
      ekf_B.TJ[ekf_B.kstr] = ekf_B.tempR[3 * ekf_B.b_kstr];
      ekf_B.TJ[ekf_B.kstr + 1] = ekf_B.tempR[3 * ekf_B.b_kstr + 1];
      ekf_B.TJ[ekf_B.kstr + 2] = ekf_B.tempR[3 * ekf_B.b_kstr + 2];
      ekf_B.TJ[ekf_B.b_kstr + 12] = ekf_B.v[ekf_B.b_kstr] * q_data[0];
    }

    ekf_B.TJ[3] = 0.0;
    ekf_B.TJ[7] = 0.0;
    ekf_B.TJ[11] = 0.0;
    ekf_B.TJ[15] = 1.0;
    break;
  }

  for (ekf_B.b_kstr = 0; ekf_B.b_kstr < 4; ekf_B.b_kstr++) {
    for (ekf_B.kstr = 0; ekf_B.kstr < 4; ekf_B.kstr++) {
      ekf_B.obj_tmp_tmp = ekf_B.kstr << 2;
      ekf_B.obj_tmp = ekf_B.b_kstr + ekf_B.obj_tmp_tmp;
      ekf_B.obj[ekf_B.obj_tmp] = 0.0;
      ekf_B.obj[ekf_B.obj_tmp] += ekf_B.TJ[ekf_B.obj_tmp_tmp] *
        obj->JointToParentTransform[ekf_B.b_kstr];
      ekf_B.obj[ekf_B.obj_tmp] += ekf_B.TJ[ekf_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[ekf_B.b_kstr + 4];
      ekf_B.obj[ekf_B.obj_tmp] += ekf_B.TJ[ekf_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[ekf_B.b_kstr + 8];
      ekf_B.obj[ekf_B.obj_tmp] += ekf_B.TJ[ekf_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[ekf_B.b_kstr + 12];
    }

    for (ekf_B.kstr = 0; ekf_B.kstr < 4; ekf_B.kstr++) {
      ekf_B.obj_tmp_tmp = ekf_B.kstr << 2;
      ekf_B.obj_tmp = ekf_B.b_kstr + ekf_B.obj_tmp_tmp;
      T[ekf_B.obj_tmp] = 0.0;
      T[ekf_B.obj_tmp] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp] *
        ekf_B.obj[ekf_B.b_kstr];
      T[ekf_B.obj_tmp] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp + 1] *
        ekf_B.obj[ekf_B.b_kstr + 4];
      T[ekf_B.obj_tmp] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp + 2] *
        ekf_B.obj[ekf_B.b_kstr + 8];
      T[ekf_B.obj_tmp] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp + 3] *
        ekf_B.obj[ekf_B.b_kstr + 12];
    }
  }
}

static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_ekf_T *obj,
  real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (ekf_B.b_kstr_a = 0; ekf_B.b_kstr_a < 5; ekf_B.b_kstr_a++) {
    ekf_B.b_oy[ekf_B.b_kstr_a] = tmp[ekf_B.b_kstr_a];
  }

  ekf_B.b_bool_o = false;
  if (obj->Type->size[1] == 5) {
    ekf_B.b_kstr_a = 1;
    do {
      exitg1 = 0;
      if (ekf_B.b_kstr_a - 1 < 5) {
        ekf_B.kstr_e = ekf_B.b_kstr_a - 1;
        if (obj->Type->data[ekf_B.kstr_e] != ekf_B.b_oy[ekf_B.kstr_e]) {
          exitg1 = 1;
        } else {
          ekf_B.b_kstr_a++;
        }
      } else {
        ekf_B.b_bool_o = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (ekf_B.b_bool_o) {
    ekf_B.b_kstr_a = 0;
  } else {
    for (ekf_B.b_kstr_a = 0; ekf_B.b_kstr_a < 8; ekf_B.b_kstr_a++) {
      ekf_B.b_n[ekf_B.b_kstr_a] = tmp_0[ekf_B.b_kstr_a];
    }

    ekf_B.b_bool_o = false;
    if (obj->Type->size[1] == 8) {
      ekf_B.b_kstr_a = 1;
      do {
        exitg1 = 0;
        if (ekf_B.b_kstr_a - 1 < 8) {
          ekf_B.kstr_e = ekf_B.b_kstr_a - 1;
          if (obj->Type->data[ekf_B.kstr_e] != ekf_B.b_n[ekf_B.kstr_e]) {
            exitg1 = 1;
          } else {
            ekf_B.b_kstr_a++;
          }
        } else {
          ekf_B.b_bool_o = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (ekf_B.b_bool_o) {
      ekf_B.b_kstr_a = 1;
    } else {
      ekf_B.b_kstr_a = -1;
    }
  }

  switch (ekf_B.b_kstr_a) {
   case 0:
    memset(&ekf_B.TJ_p[0], 0, sizeof(real_T) << 4U);
    ekf_B.TJ_p[0] = 1.0;
    ekf_B.TJ_p[5] = 1.0;
    ekf_B.TJ_p[10] = 1.0;
    ekf_B.TJ_p[15] = 1.0;
    break;

   case 1:
    ek_rigidBodyJoint_get_JointAxis(obj, ekf_B.v_d);
    ekf_B.v_dy[0] = ekf_B.v_d[0];
    ekf_B.v_dy[1] = ekf_B.v_d[1];
    ekf_B.v_dy[2] = ekf_B.v_d[2];
    ekf_normalizeRows(ekf_B.v_dy, ekf_B.v_d);
    ekf_B.tempR_tmp_f = ekf_B.v_d[1] * ekf_B.v_d[0] * 0.0;
    ekf_B.tempR_tmp_a = ekf_B.v_d[2] * ekf_B.v_d[0] * 0.0;
    ekf_B.tempR_tmp_j = ekf_B.v_d[2] * ekf_B.v_d[1] * 0.0;
    ekf_cat(ekf_B.v_d[0] * ekf_B.v_d[0] * 0.0 + 1.0, ekf_B.tempR_tmp_f -
            ekf_B.v_d[2] * 0.0, ekf_B.tempR_tmp_a + ekf_B.v_d[1] * 0.0,
            ekf_B.tempR_tmp_f + ekf_B.v_d[2] * 0.0, ekf_B.v_d[1] * ekf_B.v_d[1] *
            0.0 + 1.0, ekf_B.tempR_tmp_j - ekf_B.v_d[0] * 0.0, ekf_B.tempR_tmp_a
            - ekf_B.v_d[1] * 0.0, ekf_B.tempR_tmp_j + ekf_B.v_d[0] * 0.0,
            ekf_B.v_d[2] * ekf_B.v_d[2] * 0.0 + 1.0, ekf_B.tempR_n);
    for (ekf_B.b_kstr_a = 0; ekf_B.b_kstr_a < 3; ekf_B.b_kstr_a++) {
      ekf_B.kstr_e = ekf_B.b_kstr_a + 1;
      ekf_B.R_m[ekf_B.kstr_e - 1] = ekf_B.tempR_n[(ekf_B.kstr_e - 1) * 3];
      ekf_B.kstr_e = ekf_B.b_kstr_a + 1;
      ekf_B.R_m[ekf_B.kstr_e + 2] = ekf_B.tempR_n[(ekf_B.kstr_e - 1) * 3 + 1];
      ekf_B.kstr_e = ekf_B.b_kstr_a + 1;
      ekf_B.R_m[ekf_B.kstr_e + 5] = ekf_B.tempR_n[(ekf_B.kstr_e - 1) * 3 + 2];
    }

    memset(&ekf_B.TJ_p[0], 0, sizeof(real_T) << 4U);
    for (ekf_B.b_kstr_a = 0; ekf_B.b_kstr_a < 3; ekf_B.b_kstr_a++) {
      ekf_B.kstr_e = ekf_B.b_kstr_a << 2;
      ekf_B.TJ_p[ekf_B.kstr_e] = ekf_B.R_m[3 * ekf_B.b_kstr_a];
      ekf_B.TJ_p[ekf_B.kstr_e + 1] = ekf_B.R_m[3 * ekf_B.b_kstr_a + 1];
      ekf_B.TJ_p[ekf_B.kstr_e + 2] = ekf_B.R_m[3 * ekf_B.b_kstr_a + 2];
    }

    ekf_B.TJ_p[15] = 1.0;
    break;

   default:
    ek_rigidBodyJoint_get_JointAxis(obj, ekf_B.v_d);
    memset(&ekf_B.tempR_n[0], 0, 9U * sizeof(real_T));
    ekf_B.tempR_n[0] = 1.0;
    ekf_B.tempR_n[4] = 1.0;
    ekf_B.tempR_n[8] = 1.0;
    for (ekf_B.b_kstr_a = 0; ekf_B.b_kstr_a < 3; ekf_B.b_kstr_a++) {
      ekf_B.kstr_e = ekf_B.b_kstr_a << 2;
      ekf_B.TJ_p[ekf_B.kstr_e] = ekf_B.tempR_n[3 * ekf_B.b_kstr_a];
      ekf_B.TJ_p[ekf_B.kstr_e + 1] = ekf_B.tempR_n[3 * ekf_B.b_kstr_a + 1];
      ekf_B.TJ_p[ekf_B.kstr_e + 2] = ekf_B.tempR_n[3 * ekf_B.b_kstr_a + 2];
      ekf_B.TJ_p[ekf_B.b_kstr_a + 12] = ekf_B.v_d[ekf_B.b_kstr_a] * 0.0;
    }

    ekf_B.TJ_p[3] = 0.0;
    ekf_B.TJ_p[7] = 0.0;
    ekf_B.TJ_p[11] = 0.0;
    ekf_B.TJ_p[15] = 1.0;
    break;
  }

  for (ekf_B.b_kstr_a = 0; ekf_B.b_kstr_a < 4; ekf_B.b_kstr_a++) {
    for (ekf_B.kstr_e = 0; ekf_B.kstr_e < 4; ekf_B.kstr_e++) {
      ekf_B.obj_tmp_tmp_i = ekf_B.kstr_e << 2;
      ekf_B.obj_tmp_a = ekf_B.b_kstr_a + ekf_B.obj_tmp_tmp_i;
      ekf_B.obj_c[ekf_B.obj_tmp_a] = 0.0;
      ekf_B.obj_c[ekf_B.obj_tmp_a] += ekf_B.TJ_p[ekf_B.obj_tmp_tmp_i] *
        obj->JointToParentTransform[ekf_B.b_kstr_a];
      ekf_B.obj_c[ekf_B.obj_tmp_a] += ekf_B.TJ_p[ekf_B.obj_tmp_tmp_i + 1] *
        obj->JointToParentTransform[ekf_B.b_kstr_a + 4];
      ekf_B.obj_c[ekf_B.obj_tmp_a] += ekf_B.TJ_p[ekf_B.obj_tmp_tmp_i + 2] *
        obj->JointToParentTransform[ekf_B.b_kstr_a + 8];
      ekf_B.obj_c[ekf_B.obj_tmp_a] += ekf_B.TJ_p[ekf_B.obj_tmp_tmp_i + 3] *
        obj->JointToParentTransform[ekf_B.b_kstr_a + 12];
    }

    for (ekf_B.kstr_e = 0; ekf_B.kstr_e < 4; ekf_B.kstr_e++) {
      ekf_B.obj_tmp_tmp_i = ekf_B.kstr_e << 2;
      ekf_B.obj_tmp_a = ekf_B.b_kstr_a + ekf_B.obj_tmp_tmp_i;
      T[ekf_B.obj_tmp_a] = 0.0;
      T[ekf_B.obj_tmp_a] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp_i] *
        ekf_B.obj_c[ekf_B.b_kstr_a];
      T[ekf_B.obj_tmp_a] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp_i + 1] *
        ekf_B.obj_c[ekf_B.b_kstr_a + 4];
      T[ekf_B.obj_tmp_a] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp_i + 2] *
        ekf_B.obj_c[ekf_B.b_kstr_a + 8];
      T[ekf_B.obj_tmp_a] += obj->ChildToJointTransform[ekf_B.obj_tmp_tmp_i + 3] *
        ekf_B.obj_c[ekf_B.b_kstr_a + 12];
    }
  }
}

static void ekf_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (ekf_B.i2 = 0; ekf_B.i2 < 3; ekf_B.i2++) {
    ekf_B.R_p[3 * ekf_B.i2] = T[ekf_B.i2];
    ekf_B.R_p[3 * ekf_B.i2 + 1] = T[ekf_B.i2 + 4];
    ekf_B.R_p[3 * ekf_B.i2 + 2] = T[ekf_B.i2 + 8];
  }

  for (ekf_B.i2 = 0; ekf_B.i2 < 9; ekf_B.i2++) {
    ekf_B.R_l[ekf_B.i2] = -ekf_B.R_p[ekf_B.i2];
  }

  for (ekf_B.i2 = 0; ekf_B.i2 < 3; ekf_B.i2++) {
    ekf_B.Tinv_tmp = ekf_B.i2 << 2;
    Tinv[ekf_B.Tinv_tmp] = ekf_B.R_p[3 * ekf_B.i2];
    Tinv[ekf_B.Tinv_tmp + 1] = ekf_B.R_p[3 * ekf_B.i2 + 1];
    Tinv[ekf_B.Tinv_tmp + 2] = ekf_B.R_p[3 * ekf_B.i2 + 2];
    Tinv[ekf_B.i2 + 12] = ekf_B.R_l[ekf_B.i2 + 6] * T[14] + (ekf_B.R_l[ekf_B.i2
      + 3] * T[13] + ekf_B.R_l[ekf_B.i2] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void ekf_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  ekf_B.dv5[0] = 0.0;
  ekf_B.dv5[3] = -T[14];
  ekf_B.dv5[6] = T[13];
  ekf_B.dv5[1] = T[14];
  ekf_B.dv5[4] = 0.0;
  ekf_B.dv5[7] = -T[12];
  ekf_B.dv5[2] = -T[13];
  ekf_B.dv5[5] = T[12];
  ekf_B.dv5[8] = 0.0;
  for (ekf_B.i_l = 0; ekf_B.i_l < 3; ekf_B.i_l++) {
    for (ekf_B.X_tmp = 0; ekf_B.X_tmp < 3; ekf_B.X_tmp++) {
      ekf_B.X_tmp_o = ekf_B.i_l + 3 * ekf_B.X_tmp;
      ekf_B.dv6[ekf_B.X_tmp_o] = 0.0;
      ekf_B.i1 = ekf_B.X_tmp << 2;
      ekf_B.dv6[ekf_B.X_tmp_o] += T[ekf_B.i1] * ekf_B.dv5[ekf_B.i_l];
      ekf_B.dv6[ekf_B.X_tmp_o] += T[ekf_B.i1 + 1] * ekf_B.dv5[ekf_B.i_l + 3];
      ekf_B.dv6[ekf_B.X_tmp_o] += T[ekf_B.i1 + 2] * ekf_B.dv5[ekf_B.i_l + 6];
      X[ekf_B.X_tmp + 6 * ekf_B.i_l] = T[(ekf_B.i_l << 2) + ekf_B.X_tmp];
      X[ekf_B.X_tmp + 6 * (ekf_B.i_l + 3)] = 0.0;
    }
  }

  for (ekf_B.i_l = 0; ekf_B.i_l < 3; ekf_B.i_l++) {
    X[6 * ekf_B.i_l + 3] = ekf_B.dv6[3 * ekf_B.i_l];
    ekf_B.X_tmp = ekf_B.i_l << 2;
    ekf_B.X_tmp_o = 6 * (ekf_B.i_l + 3);
    X[ekf_B.X_tmp_o + 3] = T[ekf_B.X_tmp];
    X[6 * ekf_B.i_l + 4] = ekf_B.dv6[3 * ekf_B.i_l + 1];
    X[ekf_B.X_tmp_o + 4] = T[ekf_B.X_tmp + 1];
    X[6 * ekf_B.i_l + 5] = ekf_B.dv6[3 * ekf_B.i_l + 2];
    X[ekf_B.X_tmp_o + 5] = T[ekf_B.X_tmp + 2];
  }
}

static void ekf_emxInit_char_T(emxArray_char_T_ekf_T **pEmxArray, int32_T
  numDimensions)
{
  emxArray_char_T_ekf_T *emxArray;
  *pEmxArray = (emxArray_char_T_ekf_T *)malloc(sizeof(emxArray_char_T_ekf_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (ekf_B.i_c = 0; ekf_B.i_c < numDimensions; ekf_B.i_c++) {
    emxArray->size[ekf_B.i_c] = 0;
  }
}

static void ekf_emxEnsureCapacity_char_T(emxArray_char_T_ekf_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  ekf_B.newNumel_i = 1;
  for (ekf_B.i_f = 0; ekf_B.i_f < emxArray->numDimensions; ekf_B.i_f++) {
    ekf_B.newNumel_i *= emxArray->size[ekf_B.i_f];
  }

  if (ekf_B.newNumel_i > emxArray->allocatedSize) {
    ekf_B.i_f = emxArray->allocatedSize;
    if (ekf_B.i_f < 16) {
      ekf_B.i_f = 16;
    }

    while (ekf_B.i_f < ekf_B.newNumel_i) {
      if (ekf_B.i_f > 1073741823) {
        ekf_B.i_f = MAX_int32_T;
      } else {
        ekf_B.i_f <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(ekf_B.i_f), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = ekf_B.i_f;
    emxArray->canFreeData = true;
  }
}

static void ekf_emxFree_real_T(emxArray_real_T_ekf_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_ekf_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_ekf_T *)NULL;
  }
}

static void ekf_emxFree_char_T(emxArray_char_T_ekf_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_ekf_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_ekf_T *)NULL;
  }
}

static void ekf_emxFree_f_cell_wrap(emxArray_f_cell_wrap_ekf_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_ekf_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_ekf_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_ekf_T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMatri(k_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], emxArray_real_T_ekf_T *H, emxArray_real_T_ekf_T
  *lambda)
{
  emxArray_f_cell_wrap_ekf_T *Ic;
  emxArray_f_cell_wrap_ekf_T *X;
  emxArray_real_T_ekf_T *lambda_;
  emxArray_real_T_ekf_T *Si;
  emxArray_real_T_ekf_T *Fi;
  emxArray_real_T_ekf_T *Sj;
  emxArray_real_T_ekf_T *Hji;
  emxArray_real_T_ekf_T *s;
  j_robotics_manip_internal_Rig_T *obj;
  emxArray_char_T_ekf_T *a;
  emxArray_real_T_ekf_T *a_0;
  emxArray_real_T_ekf_T *B;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T exitg1;
  int32_T exitg2;
  ekf_B.nb_d = robot->NumBodies;
  ekf_B.vNum_e = robot->VelocityNumber;
  ekf_B.nm1d2 = H->size[0] * H->size[1];
  ekf_B.b_i_m = static_cast<int32_T>(ekf_B.vNum_e);
  H->size[0] = ekf_B.b_i_m;
  H->size[1] = ekf_B.b_i_m;
  ekf_emxEnsureCapacity_real_T(H, ekf_B.nm1d2);
  ekf_B.n_m = ekf_B.b_i_m * ekf_B.b_i_m - 1;
  for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
    H->data[ekf_B.nm1d2] = 0.0;
  }

  ekf_emxInit_real_T(&lambda_, 2);
  ekf_B.nm1d2 = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  ekf_B.unnamed_idx_1_a = static_cast<int32_T>(ekf_B.nb_d);
  lambda_->size[1] = ekf_B.unnamed_idx_1_a;
  ekf_emxEnsureCapacity_real_T(lambda_, ekf_B.nm1d2);
  ekf_B.idx = ekf_B.unnamed_idx_1_a - 1;
  for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.idx; ekf_B.nm1d2++) {
    lambda_->data[ekf_B.nm1d2] = 0.0;
  }

  ekf_B.nm1d2 = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = ekf_B.b_i_m;
  ekf_emxEnsureCapacity_real_T(lambda, ekf_B.nm1d2);
  ekf_B.n_m = ekf_B.b_i_m - 1;
  for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
    lambda->data[ekf_B.nm1d2] = 0.0;
  }

  ekf_emxInit_f_cell_wrap(&Ic, 2);
  ekf_emxInit_f_cell_wrap(&X, 2);
  ekf_B.nm1d2 = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = ekf_B.unnamed_idx_1_a;
  e_emxEnsureCapacity_f_cell_wrap(Ic, ekf_B.nm1d2);
  ekf_B.nm1d2 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = ekf_B.unnamed_idx_1_a;
  e_emxEnsureCapacity_f_cell_wrap(X, ekf_B.nm1d2);
  for (ekf_B.b_i_m = 0; ekf_B.b_i_m <= ekf_B.idx; ekf_B.b_i_m++) {
    for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 36; ekf_B.nm1d2++) {
      Ic->data[ekf_B.b_i_m].f1[ekf_B.nm1d2] = robot->Bodies[ekf_B.b_i_m]
        ->SpatialInertia[ekf_B.nm1d2];
    }

    ekf_B.vNum_e = robot->PositionDoFMap[ekf_B.b_i_m];
    ekf_B.p_idx_1 = robot->PositionDoFMap[ekf_B.b_i_m + 10];
    if (ekf_B.p_idx_1 < ekf_B.vNum_e) {
      obj = robot->Bodies[ekf_B.b_i_m];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, ekf_B.T_b);
    } else {
      if (ekf_B.vNum_e > ekf_B.p_idx_1) {
        ekf_B.unnamed_idx_1_a = 0;
        ekf_B.nm1d2 = -1;
      } else {
        ekf_B.unnamed_idx_1_a = static_cast<int32_T>(ekf_B.vNum_e) - 1;
        ekf_B.nm1d2 = static_cast<int32_T>(ekf_B.p_idx_1) - 1;
      }

      obj = robot->Bodies[ekf_B.b_i_m];
      ekf_B.q_size_tmp = ekf_B.nm1d2 - ekf_B.unnamed_idx_1_a;
      ekf_B.q_size_p = ekf_B.q_size_tmp + 1;
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.q_size_tmp; ekf_B.nm1d2++) {
        ekf_B.q_data_j[ekf_B.nm1d2] = q[ekf_B.unnamed_idx_1_a + ekf_B.nm1d2];
      }

      rigidBodyJoint_transformBodyT_i(&obj->JointInternal, ekf_B.q_data_j,
        &ekf_B.q_size_p, ekf_B.T_b);
    }

    ekf_tforminv(ekf_B.T_b, ekf_B.dv1);
    ekf_tformToSpatialXform(ekf_B.dv1, X->data[ekf_B.b_i_m].f1);
  }

  ekf_B.idx = static_cast<int32_T>(((-1.0 - ekf_B.nb_d) + 1.0) / -1.0) - 1;
  ekf_emxInit_real_T(&Si, 2);
  ekf_emxInit_real_T(&Fi, 2);
  ekf_emxInit_real_T(&Sj, 2);
  ekf_emxInit_real_T(&Hji, 2);
  ekf_emxInit_char_T(&a, 2);
  ekf_emxInit_real_T(&a_0, 2);
  ekf_emxInit_real_T(&B, 2);
  for (ekf_B.unnamed_idx_1_a = 0; ekf_B.unnamed_idx_1_a <= ekf_B.idx;
       ekf_B.unnamed_idx_1_a++) {
    ekf_B.pid_tmp = static_cast<int32_T>(ekf_B.nb_d + -static_cast<real_T>
      (ekf_B.unnamed_idx_1_a));
    ekf_B.q_size_tmp = ekf_B.pid_tmp - 1;
    ekf_B.pid = robot->Bodies[ekf_B.q_size_tmp]->ParentIndex;
    ekf_B.vNum_e = robot->VelocityDoFMap[ekf_B.pid_tmp - 1];
    ekf_B.p_idx_1 = robot->VelocityDoFMap[ekf_B.pid_tmp + 9];
    if (ekf_B.pid > 0.0) {
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 6; ekf_B.nm1d2++) {
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          ekf_B.n_m = ekf_B.nm1d2 + 6 * ekf_B.b_i_m;
          ekf_B.X[ekf_B.n_m] = 0.0;
          for (ekf_B.cb = 0; ekf_B.cb < 6; ekf_B.cb++) {
            ekf_B.X[ekf_B.n_m] += X->data[ekf_B.q_size_tmp].f1[6 * ekf_B.nm1d2 +
              ekf_B.cb] * Ic->data[ekf_B.q_size_tmp].f1[6 * ekf_B.b_i_m +
              ekf_B.cb];
          }
        }
      }

      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 6; ekf_B.nm1d2++) {
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          ekf_B.b_idx_0_b = 0.0;
          for (ekf_B.cb = 0; ekf_B.cb < 6; ekf_B.cb++) {
            ekf_B.b_idx_0_b += ekf_B.X[6 * ekf_B.cb + ekf_B.nm1d2] * X->
              data[ekf_B.q_size_tmp].f1[6 * ekf_B.b_i_m + ekf_B.cb];
          }

          ekf_B.cb = 6 * ekf_B.b_i_m + ekf_B.nm1d2;
          Ic->data[static_cast<int32_T>(ekf_B.pid) - 1].f1[ekf_B.cb] +=
            ekf_B.b_idx_0_b;
        }
      }

      lambda_->data[ekf_B.q_size_tmp] = ekf_B.pid;
      if (lambda_->data[ekf_B.q_size_tmp] > 0.0) {
        for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 5; ekf_B.nm1d2++) {
          ekf_B.b_i[ekf_B.nm1d2] = tmp[ekf_B.nm1d2];
        }
      }

      exitg1 = false;
      while ((!exitg1) && (lambda_->data[ekf_B.q_size_tmp] > 0.0)) {
        obj = robot->Bodies[static_cast<int32_T>(lambda_->data[ekf_B.q_size_tmp])
          - 1];
        ekf_B.nm1d2 = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = obj->JointInternal.Type->size[1];
        ekf_emxEnsureCapacity_char_T(a, ekf_B.nm1d2);
        ekf_B.n_m = obj->JointInternal.Type->size[0] * obj->
          JointInternal.Type->size[1] - 1;
        for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
          a->data[ekf_B.nm1d2] = obj->JointInternal.Type->data[ekf_B.nm1d2];
        }

        ekf_B.b_bool_e = false;
        if (a->size[1] == 5) {
          ekf_B.nm1d2 = 1;
          do {
            exitg2 = 0;
            if (ekf_B.nm1d2 - 1 < 5) {
              ekf_B.n_m = ekf_B.nm1d2 - 1;
              if (a->data[ekf_B.n_m] != ekf_B.b_i[ekf_B.n_m]) {
                exitg2 = 1;
              } else {
                ekf_B.nm1d2++;
              }
            } else {
              ekf_B.b_bool_e = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (ekf_B.b_bool_e) {
          lambda_->data[ekf_B.q_size_tmp] = robot->Bodies[static_cast<int32_T>
            (lambda_->data[ekf_B.q_size_tmp]) - 1]->ParentIndex;
        } else {
          exitg1 = true;
        }
      }
    }

    ekf_B.b_idx_0_b = robot->VelocityDoFMap[ekf_B.pid_tmp - 1];
    ekf_B.b_idx_1_j = robot->VelocityDoFMap[ekf_B.pid_tmp + 9];
    if (ekf_B.b_idx_0_b <= ekf_B.b_idx_1_j) {
      obj = robot->Bodies[ekf_B.q_size_tmp];
      ekf_B.nm1d2 = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      ekf_emxEnsureCapacity_real_T(Si, ekf_B.nm1d2);
      ekf_B.n_m = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
        Si->data[ekf_B.nm1d2] = obj->JointInternal.MotionSubspace->
          data[ekf_B.nm1d2];
      }

      ekf_B.n_m = Si->size[1] - 1;
      ekf_B.nm1d2 = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      ekf_emxEnsureCapacity_real_T(Fi, ekf_B.nm1d2);
      for (ekf_B.b_j_c = 0; ekf_B.b_j_c <= ekf_B.n_m; ekf_B.b_j_c++) {
        ekf_B.pid_tmp = ekf_B.b_j_c * 6 - 1;
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          Fi->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + 1] = 0.0;
        }

        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          ekf_B.aoffset_j = ekf_B.b_i_m * 6 - 1;
          ekf_B.temp = Si->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + 1];
          for (ekf_B.c_i_c = 0; ekf_B.c_i_c < 6; ekf_B.c_i_c++) {
            ekf_B.i_h = ekf_B.c_i_c + 1;
            ekf_B.nm1d2 = ekf_B.pid_tmp + ekf_B.i_h;
            Fi->data[ekf_B.nm1d2] += Ic->data[ekf_B.q_size_tmp]
              .f1[ekf_B.aoffset_j + ekf_B.i_h] * ekf_B.temp;
          }
        }
      }

      if (ekf_B.vNum_e > ekf_B.p_idx_1) {
        ekf_B.pid_tmp = 0;
        ekf_B.cb = 0;
      } else {
        ekf_B.pid_tmp = static_cast<int32_T>(ekf_B.vNum_e) - 1;
        ekf_B.cb = ekf_B.pid_tmp;
      }

      ekf_B.nm1d2 = a_0->size[0] * a_0->size[1];
      a_0->size[0] = Si->size[1];
      a_0->size[1] = 6;
      ekf_emxEnsureCapacity_real_T(a_0, ekf_B.nm1d2);
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 6; ekf_B.nm1d2++) {
        ekf_B.n_m = Si->size[1];
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.n_m; ekf_B.b_i_m++) {
          a_0->data[ekf_B.b_i_m + a_0->size[0] * ekf_B.nm1d2] = Si->data[6 *
            ekf_B.b_i_m + ekf_B.nm1d2];
        }
      }

      ekf_B.m_p = a_0->size[0];
      ekf_B.n_m = Fi->size[1] - 1;
      ekf_B.nm1d2 = Hji->size[0] * Hji->size[1];
      Hji->size[0] = a_0->size[0];
      Hji->size[1] = Fi->size[1];
      ekf_emxEnsureCapacity_real_T(Hji, ekf_B.nm1d2);
      for (ekf_B.b_j_c = 0; ekf_B.b_j_c <= ekf_B.n_m; ekf_B.b_j_c++) {
        ekf_B.coffset = ekf_B.b_j_c * ekf_B.m_p - 1;
        ekf_B.boffset = ekf_B.b_j_c * 6 - 1;
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.m_p; ekf_B.b_i_m++) {
          Hji->data[(ekf_B.coffset + ekf_B.b_i_m) + 1] = 0.0;
        }

        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          ekf_B.aoffset_j = ekf_B.b_i_m * ekf_B.m_p - 1;
          ekf_B.temp = Fi->data[(ekf_B.boffset + ekf_B.b_i_m) + 1];
          for (ekf_B.c_i_c = 0; ekf_B.c_i_c < ekf_B.m_p; ekf_B.c_i_c++) {
            ekf_B.i_h = ekf_B.c_i_c + 1;
            ekf_B.nm1d2 = ekf_B.coffset + ekf_B.i_h;
            Hji->data[ekf_B.nm1d2] += a_0->data[ekf_B.aoffset_j + ekf_B.i_h] *
              ekf_B.temp;
          }
        }
      }

      ekf_B.n_m = Hji->size[1];
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < ekf_B.n_m; ekf_B.nm1d2++) {
        ekf_B.b_j_c = Hji->size[0];
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.b_j_c; ekf_B.b_i_m++) {
          H->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + H->size[0] * (ekf_B.cb +
            ekf_B.nm1d2)] = Hji->data[Hji->size[0] * ekf_B.nm1d2 + ekf_B.b_i_m];
        }
      }

      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 6; ekf_B.nm1d2++) {
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          ekf_B.X[ekf_B.b_i_m + 6 * ekf_B.nm1d2] = X->data[ekf_B.q_size_tmp].f1
            [6 * ekf_B.b_i_m + ekf_B.nm1d2];
        }
      }

      ekf_B.nm1d2 = B->size[0] * B->size[1];
      B->size[0] = 6;
      B->size[1] = Fi->size[1];
      ekf_emxEnsureCapacity_real_T(B, ekf_B.nm1d2);
      ekf_B.n_m = Fi->size[0] * Fi->size[1] - 1;
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
        B->data[ekf_B.nm1d2] = Fi->data[ekf_B.nm1d2];
      }

      ekf_B.n_m = Fi->size[1];
      ekf_B.nm1d2 = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = ekf_B.n_m;
      ekf_emxEnsureCapacity_real_T(Fi, ekf_B.nm1d2);
      for (ekf_B.b_j_c = 0; ekf_B.b_j_c < ekf_B.n_m; ekf_B.b_j_c++) {
        ekf_B.pid_tmp = ekf_B.b_j_c * 6 - 1;
        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          Fi->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + 1] = 0.0;
        }

        for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
          ekf_B.aoffset_j = ekf_B.b_i_m * 6 - 1;
          ekf_B.temp = B->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + 1];
          for (ekf_B.c_i_c = 0; ekf_B.c_i_c < 6; ekf_B.c_i_c++) {
            ekf_B.i_h = ekf_B.c_i_c + 1;
            ekf_B.nm1d2 = ekf_B.pid_tmp + ekf_B.i_h;
            Fi->data[ekf_B.nm1d2] += ekf_B.X[ekf_B.aoffset_j + ekf_B.i_h] *
              ekf_B.temp;
          }
        }
      }

      while (ekf_B.pid > 0.0) {
        ekf_B.b_i_m = static_cast<int32_T>(ekf_B.pid);
        ekf_B.q_size_tmp = ekf_B.b_i_m - 1;
        obj = robot->Bodies[ekf_B.q_size_tmp];
        ekf_B.nm1d2 = Sj->size[0] * Sj->size[1];
        Sj->size[0] = 6;
        Sj->size[1] = obj->JointInternal.MotionSubspace->size[1];
        ekf_emxEnsureCapacity_real_T(Sj, ekf_B.nm1d2);
        ekf_B.n_m = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
          Sj->data[ekf_B.nm1d2] = obj->JointInternal.MotionSubspace->
            data[ekf_B.nm1d2];
        }

        ekf_B.b_idx_0_b = robot->VelocityDoFMap[ekf_B.b_i_m - 1];
        ekf_B.b_idx_1_j = robot->VelocityDoFMap[ekf_B.b_i_m + 9];
        if (ekf_B.b_idx_0_b <= ekf_B.b_idx_1_j) {
          ekf_B.nm1d2 = a_0->size[0] * a_0->size[1];
          a_0->size[0] = Sj->size[1];
          a_0->size[1] = 6;
          ekf_emxEnsureCapacity_real_T(a_0, ekf_B.nm1d2);
          for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 6; ekf_B.nm1d2++) {
            ekf_B.n_m = Sj->size[1];
            for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.n_m; ekf_B.b_i_m++) {
              a_0->data[ekf_B.b_i_m + a_0->size[0] * ekf_B.nm1d2] = Sj->data[6 *
                ekf_B.b_i_m + ekf_B.nm1d2];
            }
          }

          ekf_B.m_p = a_0->size[0];
          ekf_B.n_m = Fi->size[1] - 1;
          ekf_B.nm1d2 = Hji->size[0] * Hji->size[1];
          Hji->size[0] = a_0->size[0];
          Hji->size[1] = Fi->size[1];
          ekf_emxEnsureCapacity_real_T(Hji, ekf_B.nm1d2);
          for (ekf_B.b_j_c = 0; ekf_B.b_j_c <= ekf_B.n_m; ekf_B.b_j_c++) {
            ekf_B.coffset = ekf_B.b_j_c * ekf_B.m_p - 1;
            ekf_B.boffset = ekf_B.b_j_c * 6 - 1;
            for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.m_p; ekf_B.b_i_m++) {
              Hji->data[(ekf_B.coffset + ekf_B.b_i_m) + 1] = 0.0;
            }

            for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
              ekf_B.aoffset_j = ekf_B.b_i_m * ekf_B.m_p - 1;
              ekf_B.temp = Fi->data[(ekf_B.boffset + ekf_B.b_i_m) + 1];
              for (ekf_B.c_i_c = 0; ekf_B.c_i_c < ekf_B.m_p; ekf_B.c_i_c++) {
                ekf_B.i_h = ekf_B.c_i_c + 1;
                ekf_B.nm1d2 = ekf_B.coffset + ekf_B.i_h;
                Hji->data[ekf_B.nm1d2] += a_0->data[ekf_B.aoffset_j + ekf_B.i_h]
                  * ekf_B.temp;
              }
            }
          }

          if (ekf_B.b_idx_0_b > ekf_B.b_idx_1_j) {
            ekf_B.pid_tmp = 0;
          } else {
            ekf_B.pid_tmp = static_cast<int32_T>(ekf_B.b_idx_0_b) - 1;
          }

          if (ekf_B.vNum_e > ekf_B.p_idx_1) {
            ekf_B.cb = 0;
          } else {
            ekf_B.cb = static_cast<int32_T>(ekf_B.vNum_e) - 1;
          }

          ekf_B.n_m = Hji->size[1];
          for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < ekf_B.n_m; ekf_B.nm1d2++) {
            ekf_B.b_j_c = Hji->size[0];
            for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.b_j_c; ekf_B.b_i_m++) {
              H->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + H->size[0] * (ekf_B.cb +
                ekf_B.nm1d2)] = Hji->data[Hji->size[0] * ekf_B.nm1d2 +
                ekf_B.b_i_m];
            }
          }

          if (ekf_B.vNum_e > ekf_B.p_idx_1) {
            ekf_B.pid_tmp = 0;
          } else {
            ekf_B.pid_tmp = static_cast<int32_T>(ekf_B.vNum_e) - 1;
          }

          if (ekf_B.b_idx_0_b > ekf_B.b_idx_1_j) {
            ekf_B.cb = 0;
          } else {
            ekf_B.cb = static_cast<int32_T>(ekf_B.b_idx_0_b) - 1;
          }

          ekf_B.n_m = Hji->size[0];
          for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < ekf_B.n_m; ekf_B.nm1d2++) {
            ekf_B.b_j_c = Hji->size[1];
            for (ekf_B.b_i_m = 0; ekf_B.b_i_m < ekf_B.b_j_c; ekf_B.b_i_m++) {
              H->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + H->size[0] * (ekf_B.cb +
                ekf_B.nm1d2)] = Hji->data[Hji->size[0] * ekf_B.b_i_m +
                ekf_B.nm1d2];
            }
          }
        }

        for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 6; ekf_B.nm1d2++) {
          for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
            ekf_B.X[ekf_B.b_i_m + 6 * ekf_B.nm1d2] = X->data[ekf_B.q_size_tmp].
              f1[6 * ekf_B.b_i_m + ekf_B.nm1d2];
          }
        }

        ekf_B.nm1d2 = B->size[0] * B->size[1];
        B->size[0] = 6;
        B->size[1] = Fi->size[1];
        ekf_emxEnsureCapacity_real_T(B, ekf_B.nm1d2);
        ekf_B.n_m = Fi->size[0] * Fi->size[1] - 1;
        for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
          B->data[ekf_B.nm1d2] = Fi->data[ekf_B.nm1d2];
        }

        ekf_B.n_m = Fi->size[1];
        ekf_B.nm1d2 = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = ekf_B.n_m;
        ekf_emxEnsureCapacity_real_T(Fi, ekf_B.nm1d2);
        for (ekf_B.b_j_c = 0; ekf_B.b_j_c < ekf_B.n_m; ekf_B.b_j_c++) {
          ekf_B.pid_tmp = ekf_B.b_j_c * 6 - 1;
          for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
            Fi->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + 1] = 0.0;
          }

          for (ekf_B.b_i_m = 0; ekf_B.b_i_m < 6; ekf_B.b_i_m++) {
            ekf_B.aoffset_j = ekf_B.b_i_m * 6 - 1;
            ekf_B.temp = B->data[(ekf_B.pid_tmp + ekf_B.b_i_m) + 1];
            for (ekf_B.c_i_c = 0; ekf_B.c_i_c < 6; ekf_B.c_i_c++) {
              ekf_B.i_h = ekf_B.c_i_c + 1;
              ekf_B.nm1d2 = ekf_B.pid_tmp + ekf_B.i_h;
              Fi->data[ekf_B.nm1d2] += ekf_B.X[ekf_B.aoffset_j + ekf_B.i_h] *
                ekf_B.temp;
            }
          }
        }

        ekf_B.pid = robot->Bodies[ekf_B.q_size_tmp]->ParentIndex;
      }
    }
  }

  ekf_emxFree_real_T(&B);
  ekf_emxFree_real_T(&a_0);
  ekf_emxFree_char_T(&a);
  ekf_emxFree_real_T(&Hji);
  ekf_emxFree_real_T(&Sj);
  ekf_emxFree_real_T(&Fi);
  ekf_emxFree_real_T(&Si);
  ekf_emxFree_f_cell_wrap(&X);
  ekf_emxFree_f_cell_wrap(&Ic);
  for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < 10; ekf_B.nm1d2++) {
    ekf_B.mask[ekf_B.nm1d2] = (robot->VelocityDoFMap[ekf_B.nm1d2] <=
      robot->VelocityDoFMap[ekf_B.nm1d2 + 10]);
  }

  ekf_B.idx = 0;
  ekf_B.nm1d2 = 1;
  exitg1 = false;
  while ((!exitg1) && (ekf_B.nm1d2 - 1 < 10)) {
    if (ekf_B.mask[ekf_B.nm1d2 - 1]) {
      ekf_B.idx++;
      ekf_B.ii_data[ekf_B.idx - 1] = ekf_B.nm1d2;
      if (ekf_B.idx >= 10) {
        exitg1 = true;
      } else {
        ekf_B.nm1d2++;
      }
    } else {
      ekf_B.nm1d2++;
    }
  }

  if (1 > ekf_B.idx) {
    ekf_B.idx = 0;
  }

  for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < ekf_B.idx; ekf_B.nm1d2++) {
    ekf_B.nonFixedIndices_data[ekf_B.nm1d2] = ekf_B.ii_data[ekf_B.nm1d2];
  }

  ekf_B.idx--;
  ekf_emxInit_real_T(&s, 2);
  for (ekf_B.unnamed_idx_1_a = 0; ekf_B.unnamed_idx_1_a <= ekf_B.idx;
       ekf_B.unnamed_idx_1_a++) {
    ekf_B.vNum_e = robot->
      VelocityDoFMap[ekf_B.nonFixedIndices_data[ekf_B.unnamed_idx_1_a] - 1];
    ekf_B.p_idx_1 = robot->
      VelocityDoFMap[ekf_B.nonFixedIndices_data[ekf_B.unnamed_idx_1_a] + 9];
    if (rtIsNaN(ekf_B.vNum_e) || rtIsNaN(ekf_B.p_idx_1)) {
      ekf_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      ekf_emxEnsureCapacity_real_T(s, ekf_B.nm1d2);
      s->data[0] = (rtNaN);
    } else if (ekf_B.p_idx_1 < ekf_B.vNum_e) {
      s->size[0] = 1;
      s->size[1] = 0;
    } else if ((rtIsInf(ekf_B.vNum_e) || rtIsInf(ekf_B.p_idx_1)) &&
               (ekf_B.vNum_e == ekf_B.p_idx_1)) {
      ekf_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      ekf_emxEnsureCapacity_real_T(s, ekf_B.nm1d2);
      s->data[0] = (rtNaN);
    } else if (floor(ekf_B.vNum_e) == ekf_B.vNum_e) {
      ekf_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      ekf_B.n_m = static_cast<int32_T>(floor(ekf_B.p_idx_1 - ekf_B.vNum_e));
      s->size[1] = ekf_B.n_m + 1;
      ekf_emxEnsureCapacity_real_T(s, ekf_B.nm1d2);
      for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 <= ekf_B.n_m; ekf_B.nm1d2++) {
        s->data[ekf_B.nm1d2] = ekf_B.vNum_e + static_cast<real_T>(ekf_B.nm1d2);
      }
    } else {
      ekf_B.nb_d = floor((ekf_B.p_idx_1 - ekf_B.vNum_e) + 0.5);
      ekf_B.pid = ekf_B.vNum_e + ekf_B.nb_d;
      ekf_B.b_idx_0_b = ekf_B.pid - ekf_B.p_idx_1;
      ekf_B.b_idx_1_j = fabs(ekf_B.vNum_e);
      ekf_B.temp = fabs(ekf_B.p_idx_1);
      if ((ekf_B.b_idx_1_j > ekf_B.temp) || rtIsNaN(ekf_B.temp)) {
        ekf_B.temp = ekf_B.b_idx_1_j;
      }

      if (fabs(ekf_B.b_idx_0_b) < 4.4408920985006262E-16 * ekf_B.temp) {
        ekf_B.nb_d++;
        ekf_B.pid = ekf_B.p_idx_1;
      } else if (ekf_B.b_idx_0_b > 0.0) {
        ekf_B.pid = (ekf_B.nb_d - 1.0) + ekf_B.vNum_e;
      } else {
        ekf_B.nb_d++;
      }

      if (ekf_B.nb_d >= 0.0) {
        ekf_B.nm1d2 = static_cast<int32_T>(ekf_B.nb_d);
      } else {
        ekf_B.nm1d2 = 0;
      }

      ekf_B.n_m = ekf_B.nm1d2 - 1;
      ekf_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = ekf_B.n_m + 1;
      ekf_emxEnsureCapacity_real_T(s, ekf_B.nm1d2);
      if (ekf_B.n_m + 1 > 0) {
        s->data[0] = ekf_B.vNum_e;
        if (ekf_B.n_m + 1 > 1) {
          s->data[ekf_B.n_m] = ekf_B.pid;
          ekf_B.nm1d2 = ekf_B.n_m / 2;
          ekf_B.q_size_tmp = ekf_B.nm1d2 - 2;
          for (ekf_B.b_i_m = 0; ekf_B.b_i_m <= ekf_B.q_size_tmp; ekf_B.b_i_m++)
          {
            ekf_B.pid_tmp = ekf_B.b_i_m + 1;
            s->data[ekf_B.pid_tmp] = ekf_B.vNum_e + static_cast<real_T>
              (ekf_B.pid_tmp);
            s->data[ekf_B.n_m - ekf_B.pid_tmp] = ekf_B.pid - static_cast<real_T>
              (ekf_B.pid_tmp);
          }

          if (ekf_B.nm1d2 << 1 == ekf_B.n_m) {
            s->data[ekf_B.nm1d2] = (ekf_B.vNum_e + ekf_B.pid) / 2.0;
          } else {
            s->data[ekf_B.nm1d2] = ekf_B.vNum_e + static_cast<real_T>
              (ekf_B.nm1d2);
            s->data[ekf_B.nm1d2 + 1] = ekf_B.pid - static_cast<real_T>
              (ekf_B.nm1d2);
          }
        }
      }
    }

    if (ekf_B.vNum_e > ekf_B.p_idx_1) {
      ekf_B.q_size_tmp = 0;
    } else {
      ekf_B.q_size_tmp = static_cast<int32_T>(ekf_B.vNum_e) - 1;
    }

    ekf_B.n_m = s->size[1];
    for (ekf_B.nm1d2 = 0; ekf_B.nm1d2 < ekf_B.n_m; ekf_B.nm1d2++) {
      lambda->data[ekf_B.q_size_tmp + ekf_B.nm1d2] = s->data[ekf_B.nm1d2] - 1.0;
    }

    if (lambda_->data[ekf_B.nonFixedIndices_data[ekf_B.unnamed_idx_1_a] - 1] ==
        0.0) {
      lambda->data[static_cast<int32_T>(ekf_B.vNum_e) - 1] = 0.0;
    } else {
      ekf_B.nm1d2 = static_cast<int32_T>(lambda_->
        data[ekf_B.nonFixedIndices_data[ekf_B.unnamed_idx_1_a] - 1]);
      ekf_B.b_idx_1_j = robot->VelocityDoFMap[ekf_B.nm1d2 + 9];
      lambda->data[static_cast<int32_T>(ekf_B.vNum_e) - 1] = ekf_B.b_idx_1_j;
    }
  }

  ekf_emxFree_real_T(&s);
  ekf_emxFree_real_T(&lambda_);
}

static void RigidBodyTreeDynamics_inverseDy(k_robotics_manip_internal_Rig_T
  *robot, const real_T q[7], const real_T qdot[7], const emxArray_real_T_ekf_T
  *qddot, const real_T fext[60], real_T tau[7])
{
  emxArray_f_cell_wrap_ekf_T *X;
  emxArray_f_cell_wrap_ekf_T *Xtree;
  emxArray_real_T_ekf_T *vJ;
  emxArray_real_T_ekf_T *vB;
  emxArray_real_T_ekf_T *aB;
  emxArray_real_T_ekf_T *f;
  emxArray_real_T_ekf_T *S;
  emxArray_real_T_ekf_T *qddoti;
  j_robotics_manip_internal_Rig_T *obj;
  emxArray_char_T_ekf_T *a;
  emxArray_real_T_ekf_T *a_0;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  ekf_B.a0[0] = 0.0;
  ekf_B.a0[1] = 0.0;
  ekf_B.a0[2] = 0.0;
  ekf_B.a0[3] = -robot->Gravity[0];
  ekf_B.a0[4] = -robot->Gravity[1];
  ekf_B.a0[5] = -robot->Gravity[2];
  ekf_emxInit_real_T(&vJ, 2);
  ekf_B.nb = robot->NumBodies;
  ekf_B.i_n = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  ekf_B.unnamed_idx_1 = static_cast<int32_T>(ekf_B.nb);
  vJ->size[1] = ekf_B.unnamed_idx_1;
  ekf_emxEnsureCapacity_real_T(vJ, ekf_B.i_n);
  ekf_B.loop_ub_tmp = 6 * ekf_B.unnamed_idx_1 - 1;
  for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.loop_ub_tmp; ekf_B.i_n++) {
    vJ->data[ekf_B.i_n] = 0.0;
  }

  ekf_emxInit_real_T(&vB, 2);
  ekf_B.i_n = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = ekf_B.unnamed_idx_1;
  ekf_emxEnsureCapacity_real_T(vB, ekf_B.i_n);
  for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.loop_ub_tmp; ekf_B.i_n++) {
    vB->data[ekf_B.i_n] = 0.0;
  }

  ekf_emxInit_real_T(&aB, 2);
  ekf_B.i_n = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = ekf_B.unnamed_idx_1;
  ekf_emxEnsureCapacity_real_T(aB, ekf_B.i_n);
  for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.loop_ub_tmp; ekf_B.i_n++) {
    aB->data[ekf_B.i_n] = 0.0;
  }

  for (ekf_B.i_n = 0; ekf_B.i_n < 7; ekf_B.i_n++) {
    tau[ekf_B.i_n] = 0.0;
  }

  ekf_emxInit_f_cell_wrap(&X, 2);
  ekf_emxInit_f_cell_wrap(&Xtree, 2);
  ekf_B.loop_ub_tmp = ekf_B.unnamed_idx_1 - 1;
  ekf_B.i_n = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = ekf_B.unnamed_idx_1;
  e_emxEnsureCapacity_f_cell_wrap(Xtree, ekf_B.i_n);
  ekf_B.i_n = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = ekf_B.unnamed_idx_1;
  e_emxEnsureCapacity_f_cell_wrap(X, ekf_B.i_n);
  for (ekf_B.b_k = 0; ekf_B.b_k <= ekf_B.loop_ub_tmp; ekf_B.b_k++) {
    for (ekf_B.i_n = 0; ekf_B.i_n < 36; ekf_B.i_n++) {
      Xtree->data[ekf_B.b_k].f1[ekf_B.i_n] = 0.0;
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
      Xtree->data[ekf_B.b_k].f1[ekf_B.i_n + 6 * ekf_B.i_n] = 1.0;
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 36; ekf_B.i_n++) {
      X->data[ekf_B.b_k].f1[ekf_B.i_n] = 0.0;
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
      X->data[ekf_B.b_k].f1[ekf_B.i_n + 6 * ekf_B.i_n] = 1.0;
    }
  }

  ekf_emxInit_real_T(&f, 2);
  ekf_B.i_n = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = ekf_B.unnamed_idx_1;
  ekf_emxEnsureCapacity_real_T(f, ekf_B.i_n);
  ekf_emxInit_real_T(&S, 2);
  ekf_emxInit_real_T(&qddoti, 1);
  if (0 <= ekf_B.loop_ub_tmp) {
    ekf_B.dv2[0] = 0.0;
    ekf_B.dv2[4] = 0.0;
    ekf_B.dv2[8] = 0.0;
  }

  for (ekf_B.unnamed_idx_1 = 0; ekf_B.unnamed_idx_1 <= ekf_B.loop_ub_tmp;
       ekf_B.unnamed_idx_1++) {
    obj = robot->Bodies[ekf_B.unnamed_idx_1];
    ekf_B.i_n = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    ekf_emxEnsureCapacity_real_T(S, ekf_B.i_n);
    ekf_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.b_k; ekf_B.i_n++) {
      S->data[ekf_B.i_n] = obj->JointInternal.MotionSubspace->data[ekf_B.i_n];
    }

    ekf_B.a_idx_0 = robot->PositionDoFMap[ekf_B.unnamed_idx_1];
    ekf_B.a_idx_1 = robot->PositionDoFMap[ekf_B.unnamed_idx_1 + 10];
    ekf_B.b_idx_0 = robot->VelocityDoFMap[ekf_B.unnamed_idx_1];
    ekf_B.b_idx_1 = robot->VelocityDoFMap[ekf_B.unnamed_idx_1 + 10];
    if (ekf_B.a_idx_1 < ekf_B.a_idx_0) {
      obj = robot->Bodies[ekf_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, ekf_B.T);
      ekf_B.i_n = qddoti->size[0];
      qddoti->size[0] = 1;
      ekf_emxEnsureCapacity_real_T(qddoti, ekf_B.i_n);
      qddoti->data[0] = 0.0;
      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        vJ->data[ekf_B.i_n + 6 * ekf_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (ekf_B.a_idx_0 > ekf_B.a_idx_1) {
        ekf_B.inner = 0;
        ekf_B.m = -1;
      } else {
        ekf_B.inner = static_cast<int32_T>(ekf_B.a_idx_0) - 1;
        ekf_B.m = static_cast<int32_T>(ekf_B.a_idx_1) - 1;
      }

      if (ekf_B.b_idx_0 > ekf_B.b_idx_1) {
        ekf_B.p_tmp = 0;
        ekf_B.o_tmp = 0;
        ekf_B.aoffset = 0;
        ekf_B.b_k = -1;
      } else {
        ekf_B.p_tmp = static_cast<int32_T>(ekf_B.b_idx_0) - 1;
        ekf_B.o_tmp = static_cast<int32_T>(ekf_B.b_idx_1);
        ekf_B.aoffset = ekf_B.p_tmp;
        ekf_B.b_k = ekf_B.o_tmp - 1;
      }

      ekf_B.i_n = qddoti->size[0];
      ekf_B.b_k -= ekf_B.aoffset;
      qddoti->size[0] = ekf_B.b_k + 1;
      ekf_emxEnsureCapacity_real_T(qddoti, ekf_B.i_n);
      for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.b_k; ekf_B.i_n++) {
        qddoti->data[ekf_B.i_n] = qddot->data[ekf_B.aoffset + ekf_B.i_n];
      }

      obj = robot->Bodies[ekf_B.unnamed_idx_1];
      ekf_B.m -= ekf_B.inner;
      ekf_B.q_size = ekf_B.m + 1;
      for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.m; ekf_B.i_n++) {
        ekf_B.q_data[ekf_B.i_n] = q[ekf_B.inner + ekf_B.i_n];
      }

      rigidBodyJoint_transformBodyT_i(&obj->JointInternal, ekf_B.q_data,
        &ekf_B.q_size, ekf_B.T);
      if ((S->size[1] == 1) || (ekf_B.o_tmp - ekf_B.p_tmp == 1)) {
        for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
          ekf_B.aoffset = ekf_B.i_n + 6 * ekf_B.unnamed_idx_1;
          vJ->data[ekf_B.aoffset] = 0.0;
          ekf_B.b_k = S->size[1];
          for (ekf_B.inner = 0; ekf_B.inner < ekf_B.b_k; ekf_B.inner++) {
            vJ->data[ekf_B.aoffset] += S->data[6 * ekf_B.inner + ekf_B.i_n] *
              qdot[ekf_B.p_tmp + ekf_B.inner];
          }
        }
      } else {
        ekf_B.inner = S->size[1] - 1;
        for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
          vJ->data[ekf_B.i_n + 6 * ekf_B.unnamed_idx_1] = 0.0;
        }

        for (ekf_B.b_k = 0; ekf_B.b_k <= ekf_B.inner; ekf_B.b_k++) {
          ekf_B.aoffset = ekf_B.b_k * 6 - 1;
          for (ekf_B.c_i = 0; ekf_B.c_i < 6; ekf_B.c_i++) {
            ekf_B.i_n = 6 * ekf_B.unnamed_idx_1 + ekf_B.c_i;
            vJ->data[ekf_B.i_n] += S->data[(ekf_B.aoffset + ekf_B.c_i) + 1] *
              qdot[ekf_B.p_tmp + ekf_B.b_k];
          }
        }
      }
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
      ekf_B.R_f[3 * ekf_B.i_n] = ekf_B.T[ekf_B.i_n];
      ekf_B.R_f[3 * ekf_B.i_n + 1] = ekf_B.T[ekf_B.i_n + 4];
      ekf_B.R_f[3 * ekf_B.i_n + 2] = ekf_B.T[ekf_B.i_n + 8];
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 9; ekf_B.i_n++) {
      ekf_B.R_g[ekf_B.i_n] = -ekf_B.R_f[ekf_B.i_n];
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
      ekf_B.p_tmp = ekf_B.i_n << 2;
      ekf_B.Tinv[ekf_B.p_tmp] = ekf_B.R_f[3 * ekf_B.i_n];
      ekf_B.Tinv[ekf_B.p_tmp + 1] = ekf_B.R_f[3 * ekf_B.i_n + 1];
      ekf_B.Tinv[ekf_B.p_tmp + 2] = ekf_B.R_f[3 * ekf_B.i_n + 2];
      ekf_B.Tinv[ekf_B.i_n + 12] = ekf_B.R_g[ekf_B.i_n + 6] * ekf_B.T[14] +
        (ekf_B.R_g[ekf_B.i_n + 3] * ekf_B.T[13] + ekf_B.R_g[ekf_B.i_n] *
         ekf_B.T[12]);
    }

    ekf_B.Tinv[3] = 0.0;
    ekf_B.Tinv[7] = 0.0;
    ekf_B.Tinv[11] = 0.0;
    ekf_B.Tinv[15] = 1.0;
    ekf_B.dv2[3] = -ekf_B.Tinv[14];
    ekf_B.dv2[6] = ekf_B.Tinv[13];
    ekf_B.dv2[1] = ekf_B.Tinv[14];
    ekf_B.dv2[7] = -ekf_B.Tinv[12];
    ekf_B.dv2[2] = -ekf_B.Tinv[13];
    ekf_B.dv2[5] = ekf_B.Tinv[12];
    for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
      for (ekf_B.aoffset = 0; ekf_B.aoffset < 3; ekf_B.aoffset++) {
        ekf_B.inner = ekf_B.i_n + 3 * ekf_B.aoffset;
        ekf_B.dv3[ekf_B.inner] = 0.0;
        ekf_B.p_tmp = ekf_B.aoffset << 2;
        ekf_B.dv3[ekf_B.inner] += ekf_B.Tinv[ekf_B.p_tmp] * ekf_B.dv2[ekf_B.i_n];
        ekf_B.dv3[ekf_B.inner] += ekf_B.Tinv[ekf_B.p_tmp + 1] *
          ekf_B.dv2[ekf_B.i_n + 3];
        ekf_B.dv3[ekf_B.inner] += ekf_B.Tinv[ekf_B.p_tmp + 2] *
          ekf_B.dv2[ekf_B.i_n + 6];
        X->data[ekf_B.unnamed_idx_1].f1[ekf_B.aoffset + 6 * ekf_B.i_n] =
          ekf_B.Tinv[(ekf_B.i_n << 2) + ekf_B.aoffset];
        X->data[ekf_B.unnamed_idx_1].f1[ekf_B.aoffset + 6 * (ekf_B.i_n + 3)] =
          0.0;
      }
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
      X->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n + 3] = ekf_B.dv3[3 *
        ekf_B.i_n];
      ekf_B.aoffset = ekf_B.i_n << 2;
      ekf_B.inner = 6 * (ekf_B.i_n + 3);
      X->data[ekf_B.unnamed_idx_1].f1[ekf_B.inner + 3] =
        ekf_B.Tinv[ekf_B.aoffset];
      X->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n + 4] = ekf_B.dv3[3 *
        ekf_B.i_n + 1];
      X->data[ekf_B.unnamed_idx_1].f1[ekf_B.inner + 4] =
        ekf_B.Tinv[ekf_B.aoffset + 1];
      X->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n + 5] = ekf_B.dv3[3 *
        ekf_B.i_n + 2];
      X->data[ekf_B.unnamed_idx_1].f1[ekf_B.inner + 5] =
        ekf_B.Tinv[ekf_B.aoffset + 2];
    }

    ekf_B.a_idx_0 = robot->Bodies[ekf_B.unnamed_idx_1]->ParentIndex;
    if (ekf_B.a_idx_0 > 0.0) {
      ekf_B.m = static_cast<int32_T>(ekf_B.a_idx_0);
      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.a_idx_1 = 0.0;
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
          ekf_B.a_idx_1 += vB->data[(ekf_B.m - 1) * 6 + ekf_B.aoffset] * X->
            data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.aoffset + ekf_B.i_n];
        }

        ekf_B.vJ[ekf_B.i_n] = vJ->data[6 * ekf_B.unnamed_idx_1 + ekf_B.i_n] +
          ekf_B.a_idx_1;
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        vB->data[ekf_B.i_n + 6 * ekf_B.unnamed_idx_1] = ekf_B.vJ[ekf_B.i_n];
      }

      if ((S->size[1] == 1) || (qddoti->size[0] == 1)) {
        ekf_B.b_k = S->size[1];
        for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
          ekf_B.y[ekf_B.i_n] = 0.0;
          for (ekf_B.aoffset = 0; ekf_B.aoffset < ekf_B.b_k; ekf_B.aoffset++) {
            ekf_B.a_idx_1 = S->data[6 * ekf_B.aoffset + ekf_B.i_n] *
              qddoti->data[ekf_B.aoffset] + ekf_B.y[ekf_B.i_n];
            ekf_B.y[ekf_B.i_n] = ekf_B.a_idx_1;
          }
        }
      } else {
        ekf_B.inner = S->size[1] - 1;
        for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
          ekf_B.y[ekf_B.i_n] = 0.0;
        }

        for (ekf_B.b_k = 0; ekf_B.b_k <= ekf_B.inner; ekf_B.b_k++) {
          ekf_B.aoffset = ekf_B.b_k * 6 - 1;
          for (ekf_B.c_i = 0; ekf_B.c_i < 6; ekf_B.c_i++) {
            ekf_B.a_idx_1 = S->data[(ekf_B.aoffset + ekf_B.c_i) + 1] *
              qddoti->data[ekf_B.b_k] + ekf_B.y[ekf_B.c_i];
            ekf_B.y[ekf_B.c_i] = ekf_B.a_idx_1;
          }
        }
      }

      ekf_B.R_f[0] = 0.0;
      ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + 2;
      ekf_B.R_f[3] = -vB->data[ekf_B.p_tmp];
      ekf_B.i_n = 6 * ekf_B.unnamed_idx_1 + 1;
      ekf_B.R_f[6] = vB->data[ekf_B.i_n];
      ekf_B.R_f[1] = vB->data[ekf_B.p_tmp];
      ekf_B.R_f[4] = 0.0;
      ekf_B.R_f[7] = -vB->data[6 * ekf_B.unnamed_idx_1];
      ekf_B.R_f[2] = -vB->data[ekf_B.i_n];
      ekf_B.R_f[5] = vB->data[6 * ekf_B.unnamed_idx_1];
      ekf_B.R_f[8] = 0.0;
      ekf_B.b_I[3] = 0.0;
      ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + 5;
      ekf_B.b_I[9] = -vB->data[ekf_B.p_tmp];
      ekf_B.i_n = 6 * ekf_B.unnamed_idx_1 + 4;
      ekf_B.b_I[15] = vB->data[ekf_B.i_n];
      ekf_B.b_I[4] = vB->data[ekf_B.p_tmp];
      ekf_B.b_I[10] = 0.0;
      ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + 3;
      ekf_B.b_I[16] = -vB->data[ekf_B.p_tmp];
      ekf_B.b_I[5] = -vB->data[ekf_B.i_n];
      ekf_B.b_I[11] = vB->data[ekf_B.p_tmp];
      ekf_B.b_I[17] = 0.0;
      for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
        ekf_B.a_idx_1 = ekf_B.R_f[3 * ekf_B.i_n];
        ekf_B.b_I[6 * ekf_B.i_n] = ekf_B.a_idx_1;
        ekf_B.p_tmp = 6 * (ekf_B.i_n + 3);
        ekf_B.b_I[ekf_B.p_tmp] = 0.0;
        ekf_B.b_I[ekf_B.p_tmp + 3] = ekf_B.a_idx_1;
        ekf_B.a_idx_1 = ekf_B.R_f[3 * ekf_B.i_n + 1];
        ekf_B.b_I[6 * ekf_B.i_n + 1] = ekf_B.a_idx_1;
        ekf_B.b_I[ekf_B.p_tmp + 1] = 0.0;
        ekf_B.b_I[ekf_B.p_tmp + 4] = ekf_B.a_idx_1;
        ekf_B.a_idx_1 = ekf_B.R_f[3 * ekf_B.i_n + 2];
        ekf_B.b_I[6 * ekf_B.i_n + 2] = ekf_B.a_idx_1;
        ekf_B.b_I[ekf_B.p_tmp + 2] = 0.0;
        ekf_B.b_I[ekf_B.p_tmp + 5] = ekf_B.a_idx_1;
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.a_idx_1 = 0.0;
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
          ekf_B.a_idx_1 += aB->data[(ekf_B.m - 1) * 6 + ekf_B.aoffset] * X->
            data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.aoffset + ekf_B.i_n];
        }

        ekf_B.vJ[ekf_B.i_n] = ekf_B.a_idx_1 + ekf_B.y[ekf_B.i_n];
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.y[ekf_B.i_n] = 0.0;
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
          ekf_B.a_idx_1 = ekf_B.b_I[6 * ekf_B.aoffset + ekf_B.i_n] * vJ->data[6 *
            ekf_B.unnamed_idx_1 + ekf_B.aoffset] + ekf_B.y[ekf_B.i_n];
          ekf_B.y[ekf_B.i_n] = ekf_B.a_idx_1;
        }

        aB->data[ekf_B.i_n + 6 * ekf_B.unnamed_idx_1] = ekf_B.vJ[ekf_B.i_n] +
          ekf_B.y[ekf_B.i_n];
      }

      ekf_B.R_g[0] = 0.0;
      ekf_B.R_g[3] = -ekf_B.T[14];
      ekf_B.R_g[6] = ekf_B.T[13];
      ekf_B.R_g[1] = ekf_B.T[14];
      ekf_B.R_g[4] = 0.0;
      ekf_B.R_g[7] = -ekf_B.T[12];
      ekf_B.R_g[2] = -ekf_B.T[13];
      ekf_B.R_g[5] = ekf_B.T[12];
      ekf_B.R_g[8] = 0.0;
      for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 3; ekf_B.aoffset++) {
          ekf_B.inner = ekf_B.i_n + 3 * ekf_B.aoffset;
          ekf_B.dv4[ekf_B.inner] = 0.0;
          ekf_B.p_tmp = ekf_B.aoffset << 2;
          ekf_B.dv4[ekf_B.inner] += ekf_B.T[ekf_B.p_tmp] * ekf_B.R_g[ekf_B.i_n];
          ekf_B.dv4[ekf_B.inner] += ekf_B.T[ekf_B.p_tmp + 1] *
            ekf_B.R_g[ekf_B.i_n + 3];
          ekf_B.dv4[ekf_B.inner] += ekf_B.T[ekf_B.p_tmp + 2] *
            ekf_B.R_g[ekf_B.i_n + 6];
          ekf_B.b_I[ekf_B.aoffset + 6 * ekf_B.i_n] = ekf_B.T[(ekf_B.i_n << 2) +
            ekf_B.aoffset];
          ekf_B.b_I[ekf_B.aoffset + 6 * (ekf_B.i_n + 3)] = 0.0;
        }
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
        ekf_B.b_I[6 * ekf_B.i_n + 3] = ekf_B.dv4[3 * ekf_B.i_n];
        ekf_B.p_tmp = ekf_B.i_n << 2;
        ekf_B.inner = 6 * (ekf_B.i_n + 3);
        ekf_B.b_I[ekf_B.inner + 3] = ekf_B.T[ekf_B.p_tmp];
        ekf_B.b_I[6 * ekf_B.i_n + 4] = ekf_B.dv4[3 * ekf_B.i_n + 1];
        ekf_B.b_I[ekf_B.inner + 4] = ekf_B.T[ekf_B.p_tmp + 1];
        ekf_B.b_I[6 * ekf_B.i_n + 5] = ekf_B.dv4[3 * ekf_B.i_n + 2];
        ekf_B.b_I[ekf_B.inner + 5] = ekf_B.T[ekf_B.p_tmp + 2];
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
          ekf_B.p_tmp = ekf_B.i_n + 6 * ekf_B.aoffset;
          ekf_B.Xtree[ekf_B.p_tmp] = 0.0;
          for (ekf_B.inner = 0; ekf_B.inner < 6; ekf_B.inner++) {
            ekf_B.Xtree[ekf_B.p_tmp] += Xtree->data[static_cast<int32_T>
              (ekf_B.a_idx_0) - 1].f1[6 * ekf_B.inner + ekf_B.i_n] * ekf_B.b_I[6
              * ekf_B.aoffset + ekf_B.inner];
          }
        }
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 36; ekf_B.i_n++) {
        Xtree->data[ekf_B.unnamed_idx_1].f1[ekf_B.i_n] = ekf_B.Xtree[ekf_B.i_n];
      }
    } else {
      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.aoffset = 6 * ekf_B.unnamed_idx_1 + ekf_B.i_n;
        vB->data[ekf_B.aoffset] = vJ->data[ekf_B.aoffset];
      }

      if ((S->size[1] == 1) || (qddoti->size[0] == 1)) {
        ekf_B.b_k = S->size[1];
        for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
          ekf_B.y[ekf_B.i_n] = 0.0;
          for (ekf_B.aoffset = 0; ekf_B.aoffset < ekf_B.b_k; ekf_B.aoffset++) {
            ekf_B.a_idx_1 = S->data[6 * ekf_B.aoffset + ekf_B.i_n] *
              qddoti->data[ekf_B.aoffset] + ekf_B.y[ekf_B.i_n];
            ekf_B.y[ekf_B.i_n] = ekf_B.a_idx_1;
          }
        }
      } else {
        ekf_B.inner = S->size[1] - 1;
        for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
          ekf_B.y[ekf_B.i_n] = 0.0;
        }

        for (ekf_B.b_k = 0; ekf_B.b_k <= ekf_B.inner; ekf_B.b_k++) {
          ekf_B.aoffset = ekf_B.b_k * 6 - 1;
          for (ekf_B.c_i = 0; ekf_B.c_i < 6; ekf_B.c_i++) {
            ekf_B.a_idx_1 = S->data[(ekf_B.aoffset + ekf_B.c_i) + 1] *
              qddoti->data[ekf_B.b_k] + ekf_B.y[ekf_B.c_i];
            ekf_B.y[ekf_B.c_i] = ekf_B.a_idx_1;
          }
        }
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.a_idx_1 = 0.0;
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
          ekf_B.a_idx_1 += X->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.aoffset +
            ekf_B.i_n] * ekf_B.a0[ekf_B.aoffset];
        }

        aB->data[ekf_B.i_n + 6 * ekf_B.unnamed_idx_1] = ekf_B.a_idx_1 +
          ekf_B.y[ekf_B.i_n];
      }

      ekf_B.R_g[0] = 0.0;
      ekf_B.R_g[3] = -ekf_B.T[14];
      ekf_B.R_g[6] = ekf_B.T[13];
      ekf_B.R_g[1] = ekf_B.T[14];
      ekf_B.R_g[4] = 0.0;
      ekf_B.R_g[7] = -ekf_B.T[12];
      ekf_B.R_g[2] = -ekf_B.T[13];
      ekf_B.R_g[5] = ekf_B.T[12];
      ekf_B.R_g[8] = 0.0;
      for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 3; ekf_B.aoffset++) {
          ekf_B.inner = ekf_B.i_n + 3 * ekf_B.aoffset;
          ekf_B.dv4[ekf_B.inner] = 0.0;
          ekf_B.p_tmp = ekf_B.aoffset << 2;
          ekf_B.dv4[ekf_B.inner] += ekf_B.T[ekf_B.p_tmp] * ekf_B.R_g[ekf_B.i_n];
          ekf_B.dv4[ekf_B.inner] += ekf_B.T[ekf_B.p_tmp + 1] *
            ekf_B.R_g[ekf_B.i_n + 3];
          ekf_B.dv4[ekf_B.inner] += ekf_B.T[ekf_B.p_tmp + 2] *
            ekf_B.R_g[ekf_B.i_n + 6];
          Xtree->data[ekf_B.unnamed_idx_1].f1[ekf_B.aoffset + 6 * ekf_B.i_n] =
            ekf_B.T[(ekf_B.i_n << 2) + ekf_B.aoffset];
          Xtree->data[ekf_B.unnamed_idx_1].f1[ekf_B.aoffset + 6 * (ekf_B.i_n + 3)]
            = 0.0;
        }
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
        Xtree->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n + 3] = ekf_B.dv4[3 *
          ekf_B.i_n];
        ekf_B.aoffset = ekf_B.i_n << 2;
        ekf_B.inner = 6 * (ekf_B.i_n + 3);
        Xtree->data[ekf_B.unnamed_idx_1].f1[ekf_B.inner + 3] =
          ekf_B.T[ekf_B.aoffset];
        Xtree->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n + 4] = ekf_B.dv4[3 *
          ekf_B.i_n + 1];
        Xtree->data[ekf_B.unnamed_idx_1].f1[ekf_B.inner + 4] =
          ekf_B.T[ekf_B.aoffset + 1];
        Xtree->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n + 5] = ekf_B.dv4[3 *
          ekf_B.i_n + 2];
        Xtree->data[ekf_B.unnamed_idx_1].f1[ekf_B.inner + 5] =
          ekf_B.T[ekf_B.aoffset + 2];
      }
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 36; ekf_B.i_n++) {
      ekf_B.b_I[ekf_B.i_n] = robot->Bodies[ekf_B.unnamed_idx_1]->
        SpatialInertia[ekf_B.i_n];
    }

    ekf_B.R_f[0] = 0.0;
    ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + 2;
    ekf_B.R_f[3] = -vB->data[ekf_B.p_tmp];
    ekf_B.i_n = 6 * ekf_B.unnamed_idx_1 + 1;
    ekf_B.R_f[6] = vB->data[ekf_B.i_n];
    ekf_B.R_f[1] = vB->data[ekf_B.p_tmp];
    ekf_B.R_f[4] = 0.0;
    ekf_B.R_f[7] = -vB->data[6 * ekf_B.unnamed_idx_1];
    ekf_B.R_f[2] = -vB->data[ekf_B.i_n];
    ekf_B.R_f[5] = vB->data[6 * ekf_B.unnamed_idx_1];
    ekf_B.R_f[8] = 0.0;
    ekf_B.R_c[18] = 0.0;
    ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + 5;
    ekf_B.R_c[24] = -vB->data[ekf_B.p_tmp];
    ekf_B.i_n = 6 * ekf_B.unnamed_idx_1 + 4;
    ekf_B.R_c[30] = vB->data[ekf_B.i_n];
    ekf_B.R_c[19] = vB->data[ekf_B.p_tmp];
    ekf_B.R_c[25] = 0.0;
    ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + 3;
    ekf_B.R_c[31] = -vB->data[ekf_B.p_tmp];
    ekf_B.R_c[20] = -vB->data[ekf_B.i_n];
    ekf_B.R_c[26] = vB->data[ekf_B.p_tmp];
    ekf_B.R_c[32] = 0.0;
    for (ekf_B.i_n = 0; ekf_B.i_n < 3; ekf_B.i_n++) {
      ekf_B.a_idx_1 = ekf_B.R_f[3 * ekf_B.i_n];
      ekf_B.R_c[6 * ekf_B.i_n] = ekf_B.a_idx_1;
      ekf_B.R_c[6 * ekf_B.i_n + 3] = 0.0;
      ekf_B.p_tmp = 6 * (ekf_B.i_n + 3);
      ekf_B.R_c[ekf_B.p_tmp + 3] = ekf_B.a_idx_1;
      ekf_B.a_idx_1 = ekf_B.R_f[3 * ekf_B.i_n + 1];
      ekf_B.R_c[6 * ekf_B.i_n + 1] = ekf_B.a_idx_1;
      ekf_B.R_c[6 * ekf_B.i_n + 4] = 0.0;
      ekf_B.R_c[ekf_B.p_tmp + 4] = ekf_B.a_idx_1;
      ekf_B.a_idx_1 = ekf_B.R_f[3 * ekf_B.i_n + 2];
      ekf_B.R_c[6 * ekf_B.i_n + 2] = ekf_B.a_idx_1;
      ekf_B.R_c[6 * ekf_B.i_n + 5] = 0.0;
      ekf_B.R_c[ekf_B.p_tmp + 5] = ekf_B.a_idx_1;
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
      ekf_B.b_I_d[ekf_B.i_n] = 0.0;
      ekf_B.b_I_g[ekf_B.i_n] = 0.0;
      for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
        ekf_B.a_idx_0 = ekf_B.b_I[6 * ekf_B.aoffset + ekf_B.i_n];
        ekf_B.p_tmp = 6 * ekf_B.unnamed_idx_1 + ekf_B.aoffset;
        ekf_B.a_idx_1 = vB->data[ekf_B.p_tmp] * ekf_B.a_idx_0 +
          ekf_B.b_I_d[ekf_B.i_n];
        ekf_B.a_idx_0 = aB->data[ekf_B.p_tmp] * ekf_B.a_idx_0 +
          ekf_B.b_I_g[ekf_B.i_n];
        ekf_B.b_I_d[ekf_B.i_n] = ekf_B.a_idx_1;
        ekf_B.b_I_g[ekf_B.i_n] = ekf_B.a_idx_0;
      }
    }

    for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
      ekf_B.R_ld[ekf_B.i_n] = 0.0;
      ekf_B.a_idx_1 = 0.0;
      for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
        ekf_B.a_idx_1 += Xtree->data[ekf_B.unnamed_idx_1].f1[6 * ekf_B.i_n +
          ekf_B.aoffset] * fext[6 * ekf_B.unnamed_idx_1 + ekf_B.aoffset];
        ekf_B.R_ld[ekf_B.i_n] += ekf_B.R_c[6 * ekf_B.aoffset + ekf_B.i_n] *
          ekf_B.b_I_d[ekf_B.aoffset];
      }

      f->data[ekf_B.i_n + 6 * ekf_B.unnamed_idx_1] = (ekf_B.b_I_g[ekf_B.i_n] +
        ekf_B.R_ld[ekf_B.i_n]) - ekf_B.a_idx_1;
    }
  }

  ekf_emxFree_real_T(&aB);
  ekf_emxFree_real_T(&vB);
  ekf_emxFree_real_T(&vJ);
  ekf_emxFree_f_cell_wrap(&Xtree);
  ekf_B.loop_ub_tmp = static_cast<int32_T>(((-1.0 - ekf_B.nb) + 1.0) / -1.0) - 1;
  ekf_emxInit_char_T(&a, 2);
  ekf_emxInit_real_T(&a_0, 2);
  if (0 <= ekf_B.loop_ub_tmp) {
    for (ekf_B.i_n = 0; ekf_B.i_n < 5; ekf_B.i_n++) {
      ekf_B.b_o4[ekf_B.i_n] = tmp[ekf_B.i_n];
    }
  }

  for (ekf_B.p_tmp = 0; ekf_B.p_tmp <= ekf_B.loop_ub_tmp; ekf_B.p_tmp++) {
    ekf_B.a_idx_0 = ekf_B.nb + -static_cast<real_T>(ekf_B.p_tmp);
    ekf_B.inner = static_cast<int32_T>(ekf_B.a_idx_0);
    ekf_B.o_tmp = ekf_B.inner - 1;
    obj = robot->Bodies[ekf_B.o_tmp];
    ekf_B.i_n = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->JointInternal.Type->size[1];
    ekf_emxEnsureCapacity_char_T(a, ekf_B.i_n);
    ekf_B.b_k = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->
      size[1] - 1;
    for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.b_k; ekf_B.i_n++) {
      a->data[ekf_B.i_n] = obj->JointInternal.Type->data[ekf_B.i_n];
    }

    ekf_B.b_bool = false;
    if (a->size[1] == 5) {
      ekf_B.i_n = 1;
      do {
        exitg1 = 0;
        if (ekf_B.i_n - 1 < 5) {
          ekf_B.unnamed_idx_1 = ekf_B.i_n - 1;
          if (a->data[ekf_B.unnamed_idx_1] != ekf_B.b_o4[ekf_B.unnamed_idx_1]) {
            exitg1 = 1;
          } else {
            ekf_B.i_n++;
          }
        } else {
          ekf_B.b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!ekf_B.b_bool) {
      obj = robot->Bodies[ekf_B.o_tmp];
      ekf_B.i_n = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      ekf_emxEnsureCapacity_real_T(S, ekf_B.i_n);
      ekf_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (ekf_B.i_n = 0; ekf_B.i_n <= ekf_B.b_k; ekf_B.i_n++) {
        S->data[ekf_B.i_n] = obj->JointInternal.MotionSubspace->data[ekf_B.i_n];
      }

      ekf_B.i_n = a_0->size[0] * a_0->size[1];
      a_0->size[0] = S->size[1];
      a_0->size[1] = 6;
      ekf_emxEnsureCapacity_real_T(a_0, ekf_B.i_n);
      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.b_k = S->size[1];
        for (ekf_B.aoffset = 0; ekf_B.aoffset < ekf_B.b_k; ekf_B.aoffset++) {
          a_0->data[ekf_B.aoffset + a_0->size[0] * ekf_B.i_n] = S->data[6 *
            ekf_B.aoffset + ekf_B.i_n];
        }
      }

      ekf_B.m = a_0->size[0] - 1;
      ekf_B.i_n = qddoti->size[0];
      qddoti->size[0] = a_0->size[0];
      ekf_emxEnsureCapacity_real_T(qddoti, ekf_B.i_n);
      for (ekf_B.unnamed_idx_1 = 0; ekf_B.unnamed_idx_1 <= ekf_B.m;
           ekf_B.unnamed_idx_1++) {
        qddoti->data[ekf_B.unnamed_idx_1] = 0.0;
      }

      for (ekf_B.b_k = 0; ekf_B.b_k < 6; ekf_B.b_k++) {
        ekf_B.aoffset = (ekf_B.m + 1) * ekf_B.b_k - 1;
        for (ekf_B.c_i = 0; ekf_B.c_i <= ekf_B.m; ekf_B.c_i++) {
          qddoti->data[ekf_B.c_i] += f->data[(static_cast<int32_T>(ekf_B.a_idx_0)
            - 1) * 6 + ekf_B.b_k] * a_0->data[(ekf_B.aoffset + ekf_B.c_i) + 1];
        }
      }

      ekf_B.b_idx_0 = robot->VelocityDoFMap[ekf_B.inner - 1];
      ekf_B.b_idx_1 = robot->VelocityDoFMap[ekf_B.inner + 9];
      if (ekf_B.b_idx_0 > ekf_B.b_idx_1) {
        ekf_B.m = 0;
        ekf_B.i_n = 0;
      } else {
        ekf_B.m = static_cast<int32_T>(ekf_B.b_idx_0) - 1;
        ekf_B.i_n = static_cast<int32_T>(ekf_B.b_idx_1);
      }

      ekf_B.unnamed_idx_1 = ekf_B.i_n - ekf_B.m;
      for (ekf_B.i_n = 0; ekf_B.i_n < ekf_B.unnamed_idx_1; ekf_B.i_n++) {
        tau[ekf_B.m + ekf_B.i_n] = qddoti->data[ekf_B.i_n];
      }
    }

    ekf_B.a_idx_0 = robot->Bodies[ekf_B.o_tmp]->ParentIndex;
    if (ekf_B.a_idx_0 > 0.0) {
      ekf_B.m = static_cast<int32_T>(ekf_B.a_idx_0);
      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        ekf_B.a_idx_1 = 0.0;
        for (ekf_B.aoffset = 0; ekf_B.aoffset < 6; ekf_B.aoffset++) {
          ekf_B.a_idx_1 += f->data[(ekf_B.inner - 1) * 6 + ekf_B.aoffset] *
            X->data[ekf_B.o_tmp].f1[6 * ekf_B.i_n + ekf_B.aoffset];
        }

        ekf_B.a0[ekf_B.i_n] = f->data[(ekf_B.m - 1) * 6 + ekf_B.i_n] +
          ekf_B.a_idx_1;
      }

      for (ekf_B.i_n = 0; ekf_B.i_n < 6; ekf_B.i_n++) {
        f->data[ekf_B.i_n + 6 * (ekf_B.m - 1)] = ekf_B.a0[ekf_B.i_n];
      }
    }
  }

  ekf_emxFree_real_T(&a_0);
  ekf_emxFree_char_T(&a);
  ekf_emxFree_real_T(&qddoti);
  ekf_emxFree_real_T(&S);
  ekf_emxFree_real_T(&f);
  ekf_emxFree_f_cell_wrap(&X);
}

static void matlabCodegenHandle_matlabC_ibr(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void ek_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_ekf_T *pStruct)
{
  ekf_emxFree_char_T(&pStruct->Type);
  ekf_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct)
{
  ek_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_k_robotics_manip_(k_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_i_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_k_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_j_robotics_manip_(j_robotics_manip_internal_Rig_T
  *pStruct)
{
  ek_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCo_ib(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void ek_emxInitStruct_rigidBodyJoint(rigidBodyJoint_ekf_T *pStruct)
{
  ekf_emxInit_char_T(&pStruct->Type, 2);
  ekf_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct)
{
  ek_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_k_robotics_manip_(k_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_i_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_k_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_j_robotics_manip_(j_robotics_manip_internal_Rig_T
  *pStruct)
{
  ek_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_i
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = -1.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ib
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibr
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrl
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrld
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrld2
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ekf_RigidBody_RigidBody_ibrld22
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *ek_RigidBody_RigidBody_ibrld22b
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *e_RigidBody_RigidBody_ibrld22b1
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  ekf_emxFree_char_T(&switch_expression);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static i_robotics_manip_internal_Rig_T *RigidBody_RigidBody_ibrld22b1p
  (i_robotics_manip_internal_Rig_T *obj)
{
  i_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_ekf_T *switch_expression;
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
  ekf_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  ekf_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  ekf_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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
      ekf_B.b_l[b_kstr] = tmp_2[b_kstr];
    }

    b_bool = false;
    if (switch_expression->size[1] == 9) {
      b_kstr = 1;
      do {
        exitg1 = 0;
        if (b_kstr - 1 < 9) {
          loop_ub = b_kstr - 1;
          if (switch_expression->data[loop_ub] != ekf_B.b_l[loop_ub]) {
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

  ekf_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      ekf_B.msubspace_data[b_kstr] = tmp[b_kstr];
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
      ekf_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      ekf_B.msubspace_data[b_kstr] = 0;
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
  ekf_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] =
      ekf_B.msubspace_data[b_kstr];
  }

  return b_obj;
}

static k_robotics_manip_internal_Rig_T *ekf_RigidBodyTree_RigidBodyTree
  (k_robotics_manip_internal_Rig_T *obj, j_robotics_manip_internal_Rig_T *iobj_0,
   j_robotics_manip_internal_Rig_T *iobj_1, j_robotics_manip_internal_Rig_T
   *iobj_2, j_robotics_manip_internal_Rig_T *iobj_3,
   j_robotics_manip_internal_Rig_T *iobj_4, j_robotics_manip_internal_Rig_T
   *iobj_5, j_robotics_manip_internal_Rig_T *iobj_6,
   j_robotics_manip_internal_Rig_T *iobj_7, j_robotics_manip_internal_Rig_T
   *iobj_8, j_robotics_manip_internal_Rig_T *iobj_9)
{
  k_robotics_manip_internal_Rig_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 1, 2, 3, 4, 5, 6,
    7, -1, -1, -1 };

  b_obj = obj;
  obj->Bodies[0] = ekf_RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = ekf_RigidBody_RigidBody_i(iobj_1);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = ekf_RigidBody_RigidBody_ib(iobj_2);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = ekf_RigidBody_RigidBody_ibr(iobj_3);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = ekf_RigidBody_RigidBody_ibrl(iobj_4);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = ekf_RigidBody_RigidBody_ibrld(iobj_5);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = ekf_RigidBody_RigidBody_ibrld2(iobj_6);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = ekf_RigidBody_RigidBody_ibrld22(iobj_7);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = ek_RigidBody_RigidBody_ibrld22b(iobj_8);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = e_RigidBody_RigidBody_ibrld22b1(iobj_9);
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

  RigidBody_RigidBody_ibrld22b1p(&obj->Base);
  return b_obj;
}

// Model step function
void ekf_step(void)
{
  robotics_slmanip_internal_blo_T *obj;
  emxArray_real_T_ekf_T *L;
  emxArray_real_T_ekf_T *H;
  emxArray_real_T_ekf_T *lambda;
  emxArray_real_T_ekf_T *H_0;
  emxArray_real_T_ekf_T *tmp;
  static const int8_T b_b[49] = { 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, 0, 0, 0, 0, 1 };

  static const int8_T f[98] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0,
    0, 0, 0, 1 };

  static const int8_T c_b[98] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0 };

  static const int8_T d_b[196] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 };

  if (rtmIsMajorTimeStep(ekf_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&ekf_M->solverInfo,((ekf_M->Timing.clockTick0+1)*
      ekf_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(ekf_M)) {
    ekf_M->Timing.t[0] = rtsiGetT(&ekf_M->solverInfo);
  }

  if (rtmIsMajorTimeStep(ekf_M) &&
      ekf_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S4>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   Inport: '<S11>/In1'

    ekf_SystemCore_step(&ekf_B.b_varargout_1, ekf_B.bias,
                        &ekf_B.b_varargout_2_Data_SL_Info_Curr,
                        &ekf_B.b_varargout_2_Data_SL_Info_Rece,
                        &ekf_B.b_varargout_2_Layout_DataOffset,
                        ekf_B.b_varargout_2_Layout_Dim,
                        &ekf_B.b_varargout_2_Layout_Dim_SL_Inf,
                        &ekf_B.b_varargout_2_Layout_Dim_SL_I_c);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S11>/Enable'

    if (ekf_B.b_varargout_1) {
      for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
        ekf_B.In1_k.Data[ekf_B.i] = ekf_B.bias[ekf_B.i];
      }

      ekf_B.In1_k.Data_SL_Info.CurrentLength =
        ekf_B.b_varargout_2_Data_SL_Info_Curr;
      ekf_B.In1_k.Data_SL_Info.ReceivedLength =
        ekf_B.b_varargout_2_Data_SL_Info_Rece;
      ekf_B.In1_k.Layout.DataOffset = ekf_B.b_varargout_2_Layout_DataOffset;
      memcpy(&ekf_B.In1_k.Layout.Dim[0], &ekf_B.b_varargout_2_Layout_Dim[0],
             sizeof(SL_Bus_ekf_std_msgs_MultiArrayDimension) << 4U);
      ekf_B.In1_k.Layout.Dim_SL_Info.CurrentLength =
        ekf_B.b_varargout_2_Layout_Dim_SL_Inf;
      ekf_B.In1_k.Layout.Dim_SL_Info.ReceivedLength =
        ekf_B.b_varargout_2_Layout_Dim_SL_I_c;
    }

    // End of MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe'

    // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
    // MATLABSystem: '<S10>/SourceBlock' incorporates:
    //   Inport: '<S12>/In1'

    ekf_SystemCore_step_i(&ekf_B.b_varargout_1, ekf_B.bias,
                          &ekf_B.b_varargout_2_Data_SL_Info_Curr,
                          &ekf_B.b_varargout_2_Data_SL_Info_Rece,
                          &ekf_B.b_varargout_2_Layout_DataOffset,
                          ekf_B.b_varargout_2_Layout_Dim,
                          &ekf_B.b_varargout_2_Layout_Dim_SL_Inf,
                          &ekf_B.b_varargout_2_Layout_Dim_SL_I_c);

    // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S12>/Enable'

    if (ekf_B.b_varargout_1) {
      for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
        ekf_B.In1.Data[ekf_B.i] = ekf_B.bias[ekf_B.i];
      }

      ekf_B.In1.Data_SL_Info.CurrentLength =
        ekf_B.b_varargout_2_Data_SL_Info_Curr;
      ekf_B.In1.Data_SL_Info.ReceivedLength =
        ekf_B.b_varargout_2_Data_SL_Info_Rece;
      ekf_B.In1.Layout.DataOffset = ekf_B.b_varargout_2_Layout_DataOffset;
      memcpy(&ekf_B.In1.Layout.Dim[0], &ekf_B.b_varargout_2_Layout_Dim[0],
             sizeof(SL_Bus_ekf_std_msgs_MultiArrayDimension) << 4U);
      ekf_B.In1.Layout.Dim_SL_Info.CurrentLength =
        ekf_B.b_varargout_2_Layout_Dim_SL_Inf;
      ekf_B.In1.Layout.Dim_SL_Info.ReceivedLength =
        ekf_B.b_varargout_2_Layout_Dim_SL_I_c;
    }

    // End of MATLABSystem: '<S10>/SourceBlock'
    // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S4>/Subscribe1'
  }

  ekf_emxInit_real_T(&H, 2);
  ekf_emxInit_real_T(&lambda, 2);
  ekf_emxInit_real_T(&tmp, 1);

  // MATLABSystem: '<S6>/MATLAB System' incorporates:
  //   Constant: '<S1>/Constant2'
  //   Integrator: '<S1>/Integrator'

  obj = &ekf_DW.obj;
  RigidBodyTreeDynamics_massMatri(&ekf_DW.obj.TreeInternal,
    &ekf_X.Integrator_CSTATE[0], H, lambda);
  ekf_B.vNum = obj->TreeInternal.VelocityNumber;
  ekf_B.i = tmp->size[0];
  ekf_B.loop_ub = static_cast<int32_T>(ekf_B.vNum);
  tmp->size[0] = ekf_B.loop_ub;
  ekf_emxEnsureCapacity_real_T(tmp, ekf_B.i);
  for (ekf_B.i = 0; ekf_B.i < ekf_B.loop_ub; ekf_B.i++) {
    tmp->data[ekf_B.i] = 0.0;
  }

  RigidBodyTreeDynamics_inverseDy(&obj->TreeInternal, &ekf_X.Integrator_CSTATE[0],
    &ekf_X.Integrator_CSTATE[7], tmp, ekf_P.Constant2_Value, ekf_B.bias);
  ekf_emxFree_real_T(&tmp);

  // MATLABSystem: '<S6>/MATLAB System'
  for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
    ekf_B.bias[ekf_B.i] = ekf_B.In1.Data[ekf_B.i] - ekf_B.bias[ekf_B.i];
  }

  if ((H->size[0] == 0) || (H->size[1] == 0)) {
    ekf_B.b_kBcol = 0;
  } else {
    ekf_B.i = H->size[0];
    ekf_B.b_kBcol = H->size[1];
    if (ekf_B.i > ekf_B.b_kBcol) {
      ekf_B.b_kBcol = ekf_B.i;
    }
  }

  ekf_emxInit_real_T(&H_0, 2);

  // MATLABSystem: '<S6>/MATLAB System'
  ekf_B.i = H_0->size[0] * H_0->size[1];
  H_0->size[0] = H->size[0];
  H_0->size[1] = H->size[1];
  ekf_emxEnsureCapacity_real_T(H_0, ekf_B.i);
  ekf_B.b_ix = H->size[0] * H->size[1] - 1;
  for (ekf_B.i = 0; ekf_B.i <= ekf_B.b_ix; ekf_B.i++) {
    H_0->data[ekf_B.i] = H->data[ekf_B.i];
  }

  ekf_emxFree_real_T(&H);

  // MATLABSystem: '<S6>/MATLAB System'
  ekf_B.n = static_cast<int32_T>(((-1.0 - static_cast<real_T>(ekf_B.b_kBcol)) +
    1.0) / -1.0) - 1;
  for (ekf_B.b_ix = 0; ekf_B.b_ix <= ekf_B.n; ekf_B.b_ix++) {
    ekf_B.j = static_cast<real_T>(ekf_B.b_kBcol) + -static_cast<real_T>
      (ekf_B.b_ix);
    ekf_B.i = static_cast<int32_T>(ekf_B.j);
    ekf_B.iend = ekf_B.i - 1;
    H_0->data[(static_cast<int32_T>(ekf_B.j) + H_0->size[0] *
               (static_cast<int32_T>(ekf_B.j) - 1)) - 1] = sqrt(H_0->data
      [(ekf_B.iend * H_0->size[0] + ekf_B.i) - 1]);
    ekf_B.k = lambda->data[ekf_B.iend];
    while (ekf_B.k > 0.0) {
      ekf_B.c_ix = static_cast<int32_T>(ekf_B.k) - 1;
      H_0->data[(static_cast<int32_T>(ekf_B.j) + H_0->size[0] *
                 (static_cast<int32_T>(ekf_B.k) - 1)) - 1] = H_0->data
        [(ekf_B.c_ix * H_0->size[0] + ekf_B.i) - 1] / H_0->data
        [((static_cast<int32_T>(ekf_B.j) - 1) * H_0->size[0] +
          static_cast<int32_T>(ekf_B.j)) - 1];
      ekf_B.k = lambda->data[ekf_B.c_ix];
    }

    ekf_B.k = lambda->data[ekf_B.iend];
    while (ekf_B.k > 0.0) {
      ekf_B.j = ekf_B.k;
      while (ekf_B.j > 0.0) {
        ekf_B.iend = static_cast<int32_T>(ekf_B.j) - 1;
        H_0->data[(static_cast<int32_T>(ekf_B.k) + H_0->size[0] *
                   (static_cast<int32_T>(ekf_B.j) - 1)) - 1] = H_0->data
          [(ekf_B.iend * H_0->size[0] + static_cast<int32_T>(ekf_B.k)) - 1] -
          H_0->data[((static_cast<int32_T>(ekf_B.k) - 1) * H_0->size[0] +
                     ekf_B.i) - 1] * H_0->data[((static_cast<int32_T>(ekf_B.j) -
          1) * H_0->size[0] + ekf_B.i) - 1];
        ekf_B.j = lambda->data[ekf_B.iend];
      }

      ekf_B.k = lambda->data[static_cast<int32_T>(ekf_B.k) - 1];
    }
  }

  ekf_emxInit_real_T(&L, 2);

  // MATLABSystem: '<S6>/MATLAB System'
  ekf_B.i = L->size[0] * L->size[1];
  L->size[0] = H_0->size[0];
  L->size[1] = H_0->size[1];
  ekf_emxEnsureCapacity_real_T(L, ekf_B.i);
  ekf_B.b_ix = H_0->size[0] * H_0->size[1] - 1;
  for (ekf_B.i = 0; ekf_B.i <= ekf_B.b_ix; ekf_B.i++) {
    L->data[ekf_B.i] = H_0->data[ekf_B.i];
  }

  ekf_B.n = H_0->size[1];
  if ((H_0->size[0] == 0) || (H_0->size[1] == 0) || (1 >= H_0->size[1])) {
  } else {
    ekf_B.iend = 0;
    for (ekf_B.i = 2; ekf_B.i <= ekf_B.n; ekf_B.i++) {
      for (ekf_B.b_ix = 0; ekf_B.b_ix <= ekf_B.iend; ekf_B.b_ix++) {
        L->data[ekf_B.b_ix + L->size[0] * (ekf_B.i - 1)] = 0.0;
      }

      if (ekf_B.iend + 1 < H_0->size[0]) {
        ekf_B.iend++;
      }
    }
  }

  ekf_emxFree_real_T(&H_0);

  // MATLABSystem: '<S6>/MATLAB System'
  ekf_B.n = static_cast<int32_T>(((-1.0 - ekf_B.vNum) + 1.0) / -1.0) - 1;
  for (ekf_B.b_ix = 0; ekf_B.b_ix <= ekf_B.n; ekf_B.b_ix++) {
    ekf_B.iend = static_cast<int32_T>(ekf_B.vNum + -static_cast<real_T>
      (ekf_B.b_ix));
    ekf_B.i = ekf_B.iend - 1;
    ekf_B.bias[ekf_B.i] /= L->data[(ekf_B.i * L->size[0] + ekf_B.iend) - 1];
    ekf_B.j = lambda->data[ekf_B.i];
    while (ekf_B.j > 0.0) {
      ekf_B.c_ix = static_cast<int32_T>(ekf_B.j) - 1;
      ekf_B.bias[ekf_B.c_ix] -= L->data[(ekf_B.c_ix * L->size[0] + ekf_B.iend) -
        1] * ekf_B.bias[ekf_B.i];
      ekf_B.j = lambda->data[ekf_B.c_ix];
    }
  }

  ekf_B.loop_ub--;
  for (ekf_B.b_ix = 0; ekf_B.b_ix <= ekf_B.loop_ub; ekf_B.b_ix++) {
    ekf_B.j = lambda->data[ekf_B.b_ix];
    while (ekf_B.j > 0.0) {
      ekf_B.i = static_cast<int32_T>(ekf_B.j) - 1;
      ekf_B.bias[ekf_B.b_ix] -= L->data[ekf_B.i * L->size[0] + ekf_B.b_ix] *
        ekf_B.bias[ekf_B.i];
      ekf_B.j = lambda->data[ekf_B.i];
    }

    ekf_B.bias[ekf_B.b_ix] /= L->data[L->size[0] * ekf_B.b_ix + ekf_B.b_ix];
  }

  ekf_emxFree_real_T(&lambda);
  ekf_emxFree_real_T(&L);
  if (rtmIsMajorTimeStep(ekf_M) &&
      ekf_M->Timing.TaskCounters.TID[2] == 0) {
    // MATLABSystem: '<S2>/Get Parameter7'
    ParamGet_ekf_383.get_parameter(&ekf_B.GetParameter7_o1);

    // MATLABSystem: '<S2>/Get Parameter8'
    ParamGet_ekf_384.get_parameter(&ekf_B.GetParameter8_o1);
  }

  // MATLAB Function: '<S1>/EKF' incorporates:
  //   Constant: '<S1>/delta_t'
  //   Integrator: '<S1>/Integrator'
  //   Integrator: '<S1>/Integrator1'
  //   MATLABSystem: '<S6>/MATLAB System'

  memset(&ekf_B.xp[0], 0, 14U * sizeof(real_T));
  for (ekf_B.i = 0; ekf_B.i < 49; ekf_B.i++) {
    ekf_B.R[ekf_B.i] = ekf_B.GetParameter8_o1 * static_cast<real_T>(b_b[ekf_B.i]);
    ekf_B.R_tmp[ekf_B.i] = static_cast<real_T>(b_b[ekf_B.i]) *
      ekf_P.delta_t_Value;
  }

  for (ekf_B.i = 0; ekf_B.i < 14; ekf_B.i++) {
    for (ekf_B.iend = 0; ekf_B.iend < 7; ekf_B.iend++) {
      ekf_B.F[ekf_B.iend + 14 * ekf_B.i] = f[7 * ekf_B.i + ekf_B.iend];
    }
  }

  for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
    for (ekf_B.iend = 0; ekf_B.iend < 7; ekf_B.iend++) {
      ekf_B.vNum = ekf_B.R_tmp[7 * ekf_B.i + ekf_B.iend];
      ekf_B.F[(ekf_B.iend + 14 * ekf_B.i) + 7] = ekf_B.vNum;
      ekf_B.F[(ekf_B.iend + 14 * (ekf_B.i + 7)) + 7] = ekf_B.vNum;
    }
  }

  memcpy(&ekf_B.R_tmp[0], &ekf_B.R[0], 49U * sizeof(real_T));
  for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
    ekf_B.ipiv[ekf_B.i] = static_cast<int8_T>(ekf_B.i + 1);
  }

  for (ekf_B.i = 0; ekf_B.i < 6; ekf_B.i++) {
    ekf_B.loop_ub = ekf_B.i << 3;
    ekf_B.b_ix = 0;
    ekf_B.n = ekf_B.loop_ub;
    ekf_B.vNum = fabs(ekf_B.R_tmp[ekf_B.loop_ub]);
    ekf_B.iend = 2;
    while (ekf_B.iend <= 7 - ekf_B.i) {
      ekf_B.n++;
      ekf_B.k = fabs(ekf_B.R_tmp[ekf_B.n]);
      if (ekf_B.k > ekf_B.vNum) {
        ekf_B.b_ix = ekf_B.iend - 1;
        ekf_B.vNum = ekf_B.k;
      }

      ekf_B.iend++;
    }

    if (ekf_B.R_tmp[ekf_B.loop_ub + ekf_B.b_ix] != 0.0) {
      if (ekf_B.b_ix != 0) {
        ekf_B.n = ekf_B.i + ekf_B.b_ix;
        ekf_B.ipiv[ekf_B.i] = static_cast<int8_T>(ekf_B.n + 1);
        ekf_B.b_ix = ekf_B.i;
        for (ekf_B.iend = 0; ekf_B.iend < 7; ekf_B.iend++) {
          ekf_B.vNum = ekf_B.R_tmp[ekf_B.b_ix];
          ekf_B.R_tmp[ekf_B.b_ix] = ekf_B.R_tmp[ekf_B.n];
          ekf_B.R_tmp[ekf_B.n] = ekf_B.vNum;
          ekf_B.b_ix += 7;
          ekf_B.n += 7;
        }
      }

      ekf_B.n = (ekf_B.loop_ub - ekf_B.i) + 7;
      ekf_B.b_ix = ekf_B.loop_ub + 1;
      while (ekf_B.b_ix + 1 <= ekf_B.n) {
        ekf_B.R_tmp[ekf_B.b_ix] /= ekf_B.R_tmp[ekf_B.loop_ub];
        ekf_B.b_ix++;
      }
    }

    ekf_B.b_ix = ekf_B.loop_ub;
    ekf_B.n = ekf_B.loop_ub + 7;
    ekf_B.iend = 0;
    while (ekf_B.iend <= 5 - ekf_B.i) {
      if (ekf_B.R_tmp[ekf_B.n] != 0.0) {
        ekf_B.vNum = -ekf_B.R_tmp[ekf_B.n];
        ekf_B.c_ix = ekf_B.loop_ub + 1;
        ekf_B.b_kBcol = (ekf_B.b_ix - ekf_B.i) + 14;
        ekf_B.kBcol = ekf_B.b_ix + 8;
        while (ekf_B.kBcol + 1 <= ekf_B.b_kBcol) {
          ekf_B.R_tmp[ekf_B.kBcol] += ekf_B.R_tmp[ekf_B.c_ix] * ekf_B.vNum;
          ekf_B.c_ix++;
          ekf_B.kBcol++;
        }
      }

      ekf_B.n += 7;
      ekf_B.b_ix += 7;
      ekf_B.iend++;
    }
  }

  for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
    for (ekf_B.iend = 0; ekf_B.iend < 14; ekf_B.iend++) {
      ekf_B.loop_ub = ekf_B.iend + 14 * ekf_B.i;
      ekf_B.K[ekf_B.loop_ub] = 0.0;
      for (ekf_B.c_ix = 0; ekf_B.c_ix < 14; ekf_B.c_ix++) {
        ekf_B.K[ekf_B.loop_ub] += ekf_X.Integrator1_CSTATE[14 * ekf_B.c_ix +
          ekf_B.iend] * static_cast<real_T>(c_b[14 * ekf_B.i + ekf_B.c_ix]);
      }
    }
  }

  for (ekf_B.n = 0; ekf_B.n < 7; ekf_B.n++) {
    ekf_B.iend = 14 * ekf_B.n;
    ekf_B.c_ix = 7 * ekf_B.n;
    ekf_B.b_kBcol = 0;
    while (ekf_B.b_kBcol <= ekf_B.n - 1) {
      ekf_B.kBcol = 14 * ekf_B.b_kBcol;
      ekf_B.i = ekf_B.b_kBcol + ekf_B.c_ix;
      if (ekf_B.R_tmp[ekf_B.i] != 0.0) {
        for (ekf_B.b_ix = 0; ekf_B.b_ix < 14; ekf_B.b_ix++) {
          ekf_B.loop_ub = ekf_B.b_ix + ekf_B.iend;
          ekf_B.K[ekf_B.loop_ub] -= ekf_B.R_tmp[ekf_B.i] * ekf_B.K[ekf_B.b_ix +
            ekf_B.kBcol];
        }
      }

      ekf_B.b_kBcol++;
    }

    ekf_B.vNum = 1.0 / ekf_B.R_tmp[ekf_B.n + ekf_B.c_ix];
    for (ekf_B.i = 0; ekf_B.i < 14; ekf_B.i++) {
      ekf_B.loop_ub = ekf_B.i + ekf_B.iend;
      ekf_B.K[ekf_B.loop_ub] *= ekf_B.vNum;
    }
  }

  for (ekf_B.b_ix = 6; ekf_B.b_ix >= 0; ekf_B.b_ix--) {
    ekf_B.n = 14 * ekf_B.b_ix;
    ekf_B.iend = 7 * ekf_B.b_ix - 1;
    ekf_B.c_ix = ekf_B.b_ix + 2;
    while (ekf_B.c_ix < 8) {
      ekf_B.b_kBcol = (ekf_B.c_ix - 1) * 14;
      ekf_B.i = ekf_B.c_ix + ekf_B.iend;
      if (ekf_B.R_tmp[ekf_B.i] != 0.0) {
        for (ekf_B.kBcol = 0; ekf_B.kBcol < 14; ekf_B.kBcol++) {
          ekf_B.loop_ub = ekf_B.kBcol + ekf_B.n;
          ekf_B.K[ekf_B.loop_ub] -= ekf_B.R_tmp[ekf_B.i] * ekf_B.K[ekf_B.kBcol +
            ekf_B.b_kBcol];
        }
      }

      ekf_B.c_ix++;
    }
  }

  for (ekf_B.i = 5; ekf_B.i >= 0; ekf_B.i--) {
    if (ekf_B.i + 1 != ekf_B.ipiv[ekf_B.i]) {
      ekf_B.b_ix = ekf_B.ipiv[ekf_B.i] - 1;
      for (ekf_B.n = 0; ekf_B.n < 14; ekf_B.n++) {
        ekf_B.iend = 14 * ekf_B.i + ekf_B.n;
        ekf_B.vNum = ekf_B.K[ekf_B.iend];
        ekf_B.loop_ub = 14 * ekf_B.b_ix + ekf_B.n;
        ekf_B.K[ekf_B.iend] = ekf_B.K[ekf_B.loop_ub];
        ekf_B.K[ekf_B.loop_ub] = ekf_B.vNum;
      }
    }
  }

  for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
    ekf_B.xp[ekf_B.i] = ekf_X.Integrator_CSTATE[ekf_B.i + 7];
    ekf_B.xp[ekf_B.i + 7] = ekf_B.bias[ekf_B.i];
    ekf_B.e[ekf_B.i] = ekf_B.In1_k.Data[ekf_B.i] -
      ekf_X.Integrator_CSTATE[ekf_B.i];
  }

  for (ekf_B.i = 0; ekf_B.i < 14; ekf_B.i++) {
    ekf_B.vNum = 0.0;
    for (ekf_B.iend = 0; ekf_B.iend < 7; ekf_B.iend++) {
      ekf_B.vNum += ekf_B.K[14 * ekf_B.iend + ekf_B.i] * ekf_B.e[ekf_B.iend];
    }

    ekf_B.xp[ekf_B.i] += ekf_B.vNum;
    for (ekf_B.iend = 0; ekf_B.iend < 14; ekf_B.iend++) {
      ekf_B.loop_ub = ekf_B.i + 14 * ekf_B.iend;
      ekf_B.F_c[ekf_B.loop_ub] = 0.0;
      ekf_B.dv[ekf_B.loop_ub] = 0.0;
      for (ekf_B.c_ix = 0; ekf_B.c_ix < 14; ekf_B.c_ix++) {
        ekf_B.b_ix = 14 * ekf_B.c_ix + ekf_B.i;
        ekf_B.F_c[ekf_B.loop_ub] += ekf_B.F[ekf_B.b_ix] *
          ekf_X.Integrator1_CSTATE[14 * ekf_B.iend + ekf_B.c_ix];
        ekf_B.dv[ekf_B.loop_ub] += ekf_X.Integrator1_CSTATE[ekf_B.b_ix] *
          ekf_B.F[14 * ekf_B.c_ix + ekf_B.iend];
      }
    }

    for (ekf_B.iend = 0; ekf_B.iend < 7; ekf_B.iend++) {
      ekf_B.loop_ub = ekf_B.i + 14 * ekf_B.iend;
      ekf_B.K_k[ekf_B.loop_ub] = 0.0;
      for (ekf_B.c_ix = 0; ekf_B.c_ix < 7; ekf_B.c_ix++) {
        ekf_B.K_k[ekf_B.loop_ub] += ekf_B.K[14 * ekf_B.c_ix + ekf_B.i] *
          ekf_B.R[7 * ekf_B.iend + ekf_B.c_ix];
      }
    }

    for (ekf_B.iend = 0; ekf_B.iend < 14; ekf_B.iend++) {
      ekf_B.vNum = 0.0;
      for (ekf_B.c_ix = 0; ekf_B.c_ix < 7; ekf_B.c_ix++) {
        ekf_B.vNum += ekf_B.K_k[14 * ekf_B.c_ix + ekf_B.i] * ekf_B.K[14 *
          ekf_B.c_ix + ekf_B.iend];
      }

      ekf_B.loop_ub = 14 * ekf_B.iend + ekf_B.i;
      ekf_B.Pp[ekf_B.loop_ub] = ((ekf_B.F_c[ekf_B.loop_ub] +
        ekf_B.dv[ekf_B.loop_ub]) - ekf_B.vNum) + static_cast<real_T>
        (d_b[ekf_B.loop_ub]) * ekf_B.GetParameter7_o1;
    }
  }

  // End of MATLAB Function: '<S1>/EKF'
  if (rtmIsMajorTimeStep(ekf_M) &&
      ekf_M->Timing.TaskCounters.TID[1] == 0) {
    // BusAssignment: '<S3>/Bus Assignment3' incorporates:
    //   Constant: '<S3>/Constant1'
    //   Constant: '<S7>/Constant'
    //   Integrator: '<S1>/Integrator'

    ekf_B.BusAssignment3 = ekf_P.Constant_Value_i;
    for (ekf_B.i = 0; ekf_B.i < 7; ekf_B.i++) {
      ekf_B.BusAssignment3.Data[ekf_B.i] = ekf_X.Integrator_CSTATE[ekf_B.i + 7];
    }

    ekf_B.BusAssignment3.Data_SL_Info.CurrentLength = ekf_P.Constant1_Value;
    ekf_B.BusAssignment3.Data_SL_Info.ReceivedLength = ekf_P.Constant1_Value;

    // End of BusAssignment: '<S3>/Bus Assignment3'

    // Outputs for Atomic SubSystem: '<S3>/Publish3'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_ekf_331.publish(&ekf_B.BusAssignment3);

    // End of Outputs for SubSystem: '<S3>/Publish3'
  }

  if (rtmIsMajorTimeStep(ekf_M)) {
    rt_ertODEUpdateContinuousStates(&ekf_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++ekf_M->Timing.clockTick0;
    ekf_M->Timing.t[0] = rtsiGetSolverStopTime(&ekf_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.004s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.004, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      ekf_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void ekf_derivatives(void)
{
  XDot_ekf_T *_rtXdot;
  _rtXdot = ((XDot_ekf_T *) ekf_M->derivs);

  // Derivatives for Integrator: '<S1>/Integrator1'
  memcpy(&_rtXdot->Integrator1_CSTATE[0], &ekf_B.Pp[0], 196U * sizeof(real_T));

  // Derivatives for Integrator: '<S1>/Integrator'
  memcpy(&_rtXdot->Integrator_CSTATE[0], &ekf_B.xp[0], 14U * sizeof(real_T));
}

// Model initialize function
void ekf_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&ekf_M->solverInfo, &ekf_M->Timing.simTimeStep);
    rtsiSetTPtr(&ekf_M->solverInfo, &rtmGetTPtr(ekf_M));
    rtsiSetStepSizePtr(&ekf_M->solverInfo, &ekf_M->Timing.stepSize0);
    rtsiSetdXPtr(&ekf_M->solverInfo, &ekf_M->derivs);
    rtsiSetContStatesPtr(&ekf_M->solverInfo, (real_T **) &ekf_M->contStates);
    rtsiSetNumContStatesPtr(&ekf_M->solverInfo, &ekf_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&ekf_M->solverInfo,
      &ekf_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&ekf_M->solverInfo,
      &ekf_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&ekf_M->solverInfo,
      &ekf_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&ekf_M->solverInfo, (&rtmGetErrorStatus(ekf_M)));
    rtsiSetRTModelPtr(&ekf_M->solverInfo, ekf_M);
  }

  rtsiSetSimTimeStep(&ekf_M->solverInfo, MAJOR_TIME_STEP);
  ekf_M->intgData.y = ekf_M->odeY;
  ekf_M->intgData.f[0] = ekf_M->odeF[0];
  ekf_M->intgData.f[1] = ekf_M->odeF[1];
  ekf_M->intgData.f[2] = ekf_M->odeF[2];
  ekf_M->intgData.f[3] = ekf_M->odeF[3];
  ekf_M->contStates = ((X_ekf_T *) &ekf_X);
  rtsiSetSolverData(&ekf_M->solverInfo, static_cast<void *>(&ekf_M->intgData));
  rtsiSetSolverName(&ekf_M->solverInfo,"ode4");
  rtmSetTPtr(ekf_M, &ekf_M->Timing.tArray[0]);
  ekf_M->Timing.stepSize0 = 0.004;

  {
    int32_T i;
    char_T tmp[7];
    static const char_T tmp_0[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p',
      'o', 's', 'i', 't', 'i', 'o', 'n', 's' };

    static const char_T tmp_1[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_2[6] = { '/', 'e', 'k', 'f', '/', 'Q' };

    static const char_T tmp_3[6] = { '/', 'e', 'k', 'f', '/', 'R' };

    static const char_T tmp_4[21] = { '/', 'e', 'k', 'f', '/', 'e', 's', 't',
      'i', 'm', 'a', 't', 'e', 'd', '_', 's', 'p', 'e', 'e', 'd', 's' };

    // Start for Atomic SubSystem: '<S4>/Subscribe'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    ekf_DW.obj_m.matlabCodegenIsDeleted = false;
    ekf_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      ekf_B.cv1[i] = tmp_0[i];
    }

    ekf_B.cv1[16] = '\x00';
    Sub_ekf_299.createSubscriber(ekf_B.cv1, 1);
    ekf_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe'

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    ekf_DW.obj_ay.matlabCodegenIsDeleted = false;
    ekf_DW.obj_ay.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      ekf_B.cv2[i] = tmp_1[i];
    }

    ekf_B.cv2[14] = '\x00';
    Sub_ekf_638.createSubscriber(ekf_B.cv2, 1);
    ekf_DW.obj_ay.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'
    emxInitStruct_robotics_slmanip_(&ekf_DW.obj);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_0);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_19);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_18);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_17);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_16);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_15);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_14);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_13);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_12);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_11);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_10);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_9);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_8);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_7);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_6);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_5);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_4);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_3);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_2);
    emxInitStruct_j_robotics_manip_(&ekf_DW.gobj_1);

    // Start for MATLABSystem: '<S6>/MATLAB System'
    ekf_DW.obj.isInitialized = 0;
    ekf_DW.obj.isInitialized = 1;
    ekf_RigidBodyTree_RigidBodyTree(&ekf_DW.obj.TreeInternal, &ekf_DW.gobj_0,
      &ekf_DW.gobj_19, &ekf_DW.gobj_18, &ekf_DW.gobj_17, &ekf_DW.gobj_16,
      &ekf_DW.gobj_15, &ekf_DW.gobj_14, &ekf_DW.gobj_13, &ekf_DW.gobj_12,
      &ekf_DW.gobj_11);

    // Start for MATLABSystem: '<S2>/Get Parameter7'
    ekf_DW.obj_a.matlabCodegenIsDeleted = false;
    ekf_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp[i] = tmp_2[i];
    }

    tmp[6] = '\x00';
    ParamGet_ekf_383.initialize(tmp);
    ParamGet_ekf_383.initialize_error_codes(0, 1, 2, 3);
    ParamGet_ekf_383.set_initial_value(0.0);
    ekf_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter7'

    // Start for MATLABSystem: '<S2>/Get Parameter8'
    ekf_DW.obj_o.matlabCodegenIsDeleted = false;
    ekf_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp[i] = tmp_3[i];
    }

    tmp[6] = '\x00';
    ParamGet_ekf_384.initialize(tmp);
    ParamGet_ekf_384.initialize_error_codes(0, 1, 2, 3);
    ParamGet_ekf_384.set_initial_value(0.0);
    ekf_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter8'

    // Start for Atomic SubSystem: '<S3>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    ekf_DW.obj_b.matlabCodegenIsDeleted = false;
    ekf_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      ekf_B.cv[i] = tmp_4[i];
    }

    ekf_B.cv[21] = '\x00';
    Pub_ekf_331.createPublisher(ekf_B.cv, 1);
    ekf_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<S3>/Publish3'

    // InitializeConditions for Integrator: '<S1>/Integrator1'
    memcpy(&ekf_X.Integrator1_CSTATE[0], &ekf_P.Integrator1_IC[0], 196U * sizeof
           (real_T));

    // InitializeConditions for Integrator: '<S1>/Integrator'
    for (i = 0; i < 14; i++) {
      ekf_X.Integrator_CSTATE[i] = ekf_P.Integrator_IC;
    }

    // End of InitializeConditions for Integrator: '<S1>/Integrator'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1'
    ekf_B.In1_k = ekf_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    ekf_B.In1 = ekf_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'
  }
}

// Model terminate function
void ekf_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S4>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matlabC_ibr(&ekf_DW.obj_m);

  // End of Terminate for SubSystem: '<S4>/Subscribe'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matlabC_ibr(&ekf_DW.obj_ay);

  // End of Terminate for SubSystem: '<S4>/Subscribe1'
  emxFreeStruct_robotics_slmanip_(&ekf_DW.obj);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_0);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_19);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_18);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_17);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_16);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_15);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_14);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_13);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_12);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_11);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_10);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_9);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_8);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_7);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_6);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_5);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_4);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_3);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_2);
  emxFreeStruct_j_robotics_manip_(&ekf_DW.gobj_1);

  // Terminate for MATLABSystem: '<S2>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&ekf_DW.obj_a);

  // Terminate for MATLABSystem: '<S2>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&ekf_DW.obj_o);

  // Terminate for Atomic SubSystem: '<S3>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabCo_ib(&ekf_DW.obj_b);

  // End of Terminate for SubSystem: '<S3>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//
