//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: justina_smo.cpp
//
// Code generated for Simulink model 'justina_smo'.
//
// Model version                  : 1.264
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Oct  4 15:04:57 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "justina_smo.h"
#include "justina_smo_private.h"

// Block signals (default storage)
B_justina_smo_T justina_smo_B;

// Continuous states
X_justina_smo_T justina_smo_X;

// Block states (default storage)
DW_justina_smo_T justina_smo_DW;

// Real-time model
RT_MODEL_justina_smo_T justina_smo_M_ = RT_MODEL_justina_smo_T();
RT_MODEL_justina_smo_T *const justina_smo_M = &justina_smo_M_;

// Forward declaration for local functions
static void justina_smo_emxInit_real_T(emxArray_real_T_justina_smo_T **pEmxArray,
  int32_T numDimensions);
static void justina_smo_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void justin_emxEnsureCapacity_real_T(emxArray_real_T_justina_smo_T
  *emxArray, int32_T oldNumel);
static void justina_sm_emxInit_f_cell_wrap1(emxArray_f_cell_wrap_justin_o_T
  **pEmxArray, int32_T numDimensions);
static void emxEnsureCapacity_f_cell_wrap1(emxArray_f_cell_wrap_justin_o_T
  *emxArray, int32_T oldNumel);
static void rigidBodyJoint_get_JointAxis_o(const c_rigidBodyJoint_justina_sm_o_T
  *obj, real_T ax[3]);
static void justina_smo_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyT_o(const
  c_rigidBodyJoint_justina_sm_o_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16]);
static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_justina_sm_o_T *obj, real_T T[16]);
static void justina_smo_tforminv(const real_T T[16], real_T Tinv[16]);
static void justina_smo_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void justina_smo_emxFree_real_T(emxArray_real_T_justina_smo_T **pEmxArray);
static void justina_sm_emxFree_f_cell_wrap1(emxArray_f_cell_wrap_justin_o_T
  **pEmxArray);
static void RigidBodyTreeDynamics_massMatri(q_robotics_manip_internal_R_o_T
  *robot, const real_T q[7], emxArray_real_T_justina_smo_T *H);
static void justina_smo_emxInit_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray, int32_T numDimensions);
static void justina_smo_emxInit_char_T(emxArray_char_T_justina_smo_T **pEmxArray,
  int32_T numDimensions);
static void j_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  *emxArray, int32_T oldNumel);
static void justin_emxEnsureCapacity_char_T(emxArray_char_T_justina_smo_T
  *emxArray, int32_T oldNumel);
static void ju_rigidBodyJoint_get_JointAxis(const c_rigidBodyJoint_justina_smo_T
  *obj, real_T ax[3]);
static void justina_smo_emxFree_char_T(emxArray_char_T_justina_smo_T **pEmxArray);
static void RigidBodyTree_forwardKinematics(q_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[7], emxArray_f_cell_wrap_justina__T *Ttree);
static void justina_smo_emxFree_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray);
static void justina_smo_SystemCore_step_o(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void RigidBodyTreeDynamics_massMat_o(q_robotics_manip_internal__og_T
  *robot, const real_T q[7], emxArray_real_T_justina_smo_T *H,
  emxArray_real_T_justina_smo_T *lambda);
static void RigidBodyTreeDynamics_inverseDy(q_robotics_manip_internal__og_T
  *robot, const real_T q[7], const real_T qdot[7], const real_T fext[60], real_T
  tau[7]);
static void justina_smo_atan2(const real_T y_data[], const int32_T y_size[3],
  const real_T x_data[], const int32_T x_size[3], real_T r_data[], int32_T
  r_size[3]);
static void matlabCodegenHandle_matla_og4q5(ros_slros_internal_block_Subs_T *obj);
static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_sm_o_T
  *pStruct);
static void emxFreeStruct_p_robotics_manip_(p_robotics_manip_internal_R_o_T
  *pStruct);
static void emxFreeStruct_q_robotics_manip_(q_robotics_manip_internal_R_o_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_b_o_T
  *pStruct);
static void emxFreeStruct_o_robotics_manip_(o_robotics_manip_internal_R_o_T
  *pStruct);
static void emxFreeStruct_c_rigidBodyJoint1(c_rigidBodyJoint_justina_smo_T
  *pStruct);
