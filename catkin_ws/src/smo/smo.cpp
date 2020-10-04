//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: smo.cpp
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
#include "smo.h"
#include "smo_private.h"

// Block signals (default storage)
B_smo_T smo_B;

// Continuous states
X_smo_T smo_X;

// Block states (default storage)
DW_smo_T smo_DW;

// Real-time model
RT_MODEL_smo_T smo_M_ = RT_MODEL_smo_T();
RT_MODEL_smo_T *const smo_M = &smo_M_;

// Forward declaration for local functions
static void smo_emxInit_real_T(emxArray_real_T_smo_T **pEmxArray, int32_T
  numDimensions);
static void smo_SystemCore_step(boolean_T *varargout_1, real_T varargout_2_Data
  [7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0);
static void smo_emxEnsureCapacity_real_T(emxArray_real_T_smo_T *emxArray,
  int32_T oldNumel);
static void smo_emxInit_e_cell_wrap1(emxArray_e_cell_wrap_smo_a_T **pEmxArray,
  int32_T numDimensions);
static void emxEnsureCapacity_e_cell_wrap1(emxArray_e_cell_wrap_smo_a_T
  *emxArray, int32_T oldNumel);
static void rigidBodyJoint_get_JointAxis_a(const rigidBodyJoint_smo_a_T *obj,
  real_T ax[3]);
static void smo_normalizeRows(const real_T matrix[3], real_T normRowMatrix[3]);
static void smo_cat(real_T varargin_1, real_T varargin_2, real_T varargin_3,
                    real_T varargin_4, real_T varargin_5, real_T varargin_6,
                    real_T varargin_7, real_T varargin_8, real_T varargin_9,
                    real_T y[9]);
static void rigidBodyJoint_transformBodyT_a(const rigidBodyJoint_smo_a_T *obj,
  const real_T q_data[], const int32_T *q_size, real_T T[16]);
static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_smo_a_T *obj,
  real_T T[16]);
static void smo_tforminv(const real_T T[16], real_T Tinv[16]);
static void smo_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void smo_emxFree_real_T(emxArray_real_T_smo_T **pEmxArray);
static void smo_emxFree_e_cell_wrap1(emxArray_e_cell_wrap_smo_a_T **pEmxArray);
static void RigidBodyTreeDynamics_massMatri(k_robotics_manip_internal_R_a_T
  *robot, const real_T q[7], emxArray_real_T_smo_T *H);
static void smo_emxInit_e_cell_wrap(emxArray_e_cell_wrap_smo_T **pEmxArray,
  int32_T numDimensions);
static void smo_emxInit_char_T(emxArray_char_T_smo_T **pEmxArray, int32_T
  numDimensions);
static void s_emxEnsureCapacity_e_cell_wrap(emxArray_e_cell_wrap_smo_T *emxArray,
  int32_T oldNumel);
static void smo_emxEnsureCapacity_char_T(emxArray_char_T_smo_T *emxArray,
  int32_T oldNumel);
static void sm_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_smo_T *obj,
  real_T ax[3]);
static void smo_emxFree_char_T(emxArray_char_T_smo_T **pEmxArray);
static void RigidBodyTree_forwardKinematics(k_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[7], emxArray_e_cell_wrap_smo_T *Ttree);
static void smo_emxFree_e_cell_wrap(emxArray_e_cell_wrap_smo_T **pEmxArray);
static void smo_SystemCore_step_a(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0);
static void smo_emxInit_f_cell_wrap(emxArray_f_cell_wrap_smo_T **pEmxArray,
  int32_T numDimensions);
static void s_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_smo_T *emxArray,
  int32_T oldNumel);
static void smo_emxFree_f_cell_wrap(emxArray_f_cell_wrap_smo_T **pEmxArray);
static void RigidBodyTreeDynamics_massMat_a(k_robotics_manip_internal__a4_T
  *robot, const real_T q[7], emxArray_real_T_smo_T *H, emxArray_real_T_smo_T
  *lambda);
static void RigidBodyTreeDynamics_inverseDy(k_robotics_manip_internal__a4_T
  *robot, const real_T q[7], const real_T qdot[7], const emxArray_real_T_smo_T
  *qddot, const real_T fext[60], real_T tau[7]);
static void smo_atan2(const real_T y_data[], const int32_T y_size[3], const
                      real_T x_data[], const int32_T x_size[3], real_T r_data[],
                      int32_T r_size[3]);
static void matlabCodegenHandle_matla_a43q4(ros_slros_internal_block_Subs_T *obj);
static void sm_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_smo_a_T *pStruct);
static void emxFreeStruct_i_robotics_manip_(i_robotics_manip_internal_R_a_T
  *pStruct);
static void emxFreeStruct_k_robotics_manip_(k_robotics_manip_internal_R_a_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_b_a_T
  *pStruct);
static void emxFreeStruct_j_robotics_manip_(j_robotics_manip_internal_R_a_T
  *pStruct);