static void emxFreeStruct_p_robotics_mani_o(p_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_q_robotics_mani_o(q_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmani_o(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_o_robotics_mani_o(o_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_q_robotics_man_og(q_robotics_manip_internal__og_T
  *pStruct);
static void emxFreeStruct_robotics_slman_og(robotics_slmanip_internal__og_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabC_og4(ros_slros_internal_block_Publ_T *obj);
static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_sm_o_T
  *pStruct);
static void emxInitStruct_p_robotics_manip_(p_robotics_manip_internal_R_o_T
  *pStruct);
static void emxInitStruct_q_robotics_manip_(q_robotics_manip_internal_R_o_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_b_o_T
  *pStruct);
static void emxInitStruct_o_robotics_manip_(o_robotics_manip_internal_R_o_T
  *pStruct);
static o_robotics_manip_internal_R_o_T *jus_RigidBody_RigidBody_og4q5te
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *ju_RigidBody_RigidBody_og4q5tei
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *j_RigidBody_RigidBody_og4q5teix
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *RigidBody_RigidBody_og4q5teixq
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *RigidBody_RigidBody_og4q5teixqw
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *RigidBody_RigidBod_og4q5teixqwa
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *RigidBody_RigidBo_og4q5teixqwaz
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *RigidBody_RigidB_og4q5teixqwaz5
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *RigidBody_Rigid_og4q5teixqwaz55
  (o_robotics_manip_internal_R_o_T *obj);
static o_robotics_manip_internal_R_o_T *j_RigidBody_Rigid_o
  (o_robotics_manip_internal_R_o_T *obj);
static p_robotics_manip_internal_R_o_T *j_RigidBody_Rigid_ou
  (p_robotics_manip_internal_R_o_T *obj);
static q_robotics_manip_internal_R_o_T *j_RigidBodyTree_RigidBodyTree_o
  (q_robotics_manip_internal_R_o_T *obj, o_robotics_manip_internal_R_o_T *iobj_0,
   o_robotics_manip_internal_R_o_T *iobj_1, o_robotics_manip_internal_R_o_T
   *iobj_2, o_robotics_manip_internal_R_o_T *iobj_3,
   o_robotics_manip_internal_R_o_T *iobj_4, o_robotics_manip_internal_R_o_T
   *iobj_5, o_robotics_manip_internal_R_o_T *iobj_6,
   o_robotics_manip_internal_R_o_T *iobj_7, o_robotics_manip_internal_R_o_T
   *iobj_8, o_robotics_manip_internal_R_o_T *iobj_9);
static void emxInitStruct_c_rigidBodyJoint1(c_rigidBodyJoint_justina_smo_T
  *pStruct);
static void emxInitStruct_p_robotics_mani_o(p_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_q_robotics_mani_o(q_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmani_o(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_o_robotics_mani_o(o_robotics_manip_internal_Rig_T
  *pStruct);
static o_robotics_manip_internal_Rig_T *justina_smo_RigidBody_RigidBody
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina_s_RigidBody_RigidBody_o
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina__RigidBody_RigidBody_og
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina_RigidBody_RigidBody_og4
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justin_RigidBody_RigidBody_og4q
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justi_RigidBody_RigidBody_og4q5
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *just_RigidBody_RigidBody_og4q5t
  (o_robotics_manip_internal_Rig_T *obj);
static q_robotics_manip_internal_Rig_T *jus_RigidBodyTree_RigidBodyTree
  (q_robotics_manip_internal_Rig_T *obj, o_robotics_manip_internal_Rig_T *iobj_0,
   o_robotics_manip_internal_Rig_T *iobj_1, o_robotics_manip_internal_Rig_T
   *iobj_2, o_robotics_manip_internal_Rig_T *iobj_3,
   o_robotics_manip_internal_Rig_T *iobj_4, o_robotics_manip_internal_Rig_T
   *iobj_5, o_robotics_manip_internal_Rig_T *iobj_6,
   o_robotics_manip_internal_Rig_T *iobj_7, o_robotics_manip_internal_Rig_T
   *iobj_8, o_robotics_manip_internal_Rig_T *iobj_9);
static void emxInitStruct_q_robotics_man_og(q_robotics_manip_internal__og_T
  *pStruct);
static void emxInitStruct_robotics_slman_og(robotics_slmanip_internal__og_T
  *pStruct);
static q_robotics_manip_internal__og_T *RigidBodyTree_RigidBodyTree_og
  (q_robotics_manip_internal__og_T *obj, o_robotics_manip_internal_R_o_T *iobj_0,
   o_robotics_manip_internal_R_o_T *iobj_1, o_robotics_manip_internal_R_o_T
   *iobj_2, o_robotics_manip_internal_R_o_T *iobj_3,
   o_robotics_manip_internal_R_o_T *iobj_4, o_robotics_manip_internal_R_o_T
   *iobj_5, o_robotics_manip_internal_R_o_T *iobj_6,
   o_robotics_manip_internal_R_o_T *iobj_7, o_robotics_manip_internal_R_o_T
   *iobj_8, o_robotics_manip_internal_R_o_T *iobj_9);
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

  (justina_smo_M->Timing.TaskCounters.TID[2])++;
  if ((justina_smo_M->Timing.TaskCounters.TID[2]) > 9) {// Sample time: [0.04s, 0.0s] 
    justina_smo_M->Timing.TaskCounters.TID[2] = 0;
  }

  (justina_smo_M->Timing.TaskCounters.TID[3])++;
  if ((justina_smo_M->Timing.TaskCounters.TID[3]) > 249) {// Sample time: [1.0s, 0.0s] 
    justina_smo_M->Timing.TaskCounters.TID[3] = 0;
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
  justina_smo_derivatives();

  // f1 = f(t + (h/2), y + (h/2)*f0)
  temp = 0.5 * h;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f0[i]);
  }

  rtsiSetT(si, t + temp);
  rtsiSetdX(si, f1);
  justina_smo_step();
  justina_smo_derivatives();

  // f2 = f(t + (h/2), y + (h/2)*f1)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (temp*f1[i]);
  }

  rtsiSetdX(si, f2);
  justina_smo_step();
  justina_smo_derivatives();

  // f3 = f(t + h, y + h*f2)
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (h*f2[i]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f3);
  justina_smo_step();
  justina_smo_derivatives();

  // tnew = t + h
  // ynew = y + (h/6)*(f0 + 2*f1 + 2*f2 + 2*f3)
  temp = h / 6.0;
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + temp*(f0[i] + 2.0*f1[i] + 2.0*f2[i] + f3[i]);
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void justina_smo_emxInit_real_T(emxArray_real_T_justina_smo_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_justina_smo_T *emxArray;
  *pEmxArray = (emxArray_real_T_justina_smo_T *)malloc(sizeof
    (emxArray_real_T_justina_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_smo_B.i_b = 0; justina_smo_B.i_b < numDimensions;
       justina_smo_B.i_b++) {
    emxArray->size[justina_smo_B.i_b] = 0;
  }
}

static void justina_smo_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_justina_smo_299.getLatestMessage
    (&justina_smo_B.b_varargout_2_m);
  for (justina_smo_B.i_px = 0; justina_smo_B.i_px < 7; justina_smo_B.i_px++) {
    varargout_2_Data[justina_smo_B.i_px] =
      justina_smo_B.b_varargout_2_m.Data[justina_smo_B.i_px];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_smo_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_smo_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    justina_smo_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &justina_smo_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_justina_smo_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_smo_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_smo_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void justin_emxEnsureCapacity_real_T(emxArray_real_T_justina_smo_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_smo_B.newNumel = 1;
  for (justina_smo_B.i_f = 0; justina_smo_B.i_f < emxArray->numDimensions;
       justina_smo_B.i_f++) {
    justina_smo_B.newNumel *= emxArray->size[justina_smo_B.i_f];
  }

  if (justina_smo_B.newNumel > emxArray->allocatedSize) {
    justina_smo_B.i_f = emxArray->allocatedSize;
    if (justina_smo_B.i_f < 16) {
      justina_smo_B.i_f = 16;
    }

    while (justina_smo_B.i_f < justina_smo_B.newNumel) {
      if (justina_smo_B.i_f > 1073741823) {
        justina_smo_B.i_f = MAX_int32_T;
      } else {
        justina_smo_B.i_f <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_smo_B.i_f), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = justina_smo_B.i_f;
    emxArray->canFreeData = true;
  }
}

static void justina_sm_emxInit_f_cell_wrap1(emxArray_f_cell_wrap_justin_o_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_justin_o_T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_justin_o_T *)malloc(sizeof
    (emxArray_f_cell_wrap_justin_o_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_justina_smo_o_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_smo_B.i_c = 0; justina_smo_B.i_c < numDimensions;
       justina_smo_B.i_c++) {
    emxArray->size[justina_smo_B.i_c] = 0;
  }
}

static void emxEnsureCapacity_f_cell_wrap1(emxArray_f_cell_wrap_justin_o_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_smo_B.newNumel_a = 1;
  for (justina_smo_B.i_kb = 0; justina_smo_B.i_kb < emxArray->numDimensions;
       justina_smo_B.i_kb++) {
    justina_smo_B.newNumel_a *= emxArray->size[justina_smo_B.i_kb];
  }

  if (justina_smo_B.newNumel_a > emxArray->allocatedSize) {
    justina_smo_B.i_kb = emxArray->allocatedSize;
    if (justina_smo_B.i_kb < 16) {
      justina_smo_B.i_kb = 16;
    }

    while (justina_smo_B.i_kb < justina_smo_B.newNumel_a) {
      if (justina_smo_B.i_kb > 1073741823) {
        justina_smo_B.i_kb = MAX_int32_T;
      } else {
        justina_smo_B.i_kb <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_smo_B.i_kb), sizeof
                     (f_cell_wrap_justina_smo_o_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_justina_smo_o_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_justina_smo_o_T *)newData;
    emxArray->allocatedSize = justina_smo_B.i_kb;
    emxArray->canFreeData = true;
  }
}

static void rigidBodyJoint_get_JointAxis_o(const c_rigidBodyJoint_justina_sm_o_T
  *obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (justina_smo_B.b_kstr_e = 0; justina_smo_B.b_kstr_e < 8;
       justina_smo_B.b_kstr_e++) {
    justina_smo_B.b_m3[justina_smo_B.b_kstr_e] = tmp[justina_smo_B.b_kstr_e];
  }

  justina_smo_B.b_bool_m = false;
  if (obj->Type->size[1] == 8) {
    justina_smo_B.b_kstr_e = 1;
    do {
      exitg1 = 0;
      if (justina_smo_B.b_kstr_e - 1 < 8) {
        justina_smo_B.kstr_j = justina_smo_B.b_kstr_e - 1;
        if (obj->Type->data[justina_smo_B.kstr_j] !=
            justina_smo_B.b_m3[justina_smo_B.kstr_j]) {
          exitg1 = 1;
        } else {
          justina_smo_B.b_kstr_e++;
        }
      } else {
        justina_smo_B.b_bool_m = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (justina_smo_B.b_bool_m) {
    guard1 = true;
  } else {
    for (justina_smo_B.b_kstr_e = 0; justina_smo_B.b_kstr_e < 9;
         justina_smo_B.b_kstr_e++) {
      justina_smo_B.b_m[justina_smo_B.b_kstr_e] = tmp_0[justina_smo_B.b_kstr_e];
    }

    justina_smo_B.b_bool_m = false;
    if (obj->Type->size[1] == 9) {
      justina_smo_B.b_kstr_e = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr_e - 1 < 9) {
          justina_smo_B.kstr_j = justina_smo_B.b_kstr_e - 1;
          if (obj->Type->data[justina_smo_B.kstr_j] !=
              justina_smo_B.b_m[justina_smo_B.kstr_j]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr_e++;
          }
        } else {
          justina_smo_B.b_bool_m = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_bool_m) {
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

static void justina_smo_cat(real_T varargin_1, real_T varargin_2, real_T
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

static void rigidBodyJoint_transformBodyT_o(const
  c_rigidBodyJoint_justina_sm_o_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (justina_smo_B.b_kstr_a = 0; justina_smo_B.b_kstr_a < 5;
       justina_smo_B.b_kstr_a++) {
    justina_smo_B.b_h2[justina_smo_B.b_kstr_a] = tmp[justina_smo_B.b_kstr_a];
  }

  justina_smo_B.b_bool_e = false;
  if (obj->Type->size[1] == 5) {
    justina_smo_B.b_kstr_a = 1;
    do {
      exitg1 = 0;
      if (justina_smo_B.b_kstr_a - 1 < 5) {
        justina_smo_B.kstr = justina_smo_B.b_kstr_a - 1;
        if (obj->Type->data[justina_smo_B.kstr] !=
            justina_smo_B.b_h2[justina_smo_B.kstr]) {
          exitg1 = 1;
        } else {
          justina_smo_B.b_kstr_a++;
        }
      } else {
        justina_smo_B.b_bool_e = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (justina_smo_B.b_bool_e) {
    justina_smo_B.b_kstr_a = 0;
  } else {
    for (justina_smo_B.b_kstr_a = 0; justina_smo_B.b_kstr_a < 8;
         justina_smo_B.b_kstr_a++) {
      justina_smo_B.b_md[justina_smo_B.b_kstr_a] = tmp_0[justina_smo_B.b_kstr_a];
    }

    justina_smo_B.b_bool_e = false;
    if (obj->Type->size[1] == 8) {
      justina_smo_B.b_kstr_a = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr_a - 1 < 8) {
          justina_smo_B.kstr = justina_smo_B.b_kstr_a - 1;
          if (obj->Type->data[justina_smo_B.kstr] !=
              justina_smo_B.b_md[justina_smo_B.kstr]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr_a++;
          }
        } else {
          justina_smo_B.b_bool_e = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_bool_e) {
      justina_smo_B.b_kstr_a = 1;
    } else {
      justina_smo_B.b_kstr_a = -1;
    }
  }

  switch (justina_smo_B.b_kstr_a) {
   case 0:
    memset(&justina_smo_B.TJ[0], 0, sizeof(real_T) << 4U);
    justina_smo_B.TJ[0] = 1.0;
    justina_smo_B.TJ[5] = 1.0;
    justina_smo_B.TJ[10] = 1.0;
    justina_smo_B.TJ[15] = 1.0;
    break;

   case 1:
    rigidBodyJoint_get_JointAxis_o(obj, justina_smo_B.v);
    justina_smo_B.result_data[0] = justina_smo_B.v[0];
    justina_smo_B.result_data[1] = justina_smo_B.v[1];
    justina_smo_B.result_data[2] = justina_smo_B.v[2];
    if (0 <= (*q_size != 0) - 1) {
      justina_smo_B.result_data[3] = q_data[0];
    }

    justina_smo_B.cth = 1.0 / sqrt((justina_smo_B.result_data[0] *
      justina_smo_B.result_data[0] + justina_smo_B.result_data[1] *
      justina_smo_B.result_data[1]) + justina_smo_B.result_data[2] *
      justina_smo_B.result_data[2]);
    justina_smo_B.v[0] = justina_smo_B.result_data[0] * justina_smo_B.cth;
    justina_smo_B.v[1] = justina_smo_B.result_data[1] * justina_smo_B.cth;
    justina_smo_B.v[2] = justina_smo_B.result_data[2] * justina_smo_B.cth;
    justina_smo_B.cth = cos(justina_smo_B.result_data[3]);
    justina_smo_B.sth = sin(justina_smo_B.result_data[3]);
    justina_smo_B.tempR_tmp = justina_smo_B.v[1] * justina_smo_B.v[0] * (1.0 -
      justina_smo_B.cth);
    justina_smo_B.tempR_tmp_e = justina_smo_B.v[2] * justina_smo_B.sth;
    justina_smo_B.tempR_tmp_a = justina_smo_B.v[2] * justina_smo_B.v[0] * (1.0 -
      justina_smo_B.cth);
    justina_smo_B.tempR_tmp_as = justina_smo_B.v[1] * justina_smo_B.sth;
    justina_smo_B.tempR_tmp_i = justina_smo_B.v[2] * justina_smo_B.v[1] * (1.0 -
      justina_smo_B.cth);
    justina_smo_B.sth *= justina_smo_B.v[0];
    justina_smo_cat(justina_smo_B.v[0] * justina_smo_B.v[0] * (1.0 -
      justina_smo_B.cth) + justina_smo_B.cth, justina_smo_B.tempR_tmp -
                    justina_smo_B.tempR_tmp_e, justina_smo_B.tempR_tmp_a +
                    justina_smo_B.tempR_tmp_as, justina_smo_B.tempR_tmp +
                    justina_smo_B.tempR_tmp_e, justina_smo_B.v[1] *
                    justina_smo_B.v[1] * (1.0 - justina_smo_B.cth) +
                    justina_smo_B.cth, justina_smo_B.tempR_tmp_i -
                    justina_smo_B.sth, justina_smo_B.tempR_tmp_a -
                    justina_smo_B.tempR_tmp_as, justina_smo_B.tempR_tmp_i +
                    justina_smo_B.sth, justina_smo_B.v[2] * justina_smo_B.v[2] *
                    (1.0 - justina_smo_B.cth) + justina_smo_B.cth,
                    justina_smo_B.tempR);
    for (justina_smo_B.b_kstr_a = 0; justina_smo_B.b_kstr_a < 3;
         justina_smo_B.b_kstr_a++) {
      justina_smo_B.kstr = justina_smo_B.b_kstr_a + 1;
      justina_smo_B.R_g[justina_smo_B.kstr - 1] = justina_smo_B.tempR
        [(justina_smo_B.kstr - 1) * 3];
      justina_smo_B.kstr = justina_smo_B.b_kstr_a + 1;
      justina_smo_B.R_g[justina_smo_B.kstr + 2] = justina_smo_B.tempR
        [(justina_smo_B.kstr - 1) * 3 + 1];
      justina_smo_B.kstr = justina_smo_B.b_kstr_a + 1;
      justina_smo_B.R_g[justina_smo_B.kstr + 5] = justina_smo_B.tempR
        [(justina_smo_B.kstr - 1) * 3 + 2];
    }

    memset(&justina_smo_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (justina_smo_B.b_kstr_a = 0; justina_smo_B.b_kstr_a < 3;
         justina_smo_B.b_kstr_a++) {
      justina_smo_B.kstr = justina_smo_B.b_kstr_a << 2;
      justina_smo_B.TJ[justina_smo_B.kstr] = justina_smo_B.R_g[3 *
        justina_smo_B.b_kstr_a];
      justina_smo_B.TJ[justina_smo_B.kstr + 1] = justina_smo_B.R_g[3 *
        justina_smo_B.b_kstr_a + 1];
      justina_smo_B.TJ[justina_smo_B.kstr + 2] = justina_smo_B.R_g[3 *
        justina_smo_B.b_kstr_a + 2];
    }

    justina_smo_B.TJ[15] = 1.0;
    break;

   default:
    rigidBodyJoint_get_JointAxis_o(obj, justina_smo_B.v);
    memset(&justina_smo_B.tempR[0], 0, 9U * sizeof(real_T));
    justina_smo_B.tempR[0] = 1.0;
    justina_smo_B.tempR[4] = 1.0;
    justina_smo_B.tempR[8] = 1.0;
    for (justina_smo_B.b_kstr_a = 0; justina_smo_B.b_kstr_a < 3;
         justina_smo_B.b_kstr_a++) {
      justina_smo_B.kstr = justina_smo_B.b_kstr_a << 2;
      justina_smo_B.TJ[justina_smo_B.kstr] = justina_smo_B.tempR[3 *
        justina_smo_B.b_kstr_a];
      justina_smo_B.TJ[justina_smo_B.kstr + 1] = justina_smo_B.tempR[3 *
        justina_smo_B.b_kstr_a + 1];
      justina_smo_B.TJ[justina_smo_B.kstr + 2] = justina_smo_B.tempR[3 *
        justina_smo_B.b_kstr_a + 2];
      justina_smo_B.TJ[justina_smo_B.b_kstr_a + 12] =
        justina_smo_B.v[justina_smo_B.b_kstr_a] * q_data[0];
    }

    justina_smo_B.TJ[3] = 0.0;
    justina_smo_B.TJ[7] = 0.0;
    justina_smo_B.TJ[11] = 0.0;
    justina_smo_B.TJ[15] = 1.0;
    break;
  }

  for (justina_smo_B.b_kstr_a = 0; justina_smo_B.b_kstr_a < 4;
       justina_smo_B.b_kstr_a++) {
    for (justina_smo_B.kstr = 0; justina_smo_B.kstr < 4; justina_smo_B.kstr++) {
      justina_smo_B.obj_tmp_tmp = justina_smo_B.kstr << 2;
      justina_smo_B.obj_tmp = justina_smo_B.b_kstr_a + justina_smo_B.obj_tmp_tmp;
      justina_smo_B.obj[justina_smo_B.obj_tmp] = 0.0;
      justina_smo_B.obj[justina_smo_B.obj_tmp] +=
        justina_smo_B.TJ[justina_smo_B.obj_tmp_tmp] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_a];
      justina_smo_B.obj[justina_smo_B.obj_tmp] +=
        justina_smo_B.TJ[justina_smo_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_a + 4];
      justina_smo_B.obj[justina_smo_B.obj_tmp] +=
        justina_smo_B.TJ[justina_smo_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_a + 8];
      justina_smo_B.obj[justina_smo_B.obj_tmp] +=
        justina_smo_B.TJ[justina_smo_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_a + 12];
    }

    for (justina_smo_B.kstr = 0; justina_smo_B.kstr < 4; justina_smo_B.kstr++) {
      justina_smo_B.obj_tmp_tmp = justina_smo_B.kstr << 2;
      justina_smo_B.obj_tmp = justina_smo_B.b_kstr_a + justina_smo_B.obj_tmp_tmp;
      T[justina_smo_B.obj_tmp] = 0.0;
      T[justina_smo_B.obj_tmp] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp] *
        justina_smo_B.obj[justina_smo_B.b_kstr_a];
      T[justina_smo_B.obj_tmp] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp + 1] *
        justina_smo_B.obj[justina_smo_B.b_kstr_a + 4];
      T[justina_smo_B.obj_tmp] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp + 2] *
        justina_smo_B.obj[justina_smo_B.b_kstr_a + 8];
      T[justina_smo_B.obj_tmp] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp + 3] *
        justina_smo_B.obj[justina_smo_B.b_kstr_a + 12];
    }
  }
}

static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_justina_sm_o_T *obj, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (justina_smo_B.b_kstr_h = 0; justina_smo_B.b_kstr_h < 5;
       justina_smo_B.b_kstr_h++) {
    justina_smo_B.b_mc[justina_smo_B.b_kstr_h] = tmp[justina_smo_B.b_kstr_h];
  }

  justina_smo_B.b_bool_j = false;
  if (obj->Type->size[1] == 5) {
    justina_smo_B.b_kstr_h = 1;
    do {
      exitg1 = 0;
      if (justina_smo_B.b_kstr_h - 1 < 5) {
        justina_smo_B.kstr_f = justina_smo_B.b_kstr_h - 1;
        if (obj->Type->data[justina_smo_B.kstr_f] !=
            justina_smo_B.b_mc[justina_smo_B.kstr_f]) {
          exitg1 = 1;
        } else {
          justina_smo_B.b_kstr_h++;
        }
      } else {
        justina_smo_B.b_bool_j = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (justina_smo_B.b_bool_j) {
    justina_smo_B.b_kstr_h = 0;
  } else {
    for (justina_smo_B.b_kstr_h = 0; justina_smo_B.b_kstr_h < 8;
         justina_smo_B.b_kstr_h++) {
      justina_smo_B.b_j[justina_smo_B.b_kstr_h] = tmp_0[justina_smo_B.b_kstr_h];
    }

    justina_smo_B.b_bool_j = false;
    if (obj->Type->size[1] == 8) {
      justina_smo_B.b_kstr_h = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr_h - 1 < 8) {
          justina_smo_B.kstr_f = justina_smo_B.b_kstr_h - 1;
          if (obj->Type->data[justina_smo_B.kstr_f] !=
              justina_smo_B.b_j[justina_smo_B.kstr_f]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr_h++;
          }
        } else {
          justina_smo_B.b_bool_j = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_bool_j) {
      justina_smo_B.b_kstr_h = 1;
    } else {
      justina_smo_B.b_kstr_h = -1;
    }
  }

  switch (justina_smo_B.b_kstr_h) {
   case 0:
    memset(&justina_smo_B.TJ_b[0], 0, sizeof(real_T) << 4U);
    justina_smo_B.TJ_b[0] = 1.0;
    justina_smo_B.TJ_b[5] = 1.0;
    justina_smo_B.TJ_b[10] = 1.0;
    justina_smo_B.TJ_b[15] = 1.0;
    break;

   case 1:
    rigidBodyJoint_get_JointAxis_o(obj, justina_smo_B.v_a);
    justina_smo_B.axang_idx_0 = justina_smo_B.v_a[0];
    justina_smo_B.axang_idx_1 = justina_smo_B.v_a[1];
    justina_smo_B.axang_idx_2 = justina_smo_B.v_a[2];
    justina_smo_B.b_f = 1.0 / sqrt((justina_smo_B.axang_idx_0 *
      justina_smo_B.axang_idx_0 + justina_smo_B.axang_idx_1 *
      justina_smo_B.axang_idx_1) + justina_smo_B.axang_idx_2 *
      justina_smo_B.axang_idx_2);
    justina_smo_B.v_a[0] = justina_smo_B.axang_idx_0 * justina_smo_B.b_f;
    justina_smo_B.v_a[1] = justina_smo_B.axang_idx_1 * justina_smo_B.b_f;
    justina_smo_B.v_a[2] = justina_smo_B.axang_idx_2 * justina_smo_B.b_f;
    justina_smo_B.axang_idx_0 = justina_smo_B.v_a[1] * justina_smo_B.v_a[0] *
      0.0;
    justina_smo_B.axang_idx_1 = justina_smo_B.v_a[2] * justina_smo_B.v_a[0] *
      0.0;
    justina_smo_B.axang_idx_2 = justina_smo_B.v_a[2] * justina_smo_B.v_a[1] *
      0.0;
    justina_smo_cat(justina_smo_B.v_a[0] * justina_smo_B.v_a[0] * 0.0 + 1.0,
                    justina_smo_B.axang_idx_0 - justina_smo_B.v_a[2] * 0.0,
                    justina_smo_B.axang_idx_1 + justina_smo_B.v_a[1] * 0.0,
                    justina_smo_B.axang_idx_0 + justina_smo_B.v_a[2] * 0.0,
                    justina_smo_B.v_a[1] * justina_smo_B.v_a[1] * 0.0 + 1.0,
                    justina_smo_B.axang_idx_2 - justina_smo_B.v_a[0] * 0.0,
                    justina_smo_B.axang_idx_1 - justina_smo_B.v_a[1] * 0.0,
                    justina_smo_B.axang_idx_2 + justina_smo_B.v_a[0] * 0.0,
                    justina_smo_B.v_a[2] * justina_smo_B.v_a[2] * 0.0 + 1.0,
                    justina_smo_B.tempR_d);
    for (justina_smo_B.b_kstr_h = 0; justina_smo_B.b_kstr_h < 3;
         justina_smo_B.b_kstr_h++) {
      justina_smo_B.kstr_f = justina_smo_B.b_kstr_h + 1;
      justina_smo_B.R_ld[justina_smo_B.kstr_f - 1] = justina_smo_B.tempR_d
        [(justina_smo_B.kstr_f - 1) * 3];
      justina_smo_B.kstr_f = justina_smo_B.b_kstr_h + 1;
      justina_smo_B.R_ld[justina_smo_B.kstr_f + 2] = justina_smo_B.tempR_d
        [(justina_smo_B.kstr_f - 1) * 3 + 1];
      justina_smo_B.kstr_f = justina_smo_B.b_kstr_h + 1;
      justina_smo_B.R_ld[justina_smo_B.kstr_f + 5] = justina_smo_B.tempR_d
        [(justina_smo_B.kstr_f - 1) * 3 + 2];
    }

    memset(&justina_smo_B.TJ_b[0], 0, sizeof(real_T) << 4U);
    for (justina_smo_B.b_kstr_h = 0; justina_smo_B.b_kstr_h < 3;
         justina_smo_B.b_kstr_h++) {
      justina_smo_B.kstr_f = justina_smo_B.b_kstr_h << 2;
      justina_smo_B.TJ_b[justina_smo_B.kstr_f] = justina_smo_B.R_ld[3 *
        justina_smo_B.b_kstr_h];
      justina_smo_B.TJ_b[justina_smo_B.kstr_f + 1] = justina_smo_B.R_ld[3 *
        justina_smo_B.b_kstr_h + 1];
      justina_smo_B.TJ_b[justina_smo_B.kstr_f + 2] = justina_smo_B.R_ld[3 *
        justina_smo_B.b_kstr_h + 2];
    }

    justina_smo_B.TJ_b[15] = 1.0;
    break;

   default:
    rigidBodyJoint_get_JointAxis_o(obj, justina_smo_B.v_a);
    memset(&justina_smo_B.tempR_d[0], 0, 9U * sizeof(real_T));
    justina_smo_B.tempR_d[0] = 1.0;
    justina_smo_B.tempR_d[4] = 1.0;
    justina_smo_B.tempR_d[8] = 1.0;
    for (justina_smo_B.b_kstr_h = 0; justina_smo_B.b_kstr_h < 3;
         justina_smo_B.b_kstr_h++) {
      justina_smo_B.kstr_f = justina_smo_B.b_kstr_h << 2;
      justina_smo_B.TJ_b[justina_smo_B.kstr_f] = justina_smo_B.tempR_d[3 *
        justina_smo_B.b_kstr_h];
      justina_smo_B.TJ_b[justina_smo_B.kstr_f + 1] = justina_smo_B.tempR_d[3 *
        justina_smo_B.b_kstr_h + 1];
      justina_smo_B.TJ_b[justina_smo_B.kstr_f + 2] = justina_smo_B.tempR_d[3 *
        justina_smo_B.b_kstr_h + 2];
      justina_smo_B.TJ_b[justina_smo_B.b_kstr_h + 12] =
        justina_smo_B.v_a[justina_smo_B.b_kstr_h] * 0.0;
    }

    justina_smo_B.TJ_b[3] = 0.0;
    justina_smo_B.TJ_b[7] = 0.0;
    justina_smo_B.TJ_b[11] = 0.0;
    justina_smo_B.TJ_b[15] = 1.0;
    break;
  }

  for (justina_smo_B.b_kstr_h = 0; justina_smo_B.b_kstr_h < 4;
       justina_smo_B.b_kstr_h++) {
    for (justina_smo_B.kstr_f = 0; justina_smo_B.kstr_f < 4;
         justina_smo_B.kstr_f++) {
      justina_smo_B.obj_tmp_tmp_c = justina_smo_B.kstr_f << 2;
      justina_smo_B.obj_tmp_e = justina_smo_B.b_kstr_h +
        justina_smo_B.obj_tmp_tmp_c;
      justina_smo_B.obj_p[justina_smo_B.obj_tmp_e] = 0.0;
      justina_smo_B.obj_p[justina_smo_B.obj_tmp_e] +=
        justina_smo_B.TJ_b[justina_smo_B.obj_tmp_tmp_c] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_h];
      justina_smo_B.obj_p[justina_smo_B.obj_tmp_e] +=
        justina_smo_B.TJ_b[justina_smo_B.obj_tmp_tmp_c + 1] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_h + 4];
      justina_smo_B.obj_p[justina_smo_B.obj_tmp_e] +=
        justina_smo_B.TJ_b[justina_smo_B.obj_tmp_tmp_c + 2] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_h + 8];
      justina_smo_B.obj_p[justina_smo_B.obj_tmp_e] +=
        justina_smo_B.TJ_b[justina_smo_B.obj_tmp_tmp_c + 3] *
        obj->JointToParentTransform[justina_smo_B.b_kstr_h + 12];
    }

    for (justina_smo_B.kstr_f = 0; justina_smo_B.kstr_f < 4;
         justina_smo_B.kstr_f++) {
      justina_smo_B.obj_tmp_tmp_c = justina_smo_B.kstr_f << 2;
      justina_smo_B.obj_tmp_e = justina_smo_B.b_kstr_h +
        justina_smo_B.obj_tmp_tmp_c;
      T[justina_smo_B.obj_tmp_e] = 0.0;
      T[justina_smo_B.obj_tmp_e] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp_c] *
        justina_smo_B.obj_p[justina_smo_B.b_kstr_h];
      T[justina_smo_B.obj_tmp_e] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp_c + 1] *
        justina_smo_B.obj_p[justina_smo_B.b_kstr_h + 4];
      T[justina_smo_B.obj_tmp_e] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp_c + 2] *
        justina_smo_B.obj_p[justina_smo_B.b_kstr_h + 8];
      T[justina_smo_B.obj_tmp_e] += obj->
        ChildToJointTransform[justina_smo_B.obj_tmp_tmp_c + 3] *
        justina_smo_B.obj_p[justina_smo_B.b_kstr_h + 12];
    }
  }
}

static void justina_smo_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (justina_smo_B.i3 = 0; justina_smo_B.i3 < 3; justina_smo_B.i3++) {
    justina_smo_B.R_ln[3 * justina_smo_B.i3] = T[justina_smo_B.i3];
    justina_smo_B.R_ln[3 * justina_smo_B.i3 + 1] = T[justina_smo_B.i3 + 4];
    justina_smo_B.R_ln[3 * justina_smo_B.i3 + 2] = T[justina_smo_B.i3 + 8];
  }

  for (justina_smo_B.i3 = 0; justina_smo_B.i3 < 9; justina_smo_B.i3++) {
    justina_smo_B.R_h[justina_smo_B.i3] = -justina_smo_B.R_ln[justina_smo_B.i3];
  }

  for (justina_smo_B.i3 = 0; justina_smo_B.i3 < 3; justina_smo_B.i3++) {
    justina_smo_B.Tinv_tmp = justina_smo_B.i3 << 2;
    Tinv[justina_smo_B.Tinv_tmp] = justina_smo_B.R_ln[3 * justina_smo_B.i3];
    Tinv[justina_smo_B.Tinv_tmp + 1] = justina_smo_B.R_ln[3 * justina_smo_B.i3 +
      1];
    Tinv[justina_smo_B.Tinv_tmp + 2] = justina_smo_B.R_ln[3 * justina_smo_B.i3 +
      2];
    Tinv[justina_smo_B.i3 + 12] = justina_smo_B.R_h[justina_smo_B.i3 + 6] * T[14]
      + (justina_smo_B.R_h[justina_smo_B.i3 + 3] * T[13] +
         justina_smo_B.R_h[justina_smo_B.i3] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void justina_smo_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  justina_smo_B.dv3[0] = 0.0;
  justina_smo_B.dv3[3] = -T[14];
  justina_smo_B.dv3[6] = T[13];
  justina_smo_B.dv3[1] = T[14];
  justina_smo_B.dv3[4] = 0.0;
  justina_smo_B.dv3[7] = -T[12];
  justina_smo_B.dv3[2] = -T[13];
  justina_smo_B.dv3[5] = T[12];
  justina_smo_B.dv3[8] = 0.0;
  for (justina_smo_B.i1 = 0; justina_smo_B.i1 < 3; justina_smo_B.i1++) {
    for (justina_smo_B.X_tmp_m = 0; justina_smo_B.X_tmp_m < 3;
         justina_smo_B.X_tmp_m++) {
      justina_smo_B.X_tmp_c = justina_smo_B.i1 + 3 * justina_smo_B.X_tmp_m;
      justina_smo_B.dv4[justina_smo_B.X_tmp_c] = 0.0;
      justina_smo_B.i2 = justina_smo_B.X_tmp_m << 2;
      justina_smo_B.dv4[justina_smo_B.X_tmp_c] += T[justina_smo_B.i2] *
        justina_smo_B.dv3[justina_smo_B.i1];
      justina_smo_B.dv4[justina_smo_B.X_tmp_c] += T[justina_smo_B.i2 + 1] *
        justina_smo_B.dv3[justina_smo_B.i1 + 3];
      justina_smo_B.dv4[justina_smo_B.X_tmp_c] += T[justina_smo_B.i2 + 2] *
        justina_smo_B.dv3[justina_smo_B.i1 + 6];
      X[justina_smo_B.X_tmp_m + 6 * justina_smo_B.i1] = T[(justina_smo_B.i1 << 2)
        + justina_smo_B.X_tmp_m];
      X[justina_smo_B.X_tmp_m + 6 * (justina_smo_B.i1 + 3)] = 0.0;
    }
  }

  for (justina_smo_B.i1 = 0; justina_smo_B.i1 < 3; justina_smo_B.i1++) {
    X[6 * justina_smo_B.i1 + 3] = justina_smo_B.dv4[3 * justina_smo_B.i1];
    justina_smo_B.X_tmp_m = justina_smo_B.i1 << 2;
    justina_smo_B.X_tmp_c = 6 * (justina_smo_B.i1 + 3);
    X[justina_smo_B.X_tmp_c + 3] = T[justina_smo_B.X_tmp_m];
    X[6 * justina_smo_B.i1 + 4] = justina_smo_B.dv4[3 * justina_smo_B.i1 + 1];
    X[justina_smo_B.X_tmp_c + 4] = T[justina_smo_B.X_tmp_m + 1];
    X[6 * justina_smo_B.i1 + 5] = justina_smo_B.dv4[3 * justina_smo_B.i1 + 2];
    X[justina_smo_B.X_tmp_c + 5] = T[justina_smo_B.X_tmp_m + 2];
  }
}

static void justina_smo_emxFree_real_T(emxArray_real_T_justina_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_justina_smo_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_justina_smo_T *)NULL;
  }
}

static void justina_sm_emxFree_f_cell_wrap1(emxArray_f_cell_wrap_justin_o_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_justin_o_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_justina_smo_o_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_justin_o_T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMatri(q_robotics_manip_internal_R_o_T
  *robot, const real_T q[7], emxArray_real_T_justina_smo_T *H)
{
  emxArray_f_cell_wrap_justin_o_T *Ic;
  emxArray_f_cell_wrap_justin_o_T *X;
  emxArray_real_T_justina_smo_T *Si;
  emxArray_real_T_justina_smo_T *Fi;
  emxArray_real_T_justina_smo_T *Hji;
  o_robotics_manip_internal_R_o_T *obj;
  justina_smo_B.nb_lm = robot->NumBodies;
  justina_smo_B.vNum_m = robot->VelocityNumber;
  justina_smo_B.f_m = H->size[0] * H->size[1];
  justina_smo_B.c_tmp = static_cast<int32_T>(justina_smo_B.vNum_m);
  H->size[0] = justina_smo_B.c_tmp;
  H->size[1] = justina_smo_B.c_tmp;
  justin_emxEnsureCapacity_real_T(H, justina_smo_B.f_m);
  justina_smo_B.loop_ub_o = justina_smo_B.c_tmp * justina_smo_B.c_tmp - 1;
  for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.loop_ub_o;
       justina_smo_B.f_m++) {
    H->data[justina_smo_B.f_m] = 0.0;
  }

  justina_sm_emxInit_f_cell_wrap1(&Ic, 2);
  justina_sm_emxInit_f_cell_wrap1(&X, 2);
  justina_smo_B.c_tmp = static_cast<int32_T>(justina_smo_B.nb_lm);
  justina_smo_B.c = justina_smo_B.c_tmp - 1;
  justina_smo_B.f_m = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = justina_smo_B.c_tmp;
  emxEnsureCapacity_f_cell_wrap1(Ic, justina_smo_B.f_m);
  justina_smo_B.f_m = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = justina_smo_B.c_tmp;
  emxEnsureCapacity_f_cell_wrap1(X, justina_smo_B.f_m);
  for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp <= justina_smo_B.c;
       justina_smo_B.c_tmp++) {
    for (justina_smo_B.f_m = 0; justina_smo_B.f_m < 36; justina_smo_B.f_m++) {
      Ic->data[justina_smo_B.c_tmp].f1[justina_smo_B.f_m] = robot->
        Bodies[justina_smo_B.c_tmp]->SpatialInertia[justina_smo_B.f_m];
    }

    justina_smo_B.vNum_m = robot->PositionDoFMap[justina_smo_B.c_tmp];
    justina_smo_B.p_idx_1_f = robot->PositionDoFMap[justina_smo_B.c_tmp + 10];
    if (justina_smo_B.p_idx_1_f < justina_smo_B.vNum_m) {
      obj = robot->Bodies[justina_smo_B.c_tmp];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, justina_smo_B.T_f);
    } else {
      if (justina_smo_B.vNum_m > justina_smo_B.p_idx_1_f) {
        justina_smo_B.g = 0;
        justina_smo_B.f_m = -1;
      } else {
        justina_smo_B.g = static_cast<int32_T>(justina_smo_B.vNum_m) - 1;
        justina_smo_B.f_m = static_cast<int32_T>(justina_smo_B.p_idx_1_f) - 1;
      }

      obj = robot->Bodies[justina_smo_B.c_tmp];
      justina_smo_B.loop_ub_o = justina_smo_B.f_m - justina_smo_B.g;
      justina_smo_B.q_size_k = justina_smo_B.loop_ub_o + 1;
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.loop_ub_o;
           justina_smo_B.f_m++) {
        justina_smo_B.q_data_d[justina_smo_B.f_m] = q[justina_smo_B.g +
          justina_smo_B.f_m];
      }

      rigidBodyJoint_transformBodyT_o(&obj->JointInternal,
        justina_smo_B.q_data_d, &justina_smo_B.q_size_k, justina_smo_B.T_f);
    }

    justina_smo_tforminv(justina_smo_B.T_f, justina_smo_B.dv1);
    justina_smo_tformToSpatialXform(justina_smo_B.dv1, X->
      data[justina_smo_B.c_tmp].f1);
  }

  justina_smo_B.g = static_cast<int32_T>(((-1.0 - justina_smo_B.nb_lm) + 1.0) /
    -1.0) - 1;
  justina_smo_emxInit_real_T(&Si, 2);
  justina_smo_emxInit_real_T(&Fi, 2);
  justina_smo_emxInit_real_T(&Hji, 2);
  for (justina_smo_B.c = 0; justina_smo_B.c <= justina_smo_B.g; justina_smo_B.c
       ++) {
    justina_smo_B.n_n = static_cast<int32_T>(justina_smo_B.nb_lm + -static_cast<
      real_T>(justina_smo_B.c));
    justina_smo_B.pid_tmp_i = justina_smo_B.n_n - 1;
    justina_smo_B.pid_m = robot->Bodies[justina_smo_B.pid_tmp_i]->ParentIndex;
    justina_smo_B.vNum_m = robot->VelocityDoFMap[justina_smo_B.n_n - 1];
    justina_smo_B.p_idx_1_f = robot->VelocityDoFMap[justina_smo_B.n_n + 9];
    if (justina_smo_B.pid_m > 0.0) {
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m < 6; justina_smo_B.f_m++) {
        for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < 6;
             justina_smo_B.c_tmp++) {
          justina_smo_B.X_tmp_o = justina_smo_B.f_m + 6 * justina_smo_B.c_tmp;
          justina_smo_B.X_c[justina_smo_B.X_tmp_o] = 0.0;
          for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
               justina_smo_B.loop_ub_o++) {
            justina_smo_B.X_c[justina_smo_B.X_tmp_o] += X->
              data[justina_smo_B.pid_tmp_i].f1[6 * justina_smo_B.f_m +
              justina_smo_B.loop_ub_o] * Ic->data[justina_smo_B.pid_tmp_i].f1[6 *
              justina_smo_B.c_tmp + justina_smo_B.loop_ub_o];
          }
        }
      }

      for (justina_smo_B.f_m = 0; justina_smo_B.f_m < 6; justina_smo_B.f_m++) {
        for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < 6;
             justina_smo_B.c_tmp++) {
          justina_smo_B.b_idx_0_p = 0.0;
          for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
               justina_smo_B.loop_ub_o++) {
            justina_smo_B.b_idx_0_p += justina_smo_B.X_c[6 *
              justina_smo_B.loop_ub_o + justina_smo_B.f_m] * X->
              data[justina_smo_B.pid_tmp_i].f1[6 * justina_smo_B.c_tmp +
              justina_smo_B.loop_ub_o];
          }

          justina_smo_B.loop_ub_o = 6 * justina_smo_B.c_tmp + justina_smo_B.f_m;
          Ic->data[static_cast<int32_T>(justina_smo_B.pid_m) - 1]
            .f1[justina_smo_B.loop_ub_o] += justina_smo_B.b_idx_0_p;
        }
      }
    }

    justina_smo_B.b_idx_0_p = robot->VelocityDoFMap[justina_smo_B.n_n - 1];
    justina_smo_B.b_idx_1_e = robot->VelocityDoFMap[justina_smo_B.n_n + 9];
    if (justina_smo_B.b_idx_0_p <= justina_smo_B.b_idx_1_e) {
      obj = robot->Bodies[justina_smo_B.pid_tmp_i];
      justina_smo_B.f_m = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f_m);
      justina_smo_B.loop_ub_o = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.loop_ub_o;
           justina_smo_B.f_m++) {
        Si->data[justina_smo_B.f_m] = obj->JointInternal.MotionSubspace->
          data[justina_smo_B.f_m];
      }

      justina_smo_B.n_n = Si->size[1] - 1;
      justina_smo_B.f_m = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      justin_emxEnsureCapacity_real_T(Fi, justina_smo_B.f_m);
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.n_n;
           justina_smo_B.f_m++) {
        justina_smo_B.X_tmp_o = justina_smo_B.f_m * 6 - 1;
        for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < 6;
             justina_smo_B.c_tmp++) {
          justina_smo_B.s_c = 0.0;
          for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
               justina_smo_B.loop_ub_o++) {
            justina_smo_B.s_c += Ic->data[justina_smo_B.pid_tmp_i]
              .f1[justina_smo_B.loop_ub_o * 6 + justina_smo_B.c_tmp] * Si->data
              [(justina_smo_B.X_tmp_o + justina_smo_B.loop_ub_o) + 1];
          }

          Fi->data[(justina_smo_B.X_tmp_o + justina_smo_B.c_tmp) + 1] =
            justina_smo_B.s_c;
        }
      }

      if (justina_smo_B.vNum_m > justina_smo_B.p_idx_1_f) {
        justina_smo_B.X_tmp_o = 0;
        justina_smo_B.cb_o = 0;
      } else {
        justina_smo_B.X_tmp_o = static_cast<int32_T>(justina_smo_B.vNum_m) - 1;
        justina_smo_B.cb_o = justina_smo_B.X_tmp_o;
      }

      justina_smo_B.m_l = Si->size[1];
      justina_smo_B.n_n = Fi->size[1] - 1;
      justina_smo_B.f_m = Hji->size[0] * Hji->size[1];
      Hji->size[0] = Si->size[1];
      Hji->size[1] = Fi->size[1];
      justin_emxEnsureCapacity_real_T(Hji, justina_smo_B.f_m);
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.n_n;
           justina_smo_B.f_m++) {
        justina_smo_B.coffset_p = justina_smo_B.f_m * justina_smo_B.m_l - 1;
        justina_smo_B.boffset_p = justina_smo_B.f_m * 6 - 1;
        for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < justina_smo_B.m_l;
             justina_smo_B.c_tmp++) {
          justina_smo_B.aoffset_f = justina_smo_B.c_tmp * 6 - 1;
          justina_smo_B.s_c = 0.0;
          for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
               justina_smo_B.loop_ub_o++) {
            justina_smo_B.k_i = justina_smo_B.loop_ub_o + 1;
            justina_smo_B.s_c += Si->data[justina_smo_B.aoffset_f +
              justina_smo_B.k_i] * Fi->data[justina_smo_B.boffset_p +
              justina_smo_B.k_i];
          }

          Hji->data[(justina_smo_B.coffset_p + justina_smo_B.c_tmp) + 1] =
            justina_smo_B.s_c;
        }
      }

      justina_smo_B.loop_ub_o = Hji->size[1];
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m < justina_smo_B.loop_ub_o;
           justina_smo_B.f_m++) {
        justina_smo_B.n_n = Hji->size[0];
        for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < justina_smo_B.n_n;
             justina_smo_B.c_tmp++) {
          H->data[(justina_smo_B.X_tmp_o + justina_smo_B.c_tmp) + H->size[0] *
            (justina_smo_B.cb_o + justina_smo_B.f_m)] = Hji->data[Hji->size[0] *
            justina_smo_B.f_m + justina_smo_B.c_tmp];
        }
      }

      justina_smo_B.n_n = Fi->size[1];
      justina_smo_B.f_m = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = Fi->size[1];
      justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f_m);
      justina_smo_B.loop_ub_o = Fi->size[0] * Fi->size[1] - 1;
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.loop_ub_o;
           justina_smo_B.f_m++) {
        Si->data[justina_smo_B.f_m] = Fi->data[justina_smo_B.f_m];
      }

      justina_smo_B.f_m = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = justina_smo_B.n_n;
      justin_emxEnsureCapacity_real_T(Fi, justina_smo_B.f_m);
      for (justina_smo_B.f_m = 0; justina_smo_B.f_m < justina_smo_B.n_n;
           justina_smo_B.f_m++) {
        justina_smo_B.X_tmp_o = justina_smo_B.f_m * 6 - 1;
        for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < 6;
             justina_smo_B.c_tmp++) {
          justina_smo_B.aoffset_f = justina_smo_B.c_tmp * 6 - 1;
          justina_smo_B.s_c = 0.0;
          for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
               justina_smo_B.loop_ub_o++) {
            justina_smo_B.k_i = justina_smo_B.loop_ub_o + 1;
            justina_smo_B.s_c += X->data[justina_smo_B.pid_tmp_i]
              .f1[justina_smo_B.aoffset_f + justina_smo_B.k_i] * Si->
              data[justina_smo_B.X_tmp_o + justina_smo_B.k_i];
          }

          Fi->data[(justina_smo_B.X_tmp_o + justina_smo_B.c_tmp) + 1] =
            justina_smo_B.s_c;
        }
      }

      while (justina_smo_B.pid_m > 0.0) {
        justina_smo_B.c_tmp = static_cast<int32_T>(justina_smo_B.pid_m);
        justina_smo_B.pid_tmp_i = justina_smo_B.c_tmp - 1;
        obj = robot->Bodies[justina_smo_B.pid_tmp_i];
        justina_smo_B.f_m = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
        justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f_m);
        justina_smo_B.loop_ub_o = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.loop_ub_o;
             justina_smo_B.f_m++) {
          Si->data[justina_smo_B.f_m] = obj->JointInternal.MotionSubspace->
            data[justina_smo_B.f_m];
        }

        justina_smo_B.b_idx_0_p = robot->VelocityDoFMap[justina_smo_B.c_tmp - 1];
        justina_smo_B.b_idx_1_e = robot->VelocityDoFMap[justina_smo_B.c_tmp + 9];
        if (justina_smo_B.b_idx_0_p <= justina_smo_B.b_idx_1_e) {
          justina_smo_B.m_l = Si->size[1];
          justina_smo_B.n_n = Fi->size[1] - 1;
          justina_smo_B.f_m = Hji->size[0] * Hji->size[1];
          Hji->size[0] = Si->size[1];
          Hji->size[1] = Fi->size[1];
          justin_emxEnsureCapacity_real_T(Hji, justina_smo_B.f_m);
          for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.n_n;
               justina_smo_B.f_m++) {
            justina_smo_B.coffset_p = justina_smo_B.f_m * justina_smo_B.m_l - 1;
            justina_smo_B.boffset_p = justina_smo_B.f_m * 6 - 1;
            for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp <
                 justina_smo_B.m_l; justina_smo_B.c_tmp++) {
              justina_smo_B.aoffset_f = justina_smo_B.c_tmp * 6 - 1;
              justina_smo_B.s_c = 0.0;
              for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
                   justina_smo_B.loop_ub_o++) {
                justina_smo_B.k_i = justina_smo_B.loop_ub_o + 1;
                justina_smo_B.s_c += Si->data[justina_smo_B.aoffset_f +
                  justina_smo_B.k_i] * Fi->data[justina_smo_B.boffset_p +
                  justina_smo_B.k_i];
              }

              Hji->data[(justina_smo_B.coffset_p + justina_smo_B.c_tmp) + 1] =
                justina_smo_B.s_c;
            }
          }

          if (justina_smo_B.b_idx_0_p > justina_smo_B.b_idx_1_e) {
            justina_smo_B.X_tmp_o = 0;
          } else {
            justina_smo_B.X_tmp_o = static_cast<int32_T>(justina_smo_B.b_idx_0_p)
              - 1;
          }

          if (justina_smo_B.vNum_m > justina_smo_B.p_idx_1_f) {
            justina_smo_B.cb_o = 0;
          } else {
            justina_smo_B.cb_o = static_cast<int32_T>(justina_smo_B.vNum_m) - 1;
          }

          justina_smo_B.loop_ub_o = Hji->size[1];
          for (justina_smo_B.f_m = 0; justina_smo_B.f_m <
               justina_smo_B.loop_ub_o; justina_smo_B.f_m++) {
            justina_smo_B.n_n = Hji->size[0];
            for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp <
                 justina_smo_B.n_n; justina_smo_B.c_tmp++) {
              H->data[(justina_smo_B.X_tmp_o + justina_smo_B.c_tmp) + H->size[0]
                * (justina_smo_B.cb_o + justina_smo_B.f_m)] = Hji->data
                [Hji->size[0] * justina_smo_B.f_m + justina_smo_B.c_tmp];
            }
          }

          if (justina_smo_B.vNum_m > justina_smo_B.p_idx_1_f) {
            justina_smo_B.X_tmp_o = 0;
          } else {
            justina_smo_B.X_tmp_o = static_cast<int32_T>(justina_smo_B.vNum_m) -
              1;
          }

          if (justina_smo_B.b_idx_0_p > justina_smo_B.b_idx_1_e) {
            justina_smo_B.cb_o = 0;
          } else {
            justina_smo_B.cb_o = static_cast<int32_T>(justina_smo_B.b_idx_0_p) -
              1;
          }

          justina_smo_B.loop_ub_o = Hji->size[0];
          for (justina_smo_B.f_m = 0; justina_smo_B.f_m <
               justina_smo_B.loop_ub_o; justina_smo_B.f_m++) {
            justina_smo_B.n_n = Hji->size[1];
            for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp <
                 justina_smo_B.n_n; justina_smo_B.c_tmp++) {
              H->data[(justina_smo_B.X_tmp_o + justina_smo_B.c_tmp) + H->size[0]
                * (justina_smo_B.cb_o + justina_smo_B.f_m)] = Hji->data
                [Hji->size[0] * justina_smo_B.c_tmp + justina_smo_B.f_m];
            }
          }
        }

        justina_smo_B.n_n = Fi->size[1];
        justina_smo_B.f_m = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = Fi->size[1];
        justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f_m);
        justina_smo_B.loop_ub_o = Fi->size[0] * Fi->size[1] - 1;
        for (justina_smo_B.f_m = 0; justina_smo_B.f_m <= justina_smo_B.loop_ub_o;
             justina_smo_B.f_m++) {
          Si->data[justina_smo_B.f_m] = Fi->data[justina_smo_B.f_m];
        }

        justina_smo_B.f_m = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = justina_smo_B.n_n;
        justin_emxEnsureCapacity_real_T(Fi, justina_smo_B.f_m);
        for (justina_smo_B.f_m = 0; justina_smo_B.f_m < justina_smo_B.n_n;
             justina_smo_B.f_m++) {
          justina_smo_B.X_tmp_o = justina_smo_B.f_m * 6 - 1;
          for (justina_smo_B.c_tmp = 0; justina_smo_B.c_tmp < 6;
               justina_smo_B.c_tmp++) {
            justina_smo_B.aoffset_f = justina_smo_B.c_tmp * 6 - 1;
            justina_smo_B.s_c = 0.0;
            for (justina_smo_B.loop_ub_o = 0; justina_smo_B.loop_ub_o < 6;
                 justina_smo_B.loop_ub_o++) {
              justina_smo_B.k_i = justina_smo_B.loop_ub_o + 1;
              justina_smo_B.s_c += X->data[justina_smo_B.pid_tmp_i]
                .f1[justina_smo_B.aoffset_f + justina_smo_B.k_i] * Si->
                data[justina_smo_B.X_tmp_o + justina_smo_B.k_i];
            }

            Fi->data[(justina_smo_B.X_tmp_o + justina_smo_B.c_tmp) + 1] =
              justina_smo_B.s_c;
          }
        }

        justina_smo_B.pid_m = robot->Bodies[justina_smo_B.pid_tmp_i]
          ->ParentIndex;
      }
    }
  }

  justina_smo_emxFree_real_T(&Hji);
  justina_smo_emxFree_real_T(&Fi);
  justina_smo_emxFree_real_T(&Si);
  justina_sm_emxFree_f_cell_wrap1(&X);
  justina_sm_emxFree_f_cell_wrap1(&Ic);
}