static void s_emxFreeStruct_rigidBodyJoint1(rigidBodyJoint_smo_T *pStruct);
static void emxFreeStruct_i_robotics_mani_a(i_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_k_robotics_mani_a(k_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmani_a(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_j_robotics_mani_a(j_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_k_robotics_man_a4(k_robotics_manip_internal__a4_T
  *pStruct);
static void emxFreeStruct_robotics_slman_a4(robotics_slmanip_internal__a4_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabC_a43(ros_slros_internal_block_Publ_T *obj);
static void sm_emxInitStruct_rigidBodyJoint(rigidBodyJoint_smo_a_T *pStruct);
static void emxInitStruct_i_robotics_manip_(i_robotics_manip_internal_R_a_T
  *pStruct);
static void emxInitStruct_k_robotics_manip_(k_robotics_manip_internal_R_a_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_b_a_T
  *pStruct);
static void emxInitStruct_j_robotics_manip_(j_robotics_manip_internal_R_a_T
  *pStruct);
static j_robotics_manip_internal_R_a_T *smo_RigidBody_RigidBody_a43q4ba
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *sm_RigidBody_RigidBody_a43q4bat
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *s_RigidBody_RigidBody_a43q4bat5
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *RigidBody_RigidBody_a43q4bat52
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *RigidBody_RigidBody_a43q4bat52o
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *RigidBody_RigidBod_a43q4bat52o3
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *RigidBody_RigidBo_a43q4bat52o31
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *RigidBody_RigidB_a43q4bat52o312
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *RigidBody_Rigid_a43q4bat52o312z
  (j_robotics_manip_internal_R_a_T *obj);
static j_robotics_manip_internal_R_a_T *s_RigidBody_Rigid_n
  (j_robotics_manip_internal_R_a_T *obj);
static i_robotics_manip_internal_R_a_T *s_RigidBody_Rigid_b
  (i_robotics_manip_internal_R_a_T *obj);
static k_robotics_manip_internal_R_a_T *s_RigidBodyTree_RigidBodyTree_a
  (k_robotics_manip_internal_R_a_T *obj, j_robotics_manip_internal_R_a_T *iobj_0,
   j_robotics_manip_internal_R_a_T *iobj_1, j_robotics_manip_internal_R_a_T
   *iobj_2, j_robotics_manip_internal_R_a_T *iobj_3,
   j_robotics_manip_internal_R_a_T *iobj_4, j_robotics_manip_internal_R_a_T
   *iobj_5, j_robotics_manip_internal_R_a_T *iobj_6,
   j_robotics_manip_internal_R_a_T *iobj_7, j_robotics_manip_internal_R_a_T
   *iobj_8, j_robotics_manip_internal_R_a_T *iobj_9);
static void s_emxInitStruct_rigidBodyJoint1(rigidBodyJoint_smo_T *pStruct);
static void emxInitStruct_i_robotics_mani_a(i_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_k_robotics_mani_a(k_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmani_a(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_j_robotics_mani_a(j_robotics_manip_internal_Rig_T
  *pStruct);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a4
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43q
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43q4
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43q4b
  (j_robotics_manip_internal_Rig_T *obj);
static k_robotics_manip_internal_Rig_T *smo_RigidBodyTree_RigidBodyTree
  (k_robotics_manip_internal_Rig_T *obj, j_robotics_manip_internal_Rig_T *iobj_0,
   j_robotics_manip_internal_Rig_T *iobj_1, j_robotics_manip_internal_Rig_T
   *iobj_2, j_robotics_manip_internal_Rig_T *iobj_3,
   j_robotics_manip_internal_Rig_T *iobj_4, j_robotics_manip_internal_Rig_T
   *iobj_5, j_robotics_manip_internal_Rig_T *iobj_6,
   j_robotics_manip_internal_Rig_T *iobj_7, j_robotics_manip_internal_Rig_T
   *iobj_8, j_robotics_manip_internal_Rig_T *iobj_9);
static void emxInitStruct_k_robotics_man_a4(k_robotics_manip_internal__a4_T
  *pStruct);
static void emxInitStruct_robotics_slman_a4(robotics_slmanip_internal__a4_T
  *pStruct);
static k_robotics_manip_internal__a4_T *RigidBodyTree_RigidBodyTree_a4
  (k_robotics_manip_internal__a4_T *obj, j_robotics_manip_internal_R_a_T *iobj_0,
   j_robotics_manip_internal_R_a_T *iobj_1, j_robotics_manip_internal_R_a_T
   *iobj_2, j_robotics_manip_internal_R_a_T *iobj_3,
   j_robotics_manip_internal_R_a_T *iobj_4, j_robotics_manip_internal_R_a_T
   *iobj_5, j_robotics_manip_internal_R_a_T *iobj_6,
   j_robotics_manip_internal_R_a_T *iobj_7, j_robotics_manip_internal_R_a_T
   *iobj_8, j_robotics_manip_internal_R_a_T *iobj_9);
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

  (smo_M->Timing.TaskCounters.TID[2])++;
  if ((smo_M->Timing.TaskCounters.TID[2]) > 9) {// Sample time: [0.04s, 0.0s]
    smo_M->Timing.TaskCounters.TID[2] = 0;
  }

  (smo_M->Timing.TaskCounters.TID[3])++;
  if ((smo_M->Timing.TaskCounters.TID[3]) > 249) {// Sample time: [1.0s, 0.0s]
    smo_M->Timing.TaskCounters.TID[3] = 0;
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
  int_T nXc = 42;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  smo_derivatives();

  // f1 = f(t + (h/2), y + (h/2)*f0)
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  smo_step();
  smo_derivatives();

  // f2 = f(t + (h/2), y + (h/2)*f1)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  smo_step();
  smo_derivatives();

  // f3 = f(t + h, y + h*f2)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  smo_step();
  smo_derivatives();

  // tnew = t + h
  // ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3)
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void smo_emxInit_real_T(emxArray_real_T_smo_T **pEmxArray, int32_T
  numDimensions)
{
  emxArray_real_T_smo_T *emxArray;
  *pEmxArray = (emxArray_real_T_smo_T *)malloc(sizeof(emxArray_real_T_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (smo_B.i_j = 0; smo_B.i_j < numDimensions; smo_B.i_j++) {
    emxArray->size[smo_B.i_j] = 0;
  }
}

static void smo_SystemCore_step(boolean_T *varargout_1, real_T varargout_2_Data
  [7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_smo_299.getLatestMessage(&smo_B.b_varargout_2_m);
  for (smo_B.i_h = 0; smo_B.i_h < 7; smo_B.i_h++) {
    varargout_2_Data[smo_B.i_h] = smo_B.b_varargout_2_m.Data[smo_B.i_h];
  }

  *varargout_2_Data_SL_Info_Curren =
    smo_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    smo_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = smo_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &smo_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_smo_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    smo_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    smo_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void smo_emxEnsureCapacity_real_T(emxArray_real_T_smo_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  smo_B.newNumel = 1;
  for (smo_B.i_m = 0; smo_B.i_m < emxArray->numDimensions; smo_B.i_m++) {
    smo_B.newNumel *= emxArray->size[smo_B.i_m];
  }

  if (smo_B.newNumel > emxArray->allocatedSize) {
    smo_B.i_m = emxArray->allocatedSize;
    if (smo_B.i_m < 16) {
      smo_B.i_m = 16;
    }

    while (smo_B.i_m < smo_B.newNumel) {
      if (smo_B.i_m > 1073741823) {
        smo_B.i_m = MAX_int32_T;
      } else {
        smo_B.i_m <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(smo_B.i_m), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = smo_B.i_m;
    emxArray->canFreeData = true;
  }
}

static void smo_emxInit_e_cell_wrap1(emxArray_e_cell_wrap_smo_a_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_e_cell_wrap_smo_a_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_e_cell_wrap_smo_a_T *)malloc(sizeof
    (emxArray_e_cell_wrap_smo_a_T));
  emxArray = *pEmxArray;
  emxArray->data = (e_cell_wrap_smo_a_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxEnsureCapacity_e_cell_wrap1(emxArray_e_cell_wrap_smo_a_T
  *emxArray, int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(i), sizeof(e_cell_wrap_smo_a_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(e_cell_wrap_smo_a_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (e_cell_wrap_smo_a_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void rigidBodyJoint_get_JointAxis_a(const rigidBodyJoint_smo_a_T *obj,
  real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (smo_B.b_kstr_e = 0; smo_B.b_kstr_e < 8; smo_B.b_kstr_e++) {
    smo_B.b_c[smo_B.b_kstr_e] = tmp[smo_B.b_kstr_e];
  }

  smo_B.b_bool_f = false;
  if (obj->Type->size[1] == 8) {
    smo_B.b_kstr_e = 1;
    do {
      exitg1 = 0;
      if (smo_B.b_kstr_e - 1 < 8) {
        smo_B.kstr_g = smo_B.b_kstr_e - 1;
        if (obj->Type->data[smo_B.kstr_g] != smo_B.b_c[smo_B.kstr_g]) {
          exitg1 = 1;
        } else {
          smo_B.b_kstr_e++;
        }
      } else {
        smo_B.b_bool_f = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (smo_B.b_bool_f) {
    guard1 = true;
  } else {
    for (smo_B.b_kstr_e = 0; smo_B.b_kstr_e < 9; smo_B.b_kstr_e++) {
      smo_B.b_m3[smo_B.b_kstr_e] = tmp_0[smo_B.b_kstr_e];
    }

    smo_B.b_bool_f = false;
    if (obj->Type->size[1] == 9) {
      smo_B.b_kstr_e = 1;
      do {
        exitg1 = 0;
        if (smo_B.b_kstr_e - 1 < 9) {
          smo_B.kstr_g = smo_B.b_kstr_e - 1;
          if (obj->Type->data[smo_B.kstr_g] != smo_B.b_m3[smo_B.kstr_g]) {
            exitg1 = 1;
          } else {
            smo_B.b_kstr_e++;
          }
        } else {
          smo_B.b_bool_f = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_bool_f) {
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

static void smo_normalizeRows(const real_T matrix[3], real_T normRowMatrix[3])
{
  smo_B.b_l = 1.0 / sqrt((matrix[0] * matrix[0] + matrix[1] * matrix[1]) +
    matrix[2] * matrix[2]);
  normRowMatrix[0] = matrix[0] * smo_B.b_l;
  normRowMatrix[1] = matrix[1] * smo_B.b_l;
  normRowMatrix[2] = matrix[2] * smo_B.b_l;
}

static void smo_cat(real_T varargin_1, real_T varargin_2, real_T varargin_3,
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

static void rigidBodyJoint_transformBodyT_a(const rigidBodyJoint_smo_a_T *obj,
  const real_T q_data[], const int32_T *q_size, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (smo_B.b_kstr = 0; smo_B.b_kstr < 5; smo_B.b_kstr++) {
    smo_B.b_pc[smo_B.b_kstr] = tmp[smo_B.b_kstr];
  }

  smo_B.b_bool_c = false;
  if (obj->Type->size[1] == 5) {
    smo_B.b_kstr = 1;
    do {
      exitg1 = 0;
      if (smo_B.b_kstr - 1 < 5) {
        smo_B.kstr = smo_B.b_kstr - 1;
        if (obj->Type->data[smo_B.kstr] != smo_B.b_pc[smo_B.kstr]) {
          exitg1 = 1;
        } else {
          smo_B.b_kstr++;
        }
      } else {
        smo_B.b_bool_c = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (smo_B.b_bool_c) {
    smo_B.b_kstr = 0;
  } else {
    for (smo_B.b_kstr = 0; smo_B.b_kstr < 8; smo_B.b_kstr++) {
      smo_B.b_h[smo_B.b_kstr] = tmp_0[smo_B.b_kstr];
    }

    smo_B.b_bool_c = false;
    if (obj->Type->size[1] == 8) {
      smo_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (smo_B.b_kstr - 1 < 8) {
          smo_B.kstr = smo_B.b_kstr - 1;
          if (obj->Type->data[smo_B.kstr] != smo_B.b_h[smo_B.kstr]) {
            exitg1 = 1;
          } else {
            smo_B.b_kstr++;
          }
        } else {
          smo_B.b_bool_c = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_bool_c) {
      smo_B.b_kstr = 1;
    } else {
      smo_B.b_kstr = -1;
    }
  }

  switch (smo_B.b_kstr) {
   case 0:
    memset(&smo_B.TJ[0], 0, sizeof(real_T) << 4U);
    smo_B.TJ[0] = 1.0;
    smo_B.TJ[5] = 1.0;
    smo_B.TJ[10] = 1.0;
    smo_B.TJ[15] = 1.0;
    break;

   case 1:
    rigidBodyJoint_get_JointAxis_a(obj, smo_B.v);
    smo_B.result_data[0] = smo_B.v[0];
    smo_B.result_data[1] = smo_B.v[1];
    smo_B.result_data[2] = smo_B.v[2];
    if (0 <= (*q_size != 0) - 1) {
      smo_B.result_data[3] = q_data[0];
    }

    smo_normalizeRows(&smo_B.result_data[0], smo_B.v);
    smo_B.cth = cos(smo_B.result_data[3]);
    smo_B.sth = sin(smo_B.result_data[3]);
    smo_B.tempR_tmp = smo_B.v[1] * smo_B.v[0] * (1.0 - smo_B.cth);
    smo_B.tempR_tmp_i = smo_B.v[2] * smo_B.sth;
    smo_B.tempR_tmp_l = smo_B.v[2] * smo_B.v[0] * (1.0 - smo_B.cth);
    smo_B.tempR_tmp_o = smo_B.v[1] * smo_B.sth;
    smo_B.tempR_tmp_o2 = smo_B.v[2] * smo_B.v[1] * (1.0 - smo_B.cth);
    smo_B.sth *= smo_B.v[0];
    smo_cat(smo_B.v[0] * smo_B.v[0] * (1.0 - smo_B.cth) + smo_B.cth,
            smo_B.tempR_tmp - smo_B.tempR_tmp_i, smo_B.tempR_tmp_l +
            smo_B.tempR_tmp_o, smo_B.tempR_tmp + smo_B.tempR_tmp_i, smo_B.v[1] *
            smo_B.v[1] * (1.0 - smo_B.cth) + smo_B.cth, smo_B.tempR_tmp_o2 -
            smo_B.sth, smo_B.tempR_tmp_l - smo_B.tempR_tmp_o, smo_B.tempR_tmp_o2
            + smo_B.sth, smo_B.v[2] * smo_B.v[2] * (1.0 - smo_B.cth) + smo_B.cth,
            smo_B.tempR);
    for (smo_B.b_kstr = 0; smo_B.b_kstr < 3; smo_B.b_kstr++) {
      smo_B.kstr = smo_B.b_kstr + 1;
      smo_B.R_g[smo_B.kstr - 1] = smo_B.tempR[(smo_B.kstr - 1) * 3];
      smo_B.kstr = smo_B.b_kstr + 1;
      smo_B.R_g[smo_B.kstr + 2] = smo_B.tempR[(smo_B.kstr - 1) * 3 + 1];
      smo_B.kstr = smo_B.b_kstr + 1;
      smo_B.R_g[smo_B.kstr + 5] = smo_B.tempR[(smo_B.kstr - 1) * 3 + 2];
    }

    memset(&smo_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (smo_B.b_kstr = 0; smo_B.b_kstr < 3; smo_B.b_kstr++) {
      smo_B.kstr = smo_B.b_kstr << 2;
      smo_B.TJ[smo_B.kstr] = smo_B.R_g[3 * smo_B.b_kstr];
      smo_B.TJ[smo_B.kstr + 1] = smo_B.R_g[3 * smo_B.b_kstr + 1];
      smo_B.TJ[smo_B.kstr + 2] = smo_B.R_g[3 * smo_B.b_kstr + 2];
    }

    smo_B.TJ[15] = 1.0;
    break;

   default:
    rigidBodyJoint_get_JointAxis_a(obj, smo_B.v);
    memset(&smo_B.tempR[0], 0, 9U * sizeof(real_T));
    smo_B.tempR[0] = 1.0;
    smo_B.tempR[4] = 1.0;
    smo_B.tempR[8] = 1.0;
    for (smo_B.b_kstr = 0; smo_B.b_kstr < 3; smo_B.b_kstr++) {
      smo_B.kstr = smo_B.b_kstr << 2;
      smo_B.TJ[smo_B.kstr] = smo_B.tempR[3 * smo_B.b_kstr];
      smo_B.TJ[smo_B.kstr + 1] = smo_B.tempR[3 * smo_B.b_kstr + 1];
      smo_B.TJ[smo_B.kstr + 2] = smo_B.tempR[3 * smo_B.b_kstr + 2];
      smo_B.TJ[smo_B.b_kstr + 12] = smo_B.v[smo_B.b_kstr] * q_data[0];
    }

    smo_B.TJ[3] = 0.0;
    smo_B.TJ[7] = 0.0;
    smo_B.TJ[11] = 0.0;
    smo_B.TJ[15] = 1.0;
    break;
  }

  for (smo_B.b_kstr = 0; smo_B.b_kstr < 4; smo_B.b_kstr++) {
    for (smo_B.kstr = 0; smo_B.kstr < 4; smo_B.kstr++) {
      smo_B.obj_tmp_tmp = smo_B.kstr << 2;
      smo_B.obj_tmp = smo_B.b_kstr + smo_B.obj_tmp_tmp;
      smo_B.obj[smo_B.obj_tmp] = 0.0;
      smo_B.obj[smo_B.obj_tmp] += smo_B.TJ[smo_B.obj_tmp_tmp] *
        obj->JointToParentTransform[smo_B.b_kstr];
      smo_B.obj[smo_B.obj_tmp] += smo_B.TJ[smo_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[smo_B.b_kstr + 4];
      smo_B.obj[smo_B.obj_tmp] += smo_B.TJ[smo_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[smo_B.b_kstr + 8];
      smo_B.obj[smo_B.obj_tmp] += smo_B.TJ[smo_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[smo_B.b_kstr + 12];
    }

    for (smo_B.kstr = 0; smo_B.kstr < 4; smo_B.kstr++) {
      smo_B.obj_tmp_tmp = smo_B.kstr << 2;
      smo_B.obj_tmp = smo_B.b_kstr + smo_B.obj_tmp_tmp;
      T[smo_B.obj_tmp] = 0.0;
      T[smo_B.obj_tmp] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp] *
        smo_B.obj[smo_B.b_kstr];
      T[smo_B.obj_tmp] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp + 1] *
        smo_B.obj[smo_B.b_kstr + 4];
      T[smo_B.obj_tmp] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp + 2] *
        smo_B.obj[smo_B.b_kstr + 8];
      T[smo_B.obj_tmp] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp + 3] *
        smo_B.obj[smo_B.b_kstr + 12];
    }
  }
}

static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_smo_a_T *obj,
  real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (smo_B.b_kstr_l = 0; smo_B.b_kstr_l < 5; smo_B.b_kstr_l++) {
    smo_B.b_p4[smo_B.b_kstr_l] = tmp[smo_B.b_kstr_l];
  }

  smo_B.b_bool_p2 = false;
  if (obj->Type->size[1] == 5) {
    smo_B.b_kstr_l = 1;
    do {
      exitg1 = 0;
      if (smo_B.b_kstr_l - 1 < 5) {
        smo_B.kstr_n = smo_B.b_kstr_l - 1;
        if (obj->Type->data[smo_B.kstr_n] != smo_B.b_p4[smo_B.kstr_n]) {
          exitg1 = 1;
        } else {
          smo_B.b_kstr_l++;
        }
      } else {
        smo_B.b_bool_p2 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (smo_B.b_bool_p2) {
    smo_B.b_kstr_l = 0;
  } else {
    for (smo_B.b_kstr_l = 0; smo_B.b_kstr_l < 8; smo_B.b_kstr_l++) {
      smo_B.b_ct[smo_B.b_kstr_l] = tmp_0[smo_B.b_kstr_l];
    }

    smo_B.b_bool_p2 = false;
    if (obj->Type->size[1] == 8) {
      smo_B.b_kstr_l = 1;
      do {
        exitg1 = 0;
        if (smo_B.b_kstr_l - 1 < 8) {
          smo_B.kstr_n = smo_B.b_kstr_l - 1;
          if (obj->Type->data[smo_B.kstr_n] != smo_B.b_ct[smo_B.kstr_n]) {
            exitg1 = 1;
          } else {
            smo_B.b_kstr_l++;
          }
        } else {
          smo_B.b_bool_p2 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_bool_p2) {
      smo_B.b_kstr_l = 1;
    } else {
      smo_B.b_kstr_l = -1;
    }
  }

  switch (smo_B.b_kstr_l) {
   case 0:
    memset(&smo_B.TJ_b[0], 0, sizeof(real_T) << 4U);
    smo_B.TJ_b[0] = 1.0;
    smo_B.TJ_b[5] = 1.0;
    smo_B.TJ_b[10] = 1.0;
    smo_B.TJ_b[15] = 1.0;
    break;

   case 1:
    rigidBodyJoint_get_JointAxis_a(obj, smo_B.v_j);
    smo_B.v_jz[0] = smo_B.v_j[0];
    smo_B.v_jz[1] = smo_B.v_j[1];
    smo_B.v_jz[2] = smo_B.v_j[2];
    smo_normalizeRows(smo_B.v_jz, smo_B.v_j);
    smo_B.tempR_tmp_g = smo_B.v_j[1] * smo_B.v_j[0] * 0.0;
    smo_B.tempR_tmp_c = smo_B.v_j[2] * smo_B.v_j[0] * 0.0;
    smo_B.tempR_tmp_o3 = smo_B.v_j[2] * smo_B.v_j[1] * 0.0;
    smo_cat(smo_B.v_j[0] * smo_B.v_j[0] * 0.0 + 1.0, smo_B.tempR_tmp_g -
            smo_B.v_j[2] * 0.0, smo_B.tempR_tmp_c + smo_B.v_j[1] * 0.0,
            smo_B.tempR_tmp_g + smo_B.v_j[2] * 0.0, smo_B.v_j[1] * smo_B.v_j[1] *
            0.0 + 1.0, smo_B.tempR_tmp_o3 - smo_B.v_j[0] * 0.0,
            smo_B.tempR_tmp_c - smo_B.v_j[1] * 0.0, smo_B.tempR_tmp_o3 +
            smo_B.v_j[0] * 0.0, smo_B.v_j[2] * smo_B.v_j[2] * 0.0 + 1.0,
            smo_B.tempR_d);
    for (smo_B.b_kstr_l = 0; smo_B.b_kstr_l < 3; smo_B.b_kstr_l++) {
      smo_B.kstr_n = smo_B.b_kstr_l + 1;
      smo_B.R_ld[smo_B.kstr_n - 1] = smo_B.tempR_d[(smo_B.kstr_n - 1) * 3];
      smo_B.kstr_n = smo_B.b_kstr_l + 1;
      smo_B.R_ld[smo_B.kstr_n + 2] = smo_B.tempR_d[(smo_B.kstr_n - 1) * 3 + 1];
      smo_B.kstr_n = smo_B.b_kstr_l + 1;
      smo_B.R_ld[smo_B.kstr_n + 5] = smo_B.tempR_d[(smo_B.kstr_n - 1) * 3 + 2];
    }

    memset(&smo_B.TJ_b[0], 0, sizeof(real_T) << 4U);
    for (smo_B.b_kstr_l = 0; smo_B.b_kstr_l < 3; smo_B.b_kstr_l++) {
      smo_B.kstr_n = smo_B.b_kstr_l << 2;
      smo_B.TJ_b[smo_B.kstr_n] = smo_B.R_ld[3 * smo_B.b_kstr_l];
      smo_B.TJ_b[smo_B.kstr_n + 1] = smo_B.R_ld[3 * smo_B.b_kstr_l + 1];
      smo_B.TJ_b[smo_B.kstr_n + 2] = smo_B.R_ld[3 * smo_B.b_kstr_l + 2];
    }

    smo_B.TJ_b[15] = 1.0;
    break;

   default:
    rigidBodyJoint_get_JointAxis_a(obj, smo_B.v_j);
    memset(&smo_B.tempR_d[0], 0, 9U * sizeof(real_T));
    smo_B.tempR_d[0] = 1.0;
    smo_B.tempR_d[4] = 1.0;
    smo_B.tempR_d[8] = 1.0;
    for (smo_B.b_kstr_l = 0; smo_B.b_kstr_l < 3; smo_B.b_kstr_l++) {
      smo_B.kstr_n = smo_B.b_kstr_l << 2;
      smo_B.TJ_b[smo_B.kstr_n] = smo_B.tempR_d[3 * smo_B.b_kstr_l];
      smo_B.TJ_b[smo_B.kstr_n + 1] = smo_B.tempR_d[3 * smo_B.b_kstr_l + 1];
      smo_B.TJ_b[smo_B.kstr_n + 2] = smo_B.tempR_d[3 * smo_B.b_kstr_l + 2];
      smo_B.TJ_b[smo_B.b_kstr_l + 12] = smo_B.v_j[smo_B.b_kstr_l] * 0.0;
    }

    smo_B.TJ_b[3] = 0.0;
    smo_B.TJ_b[7] = 0.0;
    smo_B.TJ_b[11] = 0.0;
    smo_B.TJ_b[15] = 1.0;
    break;
  }

  for (smo_B.b_kstr_l = 0; smo_B.b_kstr_l < 4; smo_B.b_kstr_l++) {
    for (smo_B.kstr_n = 0; smo_B.kstr_n < 4; smo_B.kstr_n++) {
      smo_B.obj_tmp_tmp_p = smo_B.kstr_n << 2;
      smo_B.obj_tmp_p = smo_B.b_kstr_l + smo_B.obj_tmp_tmp_p;
      smo_B.obj_p[smo_B.obj_tmp_p] = 0.0;
      smo_B.obj_p[smo_B.obj_tmp_p] += smo_B.TJ_b[smo_B.obj_tmp_tmp_p] *
        obj->JointToParentTransform[smo_B.b_kstr_l];
      smo_B.obj_p[smo_B.obj_tmp_p] += smo_B.TJ_b[smo_B.obj_tmp_tmp_p + 1] *
        obj->JointToParentTransform[smo_B.b_kstr_l + 4];
      smo_B.obj_p[smo_B.obj_tmp_p] += smo_B.TJ_b[smo_B.obj_tmp_tmp_p + 2] *
        obj->JointToParentTransform[smo_B.b_kstr_l + 8];
      smo_B.obj_p[smo_B.obj_tmp_p] += smo_B.TJ_b[smo_B.obj_tmp_tmp_p + 3] *
        obj->JointToParentTransform[smo_B.b_kstr_l + 12];
    }

    for (smo_B.kstr_n = 0; smo_B.kstr_n < 4; smo_B.kstr_n++) {
      smo_B.obj_tmp_tmp_p = smo_B.kstr_n << 2;
      smo_B.obj_tmp_p = smo_B.b_kstr_l + smo_B.obj_tmp_tmp_p;
      T[smo_B.obj_tmp_p] = 0.0;
      T[smo_B.obj_tmp_p] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp_p] *
        smo_B.obj_p[smo_B.b_kstr_l];
      T[smo_B.obj_tmp_p] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp_p + 1] *
        smo_B.obj_p[smo_B.b_kstr_l + 4];
      T[smo_B.obj_tmp_p] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp_p + 2] *
        smo_B.obj_p[smo_B.b_kstr_l + 8];
      T[smo_B.obj_tmp_p] += obj->ChildToJointTransform[smo_B.obj_tmp_tmp_p + 3] *
        smo_B.obj_p[smo_B.b_kstr_l + 12];
    }
  }
}

static void smo_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (smo_B.i3 = 0; smo_B.i3 < 3; smo_B.i3++) {
    smo_B.R_ln[3 * smo_B.i3] = T[smo_B.i3];
    smo_B.R_ln[3 * smo_B.i3 + 1] = T[smo_B.i3 + 4];
    smo_B.R_ln[3 * smo_B.i3 + 2] = T[smo_B.i3 + 8];
  }

  for (smo_B.i3 = 0; smo_B.i3 < 9; smo_B.i3++) {
    smo_B.R_h[smo_B.i3] = -smo_B.R_ln[smo_B.i3];
  }

  for (smo_B.i3 = 0; smo_B.i3 < 3; smo_B.i3++) {
    smo_B.Tinv_tmp = smo_B.i3 << 2;
    Tinv[smo_B.Tinv_tmp] = smo_B.R_ln[3 * smo_B.i3];
    Tinv[smo_B.Tinv_tmp + 1] = smo_B.R_ln[3 * smo_B.i3 + 1];
    Tinv[smo_B.Tinv_tmp + 2] = smo_B.R_ln[3 * smo_B.i3 + 2];
    Tinv[smo_B.i3 + 12] = smo_B.R_h[smo_B.i3 + 6] * T[14] + (smo_B.R_h[smo_B.i3
      + 3] * T[13] + smo_B.R_h[smo_B.i3] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void smo_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  smo_B.dv5[0] = 0.0;
  smo_B.dv5[3] = -T[14];
  smo_B.dv5[6] = T[13];
  smo_B.dv5[1] = T[14];
  smo_B.dv5[4] = 0.0;
  smo_B.dv5[7] = -T[12];
  smo_B.dv5[2] = -T[13];
  smo_B.dv5[5] = T[12];
  smo_B.dv5[8] = 0.0;
  for (smo_B.i1 = 0; smo_B.i1 < 3; smo_B.i1++) {
    for (smo_B.X_tmp_n = 0; smo_B.X_tmp_n < 3; smo_B.X_tmp_n++) {
      smo_B.X_tmp_i = smo_B.i1 + 3 * smo_B.X_tmp_n;
      smo_B.dv6[smo_B.X_tmp_i] = 0.0;
      smo_B.i2 = smo_B.X_tmp_n << 2;
      smo_B.dv6[smo_B.X_tmp_i] += T[smo_B.i2] * smo_B.dv5[smo_B.i1];
      smo_B.dv6[smo_B.X_tmp_i] += T[smo_B.i2 + 1] * smo_B.dv5[smo_B.i1 + 3];
      smo_B.dv6[smo_B.X_tmp_i] += T[smo_B.i2 + 2] * smo_B.dv5[smo_B.i1 + 6];
      X[smo_B.X_tmp_n + 6 * smo_B.i1] = T[(smo_B.i1 << 2) + smo_B.X_tmp_n];
      X[smo_B.X_tmp_n + 6 * (smo_B.i1 + 3)] = 0.0;
    }
  }

  for (smo_B.i1 = 0; smo_B.i1 < 3; smo_B.i1++) {
    X[6 * smo_B.i1 + 3] = smo_B.dv6[3 * smo_B.i1];
    smo_B.X_tmp_n = smo_B.i1 << 2;
    smo_B.X_tmp_i = 6 * (smo_B.i1 + 3);
    X[smo_B.X_tmp_i + 3] = T[smo_B.X_tmp_n];
    X[6 * smo_B.i1 + 4] = smo_B.dv6[3 * smo_B.i1 + 1];
    X[smo_B.X_tmp_i + 4] = T[smo_B.X_tmp_n + 1];
    X[6 * smo_B.i1 + 5] = smo_B.dv6[3 * smo_B.i1 + 2];
    X[smo_B.X_tmp_i + 5] = T[smo_B.X_tmp_n + 2];
  }
}

static void smo_emxFree_real_T(emxArray_real_T_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_smo_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_smo_T *)NULL;
  }
}

static void smo_emxFree_e_cell_wrap1(emxArray_e_cell_wrap_smo_a_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_e_cell_wrap_smo_a_T *)NULL) {
    if (((*pEmxArray)->data != (e_cell_wrap_smo_a_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_e_cell_wrap_smo_a_T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMatri(k_robotics_manip_internal_R_a_T
  *robot, const real_T q[7], emxArray_real_T_smo_T *H)
{
  emxArray_e_cell_wrap_smo_a_T *Ic;
  emxArray_e_cell_wrap_smo_a_T *X;
  emxArray_real_T_smo_T *Si;
  emxArray_real_T_smo_T *Fi;
  emxArray_real_T_smo_T *Sj;
  emxArray_real_T_smo_T *Hji;
  j_robotics_manip_internal_R_a_T *obj;
  emxArray_real_T_smo_T *a;
  emxArray_real_T_smo_T *B;
  smo_B.nb_e = robot->NumBodies;
  smo_B.vNum_o = robot->VelocityNumber;
  smo_B.f = H->size[0] * H->size[1];
  smo_B.b_i_i = static_cast<int32_T>(smo_B.vNum_o);
  H->size[0] = smo_B.b_i_i;
  H->size[1] = smo_B.b_i_i;
  smo_emxEnsureCapacity_real_T(H, smo_B.f);
  smo_B.n_o = smo_B.b_i_i * smo_B.b_i_i - 1;
  for (smo_B.f = 0; smo_B.f <= smo_B.n_o; smo_B.f++) {
    H->data[smo_B.f] = 0.0;
  }

  smo_emxInit_e_cell_wrap1(&Ic, 2);
  smo_emxInit_e_cell_wrap1(&X, 2);
  smo_B.c_tmp = static_cast<int32_T>(smo_B.nb_e);
  smo_B.c = smo_B.c_tmp - 1;
  smo_B.f = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = smo_B.c_tmp;
  emxEnsureCapacity_e_cell_wrap1(Ic, smo_B.f);
  smo_B.f = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = smo_B.c_tmp;
  emxEnsureCapacity_e_cell_wrap1(X, smo_B.f);
  for (smo_B.b_i_i = 0; smo_B.b_i_i <= smo_B.c; smo_B.b_i_i++) {
    for (smo_B.f = 0; smo_B.f < 36; smo_B.f++) {
      Ic->data[smo_B.b_i_i].f1[smo_B.f] = robot->Bodies[smo_B.b_i_i]
        ->SpatialInertia[smo_B.f];
    }

    smo_B.vNum_o = robot->PositionDoFMap[smo_B.b_i_i];
    smo_B.p_idx_1_h = robot->PositionDoFMap[smo_B.b_i_i + 10];
    if (smo_B.p_idx_1_h < smo_B.vNum_o) {
      obj = robot->Bodies[smo_B.b_i_i];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, smo_B.T_f);
    } else {
      if (smo_B.vNum_o > smo_B.p_idx_1_h) {
        smo_B.c_tmp = 0;
        smo_B.f = -1;
      } else {
        smo_B.c_tmp = static_cast<int32_T>(smo_B.vNum_o) - 1;
        smo_B.f = static_cast<int32_T>(smo_B.p_idx_1_h) - 1;
      }

      obj = robot->Bodies[smo_B.b_i_i];
      smo_B.q_size_tmp_c = smo_B.f - smo_B.c_tmp;
      smo_B.q_size_p = smo_B.q_size_tmp_c + 1;
      for (smo_B.f = 0; smo_B.f <= smo_B.q_size_tmp_c; smo_B.f++) {
        smo_B.q_data_d[smo_B.f] = q[smo_B.c_tmp + smo_B.f];
      }

      rigidBodyJoint_transformBodyT_a(&obj->JointInternal, smo_B.q_data_d,
        &smo_B.q_size_p, smo_B.T_f);
    }

    smo_tforminv(smo_B.T_f, smo_B.dv1);
    smo_tformToSpatialXform(smo_B.dv1, X->data[smo_B.b_i_i].f1);
  }

  smo_B.c = static_cast<int32_T>(((-1.0 - smo_B.nb_e) + 1.0) / -1.0) - 1;
  smo_emxInit_real_T(&Si, 2);
  smo_emxInit_real_T(&Fi, 2);
  smo_emxInit_real_T(&Sj, 2);
  smo_emxInit_real_T(&Hji, 2);
  smo_emxInit_real_T(&a, 2);
  smo_emxInit_real_T(&B, 2);
  for (smo_B.c_tmp = 0; smo_B.c_tmp <= smo_B.c; smo_B.c_tmp++) {
    smo_B.pid_tmp_b = static_cast<int32_T>(smo_B.nb_e + -static_cast<real_T>
      (smo_B.c_tmp));
    smo_B.q_size_tmp_c = smo_B.pid_tmp_b - 1;
    smo_B.pid_h = robot->Bodies[smo_B.q_size_tmp_c]->ParentIndex;
    smo_B.vNum_o = robot->VelocityDoFMap[smo_B.pid_tmp_b - 1];
    smo_B.p_idx_1_h = robot->VelocityDoFMap[smo_B.pid_tmp_b + 9];
    if (smo_B.pid_h > 0.0) {
      for (smo_B.f = 0; smo_B.f < 6; smo_B.f++) {
        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          smo_B.X_tmp = smo_B.f + 6 * smo_B.b_i_i;
          smo_B.X_c[smo_B.X_tmp] = 0.0;
          for (smo_B.n_o = 0; smo_B.n_o < 6; smo_B.n_o++) {
            smo_B.X_c[smo_B.X_tmp] += X->data[smo_B.q_size_tmp_c].f1[6 * smo_B.f
              + smo_B.n_o] * Ic->data[smo_B.q_size_tmp_c].f1[6 * smo_B.b_i_i +
              smo_B.n_o];
          }
        }
      }

      for (smo_B.f = 0; smo_B.f < 6; smo_B.f++) {
        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          smo_B.b_idx_0_m = 0.0;
          for (smo_B.n_o = 0; smo_B.n_o < 6; smo_B.n_o++) {
            smo_B.b_idx_0_m += smo_B.X_c[6 * smo_B.n_o + smo_B.f] * X->
              data[smo_B.q_size_tmp_c].f1[6 * smo_B.b_i_i + smo_B.n_o];
          }

          smo_B.n_o = 6 * smo_B.b_i_i + smo_B.f;
          Ic->data[static_cast<int32_T>(smo_B.pid_h) - 1].f1[smo_B.n_o] +=
            smo_B.b_idx_0_m;
        }
      }
    }

    smo_B.b_idx_0_m = robot->VelocityDoFMap[smo_B.pid_tmp_b - 1];
    smo_B.b_idx_1_m = robot->VelocityDoFMap[smo_B.pid_tmp_b + 9];
    if (smo_B.b_idx_0_m <= smo_B.b_idx_1_m) {
      obj = robot->Bodies[smo_B.q_size_tmp_c];
      smo_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      smo_emxEnsureCapacity_real_T(Si, smo_B.f);
      smo_B.n_o = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (smo_B.f = 0; smo_B.f <= smo_B.n_o; smo_B.f++) {
        Si->data[smo_B.f] = obj->JointInternal.MotionSubspace->data[smo_B.f];
      }

      smo_B.n_o = Si->size[1] - 1;
      smo_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      smo_emxEnsureCapacity_real_T(Fi, smo_B.f);
      for (smo_B.b_j_f = 0; smo_B.b_j_f <= smo_B.n_o; smo_B.b_j_f++) {
        smo_B.pid_tmp_b = smo_B.b_j_f * 6 - 1;
        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          Fi->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + 1] = 0.0;
        }

        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          smo_B.aoffset_m = smo_B.b_i_i * 6 - 1;
          smo_B.temp_l = Si->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + 1];
          for (smo_B.c_i_h = 0; smo_B.c_i_h < 6; smo_B.c_i_h++) {
            smo_B.i_c = smo_B.c_i_h + 1;
            smo_B.f = smo_B.pid_tmp_b + smo_B.i_c;
            Fi->data[smo_B.f] += Ic->data[smo_B.q_size_tmp_c].f1[smo_B.aoffset_m
              + smo_B.i_c] * smo_B.temp_l;
          }
        }
      }

      if (smo_B.vNum_o > smo_B.p_idx_1_h) {
        smo_B.pid_tmp_b = 0;
        smo_B.X_tmp = 0;
      } else {
        smo_B.pid_tmp_b = static_cast<int32_T>(smo_B.vNum_o) - 1;
        smo_B.X_tmp = smo_B.pid_tmp_b;
      }

      smo_B.f = a->size[0] * a->size[1];
      a->size[0] = Si->size[1];
      a->size[1] = 6;
      smo_emxEnsureCapacity_real_T(a, smo_B.f);
      for (smo_B.f = 0; smo_B.f < 6; smo_B.f++) {
        smo_B.n_o = Si->size[1];
        for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.n_o; smo_B.b_i_i++) {
          a->data[smo_B.b_i_i + a->size[0] * smo_B.f] = Si->data[6 * smo_B.b_i_i
            + smo_B.f];
        }
      }

      smo_B.m_m = a->size[0];
      smo_B.n_o = Fi->size[1] - 1;
      smo_B.f = Hji->size[0] * Hji->size[1];
      Hji->size[0] = a->size[0];
      Hji->size[1] = Fi->size[1];
      smo_emxEnsureCapacity_real_T(Hji, smo_B.f);
      for (smo_B.b_j_f = 0; smo_B.b_j_f <= smo_B.n_o; smo_B.b_j_f++) {
        smo_B.coffset_a = smo_B.b_j_f * smo_B.m_m - 1;
        smo_B.boffset_k = smo_B.b_j_f * 6 - 1;
        for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.m_m; smo_B.b_i_i++) {
          Hji->data[(smo_B.coffset_a + smo_B.b_i_i) + 1] = 0.0;
        }

        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          smo_B.aoffset_m = smo_B.b_i_i * smo_B.m_m - 1;
          smo_B.temp_l = Fi->data[(smo_B.boffset_k + smo_B.b_i_i) + 1];
          for (smo_B.c_i_h = 0; smo_B.c_i_h < smo_B.m_m; smo_B.c_i_h++) {
            smo_B.i_c = smo_B.c_i_h + 1;
            smo_B.f = smo_B.coffset_a + smo_B.i_c;
            Hji->data[smo_B.f] += a->data[smo_B.aoffset_m + smo_B.i_c] *
              smo_B.temp_l;
          }
        }
      }

      smo_B.n_o = Hji->size[1];
      for (smo_B.f = 0; smo_B.f < smo_B.n_o; smo_B.f++) {
        smo_B.b_j_f = Hji->size[0];
        for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.b_j_f; smo_B.b_i_i++) {
          H->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + H->size[0] * (smo_B.X_tmp +
            smo_B.f)] = Hji->data[Hji->size[0] * smo_B.f + smo_B.b_i_i];
        }
      }

      for (smo_B.f = 0; smo_B.f < 6; smo_B.f++) {
        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          smo_B.X_c[smo_B.b_i_i + 6 * smo_B.f] = X->data[smo_B.q_size_tmp_c].f1
            [6 * smo_B.b_i_i + smo_B.f];
        }
      }

      smo_B.f = B->size[0] * B->size[1];
      B->size[0] = 6;
      B->size[1] = Fi->size[1];
      smo_emxEnsureCapacity_real_T(B, smo_B.f);
      smo_B.n_o = Fi->size[0] * Fi->size[1] - 1;
      for (smo_B.f = 0; smo_B.f <= smo_B.n_o; smo_B.f++) {
        B->data[smo_B.f] = Fi->data[smo_B.f];
      }

      smo_B.n_o = Fi->size[1];
      smo_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = smo_B.n_o;
      smo_emxEnsureCapacity_real_T(Fi, smo_B.f);
      for (smo_B.b_j_f = 0; smo_B.b_j_f < smo_B.n_o; smo_B.b_j_f++) {
        smo_B.pid_tmp_b = smo_B.b_j_f * 6 - 1;
        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          Fi->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + 1] = 0.0;
        }

        for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
          smo_B.aoffset_m = smo_B.b_i_i * 6 - 1;
          smo_B.temp_l = B->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + 1];
          for (smo_B.c_i_h = 0; smo_B.c_i_h < 6; smo_B.c_i_h++) {
            smo_B.i_c = smo_B.c_i_h + 1;
            smo_B.f = smo_B.pid_tmp_b + smo_B.i_c;
            Fi->data[smo_B.f] += smo_B.X_c[smo_B.aoffset_m + smo_B.i_c] *
              smo_B.temp_l;
          }
        }
      }

      while (smo_B.pid_h > 0.0) {
        smo_B.pid_tmp_b = static_cast<int32_T>(smo_B.pid_h);
        smo_B.q_size_tmp_c = smo_B.pid_tmp_b - 1;
        obj = robot->Bodies[smo_B.q_size_tmp_c];
        smo_B.f = Sj->size[0] * Sj->size[1];
        Sj->size[0] = 6;
        Sj->size[1] = obj->JointInternal.MotionSubspace->size[1];
        smo_emxEnsureCapacity_real_T(Sj, smo_B.f);
        smo_B.n_o = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (smo_B.f = 0; smo_B.f <= smo_B.n_o; smo_B.f++) {
          Sj->data[smo_B.f] = obj->JointInternal.MotionSubspace->data[smo_B.f];
        }

        smo_B.b_idx_0_m = robot->VelocityDoFMap[smo_B.pid_tmp_b - 1];
        smo_B.b_idx_1_m = robot->VelocityDoFMap[smo_B.pid_tmp_b + 9];
        if (smo_B.b_idx_0_m <= smo_B.b_idx_1_m) {
          smo_B.f = a->size[0] * a->size[1];
          a->size[0] = Sj->size[1];
          a->size[1] = 6;
          smo_emxEnsureCapacity_real_T(a, smo_B.f);
          for (smo_B.f = 0; smo_B.f < 6; smo_B.f++) {
            smo_B.n_o = Sj->size[1];
            for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.n_o; smo_B.b_i_i++) {
              a->data[smo_B.b_i_i + a->size[0] * smo_B.f] = Sj->data[6 *
                smo_B.b_i_i + smo_B.f];
            }
          }

          smo_B.m_m = a->size[0];
          smo_B.n_o = Fi->size[1] - 1;
          smo_B.f = Hji->size[0] * Hji->size[1];
          Hji->size[0] = a->size[0];
          Hji->size[1] = Fi->size[1];
          smo_emxEnsureCapacity_real_T(Hji, smo_B.f);
          for (smo_B.b_j_f = 0; smo_B.b_j_f <= smo_B.n_o; smo_B.b_j_f++) {
            smo_B.coffset_a = smo_B.b_j_f * smo_B.m_m - 1;
            smo_B.boffset_k = smo_B.b_j_f * 6 - 1;
            for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.m_m; smo_B.b_i_i++) {
              Hji->data[(smo_B.coffset_a + smo_B.b_i_i) + 1] = 0.0;
            }

            for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
              smo_B.aoffset_m = smo_B.b_i_i * smo_B.m_m - 1;
              smo_B.temp_l = Fi->data[(smo_B.boffset_k + smo_B.b_i_i) + 1];
              for (smo_B.c_i_h = 0; smo_B.c_i_h < smo_B.m_m; smo_B.c_i_h++) {
                smo_B.i_c = smo_B.c_i_h + 1;
                smo_B.f = smo_B.coffset_a + smo_B.i_c;
                Hji->data[smo_B.f] += a->data[smo_B.aoffset_m + smo_B.i_c] *
                  smo_B.temp_l;
              }
            }
          }

          if (smo_B.b_idx_0_m > smo_B.b_idx_1_m) {
            smo_B.pid_tmp_b = 0;
          } else {
            smo_B.pid_tmp_b = static_cast<int32_T>(smo_B.b_idx_0_m) - 1;
          }

          if (smo_B.vNum_o > smo_B.p_idx_1_h) {
            smo_B.X_tmp = 0;
          } else {
            smo_B.X_tmp = static_cast<int32_T>(smo_B.vNum_o) - 1;
          }

          smo_B.n_o = Hji->size[1];
          for (smo_B.f = 0; smo_B.f < smo_B.n_o; smo_B.f++) {
            smo_B.b_j_f = Hji->size[0];
            for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.b_j_f; smo_B.b_i_i++) {
              H->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + H->size[0] *
                (smo_B.X_tmp + smo_B.f)] = Hji->data[Hji->size[0] * smo_B.f +
                smo_B.b_i_i];
            }
          }

          if (smo_B.vNum_o > smo_B.p_idx_1_h) {
            smo_B.pid_tmp_b = 0;
          } else {
            smo_B.pid_tmp_b = static_cast<int32_T>(smo_B.vNum_o) - 1;
          }

          if (smo_B.b_idx_0_m > smo_B.b_idx_1_m) {
            smo_B.X_tmp = 0;
          } else {
            smo_B.X_tmp = static_cast<int32_T>(smo_B.b_idx_0_m) - 1;
          }

          smo_B.n_o = Hji->size[0];
          for (smo_B.f = 0; smo_B.f < smo_B.n_o; smo_B.f++) {
            smo_B.b_j_f = Hji->size[1];
            for (smo_B.b_i_i = 0; smo_B.b_i_i < smo_B.b_j_f; smo_B.b_i_i++) {
              H->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + H->size[0] *
                (smo_B.X_tmp + smo_B.f)] = Hji->data[Hji->size[0] * smo_B.b_i_i
                + smo_B.f];
            }
          }
        }

        for (smo_B.f = 0; smo_B.f < 6; smo_B.f++) {
          for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
            smo_B.X_c[smo_B.b_i_i + 6 * smo_B.f] = X->data[smo_B.q_size_tmp_c].
              f1[6 * smo_B.b_i_i + smo_B.f];
          }
        }

        smo_B.f = B->size[0] * B->size[1];
        B->size[0] = 6;
        B->size[1] = Fi->size[1];
        smo_emxEnsureCapacity_real_T(B, smo_B.f);
        smo_B.n_o = Fi->size[0] * Fi->size[1] - 1;
        for (smo_B.f = 0; smo_B.f <= smo_B.n_o; smo_B.f++) {
          B->data[smo_B.f] = Fi->data[smo_B.f];
        }

        smo_B.n_o = Fi->size[1];
        smo_B.f = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = smo_B.n_o;
        smo_emxEnsureCapacity_real_T(Fi, smo_B.f);
        for (smo_B.b_j_f = 0; smo_B.b_j_f < smo_B.n_o; smo_B.b_j_f++) {
          smo_B.pid_tmp_b = smo_B.b_j_f * 6 - 1;
          for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
            Fi->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + 1] = 0.0;
          }

          for (smo_B.b_i_i = 0; smo_B.b_i_i < 6; smo_B.b_i_i++) {
            smo_B.aoffset_m = smo_B.b_i_i * 6 - 1;
            smo_B.temp_l = B->data[(smo_B.pid_tmp_b + smo_B.b_i_i) + 1];
            for (smo_B.c_i_h = 0; smo_B.c_i_h < 6; smo_B.c_i_h++) {
              smo_B.i_c = smo_B.c_i_h + 1;
              smo_B.f = smo_B.pid_tmp_b + smo_B.i_c;
              Fi->data[smo_B.f] += smo_B.X_c[smo_B.aoffset_m + smo_B.i_c] *
                smo_B.temp_l;
            }
          }
        }

        smo_B.pid_h = robot->Bodies[smo_B.q_size_tmp_c]->ParentIndex;
      }
    }
  }

  smo_emxFree_real_T(&B);
  smo_emxFree_real_T(&a);
  smo_emxFree_real_T(&Hji);
  smo_emxFree_real_T(&Sj);
  smo_emxFree_real_T(&Fi);
  smo_emxFree_real_T(&Si);
  smo_emxFree_e_cell_wrap1(&X);
  smo_emxFree_e_cell_wrap1(&Ic);
}

static void smo_emxInit_e_cell_wrap(emxArray_e_cell_wrap_smo_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_e_cell_wrap_smo_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_e_cell_wrap_smo_T *)malloc(sizeof
    (emxArray_e_cell_wrap_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (e_cell_wrap_smo_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void smo_emxInit_char_T(emxArray_char_T_smo_T **pEmxArray, int32_T
  numDimensions)
{
  emxArray_char_T_smo_T *emxArray;
  *pEmxArray = (emxArray_char_T_smo_T *)malloc(sizeof(emxArray_char_T_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (smo_B.i_fo = 0; smo_B.i_fo < numDimensions; smo_B.i_fo++) {
    emxArray->size[smo_B.i_fo] = 0;
  }
}

static void s_emxEnsureCapacity_e_cell_wrap(emxArray_e_cell_wrap_smo_T *emxArray,
  int32_T oldNumel)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      if (i > 1073741823) {
        i = MAX_int32_T;
      } else {
        i <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(i), sizeof(e_cell_wrap_smo_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(e_cell_wrap_smo_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (e_cell_wrap_smo_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void smo_emxEnsureCapacity_char_T(emxArray_char_T_smo_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  smo_B.newNumel_j = 1;
  for (smo_B.i_e = 0; smo_B.i_e < emxArray->numDimensions; smo_B.i_e++) {
    smo_B.newNumel_j *= emxArray->size[smo_B.i_e];
  }

  if (smo_B.newNumel_j > emxArray->allocatedSize) {
    smo_B.i_e = emxArray->allocatedSize;
    if (smo_B.i_e < 16) {
      smo_B.i_e = 16;
    }

    while (smo_B.i_e < smo_B.newNumel_j) {
      if (smo_B.i_e > 1073741823) {
        smo_B.i_e = MAX_int32_T;
      } else {
        smo_B.i_e <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(smo_B.i_e), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = smo_B.i_e;
    emxArray->canFreeData = true;
  }
}

static void sm_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_smo_T *obj,
  real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (smo_B.b_kstr_k = 0; smo_B.b_kstr_k < 8; smo_B.b_kstr_k++) {
    smo_B.b_p5[smo_B.b_kstr_k] = tmp[smo_B.b_kstr_k];
  }

  smo_B.b_bool_k = false;
  if (obj->Type->size[1] == 8) {
    smo_B.b_kstr_k = 1;
    do {
      exitg1 = 0;
      if (smo_B.b_kstr_k - 1 < 8) {
        smo_B.kstr_o = smo_B.b_kstr_k - 1;
        if (obj->Type->data[smo_B.kstr_o] != smo_B.b_p5[smo_B.kstr_o]) {
          exitg1 = 1;
        } else {
          smo_B.b_kstr_k++;
        }
      } else {
        smo_B.b_bool_k = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (smo_B.b_bool_k) {
    guard1 = true;
  } else {
    for (smo_B.b_kstr_k = 0; smo_B.b_kstr_k < 9; smo_B.b_kstr_k++) {
      smo_B.b_j[smo_B.b_kstr_k] = tmp_0[smo_B.b_kstr_k];
    }

    smo_B.b_bool_k = false;
    if (obj->Type->size[1] == 9) {
      smo_B.b_kstr_k = 1;
      do {
        exitg1 = 0;
        if (smo_B.b_kstr_k - 1 < 9) {
          smo_B.kstr_o = smo_B.b_kstr_k - 1;
          if (obj->Type->data[smo_B.kstr_o] != smo_B.b_j[smo_B.kstr_o]) {
            exitg1 = 1;
          } else {
            smo_B.b_kstr_k++;
          }
        } else {
          smo_B.b_bool_k = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_bool_k) {
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

static void smo_emxFree_char_T(emxArray_char_T_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_smo_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_smo_T *)NULL;
  }
}

static void RigidBodyTree_forwardKinematics(k_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[7], emxArray_e_cell_wrap_smo_T *Ttree)
{
  j_robotics_manip_internal_Rig_T *body;
  emxArray_char_T_smo_T *switch_expression;
  static const int8_T tmp[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  smo_B.n = obj->NumBodies;
  for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 16; smo_B.b_kstr_f++) {
    smo_B.c_f1[smo_B.b_kstr_f] = tmp[smo_B.b_kstr_f];
  }

  smo_B.ntilecols = static_cast<int32_T>(smo_B.n);
  smo_B.b_kstr_f = Ttree->size[0] * Ttree->size[1];
  Ttree->size[0] = 1;
  Ttree->size[1] = smo_B.ntilecols;
  s_emxEnsureCapacity_e_cell_wrap(Ttree, smo_B.b_kstr_f);
  if (smo_B.ntilecols != 0) {
    smo_B.ntilecols--;
    if (0 <= smo_B.ntilecols) {
      memcpy(&smo_B.expl_temp.f1[0], &smo_B.c_f1[0], sizeof(real_T) << 4U);
    }

    for (smo_B.b_jtilecol = 0; smo_B.b_jtilecol <= smo_B.ntilecols;
         smo_B.b_jtilecol++) {
      Ttree->data[smo_B.b_jtilecol] = smo_B.expl_temp;
    }
  }

  smo_B.k = 1.0;
  smo_B.ntilecols = static_cast<int32_T>(smo_B.n) - 1;
  smo_emxInit_char_T(&switch_expression, 2);
  if (0 <= smo_B.ntilecols) {
    for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 5; smo_B.b_kstr_f++) {
      smo_B.b_ap[smo_B.b_kstr_f] = tmp_0[smo_B.b_kstr_f];
    }
  }

  for (smo_B.b_jtilecol = 0; smo_B.b_jtilecol <= smo_B.ntilecols;
       smo_B.b_jtilecol++) {
    body = obj->Bodies[smo_B.b_jtilecol];
    smo_B.n = body->JointInternal.PositionNumber;
    smo_B.n += smo_B.k;
    if (smo_B.k > smo_B.n - 1.0) {
      smo_B.e = 0;
      smo_B.d = 0;
    } else {
      smo_B.e = static_cast<int32_T>(smo_B.k) - 1;
      smo_B.d = static_cast<int32_T>(smo_B.n - 1.0);
    }

    smo_B.b_kstr_f = switch_expression->size[0] * switch_expression->size[1];
    switch_expression->size[0] = 1;
    switch_expression->size[1] = body->JointInternal.Type->size[1];
    smo_emxEnsureCapacity_char_T(switch_expression, smo_B.b_kstr_f);
    smo_B.loop_ub_i = body->JointInternal.Type->size[0] *
      body->JointInternal.Type->size[1] - 1;
    for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f <= smo_B.loop_ub_i; smo_B.b_kstr_f++)
    {
      switch_expression->data[smo_B.b_kstr_f] = body->JointInternal.Type->
        data[smo_B.b_kstr_f];
    }

    smo_B.b_bool_n = false;
    if (switch_expression->size[1] == 5) {
      smo_B.b_kstr_f = 1;
      do {
        exitg1 = 0;
        if (smo_B.b_kstr_f - 1 < 5) {
          smo_B.loop_ub_i = smo_B.b_kstr_f - 1;
          if (switch_expression->data[smo_B.loop_ub_i] !=
              smo_B.b_ap[smo_B.loop_ub_i]) {
            exitg1 = 1;
          } else {
            smo_B.b_kstr_f++;
          }
        } else {
          smo_B.b_bool_n = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_bool_n) {
      smo_B.b_kstr_f = 0;
    } else {
      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 8; smo_B.b_kstr_f++) {
        smo_B.b_p[smo_B.b_kstr_f] = tmp_1[smo_B.b_kstr_f];
      }

      smo_B.b_bool_n = false;
      if (switch_expression->size[1] == 8) {
        smo_B.b_kstr_f = 1;
        do {
          exitg1 = 0;
          if (smo_B.b_kstr_f - 1 < 8) {
            smo_B.loop_ub_i = smo_B.b_kstr_f - 1;
            if (switch_expression->data[smo_B.loop_ub_i] !=
                smo_B.b_p[smo_B.loop_ub_i]) {
              exitg1 = 1;
            } else {
              smo_B.b_kstr_f++;
            }
          } else {
            smo_B.b_bool_n = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (smo_B.b_bool_n) {
        smo_B.b_kstr_f = 1;
      } else {
        smo_B.b_kstr_f = -1;
      }
    }

    switch (smo_B.b_kstr_f) {
     case 0:
      memset(&smo_B.c_f1[0], 0, sizeof(real_T) << 4U);
      smo_B.c_f1[0] = 1.0;
      smo_B.c_f1[5] = 1.0;
      smo_B.c_f1[10] = 1.0;
      smo_B.c_f1[15] = 1.0;
      break;

     case 1:
      sm_rigidBodyJoint_get_JointAxis(&body->JointInternal, smo_B.v_o);
      smo_B.d -= smo_B.e;
      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < smo_B.d; smo_B.b_kstr_f++) {
        smo_B.e_data[smo_B.b_kstr_f] = smo_B.e + smo_B.b_kstr_f;
      }

      smo_B.result_data_f[0] = smo_B.v_o[0];
      smo_B.result_data_f[1] = smo_B.v_o[1];
      smo_B.result_data_f[2] = smo_B.v_o[2];
      if (0 <= (smo_B.d != 0) - 1) {
        smo_B.result_data_f[3] = qvec[smo_B.e_data[0]];
      }

      smo_B.k = 1.0 / sqrt((smo_B.result_data_f[0] * smo_B.result_data_f[0] +
                            smo_B.result_data_f[1] * smo_B.result_data_f[1]) +
                           smo_B.result_data_f[2] * smo_B.result_data_f[2]);
      smo_B.v_o[0] = smo_B.result_data_f[0] * smo_B.k;
      smo_B.v_o[1] = smo_B.result_data_f[1] * smo_B.k;
      smo_B.v_o[2] = smo_B.result_data_f[2] * smo_B.k;
      smo_B.k = cos(smo_B.result_data_f[3]);
      smo_B.sth_m = sin(smo_B.result_data_f[3]);
      smo_B.tempR_l[0] = smo_B.v_o[0] * smo_B.v_o[0] * (1.0 - smo_B.k) + smo_B.k;
      smo_B.tempR_tmp_m = smo_B.v_o[1] * smo_B.v_o[0] * (1.0 - smo_B.k);
      smo_B.tempR_tmp_cn = smo_B.v_o[2] * smo_B.sth_m;
      smo_B.tempR_l[1] = smo_B.tempR_tmp_m - smo_B.tempR_tmp_cn;
      smo_B.tempR_tmp_f = smo_B.v_o[2] * smo_B.v_o[0] * (1.0 - smo_B.k);
      smo_B.tempR_tmp_p = smo_B.v_o[1] * smo_B.sth_m;
      smo_B.tempR_l[2] = smo_B.tempR_tmp_f + smo_B.tempR_tmp_p;
      smo_B.tempR_l[3] = smo_B.tempR_tmp_m + smo_B.tempR_tmp_cn;
      smo_B.tempR_l[4] = smo_B.v_o[1] * smo_B.v_o[1] * (1.0 - smo_B.k) + smo_B.k;
      smo_B.tempR_tmp_m = smo_B.v_o[2] * smo_B.v_o[1] * (1.0 - smo_B.k);
      smo_B.tempR_tmp_cn = smo_B.v_o[0] * smo_B.sth_m;
      smo_B.tempR_l[5] = smo_B.tempR_tmp_m - smo_B.tempR_tmp_cn;
      smo_B.tempR_l[6] = smo_B.tempR_tmp_f - smo_B.tempR_tmp_p;
      smo_B.tempR_l[7] = smo_B.tempR_tmp_m + smo_B.tempR_tmp_cn;
      smo_B.tempR_l[8] = smo_B.v_o[2] * smo_B.v_o[2] * (1.0 - smo_B.k) + smo_B.k;
      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 3; smo_B.b_kstr_f++) {
        smo_B.e = smo_B.b_kstr_f + 1;
        smo_B.R_dy[smo_B.e - 1] = smo_B.tempR_l[(smo_B.e - 1) * 3];
        smo_B.e = smo_B.b_kstr_f + 1;
        smo_B.R_dy[smo_B.e + 2] = smo_B.tempR_l[(smo_B.e - 1) * 3 + 1];
        smo_B.e = smo_B.b_kstr_f + 1;
        smo_B.R_dy[smo_B.e + 5] = smo_B.tempR_l[(smo_B.e - 1) * 3 + 2];
      }

      memset(&smo_B.c_f1[0], 0, sizeof(real_T) << 4U);
      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 3; smo_B.b_kstr_f++) {
        smo_B.d = smo_B.b_kstr_f << 2;
        smo_B.c_f1[smo_B.d] = smo_B.R_dy[3 * smo_B.b_kstr_f];
        smo_B.c_f1[smo_B.d + 1] = smo_B.R_dy[3 * smo_B.b_kstr_f + 1];
        smo_B.c_f1[smo_B.d + 2] = smo_B.R_dy[3 * smo_B.b_kstr_f + 2];
      }

      smo_B.c_f1[15] = 1.0;
      break;

     default:
      sm_rigidBodyJoint_get_JointAxis(&body->JointInternal, smo_B.v_o);
      memset(&smo_B.tempR_l[0], 0, 9U * sizeof(real_T));
      smo_B.tempR_l[0] = 1.0;
      smo_B.tempR_l[4] = 1.0;
      smo_B.tempR_l[8] = 1.0;
      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 3; smo_B.b_kstr_f++) {
        smo_B.d = smo_B.b_kstr_f << 2;
        smo_B.c_f1[smo_B.d] = smo_B.tempR_l[3 * smo_B.b_kstr_f];
        smo_B.c_f1[smo_B.d + 1] = smo_B.tempR_l[3 * smo_B.b_kstr_f + 1];
        smo_B.c_f1[smo_B.d + 2] = smo_B.tempR_l[3 * smo_B.b_kstr_f + 2];
        smo_B.c_f1[smo_B.b_kstr_f + 12] = smo_B.v_o[smo_B.b_kstr_f] *
          qvec[smo_B.e];
      }

      smo_B.c_f1[3] = 0.0;
      smo_B.c_f1[7] = 0.0;
      smo_B.c_f1[11] = 0.0;
      smo_B.c_f1[15] = 1.0;
      break;
    }

    for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 16; smo_B.b_kstr_f++) {
      smo_B.a[smo_B.b_kstr_f] = body->
        JointInternal.JointToParentTransform[smo_B.b_kstr_f];
    }

    for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 16; smo_B.b_kstr_f++) {
      smo_B.b[smo_B.b_kstr_f] = body->
        JointInternal.ChildToJointTransform[smo_B.b_kstr_f];
    }

    for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 4; smo_B.b_kstr_f++) {
      for (smo_B.e = 0; smo_B.e < 4; smo_B.e++) {
        smo_B.d = smo_B.e << 2;
        smo_B.loop_ub_i = smo_B.b_kstr_f + smo_B.d;
        smo_B.a_c[smo_B.loop_ub_i] = 0.0;
        smo_B.a_c[smo_B.loop_ub_i] += smo_B.c_f1[smo_B.d] *
          smo_B.a[smo_B.b_kstr_f];
        smo_B.a_c[smo_B.loop_ub_i] += smo_B.c_f1[smo_B.d + 1] *
          smo_B.a[smo_B.b_kstr_f + 4];
        smo_B.a_c[smo_B.loop_ub_i] += smo_B.c_f1[smo_B.d + 2] *
          smo_B.a[smo_B.b_kstr_f + 8];
        smo_B.a_c[smo_B.loop_ub_i] += smo_B.c_f1[smo_B.d + 3] *
          smo_B.a[smo_B.b_kstr_f + 12];
      }

      for (smo_B.e = 0; smo_B.e < 4; smo_B.e++) {
        smo_B.d = smo_B.e << 2;
        smo_B.loop_ub_i = smo_B.b_kstr_f + smo_B.d;
        Ttree->data[smo_B.b_jtilecol].f1[smo_B.loop_ub_i] = 0.0;
        Ttree->data[smo_B.b_jtilecol].f1[smo_B.loop_ub_i] += smo_B.b[smo_B.d] *
          smo_B.a_c[smo_B.b_kstr_f];
        Ttree->data[smo_B.b_jtilecol].f1[smo_B.loop_ub_i] += smo_B.b[smo_B.d + 1]
          * smo_B.a_c[smo_B.b_kstr_f + 4];
        Ttree->data[smo_B.b_jtilecol].f1[smo_B.loop_ub_i] += smo_B.b[smo_B.d + 2]
          * smo_B.a_c[smo_B.b_kstr_f + 8];
        Ttree->data[smo_B.b_jtilecol].f1[smo_B.loop_ub_i] += smo_B.b[smo_B.d + 3]
          * smo_B.a_c[smo_B.b_kstr_f + 12];
      }
    }

    smo_B.k = smo_B.n;
    if (body->ParentIndex > 0.0) {
      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 16; smo_B.b_kstr_f++) {
        smo_B.a[smo_B.b_kstr_f] = Ttree->data[static_cast<int32_T>
          (body->ParentIndex) - 1].f1[smo_B.b_kstr_f];
      }

      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 4; smo_B.b_kstr_f++) {
        for (smo_B.e = 0; smo_B.e < 4; smo_B.e++) {
          smo_B.d = smo_B.e << 2;
          smo_B.loop_ub_i = smo_B.b_kstr_f + smo_B.d;
          smo_B.a_c[smo_B.loop_ub_i] = 0.0;
          smo_B.a_c[smo_B.loop_ub_i] += Ttree->data[smo_B.b_jtilecol].f1[smo_B.d]
            * smo_B.a[smo_B.b_kstr_f];
          smo_B.a_c[smo_B.loop_ub_i] += Ttree->data[smo_B.b_jtilecol].f1[smo_B.d
            + 1] * smo_B.a[smo_B.b_kstr_f + 4];
          smo_B.a_c[smo_B.loop_ub_i] += Ttree->data[smo_B.b_jtilecol].f1[smo_B.d
            + 2] * smo_B.a[smo_B.b_kstr_f + 8];
          smo_B.a_c[smo_B.loop_ub_i] += Ttree->data[smo_B.b_jtilecol].f1[smo_B.d
            + 3] * smo_B.a[smo_B.b_kstr_f + 12];
        }
      }

      for (smo_B.b_kstr_f = 0; smo_B.b_kstr_f < 16; smo_B.b_kstr_f++) {
        Ttree->data[smo_B.b_jtilecol].f1[smo_B.b_kstr_f] =
          smo_B.a_c[smo_B.b_kstr_f];
      }
    }
  }

  smo_emxFree_char_T(&switch_expression);
}

static void smo_emxFree_e_cell_wrap(emxArray_e_cell_wrap_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_e_cell_wrap_smo_T *)NULL) {
    if (((*pEmxArray)->data != (e_cell_wrap_smo_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_e_cell_wrap_smo_T *)NULL;
  }
}

static void smo_SystemCore_step_a(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16], uint32_T
  *varargout_2_Layout_Dim_SL_Info_, uint32_T *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_smo_638.getLatestMessage(&smo_B.b_varargout_2);
  for (smo_B.i_f = 0; smo_B.i_f < 7; smo_B.i_f++) {
    varargout_2_Data[smo_B.i_f] = smo_B.b_varargout_2.Data[smo_B.i_f];
  }

  *varargout_2_Data_SL_Info_Curren =
    smo_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    smo_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = smo_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &smo_B.b_varargout_2.Layout.Dim[0], sizeof
         (SL_Bus_smo_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    smo_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    smo_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void smo_emxInit_f_cell_wrap(emxArray_f_cell_wrap_smo_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_f_cell_wrap_smo_T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_smo_T *)malloc(sizeof
    (emxArray_f_cell_wrap_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_smo_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (smo_B.i_a5 = 0; smo_B.i_a5 < numDimensions; smo_B.i_a5++) {
    emxArray->size[smo_B.i_a5] = 0;
  }
}

static void s_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_smo_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  smo_B.newNumel_m = 1;
  for (smo_B.i_m0 = 0; smo_B.i_m0 < emxArray->numDimensions; smo_B.i_m0++) {
    smo_B.newNumel_m *= emxArray->size[smo_B.i_m0];
  }

  if (smo_B.newNumel_m > emxArray->allocatedSize) {
    smo_B.i_m0 = emxArray->allocatedSize;
    if (smo_B.i_m0 < 16) {
      smo_B.i_m0 = 16;
    }

    while (smo_B.i_m0 < smo_B.newNumel_m) {
      if (smo_B.i_m0 > 1073741823) {
        smo_B.i_m0 = MAX_int32_T;
      } else {
        smo_B.i_m0 <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(smo_B.i_m0), sizeof(f_cell_wrap_smo_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_smo_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_smo_T *)newData;
    emxArray->allocatedSize = smo_B.i_m0;
    emxArray->canFreeData = true;
  }
}

static void smo_emxFree_f_cell_wrap(emxArray_f_cell_wrap_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_smo_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_smo_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_smo_T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMat_a(k_robotics_manip_internal__a4_T
  *robot, const real_T q[7], emxArray_real_T_smo_T *H, emxArray_real_T_smo_T
  *lambda)
{
  emxArray_f_cell_wrap_smo_T *Ic;
  emxArray_f_cell_wrap_smo_T *X;
  emxArray_real_T_smo_T *lambda_;
  emxArray_real_T_smo_T *Si;
  emxArray_real_T_smo_T *Fi;
  emxArray_real_T_smo_T *Sj;
  emxArray_real_T_smo_T *Hji;
  emxArray_real_T_smo_T *s;
  j_robotics_manip_internal_R_a_T *obj;
  emxArray_char_T_smo_T *a;
  emxArray_real_T_smo_T *a_0;
  emxArray_real_T_smo_T *B;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T exitg1;
  int32_T exitg2;
  smo_B.nb_i = robot->NumBodies;
  smo_B.vNum_f = robot->VelocityNumber;
  smo_B.nm1d2 = H->size[0] * H->size[1];
  smo_B.b_i = static_cast<int32_T>(smo_B.vNum_f);
  H->size[0] = smo_B.b_i;
  H->size[1] = smo_B.b_i;
  smo_emxEnsureCapacity_real_T(H, smo_B.nm1d2);
  smo_B.n_e = smo_B.b_i * smo_B.b_i - 1;
  for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
    H->data[smo_B.nm1d2] = 0.0;
  }

  smo_emxInit_real_T(&lambda_, 2);
  smo_B.nm1d2 = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  smo_B.unnamed_idx_1_o = static_cast<int32_T>(smo_B.nb_i);
  lambda_->size[1] = smo_B.unnamed_idx_1_o;
  smo_emxEnsureCapacity_real_T(lambda_, smo_B.nm1d2);
  smo_B.idx = smo_B.unnamed_idx_1_o - 1;
  for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.idx; smo_B.nm1d2++) {
    lambda_->data[smo_B.nm1d2] = 0.0;
  }

  smo_B.nm1d2 = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = smo_B.b_i;
  smo_emxEnsureCapacity_real_T(lambda, smo_B.nm1d2);
  smo_B.n_e = smo_B.b_i - 1;
  for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
    lambda->data[smo_B.nm1d2] = 0.0;
  }

  smo_emxInit_f_cell_wrap(&Ic, 2);
  smo_emxInit_f_cell_wrap(&X, 2);
  smo_B.nm1d2 = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = smo_B.unnamed_idx_1_o;
  s_emxEnsureCapacity_f_cell_wrap(Ic, smo_B.nm1d2);
  smo_B.nm1d2 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = smo_B.unnamed_idx_1_o;
  s_emxEnsureCapacity_f_cell_wrap(X, smo_B.nm1d2);
  for (smo_B.b_i = 0; smo_B.b_i <= smo_B.idx; smo_B.b_i++) {
    for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 36; smo_B.nm1d2++) {
      Ic->data[smo_B.b_i].f1[smo_B.nm1d2] = robot->Bodies[smo_B.b_i]
        ->SpatialInertia[smo_B.nm1d2];
    }

    smo_B.vNum_f = robot->PositionDoFMap[smo_B.b_i];
    smo_B.p_idx_1 = robot->PositionDoFMap[smo_B.b_i + 10];
    if (smo_B.p_idx_1 < smo_B.vNum_f) {
      obj = robot->Bodies[smo_B.b_i];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, smo_B.T_c);
    } else {
      if (smo_B.vNum_f > smo_B.p_idx_1) {
        smo_B.unnamed_idx_1_o = 0;
        smo_B.nm1d2 = -1;
      } else {
        smo_B.unnamed_idx_1_o = static_cast<int32_T>(smo_B.vNum_f) - 1;
        smo_B.nm1d2 = static_cast<int32_T>(smo_B.p_idx_1) - 1;
      }

      obj = robot->Bodies[smo_B.b_i];
      smo_B.q_size_tmp = smo_B.nm1d2 - smo_B.unnamed_idx_1_o;
      smo_B.q_size_m = smo_B.q_size_tmp + 1;
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.q_size_tmp; smo_B.nm1d2++) {
        smo_B.q_data_b[smo_B.nm1d2] = q[smo_B.unnamed_idx_1_o + smo_B.nm1d2];
      }

      rigidBodyJoint_transformBodyT_a(&obj->JointInternal, smo_B.q_data_b,
        &smo_B.q_size_m, smo_B.T_c);
    }

    smo_tforminv(smo_B.T_c, smo_B.dv);
    smo_tformToSpatialXform(smo_B.dv, X->data[smo_B.b_i].f1);
  }

  smo_B.idx = static_cast<int32_T>(((-1.0 - smo_B.nb_i) + 1.0) / -1.0) - 1;
  smo_emxInit_real_T(&Si, 2);
  smo_emxInit_real_T(&Fi, 2);
  smo_emxInit_real_T(&Sj, 2);
  smo_emxInit_real_T(&Hji, 2);
  smo_emxInit_char_T(&a, 2);
  smo_emxInit_real_T(&a_0, 2);
  smo_emxInit_real_T(&B, 2);
  for (smo_B.unnamed_idx_1_o = 0; smo_B.unnamed_idx_1_o <= smo_B.idx;
       smo_B.unnamed_idx_1_o++) {
    smo_B.pid_tmp = static_cast<int32_T>(smo_B.nb_i + -static_cast<real_T>
      (smo_B.unnamed_idx_1_o));
    smo_B.q_size_tmp = smo_B.pid_tmp - 1;
    smo_B.pid = robot->Bodies[smo_B.q_size_tmp]->ParentIndex;
    smo_B.vNum_f = robot->VelocityDoFMap[smo_B.pid_tmp - 1];
    smo_B.p_idx_1 = robot->VelocityDoFMap[smo_B.pid_tmp + 9];
    if (smo_B.pid > 0.0) {
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 6; smo_B.nm1d2++) {
        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          smo_B.n_e = smo_B.nm1d2 + 6 * smo_B.b_i;
          smo_B.X[smo_B.n_e] = 0.0;
          for (smo_B.cb = 0; smo_B.cb < 6; smo_B.cb++) {
            smo_B.X[smo_B.n_e] += X->data[smo_B.q_size_tmp].f1[6 * smo_B.nm1d2 +
              smo_B.cb] * Ic->data[smo_B.q_size_tmp].f1[6 * smo_B.b_i + smo_B.cb];
          }
        }
      }

      for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 6; smo_B.nm1d2++) {
        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          smo_B.b_idx_0_i = 0.0;
          for (smo_B.cb = 0; smo_B.cb < 6; smo_B.cb++) {
            smo_B.b_idx_0_i += smo_B.X[6 * smo_B.cb + smo_B.nm1d2] * X->
              data[smo_B.q_size_tmp].f1[6 * smo_B.b_i + smo_B.cb];
          }

          smo_B.cb = 6 * smo_B.b_i + smo_B.nm1d2;
          Ic->data[static_cast<int32_T>(smo_B.pid) - 1].f1[smo_B.cb] +=
            smo_B.b_idx_0_i;
        }
      }

      lambda_->data[smo_B.q_size_tmp] = smo_B.pid;
      if (lambda_->data[smo_B.q_size_tmp] > 0.0) {
        for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 5; smo_B.nm1d2++) {
          smo_B.b_px[smo_B.nm1d2] = tmp[smo_B.nm1d2];
        }
      }

      exitg1 = false;
      while ((!exitg1) && (lambda_->data[smo_B.q_size_tmp] > 0.0)) {
        obj = robot->Bodies[static_cast<int32_T>(lambda_->data[smo_B.q_size_tmp])
          - 1];
        smo_B.nm1d2 = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = obj->JointInternal.Type->size[1];
        smo_emxEnsureCapacity_char_T(a, smo_B.nm1d2);
        smo_B.n_e = obj->JointInternal.Type->size[0] * obj->
          JointInternal.Type->size[1] - 1;
        for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
          a->data[smo_B.nm1d2] = obj->JointInternal.Type->data[smo_B.nm1d2];
        }

        smo_B.b_bool_p = false;
        if (a->size[1] == 5) {
          smo_B.nm1d2 = 1;
          do {
            exitg2 = 0;
            if (smo_B.nm1d2 - 1 < 5) {
              smo_B.n_e = smo_B.nm1d2 - 1;
              if (a->data[smo_B.n_e] != smo_B.b_px[smo_B.n_e]) {
                exitg2 = 1;
              } else {
                smo_B.nm1d2++;
              }
            } else {
              smo_B.b_bool_p = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (smo_B.b_bool_p) {
          lambda_->data[smo_B.q_size_tmp] = robot->Bodies[static_cast<int32_T>
            (lambda_->data[smo_B.q_size_tmp]) - 1]->ParentIndex;
        } else {
          exitg1 = true;
        }
      }
    }

    smo_B.b_idx_0_i = robot->VelocityDoFMap[smo_B.pid_tmp - 1];
    smo_B.b_idx_1_f = robot->VelocityDoFMap[smo_B.pid_tmp + 9];
    if (smo_B.b_idx_0_i <= smo_B.b_idx_1_f) {
      obj = robot->Bodies[smo_B.q_size_tmp];
      smo_B.nm1d2 = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      smo_emxEnsureCapacity_real_T(Si, smo_B.nm1d2);
      smo_B.n_e = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
        Si->data[smo_B.nm1d2] = obj->JointInternal.MotionSubspace->
          data[smo_B.nm1d2];
      }

      smo_B.n_e = Si->size[1] - 1;
      smo_B.nm1d2 = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      smo_emxEnsureCapacity_real_T(Fi, smo_B.nm1d2);
      for (smo_B.b_j_d = 0; smo_B.b_j_d <= smo_B.n_e; smo_B.b_j_d++) {
        smo_B.pid_tmp = smo_B.b_j_d * 6 - 1;
        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          Fi->data[(smo_B.pid_tmp + smo_B.b_i) + 1] = 0.0;
        }

        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          smo_B.aoffset_c = smo_B.b_i * 6 - 1;
          smo_B.temp = Si->data[(smo_B.pid_tmp + smo_B.b_i) + 1];
          for (smo_B.c_i_a = 0; smo_B.c_i_a < 6; smo_B.c_i_a++) {
            smo_B.i_ax = smo_B.c_i_a + 1;
            smo_B.nm1d2 = smo_B.pid_tmp + smo_B.i_ax;
            Fi->data[smo_B.nm1d2] += Ic->data[smo_B.q_size_tmp]
              .f1[smo_B.aoffset_c + smo_B.i_ax] * smo_B.temp;
          }
        }
      }

      if (smo_B.vNum_f > smo_B.p_idx_1) {
        smo_B.pid_tmp = 0;
        smo_B.cb = 0;
      } else {
        smo_B.pid_tmp = static_cast<int32_T>(smo_B.vNum_f) - 1;
        smo_B.cb = smo_B.pid_tmp;
      }

      smo_B.nm1d2 = a_0->size[0] * a_0->size[1];
      a_0->size[0] = Si->size[1];
      a_0->size[1] = 6;
      smo_emxEnsureCapacity_real_T(a_0, smo_B.nm1d2);
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 6; smo_B.nm1d2++) {
        smo_B.n_e = Si->size[1];
        for (smo_B.b_i = 0; smo_B.b_i < smo_B.n_e; smo_B.b_i++) {
          a_0->data[smo_B.b_i + a_0->size[0] * smo_B.nm1d2] = Si->data[6 *
            smo_B.b_i + smo_B.nm1d2];
        }
      }

      smo_B.m_p = a_0->size[0];
      smo_B.n_e = Fi->size[1] - 1;
      smo_B.nm1d2 = Hji->size[0] * Hji->size[1];
      Hji->size[0] = a_0->size[0];
      Hji->size[1] = Fi->size[1];
      smo_emxEnsureCapacity_real_T(Hji, smo_B.nm1d2);
      for (smo_B.b_j_d = 0; smo_B.b_j_d <= smo_B.n_e; smo_B.b_j_d++) {
        smo_B.coffset = smo_B.b_j_d * smo_B.m_p - 1;
        smo_B.boffset = smo_B.b_j_d * 6 - 1;
        for (smo_B.b_i = 0; smo_B.b_i < smo_B.m_p; smo_B.b_i++) {
          Hji->data[(smo_B.coffset + smo_B.b_i) + 1] = 0.0;
        }

        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          smo_B.aoffset_c = smo_B.b_i * smo_B.m_p - 1;
          smo_B.temp = Fi->data[(smo_B.boffset + smo_B.b_i) + 1];
          for (smo_B.c_i_a = 0; smo_B.c_i_a < smo_B.m_p; smo_B.c_i_a++) {
            smo_B.i_ax = smo_B.c_i_a + 1;
            smo_B.nm1d2 = smo_B.coffset + smo_B.i_ax;
            Hji->data[smo_B.nm1d2] += a_0->data[smo_B.aoffset_c + smo_B.i_ax] *
              smo_B.temp;
          }
        }
      }

      smo_B.n_e = Hji->size[1];
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 < smo_B.n_e; smo_B.nm1d2++) {
        smo_B.b_j_d = Hji->size[0];
        for (smo_B.b_i = 0; smo_B.b_i < smo_B.b_j_d; smo_B.b_i++) {
          H->data[(smo_B.pid_tmp + smo_B.b_i) + H->size[0] * (smo_B.cb +
            smo_B.nm1d2)] = Hji->data[Hji->size[0] * smo_B.nm1d2 + smo_B.b_i];
        }
      }

      for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 6; smo_B.nm1d2++) {
        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          smo_B.X[smo_B.b_i + 6 * smo_B.nm1d2] = X->data[smo_B.q_size_tmp].f1[6 *
            smo_B.b_i + smo_B.nm1d2];
        }
      }

      smo_B.nm1d2 = B->size[0] * B->size[1];
      B->size[0] = 6;
      B->size[1] = Fi->size[1];
      smo_emxEnsureCapacity_real_T(B, smo_B.nm1d2);
      smo_B.n_e = Fi->size[0] * Fi->size[1] - 1;
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
        B->data[smo_B.nm1d2] = Fi->data[smo_B.nm1d2];
      }

      smo_B.n_e = Fi->size[1];
      smo_B.nm1d2 = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = smo_B.n_e;
      smo_emxEnsureCapacity_real_T(Fi, smo_B.nm1d2);
      for (smo_B.b_j_d = 0; smo_B.b_j_d < smo_B.n_e; smo_B.b_j_d++) {
        smo_B.pid_tmp = smo_B.b_j_d * 6 - 1;
        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          Fi->data[(smo_B.pid_tmp + smo_B.b_i) + 1] = 0.0;
        }

        for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
          smo_B.aoffset_c = smo_B.b_i * 6 - 1;
          smo_B.temp = B->data[(smo_B.pid_tmp + smo_B.b_i) + 1];
          for (smo_B.c_i_a = 0; smo_B.c_i_a < 6; smo_B.c_i_a++) {
            smo_B.i_ax = smo_B.c_i_a + 1;
            smo_B.nm1d2 = smo_B.pid_tmp + smo_B.i_ax;
            Fi->data[smo_B.nm1d2] += smo_B.X[smo_B.aoffset_c + smo_B.i_ax] *
              smo_B.temp;
          }
        }
      }

      while (smo_B.pid > 0.0) {
        smo_B.b_i = static_cast<int32_T>(smo_B.pid);
        smo_B.q_size_tmp = smo_B.b_i - 1;
        obj = robot->Bodies[smo_B.q_size_tmp];
        smo_B.nm1d2 = Sj->size[0] * Sj->size[1];
        Sj->size[0] = 6;
        Sj->size[1] = obj->JointInternal.MotionSubspace->size[1];
        smo_emxEnsureCapacity_real_T(Sj, smo_B.nm1d2);
        smo_B.n_e = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
          Sj->data[smo_B.nm1d2] = obj->JointInternal.MotionSubspace->
            data[smo_B.nm1d2];
        }

        smo_B.b_idx_0_i = robot->VelocityDoFMap[smo_B.b_i - 1];
        smo_B.b_idx_1_f = robot->VelocityDoFMap[smo_B.b_i + 9];
        if (smo_B.b_idx_0_i <= smo_B.b_idx_1_f) {
          smo_B.nm1d2 = a_0->size[0] * a_0->size[1];
          a_0->size[0] = Sj->size[1];
          a_0->size[1] = 6;
          smo_emxEnsureCapacity_real_T(a_0, smo_B.nm1d2);
          for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 6; smo_B.nm1d2++) {
            smo_B.n_e = Sj->size[1];
            for (smo_B.b_i = 0; smo_B.b_i < smo_B.n_e; smo_B.b_i++) {
              a_0->data[smo_B.b_i + a_0->size[0] * smo_B.nm1d2] = Sj->data[6 *
                smo_B.b_i + smo_B.nm1d2];
            }
          }

          smo_B.m_p = a_0->size[0];
          smo_B.n_e = Fi->size[1] - 1;
          smo_B.nm1d2 = Hji->size[0] * Hji->size[1];
          Hji->size[0] = a_0->size[0];
          Hji->size[1] = Fi->size[1];
          smo_emxEnsureCapacity_real_T(Hji, smo_B.nm1d2);
          for (smo_B.b_j_d = 0; smo_B.b_j_d <= smo_B.n_e; smo_B.b_j_d++) {
            smo_B.coffset = smo_B.b_j_d * smo_B.m_p - 1;
            smo_B.boffset = smo_B.b_j_d * 6 - 1;
            for (smo_B.b_i = 0; smo_B.b_i < smo_B.m_p; smo_B.b_i++) {
              Hji->data[(smo_B.coffset + smo_B.b_i) + 1] = 0.0;
            }

            for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
              smo_B.aoffset_c = smo_B.b_i * smo_B.m_p - 1;
              smo_B.temp = Fi->data[(smo_B.boffset + smo_B.b_i) + 1];
              for (smo_B.c_i_a = 0; smo_B.c_i_a < smo_B.m_p; smo_B.c_i_a++) {
                smo_B.i_ax = smo_B.c_i_a + 1;
                smo_B.nm1d2 = smo_B.coffset + smo_B.i_ax;
                Hji->data[smo_B.nm1d2] += a_0->data[smo_B.aoffset_c + smo_B.i_ax]
                  * smo_B.temp;
              }
            }
          }

          if (smo_B.b_idx_0_i > smo_B.b_idx_1_f) {
            smo_B.pid_tmp = 0;
          } else {
            smo_B.pid_tmp = static_cast<int32_T>(smo_B.b_idx_0_i) - 1;
          }

          if (smo_B.vNum_f > smo_B.p_idx_1) {
            smo_B.cb = 0;
          } else {
            smo_B.cb = static_cast<int32_T>(smo_B.vNum_f) - 1;
          }

          smo_B.n_e = Hji->size[1];
          for (smo_B.nm1d2 = 0; smo_B.nm1d2 < smo_B.n_e; smo_B.nm1d2++) {
            smo_B.b_j_d = Hji->size[0];
            for (smo_B.b_i = 0; smo_B.b_i < smo_B.b_j_d; smo_B.b_i++) {
              H->data[(smo_B.pid_tmp + smo_B.b_i) + H->size[0] * (smo_B.cb +
                smo_B.nm1d2)] = Hji->data[Hji->size[0] * smo_B.nm1d2 + smo_B.b_i];
            }
          }

          if (smo_B.vNum_f > smo_B.p_idx_1) {
            smo_B.pid_tmp = 0;
          } else {
            smo_B.pid_tmp = static_cast<int32_T>(smo_B.vNum_f) - 1;
          }

          if (smo_B.b_idx_0_i > smo_B.b_idx_1_f) {
            smo_B.cb = 0;
          } else {
            smo_B.cb = static_cast<int32_T>(smo_B.b_idx_0_i) - 1;
          }

          smo_B.n_e = Hji->size[0];
          for (smo_B.nm1d2 = 0; smo_B.nm1d2 < smo_B.n_e; smo_B.nm1d2++) {
            smo_B.b_j_d = Hji->size[1];
            for (smo_B.b_i = 0; smo_B.b_i < smo_B.b_j_d; smo_B.b_i++) {
              H->data[(smo_B.pid_tmp + smo_B.b_i) + H->size[0] * (smo_B.cb +
                smo_B.nm1d2)] = Hji->data[Hji->size[0] * smo_B.b_i + smo_B.nm1d2];
            }
          }
        }

        for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 6; smo_B.nm1d2++) {
          for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
            smo_B.X[smo_B.b_i + 6 * smo_B.nm1d2] = X->data[smo_B.q_size_tmp].f1
              [6 * smo_B.b_i + smo_B.nm1d2];
          }
        }

        smo_B.nm1d2 = B->size[0] * B->size[1];
        B->size[0] = 6;
        B->size[1] = Fi->size[1];
        smo_emxEnsureCapacity_real_T(B, smo_B.nm1d2);
        smo_B.n_e = Fi->size[0] * Fi->size[1] - 1;
        for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
          B->data[smo_B.nm1d2] = Fi->data[smo_B.nm1d2];
        }

        smo_B.n_e = Fi->size[1];
        smo_B.nm1d2 = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = smo_B.n_e;
        smo_emxEnsureCapacity_real_T(Fi, smo_B.nm1d2);
        for (smo_B.b_j_d = 0; smo_B.b_j_d < smo_B.n_e; smo_B.b_j_d++) {
          smo_B.pid_tmp = smo_B.b_j_d * 6 - 1;
          for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
            Fi->data[(smo_B.pid_tmp + smo_B.b_i) + 1] = 0.0;
          }

          for (smo_B.b_i = 0; smo_B.b_i < 6; smo_B.b_i++) {
            smo_B.aoffset_c = smo_B.b_i * 6 - 1;
            smo_B.temp = B->data[(smo_B.pid_tmp + smo_B.b_i) + 1];
            for (smo_B.c_i_a = 0; smo_B.c_i_a < 6; smo_B.c_i_a++) {
              smo_B.i_ax = smo_B.c_i_a + 1;
              smo_B.nm1d2 = smo_B.pid_tmp + smo_B.i_ax;
              Fi->data[smo_B.nm1d2] += smo_B.X[smo_B.aoffset_c + smo_B.i_ax] *
                smo_B.temp;
            }
          }
        }

        smo_B.pid = robot->Bodies[smo_B.q_size_tmp]->ParentIndex;
      }
    }
  }

  smo_emxFree_real_T(&B);
  smo_emxFree_real_T(&a_0);
  smo_emxFree_char_T(&a);
  smo_emxFree_real_T(&Hji);
  smo_emxFree_real_T(&Sj);
  smo_emxFree_real_T(&Fi);
  smo_emxFree_real_T(&Si);
  smo_emxFree_f_cell_wrap(&X);
  smo_emxFree_f_cell_wrap(&Ic);
  for (smo_B.nm1d2 = 0; smo_B.nm1d2 < 10; smo_B.nm1d2++) {
    smo_B.mask[smo_B.nm1d2] = (robot->VelocityDoFMap[smo_B.nm1d2] <=
      robot->VelocityDoFMap[smo_B.nm1d2 + 10]);
  }

  smo_B.idx = 0;
  smo_B.nm1d2 = 1;
  exitg1 = false;
  while ((!exitg1) && (smo_B.nm1d2 - 1 < 10)) {
    if (smo_B.mask[smo_B.nm1d2 - 1]) {
      smo_B.idx++;
      smo_B.ii_data[smo_B.idx - 1] = smo_B.nm1d2;
      if (smo_B.idx >= 10) {
        exitg1 = true;
      } else {
        smo_B.nm1d2++;
      }
    } else {
      smo_B.nm1d2++;
    }
  }

  if (1 > smo_B.idx) {
    smo_B.idx = 0;
  }

  for (smo_B.nm1d2 = 0; smo_B.nm1d2 < smo_B.idx; smo_B.nm1d2++) {
    smo_B.nonFixedIndices_data[smo_B.nm1d2] = smo_B.ii_data[smo_B.nm1d2];
  }

  smo_B.idx--;
  smo_emxInit_real_T(&s, 2);
  for (smo_B.unnamed_idx_1_o = 0; smo_B.unnamed_idx_1_o <= smo_B.idx;
       smo_B.unnamed_idx_1_o++) {
    smo_B.vNum_f = robot->
      VelocityDoFMap[smo_B.nonFixedIndices_data[smo_B.unnamed_idx_1_o] - 1];
    smo_B.p_idx_1 = robot->
      VelocityDoFMap[smo_B.nonFixedIndices_data[smo_B.unnamed_idx_1_o] + 9];
    if (rtIsNaN(smo_B.vNum_f) || rtIsNaN(smo_B.p_idx_1)) {
      smo_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      smo_emxEnsureCapacity_real_T(s, smo_B.nm1d2);
      s->data[0] = (rtNaN);
    } else if (smo_B.p_idx_1 < smo_B.vNum_f) {
      s->size[0] = 1;
      s->size[1] = 0;
    } else if ((rtIsInf(smo_B.vNum_f) || rtIsInf(smo_B.p_idx_1)) &&
               (smo_B.vNum_f == smo_B.p_idx_1)) {
      smo_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      smo_emxEnsureCapacity_real_T(s, smo_B.nm1d2);
      s->data[0] = (rtNaN);
    } else if (floor(smo_B.vNum_f) == smo_B.vNum_f) {
      smo_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      smo_B.n_e = static_cast<int32_T>(floor(smo_B.p_idx_1 - smo_B.vNum_f));
      s->size[1] = smo_B.n_e + 1;
      smo_emxEnsureCapacity_real_T(s, smo_B.nm1d2);
      for (smo_B.nm1d2 = 0; smo_B.nm1d2 <= smo_B.n_e; smo_B.nm1d2++) {
        s->data[smo_B.nm1d2] = smo_B.vNum_f + static_cast<real_T>(smo_B.nm1d2);
      }
    } else {
      smo_B.nb_i = floor((smo_B.p_idx_1 - smo_B.vNum_f) + 0.5);
      smo_B.pid = smo_B.vNum_f + smo_B.nb_i;
      smo_B.b_idx_0_i = smo_B.pid - smo_B.p_idx_1;
      smo_B.b_idx_1_f = fabs(smo_B.vNum_f);
      smo_B.temp = fabs(smo_B.p_idx_1);
      if ((smo_B.b_idx_1_f > smo_B.temp) || rtIsNaN(smo_B.temp)) {
        smo_B.temp = smo_B.b_idx_1_f;
      }

      if (fabs(smo_B.b_idx_0_i) < 4.4408920985006262E-16 * smo_B.temp) {
        smo_B.nb_i++;
        smo_B.pid = smo_B.p_idx_1;
      } else if (smo_B.b_idx_0_i > 0.0) {
        smo_B.pid = (smo_B.nb_i - 1.0) + smo_B.vNum_f;
      } else {
        smo_B.nb_i++;
      }

      if (smo_B.nb_i >= 0.0) {
        smo_B.nm1d2 = static_cast<int32_T>(smo_B.nb_i);
      } else {
        smo_B.nm1d2 = 0;
      }

      smo_B.n_e = smo_B.nm1d2 - 1;
      smo_B.nm1d2 = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = smo_B.n_e + 1;
      smo_emxEnsureCapacity_real_T(s, smo_B.nm1d2);
      if (smo_B.n_e + 1 > 0) {
        s->data[0] = smo_B.vNum_f;
        if (smo_B.n_e + 1 > 1) {
          s->data[smo_B.n_e] = smo_B.pid;
          smo_B.nm1d2 = smo_B.n_e / 2;
          smo_B.q_size_tmp = smo_B.nm1d2 - 2;
          for (smo_B.b_i = 0; smo_B.b_i <= smo_B.q_size_tmp; smo_B.b_i++) {
            smo_B.pid_tmp = smo_B.b_i + 1;
            s->data[smo_B.pid_tmp] = smo_B.vNum_f + static_cast<real_T>
              (smo_B.pid_tmp);
            s->data[smo_B.n_e - smo_B.pid_tmp] = smo_B.pid - static_cast<real_T>
              (smo_B.pid_tmp);
          }

          if (smo_B.nm1d2 << 1 == smo_B.n_e) {
            s->data[smo_B.nm1d2] = (smo_B.vNum_f + smo_B.pid) / 2.0;
          } else {
            s->data[smo_B.nm1d2] = smo_B.vNum_f + static_cast<real_T>
              (smo_B.nm1d2);
            s->data[smo_B.nm1d2 + 1] = smo_B.pid - static_cast<real_T>
              (smo_B.nm1d2);
          }
        }
      }
    }

    if (smo_B.vNum_f > smo_B.p_idx_1) {
      smo_B.q_size_tmp = 0;
    } else {
      smo_B.q_size_tmp = static_cast<int32_T>(smo_B.vNum_f) - 1;
    }

    smo_B.n_e = s->size[1];
    for (smo_B.nm1d2 = 0; smo_B.nm1d2 < smo_B.n_e; smo_B.nm1d2++) {
      lambda->data[smo_B.q_size_tmp + smo_B.nm1d2] = s->data[smo_B.nm1d2] - 1.0;
    }

    if (lambda_->data[smo_B.nonFixedIndices_data[smo_B.unnamed_idx_1_o] - 1] ==
        0.0) {
      lambda->data[static_cast<int32_T>(smo_B.vNum_f) - 1] = 0.0;
    } else {
      smo_B.nm1d2 = static_cast<int32_T>(lambda_->
        data[smo_B.nonFixedIndices_data[smo_B.unnamed_idx_1_o] - 1]);
      smo_B.b_idx_1_f = robot->VelocityDoFMap[smo_B.nm1d2 + 9];
      lambda->data[static_cast<int32_T>(smo_B.vNum_f) - 1] = smo_B.b_idx_1_f;
    }
  }

  smo_emxFree_real_T(&s);
  smo_emxFree_real_T(&lambda_);
}

static void RigidBodyTreeDynamics_inverseDy(k_robotics_manip_internal__a4_T
  *robot, const real_T q[7], const real_T qdot[7], const emxArray_real_T_smo_T
  *qddot, const real_T fext[60], real_T tau[7])
{
  emxArray_f_cell_wrap_smo_T *X;
  emxArray_f_cell_wrap_smo_T *Xtree;
  emxArray_real_T_smo_T *vJ;
  emxArray_real_T_smo_T *vB;
  emxArray_real_T_smo_T *aB;
  emxArray_real_T_smo_T *f;
  emxArray_real_T_smo_T *S;
  emxArray_real_T_smo_T *qddoti;
  j_robotics_manip_internal_R_a_T *obj;
  emxArray_char_T_smo_T *a;
  emxArray_real_T_smo_T *a_0;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  smo_B.a0[0] = 0.0;
  smo_B.a0[1] = 0.0;
  smo_B.a0[2] = 0.0;
  smo_B.a0[3] = -robot->Gravity[0];
  smo_B.a0[4] = -robot->Gravity[1];
  smo_B.a0[5] = -robot->Gravity[2];
  smo_emxInit_real_T(&vJ, 2);
  smo_B.nb = robot->NumBodies;
  smo_B.i_a = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  smo_B.unnamed_idx_1 = static_cast<int32_T>(smo_B.nb);
  vJ->size[1] = smo_B.unnamed_idx_1;
  smo_emxEnsureCapacity_real_T(vJ, smo_B.i_a);
  smo_B.loop_ub_tmp = 6 * smo_B.unnamed_idx_1 - 1;
  for (smo_B.i_a = 0; smo_B.i_a <= smo_B.loop_ub_tmp; smo_B.i_a++) {
    vJ->data[smo_B.i_a] = 0.0;
  }

  smo_emxInit_real_T(&vB, 2);
  smo_B.i_a = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = smo_B.unnamed_idx_1;
  smo_emxEnsureCapacity_real_T(vB, smo_B.i_a);
  for (smo_B.i_a = 0; smo_B.i_a <= smo_B.loop_ub_tmp; smo_B.i_a++) {
    vB->data[smo_B.i_a] = 0.0;
  }

  smo_emxInit_real_T(&aB, 2);
  smo_B.i_a = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = smo_B.unnamed_idx_1;
  smo_emxEnsureCapacity_real_T(aB, smo_B.i_a);
  for (smo_B.i_a = 0; smo_B.i_a <= smo_B.loop_ub_tmp; smo_B.i_a++) {
    aB->data[smo_B.i_a] = 0.0;
  }

  for (smo_B.i_a = 0; smo_B.i_a < 7; smo_B.i_a++) {
    tau[smo_B.i_a] = 0.0;
  }

  smo_emxInit_f_cell_wrap(&X, 2);
  smo_emxInit_f_cell_wrap(&Xtree, 2);
  smo_B.loop_ub_tmp = smo_B.unnamed_idx_1 - 1;
  smo_B.i_a = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = smo_B.unnamed_idx_1;
  s_emxEnsureCapacity_f_cell_wrap(Xtree, smo_B.i_a);
  smo_B.i_a = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = smo_B.unnamed_idx_1;
  s_emxEnsureCapacity_f_cell_wrap(X, smo_B.i_a);
  for (smo_B.b_k_b = 0; smo_B.b_k_b <= smo_B.loop_ub_tmp; smo_B.b_k_b++) {
    for (smo_B.i_a = 0; smo_B.i_a < 36; smo_B.i_a++) {
      Xtree->data[smo_B.b_k_b].f1[smo_B.i_a] = 0.0;
    }

    for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
      Xtree->data[smo_B.b_k_b].f1[smo_B.i_a + 6 * smo_B.i_a] = 1.0;
    }

    for (smo_B.i_a = 0; smo_B.i_a < 36; smo_B.i_a++) {
      X->data[smo_B.b_k_b].f1[smo_B.i_a] = 0.0;
    }

    for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
      X->data[smo_B.b_k_b].f1[smo_B.i_a + 6 * smo_B.i_a] = 1.0;
    }
  }

  smo_emxInit_real_T(&f, 2);
  smo_B.i_a = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = smo_B.unnamed_idx_1;
  smo_emxEnsureCapacity_real_T(f, smo_B.i_a);
  smo_emxInit_real_T(&S, 2);
  smo_emxInit_real_T(&qddoti, 1);
  if (0 <= smo_B.loop_ub_tmp) {
    smo_B.dv2[0] = 0.0;
    smo_B.dv2[4] = 0.0;
    smo_B.dv2[8] = 0.0;
  }

  for (smo_B.unnamed_idx_1 = 0; smo_B.unnamed_idx_1 <= smo_B.loop_ub_tmp;
       smo_B.unnamed_idx_1++) {
    obj = robot->Bodies[smo_B.unnamed_idx_1];
    smo_B.i_a = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    smo_emxEnsureCapacity_real_T(S, smo_B.i_a);
    smo_B.b_k_b = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (smo_B.i_a = 0; smo_B.i_a <= smo_B.b_k_b; smo_B.i_a++) {
      S->data[smo_B.i_a] = obj->JointInternal.MotionSubspace->data[smo_B.i_a];
    }

    smo_B.a_idx_0 = robot->PositionDoFMap[smo_B.unnamed_idx_1];
    smo_B.a_idx_1 = robot->PositionDoFMap[smo_B.unnamed_idx_1 + 10];
    smo_B.b_idx_0 = robot->VelocityDoFMap[smo_B.unnamed_idx_1];
    smo_B.b_idx_1 = robot->VelocityDoFMap[smo_B.unnamed_idx_1 + 10];
    if (smo_B.a_idx_1 < smo_B.a_idx_0) {
      obj = robot->Bodies[smo_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, smo_B.T);
      smo_B.i_a = qddoti->size[0];
      qddoti->size[0] = 1;
      smo_emxEnsureCapacity_real_T(qddoti, smo_B.i_a);
      qddoti->data[0] = 0.0;
      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        vJ->data[smo_B.i_a + 6 * smo_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (smo_B.a_idx_0 > smo_B.a_idx_1) {
        smo_B.inner = 0;
        smo_B.m = -1;
      } else {
        smo_B.inner = static_cast<int32_T>(smo_B.a_idx_0) - 1;
        smo_B.m = static_cast<int32_T>(smo_B.a_idx_1) - 1;
      }

      if (smo_B.b_idx_0 > smo_B.b_idx_1) {
        smo_B.p_tmp = 0;
        smo_B.o_tmp = 0;
        smo_B.aoffset = 0;
        smo_B.b_k_b = -1;
      } else {
        smo_B.p_tmp = static_cast<int32_T>(smo_B.b_idx_0) - 1;
        smo_B.o_tmp = static_cast<int32_T>(smo_B.b_idx_1);
        smo_B.aoffset = smo_B.p_tmp;
        smo_B.b_k_b = smo_B.o_tmp - 1;
      }

      smo_B.i_a = qddoti->size[0];
      smo_B.b_k_b -= smo_B.aoffset;
      qddoti->size[0] = smo_B.b_k_b + 1;
      smo_emxEnsureCapacity_real_T(qddoti, smo_B.i_a);
      for (smo_B.i_a = 0; smo_B.i_a <= smo_B.b_k_b; smo_B.i_a++) {
        qddoti->data[smo_B.i_a] = qddot->data[smo_B.aoffset + smo_B.i_a];
      }

      obj = robot->Bodies[smo_B.unnamed_idx_1];
      smo_B.m -= smo_B.inner;
      smo_B.q_size = smo_B.m + 1;
      for (smo_B.i_a = 0; smo_B.i_a <= smo_B.m; smo_B.i_a++) {
        smo_B.q_data[smo_B.i_a] = q[smo_B.inner + smo_B.i_a];
      }

      rigidBodyJoint_transformBodyT_a(&obj->JointInternal, smo_B.q_data,
        &smo_B.q_size, smo_B.T);
      if ((S->size[1] == 1) || (smo_B.o_tmp - smo_B.p_tmp == 1)) {
        for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
          smo_B.aoffset = smo_B.i_a + 6 * smo_B.unnamed_idx_1;
          vJ->data[smo_B.aoffset] = 0.0;
          smo_B.b_k_b = S->size[1];
          for (smo_B.inner = 0; smo_B.inner < smo_B.b_k_b; smo_B.inner++) {
            vJ->data[smo_B.aoffset] += S->data[6 * smo_B.inner + smo_B.i_a] *
              qdot[smo_B.p_tmp + smo_B.inner];
          }
        }
      } else {
        smo_B.inner = S->size[1] - 1;
        for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
          vJ->data[smo_B.i_a + 6 * smo_B.unnamed_idx_1] = 0.0;
        }

        for (smo_B.b_k_b = 0; smo_B.b_k_b <= smo_B.inner; smo_B.b_k_b++) {
          smo_B.aoffset = smo_B.b_k_b * 6 - 1;
          for (smo_B.c_i = 0; smo_B.c_i < 6; smo_B.c_i++) {
            smo_B.i_a = 6 * smo_B.unnamed_idx_1 + smo_B.c_i;
            vJ->data[smo_B.i_a] += S->data[(smo_B.aoffset + smo_B.c_i) + 1] *
              qdot[smo_B.p_tmp + smo_B.b_k_b];
          }
        }
      }
    }

    for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
      smo_B.R_j[3 * smo_B.i_a] = smo_B.T[smo_B.i_a];
      smo_B.R_j[3 * smo_B.i_a + 1] = smo_B.T[smo_B.i_a + 4];
      smo_B.R_j[3 * smo_B.i_a + 2] = smo_B.T[smo_B.i_a + 8];
    }

    for (smo_B.i_a = 0; smo_B.i_a < 9; smo_B.i_a++) {
      smo_B.R_d[smo_B.i_a] = -smo_B.R_j[smo_B.i_a];
    }

    for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
      smo_B.p_tmp = smo_B.i_a << 2;
      smo_B.Tinv[smo_B.p_tmp] = smo_B.R_j[3 * smo_B.i_a];
      smo_B.Tinv[smo_B.p_tmp + 1] = smo_B.R_j[3 * smo_B.i_a + 1];
      smo_B.Tinv[smo_B.p_tmp + 2] = smo_B.R_j[3 * smo_B.i_a + 2];
      smo_B.Tinv[smo_B.i_a + 12] = smo_B.R_d[smo_B.i_a + 6] * smo_B.T[14] +
        (smo_B.R_d[smo_B.i_a + 3] * smo_B.T[13] + smo_B.R_d[smo_B.i_a] *
         smo_B.T[12]);
    }

    smo_B.Tinv[3] = 0.0;
    smo_B.Tinv[7] = 0.0;
    smo_B.Tinv[11] = 0.0;
    smo_B.Tinv[15] = 1.0;
    smo_B.dv2[3] = -smo_B.Tinv[14];
    smo_B.dv2[6] = smo_B.Tinv[13];
    smo_B.dv2[1] = smo_B.Tinv[14];
    smo_B.dv2[7] = -smo_B.Tinv[12];
    smo_B.dv2[2] = -smo_B.Tinv[13];
    smo_B.dv2[5] = smo_B.Tinv[12];
    for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
      for (smo_B.aoffset = 0; smo_B.aoffset < 3; smo_B.aoffset++) {
        smo_B.inner = smo_B.i_a + 3 * smo_B.aoffset;
        smo_B.dv3[smo_B.inner] = 0.0;
        smo_B.p_tmp = smo_B.aoffset << 2;
        smo_B.dv3[smo_B.inner] += smo_B.Tinv[smo_B.p_tmp] * smo_B.dv2[smo_B.i_a];
        smo_B.dv3[smo_B.inner] += smo_B.Tinv[smo_B.p_tmp + 1] *
          smo_B.dv2[smo_B.i_a + 3];
        smo_B.dv3[smo_B.inner] += smo_B.Tinv[smo_B.p_tmp + 2] *
          smo_B.dv2[smo_B.i_a + 6];
        X->data[smo_B.unnamed_idx_1].f1[smo_B.aoffset + 6 * smo_B.i_a] =
          smo_B.Tinv[(smo_B.i_a << 2) + smo_B.aoffset];
        X->data[smo_B.unnamed_idx_1].f1[smo_B.aoffset + 6 * (smo_B.i_a + 3)] =
          0.0;
      }
    }

    for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
      X->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a + 3] = smo_B.dv3[3 *
        smo_B.i_a];
      smo_B.aoffset = smo_B.i_a << 2;
      smo_B.inner = 6 * (smo_B.i_a + 3);
      X->data[smo_B.unnamed_idx_1].f1[smo_B.inner + 3] =
        smo_B.Tinv[smo_B.aoffset];
      X->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a + 4] = smo_B.dv3[3 *
        smo_B.i_a + 1];
      X->data[smo_B.unnamed_idx_1].f1[smo_B.inner + 4] =
        smo_B.Tinv[smo_B.aoffset + 1];
      X->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a + 5] = smo_B.dv3[3 *
        smo_B.i_a + 2];
      X->data[smo_B.unnamed_idx_1].f1[smo_B.inner + 5] =
        smo_B.Tinv[smo_B.aoffset + 2];
    }

    smo_B.a_idx_0 = robot->Bodies[smo_B.unnamed_idx_1]->ParentIndex;
    if (smo_B.a_idx_0 > 0.0) {
      smo_B.m = static_cast<int32_T>(smo_B.a_idx_0);
      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.a_idx_1 = 0.0;
        for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
          smo_B.a_idx_1 += vB->data[(smo_B.m - 1) * 6 + smo_B.aoffset] * X->
            data[smo_B.unnamed_idx_1].f1[6 * smo_B.aoffset + smo_B.i_a];
        }

        smo_B.vJ[smo_B.i_a] = vJ->data[6 * smo_B.unnamed_idx_1 + smo_B.i_a] +
          smo_B.a_idx_1;
      }

      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        vB->data[smo_B.i_a + 6 * smo_B.unnamed_idx_1] = smo_B.vJ[smo_B.i_a];
      }

      if ((S->size[1] == 1) || (qddoti->size[0] == 1)) {
        smo_B.b_k_b = S->size[1];
        for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
          smo_B.y[smo_B.i_a] = 0.0;
          for (smo_B.aoffset = 0; smo_B.aoffset < smo_B.b_k_b; smo_B.aoffset++)
          {
            smo_B.a_idx_1 = S->data[6 * smo_B.aoffset + smo_B.i_a] *
              qddoti->data[smo_B.aoffset] + smo_B.y[smo_B.i_a];
            smo_B.y[smo_B.i_a] = smo_B.a_idx_1;
          }
        }
      } else {
        smo_B.inner = S->size[1] - 1;
        for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
          smo_B.y[smo_B.i_a] = 0.0;
        }

        for (smo_B.b_k_b = 0; smo_B.b_k_b <= smo_B.inner; smo_B.b_k_b++) {
          smo_B.aoffset = smo_B.b_k_b * 6 - 1;
          for (smo_B.c_i = 0; smo_B.c_i < 6; smo_B.c_i++) {
            smo_B.a_idx_1 = S->data[(smo_B.aoffset + smo_B.c_i) + 1] *
              qddoti->data[smo_B.b_k_b] + smo_B.y[smo_B.c_i];
            smo_B.y[smo_B.c_i] = smo_B.a_idx_1;
          }
        }
      }

      smo_B.R_j[0] = 0.0;
      smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + 2;
      smo_B.R_j[3] = -vB->data[smo_B.p_tmp];
      smo_B.i_a = 6 * smo_B.unnamed_idx_1 + 1;
      smo_B.R_j[6] = vB->data[smo_B.i_a];
      smo_B.R_j[1] = vB->data[smo_B.p_tmp];
      smo_B.R_j[4] = 0.0;
      smo_B.R_j[7] = -vB->data[6 * smo_B.unnamed_idx_1];
      smo_B.R_j[2] = -vB->data[smo_B.i_a];
      smo_B.R_j[5] = vB->data[6 * smo_B.unnamed_idx_1];
      smo_B.R_j[8] = 0.0;
      smo_B.b_I[3] = 0.0;
      smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + 5;
      smo_B.b_I[9] = -vB->data[smo_B.p_tmp];
      smo_B.i_a = 6 * smo_B.unnamed_idx_1 + 4;
      smo_B.b_I[15] = vB->data[smo_B.i_a];
      smo_B.b_I[4] = vB->data[smo_B.p_tmp];
      smo_B.b_I[10] = 0.0;
      smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + 3;
      smo_B.b_I[16] = -vB->data[smo_B.p_tmp];
      smo_B.b_I[5] = -vB->data[smo_B.i_a];
      smo_B.b_I[11] = vB->data[smo_B.p_tmp];
      smo_B.b_I[17] = 0.0;
      for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
        smo_B.a_idx_1 = smo_B.R_j[3 * smo_B.i_a];
        smo_B.b_I[6 * smo_B.i_a] = smo_B.a_idx_1;
        smo_B.p_tmp = 6 * (smo_B.i_a + 3);
        smo_B.b_I[smo_B.p_tmp] = 0.0;
        smo_B.b_I[smo_B.p_tmp + 3] = smo_B.a_idx_1;
        smo_B.a_idx_1 = smo_B.R_j[3 * smo_B.i_a + 1];
        smo_B.b_I[6 * smo_B.i_a + 1] = smo_B.a_idx_1;
        smo_B.b_I[smo_B.p_tmp + 1] = 0.0;
        smo_B.b_I[smo_B.p_tmp + 4] = smo_B.a_idx_1;
        smo_B.a_idx_1 = smo_B.R_j[3 * smo_B.i_a + 2];
        smo_B.b_I[6 * smo_B.i_a + 2] = smo_B.a_idx_1;
        smo_B.b_I[smo_B.p_tmp + 2] = 0.0;
        smo_B.b_I[smo_B.p_tmp + 5] = smo_B.a_idx_1;
      }

      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.a_idx_1 = 0.0;
        for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
          smo_B.a_idx_1 += aB->data[(smo_B.m - 1) * 6 + smo_B.aoffset] * X->
            data[smo_B.unnamed_idx_1].f1[6 * smo_B.aoffset + smo_B.i_a];
        }

        smo_B.vJ[smo_B.i_a] = smo_B.a_idx_1 + smo_B.y[smo_B.i_a];
      }

      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.y[smo_B.i_a] = 0.0;
        for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
          smo_B.a_idx_1 = smo_B.b_I[6 * smo_B.aoffset + smo_B.i_a] * vJ->data[6 *
            smo_B.unnamed_idx_1 + smo_B.aoffset] + smo_B.y[smo_B.i_a];
          smo_B.y[smo_B.i_a] = smo_B.a_idx_1;
        }

        aB->data[smo_B.i_a + 6 * smo_B.unnamed_idx_1] = smo_B.vJ[smo_B.i_a] +
          smo_B.y[smo_B.i_a];
      }

      smo_B.R_d[0] = 0.0;
      smo_B.R_d[3] = -smo_B.T[14];
      smo_B.R_d[6] = smo_B.T[13];
      smo_B.R_d[1] = smo_B.T[14];
      smo_B.R_d[4] = 0.0;
      smo_B.R_d[7] = -smo_B.T[12];
      smo_B.R_d[2] = -smo_B.T[13];
      smo_B.R_d[5] = smo_B.T[12];
      smo_B.R_d[8] = 0.0;
      for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
        for (smo_B.aoffset = 0; smo_B.aoffset < 3; smo_B.aoffset++) {
          smo_B.inner = smo_B.i_a + 3 * smo_B.aoffset;
          smo_B.dv4[smo_B.inner] = 0.0;
          smo_B.p_tmp = smo_B.aoffset << 2;
          smo_B.dv4[smo_B.inner] += smo_B.T[smo_B.p_tmp] * smo_B.R_d[smo_B.i_a];
          smo_B.dv4[smo_B.inner] += smo_B.T[smo_B.p_tmp + 1] *
            smo_B.R_d[smo_B.i_a + 3];
          smo_B.dv4[smo_B.inner] += smo_B.T[smo_B.p_tmp + 2] *
            smo_B.R_d[smo_B.i_a + 6];
          smo_B.b_I[smo_B.aoffset + 6 * smo_B.i_a] = smo_B.T[(smo_B.i_a << 2) +
            smo_B.aoffset];
          smo_B.b_I[smo_B.aoffset + 6 * (smo_B.i_a + 3)] = 0.0;
        }
      }

      for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
        smo_B.b_I[6 * smo_B.i_a + 3] = smo_B.dv4[3 * smo_B.i_a];
        smo_B.p_tmp = smo_B.i_a << 2;
        smo_B.inner = 6 * (smo_B.i_a + 3);
        smo_B.b_I[smo_B.inner + 3] = smo_B.T[smo_B.p_tmp];
        smo_B.b_I[6 * smo_B.i_a + 4] = smo_B.dv4[3 * smo_B.i_a + 1];
        smo_B.b_I[smo_B.inner + 4] = smo_B.T[smo_B.p_tmp + 1];
        smo_B.b_I[6 * smo_B.i_a + 5] = smo_B.dv4[3 * smo_B.i_a + 2];
        smo_B.b_I[smo_B.inner + 5] = smo_B.T[smo_B.p_tmp + 2];
      }

      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
          smo_B.p_tmp = smo_B.i_a + 6 * smo_B.aoffset;
          smo_B.Xtree[smo_B.p_tmp] = 0.0;
          for (smo_B.inner = 0; smo_B.inner < 6; smo_B.inner++) {
            smo_B.Xtree[smo_B.p_tmp] += Xtree->data[static_cast<int32_T>
              (smo_B.a_idx_0) - 1].f1[6 * smo_B.inner + smo_B.i_a] * smo_B.b_I[6
              * smo_B.aoffset + smo_B.inner];
          }
        }
      }

      for (smo_B.i_a = 0; smo_B.i_a < 36; smo_B.i_a++) {
        Xtree->data[smo_B.unnamed_idx_1].f1[smo_B.i_a] = smo_B.Xtree[smo_B.i_a];
      }
    } else {
      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.aoffset = 6 * smo_B.unnamed_idx_1 + smo_B.i_a;
        vB->data[smo_B.aoffset] = vJ->data[smo_B.aoffset];
      }

      if ((S->size[1] == 1) || (qddoti->size[0] == 1)) {
        smo_B.b_k_b = S->size[1];
        for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
          smo_B.y[smo_B.i_a] = 0.0;
          for (smo_B.aoffset = 0; smo_B.aoffset < smo_B.b_k_b; smo_B.aoffset++)
          {
            smo_B.a_idx_1 = S->data[6 * smo_B.aoffset + smo_B.i_a] *
              qddoti->data[smo_B.aoffset] + smo_B.y[smo_B.i_a];
            smo_B.y[smo_B.i_a] = smo_B.a_idx_1;
          }
        }
      } else {
        smo_B.inner = S->size[1] - 1;
        for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
          smo_B.y[smo_B.i_a] = 0.0;
        }

        for (smo_B.b_k_b = 0; smo_B.b_k_b <= smo_B.inner; smo_B.b_k_b++) {
          smo_B.aoffset = smo_B.b_k_b * 6 - 1;
          for (smo_B.c_i = 0; smo_B.c_i < 6; smo_B.c_i++) {
            smo_B.a_idx_1 = S->data[(smo_B.aoffset + smo_B.c_i) + 1] *
              qddoti->data[smo_B.b_k_b] + smo_B.y[smo_B.c_i];
            smo_B.y[smo_B.c_i] = smo_B.a_idx_1;
          }
        }
      }

      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.a_idx_1 = 0.0;
        for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
          smo_B.a_idx_1 += X->data[smo_B.unnamed_idx_1].f1[6 * smo_B.aoffset +
            smo_B.i_a] * smo_B.a0[smo_B.aoffset];
        }

        aB->data[smo_B.i_a + 6 * smo_B.unnamed_idx_1] = smo_B.a_idx_1 +
          smo_B.y[smo_B.i_a];
      }

      smo_B.R_d[0] = 0.0;
      smo_B.R_d[3] = -smo_B.T[14];
      smo_B.R_d[6] = smo_B.T[13];
      smo_B.R_d[1] = smo_B.T[14];
      smo_B.R_d[4] = 0.0;
      smo_B.R_d[7] = -smo_B.T[12];
      smo_B.R_d[2] = -smo_B.T[13];
      smo_B.R_d[5] = smo_B.T[12];
      smo_B.R_d[8] = 0.0;
      for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
        for (smo_B.aoffset = 0; smo_B.aoffset < 3; smo_B.aoffset++) {
          smo_B.inner = smo_B.i_a + 3 * smo_B.aoffset;
          smo_B.dv4[smo_B.inner] = 0.0;
          smo_B.p_tmp = smo_B.aoffset << 2;
          smo_B.dv4[smo_B.inner] += smo_B.T[smo_B.p_tmp] * smo_B.R_d[smo_B.i_a];
          smo_B.dv4[smo_B.inner] += smo_B.T[smo_B.p_tmp + 1] *
            smo_B.R_d[smo_B.i_a + 3];
          smo_B.dv4[smo_B.inner] += smo_B.T[smo_B.p_tmp + 2] *
            smo_B.R_d[smo_B.i_a + 6];
          Xtree->data[smo_B.unnamed_idx_1].f1[smo_B.aoffset + 6 * smo_B.i_a] =
            smo_B.T[(smo_B.i_a << 2) + smo_B.aoffset];
          Xtree->data[smo_B.unnamed_idx_1].f1[smo_B.aoffset + 6 * (smo_B.i_a + 3)]
            = 0.0;
        }
      }

      for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
        Xtree->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a + 3] = smo_B.dv4[3 *
          smo_B.i_a];
        smo_B.aoffset = smo_B.i_a << 2;
        smo_B.inner = 6 * (smo_B.i_a + 3);
        Xtree->data[smo_B.unnamed_idx_1].f1[smo_B.inner + 3] =
          smo_B.T[smo_B.aoffset];
        Xtree->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a + 4] = smo_B.dv4[3 *
          smo_B.i_a + 1];
        Xtree->data[smo_B.unnamed_idx_1].f1[smo_B.inner + 4] =
          smo_B.T[smo_B.aoffset + 1];
        Xtree->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a + 5] = smo_B.dv4[3 *
          smo_B.i_a + 2];
        Xtree->data[smo_B.unnamed_idx_1].f1[smo_B.inner + 5] =
          smo_B.T[smo_B.aoffset + 2];
      }
    }

    for (smo_B.i_a = 0; smo_B.i_a < 36; smo_B.i_a++) {
      smo_B.b_I[smo_B.i_a] = robot->Bodies[smo_B.unnamed_idx_1]->
        SpatialInertia[smo_B.i_a];
    }

    smo_B.R_j[0] = 0.0;
    smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + 2;
    smo_B.R_j[3] = -vB->data[smo_B.p_tmp];
    smo_B.i_a = 6 * smo_B.unnamed_idx_1 + 1;
    smo_B.R_j[6] = vB->data[smo_B.i_a];
    smo_B.R_j[1] = vB->data[smo_B.p_tmp];
    smo_B.R_j[4] = 0.0;
    smo_B.R_j[7] = -vB->data[6 * smo_B.unnamed_idx_1];
    smo_B.R_j[2] = -vB->data[smo_B.i_a];
    smo_B.R_j[5] = vB->data[6 * smo_B.unnamed_idx_1];
    smo_B.R_j[8] = 0.0;
    smo_B.R[18] = 0.0;
    smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + 5;
    smo_B.R[24] = -vB->data[smo_B.p_tmp];
    smo_B.i_a = 6 * smo_B.unnamed_idx_1 + 4;
    smo_B.R[30] = vB->data[smo_B.i_a];
    smo_B.R[19] = vB->data[smo_B.p_tmp];
    smo_B.R[25] = 0.0;
    smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + 3;
    smo_B.R[31] = -vB->data[smo_B.p_tmp];
    smo_B.R[20] = -vB->data[smo_B.i_a];
    smo_B.R[26] = vB->data[smo_B.p_tmp];
    smo_B.R[32] = 0.0;
    for (smo_B.i_a = 0; smo_B.i_a < 3; smo_B.i_a++) {
      smo_B.a_idx_1 = smo_B.R_j[3 * smo_B.i_a];
      smo_B.R[6 * smo_B.i_a] = smo_B.a_idx_1;
      smo_B.R[6 * smo_B.i_a + 3] = 0.0;
      smo_B.p_tmp = 6 * (smo_B.i_a + 3);
      smo_B.R[smo_B.p_tmp + 3] = smo_B.a_idx_1;
      smo_B.a_idx_1 = smo_B.R_j[3 * smo_B.i_a + 1];
      smo_B.R[6 * smo_B.i_a + 1] = smo_B.a_idx_1;
      smo_B.R[6 * smo_B.i_a + 4] = 0.0;
      smo_B.R[smo_B.p_tmp + 4] = smo_B.a_idx_1;
      smo_B.a_idx_1 = smo_B.R_j[3 * smo_B.i_a + 2];
      smo_B.R[6 * smo_B.i_a + 2] = smo_B.a_idx_1;
      smo_B.R[6 * smo_B.i_a + 5] = 0.0;
      smo_B.R[smo_B.p_tmp + 5] = smo_B.a_idx_1;
    }

    for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
      smo_B.b_I_e[smo_B.i_a] = 0.0;
      smo_B.b_I_b[smo_B.i_a] = 0.0;
      for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
        smo_B.a_idx_0 = smo_B.b_I[6 * smo_B.aoffset + smo_B.i_a];
        smo_B.p_tmp = 6 * smo_B.unnamed_idx_1 + smo_B.aoffset;
        smo_B.a_idx_1 = vB->data[smo_B.p_tmp] * smo_B.a_idx_0 +
          smo_B.b_I_e[smo_B.i_a];
        smo_B.a_idx_0 = aB->data[smo_B.p_tmp] * smo_B.a_idx_0 +
          smo_B.b_I_b[smo_B.i_a];
        smo_B.b_I_e[smo_B.i_a] = smo_B.a_idx_1;
        smo_B.b_I_b[smo_B.i_a] = smo_B.a_idx_0;
      }
    }

    for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
      smo_B.R_jz[smo_B.i_a] = 0.0;
      smo_B.a_idx_1 = 0.0;
      for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
        smo_B.a_idx_1 += Xtree->data[smo_B.unnamed_idx_1].f1[6 * smo_B.i_a +
          smo_B.aoffset] * fext[6 * smo_B.unnamed_idx_1 + smo_B.aoffset];
        smo_B.R_jz[smo_B.i_a] += smo_B.R[6 * smo_B.aoffset + smo_B.i_a] *
          smo_B.b_I_e[smo_B.aoffset];
      }

      f->data[smo_B.i_a + 6 * smo_B.unnamed_idx_1] = (smo_B.b_I_b[smo_B.i_a] +
        smo_B.R_jz[smo_B.i_a]) - smo_B.a_idx_1;
    }
  }

  smo_emxFree_real_T(&aB);
  smo_emxFree_real_T(&vB);
  smo_emxFree_real_T(&vJ);
  smo_emxFree_f_cell_wrap(&Xtree);
  smo_B.loop_ub_tmp = static_cast<int32_T>(((-1.0 - smo_B.nb) + 1.0) / -1.0) - 1;
  smo_emxInit_char_T(&a, 2);
  smo_emxInit_real_T(&a_0, 2);
  if (0 <= smo_B.loop_ub_tmp) {
    for (smo_B.i_a = 0; smo_B.i_a < 5; smo_B.i_a++) {
      smo_B.b_k[smo_B.i_a] = tmp[smo_B.i_a];
    }
  }

  for (smo_B.p_tmp = 0; smo_B.p_tmp <= smo_B.loop_ub_tmp; smo_B.p_tmp++) {
    smo_B.a_idx_0 = smo_B.nb + -static_cast<real_T>(smo_B.p_tmp);
    smo_B.inner = static_cast<int32_T>(smo_B.a_idx_0);
    smo_B.o_tmp = smo_B.inner - 1;
    obj = robot->Bodies[smo_B.o_tmp];
    smo_B.i_a = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->JointInternal.Type->size[1];
    smo_emxEnsureCapacity_char_T(a, smo_B.i_a);
    smo_B.b_k_b = obj->JointInternal.Type->size[0] * obj->
      JointInternal.Type->size[1] - 1;
    for (smo_B.i_a = 0; smo_B.i_a <= smo_B.b_k_b; smo_B.i_a++) {
      a->data[smo_B.i_a] = obj->JointInternal.Type->data[smo_B.i_a];
    }

    smo_B.b_bool = false;
    if (a->size[1] == 5) {
      smo_B.i_a = 1;
      do {
        exitg1 = 0;
        if (smo_B.i_a - 1 < 5) {
          smo_B.unnamed_idx_1 = smo_B.i_a - 1;
          if (a->data[smo_B.unnamed_idx_1] != smo_B.b_k[smo_B.unnamed_idx_1]) {
            exitg1 = 1;
          } else {
            smo_B.i_a++;
          }
        } else {
          smo_B.b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!smo_B.b_bool) {
      obj = robot->Bodies[smo_B.o_tmp];
      smo_B.i_a = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      smo_emxEnsureCapacity_real_T(S, smo_B.i_a);
      smo_B.b_k_b = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (smo_B.i_a = 0; smo_B.i_a <= smo_B.b_k_b; smo_B.i_a++) {
        S->data[smo_B.i_a] = obj->JointInternal.MotionSubspace->data[smo_B.i_a];
      }

      smo_B.i_a = a_0->size[0] * a_0->size[1];
      a_0->size[0] = S->size[1];
      a_0->size[1] = 6;
      smo_emxEnsureCapacity_real_T(a_0, smo_B.i_a);
      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.b_k_b = S->size[1];
        for (smo_B.aoffset = 0; smo_B.aoffset < smo_B.b_k_b; smo_B.aoffset++) {
          a_0->data[smo_B.aoffset + a_0->size[0] * smo_B.i_a] = S->data[6 *
            smo_B.aoffset + smo_B.i_a];
        }
      }

      smo_B.m = a_0->size[0] - 1;
      smo_B.i_a = qddoti->size[0];
      qddoti->size[0] = a_0->size[0];
      smo_emxEnsureCapacity_real_T(qddoti, smo_B.i_a);
      for (smo_B.unnamed_idx_1 = 0; smo_B.unnamed_idx_1 <= smo_B.m;
           smo_B.unnamed_idx_1++) {
        qddoti->data[smo_B.unnamed_idx_1] = 0.0;
      }

      for (smo_B.b_k_b = 0; smo_B.b_k_b < 6; smo_B.b_k_b++) {
        smo_B.aoffset = (smo_B.m + 1) * smo_B.b_k_b - 1;
        for (smo_B.c_i = 0; smo_B.c_i <= smo_B.m; smo_B.c_i++) {
          qddoti->data[smo_B.c_i] += f->data[(static_cast<int32_T>(smo_B.a_idx_0)
            - 1) * 6 + smo_B.b_k_b] * a_0->data[(smo_B.aoffset + smo_B.c_i) + 1];
        }
      }

      smo_B.b_idx_0 = robot->VelocityDoFMap[smo_B.inner - 1];
      smo_B.b_idx_1 = robot->VelocityDoFMap[smo_B.inner + 9];
      if (smo_B.b_idx_0 > smo_B.b_idx_1) {
        smo_B.m = 0;
        smo_B.i_a = 0;
      } else {
        smo_B.m = static_cast<int32_T>(smo_B.b_idx_0) - 1;
        smo_B.i_a = static_cast<int32_T>(smo_B.b_idx_1);
      }

      smo_B.unnamed_idx_1 = smo_B.i_a - smo_B.m;
      for (smo_B.i_a = 0; smo_B.i_a < smo_B.unnamed_idx_1; smo_B.i_a++) {
        tau[smo_B.m + smo_B.i_a] = qddoti->data[smo_B.i_a];
      }
    }

    smo_B.a_idx_0 = robot->Bodies[smo_B.o_tmp]->ParentIndex;
    if (smo_B.a_idx_0 > 0.0) {
      smo_B.m = static_cast<int32_T>(smo_B.a_idx_0);
      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        smo_B.a_idx_1 = 0.0;
        for (smo_B.aoffset = 0; smo_B.aoffset < 6; smo_B.aoffset++) {
          smo_B.a_idx_1 += f->data[(smo_B.inner - 1) * 6 + smo_B.aoffset] *
            X->data[smo_B.o_tmp].f1[6 * smo_B.i_a + smo_B.aoffset];
        }

        smo_B.a0[smo_B.i_a] = f->data[(smo_B.m - 1) * 6 + smo_B.i_a] +
          smo_B.a_idx_1;
      }

      for (smo_B.i_a = 0; smo_B.i_a < 6; smo_B.i_a++) {
        f->data[smo_B.i_a + 6 * (smo_B.m - 1)] = smo_B.a0[smo_B.i_a];
      }
    }
  }

  smo_emxFree_real_T(&a_0);
  smo_emxFree_char_T(&a);
  smo_emxFree_real_T(&qddoti);
  smo_emxFree_real_T(&S);
  smo_emxFree_real_T(&f);
  smo_emxFree_f_cell_wrap(&X);
}