static void justina_smo_emxInit_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_justina__T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_f_cell_wrap_justina__T *)malloc(sizeof
    (emxArray_f_cell_wrap_justina__T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_justina_smo_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void justina_smo_emxInit_char_T(emxArray_char_T_justina_smo_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_char_T_justina_smo_T *emxArray;
  *pEmxArray = (emxArray_char_T_justina_smo_T *)malloc(sizeof
    (emxArray_char_T_justina_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_smo_B.i_pc = 0; justina_smo_B.i_pc < numDimensions;
       justina_smo_B.i_pc++) {
    emxArray->size[justina_smo_B.i_pc] = 0;
  }
}

static void j_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_justina__T
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

    newData = calloc(static_cast<uint32_T>(i), sizeof(f_cell_wrap_justina_smo_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_justina_smo_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_justina_smo_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void justin_emxEnsureCapacity_char_T(emxArray_char_T_justina_smo_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_smo_B.newNumel_h = 1;
  for (justina_smo_B.i_m = 0; justina_smo_B.i_m < emxArray->numDimensions;
       justina_smo_B.i_m++) {
    justina_smo_B.newNumel_h *= emxArray->size[justina_smo_B.i_m];
  }

  if (justina_smo_B.newNumel_h > emxArray->allocatedSize) {
    justina_smo_B.i_m = emxArray->allocatedSize;
    if (justina_smo_B.i_m < 16) {
      justina_smo_B.i_m = 16;
    }

    while (justina_smo_B.i_m < justina_smo_B.newNumel_h) {
      if (justina_smo_B.i_m > 1073741823) {
        justina_smo_B.i_m = MAX_int32_T;
      } else {
        justina_smo_B.i_m <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_smo_B.i_m), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = justina_smo_B.i_m;
    emxArray->canFreeData = true;
  }
}

static void ju_rigidBodyJoint_get_JointAxis(const c_rigidBodyJoint_justina_smo_T
  *obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (justina_smo_B.b_kstr_p = 0; justina_smo_B.b_kstr_p < 8;
       justina_smo_B.b_kstr_p++) {
    justina_smo_B.b_c0[justina_smo_B.b_kstr_p] = tmp[justina_smo_B.b_kstr_p];
  }

  justina_smo_B.b_bool_a = false;
  if (obj->Type->size[1] == 8) {
    justina_smo_B.b_kstr_p = 1;
    do {
      exitg1 = 0;
      if (justina_smo_B.b_kstr_p - 1 < 8) {
        justina_smo_B.kstr_a = justina_smo_B.b_kstr_p - 1;
        if (obj->Type->data[justina_smo_B.kstr_a] !=
            justina_smo_B.b_c0[justina_smo_B.kstr_a]) {
          exitg1 = 1;
        } else {
          justina_smo_B.b_kstr_p++;
        }
      } else {
        justina_smo_B.b_bool_a = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (justina_smo_B.b_bool_a) {
    guard1 = true;
  } else {
    for (justina_smo_B.b_kstr_p = 0; justina_smo_B.b_kstr_p < 9;
         justina_smo_B.b_kstr_p++) {
      justina_smo_B.b_c[justina_smo_B.b_kstr_p] = tmp_0[justina_smo_B.b_kstr_p];
    }

    justina_smo_B.b_bool_a = false;
    if (obj->Type->size[1] == 9) {
      justina_smo_B.b_kstr_p = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr_p - 1 < 9) {
          justina_smo_B.kstr_a = justina_smo_B.b_kstr_p - 1;
          if (obj->Type->data[justina_smo_B.kstr_a] !=
              justina_smo_B.b_c[justina_smo_B.kstr_a]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr_p++;
          }
        } else {
          justina_smo_B.b_bool_a = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_bool_a) {
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

static void justina_smo_emxFree_char_T(emxArray_char_T_justina_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_justina_smo_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_justina_smo_T *)NULL;
  }
}

static void RigidBodyTree_forwardKinematics(q_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[7], emxArray_f_cell_wrap_justina__T *Ttree)
{
  o_robotics_manip_internal_Rig_T *body;
  emxArray_char_T_justina_smo_T *switch_expression;
  static const int8_T tmp[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  justina_smo_B.n = obj->NumBodies;
  for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 16;
       justina_smo_B.b_kstr_ax++) {
    justina_smo_B.c_f1[justina_smo_B.b_kstr_ax] = tmp[justina_smo_B.b_kstr_ax];
  }

  justina_smo_B.b_kstr_ax = Ttree->size[0] * Ttree->size[1];
  Ttree->size[0] = 1;
  justina_smo_B.e = static_cast<int32_T>(justina_smo_B.n);
  Ttree->size[1] = justina_smo_B.e;
  j_emxEnsureCapacity_f_cell_wrap(Ttree, justina_smo_B.b_kstr_ax);
  if (justina_smo_B.e != 0) {
    justina_smo_B.ntilecols = justina_smo_B.e - 1;
    if (0 <= justina_smo_B.ntilecols) {
      memcpy(&justina_smo_B.expl_temp.f1[0], &justina_smo_B.c_f1[0], sizeof
             (real_T) << 4U);
    }

    for (justina_smo_B.b_jtilecol = 0; justina_smo_B.b_jtilecol <=
         justina_smo_B.ntilecols; justina_smo_B.b_jtilecol++) {
      Ttree->data[justina_smo_B.b_jtilecol] = justina_smo_B.expl_temp;
    }
  }

  justina_smo_B.k = 1.0;
  justina_smo_B.ntilecols = static_cast<int32_T>(justina_smo_B.n) - 1;
  justina_smo_emxInit_char_T(&switch_expression, 2);
  if (0 <= justina_smo_B.ntilecols) {
    for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 5;
         justina_smo_B.b_kstr_ax++) {
      justina_smo_B.b_h3[justina_smo_B.b_kstr_ax] =
        tmp_0[justina_smo_B.b_kstr_ax];
    }
  }

  for (justina_smo_B.b_jtilecol = 0; justina_smo_B.b_jtilecol <=
       justina_smo_B.ntilecols; justina_smo_B.b_jtilecol++) {
    body = obj->Bodies[justina_smo_B.b_jtilecol];
    justina_smo_B.n = body->JointInternal.PositionNumber;
    justina_smo_B.n += justina_smo_B.k;
    if (justina_smo_B.k > justina_smo_B.n - 1.0) {
      justina_smo_B.e = 0;
      justina_smo_B.d = 0;
    } else {
      justina_smo_B.e = static_cast<int32_T>(justina_smo_B.k) - 1;
      justina_smo_B.d = static_cast<int32_T>(justina_smo_B.n - 1.0);
    }

    justina_smo_B.b_kstr_ax = switch_expression->size[0] *
      switch_expression->size[1];
    switch_expression->size[0] = 1;
    switch_expression->size[1] = body->JointInternal.Type->size[1];
    justin_emxEnsureCapacity_char_T(switch_expression, justina_smo_B.b_kstr_ax);
    justina_smo_B.loop_ub_d = body->JointInternal.Type->size[0] *
      body->JointInternal.Type->size[1] - 1;
    for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax <=
         justina_smo_B.loop_ub_d; justina_smo_B.b_kstr_ax++) {
      switch_expression->data[justina_smo_B.b_kstr_ax] =
        body->JointInternal.Type->data[justina_smo_B.b_kstr_ax];
    }

    justina_smo_B.b_bool_f = false;
    if (switch_expression->size[1] == 5) {
      justina_smo_B.b_kstr_ax = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr_ax - 1 < 5) {
          justina_smo_B.loop_ub_d = justina_smo_B.b_kstr_ax - 1;
          if (switch_expression->data[justina_smo_B.loop_ub_d] !=
              justina_smo_B.b_h3[justina_smo_B.loop_ub_d]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr_ax++;
          }
        } else {
          justina_smo_B.b_bool_f = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_bool_f) {
      justina_smo_B.b_kstr_ax = 0;
    } else {
      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 8;
           justina_smo_B.b_kstr_ax++) {
        justina_smo_B.b_h[justina_smo_B.b_kstr_ax] =
          tmp_1[justina_smo_B.b_kstr_ax];
      }

      justina_smo_B.b_bool_f = false;
      if (switch_expression->size[1] == 8) {
        justina_smo_B.b_kstr_ax = 1;
        do {
          exitg1 = 0;
          if (justina_smo_B.b_kstr_ax - 1 < 8) {
            justina_smo_B.loop_ub_d = justina_smo_B.b_kstr_ax - 1;
            if (switch_expression->data[justina_smo_B.loop_ub_d] !=
                justina_smo_B.b_h[justina_smo_B.loop_ub_d]) {
              exitg1 = 1;
            } else {
              justina_smo_B.b_kstr_ax++;
            }
          } else {
            justina_smo_B.b_bool_f = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (justina_smo_B.b_bool_f) {
        justina_smo_B.b_kstr_ax = 1;
      } else {
        justina_smo_B.b_kstr_ax = -1;
      }
    }

    switch (justina_smo_B.b_kstr_ax) {
     case 0:
      memset(&justina_smo_B.c_f1[0], 0, sizeof(real_T) << 4U);
      justina_smo_B.c_f1[0] = 1.0;
      justina_smo_B.c_f1[5] = 1.0;
      justina_smo_B.c_f1[10] = 1.0;
      justina_smo_B.c_f1[15] = 1.0;
      break;

     case 1:
      ju_rigidBodyJoint_get_JointAxis(&body->JointInternal, justina_smo_B.v_j);
      justina_smo_B.d -= justina_smo_B.e;
      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax <
           justina_smo_B.d; justina_smo_B.b_kstr_ax++) {
        justina_smo_B.e_data[justina_smo_B.b_kstr_ax] = justina_smo_B.e +
          justina_smo_B.b_kstr_ax;
      }

      justina_smo_B.result_data_j[0] = justina_smo_B.v_j[0];
      justina_smo_B.result_data_j[1] = justina_smo_B.v_j[1];
      justina_smo_B.result_data_j[2] = justina_smo_B.v_j[2];
      if (0 <= (justina_smo_B.d != 0) - 1) {
        justina_smo_B.result_data_j[3] = qvec[justina_smo_B.e_data[0]];
      }

      justina_smo_B.k = 1.0 / sqrt((justina_smo_B.result_data_j[0] *
        justina_smo_B.result_data_j[0] + justina_smo_B.result_data_j[1] *
        justina_smo_B.result_data_j[1]) + justina_smo_B.result_data_j[2] *
        justina_smo_B.result_data_j[2]);
      justina_smo_B.v_j[0] = justina_smo_B.result_data_j[0] * justina_smo_B.k;
      justina_smo_B.v_j[1] = justina_smo_B.result_data_j[1] * justina_smo_B.k;
      justina_smo_B.v_j[2] = justina_smo_B.result_data_j[2] * justina_smo_B.k;
      justina_smo_B.k = cos(justina_smo_B.result_data_j[3]);
      justina_smo_B.sth_i = sin(justina_smo_B.result_data_j[3]);
      justina_smo_B.tempR_l[0] = justina_smo_B.v_j[0] * justina_smo_B.v_j[0] *
        (1.0 - justina_smo_B.k) + justina_smo_B.k;
      justina_smo_B.tempR_tmp_f = justina_smo_B.v_j[1] * justina_smo_B.v_j[0] *
        (1.0 - justina_smo_B.k);
      justina_smo_B.tempR_tmp_g = justina_smo_B.v_j[2] * justina_smo_B.sth_i;
      justina_smo_B.tempR_l[1] = justina_smo_B.tempR_tmp_f -
        justina_smo_B.tempR_tmp_g;
      justina_smo_B.tempR_tmp_c = justina_smo_B.v_j[2] * justina_smo_B.v_j[0] *
        (1.0 - justina_smo_B.k);
      justina_smo_B.tempR_tmp_o = justina_smo_B.v_j[1] * justina_smo_B.sth_i;
      justina_smo_B.tempR_l[2] = justina_smo_B.tempR_tmp_c +
        justina_smo_B.tempR_tmp_o;
      justina_smo_B.tempR_l[3] = justina_smo_B.tempR_tmp_f +
        justina_smo_B.tempR_tmp_g;
      justina_smo_B.tempR_l[4] = justina_smo_B.v_j[1] * justina_smo_B.v_j[1] *
        (1.0 - justina_smo_B.k) + justina_smo_B.k;
      justina_smo_B.tempR_tmp_f = justina_smo_B.v_j[2] * justina_smo_B.v_j[1] *
        (1.0 - justina_smo_B.k);
      justina_smo_B.tempR_tmp_g = justina_smo_B.v_j[0] * justina_smo_B.sth_i;
      justina_smo_B.tempR_l[5] = justina_smo_B.tempR_tmp_f -
        justina_smo_B.tempR_tmp_g;
      justina_smo_B.tempR_l[6] = justina_smo_B.tempR_tmp_c -
        justina_smo_B.tempR_tmp_o;
      justina_smo_B.tempR_l[7] = justina_smo_B.tempR_tmp_f +
        justina_smo_B.tempR_tmp_g;
      justina_smo_B.tempR_l[8] = justina_smo_B.v_j[2] * justina_smo_B.v_j[2] *
        (1.0 - justina_smo_B.k) + justina_smo_B.k;
      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 3;
           justina_smo_B.b_kstr_ax++) {
        justina_smo_B.e = justina_smo_B.b_kstr_ax + 1;
        justina_smo_B.R_dy[justina_smo_B.e - 1] = justina_smo_B.tempR_l
          [(justina_smo_B.e - 1) * 3];
        justina_smo_B.e = justina_smo_B.b_kstr_ax + 1;
        justina_smo_B.R_dy[justina_smo_B.e + 2] = justina_smo_B.tempR_l
          [(justina_smo_B.e - 1) * 3 + 1];
        justina_smo_B.e = justina_smo_B.b_kstr_ax + 1;
        justina_smo_B.R_dy[justina_smo_B.e + 5] = justina_smo_B.tempR_l
          [(justina_smo_B.e - 1) * 3 + 2];
      }

      memset(&justina_smo_B.c_f1[0], 0, sizeof(real_T) << 4U);
      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 3;
           justina_smo_B.b_kstr_ax++) {
        justina_smo_B.d = justina_smo_B.b_kstr_ax << 2;
        justina_smo_B.c_f1[justina_smo_B.d] = justina_smo_B.R_dy[3 *
          justina_smo_B.b_kstr_ax];
        justina_smo_B.c_f1[justina_smo_B.d + 1] = justina_smo_B.R_dy[3 *
          justina_smo_B.b_kstr_ax + 1];
        justina_smo_B.c_f1[justina_smo_B.d + 2] = justina_smo_B.R_dy[3 *
          justina_smo_B.b_kstr_ax + 2];
      }

      justina_smo_B.c_f1[15] = 1.0;
      break;

     default:
      ju_rigidBodyJoint_get_JointAxis(&body->JointInternal, justina_smo_B.v_j);
      memset(&justina_smo_B.tempR_l[0], 0, 9U * sizeof(real_T));
      justina_smo_B.tempR_l[0] = 1.0;
      justina_smo_B.tempR_l[4] = 1.0;
      justina_smo_B.tempR_l[8] = 1.0;
      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 3;
           justina_smo_B.b_kstr_ax++) {
        justina_smo_B.d = justina_smo_B.b_kstr_ax << 2;
        justina_smo_B.c_f1[justina_smo_B.d] = justina_smo_B.tempR_l[3 *
          justina_smo_B.b_kstr_ax];
        justina_smo_B.c_f1[justina_smo_B.d + 1] = justina_smo_B.tempR_l[3 *
          justina_smo_B.b_kstr_ax + 1];
        justina_smo_B.c_f1[justina_smo_B.d + 2] = justina_smo_B.tempR_l[3 *
          justina_smo_B.b_kstr_ax + 2];
        justina_smo_B.c_f1[justina_smo_B.b_kstr_ax + 12] =
          justina_smo_B.v_j[justina_smo_B.b_kstr_ax] * qvec[justina_smo_B.e];
      }

      justina_smo_B.c_f1[3] = 0.0;
      justina_smo_B.c_f1[7] = 0.0;
      justina_smo_B.c_f1[11] = 0.0;
      justina_smo_B.c_f1[15] = 1.0;
      break;
    }

    for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 16;
         justina_smo_B.b_kstr_ax++) {
      justina_smo_B.a[justina_smo_B.b_kstr_ax] =
        body->JointInternal.JointToParentTransform[justina_smo_B.b_kstr_ax];
    }

    for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 16;
         justina_smo_B.b_kstr_ax++) {
      justina_smo_B.b[justina_smo_B.b_kstr_ax] =
        body->JointInternal.ChildToJointTransform[justina_smo_B.b_kstr_ax];
    }

    for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 4;
         justina_smo_B.b_kstr_ax++) {
      for (justina_smo_B.e = 0; justina_smo_B.e < 4; justina_smo_B.e++) {
        justina_smo_B.d = justina_smo_B.e << 2;
        justina_smo_B.loop_ub_d = justina_smo_B.b_kstr_ax + justina_smo_B.d;
        justina_smo_B.a_c[justina_smo_B.loop_ub_d] = 0.0;
        justina_smo_B.a_c[justina_smo_B.loop_ub_d] +=
          justina_smo_B.c_f1[justina_smo_B.d] *
          justina_smo_B.a[justina_smo_B.b_kstr_ax];
        justina_smo_B.a_c[justina_smo_B.loop_ub_d] +=
          justina_smo_B.c_f1[justina_smo_B.d + 1] *
          justina_smo_B.a[justina_smo_B.b_kstr_ax + 4];
        justina_smo_B.a_c[justina_smo_B.loop_ub_d] +=
          justina_smo_B.c_f1[justina_smo_B.d + 2] *
          justina_smo_B.a[justina_smo_B.b_kstr_ax + 8];
        justina_smo_B.a_c[justina_smo_B.loop_ub_d] +=
          justina_smo_B.c_f1[justina_smo_B.d + 3] *
          justina_smo_B.a[justina_smo_B.b_kstr_ax + 12];
      }

      for (justina_smo_B.e = 0; justina_smo_B.e < 4; justina_smo_B.e++) {
        justina_smo_B.d = justina_smo_B.e << 2;
        justina_smo_B.loop_ub_d = justina_smo_B.b_kstr_ax + justina_smo_B.d;
        Ttree->data[justina_smo_B.b_jtilecol].f1[justina_smo_B.loop_ub_d] = 0.0;
        Ttree->data[justina_smo_B.b_jtilecol].f1[justina_smo_B.loop_ub_d] +=
          justina_smo_B.b[justina_smo_B.d] *
          justina_smo_B.a_c[justina_smo_B.b_kstr_ax];
        Ttree->data[justina_smo_B.b_jtilecol].f1[justina_smo_B.loop_ub_d] +=
          justina_smo_B.b[justina_smo_B.d + 1] *
          justina_smo_B.a_c[justina_smo_B.b_kstr_ax + 4];
        Ttree->data[justina_smo_B.b_jtilecol].f1[justina_smo_B.loop_ub_d] +=
          justina_smo_B.b[justina_smo_B.d + 2] *
          justina_smo_B.a_c[justina_smo_B.b_kstr_ax + 8];
        Ttree->data[justina_smo_B.b_jtilecol].f1[justina_smo_B.loop_ub_d] +=
          justina_smo_B.b[justina_smo_B.d + 3] *
          justina_smo_B.a_c[justina_smo_B.b_kstr_ax + 12];
      }
    }

    justina_smo_B.k = justina_smo_B.n;
    if (body->ParentIndex > 0.0) {
      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 16;
           justina_smo_B.b_kstr_ax++) {
        justina_smo_B.a[justina_smo_B.b_kstr_ax] = Ttree->data
          [static_cast<int32_T>(body->ParentIndex) - 1]
          .f1[justina_smo_B.b_kstr_ax];
      }

      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 4;
           justina_smo_B.b_kstr_ax++) {
        for (justina_smo_B.e = 0; justina_smo_B.e < 4; justina_smo_B.e++) {
          justina_smo_B.d = justina_smo_B.e << 2;
          justina_smo_B.loop_ub_d = justina_smo_B.b_kstr_ax + justina_smo_B.d;
          justina_smo_B.a_c[justina_smo_B.loop_ub_d] = 0.0;
          justina_smo_B.a_c[justina_smo_B.loop_ub_d] += Ttree->
            data[justina_smo_B.b_jtilecol].f1[justina_smo_B.d] *
            justina_smo_B.a[justina_smo_B.b_kstr_ax];
          justina_smo_B.a_c[justina_smo_B.loop_ub_d] += Ttree->
            data[justina_smo_B.b_jtilecol].f1[justina_smo_B.d + 1] *
            justina_smo_B.a[justina_smo_B.b_kstr_ax + 4];
          justina_smo_B.a_c[justina_smo_B.loop_ub_d] += Ttree->
            data[justina_smo_B.b_jtilecol].f1[justina_smo_B.d + 2] *
            justina_smo_B.a[justina_smo_B.b_kstr_ax + 8];
          justina_smo_B.a_c[justina_smo_B.loop_ub_d] += Ttree->
            data[justina_smo_B.b_jtilecol].f1[justina_smo_B.d + 3] *
            justina_smo_B.a[justina_smo_B.b_kstr_ax + 12];
        }
      }

      for (justina_smo_B.b_kstr_ax = 0; justina_smo_B.b_kstr_ax < 16;
           justina_smo_B.b_kstr_ax++) {
        Ttree->data[justina_smo_B.b_jtilecol].f1[justina_smo_B.b_kstr_ax] =
          justina_smo_B.a_c[justina_smo_B.b_kstr_ax];
      }
    }
  }

  justina_smo_emxFree_char_T(&switch_expression);
}

static void justina_smo_emxFree_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_justina__T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_justina_smo_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_justina__T *)NULL;
  }
}

static void justina_smo_SystemCore_step_o(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_justina_smo_638.getLatestMessage
    (&justina_smo_B.b_varargout_2);
  for (justina_smo_B.i_p = 0; justina_smo_B.i_p < 7; justina_smo_B.i_p++) {
    varargout_2_Data[justina_smo_B.i_p] =
      justina_smo_B.b_varargout_2.Data[justina_smo_B.i_p];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_smo_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_smo_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = justina_smo_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &justina_smo_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_justina_smo_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_smo_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_smo_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void RigidBodyTreeDynamics_massMat_o(q_robotics_manip_internal__og_T
  *robot, const real_T q[7], emxArray_real_T_justina_smo_T *H,
  emxArray_real_T_justina_smo_T *lambda)
{
  emxArray_f_cell_wrap_justin_o_T *Ic;
  emxArray_f_cell_wrap_justin_o_T *X;
  emxArray_real_T_justina_smo_T *lambda_;
  emxArray_real_T_justina_smo_T *Si;
  emxArray_real_T_justina_smo_T *Fi;
  emxArray_real_T_justina_smo_T *Hji;
  emxArray_real_T_justina_smo_T *s;
  o_robotics_manip_internal_R_o_T *obj;
  emxArray_char_T_justina_smo_T *a;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T exitg1;
  int32_T exitg2;
  justina_smo_B.nb_l = robot->NumBodies;
  justina_smo_B.vNum_o = robot->VelocityNumber;
  justina_smo_B.f = H->size[0] * H->size[1];
  justina_smo_B.b_i_o = static_cast<int32_T>(justina_smo_B.vNum_o);
  H->size[0] = justina_smo_B.b_i_o;
  H->size[1] = justina_smo_B.b_i_o;
  justin_emxEnsureCapacity_real_T(H, justina_smo_B.f);
  justina_smo_B.loop_ub = justina_smo_B.b_i_o * justina_smo_B.b_i_o - 1;
  for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
       justina_smo_B.f++) {
    H->data[justina_smo_B.f] = 0.0;
  }

  justina_smo_emxInit_real_T(&lambda_, 2);
  justina_smo_B.f = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  justina_smo_B.nm1d2 = static_cast<int32_T>(justina_smo_B.nb_l);
  lambda_->size[1] = justina_smo_B.nm1d2;
  justin_emxEnsureCapacity_real_T(lambda_, justina_smo_B.f);
  justina_smo_B.idx = justina_smo_B.nm1d2 - 1;
  for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.idx;
       justina_smo_B.f++) {
    lambda_->data[justina_smo_B.f] = 0.0;
  }

  justina_smo_B.f = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = justina_smo_B.b_i_o;
  justin_emxEnsureCapacity_real_T(lambda, justina_smo_B.f);
  justina_smo_B.loop_ub = justina_smo_B.b_i_o - 1;
  for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
       justina_smo_B.f++) {
    lambda->data[justina_smo_B.f] = 0.0;
  }

  justina_sm_emxInit_f_cell_wrap1(&Ic, 2);
  justina_sm_emxInit_f_cell_wrap1(&X, 2);
  justina_smo_B.f = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = justina_smo_B.nm1d2;
  emxEnsureCapacity_f_cell_wrap1(Ic, justina_smo_B.f);
  justina_smo_B.f = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = justina_smo_B.nm1d2;
  emxEnsureCapacity_f_cell_wrap1(X, justina_smo_B.f);
  for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o <= justina_smo_B.idx;
       justina_smo_B.b_i_o++) {
    for (justina_smo_B.f = 0; justina_smo_B.f < 36; justina_smo_B.f++) {
      Ic->data[justina_smo_B.b_i_o].f1[justina_smo_B.f] = robot->
        Bodies[justina_smo_B.b_i_o]->SpatialInertia[justina_smo_B.f];
    }

    justina_smo_B.vNum_o = robot->PositionDoFMap[justina_smo_B.b_i_o];
    justina_smo_B.p_idx_1 = robot->PositionDoFMap[justina_smo_B.b_i_o + 10];
    if (justina_smo_B.p_idx_1 < justina_smo_B.vNum_o) {
      obj = robot->Bodies[justina_smo_B.b_i_o];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, justina_smo_B.T_c);
    } else {
      if (justina_smo_B.vNum_o > justina_smo_B.p_idx_1) {
        justina_smo_B.nm1d2 = 0;
        justina_smo_B.f = -1;
      } else {
        justina_smo_B.nm1d2 = static_cast<int32_T>(justina_smo_B.vNum_o) - 1;
        justina_smo_B.f = static_cast<int32_T>(justina_smo_B.p_idx_1) - 1;
      }

      obj = robot->Bodies[justina_smo_B.b_i_o];
      justina_smo_B.loop_ub = justina_smo_B.f - justina_smo_B.nm1d2;
      justina_smo_B.q_size_e = justina_smo_B.loop_ub + 1;
      for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
           justina_smo_B.f++) {
        justina_smo_B.q_data_b[justina_smo_B.f] = q[justina_smo_B.nm1d2 +
          justina_smo_B.f];
      }

      rigidBodyJoint_transformBodyT_o(&obj->JointInternal,
        justina_smo_B.q_data_b, &justina_smo_B.q_size_e, justina_smo_B.T_c);
    }

    justina_smo_tforminv(justina_smo_B.T_c, justina_smo_B.dv);
    justina_smo_tformToSpatialXform(justina_smo_B.dv, X->
      data[justina_smo_B.b_i_o].f1);
  }

  justina_smo_B.nm1d2 = static_cast<int32_T>(((-1.0 - justina_smo_B.nb_l) + 1.0)
    / -1.0) - 1;
  justina_smo_emxInit_real_T(&Si, 2);
  justina_smo_emxInit_real_T(&Fi, 2);
  justina_smo_emxInit_real_T(&Hji, 2);
  justina_smo_emxInit_char_T(&a, 2);
  for (justina_smo_B.idx = 0; justina_smo_B.idx <= justina_smo_B.nm1d2;
       justina_smo_B.idx++) {
    justina_smo_B.n_b = static_cast<int32_T>(justina_smo_B.nb_l +
      -static_cast<real_T>(justina_smo_B.idx));
    justina_smo_B.pid_tmp = justina_smo_B.n_b - 1;
    justina_smo_B.pid = robot->Bodies[justina_smo_B.pid_tmp]->ParentIndex;
    justina_smo_B.vNum_o = robot->VelocityDoFMap[justina_smo_B.n_b - 1];
    justina_smo_B.p_idx_1 = robot->VelocityDoFMap[justina_smo_B.n_b + 9];
    if (justina_smo_B.pid > 0.0) {
      for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++) {
        for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < 6;
             justina_smo_B.b_i_o++) {
          justina_smo_B.X_tmp = justina_smo_B.f + 6 * justina_smo_B.b_i_o;
          justina_smo_B.X[justina_smo_B.X_tmp] = 0.0;
          for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub < 6;
               justina_smo_B.loop_ub++) {
            justina_smo_B.X[justina_smo_B.X_tmp] += X->
              data[justina_smo_B.pid_tmp].f1[6 * justina_smo_B.f +
              justina_smo_B.loop_ub] * Ic->data[justina_smo_B.pid_tmp].f1[6 *
              justina_smo_B.b_i_o + justina_smo_B.loop_ub];
          }
        }
      }

      for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++) {
        for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < 6;
             justina_smo_B.b_i_o++) {
          justina_smo_B.b_idx_0_o = 0.0;
          for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub < 6;
               justina_smo_B.loop_ub++) {
            justina_smo_B.b_idx_0_o += justina_smo_B.X[6 * justina_smo_B.loop_ub
              + justina_smo_B.f] * X->data[justina_smo_B.pid_tmp].f1[6 *
              justina_smo_B.b_i_o + justina_smo_B.loop_ub];
          }

          justina_smo_B.loop_ub = 6 * justina_smo_B.b_i_o + justina_smo_B.f;
          Ic->data[static_cast<int32_T>(justina_smo_B.pid) - 1]
            .f1[justina_smo_B.loop_ub] += justina_smo_B.b_idx_0_o;
        }
      }

      lambda_->data[justina_smo_B.pid_tmp] = justina_smo_B.pid;
      exitg1 = false;
      while ((!exitg1) && (lambda_->data[justina_smo_B.pid_tmp] > 0.0)) {
        obj = robot->Bodies[static_cast<int32_T>(lambda_->
          data[justina_smo_B.pid_tmp]) - 1];
        justina_smo_B.f = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = obj->JointInternal.Type->size[1];
        justin_emxEnsureCapacity_char_T(a, justina_smo_B.f);
        justina_smo_B.loop_ub = obj->JointInternal.Type->size[0] *
          obj->JointInternal.Type->size[1] - 1;
        for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
             justina_smo_B.f++) {
          a->data[justina_smo_B.f] = obj->JointInternal.Type->
            data[justina_smo_B.f];
        }

        for (justina_smo_B.f = 0; justina_smo_B.f < 5; justina_smo_B.f++) {
          justina_smo_B.b_me[justina_smo_B.f] = tmp[justina_smo_B.f];
        }

        justina_smo_B.b_bool_m0 = false;
        if (a->size[1] == 5) {
          justina_smo_B.f = 1;
          do {
            exitg2 = 0;
            if (justina_smo_B.f - 1 < 5) {
              justina_smo_B.b_i_o = justina_smo_B.f - 1;
              if (a->data[justina_smo_B.b_i_o] !=
                  justina_smo_B.b_me[justina_smo_B.b_i_o]) {
                exitg2 = 1;
              } else {
                justina_smo_B.f++;
              }
            } else {
              justina_smo_B.b_bool_m0 = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (justina_smo_B.b_bool_m0) {
          lambda_->data[justina_smo_B.pid_tmp] = robot->Bodies
            [static_cast<int32_T>(lambda_->data[justina_smo_B.pid_tmp]) - 1]
            ->ParentIndex;
        } else {
          exitg1 = true;
        }
      }
    }

    justina_smo_B.b_idx_0_o = robot->VelocityDoFMap[justina_smo_B.n_b - 1];
    justina_smo_B.b_idx_1_i = robot->VelocityDoFMap[justina_smo_B.n_b + 9];
    if (justina_smo_B.b_idx_0_o <= justina_smo_B.b_idx_1_i) {
      obj = robot->Bodies[justina_smo_B.pid_tmp];
      justina_smo_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f);
      justina_smo_B.loop_ub = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
           justina_smo_B.f++) {
        Si->data[justina_smo_B.f] = obj->JointInternal.MotionSubspace->
          data[justina_smo_B.f];
      }

      justina_smo_B.n_b = Si->size[1] - 1;
      justina_smo_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      justin_emxEnsureCapacity_real_T(Fi, justina_smo_B.f);
      for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub <= justina_smo_B.n_b;
           justina_smo_B.loop_ub++) {
        justina_smo_B.coffset_tmp = justina_smo_B.loop_ub * 6 - 1;
        for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < 6;
             justina_smo_B.b_i_o++) {
          justina_smo_B.s = 0.0;
          for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++) {
            justina_smo_B.s += Ic->data[justina_smo_B.pid_tmp]
              .f1[justina_smo_B.f * 6 + justina_smo_B.b_i_o] * Si->data
              [(justina_smo_B.coffset_tmp + justina_smo_B.f) + 1];
          }

          Fi->data[(justina_smo_B.coffset_tmp + justina_smo_B.b_i_o) + 1] =
            justina_smo_B.s;
        }
      }

      if (justina_smo_B.vNum_o > justina_smo_B.p_idx_1) {
        justina_smo_B.coffset_tmp = 0;
        justina_smo_B.cb = 0;
      } else {
        justina_smo_B.coffset_tmp = static_cast<int32_T>(justina_smo_B.vNum_o) -
          1;
        justina_smo_B.cb = static_cast<int32_T>(justina_smo_B.vNum_o) - 1;
      }

      justina_smo_B.m_a = Si->size[1];
      justina_smo_B.n_b = Fi->size[1] - 1;
      justina_smo_B.f = Hji->size[0] * Hji->size[1];
      Hji->size[0] = Si->size[1];
      Hji->size[1] = Fi->size[1];
      justin_emxEnsureCapacity_real_T(Hji, justina_smo_B.f);
      for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub <= justina_smo_B.n_b;
           justina_smo_B.loop_ub++) {
        justina_smo_B.coffset = justina_smo_B.loop_ub * justina_smo_B.m_a - 1;
        justina_smo_B.boffset = justina_smo_B.loop_ub * 6 - 1;
        for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < justina_smo_B.m_a;
             justina_smo_B.b_i_o++) {
          justina_smo_B.aoffset_g = justina_smo_B.b_i_o * 6 - 1;
          justina_smo_B.s = 0.0;
          for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++) {
            justina_smo_B.X_tmp = justina_smo_B.f + 1;
            justina_smo_B.s += Si->data[justina_smo_B.aoffset_g +
              justina_smo_B.X_tmp] * Fi->data[justina_smo_B.boffset +
              justina_smo_B.X_tmp];
          }

          Hji->data[(justina_smo_B.coffset + justina_smo_B.b_i_o) + 1] =
            justina_smo_B.s;
        }
      }

      justina_smo_B.loop_ub = Hji->size[1];
      for (justina_smo_B.f = 0; justina_smo_B.f < justina_smo_B.loop_ub;
           justina_smo_B.f++) {
        justina_smo_B.n_b = Hji->size[0];
        for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < justina_smo_B.n_b;
             justina_smo_B.b_i_o++) {
          H->data[(justina_smo_B.coffset_tmp + justina_smo_B.b_i_o) + H->size[0]
            * (justina_smo_B.cb + justina_smo_B.f)] = Hji->data[Hji->size[0] *
            justina_smo_B.f + justina_smo_B.b_i_o];
        }
      }

      justina_smo_B.n_b = Fi->size[1];
      justina_smo_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = Fi->size[1];
      justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f);
      justina_smo_B.loop_ub = Fi->size[0] * Fi->size[1] - 1;
      for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
           justina_smo_B.f++) {
        Si->data[justina_smo_B.f] = Fi->data[justina_smo_B.f];
      }

      justina_smo_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = justina_smo_B.n_b;
      justin_emxEnsureCapacity_real_T(Fi, justina_smo_B.f);
      for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub < justina_smo_B.n_b;
           justina_smo_B.loop_ub++) {
        justina_smo_B.coffset_tmp = justina_smo_B.loop_ub * 6 - 1;
        for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < 6;
             justina_smo_B.b_i_o++) {
          justina_smo_B.aoffset_g = justina_smo_B.b_i_o * 6 - 1;
          justina_smo_B.s = 0.0;
          for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++) {
            justina_smo_B.X_tmp = justina_smo_B.f + 1;
            justina_smo_B.s += X->data[justina_smo_B.pid_tmp]
              .f1[justina_smo_B.aoffset_g + justina_smo_B.X_tmp] * Si->
              data[justina_smo_B.coffset_tmp + justina_smo_B.X_tmp];
          }

          Fi->data[(justina_smo_B.coffset_tmp + justina_smo_B.b_i_o) + 1] =
            justina_smo_B.s;
        }
      }

      while (justina_smo_B.pid > 0.0) {
        justina_smo_B.b_i_o = static_cast<int32_T>(justina_smo_B.pid);
        justina_smo_B.pid_tmp = justina_smo_B.b_i_o - 1;
        obj = robot->Bodies[justina_smo_B.pid_tmp];
        justina_smo_B.f = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
        justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f);
        justina_smo_B.loop_ub = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
             justina_smo_B.f++) {
          Si->data[justina_smo_B.f] = obj->JointInternal.MotionSubspace->
            data[justina_smo_B.f];
        }

        justina_smo_B.b_idx_0_o = robot->VelocityDoFMap[justina_smo_B.b_i_o - 1];
        justina_smo_B.b_idx_1_i = robot->VelocityDoFMap[justina_smo_B.b_i_o + 9];
        if (justina_smo_B.b_idx_0_o <= justina_smo_B.b_idx_1_i) {
          justina_smo_B.m_a = Si->size[1];
          justina_smo_B.n_b = Fi->size[1] - 1;
          justina_smo_B.f = Hji->size[0] * Hji->size[1];
          Hji->size[0] = Si->size[1];
          Hji->size[1] = Fi->size[1];
          justin_emxEnsureCapacity_real_T(Hji, justina_smo_B.f);
          for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub <=
               justina_smo_B.n_b; justina_smo_B.loop_ub++) {
            justina_smo_B.coffset = justina_smo_B.loop_ub * justina_smo_B.m_a -
              1;
            justina_smo_B.boffset = justina_smo_B.loop_ub * 6 - 1;
            for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o <
                 justina_smo_B.m_a; justina_smo_B.b_i_o++) {
              justina_smo_B.aoffset_g = justina_smo_B.b_i_o * 6 - 1;
              justina_smo_B.s = 0.0;
              for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++)
              {
                justina_smo_B.X_tmp = justina_smo_B.f + 1;
                justina_smo_B.s += Si->data[justina_smo_B.aoffset_g +
                  justina_smo_B.X_tmp] * Fi->data[justina_smo_B.boffset +
                  justina_smo_B.X_tmp];
              }

              Hji->data[(justina_smo_B.coffset + justina_smo_B.b_i_o) + 1] =
                justina_smo_B.s;
            }
          }

          if (justina_smo_B.b_idx_0_o > justina_smo_B.b_idx_1_i) {
            justina_smo_B.X_tmp = 0;
          } else {
            justina_smo_B.X_tmp = static_cast<int32_T>(justina_smo_B.b_idx_0_o)
              - 1;
          }

          if (justina_smo_B.vNum_o > justina_smo_B.p_idx_1) {
            justina_smo_B.coffset_tmp = 0;
          } else {
            justina_smo_B.coffset_tmp = static_cast<int32_T>
              (justina_smo_B.vNum_o) - 1;
          }

          justina_smo_B.loop_ub = Hji->size[1];
          for (justina_smo_B.f = 0; justina_smo_B.f < justina_smo_B.loop_ub;
               justina_smo_B.f++) {
            justina_smo_B.n_b = Hji->size[0];
            for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o <
                 justina_smo_B.n_b; justina_smo_B.b_i_o++) {
              H->data[(justina_smo_B.X_tmp + justina_smo_B.b_i_o) + H->size[0] *
                (justina_smo_B.coffset_tmp + justina_smo_B.f)] = Hji->data
                [Hji->size[0] * justina_smo_B.f + justina_smo_B.b_i_o];
            }
          }

          if (justina_smo_B.vNum_o > justina_smo_B.p_idx_1) {
            justina_smo_B.X_tmp = 0;
          } else {
            justina_smo_B.X_tmp = static_cast<int32_T>(justina_smo_B.vNum_o) - 1;
          }

          if (justina_smo_B.b_idx_0_o > justina_smo_B.b_idx_1_i) {
            justina_smo_B.coffset_tmp = 0;
          } else {
            justina_smo_B.coffset_tmp = static_cast<int32_T>
              (justina_smo_B.b_idx_0_o) - 1;
          }

          justina_smo_B.loop_ub = Hji->size[0];
          for (justina_smo_B.f = 0; justina_smo_B.f < justina_smo_B.loop_ub;
               justina_smo_B.f++) {
            justina_smo_B.n_b = Hji->size[1];
            for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o <
                 justina_smo_B.n_b; justina_smo_B.b_i_o++) {
              H->data[(justina_smo_B.X_tmp + justina_smo_B.b_i_o) + H->size[0] *
                (justina_smo_B.coffset_tmp + justina_smo_B.f)] = Hji->data
                [Hji->size[0] * justina_smo_B.b_i_o + justina_smo_B.f];
            }
          }
        }

        justina_smo_B.n_b = Fi->size[1];
        justina_smo_B.f = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = Fi->size[1];
        justin_emxEnsureCapacity_real_T(Si, justina_smo_B.f);
        justina_smo_B.loop_ub = Fi->size[0] * Fi->size[1] - 1;
        for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
             justina_smo_B.f++) {
          Si->data[justina_smo_B.f] = Fi->data[justina_smo_B.f];
        }

        justina_smo_B.f = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = justina_smo_B.n_b;
        justin_emxEnsureCapacity_real_T(Fi, justina_smo_B.f);
        for (justina_smo_B.loop_ub = 0; justina_smo_B.loop_ub <
             justina_smo_B.n_b; justina_smo_B.loop_ub++) {
          justina_smo_B.coffset_tmp = justina_smo_B.loop_ub * 6 - 1;
          for (justina_smo_B.b_i_o = 0; justina_smo_B.b_i_o < 6;
               justina_smo_B.b_i_o++) {
            justina_smo_B.aoffset_g = justina_smo_B.b_i_o * 6 - 1;
            justina_smo_B.s = 0.0;
            for (justina_smo_B.f = 0; justina_smo_B.f < 6; justina_smo_B.f++) {
              justina_smo_B.X_tmp = justina_smo_B.f + 1;
              justina_smo_B.s += X->data[justina_smo_B.pid_tmp]
                .f1[justina_smo_B.aoffset_g + justina_smo_B.X_tmp] * Si->
                data[justina_smo_B.coffset_tmp + justina_smo_B.X_tmp];
            }

            Fi->data[(justina_smo_B.coffset_tmp + justina_smo_B.b_i_o) + 1] =
              justina_smo_B.s;
          }
        }

        justina_smo_B.pid = robot->Bodies[justina_smo_B.pid_tmp]->ParentIndex;
      }
    }
  }

  justina_smo_emxFree_char_T(&a);
  justina_smo_emxFree_real_T(&Hji);
  justina_smo_emxFree_real_T(&Fi);
  justina_smo_emxFree_real_T(&Si);
  justina_sm_emxFree_f_cell_wrap1(&X);
  justina_sm_emxFree_f_cell_wrap1(&Ic);
  for (justina_smo_B.f = 0; justina_smo_B.f < 10; justina_smo_B.f++) {
    justina_smo_B.mask[justina_smo_B.f] = (robot->VelocityDoFMap[justina_smo_B.f]
      <= robot->VelocityDoFMap[justina_smo_B.f + 10]);
  }

  justina_smo_B.idx = 0;
  justina_smo_B.f = 1;
  exitg1 = false;
  while ((!exitg1) && (justina_smo_B.f - 1 < 10)) {
    if (justina_smo_B.mask[justina_smo_B.f - 1]) {
      justina_smo_B.idx++;
      justina_smo_B.ii_data[justina_smo_B.idx - 1] = justina_smo_B.f;
      if (justina_smo_B.idx >= 10) {
        exitg1 = true;
      } else {
        justina_smo_B.f++;
      }
    } else {
      justina_smo_B.f++;
    }
  }

  if (1 > justina_smo_B.idx) {
    justina_smo_B.idx = 0;
  }

  for (justina_smo_B.f = 0; justina_smo_B.f < justina_smo_B.idx; justina_smo_B.f
       ++) {
    justina_smo_B.nonFixedIndices_data[justina_smo_B.f] =
      justina_smo_B.ii_data[justina_smo_B.f];
  }

  justina_smo_B.b_i_o = justina_smo_B.idx - 1;
  justina_smo_emxInit_real_T(&s, 2);
  for (justina_smo_B.idx = 0; justina_smo_B.idx <= justina_smo_B.b_i_o;
       justina_smo_B.idx++) {
    justina_smo_B.vNum_o = robot->
      VelocityDoFMap[justina_smo_B.nonFixedIndices_data[justina_smo_B.idx] - 1];
    justina_smo_B.p_idx_1 = robot->
      VelocityDoFMap[justina_smo_B.nonFixedIndices_data[justina_smo_B.idx] + 9];
    if (rtIsNaN(justina_smo_B.vNum_o) || rtIsNaN(justina_smo_B.p_idx_1)) {
      justina_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      justin_emxEnsureCapacity_real_T(s, justina_smo_B.f);
      s->data[0] = (rtNaN);
    } else if (justina_smo_B.p_idx_1 < justina_smo_B.vNum_o) {
      s->size[0] = 1;
      s->size[1] = 0;
    } else if ((rtIsInf(justina_smo_B.vNum_o) || rtIsInf(justina_smo_B.p_idx_1))
               && (justina_smo_B.vNum_o == justina_smo_B.p_idx_1)) {
      justina_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      justin_emxEnsureCapacity_real_T(s, justina_smo_B.f);
      s->data[0] = (rtNaN);
    } else if (floor(justina_smo_B.vNum_o) == justina_smo_B.vNum_o) {
      justina_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      justina_smo_B.loop_ub = static_cast<int32_T>(floor(justina_smo_B.p_idx_1 -
        justina_smo_B.vNum_o));
      s->size[1] = justina_smo_B.loop_ub + 1;
      justin_emxEnsureCapacity_real_T(s, justina_smo_B.f);
      for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
           justina_smo_B.f++) {
        s->data[justina_smo_B.f] = justina_smo_B.vNum_o + static_cast<real_T>
          (justina_smo_B.f);
      }
    } else {
      justina_smo_B.nb_l = floor((justina_smo_B.p_idx_1 - justina_smo_B.vNum_o)
        + 0.5);
      justina_smo_B.pid = justina_smo_B.vNum_o + justina_smo_B.nb_l;
      justina_smo_B.b_idx_0_o = justina_smo_B.pid - justina_smo_B.p_idx_1;
      justina_smo_B.b_idx_1_i = fabs(justina_smo_B.vNum_o);
      justina_smo_B.s = fabs(justina_smo_B.p_idx_1);
      if ((justina_smo_B.b_idx_1_i > justina_smo_B.s) || rtIsNaN(justina_smo_B.s))
      {
        justina_smo_B.s = justina_smo_B.b_idx_1_i;
      }

      if (fabs(justina_smo_B.b_idx_0_o) < 4.4408920985006262E-16 *
          justina_smo_B.s) {
        justina_smo_B.nb_l++;
        justina_smo_B.pid = justina_smo_B.p_idx_1;
      } else if (justina_smo_B.b_idx_0_o > 0.0) {
        justina_smo_B.pid = (justina_smo_B.nb_l - 1.0) + justina_smo_B.vNum_o;
      } else {
        justina_smo_B.nb_l++;
      }

      if (justina_smo_B.nb_l >= 0.0) {
        justina_smo_B.f = static_cast<int32_T>(justina_smo_B.nb_l);
      } else {
        justina_smo_B.f = 0;
      }

      justina_smo_B.n_b = justina_smo_B.f - 1;
      justina_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = justina_smo_B.n_b + 1;
      justin_emxEnsureCapacity_real_T(s, justina_smo_B.f);
      if (justina_smo_B.n_b + 1 > 0) {
        s->data[0] = justina_smo_B.vNum_o;
        if (justina_smo_B.n_b + 1 > 1) {
          s->data[justina_smo_B.n_b] = justina_smo_B.pid;
          justina_smo_B.nm1d2 = justina_smo_B.n_b / 2;
          justina_smo_B.loop_ub = justina_smo_B.nm1d2 - 2;
          for (justina_smo_B.f = 0; justina_smo_B.f <= justina_smo_B.loop_ub;
               justina_smo_B.f++) {
            justina_smo_B.X_tmp = justina_smo_B.f + 1;
            s->data[justina_smo_B.X_tmp] = justina_smo_B.vNum_o +
              static_cast<real_T>(justina_smo_B.X_tmp);
            s->data[justina_smo_B.n_b - justina_smo_B.X_tmp] = justina_smo_B.pid
              - static_cast<real_T>(justina_smo_B.X_tmp);
          }

          if (justina_smo_B.nm1d2 << 1 == justina_smo_B.n_b) {
            s->data[justina_smo_B.nm1d2] = (justina_smo_B.vNum_o +
              justina_smo_B.pid) / 2.0;
          } else {
            s->data[justina_smo_B.nm1d2] = justina_smo_B.vNum_o +
              static_cast<real_T>(justina_smo_B.nm1d2);
            s->data[justina_smo_B.nm1d2 + 1] = justina_smo_B.pid -
              static_cast<real_T>(justina_smo_B.nm1d2);
          }
        }
      }
    }

    if (justina_smo_B.vNum_o > justina_smo_B.p_idx_1) {
      justina_smo_B.nm1d2 = 0;
    } else {
      justina_smo_B.nm1d2 = static_cast<int32_T>(justina_smo_B.vNum_o) - 1;
    }

    justina_smo_B.loop_ub = s->size[1];
    for (justina_smo_B.f = 0; justina_smo_B.f < justina_smo_B.loop_ub;
         justina_smo_B.f++) {
      lambda->data[justina_smo_B.nm1d2 + justina_smo_B.f] = s->
        data[justina_smo_B.f] - 1.0;
    }

    if (lambda_->data[justina_smo_B.nonFixedIndices_data[justina_smo_B.idx] - 1]
        == 0.0) {
      lambda->data[static_cast<int32_T>(justina_smo_B.vNum_o) - 1] = 0.0;
    } else {
      justina_smo_B.f = static_cast<int32_T>(lambda_->
        data[justina_smo_B.nonFixedIndices_data[justina_smo_B.idx] - 1]);
      justina_smo_B.b_idx_1_i = robot->VelocityDoFMap[justina_smo_B.f + 9];
      lambda->data[static_cast<int32_T>(justina_smo_B.vNum_o) - 1] =
        justina_smo_B.b_idx_1_i;
    }
  }

  justina_smo_emxFree_real_T(&s);
  justina_smo_emxFree_real_T(&lambda_);
}