real_T rt_atan2d_snf(real_T u0, real_T u1)
{
  real_T y;
  int32_T u0_0;
  int32_T u1_0;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = (rtNaN);
  } else if (rtIsInf(u0) && rtIsInf(u1)) {
    if (u0 > 0.0) {
      u0_0 = 1;
    } else {
      u0_0 = -1;
    }

    if (u1 > 0.0) {
      u1_0 = 1;
    } else {
      u1_0 = -1;
    }

    y = atan2(static_cast<real_T>(u0_0), static_cast<real_T>(u1_0));
  } else if (u1 == 0.0) {
    if (u0 > 0.0) {
      y = RT_PI / 2.0;
    } else if (u0 < 0.0) {
      y = -(RT_PI / 2.0);
    } else {
      y = 0.0;
    }
  } else {
    y = atan2(u0, u1);
  }

  return y;
}

static void smo_atan2(const real_T y_data[], const int32_T y_size[3], const
                      real_T x_data[], const int32_T x_size[3], real_T r_data[],
                      int32_T r_size[3])
{
  int32_T csz_idx_2;
  if (y_size[2] <= x_size[2]) {
    csz_idx_2 = y_size[2];
  } else {
    csz_idx_2 = 0;
  }

  r_size[2] = csz_idx_2;
  r_size[0] = 1;
  r_size[1] = 1;
  if (0 <= csz_idx_2 - 1) {
    r_data[0] = rt_atan2d_snf(y_data[0], x_data[0]);
  }
}

static void matlabCodegenHandle_matla_a43q4(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void sm_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_smo_a_T *pStruct)
{
  smo_emxFree_char_T(&pStruct->Type);
  smo_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_i_robotics_manip_(i_robotics_manip_internal_R_a_T
  *pStruct)
{
  sm_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_k_robotics_manip_(k_robotics_manip_internal_R_a_T
  *pStruct)
{
  emxFreeStruct_i_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_b_a_T
  *pStruct)
{
  emxFreeStruct_k_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_j_robotics_manip_(j_robotics_manip_internal_R_a_T
  *pStruct)
{
  sm_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void s_emxFreeStruct_rigidBodyJoint1(rigidBodyJoint_smo_T *pStruct)
{
  smo_emxFree_char_T(&pStruct->Type);
}

static void emxFreeStruct_i_robotics_mani_a(i_robotics_manip_internal_Rig_T
  *pStruct)
{
  smo_emxFree_char_T(&pStruct->NameInternal);
  s_emxFreeStruct_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxFreeStruct_k_robotics_mani_a(k_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_i_robotics_mani_a(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmani_a(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_k_robotics_mani_a(&pStruct->TreeInternal);
}

static void emxFreeStruct_j_robotics_mani_a(j_robotics_manip_internal_Rig_T
  *pStruct)
{
  smo_emxFree_char_T(&pStruct->NameInternal);
  s_emxFreeStruct_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxFreeStruct_k_robotics_man_a4(k_robotics_manip_internal__a4_T
  *pStruct)
{
  emxFreeStruct_i_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slman_a4(robotics_slmanip_internal__a4_T
  *pStruct)
{
  emxFreeStruct_k_robotics_man_a4(&pStruct->TreeInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabC_a43(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void sm_emxInitStruct_rigidBodyJoint(rigidBodyJoint_smo_a_T *pStruct)
{
  smo_emxInit_char_T(&pStruct->Type, 2);
  smo_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_i_robotics_manip_(i_robotics_manip_internal_R_a_T
  *pStruct)
{
  sm_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_k_robotics_manip_(k_robotics_manip_internal_R_a_T
  *pStruct)
{
  emxInitStruct_i_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_b_a_T
  *pStruct)
{
  emxInitStruct_k_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_j_robotics_manip_(j_robotics_manip_internal_R_a_T
  *pStruct)
{
  sm_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static j_robotics_manip_internal_R_a_T *smo_RigidBody_RigidBody_a43q4ba
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *sm_RigidBody_RigidBody_a43q4bat
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = -1.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *s_RigidBody_RigidBody_a43q4bat5
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *RigidBody_RigidBody_a43q4bat52
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *RigidBody_RigidBody_a43q4bat52o
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *RigidBody_RigidBod_a43q4bat52o3
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *RigidBody_RigidBo_a43q4bat52o31
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *RigidBody_RigidB_a43q4bat52o312
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *RigidBody_Rigid_a43q4bat52o312z
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_R_a_T *s_RigidBody_Rigid_n
  (j_robotics_manip_internal_R_a_T *obj)
{
  j_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static i_robotics_manip_internal_R_a_T *s_RigidBody_Rigid_b
  (i_robotics_manip_internal_R_a_T *obj)
{
  i_robotics_manip_internal_R_a_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
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
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  smo_emxFree_char_T(&switch_expression);
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
  smo_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = msubspace_data[b_kstr];
  }

  return b_obj;
}

static k_robotics_manip_internal_R_a_T *s_RigidBodyTree_RigidBodyTree_a
  (k_robotics_manip_internal_R_a_T *obj, j_robotics_manip_internal_R_a_T *iobj_0,
   j_robotics_manip_internal_R_a_T *iobj_1, j_robotics_manip_internal_R_a_T
   *iobj_2, j_robotics_manip_internal_R_a_T *iobj_3,
   j_robotics_manip_internal_R_a_T *iobj_4, j_robotics_manip_internal_R_a_T
   *iobj_5, j_robotics_manip_internal_R_a_T *iobj_6,
   j_robotics_manip_internal_R_a_T *iobj_7, j_robotics_manip_internal_R_a_T
   *iobj_8, j_robotics_manip_internal_R_a_T *iobj_9)
{
  k_robotics_manip_internal_R_a_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 1, 2, 3, 4, 5, 6,
    7, -1, -1, -1 };

  b_obj = obj;
  obj->Bodies[0] = smo_RigidBody_RigidBody_a43q4ba(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = sm_RigidBody_RigidBody_a43q4bat(iobj_1);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = s_RigidBody_RigidBody_a43q4bat5(iobj_2);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = RigidBody_RigidBody_a43q4bat52(iobj_3);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = RigidBody_RigidBody_a43q4bat52o(iobj_4);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = RigidBody_RigidBod_a43q4bat52o3(iobj_5);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = RigidBody_RigidBo_a43q4bat52o31(iobj_6);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = RigidBody_RigidB_a43q4bat52o312(iobj_7);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = RigidBody_Rigid_a43q4bat52o312z(iobj_8);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = s_RigidBody_Rigid_n(iobj_9);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->VelocityNumber = 7.0;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  s_RigidBody_Rigid_b(&obj->Base);
  return b_obj;
}

static void s_emxInitStruct_rigidBodyJoint1(rigidBodyJoint_smo_T *pStruct)
{
  smo_emxInit_char_T(&pStruct->Type, 2);
}

static void emxInitStruct_i_robotics_mani_a(i_robotics_manip_internal_Rig_T
  *pStruct)
{
  smo_emxInit_char_T(&pStruct->NameInternal, 2);
  s_emxInitStruct_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxInitStruct_k_robotics_mani_a(k_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_i_robotics_mani_a(&pStruct->Base);
}

static void emxInitStruct_robotics_slmani_a(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_k_robotics_mani_a(&pStruct->TreeInternal);
}

static void emxInitStruct_j_robotics_mani_a(j_robotics_manip_internal_Rig_T
  *pStruct)
{
  smo_emxInit_char_T(&pStruct->NameInternal, 2);
  s_emxInitStruct_rigidBodyJoint1(&pStruct->JointInternal);
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '1' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.055, 0.09, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 0.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '2' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0603, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 1.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = -1.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a4
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '3' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 2.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '4' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.27, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 3.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43q
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '5' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 4.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43q4
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '6' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.2126, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 5.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *smo_RigidBody_RigidBody_a43q4b
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '7' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 14;
  smo_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 6.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  smo_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1]
    - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj->JointInternal.Type->data[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    b[b_kstr] = tmp_0[b_kstr];
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
      b_0[b_kstr] = tmp_1[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->JointInternal.PositionNumber = 1.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->JointInternal.PositionNumber = 0.0;
    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static k_robotics_manip_internal_Rig_T *smo_RigidBodyTree_RigidBodyTree
  (k_robotics_manip_internal_Rig_T *obj, j_robotics_manip_internal_Rig_T *iobj_0,
   j_robotics_manip_internal_Rig_T *iobj_1, j_robotics_manip_internal_Rig_T
   *iobj_2, j_robotics_manip_internal_Rig_T *iobj_3,
   j_robotics_manip_internal_Rig_T *iobj_4, j_robotics_manip_internal_Rig_T
   *iobj_5, j_robotics_manip_internal_Rig_T *iobj_6,
   j_robotics_manip_internal_Rig_T *iobj_7, j_robotics_manip_internal_Rig_T
   *iobj_8, j_robotics_manip_internal_Rig_T *iobj_9)
{
  k_robotics_manip_internal_Rig_T *b_obj;
  i_robotics_manip_internal_Rig_T *obj_0;
  emxArray_char_T_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[20] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'g', 'r', 'i', 'p', '_', 'c', 'e', 'n', 't', 'e', 'r' };

  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.13, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const char_T tmp_5[18] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'g', 'r', 'i', 'p', '_', 'l', 'e', 'f', 't' };

  static const real_T tmp_6[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, -0.04, 0.0, 1.0 };

  static const char_T tmp_7[19] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'g', 'r', 'i', 'p', '_', 'r', 'i', 'g', 'h', 't' };

  static const real_T tmp_8[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.04, 0.0, 1.0 };

  static const char_T tmp_9[19] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', 's',
    '_', 'l', 'e', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  int32_T exitg1;
  b_obj = obj;
  obj->Bodies[0] = smo_RigidBody_RigidBody(iobj_0);
  obj->Bodies[1] = smo_RigidBody_RigidBody_a(iobj_1);
  obj->Bodies[2] = smo_RigidBody_RigidBody_a4(iobj_2);
  obj->Bodies[3] = smo_RigidBody_RigidBody_a43(iobj_3);
  obj->Bodies[4] = smo_RigidBody_RigidBody_a43q(iobj_4);
  obj->Bodies[5] = smo_RigidBody_RigidBody_a43q4(iobj_5);
  obj->Bodies[6] = smo_RigidBody_RigidBody_a43q4b(iobj_6);
  b_kstr = iobj_7->NameInternal->size[0] * iobj_7->NameInternal->size[1];
  iobj_7->NameInternal->size[0] = 1;
  iobj_7->NameInternal->size[1] = 20;
  smo_emxEnsureCapacity_char_T(iobj_7->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 20; b_kstr++) {
    iobj_7->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  iobj_7->ParentIndex = 7.0;
  b_kstr = iobj_7->JointInternal.Type->size[0] * iobj_7->
    JointInternal.Type->size[1];
  iobj_7->JointInternal.Type->size[0] = 1;
  iobj_7->JointInternal.Type->size[1] = 5;
  smo_emxEnsureCapacity_char_T(iobj_7->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_7->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_7->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_7->JointInternal.Type->size[0] * iobj_7->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_7->JointInternal.Type->data[b_kstr];
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

  switch (b_kstr) {
   case 0:
    iobj_7->JointInternal.PositionNumber = 1.0;
    iobj_7->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_7->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_7->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    iobj_7->JointInternal.PositionNumber = 1.0;
    iobj_7->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_7->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_7->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    iobj_7->JointInternal.PositionNumber = 0.0;
    iobj_7->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_7->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_7->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_7->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_7->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  iobj_7->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_7->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_7->JointInternal.JointAxisInternal[2] = 0.0;
  obj->Bodies[7] = iobj_7;
  b_kstr = iobj_8->NameInternal->size[0] * iobj_8->NameInternal->size[1];
  iobj_8->NameInternal->size[0] = 1;
  iobj_8->NameInternal->size[1] = 18;
  smo_emxEnsureCapacity_char_T(iobj_8->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 18; b_kstr++) {
    iobj_8->NameInternal->data[b_kstr] = tmp_5[b_kstr];
  }

  iobj_8->ParentIndex = 8.0;
  b_kstr = iobj_8->JointInternal.Type->size[0] * iobj_8->
    JointInternal.Type->size[1];
  iobj_8->JointInternal.Type->size[0] = 1;
  iobj_8->JointInternal.Type->size[1] = 5;
  smo_emxEnsureCapacity_char_T(iobj_8->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_8->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_8->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_8->JointInternal.Type->size[0] * iobj_8->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_8->JointInternal.Type->data[b_kstr];
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

  switch (b_kstr) {
   case 0:
    iobj_8->JointInternal.PositionNumber = 1.0;
    iobj_8->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_8->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_8->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    iobj_8->JointInternal.PositionNumber = 1.0;
    iobj_8->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_8->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_8->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    iobj_8->JointInternal.PositionNumber = 0.0;
    iobj_8->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_8->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_8->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_8->JointInternal.JointToParentTransform[b_kstr] = tmp_6[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_8->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  iobj_8->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_8->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_8->JointInternal.JointAxisInternal[2] = 0.0;
  obj->Bodies[8] = iobj_8;
  b_kstr = iobj_9->NameInternal->size[0] * iobj_9->NameInternal->size[1];
  iobj_9->NameInternal->size[0] = 1;
  iobj_9->NameInternal->size[1] = 19;
  smo_emxEnsureCapacity_char_T(iobj_9->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 19; b_kstr++) {
    iobj_9->NameInternal->data[b_kstr] = tmp_7[b_kstr];
  }

  iobj_9->ParentIndex = 8.0;
  b_kstr = iobj_9->JointInternal.Type->size[0] * iobj_9->
    JointInternal.Type->size[1];
  iobj_9->JointInternal.Type->size[0] = 1;
  iobj_9->JointInternal.Type->size[1] = 5;
  smo_emxEnsureCapacity_char_T(iobj_9->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_9->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_9->JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_9->JointInternal.Type->size[0] * iobj_9->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_9->JointInternal.Type->data[b_kstr];
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

  switch (b_kstr) {
   case 0:
    iobj_9->JointInternal.PositionNumber = 1.0;
    iobj_9->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_9->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_9->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    iobj_9->JointInternal.PositionNumber = 1.0;
    iobj_9->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_9->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_9->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    iobj_9->JointInternal.PositionNumber = 0.0;
    iobj_9->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_9->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_9->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_9->JointInternal.JointToParentTransform[b_kstr] = tmp_8[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_9->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  iobj_9->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_9->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_9->JointInternal.JointAxisInternal[2] = 0.0;
  obj->Bodies[9] = iobj_9;
  obj->NumBodies = 10.0;
  obj->PositionNumber = 7.0;
  obj_0 = &obj->Base;
  b_kstr = obj->Base.NameInternal->size[0] * obj->Base.NameInternal->size[1];
  obj->Base.NameInternal->size[0] = 1;
  obj->Base.NameInternal->size[1] = 19;
  smo_emxEnsureCapacity_char_T(obj->Base.NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 19; b_kstr++) {
    obj->Base.NameInternal->data[b_kstr] = tmp_9[b_kstr];
  }

  b_kstr = obj->Base.JointInternal.Type->size[0] * obj->
    Base.JointInternal.Type->size[1];
  obj->Base.JointInternal.Type->size[0] = 1;
  obj->Base.JointInternal.Type->size[1] = 5;
  smo_emxEnsureCapacity_char_T(obj->Base.JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj_0->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Base.JointInternal.Type->size[1];
  smo_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->Base.JointInternal.Type->size[0] * obj->
    Base.JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj_0->JointInternal.Type->data[b_kstr];
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

  smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    obj->Base.JointInternal.PositionNumber = 1.0;
    obj->Base.JointInternal.JointAxisInternal[0] = 0.0;
    obj->Base.JointInternal.JointAxisInternal[1] = 0.0;
    obj->Base.JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    obj->Base.JointInternal.PositionNumber = 1.0;
    obj->Base.JointInternal.JointAxisInternal[0] = 0.0;
    obj->Base.JointInternal.JointAxisInternal[1] = 0.0;
    obj->Base.JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    obj->Base.JointInternal.PositionNumber = 0.0;
    obj->Base.JointInternal.JointAxisInternal[0] = 0.0;
    obj->Base.JointInternal.JointAxisInternal[1] = 0.0;
    obj->Base.JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  return b_obj;
}

static void emxInitStruct_k_robotics_man_a4(k_robotics_manip_internal__a4_T
  *pStruct)
{
  emxInitStruct_i_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slman_a4(robotics_slmanip_internal__a4_T
  *pStruct)
{
  emxInitStruct_k_robotics_man_a4(&pStruct->TreeInternal);
}

static k_robotics_manip_internal__a4_T *RigidBodyTree_RigidBodyTree_a4
  (k_robotics_manip_internal__a4_T *obj, j_robotics_manip_internal_R_a_T *iobj_0,
   j_robotics_manip_internal_R_a_T *iobj_1, j_robotics_manip_internal_R_a_T
   *iobj_2, j_robotics_manip_internal_R_a_T *iobj_3,
   j_robotics_manip_internal_R_a_T *iobj_4, j_robotics_manip_internal_R_a_T
   *iobj_5, j_robotics_manip_internal_R_a_T *iobj_6,
   j_robotics_manip_internal_R_a_T *iobj_7, j_robotics_manip_internal_R_a_T
   *iobj_8, j_robotics_manip_internal_R_a_T *iobj_9)
{
  k_robotics_manip_internal__a4_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 1, 2, 3, 4, 5, 6,
    7, -1, -1, -1 };

  b_obj = obj;
  obj->Bodies[0] = smo_RigidBody_RigidBody_a43q4ba(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = sm_RigidBody_RigidBody_a43q4bat(iobj_1);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = s_RigidBody_RigidBody_a43q4bat5(iobj_2);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = RigidBody_RigidBody_a43q4bat52(iobj_3);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = RigidBody_RigidBody_a43q4bat52o(iobj_4);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = RigidBody_RigidBod_a43q4bat52o3(iobj_5);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = RigidBody_RigidBo_a43q4bat52o31(iobj_6);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = RigidBody_RigidB_a43q4bat52o312(iobj_7);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = RigidBody_Rigid_a43q4bat52o312z(iobj_8);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = s_RigidBody_Rigid_n(iobj_9);
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

  s_RigidBody_Rigid_b(&obj->Base);
  return b_obj;
}

// Model step function
void smo_step(void)
{
  emxArray_real_T_smo_T *b;
  robotics_slmanip_internal_blo_T *obj;
  k_robotics_manip_internal_Rig_T *obj_0;
  emxArray_e_cell_wrap_smo_T *Ttree;
  emxArray_char_T_smo_T *bname;
  j_robotics_manip_internal_Rig_T *obj_1;
  robotics_slmanip_internal__a4_T *obj_2;
  emxArray_real_T_smo_T *L;
  emxArray_real_T_smo_T *lambda;
  emxArray_real_T_smo_T *H;
  emxArray_real_T_smo_T *tmp;
  static const char_T tmp_0[19] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', 's',
    '_', 'l', 'e', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_1[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '6' };

  int32_T exitg1;
  boolean_T exitg2;
  if (rtmIsMajorTimeStep(smo_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&smo_M->solverInfo,((smo_M->Timing.clockTick0+1)*
      smo_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(smo_M)) {
    smo_M->Timing.t[0] = rtsiGetT(&smo_M->solverInfo);
  }

  smo_emxInit_real_T(&b, 2);
  if (rtmIsMajorTimeStep(smo_M) &&
      smo_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   Inport: '<S11>/In1'

    smo_SystemCore_step(&smo_B.b_varargout_1, smo_B.bias,
                        &smo_B.b_varargout_2_Data_SL_Info_Curr,
                        &smo_B.b_varargout_2_Data_SL_Info_Rece,
                        &smo_B.b_varargout_2_Layout_DataOffset,
                        smo_B.b_varargout_2_Layout_Dim,
                        &smo_B.b_varargout_2_Layout_Dim_SL_Inf,
                        &smo_B.b_varargout_2_Layout_Dim_SL_I_n);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S11>/Enable'

    if (smo_B.b_varargout_1) {
      for (smo_B.i = 0; smo_B.i < 7; smo_B.i++) {
        smo_B.In1_k.Data[smo_B.i] = smo_B.bias[smo_B.i];
      }

      smo_B.In1_k.Data_SL_Info.CurrentLength =
        smo_B.b_varargout_2_Data_SL_Info_Curr;
      smo_B.In1_k.Data_SL_Info.ReceivedLength =
        smo_B.b_varargout_2_Data_SL_Info_Rece;
      smo_B.In1_k.Layout.DataOffset = smo_B.b_varargout_2_Layout_DataOffset;
      memcpy(&smo_B.In1_k.Layout.Dim[0], &smo_B.b_varargout_2_Layout_Dim[0],
             sizeof(SL_Bus_smo_std_msgs_MultiArrayDimension) << 4U);
      smo_B.In1_k.Layout.Dim_SL_Info.CurrentLength =
        smo_B.b_varargout_2_Layout_Dim_SL_Inf;
      smo_B.In1_k.Layout.Dim_SL_Info.ReceivedLength =
        smo_B.b_varargout_2_Layout_Dim_SL_I_n;
    }

    // End of MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe'

    // MATLABSystem: '<S17>/MATLAB System'
    RigidBodyTreeDynamics_massMatri(&smo_DW.obj_h.TreeInternal, smo_B.In1_k.Data,
      b);
    for (smo_B.n_j = 0; smo_B.n_j < 49; smo_B.n_j++) {
      smo_B.MATLABSystem[smo_B.n_j] = b->data[smo_B.n_j];
    }

    // End of MATLABSystem: '<S17>/MATLAB System'
    smo_emxInit_e_cell_wrap(&Ttree, 2);
    smo_emxInit_char_T(&bname, 2);

    // MATLABSystem: '<S16>/MATLAB System'
    obj = &smo_DW.obj_o;
    obj_0 = &smo_DW.obj_o.TreeInternal;
    RigidBodyTree_forwardKinematics(&obj->TreeInternal, smo_B.In1_k.Data, Ttree);
    smo_B.bid1 = -1.0;
    smo_B.n_j = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = obj_0->Base.NameInternal->size[1];
    smo_emxEnsureCapacity_char_T(bname, smo_B.n_j);
    smo_B.loop_ub = obj_0->Base.NameInternal->size[0] * obj_0->
      Base.NameInternal->size[1] - 1;
    for (smo_B.n_j = 0; smo_B.n_j <= smo_B.loop_ub; smo_B.n_j++) {
      bname->data[smo_B.n_j] = obj_0->Base.NameInternal->data[smo_B.n_j];
    }

    for (smo_B.n_j = 0; smo_B.n_j < 19; smo_B.n_j++) {
      smo_B.b_n[smo_B.n_j] = tmp_0[smo_B.n_j];
    }

    smo_B.b_varargout_1 = false;
    if (bname->size[1] == 19) {
      smo_B.loop_ub = 1;
      do {
        exitg1 = 0;
        if (smo_B.loop_ub - 1 < 19) {
          smo_B.iend = smo_B.loop_ub - 1;
          if (bname->data[smo_B.iend] != smo_B.b_n[smo_B.iend]) {
            exitg1 = 1;
          } else {
            smo_B.loop_ub++;
          }
        } else {
          smo_B.b_varargout_1 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_varargout_1) {
      smo_B.bid1 = 0.0;
    } else {
      smo_B.vNum = obj->TreeInternal.NumBodies;
      smo_B.n_j = static_cast<int32_T>(smo_B.vNum) - 1;
      if (0 <= smo_B.n_j) {
        for (smo_B.j_e = 0; smo_B.j_e < 19; smo_B.j_e++) {
          smo_B.b_n[smo_B.j_e] = tmp_0[smo_B.j_e];
        }
      }

      smo_B.i = 0;
      exitg2 = false;
      while ((!exitg2) && (smo_B.i <= smo_B.n_j)) {
        obj_1 = obj_0->Bodies[smo_B.i];
        smo_B.j_e = bname->size[0] * bname->size[1];
        bname->size[0] = 1;
        bname->size[1] = obj_1->NameInternal->size[1];
        smo_emxEnsureCapacity_char_T(bname, smo_B.j_e);
        smo_B.loop_ub = obj_1->NameInternal->size[0] * obj_1->NameInternal->
          size[1] - 1;
        for (smo_B.j_e = 0; smo_B.j_e <= smo_B.loop_ub; smo_B.j_e++) {
          bname->data[smo_B.j_e] = obj_1->NameInternal->data[smo_B.j_e];
        }

        smo_B.b_varargout_1 = false;
        if (bname->size[1] == 19) {
          smo_B.loop_ub = 1;
          do {
            exitg1 = 0;
            if (smo_B.loop_ub - 1 < 19) {
              smo_B.iend = smo_B.loop_ub - 1;
              if (bname->data[smo_B.iend] != smo_B.b_n[smo_B.iend]) {
                exitg1 = 1;
              } else {
                smo_B.loop_ub++;
              }
            } else {
              smo_B.b_varargout_1 = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (smo_B.b_varargout_1) {
          smo_B.bid1 = static_cast<real_T>(smo_B.i) + 1.0;
          exitg2 = true;
        } else {
          smo_B.i++;
        }
      }
    }

    if (smo_B.bid1 == 0.0) {
      memset(&smo_B.T1[0], 0, sizeof(real_T) << 4U);
      smo_B.T1[0] = 1.0;
      smo_B.T1[5] = 1.0;
      smo_B.T1[10] = 1.0;
      smo_B.T1[15] = 1.0;
    } else {
      for (smo_B.n_j = 0; smo_B.n_j < 16; smo_B.n_j++) {
        smo_B.T1[smo_B.n_j] = Ttree->data[static_cast<int32_T>(smo_B.bid1) - 1].
          f1[smo_B.n_j];
      }
    }

    smo_B.bid1 = -1.0;
    smo_B.n_j = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = obj_0->Base.NameInternal->size[1];
    smo_emxEnsureCapacity_char_T(bname, smo_B.n_j);
    smo_B.loop_ub = obj_0->Base.NameInternal->size[0] * obj_0->
      Base.NameInternal->size[1] - 1;
    for (smo_B.n_j = 0; smo_B.n_j <= smo_B.loop_ub; smo_B.n_j++) {
      bname->data[smo_B.n_j] = obj_0->Base.NameInternal->data[smo_B.n_j];
    }

    for (smo_B.n_j = 0; smo_B.n_j < 14; smo_B.n_j++) {
      smo_B.b_m[smo_B.n_j] = tmp_1[smo_B.n_j];
    }

    smo_B.b_varargout_1 = false;
    if (bname->size[1] == 14) {
      smo_B.loop_ub = 1;
      do {
        exitg1 = 0;
        if (smo_B.loop_ub - 1 < 14) {
          smo_B.iend = smo_B.loop_ub - 1;
          if (bname->data[smo_B.iend] != smo_B.b_m[smo_B.iend]) {
            exitg1 = 1;
          } else {
            smo_B.loop_ub++;
          }
        } else {
          smo_B.b_varargout_1 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (smo_B.b_varargout_1) {
      smo_B.bid1 = 0.0;
    } else {
      smo_B.vNum = obj->TreeInternal.NumBodies;
      smo_B.n_j = static_cast<int32_T>(smo_B.vNum) - 1;
      if (0 <= smo_B.n_j) {
        for (smo_B.j_e = 0; smo_B.j_e < 14; smo_B.j_e++) {
          smo_B.b_m[smo_B.j_e] = tmp_1[smo_B.j_e];
        }
      }

      smo_B.i = 0;
      exitg2 = false;
      while ((!exitg2) && (smo_B.i <= smo_B.n_j)) {
        obj_1 = obj_0->Bodies[smo_B.i];
        smo_B.j_e = bname->size[0] * bname->size[1];
        bname->size[0] = 1;
        bname->size[1] = obj_1->NameInternal->size[1];
        smo_emxEnsureCapacity_char_T(bname, smo_B.j_e);
        smo_B.loop_ub = obj_1->NameInternal->size[0] * obj_1->NameInternal->
          size[1] - 1;
        for (smo_B.j_e = 0; smo_B.j_e <= smo_B.loop_ub; smo_B.j_e++) {
          bname->data[smo_B.j_e] = obj_1->NameInternal->data[smo_B.j_e];
        }

        smo_B.b_varargout_1 = false;
        if (bname->size[1] == 14) {
          smo_B.loop_ub = 1;
          do {
            exitg1 = 0;
            if (smo_B.loop_ub - 1 < 14) {
              smo_B.iend = smo_B.loop_ub - 1;
              if (bname->data[smo_B.iend] != smo_B.b_m[smo_B.iend]) {
                exitg1 = 1;
              } else {
                smo_B.loop_ub++;
              }
            } else {
              smo_B.b_varargout_1 = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (smo_B.b_varargout_1) {
          smo_B.bid1 = static_cast<real_T>(smo_B.i) + 1.0;
          exitg2 = true;
        } else {
          smo_B.i++;
        }
      }
    }

    smo_emxFree_char_T(&bname);

    // MATLABSystem: '<S16>/MATLAB System'
    if (smo_B.bid1 == 0.0) {
      memset(&smo_B.T2[0], 0, sizeof(real_T) << 4U);
      smo_B.T2[0] = 1.0;
      smo_B.T2[5] = 1.0;
      smo_B.T2[10] = 1.0;
      smo_B.T2[15] = 1.0;
    } else {
      for (smo_B.n_j = 0; smo_B.n_j < 16; smo_B.n_j++) {
        smo_B.T2[smo_B.n_j] = Ttree->data[static_cast<int32_T>(smo_B.bid1) - 1].
          f1[smo_B.n_j];
      }
    }

    smo_emxFree_e_cell_wrap(&Ttree);

    // MATLABSystem: '<S16>/MATLAB System'
    for (smo_B.n_j = 0; smo_B.n_j < 3; smo_B.n_j++) {
      smo_B.R_p[3 * smo_B.n_j] = smo_B.T2[smo_B.n_j];
      smo_B.R_p[3 * smo_B.n_j + 1] = smo_B.T2[smo_B.n_j + 4];
      smo_B.R_p[3 * smo_B.n_j + 2] = smo_B.T2[smo_B.n_j + 8];
    }

    for (smo_B.n_j = 0; smo_B.n_j < 9; smo_B.n_j++) {
      smo_B.R_l[smo_B.n_j] = -smo_B.R_p[smo_B.n_j];
    }

    for (smo_B.n_j = 0; smo_B.n_j < 3; smo_B.n_j++) {
      smo_B.loop_ub = smo_B.n_j << 2;
      smo_B.R_k[smo_B.loop_ub] = smo_B.R_p[3 * smo_B.n_j];
      smo_B.R_k[smo_B.loop_ub + 1] = smo_B.R_p[3 * smo_B.n_j + 1];
      smo_B.R_k[smo_B.loop_ub + 2] = smo_B.R_p[3 * smo_B.n_j + 2];
      smo_B.R_k[smo_B.n_j + 12] = smo_B.R_l[smo_B.n_j + 6] * smo_B.T2[14] +
        (smo_B.R_l[smo_B.n_j + 3] * smo_B.T2[13] + smo_B.R_l[smo_B.n_j] *
         smo_B.T2[12]);
    }

    smo_B.R_k[3] = 0.0;
    smo_B.R_k[7] = 0.0;
    smo_B.R_k[11] = 0.0;
    smo_B.R_k[15] = 1.0;
    for (smo_B.n_j = 0; smo_B.n_j < 4; smo_B.n_j++) {
      for (smo_B.j_e = 0; smo_B.j_e < 4; smo_B.j_e++) {
        smo_B.loop_ub = smo_B.n_j << 2;
        smo_B.i = smo_B.j_e + smo_B.loop_ub;
        smo_B.T2[smo_B.i] = 0.0;
        smo_B.T2[smo_B.i] += smo_B.T1[smo_B.loop_ub] * smo_B.R_k[smo_B.j_e];
        smo_B.T2[smo_B.i] += smo_B.T1[smo_B.loop_ub + 1] * smo_B.R_k[smo_B.j_e +
          4];
        smo_B.T2[smo_B.i] += smo_B.T1[smo_B.loop_ub + 2] * smo_B.R_k[smo_B.j_e +
          8];
        smo_B.T2[smo_B.i] += smo_B.T1[smo_B.loop_ub + 3] * smo_B.R_k[smo_B.j_e +
          12];
      }
    }

    // Outputs for Atomic SubSystem: '<S3>/Subscribe1'
    // MATLABSystem: '<S10>/SourceBlock' incorporates:
    //   Inport: '<S12>/In1'

    smo_SystemCore_step_a(&smo_B.b_varargout_1, smo_B.bias,
                          &smo_B.b_varargout_2_Data_SL_Info_Curr,
                          &smo_B.b_varargout_2_Data_SL_Info_Rece,
                          &smo_B.b_varargout_2_Layout_DataOffset,
                          smo_B.b_varargout_2_Layout_Dim,
                          &smo_B.b_varargout_2_Layout_Dim_SL_Inf,
                          &smo_B.b_varargout_2_Layout_Dim_SL_I_n);

    // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S12>/Enable'

    if (smo_B.b_varargout_1) {
      for (smo_B.i = 0; smo_B.i < 7; smo_B.i++) {
        smo_B.In1.Data[smo_B.i] = smo_B.bias[smo_B.i];
      }

      smo_B.In1.Data_SL_Info.CurrentLength =
        smo_B.b_varargout_2_Data_SL_Info_Curr;
      smo_B.In1.Data_SL_Info.ReceivedLength =
        smo_B.b_varargout_2_Data_SL_Info_Rece;
      smo_B.In1.Layout.DataOffset = smo_B.b_varargout_2_Layout_DataOffset;
      memcpy(&smo_B.In1.Layout.Dim[0], &smo_B.b_varargout_2_Layout_Dim[0],
             sizeof(SL_Bus_smo_std_msgs_MultiArrayDimension) << 4U);
      smo_B.In1.Layout.Dim_SL_Info.CurrentLength =
        smo_B.b_varargout_2_Layout_Dim_SL_Inf;
      smo_B.In1.Layout.Dim_SL_Info.ReceivedLength =
        smo_B.b_varargout_2_Layout_Dim_SL_I_n;
    }

    // End of MATLABSystem: '<S10>/SourceBlock'
    // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe1'
  }

  smo_emxInit_real_T(&lambda, 2);
  smo_emxInit_real_T(&tmp, 1);

  // MATLABSystem: '<S19>/MATLAB System' incorporates:
  //   Constant: '<S15>/Constant2'
  //   Integrator: '<S15>/Integrator'

  obj_2 = &smo_DW.obj;
  RigidBodyTreeDynamics_massMat_a(&smo_DW.obj.TreeInternal, smo_B.In1_k.Data, b,
    lambda);
  smo_B.vNum = obj_2->TreeInternal.VelocityNumber;
  smo_B.n_j = tmp->size[0];
  smo_B.loop_ub = static_cast<int32_T>(smo_B.vNum);
  tmp->size[0] = smo_B.loop_ub;
  smo_emxEnsureCapacity_real_T(tmp, smo_B.n_j);
  for (smo_B.n_j = 0; smo_B.n_j < smo_B.loop_ub; smo_B.n_j++) {
    tmp->data[smo_B.n_j] = 0.0;
  }

  RigidBodyTreeDynamics_inverseDy(&obj_2->TreeInternal, smo_B.In1_k.Data,
    &smo_X.Integrator_CSTATE[7], tmp, smo_P.Constant2_Value, smo_B.bias);
  smo_emxFree_real_T(&tmp);

  // MATLABSystem: '<S19>/MATLAB System'
  for (smo_B.n_j = 0; smo_B.n_j < 7; smo_B.n_j++) {
    smo_B.bias[smo_B.n_j] = smo_B.In1.Data[smo_B.n_j] - smo_B.bias[smo_B.n_j];
  }

  if ((b->size[0] == 0) || (b->size[1] == 0)) {
    smo_B.u1 = 0;
  } else {
    smo_B.i = b->size[0];
    smo_B.u1 = b->size[1];
    if (smo_B.i > smo_B.u1) {
      smo_B.u1 = smo_B.i;
    }
  }

  smo_emxInit_real_T(&H, 2);

  // MATLABSystem: '<S19>/MATLAB System'
  smo_B.n_j = H->size[0] * H->size[1];
  H->size[0] = b->size[0];
  H->size[1] = b->size[1];
  smo_emxEnsureCapacity_real_T(H, smo_B.n_j);
  smo_B.i = b->size[0] * b->size[1] - 1;
  for (smo_B.n_j = 0; smo_B.n_j <= smo_B.i; smo_B.n_j++) {
    H->data[smo_B.n_j] = b->data[smo_B.n_j];
  }

  smo_emxFree_real_T(&b);

  // MATLABSystem: '<S19>/MATLAB System'
  smo_B.iend = static_cast<int32_T>(((-1.0 - static_cast<real_T>(smo_B.u1)) +
    1.0) / -1.0) - 1;
  for (smo_B.i = 0; smo_B.i <= smo_B.iend; smo_B.i++) {
    smo_B.j = static_cast<real_T>(smo_B.u1) + -static_cast<real_T>(smo_B.i);
    smo_B.n_j = static_cast<int32_T>(smo_B.j);
    smo_B.j_e = smo_B.n_j - 1;
    H->data[(static_cast<int32_T>(smo_B.j) + H->size[0] * (static_cast<int32_T>
              (smo_B.j) - 1)) - 1] = sqrt(H->data[(smo_B.j_e * H->size[0] +
      smo_B.n_j) - 1]);
    smo_B.bid1 = lambda->data[smo_B.j_e];
    while (smo_B.bid1 > 0.0) {
      smo_B.i_o = static_cast<int32_T>(smo_B.bid1) - 1;
      H->data[(static_cast<int32_T>(smo_B.j) + H->size[0] * (static_cast<int32_T>
                (smo_B.bid1) - 1)) - 1] = H->data[(smo_B.i_o * H->size[0] +
        smo_B.n_j) - 1] / H->data[((static_cast<int32_T>(smo_B.j) - 1) * H->
        size[0] + static_cast<int32_T>(smo_B.j)) - 1];
      smo_B.bid1 = lambda->data[smo_B.i_o];
    }

    smo_B.bid1 = lambda->data[smo_B.j_e];
    while (smo_B.bid1 > 0.0) {
      smo_B.j = smo_B.bid1;
      while (smo_B.j > 0.0) {
        smo_B.j_e = static_cast<int32_T>(smo_B.j) - 1;
        H->data[(static_cast<int32_T>(smo_B.bid1) + H->size[0] *
                 (static_cast<int32_T>(smo_B.j) - 1)) - 1] = H->data[(smo_B.j_e *
          H->size[0] + static_cast<int32_T>(smo_B.bid1)) - 1] - H->data[((
          static_cast<int32_T>(smo_B.bid1) - 1) * H->size[0] + smo_B.n_j) - 1] *
          H->data[((static_cast<int32_T>(smo_B.j) - 1) * H->size[0] + smo_B.n_j)
          - 1];
        smo_B.j = lambda->data[smo_B.j_e];
      }

      smo_B.bid1 = lambda->data[static_cast<int32_T>(smo_B.bid1) - 1];
    }
  }

  smo_emxInit_real_T(&L, 2);

  // MATLABSystem: '<S19>/MATLAB System'
  smo_B.n_j = L->size[0] * L->size[1];
  L->size[0] = H->size[0];
  L->size[1] = H->size[1];
  smo_emxEnsureCapacity_real_T(L, smo_B.n_j);
  smo_B.i = H->size[0] * H->size[1] - 1;
  for (smo_B.n_j = 0; smo_B.n_j <= smo_B.i; smo_B.n_j++) {
    L->data[smo_B.n_j] = H->data[smo_B.n_j];
  }

  smo_B.n_j = H->size[1];
  if ((H->size[0] == 0) || (H->size[1] == 0) || (1 >= H->size[1])) {
  } else {
    smo_B.iend = 0;
    for (smo_B.j_e = 2; smo_B.j_e <= smo_B.n_j; smo_B.j_e++) {
      for (smo_B.i = 0; smo_B.i <= smo_B.iend; smo_B.i++) {
        L->data[smo_B.i + L->size[0] * (smo_B.j_e - 1)] = 0.0;
      }

      if (smo_B.iend + 1 < H->size[0]) {
        smo_B.iend++;
      }
    }
  }

  smo_emxFree_real_T(&H);

  // MATLABSystem: '<S19>/MATLAB System'
  smo_B.iend = static_cast<int32_T>(((-1.0 - smo_B.vNum) + 1.0) / -1.0) - 1;
  for (smo_B.i = 0; smo_B.i <= smo_B.iend; smo_B.i++) {
    smo_B.j_e = static_cast<int32_T>(smo_B.vNum + -static_cast<real_T>(smo_B.i));
    smo_B.n_j = smo_B.j_e - 1;
    smo_B.bias[smo_B.n_j] /= L->data[(smo_B.n_j * L->size[0] + smo_B.j_e) - 1];
    smo_B.j = lambda->data[smo_B.n_j];
    while (smo_B.j > 0.0) {
      smo_B.u1 = static_cast<int32_T>(smo_B.j) - 1;
      smo_B.bias[smo_B.u1] -= L->data[(smo_B.u1 * L->size[0] + smo_B.j_e) - 1] *
        smo_B.bias[smo_B.n_j];
      smo_B.j = lambda->data[smo_B.u1];
    }
  }

  smo_B.loop_ub--;
  for (smo_B.i = 0; smo_B.i <= smo_B.loop_ub; smo_B.i++) {
    smo_B.j = lambda->data[smo_B.i];
    while (smo_B.j > 0.0) {
      smo_B.n_j = static_cast<int32_T>(smo_B.j) - 1;
      smo_B.bias[smo_B.i] -= L->data[smo_B.n_j * L->size[0] + smo_B.i] *
        smo_B.bias[smo_B.n_j];
      smo_B.j = lambda->data[smo_B.n_j];
    }

    smo_B.bias[smo_B.i] /= L->data[L->size[0] * smo_B.i + smo_B.i];
  }

  smo_emxFree_real_T(&lambda);
  smo_emxFree_real_T(&L);
  if (rtmIsMajorTimeStep(smo_M) &&
      smo_M->Timing.TaskCounters.TID[3] == 0) {
    // MATLABSystem: '<S1>/Get Parameter7'
    ParamGet_smo_383.get_parameter(&smo_B.GetParameter7_o1);

    // MATLABSystem: '<S1>/Get Parameter8'
    ParamGet_smo_384.get_parameter(&smo_B.GetParameter8_o1);

    // MATLABSystem: '<S1>/Get Parameter9'
    ParamGet_smo_385.get_parameter(&smo_B.GetParameter9_o1);
  }

  // MATLAB Function: '<S15>/Observer' incorporates:
  //   Integrator: '<S15>/Integrator'
  //   MATLABSystem: '<S19>/MATLAB System'

  memset(&smo_B.xp_est[0], 0, 14U * sizeof(real_T));
  for (smo_B.i = 0; smo_B.i < 7; smo_B.i++) {
    smo_B.vNum = 2.0 / (exp((smo_X.Integrator_CSTATE[smo_B.i] -
      smo_B.In1_k.Data[smo_B.i]) / smo_B.GetParameter9_o1) + 1.0) - 1.0;
    smo_B.z[smo_B.i] = smo_B.vNum * smo_B.GetParameter8_o1;
    smo_B.xp_est[smo_B.i] = smo_B.vNum * (sqrt(fabs(smo_B.In1_k.Data[smo_B.i] -
      smo_X.Integrator_CSTATE[smo_B.i])) * smo_B.GetParameter7_o1) +
      smo_X.Integrator_CSTATE[smo_B.i + 7];
    smo_B.xp_est[smo_B.i + 7] = smo_B.bias[smo_B.i] + smo_B.z[smo_B.i];
  }

  // End of MATLAB Function: '<S15>/Observer'
  if (rtmIsMajorTimeStep(smo_M) &&
      smo_M->Timing.TaskCounters.TID[1] == 0) {
    // MATLABSystem: '<S14>/Coordinate Transformation Conversion1'
    smo_B.vNum = sqrt(smo_B.T2[0] * smo_B.T2[0] + smo_B.T2[1] * smo_B.T2[1]);
    smo_B.CoordinateTransformationConvers[0] = rt_atan2d_snf(smo_B.T2[6],
      smo_B.T2[10]);
    smo_B.CoordinateTransformationConvers[1] = rt_atan2d_snf(-smo_B.T2[2],
      smo_B.vNum);
    smo_B.CoordinateTransformationConvers[2] = rt_atan2d_snf(smo_B.T2[1],
      smo_B.T2[0]);
    if (smo_B.vNum < 2.2204460492503131E-15) {
      smo_B.loop_ub = 0;
      for (smo_B.i = 0; smo_B.i < 1; smo_B.i++) {
        smo_B.loop_ub++;
      }

      smo_B.rtb_MATLABSystem_d_size[0] = 1;
      smo_B.rtb_MATLABSystem_d_size[1] = 1;
      smo_B.rtb_MATLABSystem_d_size[2] = smo_B.loop_ub;
      smo_B.rtb_MATLABSystem_d_size_c[0] = 1;
      smo_B.rtb_MATLABSystem_d_size_c[1] = 1;
      smo_B.rtb_MATLABSystem_d_size_c[2] = smo_B.loop_ub;
      for (smo_B.n_j = 0; smo_B.n_j < smo_B.loop_ub; smo_B.n_j++) {
        smo_B.rtb_MATLABSystem_d_data = -smo_B.T2[9];
        smo_B.rtb_MATLABSystem_d_data_e = smo_B.T2[5];
        smo_B.rtb_MATLABSystem_d_data_a = -smo_B.T2[2];
      }

      smo_atan2(&smo_B.rtb_MATLABSystem_d_data, smo_B.rtb_MATLABSystem_d_size,
                &smo_B.rtb_MATLABSystem_d_data_e,
                smo_B.rtb_MATLABSystem_d_size_c, &smo_B.tmp_data, smo_B.tmp_size);
      smo_B.rtb_MATLABSystem_d_size_m[0] = 1;
      smo_B.rtb_MATLABSystem_d_size_m[1] = 1;
      smo_B.rtb_MATLABSystem_d_size_m[2] = smo_B.loop_ub;
      smo_B.sy_size[0] = 1;
      smo_B.sy_size[1] = 1;
      smo_B.sy_size[2] = smo_B.loop_ub;
      for (smo_B.n_j = 0; smo_B.n_j < smo_B.loop_ub; smo_B.n_j++) {
        smo_B.rtb_MATLABSystem_d_data = smo_B.vNum;
      }

      smo_atan2(&smo_B.rtb_MATLABSystem_d_data_a,
                smo_B.rtb_MATLABSystem_d_size_m, &smo_B.rtb_MATLABSystem_d_data,
                smo_B.sy_size, &smo_B.rtb_MATLABSystem_d_data_e,
                smo_B.rtb_MATLABSystem_d_size);
      smo_B.loop_ub = smo_B.tmp_size[2];
      for (smo_B.n_j = 0; smo_B.n_j < smo_B.loop_ub; smo_B.n_j++) {
        smo_B.CoordinateTransformationConvers[0] = smo_B.tmp_data;
      }

      smo_B.loop_ub = smo_B.rtb_MATLABSystem_d_size[2];
      for (smo_B.n_j = 0; smo_B.n_j < smo_B.loop_ub; smo_B.n_j++) {
        smo_B.CoordinateTransformationConvers[1] =
          smo_B.rtb_MATLABSystem_d_data_e;
      }

      smo_B.CoordinateTransformationConvers[2] = 0.0;
    }

    smo_B.vNum = smo_B.CoordinateTransformationConvers[0];
    smo_B.CoordinateTransformationConvers[0] =
      smo_B.CoordinateTransformationConvers[2];
    smo_B.CoordinateTransformationConvers[2] = smo_B.vNum;

    // End of MATLABSystem: '<S14>/Coordinate Transformation Conversion1'
  }

  // MATLAB Function: '<S14>/mass estimator' incorporates:
  //   Integrator: '<S15>/Integrator'

  smo_B.bid1 = 0.0;
  smo_B.vNum = 3.3121686421112381E-170;
  for (smo_B.loop_ub = 0; smo_B.loop_ub < 7; smo_B.loop_ub++) {
    smo_B.j = fabs(smo_X.Integrator_CSTATE[smo_B.loop_ub + 7]);
    if (smo_B.j > smo_B.vNum) {
      smo_B.t = smo_B.vNum / smo_B.j;
      smo_B.bid1 = smo_B.bid1 * smo_B.t * smo_B.t + 1.0;
      smo_B.vNum = smo_B.j;
    } else {
      smo_B.t = smo_B.j / smo_B.vNum;
      smo_B.bid1 += smo_B.t * smo_B.t;
    }
  }

  smo_B.bid1 = smo_B.vNum * sqrt(smo_B.bid1);
  smo_B.vNum = sin(smo_B.CoordinateTransformationConvers[1]);
  if (fabs(smo_B.vNum) > 0.2) {
    if (smo_B.bid1 < 0.15) {
      // TransferFcn: '<S13>/Low Pass (z1)' incorporates:
      //   TransferFcn: '<S13>/Low Pass (z1)1'
      //   TransferFcn: '<S13>/Low Pass (z1)2'
      //   TransferFcn: '<S13>/Low Pass (z1)3'
      //   TransferFcn: '<S13>/Low Pass (z1)4'
      //   TransferFcn: '<S13>/Low Pass (z1)5'
      //   TransferFcn: '<S13>/Low Pass (z1)6'

      smo_B.bid1 = smo_P.lowpass_B[0] / smo_P.lowpass_A[0];
      smo_B.j = smo_P.lowpass_B[1] / smo_P.lowpass_A[0] - smo_B.bid1 *
        (smo_P.lowpass_A[1] / smo_P.lowpass_A[0]);
      smo_B.t = smo_P.lowpass_B[0] / smo_P.lowpass_A[0];
      smo_B.rtb_LowPassz1_tmp = smo_P.lowpass_B[2] / smo_P.lowpass_A[0] -
        smo_B.bid1 * (smo_P.lowpass_A[2] / smo_P.lowpass_A[0]);
      smo_B.rtb_LowPassz1_tmp_a = smo_P.lowpass_B[3] / smo_P.lowpass_A[0] -
        smo_B.bid1 * (smo_P.lowpass_A[3] / smo_P.lowpass_A[0]);
      smo_B.bid1 = smo_P.lowpass_B[4] / smo_P.lowpass_A[0] - smo_B.bid1 *
        (smo_P.lowpass_A[4] / smo_P.lowpass_A[0]);

      // SignalConversion generated from: '<S18>/ SFunction ' incorporates:
      //   TransferFcn: '<S13>/Low Pass (z1)'
      //   TransferFcn: '<S13>/Low Pass (z1)1'
      //   TransferFcn: '<S13>/Low Pass (z1)2'
      //   TransferFcn: '<S13>/Low Pass (z1)3'
      //   TransferFcn: '<S13>/Low Pass (z1)4'
      //   TransferFcn: '<S13>/Low Pass (z1)5'
      //   TransferFcn: '<S13>/Low Pass (z1)6'

      smo_B.bias[0] = (((smo_B.j * smo_X.LowPassz1_CSTATE[0] + smo_B.t *
                         smo_B.z[0]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz1_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz1_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz1_CSTATE[3];
      smo_B.bias[1] = (((smo_B.j * smo_X.LowPassz11_CSTATE[0] + smo_B.t *
                         smo_B.z[1]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz11_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz11_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz11_CSTATE[3];
      smo_B.bias[2] = (((smo_B.j * smo_X.LowPassz12_CSTATE[0] + smo_B.t *
                         smo_B.z[2]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz12_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz12_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz12_CSTATE[3];
      smo_B.bias[3] = (((smo_B.j * smo_X.LowPassz13_CSTATE[0] + smo_B.t *
                         smo_B.z[3]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz13_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz13_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz13_CSTATE[3];
      smo_B.bias[4] = (((smo_B.j * smo_X.LowPassz14_CSTATE[0] + smo_B.t *
                         smo_B.z[4]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz14_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz14_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz14_CSTATE[3];
      smo_B.bias[5] = (((smo_B.j * smo_X.LowPassz15_CSTATE[0] + smo_B.t *
                         smo_B.z[5]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz15_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz15_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz15_CSTATE[3];
      smo_B.bias[6] = (((smo_B.j * smo_X.LowPassz16_CSTATE[0] + smo_B.t *
                         smo_B.z[6]) + smo_B.rtb_LowPassz1_tmp *
                        smo_X.LowPassz16_CSTATE[1]) + smo_B.rtb_LowPassz1_tmp_a *
                       smo_X.LowPassz16_CSTATE[2]) + smo_B.bid1 *
        smo_X.LowPassz16_CSTATE[3];
      for (smo_B.n_j = 0; smo_B.n_j < 7; smo_B.n_j++) {
        smo_B.dv7[smo_B.n_j] = 0.0;
        for (smo_B.j_e = 0; smo_B.j_e < 7; smo_B.j_e++) {
          smo_B.dv7[smo_B.n_j] += smo_B.MATLABSystem[7 * smo_B.j_e + smo_B.n_j] *
            smo_B.bias[smo_B.j_e];
        }
      }

      smo_B.vNum = -smo_B.dv7[5] / (2.0601 * smo_B.vNum);
    } else {
      smo_B.vNum = 0.0;
    }
  } else {
    smo_B.vNum = 0.0;
  }

  // End of MATLAB Function: '<S14>/mass estimator'

  // RateTransition: '<S2>/Rate Transition'
  if ((rtmIsMajorTimeStep(smo_M) &&
       smo_M->Timing.TaskCounters.TID[1] == 0) && (rtmIsMajorTimeStep(smo_M) &&
       smo_M->Timing.TaskCounters.TID[2] == 0)) {
    smo_DW.RateTransition_Buffer = smo_B.vNum;
  }

  if (rtmIsMajorTimeStep(smo_M) &&
      smo_M->Timing.TaskCounters.TID[2] == 0) {
    // BusAssignment: '<S2>/Bus Assignment2'
    smo_B.BusAssignment2.Data = smo_DW.RateTransition_Buffer;

    // Outputs for Atomic SubSystem: '<S2>/Publish2'
    // MATLABSystem: '<S7>/SinkBlock'
    Pub_smo_311.publish(&smo_B.BusAssignment2);

    // End of Outputs for SubSystem: '<S2>/Publish2'
  }

  // End of RateTransition: '<S2>/Rate Transition'
  if (rtmIsMajorTimeStep(smo_M) &&
      smo_M->Timing.TaskCounters.TID[1] == 0) {
    // BusAssignment: '<S2>/Bus Assignment3' incorporates:
    //   Constant: '<S2>/Constant1'
    //   Constant: '<S6>/Constant'
    //   Integrator: '<S15>/Integrator'

    smo_B.BusAssignment3 = smo_P.Constant_Value_i;
    for (smo_B.i = 0; smo_B.i < 7; smo_B.i++) {
      smo_B.BusAssignment3.Data[smo_B.i] = smo_X.Integrator_CSTATE[smo_B.i + 7];
    }

    smo_B.BusAssignment3.Data_SL_Info.CurrentLength = smo_P.Constant1_Value;
    smo_B.BusAssignment3.Data_SL_Info.ReceivedLength = smo_P.Constant1_Value;

    // End of BusAssignment: '<S2>/Bus Assignment3'

    // Outputs for Atomic SubSystem: '<S2>/Publish3'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_smo_331.publish(&smo_B.BusAssignment3);

    // End of Outputs for SubSystem: '<S2>/Publish3'
  }

  if (rtmIsMajorTimeStep(smo_M)) {
    rt_ertODEUpdateContinuousStates(&smo_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++smo_M->Timing.clockTick0;
    smo_M->Timing.t[0] = rtsiGetSolverStopTime(&smo_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.004s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.004, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      smo_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void smo_derivatives(void)
{
  real_T LowPassz1_CSTATE_tmp;
  real_T LowPassz1_CSTATE_tmp_0;
  real_T LowPassz1_CSTATE_tmp_1;
  real_T LowPassz1_CSTATE_tmp_2;
  XDot_smo_T *_rtXdot;
  _rtXdot = ((XDot_smo_T *) smo_M->derivs);

  // Derivatives for Integrator: '<S15>/Integrator'
  memcpy(&_rtXdot->Integrator_CSTATE[0], &smo_B.xp_est[0], 14U * sizeof(real_T));

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)' incorporates:
  //   TransferFcn: '<S13>/Low Pass (z1)1'
  //   TransferFcn: '<S13>/Low Pass (z1)2'
  //   TransferFcn: '<S13>/Low Pass (z1)3'
  //   TransferFcn: '<S13>/Low Pass (z1)4'
  //   TransferFcn: '<S13>/Low Pass (z1)5'
  //   TransferFcn: '<S13>/Low Pass (z1)6'

  _rtXdot->LowPassz1_CSTATE[0] = 0.0;
  LowPassz1_CSTATE_tmp = -smo_P.lowpass_A[1] / smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp * smo_X.LowPassz1_CSTATE
    [0];
  _rtXdot->LowPassz1_CSTATE[1] = 0.0;
  LowPassz1_CSTATE_tmp_0 = -smo_P.lowpass_A[2] / smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz1_CSTATE[1];
  _rtXdot->LowPassz1_CSTATE[2] = 0.0;
  LowPassz1_CSTATE_tmp_1 = -smo_P.lowpass_A[3] / smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz1_CSTATE[2];
  _rtXdot->LowPassz1_CSTATE[3] = 0.0;
  LowPassz1_CSTATE_tmp_2 = -smo_P.lowpass_A[4] / smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz1_CSTATE[3];
  _rtXdot->LowPassz1_CSTATE[1] += smo_X.LowPassz1_CSTATE[0];
  _rtXdot->LowPassz1_CSTATE[2] += smo_X.LowPassz1_CSTATE[1];
  _rtXdot->LowPassz1_CSTATE[3] += smo_X.LowPassz1_CSTATE[2];
  _rtXdot->LowPassz1_CSTATE[0] += smo_B.z[0];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)1'
  _rtXdot->LowPassz11_CSTATE[0] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp *
    smo_X.LowPassz11_CSTATE[0];
  _rtXdot->LowPassz11_CSTATE[1] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz11_CSTATE[1];
  _rtXdot->LowPassz11_CSTATE[2] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz11_CSTATE[2];
  _rtXdot->LowPassz11_CSTATE[3] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz11_CSTATE[3];
  _rtXdot->LowPassz11_CSTATE[1] += smo_X.LowPassz11_CSTATE[0];
  _rtXdot->LowPassz11_CSTATE[2] += smo_X.LowPassz11_CSTATE[1];
  _rtXdot->LowPassz11_CSTATE[3] += smo_X.LowPassz11_CSTATE[2];
  _rtXdot->LowPassz11_CSTATE[0] += smo_B.z[1];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)2'
  _rtXdot->LowPassz12_CSTATE[0] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp *
    smo_X.LowPassz12_CSTATE[0];
  _rtXdot->LowPassz12_CSTATE[1] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz12_CSTATE[1];
  _rtXdot->LowPassz12_CSTATE[2] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz12_CSTATE[2];
  _rtXdot->LowPassz12_CSTATE[3] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz12_CSTATE[3];
  _rtXdot->LowPassz12_CSTATE[1] += smo_X.LowPassz12_CSTATE[0];
  _rtXdot->LowPassz12_CSTATE[2] += smo_X.LowPassz12_CSTATE[1];
  _rtXdot->LowPassz12_CSTATE[3] += smo_X.LowPassz12_CSTATE[2];
  _rtXdot->LowPassz12_CSTATE[0] += smo_B.z[2];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)3'
  _rtXdot->LowPassz13_CSTATE[0] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp *
    smo_X.LowPassz13_CSTATE[0];
  _rtXdot->LowPassz13_CSTATE[1] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz13_CSTATE[1];
  _rtXdot->LowPassz13_CSTATE[2] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz13_CSTATE[2];
  _rtXdot->LowPassz13_CSTATE[3] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz13_CSTATE[3];
  _rtXdot->LowPassz13_CSTATE[1] += smo_X.LowPassz13_CSTATE[0];
  _rtXdot->LowPassz13_CSTATE[2] += smo_X.LowPassz13_CSTATE[1];
  _rtXdot->LowPassz13_CSTATE[3] += smo_X.LowPassz13_CSTATE[2];
  _rtXdot->LowPassz13_CSTATE[0] += smo_B.z[3];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)4'
  _rtXdot->LowPassz14_CSTATE[0] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp *
    smo_X.LowPassz14_CSTATE[0];
  _rtXdot->LowPassz14_CSTATE[1] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz14_CSTATE[1];
  _rtXdot->LowPassz14_CSTATE[2] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz14_CSTATE[2];
  _rtXdot->LowPassz14_CSTATE[3] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz14_CSTATE[3];
  _rtXdot->LowPassz14_CSTATE[1] += smo_X.LowPassz14_CSTATE[0];
  _rtXdot->LowPassz14_CSTATE[2] += smo_X.LowPassz14_CSTATE[1];
  _rtXdot->LowPassz14_CSTATE[3] += smo_X.LowPassz14_CSTATE[2];
  _rtXdot->LowPassz14_CSTATE[0] += smo_B.z[4];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)5'
  _rtXdot->LowPassz15_CSTATE[0] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp *
    smo_X.LowPassz15_CSTATE[0];
  _rtXdot->LowPassz15_CSTATE[1] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz15_CSTATE[1];
  _rtXdot->LowPassz15_CSTATE[2] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz15_CSTATE[2];
  _rtXdot->LowPassz15_CSTATE[3] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz15_CSTATE[3];
  _rtXdot->LowPassz15_CSTATE[1] += smo_X.LowPassz15_CSTATE[0];
  _rtXdot->LowPassz15_CSTATE[2] += smo_X.LowPassz15_CSTATE[1];
  _rtXdot->LowPassz15_CSTATE[3] += smo_X.LowPassz15_CSTATE[2];
  _rtXdot->LowPassz15_CSTATE[0] += smo_B.z[5];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)6'
  _rtXdot->LowPassz16_CSTATE[0] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp *
    smo_X.LowPassz16_CSTATE[0];
  _rtXdot->LowPassz16_CSTATE[1] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    smo_X.LowPassz16_CSTATE[1];
  _rtXdot->LowPassz16_CSTATE[2] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    smo_X.LowPassz16_CSTATE[2];
  _rtXdot->LowPassz16_CSTATE[3] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    smo_X.LowPassz16_CSTATE[3];
  _rtXdot->LowPassz16_CSTATE[1] += smo_X.LowPassz16_CSTATE[0];
  _rtXdot->LowPassz16_CSTATE[2] += smo_X.LowPassz16_CSTATE[1];
  _rtXdot->LowPassz16_CSTATE[3] += smo_X.LowPassz16_CSTATE[2];
  _rtXdot->LowPassz16_CSTATE[0] += smo_B.z[6];
}

// Model initialize function
void smo_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&smo_M->solverInfo, &smo_M->Timing.simTimeStep);
    rtsiSetTPtr(&smo_M->solverInfo, &rtmGetTPtr(smo_M));
    rtsiSetStepSizePtr(&smo_M->solverInfo, &smo_M->Timing.stepSize0);
    rtsiSetdXPtr(&smo_M->solverInfo, &smo_M->derivs);
    rtsiSetContStatesPtr(&smo_M->solverInfo, (real_T **) &smo_M->contStates);
    rtsiSetNumContStatesPtr(&smo_M->solverInfo, &smo_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&smo_M->solverInfo,
      &smo_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&smo_M->solverInfo,
      &smo_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&smo_M->solverInfo,
      &smo_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&smo_M->solverInfo, (&rtmGetErrorStatus(smo_M)));
    rtsiSetRTModelPtr(&smo_M->solverInfo, smo_M);
  }

  rtsiSetSimTimeStep(&smo_M->solverInfo, MAJOR_TIME_STEP);
  smo_M->intgData.y = smo_M->odeY;
  smo_M->intgData.f[0] = smo_M->odeF[0];
  smo_M->intgData.f[1] = smo_M->odeF[1];
  smo_M->intgData.f[2] = smo_M->odeF[2];
  smo_M->intgData.f[3] = smo_M->odeF[3];
  smo_M->contStates = ((X_smo_T *) &smo_X);
  rtsiSetSolverData(&smo_M->solverInfo, static_cast<void *>(&smo_M->intgData));
  rtsiSetSolverName(&smo_M->solverInfo,"ode4");
  rtmSetTPtr(smo_M, &smo_M->Timing.tArray[0]);
  smo_M->Timing.stepSize0 = 0.004;

  {
    char_T tmp[22];
    char_T tmp_0[16];
    char_T tmp_1[11];
    char_T tmp_2[12];
    char_T tmp_3[15];
    char_T tmp_4[17];
    int32_T i;
    static const char_T tmp_5[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p',
      'o', 's', 'i', 't', 'i', 'o', 'n', 's' };

    static const char_T tmp_6[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_7[11] = { '/', 's', 'm', 'o', '/', 'l', 'a', 'm',
      'b', 'd', 'a' };

    static const char_T tmp_8[10] = { '/', 's', 'm', 'o', '/', 'a', 'l', 'p',
      'h', 'a' };

    static const char_T tmp_9[10] = { '/', 's', 'm', 'o', '/', 'g', 'a', 'm',
      'm', 'a' };

    static const char_T tmp_a[15] = { '/', 'e', 's', 't', 'i', 'm', 'a', 't',
      'e', 'd', '_', 'm', 'a', 's', 's' };

    static const char_T tmp_b[21] = { '/', 's', 'm', 'o', '/', 'e', 's', 't',
      'i', 'm', 'a', 't', 'e', 'd', '_', 's', 'p', 'e', 'e', 'd', 's' };

    // Start for Atomic SubSystem: '<S3>/Subscribe'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    smo_DW.obj_m.matlabCodegenIsDeleted = false;
    smo_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_4[i] = tmp_5[i];
    }

    tmp_4[16] = '\x00';
    Sub_smo_299.createSubscriber(tmp_4, 1);
    smo_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe'
    emxInitStruct_robotics_slmanip_(&smo_DW.obj_h);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_0_h);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_19_g);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_18_i);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_17_a);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_16_f);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_15_j);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_14_m);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_13_a);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_12_f);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_11_g);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_10_j);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_9_b);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_8_j);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_7_a);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_6_c);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_5_n);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_4_m);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_3_d);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_2_e);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_1_p);

    // Start for MATLABSystem: '<S17>/MATLAB System'
    smo_DW.obj_h.isInitialized = 0;
    smo_DW.obj_h.isInitialized = 1;
    s_RigidBodyTree_RigidBodyTree_a(&smo_DW.obj_h.TreeInternal, &smo_DW.gobj_0_h,
      &smo_DW.gobj_19_g, &smo_DW.gobj_18_i, &smo_DW.gobj_17_a, &smo_DW.gobj_16_f,
      &smo_DW.gobj_15_j, &smo_DW.gobj_14_m, &smo_DW.gobj_13_a, &smo_DW.gobj_12_f,
      &smo_DW.gobj_11_g);
    emxInitStruct_robotics_slmani_a(&smo_DW.obj_o);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_0_h4);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_19_e);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_18_d);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_17_p);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_16_e);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_15_i);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_14_b);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_13_g);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_12_c);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_11_d);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_10_l);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_9_a);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_8_h);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_7_e);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_6_k);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_5_nh);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_4_n);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_3_l);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_2_h);
    emxInitStruct_j_robotics_mani_a(&smo_DW.gobj_1_h);

    // Start for MATLABSystem: '<S16>/MATLAB System'
    smo_DW.obj_o.isInitialized = 0;
    smo_DW.obj_o.isInitialized = 1;
    smo_RigidBodyTree_RigidBodyTree(&smo_DW.obj_o.TreeInternal,
      &smo_DW.gobj_0_h4, &smo_DW.gobj_19_e, &smo_DW.gobj_18_d, &smo_DW.gobj_17_p,
      &smo_DW.gobj_16_e, &smo_DW.gobj_15_i, &smo_DW.gobj_14_b, &smo_DW.gobj_13_g,
      &smo_DW.gobj_12_c, &smo_DW.gobj_11_d);

    // Start for Atomic SubSystem: '<S3>/Subscribe1'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    smo_DW.obj_ay.matlabCodegenIsDeleted = false;
    smo_DW.obj_ay.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      tmp_3[i] = tmp_6[i];
    }

    tmp_3[14] = '\x00';
    Sub_smo_638.createSubscriber(tmp_3, 1);
    smo_DW.obj_ay.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Start for SubSystem: '<S3>/Subscribe1'
    emxInitStruct_robotics_slman_a4(&smo_DW.obj);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_0);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_19);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_18);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_17);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_16);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_15);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_14);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_13);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_12);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_11);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_10);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_9);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_8);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_7);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_6);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_5);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_4);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_3);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_2);
    emxInitStruct_j_robotics_manip_(&smo_DW.gobj_1);

    // Start for MATLABSystem: '<S19>/MATLAB System'
    smo_DW.obj.isInitialized = 0;
    smo_DW.obj.isInitialized = 1;
    RigidBodyTree_RigidBodyTree_a4(&smo_DW.obj.TreeInternal, &smo_DW.gobj_0,
      &smo_DW.gobj_19, &smo_DW.gobj_18, &smo_DW.gobj_17, &smo_DW.gobj_16,
      &smo_DW.gobj_15, &smo_DW.gobj_14, &smo_DW.gobj_13, &smo_DW.gobj_12,
      &smo_DW.gobj_11);

    // Start for MATLABSystem: '<S1>/Get Parameter7'
    smo_DW.obj_a.matlabCodegenIsDeleted = false;
    smo_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      tmp_2[i] = tmp_7[i];
    }

    tmp_2[11] = '\x00';
    ParamGet_smo_383.initialize(tmp_2);
    ParamGet_smo_383.initialize_error_codes(0, 1, 2, 3);
    ParamGet_smo_383.set_initial_value(0.0);
    smo_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter7'

    // Start for MATLABSystem: '<S1>/Get Parameter8'
    smo_DW.obj_oo.matlabCodegenIsDeleted = false;
    smo_DW.obj_oo.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_1[i] = tmp_8[i];
    }

    tmp_1[10] = '\x00';
    ParamGet_smo_384.initialize(tmp_1);
    ParamGet_smo_384.initialize_error_codes(0, 1, 2, 3);
    ParamGet_smo_384.set_initial_value(0.0);
    smo_DW.obj_oo.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter8'

    // Start for MATLABSystem: '<S1>/Get Parameter9'
    smo_DW.obj_ok.matlabCodegenIsDeleted = false;
    smo_DW.obj_ok.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      tmp_1[i] = tmp_9[i];
    }

    tmp_1[10] = '\x00';
    ParamGet_smo_385.initialize(tmp_1);
    ParamGet_smo_385.initialize_error_codes(0, 1, 2, 3);
    ParamGet_smo_385.set_initial_value(0.0);
    smo_DW.obj_ok.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter9'

    // Start for Atomic SubSystem: '<S2>/Publish2'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    smo_DW.obj_ap.matlabCodegenIsDeleted = false;
    smo_DW.obj_ap.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      tmp_0[i] = tmp_a[i];
    }

    tmp_0[15] = '\x00';
    Pub_smo_311.createPublisher(tmp_0, 1);
    smo_DW.obj_ap.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish2'

    // Start for Atomic SubSystem: '<S2>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    smo_DW.obj_b.matlabCodegenIsDeleted = false;
    smo_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      tmp[i] = tmp_b[i];
    }

    tmp[21] = '\x00';
    Pub_smo_331.createPublisher(tmp, 1);
    smo_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish3'

    // InitializeConditions for Integrator: '<S15>/Integrator'
    memcpy(&smo_X.Integrator_CSTATE[0], &smo_P.Integrator_IC[0], 14U * sizeof
           (real_T));

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    smo_X.LowPassz1_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    smo_X.LowPassz11_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    smo_X.LowPassz12_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    smo_X.LowPassz13_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    smo_X.LowPassz14_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    smo_X.LowPassz15_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    smo_X.LowPassz16_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    smo_X.LowPassz1_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    smo_X.LowPassz11_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    smo_X.LowPassz12_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    smo_X.LowPassz13_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    smo_X.LowPassz14_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    smo_X.LowPassz15_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    smo_X.LowPassz16_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    smo_X.LowPassz1_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    smo_X.LowPassz11_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    smo_X.LowPassz12_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    smo_X.LowPassz13_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    smo_X.LowPassz14_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    smo_X.LowPassz15_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    smo_X.LowPassz16_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    smo_X.LowPassz1_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    smo_X.LowPassz11_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    smo_X.LowPassz12_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    smo_X.LowPassz13_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    smo_X.LowPassz14_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    smo_X.LowPassz15_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    smo_X.LowPassz16_CSTATE[3] = 0.0;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1'
    smo_B.In1_k = smo_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    smo_B.In1 = smo_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'
  }
}