static void RigidBodyTreeDynamics_inverseDy(q_robotics_manip_internal__og_T
  *robot, const real_T q[7], const real_T qdot[7], const real_T fext[60], real_T
  tau[7])
{
  emxArray_f_cell_wrap_justin_o_T *X;
  emxArray_f_cell_wrap_justin_o_T *Xtree;
  emxArray_real_T_justina_smo_T *vJ;
  emxArray_real_T_justina_smo_T *vB;
  emxArray_real_T_justina_smo_T *aB;
  emxArray_real_T_justina_smo_T *f;
  emxArray_real_T_justina_smo_T *S;
  emxArray_real_T_justina_smo_T *taui;
  o_robotics_manip_internal_R_o_T *obj;
  emxArray_char_T_justina_smo_T *a;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  justina_smo_B.a0[0] = 0.0;
  justina_smo_B.a0[1] = 0.0;
  justina_smo_B.a0[2] = 0.0;
  justina_smo_B.a0[3] = -robot->Gravity[0];
  justina_smo_B.a0[4] = -robot->Gravity[1];
  justina_smo_B.a0[5] = -robot->Gravity[2];
  justina_smo_emxInit_real_T(&vJ, 2);
  justina_smo_B.nb = robot->NumBodies;
  justina_smo_B.i_p4 = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  justina_smo_B.unnamed_idx_1 = static_cast<int32_T>(justina_smo_B.nb);
  vJ->size[1] = justina_smo_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(vJ, justina_smo_B.i_p4);
  justina_smo_B.loop_ub_tmp = 6 * justina_smo_B.unnamed_idx_1 - 1;
  for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <= justina_smo_B.loop_ub_tmp;
       justina_smo_B.i_p4++) {
    vJ->data[justina_smo_B.i_p4] = 0.0;
  }

  justina_smo_emxInit_real_T(&vB, 2);
  justina_smo_B.i_p4 = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = justina_smo_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(vB, justina_smo_B.i_p4);
  for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <= justina_smo_B.loop_ub_tmp;
       justina_smo_B.i_p4++) {
    vB->data[justina_smo_B.i_p4] = 0.0;
  }

  justina_smo_emxInit_real_T(&aB, 2);
  justina_smo_B.i_p4 = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = justina_smo_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(aB, justina_smo_B.i_p4);
  for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <= justina_smo_B.loop_ub_tmp;
       justina_smo_B.i_p4++) {
    aB->data[justina_smo_B.i_p4] = 0.0;
  }

  for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 7; justina_smo_B.i_p4++) {
    tau[justina_smo_B.i_p4] = 0.0;
  }

  justina_sm_emxInit_f_cell_wrap1(&X, 2);
  justina_sm_emxInit_f_cell_wrap1(&Xtree, 2);
  justina_smo_B.loop_ub_tmp = justina_smo_B.unnamed_idx_1 - 1;
  justina_smo_B.i_p4 = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = justina_smo_B.unnamed_idx_1;
  emxEnsureCapacity_f_cell_wrap1(Xtree, justina_smo_B.i_p4);
  justina_smo_B.i_p4 = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = justina_smo_B.unnamed_idx_1;
  emxEnsureCapacity_f_cell_wrap1(X, justina_smo_B.i_p4);
  for (justina_smo_B.b_k = 0; justina_smo_B.b_k <= justina_smo_B.loop_ub_tmp;
       justina_smo_B.b_k++) {
    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 36; justina_smo_B.i_p4++)
    {
      Xtree->data[justina_smo_B.b_k].f1[justina_smo_B.i_p4] = 0.0;
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++) {
      Xtree->data[justina_smo_B.b_k].f1[justina_smo_B.i_p4 + 6 *
        justina_smo_B.i_p4] = 1.0;
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 36; justina_smo_B.i_p4++)
    {
      X->data[justina_smo_B.b_k].f1[justina_smo_B.i_p4] = 0.0;
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++) {
      X->data[justina_smo_B.b_k].f1[justina_smo_B.i_p4 + 6 * justina_smo_B.i_p4]
        = 1.0;
    }
  }

  justina_smo_emxInit_real_T(&f, 2);
  justina_smo_B.i_p4 = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = justina_smo_B.unnamed_idx_1;
  justin_emxEnsureCapacity_real_T(f, justina_smo_B.i_p4);
  justina_smo_emxInit_real_T(&S, 2);
  if (0 <= justina_smo_B.loop_ub_tmp) {
    justina_smo_B.dv2[0] = 0.0;
    justina_smo_B.dv2[4] = 0.0;
    justina_smo_B.dv2[8] = 0.0;
  }

  for (justina_smo_B.unnamed_idx_1 = 0; justina_smo_B.unnamed_idx_1 <=
       justina_smo_B.loop_ub_tmp; justina_smo_B.unnamed_idx_1++) {
    obj = robot->Bodies[justina_smo_B.unnamed_idx_1];
    justina_smo_B.i_p4 = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    justin_emxEnsureCapacity_real_T(S, justina_smo_B.i_p4);
    justina_smo_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <= justina_smo_B.b_k;
         justina_smo_B.i_p4++) {
      S->data[justina_smo_B.i_p4] = obj->JointInternal.MotionSubspace->
        data[justina_smo_B.i_p4];
    }

    justina_smo_B.a_idx_0 = robot->PositionDoFMap[justina_smo_B.unnamed_idx_1];
    justina_smo_B.a_idx_1 = robot->PositionDoFMap[justina_smo_B.unnamed_idx_1 +
      10];
    justina_smo_B.b_idx_0 = robot->VelocityDoFMap[justina_smo_B.unnamed_idx_1];
    justina_smo_B.b_idx_1 = robot->VelocityDoFMap[justina_smo_B.unnamed_idx_1 +
      10];
    if (justina_smo_B.a_idx_1 < justina_smo_B.a_idx_0) {
      obj = robot->Bodies[justina_smo_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, justina_smo_B.T);
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        vJ->data[justina_smo_B.i_p4 + 6 * justina_smo_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (justina_smo_B.a_idx_0 > justina_smo_B.a_idx_1) {
        justina_smo_B.b_k = 0;
        justina_smo_B.i_p4 = -1;
      } else {
        justina_smo_B.b_k = static_cast<int32_T>(justina_smo_B.a_idx_0) - 1;
        justina_smo_B.i_p4 = static_cast<int32_T>(justina_smo_B.a_idx_1) - 1;
      }

      if (justina_smo_B.b_idx_0 > justina_smo_B.b_idx_1) {
        justina_smo_B.p = -1;
      } else {
        justina_smo_B.p = static_cast<int32_T>(justina_smo_B.b_idx_0) - 2;
      }

      obj = robot->Bodies[justina_smo_B.unnamed_idx_1];
      justina_smo_B.q_size_tmp = justina_smo_B.i_p4 - justina_smo_B.b_k;
      justina_smo_B.q_size = justina_smo_B.q_size_tmp + 1;
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <=
           justina_smo_B.q_size_tmp; justina_smo_B.i_p4++) {
        justina_smo_B.q_data[justina_smo_B.i_p4] = q[justina_smo_B.b_k +
          justina_smo_B.i_p4];
      }

      rigidBodyJoint_transformBodyT_o(&obj->JointInternal, justina_smo_B.q_data,
        &justina_smo_B.q_size, justina_smo_B.T);
      justina_smo_B.inner = S->size[1] - 1;
      for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++) {
        vJ->data[justina_smo_B.b_k + 6 * justina_smo_B.unnamed_idx_1] = 0.0;
      }

      for (justina_smo_B.b_k = 0; justina_smo_B.b_k <= justina_smo_B.inner;
           justina_smo_B.b_k++) {
        justina_smo_B.aoffset = justina_smo_B.b_k * 6 - 1;
        for (justina_smo_B.q_size_tmp = 0; justina_smo_B.q_size_tmp < 6;
             justina_smo_B.q_size_tmp++) {
          justina_smo_B.i_p4 = 6 * justina_smo_B.unnamed_idx_1 +
            justina_smo_B.q_size_tmp;
          vJ->data[justina_smo_B.i_p4] += S->data[(justina_smo_B.aoffset +
            justina_smo_B.q_size_tmp) + 1] * qdot[(justina_smo_B.p +
            justina_smo_B.b_k) + 1];
        }
      }
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++) {
      justina_smo_B.R_j[3 * justina_smo_B.i_p4] =
        justina_smo_B.T[justina_smo_B.i_p4];
      justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 1] =
        justina_smo_B.T[justina_smo_B.i_p4 + 4];
      justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 2] =
        justina_smo_B.T[justina_smo_B.i_p4 + 8];
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 9; justina_smo_B.i_p4++) {
      justina_smo_B.R_d[justina_smo_B.i_p4] =
        -justina_smo_B.R_j[justina_smo_B.i_p4];
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++) {
      justina_smo_B.b_k = justina_smo_B.i_p4 << 2;
      justina_smo_B.Tinv[justina_smo_B.b_k] = justina_smo_B.R_j[3 *
        justina_smo_B.i_p4];
      justina_smo_B.Tinv[justina_smo_B.b_k + 1] = justina_smo_B.R_j[3 *
        justina_smo_B.i_p4 + 1];
      justina_smo_B.Tinv[justina_smo_B.b_k + 2] = justina_smo_B.R_j[3 *
        justina_smo_B.i_p4 + 2];
      justina_smo_B.Tinv[justina_smo_B.i_p4 + 12] =
        justina_smo_B.R_d[justina_smo_B.i_p4 + 6] * justina_smo_B.T[14] +
        (justina_smo_B.R_d[justina_smo_B.i_p4 + 3] * justina_smo_B.T[13] +
         justina_smo_B.R_d[justina_smo_B.i_p4] * justina_smo_B.T[12]);
    }

    justina_smo_B.Tinv[3] = 0.0;
    justina_smo_B.Tinv[7] = 0.0;
    justina_smo_B.Tinv[11] = 0.0;
    justina_smo_B.Tinv[15] = 1.0;
    justina_smo_B.dv2[3] = -justina_smo_B.Tinv[14];
    justina_smo_B.dv2[6] = justina_smo_B.Tinv[13];
    justina_smo_B.dv2[1] = justina_smo_B.Tinv[14];
    justina_smo_B.dv2[7] = -justina_smo_B.Tinv[12];
    justina_smo_B.dv2[2] = -justina_smo_B.Tinv[13];
    justina_smo_B.dv2[5] = justina_smo_B.Tinv[12];
    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++) {
      for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 3; justina_smo_B.b_k++) {
        justina_smo_B.q_size_tmp = justina_smo_B.i_p4 + 3 * justina_smo_B.b_k;
        justina_smo_B.R_j[justina_smo_B.q_size_tmp] = 0.0;
        justina_smo_B.p = justina_smo_B.b_k << 2;
        justina_smo_B.R_j[justina_smo_B.q_size_tmp] +=
          justina_smo_B.Tinv[justina_smo_B.p] *
          justina_smo_B.dv2[justina_smo_B.i_p4];
        justina_smo_B.R_j[justina_smo_B.q_size_tmp] +=
          justina_smo_B.Tinv[justina_smo_B.p + 1] *
          justina_smo_B.dv2[justina_smo_B.i_p4 + 3];
        justina_smo_B.R_j[justina_smo_B.q_size_tmp] +=
          justina_smo_B.Tinv[justina_smo_B.p + 2] *
          justina_smo_B.dv2[justina_smo_B.i_p4 + 6];
        X->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.b_k + 6 *
          justina_smo_B.i_p4] = justina_smo_B.Tinv[(justina_smo_B.i_p4 << 2) +
          justina_smo_B.b_k];
        X->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.b_k + 6 *
          (justina_smo_B.i_p4 + 3)] = 0.0;
      }
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++) {
      X->data[justina_smo_B.unnamed_idx_1].f1[6 * justina_smo_B.i_p4 + 3] =
        justina_smo_B.R_j[3 * justina_smo_B.i_p4];
      justina_smo_B.b_k = justina_smo_B.i_p4 << 2;
      justina_smo_B.q_size_tmp = 6 * (justina_smo_B.i_p4 + 3);
      X->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.q_size_tmp + 3] =
        justina_smo_B.Tinv[justina_smo_B.b_k];
      X->data[justina_smo_B.unnamed_idx_1].f1[6 * justina_smo_B.i_p4 + 4] =
        justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 1];
      X->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.q_size_tmp + 4] =
        justina_smo_B.Tinv[justina_smo_B.b_k + 1];
      X->data[justina_smo_B.unnamed_idx_1].f1[6 * justina_smo_B.i_p4 + 5] =
        justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 2];
      X->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.q_size_tmp + 5] =
        justina_smo_B.Tinv[justina_smo_B.b_k + 2];
    }

    justina_smo_B.a_idx_0 = robot->Bodies[justina_smo_B.unnamed_idx_1]
      ->ParentIndex;
    if (justina_smo_B.a_idx_0 > 0.0) {
      justina_smo_B.m = static_cast<int32_T>(justina_smo_B.a_idx_0);
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        justina_smo_B.a_idx_1 = 0.0;
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.a_idx_1 += vB->data[(justina_smo_B.m - 1) * 6 +
            justina_smo_B.b_k] * X->data[justina_smo_B.unnamed_idx_1].f1[6 *
            justina_smo_B.b_k + justina_smo_B.i_p4];
        }

        justina_smo_B.y[justina_smo_B.i_p4] = vJ->data[6 *
          justina_smo_B.unnamed_idx_1 + justina_smo_B.i_p4] +
          justina_smo_B.a_idx_1;
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        vB->data[justina_smo_B.i_p4 + 6 * justina_smo_B.unnamed_idx_1] =
          justina_smo_B.y[justina_smo_B.i_p4];
      }

      justina_smo_B.inner = S->size[1] - 1;
      for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++) {
        justina_smo_B.y[justina_smo_B.b_k] = 0.0;
      }

      for (justina_smo_B.b_k = 0; justina_smo_B.b_k <= justina_smo_B.inner;
           justina_smo_B.b_k++) {
        justina_smo_B.aoffset = justina_smo_B.b_k * 6 - 1;
        for (justina_smo_B.q_size_tmp = 0; justina_smo_B.q_size_tmp < 6;
             justina_smo_B.q_size_tmp++) {
          justina_smo_B.a_idx_1 = S->data[(justina_smo_B.aoffset +
            justina_smo_B.q_size_tmp) + 1] * 0.0 +
            justina_smo_B.y[justina_smo_B.q_size_tmp];
          justina_smo_B.y[justina_smo_B.q_size_tmp] = justina_smo_B.a_idx_1;
        }
      }

      justina_smo_B.R_j[0] = 0.0;
      justina_smo_B.b_k = 6 * justina_smo_B.unnamed_idx_1 + 2;
      justina_smo_B.R_j[3] = -vB->data[justina_smo_B.b_k];
      justina_smo_B.i_p4 = 6 * justina_smo_B.unnamed_idx_1 + 1;
      justina_smo_B.R_j[6] = vB->data[justina_smo_B.i_p4];
      justina_smo_B.R_j[1] = vB->data[justina_smo_B.b_k];
      justina_smo_B.R_j[4] = 0.0;
      justina_smo_B.R_j[7] = -vB->data[6 * justina_smo_B.unnamed_idx_1];
      justina_smo_B.R_j[2] = -vB->data[justina_smo_B.i_p4];
      justina_smo_B.R_j[5] = vB->data[6 * justina_smo_B.unnamed_idx_1];
      justina_smo_B.R_j[8] = 0.0;
      justina_smo_B.R[3] = 0.0;
      justina_smo_B.b_k = 6 * justina_smo_B.unnamed_idx_1 + 5;
      justina_smo_B.R[9] = -vB->data[justina_smo_B.b_k];
      justina_smo_B.i_p4 = 6 * justina_smo_B.unnamed_idx_1 + 4;
      justina_smo_B.R[15] = vB->data[justina_smo_B.i_p4];
      justina_smo_B.R[4] = vB->data[justina_smo_B.b_k];
      justina_smo_B.R[10] = 0.0;
      justina_smo_B.b_k = 6 * justina_smo_B.unnamed_idx_1 + 3;
      justina_smo_B.R[16] = -vB->data[justina_smo_B.b_k];
      justina_smo_B.R[5] = -vB->data[justina_smo_B.i_p4];
      justina_smo_B.R[11] = vB->data[justina_smo_B.b_k];
      justina_smo_B.R[17] = 0.0;
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++)
      {
        justina_smo_B.a_idx_1 = justina_smo_B.R_j[3 * justina_smo_B.i_p4];
        justina_smo_B.R[6 * justina_smo_B.i_p4] = justina_smo_B.a_idx_1;
        justina_smo_B.b_k = 6 * (justina_smo_B.i_p4 + 3);
        justina_smo_B.R[justina_smo_B.b_k] = 0.0;
        justina_smo_B.R[justina_smo_B.b_k + 3] = justina_smo_B.a_idx_1;
        justina_smo_B.a_idx_1 = justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 1];
        justina_smo_B.R[6 * justina_smo_B.i_p4 + 1] = justina_smo_B.a_idx_1;
        justina_smo_B.R[justina_smo_B.b_k + 1] = 0.0;
        justina_smo_B.R[justina_smo_B.b_k + 4] = justina_smo_B.a_idx_1;
        justina_smo_B.a_idx_1 = justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 2];
        justina_smo_B.R[6 * justina_smo_B.i_p4 + 2] = justina_smo_B.a_idx_1;
        justina_smo_B.R[justina_smo_B.b_k + 2] = 0.0;
        justina_smo_B.R[justina_smo_B.b_k + 5] = justina_smo_B.a_idx_1;
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        justina_smo_B.a_idx_1 = 0.0;
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.a_idx_1 += aB->data[(justina_smo_B.m - 1) * 6 +
            justina_smo_B.b_k] * X->data[justina_smo_B.unnamed_idx_1].f1[6 *
            justina_smo_B.b_k + justina_smo_B.i_p4];
        }

        justina_smo_B.X_e[justina_smo_B.i_p4] = justina_smo_B.a_idx_1 +
          justina_smo_B.y[justina_smo_B.i_p4];
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        justina_smo_B.y[justina_smo_B.i_p4] = 0.0;
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.a_idx_1 = justina_smo_B.R[6 * justina_smo_B.b_k +
            justina_smo_B.i_p4] * vJ->data[6 * justina_smo_B.unnamed_idx_1 +
            justina_smo_B.b_k] + justina_smo_B.y[justina_smo_B.i_p4];
          justina_smo_B.y[justina_smo_B.i_p4] = justina_smo_B.a_idx_1;
        }

        aB->data[justina_smo_B.i_p4 + 6 * justina_smo_B.unnamed_idx_1] =
          justina_smo_B.X_e[justina_smo_B.i_p4] +
          justina_smo_B.y[justina_smo_B.i_p4];
      }

      justina_smo_B.R_j[0] = 0.0;
      justina_smo_B.R_j[3] = -justina_smo_B.T[14];
      justina_smo_B.R_j[6] = justina_smo_B.T[13];
      justina_smo_B.R_j[1] = justina_smo_B.T[14];
      justina_smo_B.R_j[4] = 0.0;
      justina_smo_B.R_j[7] = -justina_smo_B.T[12];
      justina_smo_B.R_j[2] = -justina_smo_B.T[13];
      justina_smo_B.R_j[5] = justina_smo_B.T[12];
      justina_smo_B.R_j[8] = 0.0;
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++)
      {
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 3; justina_smo_B.b_k++)
        {
          justina_smo_B.q_size_tmp = justina_smo_B.i_p4 + 3 * justina_smo_B.b_k;
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] = 0.0;
          justina_smo_B.p = justina_smo_B.b_k << 2;
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] +=
            justina_smo_B.T[justina_smo_B.p] *
            justina_smo_B.R_j[justina_smo_B.i_p4];
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] +=
            justina_smo_B.T[justina_smo_B.p + 1] *
            justina_smo_B.R_j[justina_smo_B.i_p4 + 3];
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] +=
            justina_smo_B.T[justina_smo_B.p + 2] *
            justina_smo_B.R_j[justina_smo_B.i_p4 + 6];
          justina_smo_B.R[justina_smo_B.b_k + 6 * justina_smo_B.i_p4] =
            justina_smo_B.T[(justina_smo_B.i_p4 << 2) + justina_smo_B.b_k];
          justina_smo_B.R[justina_smo_B.b_k + 6 * (justina_smo_B.i_p4 + 3)] =
            0.0;
        }
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++)
      {
        justina_smo_B.R[6 * justina_smo_B.i_p4 + 3] = justina_smo_B.R_d[3 *
          justina_smo_B.i_p4];
        justina_smo_B.b_k = justina_smo_B.i_p4 << 2;
        justina_smo_B.q_size_tmp = 6 * (justina_smo_B.i_p4 + 3);
        justina_smo_B.R[justina_smo_B.q_size_tmp + 3] =
          justina_smo_B.T[justina_smo_B.b_k];
        justina_smo_B.R[6 * justina_smo_B.i_p4 + 4] = justina_smo_B.R_d[3 *
          justina_smo_B.i_p4 + 1];
        justina_smo_B.R[justina_smo_B.q_size_tmp + 4] =
          justina_smo_B.T[justina_smo_B.b_k + 1];
        justina_smo_B.R[6 * justina_smo_B.i_p4 + 5] = justina_smo_B.R_d[3 *
          justina_smo_B.i_p4 + 2];
        justina_smo_B.R[justina_smo_B.q_size_tmp + 5] =
          justina_smo_B.T[justina_smo_B.b_k + 2];
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.p = justina_smo_B.i_p4 + 6 * justina_smo_B.b_k;
          justina_smo_B.b_I[justina_smo_B.p] = 0.0;
          for (justina_smo_B.q_size_tmp = 0; justina_smo_B.q_size_tmp < 6;
               justina_smo_B.q_size_tmp++) {
            justina_smo_B.b_I[justina_smo_B.p] += Xtree->data
              [static_cast<int32_T>(justina_smo_B.a_idx_0) - 1].f1[6 *
              justina_smo_B.q_size_tmp + justina_smo_B.i_p4] * justina_smo_B.R[6
              * justina_smo_B.b_k + justina_smo_B.q_size_tmp];
          }
        }
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 36; justina_smo_B.i_p4++)
      {
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.i_p4] =
          justina_smo_B.b_I[justina_smo_B.i_p4];
      }
    } else {
      justina_smo_B.inner = S->size[1] - 1;
      for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++) {
        justina_smo_B.i_p4 = 6 * justina_smo_B.unnamed_idx_1 + justina_smo_B.b_k;
        vB->data[justina_smo_B.i_p4] = vJ->data[justina_smo_B.i_p4];
        justina_smo_B.y[justina_smo_B.b_k] = 0.0;
      }

      for (justina_smo_B.b_k = 0; justina_smo_B.b_k <= justina_smo_B.inner;
           justina_smo_B.b_k++) {
        justina_smo_B.aoffset = justina_smo_B.b_k * 6 - 1;
        for (justina_smo_B.q_size_tmp = 0; justina_smo_B.q_size_tmp < 6;
             justina_smo_B.q_size_tmp++) {
          justina_smo_B.a_idx_1 = S->data[(justina_smo_B.aoffset +
            justina_smo_B.q_size_tmp) + 1] * 0.0 +
            justina_smo_B.y[justina_smo_B.q_size_tmp];
          justina_smo_B.y[justina_smo_B.q_size_tmp] = justina_smo_B.a_idx_1;
        }
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        justina_smo_B.a_idx_1 = 0.0;
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.a_idx_1 += X->data[justina_smo_B.unnamed_idx_1].f1[6 *
            justina_smo_B.b_k + justina_smo_B.i_p4] *
            justina_smo_B.a0[justina_smo_B.b_k];
        }

        aB->data[justina_smo_B.i_p4 + 6 * justina_smo_B.unnamed_idx_1] =
          justina_smo_B.a_idx_1 + justina_smo_B.y[justina_smo_B.i_p4];
      }

      justina_smo_B.R_j[0] = 0.0;
      justina_smo_B.R_j[3] = -justina_smo_B.T[14];
      justina_smo_B.R_j[6] = justina_smo_B.T[13];
      justina_smo_B.R_j[1] = justina_smo_B.T[14];
      justina_smo_B.R_j[4] = 0.0;
      justina_smo_B.R_j[7] = -justina_smo_B.T[12];
      justina_smo_B.R_j[2] = -justina_smo_B.T[13];
      justina_smo_B.R_j[5] = justina_smo_B.T[12];
      justina_smo_B.R_j[8] = 0.0;
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++)
      {
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 3; justina_smo_B.b_k++)
        {
          justina_smo_B.q_size_tmp = justina_smo_B.i_p4 + 3 * justina_smo_B.b_k;
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] = 0.0;
          justina_smo_B.p = justina_smo_B.b_k << 2;
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] +=
            justina_smo_B.T[justina_smo_B.p] *
            justina_smo_B.R_j[justina_smo_B.i_p4];
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] +=
            justina_smo_B.T[justina_smo_B.p + 1] *
            justina_smo_B.R_j[justina_smo_B.i_p4 + 3];
          justina_smo_B.R_d[justina_smo_B.q_size_tmp] +=
            justina_smo_B.T[justina_smo_B.p + 2] *
            justina_smo_B.R_j[justina_smo_B.i_p4 + 6];
          Xtree->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.b_k + 6 *
            justina_smo_B.i_p4] = justina_smo_B.T[(justina_smo_B.i_p4 << 2) +
            justina_smo_B.b_k];
          Xtree->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.b_k + 6 *
            (justina_smo_B.i_p4 + 3)] = 0.0;
        }
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++)
      {
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[6 * justina_smo_B.i_p4 + 3] =
          justina_smo_B.R_d[3 * justina_smo_B.i_p4];
        justina_smo_B.b_k = justina_smo_B.i_p4 << 2;
        justina_smo_B.q_size_tmp = 6 * (justina_smo_B.i_p4 + 3);
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.q_size_tmp + 3]
          = justina_smo_B.T[justina_smo_B.b_k];
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[6 * justina_smo_B.i_p4 + 4] =
          justina_smo_B.R_d[3 * justina_smo_B.i_p4 + 1];
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.q_size_tmp + 4]
          = justina_smo_B.T[justina_smo_B.b_k + 1];
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[6 * justina_smo_B.i_p4 + 5] =
          justina_smo_B.R_d[3 * justina_smo_B.i_p4 + 2];
        Xtree->data[justina_smo_B.unnamed_idx_1].f1[justina_smo_B.q_size_tmp + 5]
          = justina_smo_B.T[justina_smo_B.b_k + 2];
      }
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 36; justina_smo_B.i_p4++)
    {
      justina_smo_B.b_I[justina_smo_B.i_p4] = robot->
        Bodies[justina_smo_B.unnamed_idx_1]->SpatialInertia[justina_smo_B.i_p4];
    }

    justina_smo_B.R_j[0] = 0.0;
    justina_smo_B.b_k = 6 * justina_smo_B.unnamed_idx_1 + 2;
    justina_smo_B.R_j[3] = -vB->data[justina_smo_B.b_k];
    justina_smo_B.i_p4 = 6 * justina_smo_B.unnamed_idx_1 + 1;
    justina_smo_B.R_j[6] = vB->data[justina_smo_B.i_p4];
    justina_smo_B.R_j[1] = vB->data[justina_smo_B.b_k];
    justina_smo_B.R_j[4] = 0.0;
    justina_smo_B.R_j[7] = -vB->data[6 * justina_smo_B.unnamed_idx_1];
    justina_smo_B.R_j[2] = -vB->data[justina_smo_B.i_p4];
    justina_smo_B.R_j[5] = vB->data[6 * justina_smo_B.unnamed_idx_1];
    justina_smo_B.R_j[8] = 0.0;
    justina_smo_B.R[18] = 0.0;
    justina_smo_B.b_k = 6 * justina_smo_B.unnamed_idx_1 + 5;
    justina_smo_B.R[24] = -vB->data[justina_smo_B.b_k];
    justina_smo_B.i_p4 = 6 * justina_smo_B.unnamed_idx_1 + 4;
    justina_smo_B.R[30] = vB->data[justina_smo_B.i_p4];
    justina_smo_B.R[19] = vB->data[justina_smo_B.b_k];
    justina_smo_B.R[25] = 0.0;
    justina_smo_B.b_k = 6 * justina_smo_B.unnamed_idx_1 + 3;
    justina_smo_B.R[31] = -vB->data[justina_smo_B.b_k];
    justina_smo_B.R[20] = -vB->data[justina_smo_B.i_p4];
    justina_smo_B.R[26] = vB->data[justina_smo_B.b_k];
    justina_smo_B.R[32] = 0.0;
    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 3; justina_smo_B.i_p4++) {
      justina_smo_B.a_idx_1 = justina_smo_B.R_j[3 * justina_smo_B.i_p4];
      justina_smo_B.R[6 * justina_smo_B.i_p4] = justina_smo_B.a_idx_1;
      justina_smo_B.R[6 * justina_smo_B.i_p4 + 3] = 0.0;
      justina_smo_B.b_k = 6 * (justina_smo_B.i_p4 + 3);
      justina_smo_B.R[justina_smo_B.b_k + 3] = justina_smo_B.a_idx_1;
      justina_smo_B.a_idx_1 = justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 1];
      justina_smo_B.R[6 * justina_smo_B.i_p4 + 1] = justina_smo_B.a_idx_1;
      justina_smo_B.R[6 * justina_smo_B.i_p4 + 4] = 0.0;
      justina_smo_B.R[justina_smo_B.b_k + 4] = justina_smo_B.a_idx_1;
      justina_smo_B.a_idx_1 = justina_smo_B.R_j[3 * justina_smo_B.i_p4 + 2];
      justina_smo_B.R[6 * justina_smo_B.i_p4 + 2] = justina_smo_B.a_idx_1;
      justina_smo_B.R[6 * justina_smo_B.i_p4 + 5] = 0.0;
      justina_smo_B.R[justina_smo_B.b_k + 5] = justina_smo_B.a_idx_1;
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++) {
      justina_smo_B.X_e[justina_smo_B.i_p4] = 0.0;
      justina_smo_B.b_I_b[justina_smo_B.i_p4] = 0.0;
      for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++) {
        justina_smo_B.a_idx_0 = justina_smo_B.b_I[6 * justina_smo_B.b_k +
          justina_smo_B.i_p4];
        justina_smo_B.q_size_tmp = 6 * justina_smo_B.unnamed_idx_1 +
          justina_smo_B.b_k;
        justina_smo_B.a_idx_1 = vB->data[justina_smo_B.q_size_tmp] *
          justina_smo_B.a_idx_0 + justina_smo_B.X_e[justina_smo_B.i_p4];
        justina_smo_B.a_idx_0 = aB->data[justina_smo_B.q_size_tmp] *
          justina_smo_B.a_idx_0 + justina_smo_B.b_I_b[justina_smo_B.i_p4];
        justina_smo_B.X_e[justina_smo_B.i_p4] = justina_smo_B.a_idx_1;
        justina_smo_B.b_I_b[justina_smo_B.i_p4] = justina_smo_B.a_idx_0;
      }
    }

    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++) {
      justina_smo_B.y[justina_smo_B.i_p4] = 0.0;
      justina_smo_B.a_idx_1 = 0.0;
      for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++) {
        justina_smo_B.a_idx_1 += Xtree->data[justina_smo_B.unnamed_idx_1].f1[6 *
          justina_smo_B.i_p4 + justina_smo_B.b_k] * fext[6 *
          justina_smo_B.unnamed_idx_1 + justina_smo_B.b_k];
        justina_smo_B.y[justina_smo_B.i_p4] += justina_smo_B.R[6 *
          justina_smo_B.b_k + justina_smo_B.i_p4] *
          justina_smo_B.X_e[justina_smo_B.b_k];
      }

      f->data[justina_smo_B.i_p4 + 6 * justina_smo_B.unnamed_idx_1] =
        (justina_smo_B.b_I_b[justina_smo_B.i_p4] +
         justina_smo_B.y[justina_smo_B.i_p4]) - justina_smo_B.a_idx_1;
    }
  }

  justina_smo_emxFree_real_T(&aB);
  justina_smo_emxFree_real_T(&vB);
  justina_smo_emxFree_real_T(&vJ);
  justina_sm_emxFree_f_cell_wrap1(&Xtree);
  justina_smo_B.q_size_tmp = static_cast<int32_T>(((-1.0 - justina_smo_B.nb) +
    1.0) / -1.0) - 1;
  justina_smo_emxInit_real_T(&taui, 1);
  justina_smo_emxInit_char_T(&a, 2);
  if (0 <= justina_smo_B.q_size_tmp) {
    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 5; justina_smo_B.i_p4++) {
      justina_smo_B.b_l[justina_smo_B.i_p4] = tmp[justina_smo_B.i_p4];
    }
  }

  for (justina_smo_B.loop_ub_tmp = 0; justina_smo_B.loop_ub_tmp <=
       justina_smo_B.q_size_tmp; justina_smo_B.loop_ub_tmp++) {
    justina_smo_B.a_idx_0 = justina_smo_B.nb + -static_cast<real_T>
      (justina_smo_B.loop_ub_tmp);
    justina_smo_B.p = static_cast<int32_T>(justina_smo_B.a_idx_0);
    justina_smo_B.inner = justina_smo_B.p - 1;
    obj = robot->Bodies[justina_smo_B.inner];
    justina_smo_B.i_p4 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->JointInternal.Type->size[1];
    justin_emxEnsureCapacity_char_T(a, justina_smo_B.i_p4);
    justina_smo_B.b_k = obj->JointInternal.Type->size[0] *
      obj->JointInternal.Type->size[1] - 1;
    for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <= justina_smo_B.b_k;
         justina_smo_B.i_p4++) {
      a->data[justina_smo_B.i_p4] = obj->JointInternal.Type->
        data[justina_smo_B.i_p4];
    }

    justina_smo_B.b_bool = false;
    if (a->size[1] == 5) {
      justina_smo_B.i_p4 = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.i_p4 - 1 < 5) {
          justina_smo_B.unnamed_idx_1 = justina_smo_B.i_p4 - 1;
          if (a->data[justina_smo_B.unnamed_idx_1] !=
              justina_smo_B.b_l[justina_smo_B.unnamed_idx_1]) {
            exitg1 = 1;
          } else {
            justina_smo_B.i_p4++;
          }
        } else {
          justina_smo_B.b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!justina_smo_B.b_bool) {
      obj = robot->Bodies[justina_smo_B.inner];
      justina_smo_B.i_p4 = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      justin_emxEnsureCapacity_real_T(S, justina_smo_B.i_p4);
      justina_smo_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <= justina_smo_B.b_k;
           justina_smo_B.i_p4++) {
        S->data[justina_smo_B.i_p4] = obj->JointInternal.MotionSubspace->
          data[justina_smo_B.i_p4];
      }

      justina_smo_B.m = S->size[1] - 1;
      justina_smo_B.i_p4 = taui->size[0];
      taui->size[0] = S->size[1];
      justin_emxEnsureCapacity_real_T(taui, justina_smo_B.i_p4);
      for (justina_smo_B.unnamed_idx_1 = 0; justina_smo_B.unnamed_idx_1 <=
           justina_smo_B.m; justina_smo_B.unnamed_idx_1++) {
        justina_smo_B.aoffset = justina_smo_B.unnamed_idx_1 * 6 - 1;
        justina_smo_B.a_idx_1 = 0.0;
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.a_idx_1 += f->data[(static_cast<int32_T>
            (justina_smo_B.a_idx_0) - 1) * 6 + justina_smo_B.b_k] * S->data
            [(justina_smo_B.aoffset + justina_smo_B.b_k) + 1];
        }

        taui->data[justina_smo_B.unnamed_idx_1] = justina_smo_B.a_idx_1;
      }

      justina_smo_B.b_idx_0 = robot->VelocityDoFMap[justina_smo_B.p - 1];
      justina_smo_B.b_idx_1 = robot->VelocityDoFMap[justina_smo_B.p + 9];
      if (justina_smo_B.b_idx_0 > justina_smo_B.b_idx_1) {
        justina_smo_B.b_k = 0;
        justina_smo_B.i_p4 = 0;
      } else {
        justina_smo_B.b_k = static_cast<int32_T>(justina_smo_B.b_idx_0) - 1;
        justina_smo_B.i_p4 = static_cast<int32_T>(justina_smo_B.b_idx_1);
      }

      justina_smo_B.unnamed_idx_1 = justina_smo_B.i_p4 - justina_smo_B.b_k;
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 <
           justina_smo_B.unnamed_idx_1; justina_smo_B.i_p4++) {
        tau[justina_smo_B.b_k + justina_smo_B.i_p4] = taui->
          data[justina_smo_B.i_p4];
      }
    }

    justina_smo_B.a_idx_0 = robot->Bodies[justina_smo_B.inner]->ParentIndex;
    if (justina_smo_B.a_idx_0 > 0.0) {
      justina_smo_B.m = static_cast<int32_T>(justina_smo_B.a_idx_0);
      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        justina_smo_B.a_idx_1 = 0.0;
        for (justina_smo_B.b_k = 0; justina_smo_B.b_k < 6; justina_smo_B.b_k++)
        {
          justina_smo_B.a_idx_1 += f->data[(justina_smo_B.p - 1) * 6 +
            justina_smo_B.b_k] * X->data[justina_smo_B.inner].f1[6 *
            justina_smo_B.i_p4 + justina_smo_B.b_k];
        }

        justina_smo_B.a0[justina_smo_B.i_p4] = f->data[(justina_smo_B.m - 1) * 6
          + justina_smo_B.i_p4] + justina_smo_B.a_idx_1;
      }

      for (justina_smo_B.i_p4 = 0; justina_smo_B.i_p4 < 6; justina_smo_B.i_p4++)
      {
        f->data[justina_smo_B.i_p4 + 6 * (justina_smo_B.m - 1)] =
          justina_smo_B.a0[justina_smo_B.i_p4];
      }
    }
  }

  justina_smo_emxFree_char_T(&a);
  justina_smo_emxFree_real_T(&taui);
  justina_smo_emxFree_real_T(&S);
  justina_smo_emxFree_real_T(&f);
  justina_sm_emxFree_f_cell_wrap1(&X);
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

static void justina_smo_atan2(const real_T y_data[], const int32_T y_size[3],
  const real_T x_data[], const int32_T x_size[3], real_T r_data[], int32_T
  r_size[3])
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

static void matlabCodegenHandle_matla_og4q5(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_sm_o_T
  *pStruct)
{
  justina_smo_emxFree_char_T(&pStruct->Type);
  justina_smo_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_p_robotics_manip_(p_robotics_manip_internal_R_o_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_q_robotics_manip_(q_robotics_manip_internal_R_o_T
  *pStruct)
{
  emxFreeStruct_p_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_b_o_T
  *pStruct)
{
  emxFreeStruct_q_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_o_robotics_manip_(o_robotics_manip_internal_R_o_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_c_rigidBodyJoint1(c_rigidBodyJoint_justina_smo_T
  *pStruct)
{
  justina_smo_emxFree_char_T(&pStruct->Type);
}

static void emxFreeStruct_p_robotics_mani_o(p_robotics_manip_internal_Rig_T
  *pStruct)
{
  justina_smo_emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxFreeStruct_q_robotics_mani_o(q_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_p_robotics_mani_o(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmani_o(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_q_robotics_mani_o(&pStruct->TreeInternal);
}

static void emxFreeStruct_o_robotics_mani_o(o_robotics_manip_internal_Rig_T
  *pStruct)
{
  justina_smo_emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxFreeStruct_q_robotics_man_og(q_robotics_manip_internal__og_T
  *pStruct)
{
  emxFreeStruct_p_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slman_og(robotics_slmanip_internal__og_T
  *pStruct)
{
  emxFreeStruct_q_robotics_man_og(&pStruct->TreeInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabC_og4(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_sm_o_T
  *pStruct)
{
  justina_smo_emxInit_char_T(&pStruct->Type, 2);
  justina_smo_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_p_robotics_manip_(p_robotics_manip_internal_R_o_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_q_robotics_manip_(q_robotics_manip_internal_R_o_T
  *pStruct)
{
  emxInitStruct_p_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_b_o_T
  *pStruct)
{
  emxInitStruct_q_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_o_robotics_manip_(o_robotics_manip_internal_R_o_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static o_robotics_manip_internal_R_o_T *jus_RigidBody_RigidBody_og4q5te
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *ju_RigidBody_RigidBody_og4q5tei
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *j_RigidBody_RigidBody_og4q5teix
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *RigidBody_RigidBody_og4q5teixq
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *RigidBody_RigidBody_og4q5teixqw
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *RigidBody_RigidBod_og4q5teixqwa
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *RigidBody_RigidBo_og4q5teixqwaz
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *RigidBody_RigidB_og4q5teixqwaz5
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *RigidBody_Rigid_og4q5teixqwaz55
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_R_o_T *j_RigidBody_Rigid_o
  (o_robotics_manip_internal_R_o_T *obj)
{
  o_robotics_manip_internal_R_o_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_smo_T *switch_expression;
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

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static p_robotics_manip_internal_R_o_T *j_RigidBody_Rigid_ou
  (p_robotics_manip_internal_R_o_T *obj)
{
  p_robotics_manip_internal_R_o_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_smo_B.msubspace_data[b_kstr] = tmp[b_kstr];
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
      justina_smo_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_smo_B.msubspace_data[b_kstr] = 0;
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
      justina_smo_B.msubspace_data[b_kstr];
  }

  return b_obj;
}

static q_robotics_manip_internal_R_o_T *j_RigidBodyTree_RigidBodyTree_o
  (q_robotics_manip_internal_R_o_T *obj, o_robotics_manip_internal_R_o_T *iobj_0,
   o_robotics_manip_internal_R_o_T *iobj_1, o_robotics_manip_internal_R_o_T
   *iobj_2, o_robotics_manip_internal_R_o_T *iobj_3,
   o_robotics_manip_internal_R_o_T *iobj_4, o_robotics_manip_internal_R_o_T
   *iobj_5, o_robotics_manip_internal_R_o_T *iobj_6,
   o_robotics_manip_internal_R_o_T *iobj_7, o_robotics_manip_internal_R_o_T
   *iobj_8, o_robotics_manip_internal_R_o_T *iobj_9)
{
  q_robotics_manip_internal_R_o_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 1, 2, 3, 4, 5, 6,
    7, -1, -1, -1 };

  b_obj = obj;
  obj->Bodies[0] = jus_RigidBody_RigidBody_og4q5te(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = ju_RigidBody_RigidBody_og4q5tei(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = j_RigidBody_RigidBody_og4q5teix(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = RigidBody_RigidBody_og4q5teixq(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = RigidBody_RigidBody_og4q5teixqw(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = RigidBody_RigidBod_og4q5teixqwa(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = RigidBody_RigidBo_og4q5teixqwaz(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = RigidBody_RigidB_og4q5teixqwaz5(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = RigidBody_Rigid_og4q5teixqwaz55(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = j_RigidBody_Rigid_o(iobj_8);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->VelocityNumber = 7.0;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  j_RigidBody_Rigid_ou(&obj->Base);
  return b_obj;
}

static void emxInitStruct_c_rigidBodyJoint1(c_rigidBodyJoint_justina_smo_T
  *pStruct)
{
  justina_smo_emxInit_char_T(&pStruct->Type, 2);
}

static void emxInitStruct_p_robotics_mani_o(p_robotics_manip_internal_Rig_T
  *pStruct)
{
  justina_smo_emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxInitStruct_q_robotics_mani_o(q_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_p_robotics_mani_o(&pStruct->Base);
}

static void emxInitStruct_robotics_slmani_o(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_q_robotics_mani_o(&pStruct->TreeInternal);
}

static void emxInitStruct_o_robotics_mani_o(o_robotics_manip_internal_Rig_T
  *pStruct)
{
  justina_smo_emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static o_robotics_manip_internal_Rig_T *justina_smo_RigidBody_RigidBody
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 0.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justina_s_RigidBody_RigidBody_o
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 1.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justina__RigidBody_RigidBody_og
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 2.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justina_RigidBody_RigidBody_og4
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 3.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justin_RigidBody_RigidBody_og4q
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 4.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justi_RigidBody_RigidBody_og4q5
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 5.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *just_RigidBody_RigidBody_og4q5t
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  justin_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 14; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 6.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  justin_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
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

  justina_smo_emxFree_char_T(&switch_expression);
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
  p_robotics_manip_internal_Rig_T *obj_0;
  emxArray_char_T_justina_smo_T *switch_expression;
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
  obj->Bodies[0] = justina_smo_RigidBody_RigidBody(iobj_0);
  obj->Bodies[1] = justina_s_RigidBody_RigidBody_o(iobj_9);
  obj->Bodies[2] = justina__RigidBody_RigidBody_og(iobj_1);
  obj->Bodies[3] = justina_RigidBody_RigidBody_og4(iobj_2);
  obj->Bodies[4] = justin_RigidBody_RigidBody_og4q(iobj_3);
  obj->Bodies[5] = justi_RigidBody_RigidBody_og4q5(iobj_4);
  obj->Bodies[6] = just_RigidBody_RigidBody_og4q5t(iobj_5);
  b_kstr = iobj_6->NameInternal->size[0] * iobj_6->NameInternal->size[1];
  iobj_6->NameInternal->size[0] = 1;
  iobj_6->NameInternal->size[1] = 20;
  justin_emxEnsureCapacity_char_T(iobj_6->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 20; b_kstr++) {
    iobj_6->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  iobj_6->ParentIndex = 7.0;
  b_kstr = iobj_6->JointInternal.Type->size[0] * iobj_6->
    JointInternal.Type->size[1];
  iobj_6->JointInternal.Type->size[0] = 1;
  iobj_6->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(iobj_6->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_6->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  justina_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_6->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_6->JointInternal.Type->size[0] * iobj_6->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_6->JointInternal.Type->data[b_kstr];
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
    iobj_6->JointInternal.PositionNumber = 1.0;
    iobj_6->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_6->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_6->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   case 1:
    iobj_6->JointInternal.PositionNumber = 1.0;
    iobj_6->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_6->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_6->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    iobj_6->JointInternal.PositionNumber = 0.0;
    iobj_6->JointInternal.JointAxisInternal[0] = 0.0;
    iobj_6->JointInternal.JointAxisInternal[1] = 0.0;
    iobj_6->JointInternal.JointAxisInternal[2] = 0.0;
    break;
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_6->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_6->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  iobj_6->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_6->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_6->JointInternal.JointAxisInternal[2] = 0.0;
  obj->Bodies[7] = iobj_6;
  b_kstr = iobj_7->NameInternal->size[0] * iobj_7->NameInternal->size[1];
  iobj_7->NameInternal->size[0] = 1;
  iobj_7->NameInternal->size[1] = 18;
  justin_emxEnsureCapacity_char_T(iobj_7->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 18; b_kstr++) {
    iobj_7->NameInternal->data[b_kstr] = tmp_5[b_kstr];
  }

  iobj_7->ParentIndex = 8.0;
  b_kstr = iobj_7->JointInternal.Type->size[0] * iobj_7->
    JointInternal.Type->size[1];
  iobj_7->JointInternal.Type->size[0] = 1;
  iobj_7->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(iobj_7->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_7->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_7->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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
    iobj_7->JointInternal.JointToParentTransform[b_kstr] = tmp_6[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_7->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  iobj_7->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_7->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_7->JointInternal.JointAxisInternal[2] = 0.0;
  obj->Bodies[8] = iobj_7;
  b_kstr = iobj_8->NameInternal->size[0] * iobj_8->NameInternal->size[1];
  iobj_8->NameInternal->size[0] = 1;
  iobj_8->NameInternal->size[1] = 19;
  justin_emxEnsureCapacity_char_T(iobj_8->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 19; b_kstr++) {
    iobj_8->NameInternal->data[b_kstr] = tmp_7[b_kstr];
  }

  iobj_8->ParentIndex = 8.0;
  b_kstr = iobj_8->JointInternal.Type->size[0] * iobj_8->
    JointInternal.Type->size[1];
  iobj_8->JointInternal.Type->size[0] = 1;
  iobj_8->JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(iobj_8->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_8->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_8->JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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
    iobj_8->JointInternal.JointToParentTransform[b_kstr] = tmp_8[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_8->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  iobj_8->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_8->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_8->JointInternal.JointAxisInternal[2] = 0.0;
  obj->Bodies[9] = iobj_8;
  obj->NumBodies = 10.0;
  obj->PositionNumber = 7.0;
  obj_0 = &obj->Base;
  b_kstr = obj->Base.NameInternal->size[0] * obj->Base.NameInternal->size[1];
  obj->Base.NameInternal->size[0] = 1;
  obj->Base.NameInternal->size[1] = 19;
  justin_emxEnsureCapacity_char_T(obj->Base.NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 19; b_kstr++) {
    obj->Base.NameInternal->data[b_kstr] = tmp_9[b_kstr];
  }

  b_kstr = obj->Base.JointInternal.Type->size[0] * obj->
    Base.JointInternal.Type->size[1];
  obj->Base.JointInternal.Type->size[0] = 1;
  obj->Base.JointInternal.Type->size[1] = 5;
  justin_emxEnsureCapacity_char_T(obj->Base.JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj_0->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Base.JointInternal.Type->size[1];
  justin_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  justina_smo_emxFree_char_T(&switch_expression);
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

static void emxInitStruct_q_robotics_man_og(q_robotics_manip_internal__og_T
  *pStruct)
{
  emxInitStruct_p_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slman_og(robotics_slmanip_internal__og_T
  *pStruct)
{
  emxInitStruct_q_robotics_man_og(&pStruct->TreeInternal);
}

static q_robotics_manip_internal__og_T *RigidBodyTree_RigidBodyTree_og
  (q_robotics_manip_internal__og_T *obj, o_robotics_manip_internal_R_o_T *iobj_0,
   o_robotics_manip_internal_R_o_T *iobj_1, o_robotics_manip_internal_R_o_T
   *iobj_2, o_robotics_manip_internal_R_o_T *iobj_3,
   o_robotics_manip_internal_R_o_T *iobj_4, o_robotics_manip_internal_R_o_T
   *iobj_5, o_robotics_manip_internal_R_o_T *iobj_6,
   o_robotics_manip_internal_R_o_T *iobj_7, o_robotics_manip_internal_R_o_T
   *iobj_8, o_robotics_manip_internal_R_o_T *iobj_9)
{
  q_robotics_manip_internal__og_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 1, 2, 3, 4, 5, 6, 7, 0, 0, 0, 1, 2, 3, 4, 5, 6,
    7, -1, -1, -1 };

  b_obj = obj;
  obj->Bodies[0] = jus_RigidBody_RigidBody_og4q5te(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = ju_RigidBody_RigidBody_og4q5tei(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = j_RigidBody_RigidBody_og4q5teix(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = RigidBody_RigidBody_og4q5teixq(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = RigidBody_RigidBody_og4q5teixqw(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = RigidBody_RigidBod_og4q5teixqwa(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = RigidBody_RigidBo_og4q5teixqwaz(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = RigidBody_RigidB_og4q5teixqwaz5(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = RigidBody_Rigid_og4q5teixqwaz55(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = j_RigidBody_Rigid_o(iobj_8);
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

  j_RigidBody_Rigid_ou(&obj->Base);
  return b_obj;
}

// Model step function
void justina_smo_step(void)
{
  robotics_slmanip_internal_blo_T *obj;
  q_robotics_manip_internal_Rig_T *obj_0;
  emxArray_f_cell_wrap_justina__T *Ttree;
  emxArray_char_T_justina_smo_T *bname;
  o_robotics_manip_internal_Rig_T *obj_1;
  robotics_slmanip_internal__og_T *obj_2;
  emxArray_real_T_justina_smo_T *L;
  emxArray_real_T_justina_smo_T *lambda;
  emxArray_real_T_justina_smo_T *H;
  emxArray_real_T_justina_smo_T *tmp;
  static const char_T tmp_0[19] = { 's', 'h', 'o', 'u', 'l', 'd', 'e', 'r', 's',
    '_', 'l', 'e', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_1[14] = { 'l', 'e', 'f', 't', '_', 'a', 'r', 'm', '_',
    'l', 'i', 'n', 'k', '6' };

  int32_T exitg1;
  boolean_T exitg2;
  if (rtmIsMajorTimeStep(justina_smo_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&justina_smo_M->solverInfo,
                          ((justina_smo_M->Timing.clockTick0+1)*
      justina_smo_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(justina_smo_M)) {
    justina_smo_M->Timing.t[0] = rtsiGetT(&justina_smo_M->solverInfo);
  }

  justina_smo_emxInit_real_T(&H, 2);
  if (rtmIsMajorTimeStep(justina_smo_M) &&
      justina_smo_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   Inport: '<S11>/In1'

    justina_smo_SystemCore_step(&justina_smo_B.b_varargout_1, justina_smo_B.bias,
      &justina_smo_B.b_varargout_2_Data_SL_Info_Curr,
      &justina_smo_B.b_varargout_2_Data_SL_Info_Rece,
      &justina_smo_B.b_varargout_2_Layout_DataOffset,
      justina_smo_B.b_varargout_2_Layout_Dim,
      &justina_smo_B.b_varargout_2_Layout_Dim_SL_Inf,
      &justina_smo_B.b_varargout_2_Layout_Dim_SL_I_j);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S11>/Enable'

    if (justina_smo_B.b_varargout_1) {
      for (justina_smo_B.i = 0; justina_smo_B.i < 7; justina_smo_B.i++) {
        justina_smo_B.In1_k.Data[justina_smo_B.i] =
          justina_smo_B.bias[justina_smo_B.i];
      }

      justina_smo_B.In1_k.Data_SL_Info.CurrentLength =
        justina_smo_B.b_varargout_2_Data_SL_Info_Curr;
      justina_smo_B.In1_k.Data_SL_Info.ReceivedLength =
        justina_smo_B.b_varargout_2_Data_SL_Info_Rece;
      justina_smo_B.In1_k.Layout.DataOffset =
        justina_smo_B.b_varargout_2_Layout_DataOffset;
      memcpy(&justina_smo_B.In1_k.Layout.Dim[0],
             &justina_smo_B.b_varargout_2_Layout_Dim[0], sizeof
             (SL_Bus_justina_smo_std_msgs_MultiArrayDimension) << 4U);
      justina_smo_B.In1_k.Layout.Dim_SL_Info.CurrentLength =
        justina_smo_B.b_varargout_2_Layout_Dim_SL_Inf;
      justina_smo_B.In1_k.Layout.Dim_SL_Info.ReceivedLength =
        justina_smo_B.b_varargout_2_Layout_Dim_SL_I_j;
    }

    // End of MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe'

    // MATLABSystem: '<S17>/MATLAB System'
    RigidBodyTreeDynamics_massMatri(&justina_smo_DW.obj_h.TreeInternal,
      justina_smo_B.In1_k.Data, H);
    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 49;
         justina_smo_B.b_kstr++) {
      justina_smo_B.MATLABSystem[justina_smo_B.b_kstr] = H->
        data[justina_smo_B.b_kstr];
    }

    // End of MATLABSystem: '<S17>/MATLAB System'
    justina_smo_emxInit_f_cell_wrap(&Ttree, 2);
    justina_smo_emxInit_char_T(&bname, 2);

    // MATLABSystem: '<S16>/MATLAB System'
    obj = &justina_smo_DW.obj_o;
    obj_0 = &justina_smo_DW.obj_o.TreeInternal;
    RigidBodyTree_forwardKinematics(&obj->TreeInternal, justina_smo_B.In1_k.Data,
      Ttree);
    justina_smo_B.bid1 = -1.0;
    justina_smo_B.b_kstr = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = obj_0->Base.NameInternal->size[1];
    justin_emxEnsureCapacity_char_T(bname, justina_smo_B.b_kstr);
    justina_smo_B.n_c = obj_0->Base.NameInternal->size[0] *
      obj_0->Base.NameInternal->size[1] - 1;
    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <= justina_smo_B.n_c;
         justina_smo_B.b_kstr++) {
      bname->data[justina_smo_B.b_kstr] = obj_0->Base.NameInternal->
        data[justina_smo_B.b_kstr];
    }

    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 19;
         justina_smo_B.b_kstr++) {
      justina_smo_B.b_n[justina_smo_B.b_kstr] = tmp_0[justina_smo_B.b_kstr];
    }

    justina_smo_B.b_varargout_1 = false;
    if (bname->size[1] == 19) {
      justina_smo_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr - 1 < 19) {
          justina_smo_B.n_c = justina_smo_B.b_kstr - 1;
          if (bname->data[justina_smo_B.n_c] !=
              justina_smo_B.b_n[justina_smo_B.n_c]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr++;
          }
        } else {
          justina_smo_B.b_varargout_1 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_varargout_1) {
      justina_smo_B.bid1 = 0.0;
    } else {
      justina_smo_B.vNum = obj->TreeInternal.NumBodies;
      justina_smo_B.i = 0;
      exitg2 = false;
      while ((!exitg2) && (justina_smo_B.i <= static_cast<int32_T>
                           (justina_smo_B.vNum) - 1)) {
        obj_1 = obj_0->Bodies[justina_smo_B.i];
        justina_smo_B.b_kstr = bname->size[0] * bname->size[1];
        bname->size[0] = 1;
        bname->size[1] = obj_1->NameInternal->size[1];
        justin_emxEnsureCapacity_char_T(bname, justina_smo_B.b_kstr);
        justina_smo_B.n_c = obj_1->NameInternal->size[0] * obj_1->
          NameInternal->size[1] - 1;
        for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <= justina_smo_B.n_c;
             justina_smo_B.b_kstr++) {
          bname->data[justina_smo_B.b_kstr] = obj_1->NameInternal->
            data[justina_smo_B.b_kstr];
        }

        for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 19;
             justina_smo_B.b_kstr++) {
          justina_smo_B.b_n[justina_smo_B.b_kstr] = tmp_0[justina_smo_B.b_kstr];
        }

        justina_smo_B.b_varargout_1 = false;
        if (bname->size[1] == 19) {
          justina_smo_B.b_kstr = 1;
          do {
            exitg1 = 0;
            if (justina_smo_B.b_kstr - 1 < 19) {
              justina_smo_B.n_c = justina_smo_B.b_kstr - 1;
              if (bname->data[justina_smo_B.n_c] !=
                  justina_smo_B.b_n[justina_smo_B.n_c]) {
                exitg1 = 1;
              } else {
                justina_smo_B.b_kstr++;
              }
            } else {
              justina_smo_B.b_varargout_1 = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (justina_smo_B.b_varargout_1) {
          justina_smo_B.bid1 = static_cast<real_T>(justina_smo_B.i) + 1.0;
          exitg2 = true;
        } else {
          justina_smo_B.i++;
        }
      }
    }

    if (justina_smo_B.bid1 == 0.0) {
      memset(&justina_smo_B.T1[0], 0, sizeof(real_T) << 4U);
      justina_smo_B.T1[0] = 1.0;
      justina_smo_B.T1[5] = 1.0;
      justina_smo_B.T1[10] = 1.0;
      justina_smo_B.T1[15] = 1.0;
    } else {
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 16;
           justina_smo_B.b_kstr++) {
        justina_smo_B.T1[justina_smo_B.b_kstr] = Ttree->data[static_cast<int32_T>
          (justina_smo_B.bid1) - 1].f1[justina_smo_B.b_kstr];
      }
    }

    justina_smo_B.bid1 = -1.0;
    justina_smo_B.b_kstr = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = obj_0->Base.NameInternal->size[1];
    justin_emxEnsureCapacity_char_T(bname, justina_smo_B.b_kstr);
    justina_smo_B.n_c = obj_0->Base.NameInternal->size[0] *
      obj_0->Base.NameInternal->size[1] - 1;
    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <= justina_smo_B.n_c;
         justina_smo_B.b_kstr++) {
      bname->data[justina_smo_B.b_kstr] = obj_0->Base.NameInternal->
        data[justina_smo_B.b_kstr];
    }

    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 14;
         justina_smo_B.b_kstr++) {
      justina_smo_B.b_i[justina_smo_B.b_kstr] = tmp_1[justina_smo_B.b_kstr];
    }

    justina_smo_B.b_varargout_1 = false;
    if (bname->size[1] == 14) {
      justina_smo_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (justina_smo_B.b_kstr - 1 < 14) {
          justina_smo_B.n_c = justina_smo_B.b_kstr - 1;
          if (bname->data[justina_smo_B.n_c] !=
              justina_smo_B.b_i[justina_smo_B.n_c]) {
            exitg1 = 1;
          } else {
            justina_smo_B.b_kstr++;
          }
        } else {
          justina_smo_B.b_varargout_1 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_smo_B.b_varargout_1) {
      justina_smo_B.bid1 = 0.0;
    } else {
      justina_smo_B.vNum = obj->TreeInternal.NumBodies;
      justina_smo_B.i = 0;
      exitg2 = false;
      while ((!exitg2) && (justina_smo_B.i <= static_cast<int32_T>
                           (justina_smo_B.vNum) - 1)) {
        obj_1 = obj_0->Bodies[justina_smo_B.i];
        justina_smo_B.b_kstr = bname->size[0] * bname->size[1];
        bname->size[0] = 1;
        bname->size[1] = obj_1->NameInternal->size[1];
        justin_emxEnsureCapacity_char_T(bname, justina_smo_B.b_kstr);
        justina_smo_B.n_c = obj_1->NameInternal->size[0] * obj_1->
          NameInternal->size[1] - 1;
        for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <= justina_smo_B.n_c;
             justina_smo_B.b_kstr++) {
          bname->data[justina_smo_B.b_kstr] = obj_1->NameInternal->
            data[justina_smo_B.b_kstr];
        }

        for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 14;
             justina_smo_B.b_kstr++) {
          justina_smo_B.b_i[justina_smo_B.b_kstr] = tmp_1[justina_smo_B.b_kstr];
        }

        justina_smo_B.b_varargout_1 = false;
        if (bname->size[1] == 14) {
          justina_smo_B.b_kstr = 1;
          do {
            exitg1 = 0;
            if (justina_smo_B.b_kstr - 1 < 14) {
              justina_smo_B.n_c = justina_smo_B.b_kstr - 1;
              if (bname->data[justina_smo_B.n_c] !=
                  justina_smo_B.b_i[justina_smo_B.n_c]) {
                exitg1 = 1;
              } else {
                justina_smo_B.b_kstr++;
              }
            } else {
              justina_smo_B.b_varargout_1 = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (justina_smo_B.b_varargout_1) {
          justina_smo_B.bid1 = static_cast<real_T>(justina_smo_B.i) + 1.0;
          exitg2 = true;
        } else {
          justina_smo_B.i++;
        }
      }
    }

    justina_smo_emxFree_char_T(&bname);

    // MATLABSystem: '<S16>/MATLAB System'
    if (justina_smo_B.bid1 == 0.0) {
      memset(&justina_smo_B.T2[0], 0, sizeof(real_T) << 4U);
      justina_smo_B.T2[0] = 1.0;
      justina_smo_B.T2[5] = 1.0;
      justina_smo_B.T2[10] = 1.0;
      justina_smo_B.T2[15] = 1.0;
    } else {
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 16;
           justina_smo_B.b_kstr++) {
        justina_smo_B.T2[justina_smo_B.b_kstr] = Ttree->data[static_cast<int32_T>
          (justina_smo_B.bid1) - 1].f1[justina_smo_B.b_kstr];
      }
    }

    justina_smo_emxFree_f_cell_wrap(&Ttree);

    // MATLABSystem: '<S16>/MATLAB System'
    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 3;
         justina_smo_B.b_kstr++) {
      justina_smo_B.R_p[3 * justina_smo_B.b_kstr] =
        justina_smo_B.T2[justina_smo_B.b_kstr];
      justina_smo_B.R_p[3 * justina_smo_B.b_kstr + 1] =
        justina_smo_B.T2[justina_smo_B.b_kstr + 4];
      justina_smo_B.R_p[3 * justina_smo_B.b_kstr + 2] =
        justina_smo_B.T2[justina_smo_B.b_kstr + 8];
    }

    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 9;
         justina_smo_B.b_kstr++) {
      justina_smo_B.R_l[justina_smo_B.b_kstr] =
        -justina_smo_B.R_p[justina_smo_B.b_kstr];
    }

    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 3;
         justina_smo_B.b_kstr++) {
      justina_smo_B.i = justina_smo_B.b_kstr << 2;
      justina_smo_B.R_k[justina_smo_B.i] = justina_smo_B.R_p[3 *
        justina_smo_B.b_kstr];
      justina_smo_B.R_k[justina_smo_B.i + 1] = justina_smo_B.R_p[3 *
        justina_smo_B.b_kstr + 1];
      justina_smo_B.R_k[justina_smo_B.i + 2] = justina_smo_B.R_p[3 *
        justina_smo_B.b_kstr + 2];
      justina_smo_B.R_k[justina_smo_B.b_kstr + 12] =
        justina_smo_B.R_l[justina_smo_B.b_kstr + 6] * justina_smo_B.T2[14] +
        (justina_smo_B.R_l[justina_smo_B.b_kstr + 3] * justina_smo_B.T2[13] +
         justina_smo_B.R_l[justina_smo_B.b_kstr] * justina_smo_B.T2[12]);
    }

    justina_smo_B.R_k[3] = 0.0;
    justina_smo_B.R_k[7] = 0.0;
    justina_smo_B.R_k[11] = 0.0;
    justina_smo_B.R_k[15] = 1.0;
    for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 4;
         justina_smo_B.b_kstr++) {
      for (justina_smo_B.n_c = 0; justina_smo_B.n_c < 4; justina_smo_B.n_c++) {
        justina_smo_B.i = justina_smo_B.b_kstr << 2;
        justina_smo_B.rtb_MATLABSystem_d_tmp = justina_smo_B.n_c +
          justina_smo_B.i;
        justina_smo_B.T2[justina_smo_B.rtb_MATLABSystem_d_tmp] = 0.0;
        justina_smo_B.T2[justina_smo_B.rtb_MATLABSystem_d_tmp] +=
          justina_smo_B.T1[justina_smo_B.i] *
          justina_smo_B.R_k[justina_smo_B.n_c];
        justina_smo_B.T2[justina_smo_B.rtb_MATLABSystem_d_tmp] +=
          justina_smo_B.T1[justina_smo_B.i + 1] *
          justina_smo_B.R_k[justina_smo_B.n_c + 4];
        justina_smo_B.T2[justina_smo_B.rtb_MATLABSystem_d_tmp] +=
          justina_smo_B.T1[justina_smo_B.i + 2] *
          justina_smo_B.R_k[justina_smo_B.n_c + 8];
        justina_smo_B.T2[justina_smo_B.rtb_MATLABSystem_d_tmp] +=
          justina_smo_B.T1[justina_smo_B.i + 3] *
          justina_smo_B.R_k[justina_smo_B.n_c + 12];
      }
    }

    // Outputs for Atomic SubSystem: '<S3>/Subscribe1'
    // MATLABSystem: '<S10>/SourceBlock' incorporates:
    //   Inport: '<S12>/In1'

    justina_smo_SystemCore_step_o(&justina_smo_B.b_varargout_1,
      justina_smo_B.bias, &justina_smo_B.b_varargout_2_Data_SL_Info_Curr,
      &justina_smo_B.b_varargout_2_Data_SL_Info_Rece,
      &justina_smo_B.b_varargout_2_Layout_DataOffset,
      justina_smo_B.b_varargout_2_Layout_Dim,
      &justina_smo_B.b_varargout_2_Layout_Dim_SL_Inf,
      &justina_smo_B.b_varargout_2_Layout_Dim_SL_I_j);

    // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S12>/Enable'

    if (justina_smo_B.b_varargout_1) {
      for (justina_smo_B.i = 0; justina_smo_B.i < 7; justina_smo_B.i++) {
        justina_smo_B.In1.Data[justina_smo_B.i] =
          justina_smo_B.bias[justina_smo_B.i];
      }

      justina_smo_B.In1.Data_SL_Info.CurrentLength =
        justina_smo_B.b_varargout_2_Data_SL_Info_Curr;
      justina_smo_B.In1.Data_SL_Info.ReceivedLength =
        justina_smo_B.b_varargout_2_Data_SL_Info_Rece;
      justina_smo_B.In1.Layout.DataOffset =
        justina_smo_B.b_varargout_2_Layout_DataOffset;
      memcpy(&justina_smo_B.In1.Layout.Dim[0],
             &justina_smo_B.b_varargout_2_Layout_Dim[0], sizeof
             (SL_Bus_justina_smo_std_msgs_MultiArrayDimension) << 4U);
      justina_smo_B.In1.Layout.Dim_SL_Info.CurrentLength =
        justina_smo_B.b_varargout_2_Layout_Dim_SL_Inf;
      justina_smo_B.In1.Layout.Dim_SL_Info.ReceivedLength =
        justina_smo_B.b_varargout_2_Layout_Dim_SL_I_j;
    }

    // End of MATLABSystem: '<S10>/SourceBlock'
    // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe1'
  }

  justina_smo_emxInit_real_T(&L, 2);
  justina_smo_emxInit_real_T(&lambda, 2);
  justina_smo_emxInit_real_T(&tmp, 1);

  // MATLABSystem: '<S19>/MATLAB System' incorporates:
  //   Constant: '<S15>/Constant2'
  //   Integrator: '<S15>/Integrator'

  obj_2 = &justina_smo_DW.obj;
  RigidBodyTreeDynamics_massMat_o(&justina_smo_DW.obj.TreeInternal,
    justina_smo_B.In1_k.Data, L, lambda);
  justina_smo_B.vNum = obj_2->TreeInternal.VelocityNumber;
  justina_smo_B.rtb_MATLABSystem_d_tmp = static_cast<int32_T>(justina_smo_B.vNum);
  justina_smo_B.b_kstr = tmp->size[0];
  tmp->size[0] = justina_smo_B.rtb_MATLABSystem_d_tmp;
  justin_emxEnsureCapacity_real_T(tmp, justina_smo_B.b_kstr);
  for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <
       justina_smo_B.rtb_MATLABSystem_d_tmp; justina_smo_B.b_kstr++) {
    tmp->data[justina_smo_B.b_kstr] = 0.0;
  }

  RigidBodyTreeDynamics_inverseDy(&obj_2->TreeInternal, justina_smo_B.In1_k.Data,
    &justina_smo_X.Integrator_CSTATE[7], justina_smo_P.Constant2_Value,
    justina_smo_B.bias);
  justina_smo_emxFree_real_T(&tmp);

  // MATLABSystem: '<S19>/MATLAB System'
  for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 7; justina_smo_B.b_kstr
       ++) {
    justina_smo_B.bias[justina_smo_B.b_kstr] =
      justina_smo_B.In1.Data[justina_smo_B.b_kstr] -
      justina_smo_B.bias[justina_smo_B.b_kstr];
  }

  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    justina_smo_B.u1 = 0;
  } else {
    justina_smo_B.i = L->size[0];
    justina_smo_B.u1 = L->size[1];
    if (justina_smo_B.i > justina_smo_B.u1) {
      justina_smo_B.u1 = justina_smo_B.i;
    }
  }

  justina_smo_B.b_kstr = H->size[0] * H->size[1];
  H->size[0] = L->size[0];
  H->size[1] = L->size[1];
  justin_emxEnsureCapacity_real_T(H, justina_smo_B.b_kstr);
  justina_smo_B.n_c = L->size[0] * L->size[1] - 1;
  for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <= justina_smo_B.n_c;
       justina_smo_B.b_kstr++) {
    H->data[justina_smo_B.b_kstr] = L->data[justina_smo_B.b_kstr];
  }

  justina_smo_B.iend = static_cast<int32_T>(((-1.0 - static_cast<real_T>
    (justina_smo_B.u1)) + 1.0) / -1.0) - 1;
  for (justina_smo_B.i = 0; justina_smo_B.i <= justina_smo_B.iend;
       justina_smo_B.i++) {
    justina_smo_B.j = static_cast<real_T>(justina_smo_B.u1) +
      -static_cast<real_T>(justina_smo_B.i);
    justina_smo_B.b_kstr = static_cast<int32_T>(justina_smo_B.j);
    justina_smo_B.n_c = justina_smo_B.b_kstr - 1;
    H->data[(static_cast<int32_T>(justina_smo_B.j) + H->size[0] *
             (static_cast<int32_T>(justina_smo_B.j) - 1)) - 1] = sqrt(H->data
      [(justina_smo_B.n_c * H->size[0] + justina_smo_B.b_kstr) - 1]);
    justina_smo_B.bid1 = lambda->data[justina_smo_B.n_c];
    while (justina_smo_B.bid1 > 0.0) {
      justina_smo_B.i_k = static_cast<int32_T>(justina_smo_B.bid1) - 1;
      H->data[(static_cast<int32_T>(justina_smo_B.j) + H->size[0] * (
                static_cast<int32_T>(justina_smo_B.bid1) - 1)) - 1] = H->data
        [(justina_smo_B.i_k * H->size[0] + justina_smo_B.b_kstr) - 1] / H->data
        [((static_cast<int32_T>(justina_smo_B.j) - 1) * H->size[0] +
          static_cast<int32_T>(justina_smo_B.j)) - 1];
      justina_smo_B.bid1 = lambda->data[justina_smo_B.i_k];
    }

    justina_smo_B.bid1 = lambda->data[justina_smo_B.n_c];
    while (justina_smo_B.bid1 > 0.0) {
      justina_smo_B.j = justina_smo_B.bid1;
      while (justina_smo_B.j > 0.0) {
        justina_smo_B.n_c = static_cast<int32_T>(justina_smo_B.j) - 1;
        H->data[(static_cast<int32_T>(justina_smo_B.bid1) + H->size[0] * (
                  static_cast<int32_T>(justina_smo_B.j) - 1)) - 1] = H->data
          [(justina_smo_B.n_c * H->size[0] + static_cast<int32_T>
            (justina_smo_B.bid1)) - 1] - H->data[((static_cast<int32_T>
          (justina_smo_B.bid1) - 1) * H->size[0] + justina_smo_B.b_kstr) - 1] *
          H->data[((static_cast<int32_T>(justina_smo_B.j) - 1) * H->size[0] +
                   justina_smo_B.b_kstr) - 1];
        justina_smo_B.j = lambda->data[justina_smo_B.n_c];
      }

      justina_smo_B.bid1 = lambda->data[static_cast<int32_T>(justina_smo_B.bid1)
        - 1];
    }
  }

  justina_smo_B.b_kstr = L->size[0] * L->size[1];
  L->size[0] = H->size[0];
  L->size[1] = H->size[1];
  justin_emxEnsureCapacity_real_T(L, justina_smo_B.b_kstr);
  justina_smo_B.n_c = H->size[0] * H->size[1] - 1;
  for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr <= justina_smo_B.n_c;
       justina_smo_B.b_kstr++) {
    L->data[justina_smo_B.b_kstr] = H->data[justina_smo_B.b_kstr];
  }

  justina_smo_B.n_c = H->size[1];
  if ((H->size[0] == 0) || (H->size[1] == 0) || (1 >= H->size[1])) {
  } else {
    justina_smo_B.iend = 0;
    for (justina_smo_B.b_kstr = 2; justina_smo_B.b_kstr <= justina_smo_B.n_c;
         justina_smo_B.b_kstr++) {
      for (justina_smo_B.i = 0; justina_smo_B.i <= justina_smo_B.iend;
           justina_smo_B.i++) {
        L->data[justina_smo_B.i + L->size[0] * (justina_smo_B.b_kstr - 1)] = 0.0;
      }

      if (justina_smo_B.iend + 1 < H->size[0]) {
        justina_smo_B.iend++;
      }
    }
  }

  justina_smo_emxFree_real_T(&H);

  // MATLABSystem: '<S19>/MATLAB System'
  justina_smo_B.iend = static_cast<int32_T>(((-1.0 - justina_smo_B.vNum) + 1.0) /
    -1.0) - 1;
  for (justina_smo_B.i = 0; justina_smo_B.i <= justina_smo_B.iend;
       justina_smo_B.i++) {
    justina_smo_B.n_c = static_cast<int32_T>(justina_smo_B.vNum +
      -static_cast<real_T>(justina_smo_B.i));
    justina_smo_B.b_kstr = justina_smo_B.n_c - 1;
    justina_smo_B.bias[justina_smo_B.b_kstr] /= L->data[(justina_smo_B.b_kstr *
      L->size[0] + justina_smo_B.n_c) - 1];
    justina_smo_B.j = lambda->data[justina_smo_B.b_kstr];
    while (justina_smo_B.j > 0.0) {
      justina_smo_B.u1 = static_cast<int32_T>(justina_smo_B.j) - 1;
      justina_smo_B.bias[justina_smo_B.u1] -= L->data[(justina_smo_B.u1 *
        L->size[0] + justina_smo_B.n_c) - 1] *
        justina_smo_B.bias[justina_smo_B.b_kstr];
      justina_smo_B.j = lambda->data[justina_smo_B.u1];
    }
  }

  justina_smo_B.n_c = justina_smo_B.rtb_MATLABSystem_d_tmp - 1;
  for (justina_smo_B.i = 0; justina_smo_B.i <= justina_smo_B.n_c;
       justina_smo_B.i++) {
    justina_smo_B.j = lambda->data[justina_smo_B.i];
    while (justina_smo_B.j > 0.0) {
      justina_smo_B.b_kstr = static_cast<int32_T>(justina_smo_B.j) - 1;
      justina_smo_B.bias[justina_smo_B.i] -= L->data[justina_smo_B.b_kstr *
        L->size[0] + justina_smo_B.i] * justina_smo_B.bias[justina_smo_B.b_kstr];
      justina_smo_B.j = lambda->data[justina_smo_B.b_kstr];
    }

    justina_smo_B.bias[justina_smo_B.i] /= L->data[L->size[0] * justina_smo_B.i
      + justina_smo_B.i];
  }

  justina_smo_emxFree_real_T(&lambda);
  justina_smo_emxFree_real_T(&L);
  if (rtmIsMajorTimeStep(justina_smo_M) &&
      justina_smo_M->Timing.TaskCounters.TID[3] == 0) {
    // MATLABSystem: '<S1>/Get Parameter7'
    ParamGet_justina_smo_383.get_parameter(&justina_smo_B.GetParameter7_o1);

    // MATLABSystem: '<S1>/Get Parameter8'
    ParamGet_justina_smo_384.get_parameter(&justina_smo_B.GetParameter8_o1);

    // MATLABSystem: '<S1>/Get Parameter9'
    ParamGet_justina_smo_385.get_parameter(&justina_smo_B.GetParameter9_o1);
  }

  // MATLAB Function: '<S15>/Observer' incorporates:
  //   Integrator: '<S15>/Integrator'
  //   MATLABSystem: '<S19>/MATLAB System'

  memset(&justina_smo_B.xp_est[0], 0, 14U * sizeof(real_T));
  for (justina_smo_B.i = 0; justina_smo_B.i < 7; justina_smo_B.i++) {
    justina_smo_B.vNum = 2.0 / (exp
      ((justina_smo_X.Integrator_CSTATE[justina_smo_B.i] -
        justina_smo_B.In1_k.Data[justina_smo_B.i]) /
       justina_smo_B.GetParameter9_o1) + 1.0) - 1.0;
    justina_smo_B.z[justina_smo_B.i] = justina_smo_B.vNum *
      justina_smo_B.GetParameter8_o1;
    justina_smo_B.xp_est[justina_smo_B.i] = justina_smo_B.vNum * (sqrt(fabs
      (justina_smo_B.In1_k.Data[justina_smo_B.i] -
       justina_smo_X.Integrator_CSTATE[justina_smo_B.i])) *
      justina_smo_B.GetParameter7_o1) +
      justina_smo_X.Integrator_CSTATE[justina_smo_B.i + 7];
    justina_smo_B.xp_est[justina_smo_B.i + 7] =
      justina_smo_B.bias[justina_smo_B.i] + justina_smo_B.z[justina_smo_B.i];
  }

  // End of MATLAB Function: '<S15>/Observer'
  if (rtmIsMajorTimeStep(justina_smo_M) &&
      justina_smo_M->Timing.TaskCounters.TID[1] == 0) {
    // MATLABSystem: '<S14>/Coordinate Transformation Conversion1'
    justina_smo_B.vNum = sqrt(justina_smo_B.T2[0] * justina_smo_B.T2[0] +
      justina_smo_B.T2[1] * justina_smo_B.T2[1]);
    justina_smo_B.CoordinateTransformationConvers[0] = rt_atan2d_snf
      (justina_smo_B.T2[6], justina_smo_B.T2[10]);
    justina_smo_B.CoordinateTransformationConvers[1] = rt_atan2d_snf
      (-justina_smo_B.T2[2], justina_smo_B.vNum);
    justina_smo_B.CoordinateTransformationConvers[2] = rt_atan2d_snf
      (justina_smo_B.T2[1], justina_smo_B.T2[0]);
    if (justina_smo_B.vNum < 2.2204460492503131E-15) {
      justina_smo_B.n_c = 0;
      for (justina_smo_B.i = 0; justina_smo_B.i < 1; justina_smo_B.i++) {
        justina_smo_B.n_c++;
      }

      justina_smo_B.rtb_MATLABSystem_d_size[0] = 1;
      justina_smo_B.rtb_MATLABSystem_d_size[1] = 1;
      justina_smo_B.rtb_MATLABSystem_d_size[2] = justina_smo_B.n_c;
      justina_smo_B.rtb_MATLABSystem_d_size_o[0] = 1;
      justina_smo_B.rtb_MATLABSystem_d_size_o[1] = 1;
      justina_smo_B.rtb_MATLABSystem_d_size_o[2] = justina_smo_B.n_c;
      justina_smo_B.rtb_MATLABSystem_d_size_n[0] = 1;
      justina_smo_B.rtb_MATLABSystem_d_size_n[1] = 1;
      justina_smo_B.rtb_MATLABSystem_d_size_n[2] = justina_smo_B.n_c;
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < justina_smo_B.n_c;
           justina_smo_B.b_kstr++) {
        justina_smo_B.rtb_MATLABSystem_d_data = -justina_smo_B.T2[9];
        justina_smo_B.rtb_MATLABSystem_d_data_p = justina_smo_B.T2[5];
        justina_smo_B.rtb_MATLABSystem_d_data_p5 = -justina_smo_B.T2[2];
      }

      justina_smo_atan2(&justina_smo_B.rtb_MATLABSystem_d_data,
                        justina_smo_B.rtb_MATLABSystem_d_size,
                        &justina_smo_B.rtb_MATLABSystem_d_data_p,
                        justina_smo_B.rtb_MATLABSystem_d_size_o,
                        &justina_smo_B.tmp_data, justina_smo_B.tmp_size);
      justina_smo_B.sy_size[0] = 1;
      justina_smo_B.sy_size[1] = 1;
      justina_smo_B.sy_size[2] = justina_smo_B.n_c;
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < justina_smo_B.n_c;
           justina_smo_B.b_kstr++) {
        justina_smo_B.rtb_MATLABSystem_d_data = justina_smo_B.vNum;
      }

      justina_smo_atan2(&justina_smo_B.rtb_MATLABSystem_d_data_p5,
                        justina_smo_B.rtb_MATLABSystem_d_size_n,
                        &justina_smo_B.rtb_MATLABSystem_d_data,
                        justina_smo_B.sy_size,
                        &justina_smo_B.rtb_MATLABSystem_d_data_p,
                        justina_smo_B.rtb_MATLABSystem_d_size);
      justina_smo_B.n_c = justina_smo_B.tmp_size[2];
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < justina_smo_B.n_c;
           justina_smo_B.b_kstr++) {
        justina_smo_B.CoordinateTransformationConvers[0] =
          justina_smo_B.tmp_data;
      }

      justina_smo_B.n_c = justina_smo_B.rtb_MATLABSystem_d_size[2];
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < justina_smo_B.n_c;
           justina_smo_B.b_kstr++) {
        justina_smo_B.CoordinateTransformationConvers[1] =
          justina_smo_B.rtb_MATLABSystem_d_data_p;
      }

      justina_smo_B.CoordinateTransformationConvers[2] = 0.0;
    }

    justina_smo_B.vNum = justina_smo_B.CoordinateTransformationConvers[0];
    justina_smo_B.CoordinateTransformationConvers[0] =
      justina_smo_B.CoordinateTransformationConvers[2];
    justina_smo_B.CoordinateTransformationConvers[2] = justina_smo_B.vNum;

    // End of MATLABSystem: '<S14>/Coordinate Transformation Conversion1'
  }

  // MATLAB Function: '<S14>/mass estimator' incorporates:
  //   Integrator: '<S15>/Integrator'

  justina_smo_B.bid1 = 0.0;
  justina_smo_B.vNum = 3.3121686421112381E-170;
  for (justina_smo_B.i = 0; justina_smo_B.i < 7; justina_smo_B.i++) {
    justina_smo_B.j = fabs(justina_smo_X.Integrator_CSTATE[justina_smo_B.i + 7]);
    if (justina_smo_B.j > justina_smo_B.vNum) {
      justina_smo_B.t = justina_smo_B.vNum / justina_smo_B.j;
      justina_smo_B.bid1 = justina_smo_B.bid1 * justina_smo_B.t *
        justina_smo_B.t + 1.0;
      justina_smo_B.vNum = justina_smo_B.j;
    } else {
      justina_smo_B.t = justina_smo_B.j / justina_smo_B.vNum;
      justina_smo_B.bid1 += justina_smo_B.t * justina_smo_B.t;
    }
  }

  justina_smo_B.bid1 = justina_smo_B.vNum * sqrt(justina_smo_B.bid1);
  justina_smo_B.vNum = sin(justina_smo_B.CoordinateTransformationConvers[1]);
  if (fabs(justina_smo_B.vNum) > 0.2) {
    if (justina_smo_B.bid1 < 0.15) {
      // TransferFcn: '<S13>/Low Pass (z1)' incorporates:
      //   TransferFcn: '<S13>/Low Pass (z1)1'
      //   TransferFcn: '<S13>/Low Pass (z1)2'
      //   TransferFcn: '<S13>/Low Pass (z1)3'
      //   TransferFcn: '<S13>/Low Pass (z1)4'
      //   TransferFcn: '<S13>/Low Pass (z1)5'
      //   TransferFcn: '<S13>/Low Pass (z1)6'

      justina_smo_B.bid1 = justina_smo_P.lowpass_B[0] / justina_smo_P.lowpass_A
        [0];
      justina_smo_B.j = justina_smo_P.lowpass_B[1] / justina_smo_P.lowpass_A[0]
        - justina_smo_B.bid1 * (justina_smo_P.lowpass_A[1] /
        justina_smo_P.lowpass_A[0]);
      justina_smo_B.t = justina_smo_P.lowpass_B[0] / justina_smo_P.lowpass_A[0];
      justina_smo_B.rtb_LowPassz1_tmp = justina_smo_P.lowpass_B[2] /
        justina_smo_P.lowpass_A[0] - justina_smo_B.bid1 *
        (justina_smo_P.lowpass_A[2] / justina_smo_P.lowpass_A[0]);
      justina_smo_B.rtb_LowPassz1_tmp_a = justina_smo_P.lowpass_B[3] /
        justina_smo_P.lowpass_A[0] - justina_smo_B.bid1 *
        (justina_smo_P.lowpass_A[3] / justina_smo_P.lowpass_A[0]);
      justina_smo_B.bid1 = justina_smo_P.lowpass_B[4] / justina_smo_P.lowpass_A
        [0] - justina_smo_B.bid1 * (justina_smo_P.lowpass_A[4] /
        justina_smo_P.lowpass_A[0]);

      // SignalConversion generated from: '<S18>/ SFunction ' incorporates:
      //   TransferFcn: '<S13>/Low Pass (z1)'
      //   TransferFcn: '<S13>/Low Pass (z1)1'
      //   TransferFcn: '<S13>/Low Pass (z1)2'
      //   TransferFcn: '<S13>/Low Pass (z1)3'
      //   TransferFcn: '<S13>/Low Pass (z1)4'
      //   TransferFcn: '<S13>/Low Pass (z1)5'
      //   TransferFcn: '<S13>/Low Pass (z1)6'

      justina_smo_B.bias[0] = (((justina_smo_B.j *
        justina_smo_X.LowPassz1_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[0])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz1_CSTATE[1]) +
        justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz1_CSTATE[2]) +
        justina_smo_B.bid1 * justina_smo_X.LowPassz1_CSTATE[3];
      justina_smo_B.bias[1] = (((justina_smo_B.j *
        justina_smo_X.LowPassz11_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[1])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz11_CSTATE[1])
        + justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz11_CSTATE[2])
        + justina_smo_B.bid1 * justina_smo_X.LowPassz11_CSTATE[3];
      justina_smo_B.bias[2] = (((justina_smo_B.j *
        justina_smo_X.LowPassz12_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[2])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz12_CSTATE[1])
        + justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz12_CSTATE[2])
        + justina_smo_B.bid1 * justina_smo_X.LowPassz12_CSTATE[3];
      justina_smo_B.bias[3] = (((justina_smo_B.j *
        justina_smo_X.LowPassz13_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[3])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz13_CSTATE[1])
        + justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz13_CSTATE[2])
        + justina_smo_B.bid1 * justina_smo_X.LowPassz13_CSTATE[3];
      justina_smo_B.bias[4] = (((justina_smo_B.j *
        justina_smo_X.LowPassz14_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[4])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz14_CSTATE[1])
        + justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz14_CSTATE[2])
        + justina_smo_B.bid1 * justina_smo_X.LowPassz14_CSTATE[3];
      justina_smo_B.bias[5] = (((justina_smo_B.j *
        justina_smo_X.LowPassz15_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[5])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz15_CSTATE[1])
        + justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz15_CSTATE[2])
        + justina_smo_B.bid1 * justina_smo_X.LowPassz15_CSTATE[3];
      justina_smo_B.bias[6] = (((justina_smo_B.j *
        justina_smo_X.LowPassz16_CSTATE[0] + justina_smo_B.t * justina_smo_B.z[6])
        + justina_smo_B.rtb_LowPassz1_tmp * justina_smo_X.LowPassz16_CSTATE[1])
        + justina_smo_B.rtb_LowPassz1_tmp_a * justina_smo_X.LowPassz16_CSTATE[2])
        + justina_smo_B.bid1 * justina_smo_X.LowPassz16_CSTATE[3];
      for (justina_smo_B.b_kstr = 0; justina_smo_B.b_kstr < 7;
           justina_smo_B.b_kstr++) {
        justina_smo_B.dv5[justina_smo_B.b_kstr] = 0.0;
        for (justina_smo_B.n_c = 0; justina_smo_B.n_c < 7; justina_smo_B.n_c++)
        {
          justina_smo_B.dv5[justina_smo_B.b_kstr] += justina_smo_B.MATLABSystem
            [7 * justina_smo_B.n_c + justina_smo_B.b_kstr] *
            justina_smo_B.bias[justina_smo_B.n_c];
        }
      }

      justina_smo_B.vNum = -justina_smo_B.dv5[5] / (2.0601 * justina_smo_B.vNum);
    } else {
      justina_smo_B.vNum = 0.0;
    }
  } else {
    justina_smo_B.vNum = 0.0;
  }

  // End of MATLAB Function: '<S14>/mass estimator'

  // RateTransition: '<S2>/Rate Transition'
  if ((rtmIsMajorTimeStep(justina_smo_M) &&
       justina_smo_M->Timing.TaskCounters.TID[1] == 0) && (rtmIsMajorTimeStep
       (justina_smo_M) &&
       justina_smo_M->Timing.TaskCounters.TID[2] == 0)) {
    justina_smo_DW.RateTransition_Buffer = justina_smo_B.vNum;
  }

  if (rtmIsMajorTimeStep(justina_smo_M) &&
      justina_smo_M->Timing.TaskCounters.TID[2] == 0) {
    // BusAssignment: '<S2>/Bus Assignment2'
    justina_smo_B.BusAssignment2.Data = justina_smo_DW.RateTransition_Buffer;

    // Outputs for Atomic SubSystem: '<S2>/Publish2'
    // MATLABSystem: '<S7>/SinkBlock'
    Pub_justina_smo_311.publish(&justina_smo_B.BusAssignment2);

    // End of Outputs for SubSystem: '<S2>/Publish2'
  }

  // End of RateTransition: '<S2>/Rate Transition'
  if (rtmIsMajorTimeStep(justina_smo_M) &&
      justina_smo_M->Timing.TaskCounters.TID[1] == 0) {
    // BusAssignment: '<S2>/Bus Assignment3' incorporates:
    //   Constant: '<S2>/Constant1'
    //   Constant: '<S6>/Constant'
    //   Integrator: '<S15>/Integrator'

    justina_smo_B.BusAssignment3 = justina_smo_P.Constant_Value_i;
    for (justina_smo_B.i = 0; justina_smo_B.i < 7; justina_smo_B.i++) {
      justina_smo_B.BusAssignment3.Data[justina_smo_B.i] =
        justina_smo_X.Integrator_CSTATE[justina_smo_B.i + 7];
    }

    justina_smo_B.BusAssignment3.Data_SL_Info.CurrentLength =
      justina_smo_P.Constant1_Value;
    justina_smo_B.BusAssignment3.Data_SL_Info.ReceivedLength =
      justina_smo_P.Constant1_Value;

    // End of BusAssignment: '<S2>/Bus Assignment3'

    // Outputs for Atomic SubSystem: '<S2>/Publish3'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_justina_smo_331.publish(&justina_smo_B.BusAssignment3);

    // End of Outputs for SubSystem: '<S2>/Publish3'
  }

  if (rtmIsMajorTimeStep(justina_smo_M)) {
    rt_ertODEUpdateContinuousStates(&justina_smo_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++justina_smo_M->Timing.clockTick0;
    justina_smo_M->Timing.t[0] = rtsiGetSolverStopTime
      (&justina_smo_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.004s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.004, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      justina_smo_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void justina_smo_derivatives(void)
{
  real_T LowPassz1_CSTATE_tmp;
  real_T LowPassz1_CSTATE_tmp_0;
  real_T LowPassz1_CSTATE_tmp_1;
  real_T LowPassz1_CSTATE_tmp_2;
  XDot_justina_smo_T *_rtXdot;
  _rtXdot = ((XDot_justina_smo_T *) justina_smo_M->derivs);

  // Derivatives for Integrator: '<S15>/Integrator'
  memcpy(&_rtXdot->Integrator_CSTATE[0], &justina_smo_B.xp_est[0], 14U * sizeof
         (real_T));

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)' incorporates:
  //   TransferFcn: '<S13>/Low Pass (z1)1'
  //   TransferFcn: '<S13>/Low Pass (z1)2'
  //   TransferFcn: '<S13>/Low Pass (z1)3'
  //   TransferFcn: '<S13>/Low Pass (z1)4'
  //   TransferFcn: '<S13>/Low Pass (z1)5'
  //   TransferFcn: '<S13>/Low Pass (z1)6'

  _rtXdot->LowPassz1_CSTATE[0] = 0.0;
  LowPassz1_CSTATE_tmp = -justina_smo_P.lowpass_A[1] / justina_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz1_CSTATE[0];
  _rtXdot->LowPassz1_CSTATE[1] = 0.0;
  LowPassz1_CSTATE_tmp_0 = -justina_smo_P.lowpass_A[2] /
    justina_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz1_CSTATE[1];
  _rtXdot->LowPassz1_CSTATE[2] = 0.0;
  LowPassz1_CSTATE_tmp_1 = -justina_smo_P.lowpass_A[3] /
    justina_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz1_CSTATE[2];
  _rtXdot->LowPassz1_CSTATE[3] = 0.0;
  LowPassz1_CSTATE_tmp_2 = -justina_smo_P.lowpass_A[4] /
    justina_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz1_CSTATE[3];
  _rtXdot->LowPassz1_CSTATE[1] += justina_smo_X.LowPassz1_CSTATE[0];
  _rtXdot->LowPassz1_CSTATE[2] += justina_smo_X.LowPassz1_CSTATE[1];
  _rtXdot->LowPassz1_CSTATE[3] += justina_smo_X.LowPassz1_CSTATE[2];
  _rtXdot->LowPassz1_CSTATE[0] += justina_smo_B.z[0];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)1'
  _rtXdot->LowPassz11_CSTATE[0] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz11_CSTATE[0];
  _rtXdot->LowPassz11_CSTATE[1] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz11_CSTATE[1];
  _rtXdot->LowPassz11_CSTATE[2] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz11_CSTATE[2];
  _rtXdot->LowPassz11_CSTATE[3] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz11_CSTATE[3];
  _rtXdot->LowPassz11_CSTATE[1] += justina_smo_X.LowPassz11_CSTATE[0];
  _rtXdot->LowPassz11_CSTATE[2] += justina_smo_X.LowPassz11_CSTATE[1];
  _rtXdot->LowPassz11_CSTATE[3] += justina_smo_X.LowPassz11_CSTATE[2];
  _rtXdot->LowPassz11_CSTATE[0] += justina_smo_B.z[1];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)2'
  _rtXdot->LowPassz12_CSTATE[0] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz12_CSTATE[0];
  _rtXdot->LowPassz12_CSTATE[1] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz12_CSTATE[1];
  _rtXdot->LowPassz12_CSTATE[2] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz12_CSTATE[2];
  _rtXdot->LowPassz12_CSTATE[3] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz12_CSTATE[3];
  _rtXdot->LowPassz12_CSTATE[1] += justina_smo_X.LowPassz12_CSTATE[0];
  _rtXdot->LowPassz12_CSTATE[2] += justina_smo_X.LowPassz12_CSTATE[1];
  _rtXdot->LowPassz12_CSTATE[3] += justina_smo_X.LowPassz12_CSTATE[2];
  _rtXdot->LowPassz12_CSTATE[0] += justina_smo_B.z[2];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)3'
  _rtXdot->LowPassz13_CSTATE[0] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz13_CSTATE[0];
  _rtXdot->LowPassz13_CSTATE[1] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz13_CSTATE[1];
  _rtXdot->LowPassz13_CSTATE[2] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz13_CSTATE[2];
  _rtXdot->LowPassz13_CSTATE[3] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz13_CSTATE[3];
  _rtXdot->LowPassz13_CSTATE[1] += justina_smo_X.LowPassz13_CSTATE[0];
  _rtXdot->LowPassz13_CSTATE[2] += justina_smo_X.LowPassz13_CSTATE[1];
  _rtXdot->LowPassz13_CSTATE[3] += justina_smo_X.LowPassz13_CSTATE[2];
  _rtXdot->LowPassz13_CSTATE[0] += justina_smo_B.z[3];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)4'
  _rtXdot->LowPassz14_CSTATE[0] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz14_CSTATE[0];
  _rtXdot->LowPassz14_CSTATE[1] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz14_CSTATE[1];
  _rtXdot->LowPassz14_CSTATE[2] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz14_CSTATE[2];
  _rtXdot->LowPassz14_CSTATE[3] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz14_CSTATE[3];
  _rtXdot->LowPassz14_CSTATE[1] += justina_smo_X.LowPassz14_CSTATE[0];
  _rtXdot->LowPassz14_CSTATE[2] += justina_smo_X.LowPassz14_CSTATE[1];
  _rtXdot->LowPassz14_CSTATE[3] += justina_smo_X.LowPassz14_CSTATE[2];
  _rtXdot->LowPassz14_CSTATE[0] += justina_smo_B.z[4];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)5'
  _rtXdot->LowPassz15_CSTATE[0] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz15_CSTATE[0];
  _rtXdot->LowPassz15_CSTATE[1] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz15_CSTATE[1];
  _rtXdot->LowPassz15_CSTATE[2] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz15_CSTATE[2];
  _rtXdot->LowPassz15_CSTATE[3] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz15_CSTATE[3];
  _rtXdot->LowPassz15_CSTATE[1] += justina_smo_X.LowPassz15_CSTATE[0];
  _rtXdot->LowPassz15_CSTATE[2] += justina_smo_X.LowPassz15_CSTATE[1];
  _rtXdot->LowPassz15_CSTATE[3] += justina_smo_X.LowPassz15_CSTATE[2];
  _rtXdot->LowPassz15_CSTATE[0] += justina_smo_B.z[5];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)6'
  _rtXdot->LowPassz16_CSTATE[0] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp *
    justina_smo_X.LowPassz16_CSTATE[0];
  _rtXdot->LowPassz16_CSTATE[1] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    justina_smo_X.LowPassz16_CSTATE[1];
  _rtXdot->LowPassz16_CSTATE[2] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    justina_smo_X.LowPassz16_CSTATE[2];
  _rtXdot->LowPassz16_CSTATE[3] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    justina_smo_X.LowPassz16_CSTATE[3];
  _rtXdot->LowPassz16_CSTATE[1] += justina_smo_X.LowPassz16_CSTATE[0];
  _rtXdot->LowPassz16_CSTATE[2] += justina_smo_X.LowPassz16_CSTATE[1];
  _rtXdot->LowPassz16_CSTATE[3] += justina_smo_X.LowPassz16_CSTATE[2];
  _rtXdot->LowPassz16_CSTATE[0] += justina_smo_B.z[6];
}

// Model initialize function
void justina_smo_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&justina_smo_M->solverInfo,
                          &justina_smo_M->Timing.simTimeStep);
    rtsiSetTPtr(&justina_smo_M->solverInfo, &rtmGetTPtr(justina_smo_M));
    rtsiSetStepSizePtr(&justina_smo_M->solverInfo,
                       &justina_smo_M->Timing.stepSize0);
    rtsiSetdXPtr(&justina_smo_M->solverInfo, &justina_smo_M->derivs);
    rtsiSetContStatesPtr(&justina_smo_M->solverInfo, (real_T **)
                         &justina_smo_M->contStates);
    rtsiSetNumContStatesPtr(&justina_smo_M->solverInfo,
      &justina_smo_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&justina_smo_M->solverInfo,
      &justina_smo_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&justina_smo_M->solverInfo,
      &justina_smo_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&justina_smo_M->solverInfo,
      &justina_smo_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&justina_smo_M->solverInfo, (&rtmGetErrorStatus
      (justina_smo_M)));
    rtsiSetRTModelPtr(&justina_smo_M->solverInfo, justina_smo_M);
  }

  rtsiSetSimTimeStep(&justina_smo_M->solverInfo, MAJOR_TIME_STEP);
  justina_smo_M->intgData.y = justina_smo_M->odeY;
  justina_smo_M->intgData.f[0] = justina_smo_M->odeF[0];
  justina_smo_M->intgData.f[1] = justina_smo_M->odeF[1];
  justina_smo_M->intgData.f[2] = justina_smo_M->odeF[2];
  justina_smo_M->intgData.f[3] = justina_smo_M->odeF[3];
  justina_smo_M->contStates = ((X_justina_smo_T *) &justina_smo_X);
  rtsiSetSolverData(&justina_smo_M->solverInfo, static_cast<void *>
                    (&justina_smo_M->intgData));
  rtsiSetSolverName(&justina_smo_M->solverInfo,"ode4");
  rtmSetTPtr(justina_smo_M, &justina_smo_M->Timing.tArray[0]);
  justina_smo_M->Timing.stepSize0 = 0.004;

  {
    int32_T i;
    static const char_T tmp[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p', 'o',
      's', 'i', 't', 'i', 'o', 'n', 's' };

    static const char_T tmp_0[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_1[15] = { '/', 'e', 's', 't', 'i', 'm', 'a', 't',
      'e', 'd', '_', 'm', 'a', 's', 's' };

    static const char_T tmp_2[21] = { '/', 's', 'm', 'o', '/', 'e', 's', 't',
      'i', 'm', 'a', 't', 'e', 'd', '_', 's', 'p', 'e', 'e', 'd', 's' };

    static const char_T tmp_3[11] = { '/', 's', 'm', 'o', '/', 'l', 'a', 'm',
      'b', 'd', 'a' };

    static const char_T tmp_4[10] = { '/', 's', 'm', 'o', '/', 'a', 'l', 'p',
      'h', 'a' };

    static const char_T tmp_5[10] = { '/', 's', 'm', 'o', '/', 'g', 'a', 'm',
      'm', 'a' };

    // InitializeConditions for Integrator: '<S15>/Integrator'
    memcpy(&justina_smo_X.Integrator_CSTATE[0], &justina_smo_P.Integrator_IC[0],
           14U * sizeof(real_T));

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    justina_smo_X.LowPassz1_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    justina_smo_X.LowPassz11_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    justina_smo_X.LowPassz12_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    justina_smo_X.LowPassz13_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    justina_smo_X.LowPassz14_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    justina_smo_X.LowPassz15_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    justina_smo_X.LowPassz16_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    justina_smo_X.LowPassz1_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    justina_smo_X.LowPassz11_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    justina_smo_X.LowPassz12_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    justina_smo_X.LowPassz13_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    justina_smo_X.LowPassz14_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    justina_smo_X.LowPassz15_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    justina_smo_X.LowPassz16_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    justina_smo_X.LowPassz1_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    justina_smo_X.LowPassz11_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    justina_smo_X.LowPassz12_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    justina_smo_X.LowPassz13_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    justina_smo_X.LowPassz14_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    justina_smo_X.LowPassz15_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    justina_smo_X.LowPassz16_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    justina_smo_X.LowPassz1_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    justina_smo_X.LowPassz11_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    justina_smo_X.LowPassz12_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    justina_smo_X.LowPassz13_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    justina_smo_X.LowPassz14_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    justina_smo_X.LowPassz15_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    justina_smo_X.LowPassz16_CSTATE[3] = 0.0;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1'
    justina_smo_B.In1_k = justina_smo_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    justina_smo_DW.obj_m.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      justina_smo_B.cv1[i] = tmp[i];
    }

    justina_smo_B.cv1[16] = '\x00';
    Sub_justina_smo_299.createSubscriber(justina_smo_B.cv1, 1);
    justina_smo_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    justina_smo_B.In1 = justina_smo_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    justina_smo_DW.obj_ay.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_ay.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      justina_smo_B.cv3[i] = tmp_0[i];
    }

    justina_smo_B.cv3[14] = '\x00';
    Sub_justina_smo_638.createSubscriber(justina_smo_B.cv3, 1);
    justina_smo_DW.obj_ay.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish2'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    justina_smo_DW.obj_ap.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_ap.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      justina_smo_B.cv2[i] = tmp_1[i];
    }

    justina_smo_B.cv2[15] = '\x00';
    Pub_justina_smo_311.createPublisher(justina_smo_B.cv2, 1);
    justina_smo_DW.obj_ap.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    justina_smo_DW.obj_b.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      justina_smo_B.cv[i] = tmp_2[i];
    }

    justina_smo_B.cv[21] = '\x00';
    Pub_justina_smo_331.createPublisher(justina_smo_B.cv, 1);
    justina_smo_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish3'
    emxInitStruct_robotics_slmanip_(&justina_smo_DW.obj_h);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_1_m);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_20_i);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_19_o);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_18_h);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_17_i);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_16_e);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_15_k);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_14_a);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_13_n);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_12_p);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_11_o);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_10_p);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_9_g);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_8_b);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_7_f);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_6_i);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_5_o);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_4_m);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_3_b);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_2_g);

    // Start for MATLABSystem: '<S17>/MATLAB System'
    justina_smo_DW.obj_h.isInitialized = 0;
    justina_smo_DW.obj_h.isInitialized = 1;
    j_RigidBodyTree_RigidBodyTree_o(&justina_smo_DW.obj_h.TreeInternal,
      &justina_smo_DW.gobj_2_g, &justina_smo_DW.gobj_4_m,
      &justina_smo_DW.gobj_5_o, &justina_smo_DW.gobj_6_i,
      &justina_smo_DW.gobj_7_f, &justina_smo_DW.gobj_8_b,
      &justina_smo_DW.gobj_9_g, &justina_smo_DW.gobj_10_p,
      &justina_smo_DW.gobj_11_o, &justina_smo_DW.gobj_3_b);
    emxInitStruct_robotics_slmani_o(&justina_smo_DW.obj_o);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_1_g);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_20_n);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_19_i);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_18_f);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_17_l);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_16_b);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_15_c);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_14_m);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_13_d);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_12_d);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_11_h);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_10_h);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_9_m);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_8_h);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_7_n);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_6_h);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_5_n);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_4_p);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_3_b3);
    emxInitStruct_o_robotics_mani_o(&justina_smo_DW.gobj_2_i);

    // Start for MATLABSystem: '<S16>/MATLAB System'
    justina_smo_DW.obj_o.isInitialized = 0;
    justina_smo_DW.obj_o.isInitialized = 1;
    jus_RigidBodyTree_RigidBodyTree(&justina_smo_DW.obj_o.TreeInternal,
      &justina_smo_DW.gobj_2_i, &justina_smo_DW.gobj_4_p,
      &justina_smo_DW.gobj_5_n, &justina_smo_DW.gobj_6_h,
      &justina_smo_DW.gobj_7_n, &justina_smo_DW.gobj_8_h,
      &justina_smo_DW.gobj_9_m, &justina_smo_DW.gobj_10_h,
      &justina_smo_DW.gobj_11_h, &justina_smo_DW.gobj_3_b3);
    emxInitStruct_robotics_slman_og(&justina_smo_DW.obj);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_1);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_20);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_19);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_18);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_17);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_16);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_15);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_14);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_13);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_12);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_11);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_10);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_9);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_8);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_7);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_6);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_5);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_4);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_3);
    emxInitStruct_o_robotics_manip_(&justina_smo_DW.gobj_2);

    // Start for MATLABSystem: '<S19>/MATLAB System'
    justina_smo_DW.obj.isInitialized = 0;
    justina_smo_DW.obj.isInitialized = 1;
    RigidBodyTree_RigidBodyTree_og(&justina_smo_DW.obj.TreeInternal,
      &justina_smo_DW.gobj_2, &justina_smo_DW.gobj_4, &justina_smo_DW.gobj_5,
      &justina_smo_DW.gobj_6, &justina_smo_DW.gobj_7, &justina_smo_DW.gobj_8,
      &justina_smo_DW.gobj_9, &justina_smo_DW.gobj_10, &justina_smo_DW.gobj_11,
      &justina_smo_DW.gobj_3);

    // Start for MATLABSystem: '<S1>/Get Parameter7'
    justina_smo_DW.obj_a.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_smo_B.cv4[i] = tmp_3[i];
    }

    justina_smo_B.cv4[11] = '\x00';
    ParamGet_justina_smo_383.initialize(justina_smo_B.cv4);
    ParamGet_justina_smo_383.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_smo_383.set_initial_value(0.0);
    justina_smo_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter7'

    // Start for MATLABSystem: '<S1>/Get Parameter8'
    justina_smo_DW.obj_oo.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_oo.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      justina_smo_B.cv5[i] = tmp_4[i];
    }

    justina_smo_B.cv5[10] = '\x00';
    ParamGet_justina_smo_384.initialize(justina_smo_B.cv5);
    ParamGet_justina_smo_384.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_smo_384.set_initial_value(0.0);
    justina_smo_DW.obj_oo.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter8'

    // Start for MATLABSystem: '<S1>/Get Parameter9'
    justina_smo_DW.obj_ok.matlabCodegenIsDeleted = false;
    justina_smo_DW.obj_ok.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      justina_smo_B.cv5[i] = tmp_5[i];
    }

    justina_smo_B.cv5[10] = '\x00';
    ParamGet_justina_smo_385.initialize(justina_smo_B.cv5);
    ParamGet_justina_smo_385.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_smo_385.set_initial_value(0.0);
    justina_smo_DW.obj_ok.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter9'
  }
}