// Model terminate function
void smo_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S3>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matla_a43q4(&smo_DW.obj_m);

  // End of Terminate for SubSystem: '<S3>/Subscribe'
  emxFreeStruct_robotics_slmanip_(&smo_DW.obj_h);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_0_h);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_19_g);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_18_i);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_17_a);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_16_f);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_15_j);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_14_m);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_13_a);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_12_f);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_11_g);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_10_j);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_9_b);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_8_j);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_7_a);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_6_c);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_5_n);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_4_m);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_3_d);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_2_e);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_1_p);
  emxFreeStruct_robotics_slmani_a(&smo_DW.obj_o);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_0_h4);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_19_e);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_18_d);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_17_p);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_16_e);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_15_i);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_14_b);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_13_g);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_12_c);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_11_d);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_10_l);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_9_a);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_8_h);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_7_e);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_6_k);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_5_nh);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_4_n);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_3_l);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_2_h);
  emxFreeStruct_j_robotics_mani_a(&smo_DW.gobj_1_h);

  // Terminate for Atomic SubSystem: '<S3>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matla_a43q4(&smo_DW.obj_ay);

  // End of Terminate for SubSystem: '<S3>/Subscribe1'
  emxFreeStruct_robotics_slman_a4(&smo_DW.obj);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_0);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_19);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_18);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_17);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_16);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_15);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_14);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_13);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_12);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_11);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_10);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_9);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_8);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_7);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_6);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_5);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_4);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_3);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_2);
  emxFreeStruct_j_robotics_manip_(&smo_DW.gobj_1);

  // Terminate for MATLABSystem: '<S1>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&smo_DW.obj_a);

  // Terminate for MATLABSystem: '<S1>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&smo_DW.obj_oo);

  // Terminate for MATLABSystem: '<S1>/Get Parameter9'
  matlabCodegenHandle_matlabCodeg(&smo_DW.obj_ok);

  // Terminate for Atomic SubSystem: '<S2>/Publish2'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabC_a43(&smo_DW.obj_ap);

  // End of Terminate for SubSystem: '<S2>/Publish2'

  // Terminate for Atomic SubSystem: '<S2>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabC_a43(&smo_DW.obj_b);

  // End of Terminate for SubSystem: '<S2>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//