// Model terminate function
void justina_smo_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S3>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matla_og4q5(&justina_smo_DW.obj_m);

  // End of Terminate for SubSystem: '<S3>/Subscribe'
  emxFreeStruct_robotics_slmanip_(&justina_smo_DW.obj_h);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_1_m);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_20_i);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_19_o);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_18_h);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_17_i);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_16_e);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_15_k);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_14_a);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_13_n);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_12_p);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_11_o);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_10_p);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_9_g);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_8_b);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_7_f);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_6_i);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_5_o);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_4_m);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_3_b);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_2_g);
  emxFreeStruct_robotics_slmani_o(&justina_smo_DW.obj_o);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_1_g);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_20_n);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_19_i);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_18_f);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_17_l);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_16_b);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_15_c);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_14_m);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_13_d);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_12_d);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_11_h);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_10_h);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_9_m);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_8_h);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_7_n);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_6_h);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_5_n);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_4_p);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_3_b3);
  emxFreeStruct_o_robotics_mani_o(&justina_smo_DW.gobj_2_i);

  // Terminate for Atomic SubSystem: '<S3>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matla_og4q5(&justina_smo_DW.obj_ay);

  // End of Terminate for SubSystem: '<S3>/Subscribe1'
  emxFreeStruct_robotics_slman_og(&justina_smo_DW.obj);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_1);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_20);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_19);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_18);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_17);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_16);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_15);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_14);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_13);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_12);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_11);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_10);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_9);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_8);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_7);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_6);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_5);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_4);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_3);
  emxFreeStruct_o_robotics_manip_(&justina_smo_DW.gobj_2);

  // Terminate for MATLABSystem: '<S1>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&justina_smo_DW.obj_a);

  // Terminate for MATLABSystem: '<S1>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&justina_smo_DW.obj_oo);

  // Terminate for MATLABSystem: '<S1>/Get Parameter9'
  matlabCodegenHandle_matlabCodeg(&justina_smo_DW.obj_ok);

  // Terminate for Atomic SubSystem: '<S2>/Publish2'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabC_og4(&justina_smo_DW.obj_ap);

  // End of Terminate for SubSystem: '<S2>/Publish2'

  // Terminate for Atomic SubSystem: '<S2>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabC_og4(&justina_smo_DW.obj_b);

  // End of Terminate for SubSystem: '<S2>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//
