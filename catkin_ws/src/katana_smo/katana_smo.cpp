//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: katana_smo.cpp
//
// Code generated for Simulink model 'katana_smo'.
//
// Model version                  : 1.40
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Oct  4 18:59:13 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "katana_smo.h"
#include "katana_smo_private.h"

// Block signals (default storage)
B_katana_smo_T katana_smo_B;

// Continuous states
X_katana_smo_T katana_smo_X;

// Block states (default storage)
DW_katana_smo_T katana_smo_DW;

// Real-time model
RT_MODEL_katana_smo_T katana_smo_M_ = RT_MODEL_katana_smo_T();
RT_MODEL_katana_smo_T *const katana_smo_M = &katana_smo_M_;

// Forward declaration for local functions
static void katana_smo_emxInit_real_T(emxArray_real_T_katana_smo_T **pEmxArray,
  int32_T numDimensions);
static void katana_smo_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void katana_emxEnsureCapacity_real_T(emxArray_real_T_katana_smo_T
  *emxArray, int32_T oldNumel);
static void katana_smo_emxInit_f_cell_wrap1(emxArray_f_cell_wrap_katana_g_T
  **pEmxArray, int32_T numDimensions);
static void emxEnsureCapacity_f_cell_wrap1(emxArray_f_cell_wrap_katana_g_T
  *emxArray, int32_T oldNumel);
static void rigidBodyJoint_get_JointAxis_g(const c_rigidBodyJoint_katana_smo_g_T
  *obj, real_T ax[3]);
static void katana_smo_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyT_g(const
  c_rigidBodyJoint_katana_smo_g_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16]);
static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_katana_smo_g_T *obj, real_T T[16]);
static void katana_smo_tforminv(const real_T T[16], real_T Tinv[16]);
static void katana_smo_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void katana_smo_emxFree_real_T(emxArray_real_T_katana_smo_T **pEmxArray);
static void katana_smo_emxFree_f_cell_wrap1(emxArray_f_cell_wrap_katana_g_T
  **pEmxArray);
static void RigidBodyTreeDynamics_massMatri(t_robotics_manip_internal_R_g_T
  *robot, const real_T q[7], emxArray_real_T_katana_smo_T *H);
static void katana_smo_emxInit_f_cell_wrap(emxArray_f_cell_wrap_katana_s_T
  **pEmxArray, int32_T numDimensions);
static void katana_smo_emxInit_char_T(emxArray_char_T_katana_smo_T **pEmxArray,
  int32_T numDimensions);
static void k_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_katana_s_T
  *emxArray, int32_T oldNumel);
static void katana_emxEnsureCapacity_char_T(emxArray_char_T_katana_smo_T
  *emxArray, int32_T oldNumel);
static void ka_rigidBodyJoint_get_JointAxis(const c_rigidBodyJoint_katana_smo_T *
  obj, real_T ax[3]);
static void katana_smo_emxFree_char_T(emxArray_char_T_katana_smo_T **pEmxArray);
static void RigidBodyTree_forwardKinematics(t_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[7], emxArray_f_cell_wrap_katana_s_T *Ttree);
static void katana_smo_emxFree_f_cell_wrap(emxArray_f_cell_wrap_katana_s_T
  **pEmxArray);
static void katana_smo_SystemCore_step_g(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void RigidBodyTreeDynamics_massMat_g(t_robotics_manip_internal__gl_T
  *robot, const real_T q[7], emxArray_real_T_katana_smo_T *H,
  emxArray_real_T_katana_smo_T *lambda);
static void RigidBodyTreeDynamics_inverseDy(t_robotics_manip_internal__gl_T
  *robot, const real_T q[7], const real_T qdot[7], const real_T fext[60], real_T
  tau[7]);
static void katana_smo_atan2(const real_T y_data[], const int32_T y_size[3],
  const real_T x_data[], const int32_T x_size[3], real_T r_data[], int32_T
  r_size[3]);
static void matlabCodegenHandle_matla_glelt(ros_slros_internal_block_Subs_T *obj);
static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_smo_g_T
  *pStruct);
static void emxFreeStruct_s_robotics_manip_(s_robotics_manip_internal_R_g_T
  *pStruct);
static void emxFreeStruct_t_robotics_manip_(t_robotics_manip_internal_R_g_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_b_g_T
  *pStruct);
static void emxFreeStruct_r_robotics_manip_(r_robotics_manip_internal_R_g_T
  *pStruct);
static void emxFreeStruct_c_rigidBodyJoint1(c_rigidBodyJoint_katana_smo_T
  *pStruct);
static void emxFreeStruct_s_robotics_mani_g(s_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_t_robotics_mani_g(t_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmani_g(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_r_robotics_mani_g(r_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_t_robotics_man_gl(t_robotics_manip_internal__gl_T
  *pStruct);
static void emxFreeStruct_robotics_slman_gl(robotics_slmanip_internal__gl_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabC_gle(ros_slros_internal_block_Publ_T *obj);
static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_smo_g_T
  *pStruct);
static void emxInitStruct_s_robotics_manip_(s_robotics_manip_internal_R_g_T
  *pStruct);
static void emxInitStruct_t_robotics_manip_(t_robotics_manip_internal_R_g_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_b_g_T
  *pStruct);
static void emxInitStruct_r_robotics_manip_(r_robotics_manip_internal_R_g_T
  *pStruct);
static r_robotics_manip_internal_R_g_T *kat_RigidBody_RigidBody_gleltfx
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *ka_RigidBody_RigidBody_gleltfxu
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *k_RigidBody_RigidBody_gleltfxuz
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *RigidBody_RigidBody_gleltfxuze
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *RigidBody_RigidBody_gleltfxuzem
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *RigidBody_RigidBod_gleltfxuzeme
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *RigidBody_RigidBo_gleltfxuzemei
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *RigidBody_RigidB_gleltfxuzemeim
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *RigidBody_Rigid_gleltfxuzemeimo
  (r_robotics_manip_internal_R_g_T *obj);
static r_robotics_manip_internal_R_g_T *k_RigidBody_Rigid_j
  (r_robotics_manip_internal_R_g_T *obj);
static s_robotics_manip_internal_R_g_T *k_RigidBody_Rigid_g
  (s_robotics_manip_internal_R_g_T *obj);
static t_robotics_manip_internal_R_g_T *k_RigidBodyTree_RigidBodyTree_g
  (t_robotics_manip_internal_R_g_T *obj, r_robotics_manip_internal_R_g_T *iobj_0,
   r_robotics_manip_internal_R_g_T *iobj_1, r_robotics_manip_internal_R_g_T
   *iobj_2, r_robotics_manip_internal_R_g_T *iobj_3,
   r_robotics_manip_internal_R_g_T *iobj_4, r_robotics_manip_internal_R_g_T
   *iobj_5, r_robotics_manip_internal_R_g_T *iobj_6,
   r_robotics_manip_internal_R_g_T *iobj_7, r_robotics_manip_internal_R_g_T
   *iobj_8, r_robotics_manip_internal_R_g_T *iobj_9);
static void emxInitStruct_c_rigidBodyJoint1(c_rigidBodyJoint_katana_smo_T
  *pStruct);
static void emxInitStruct_s_robotics_mani_g(s_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_t_robotics_mani_g(t_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmani_g(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_r_robotics_mani_g(r_robotics_manip_internal_Rig_T
  *pStruct);
static r_robotics_manip_internal_Rig_T *katana_smo_RigidBody_RigidBody
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana_sm_RigidBody_RigidBody_g
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana_s_RigidBody_RigidBody_gl
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana__RigidBody_RigidBody_gle
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana_RigidBody_RigidBody_glel
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katan_RigidBody_RigidBody_glelt
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *kata_RigidBody_RigidBody_gleltf
  (r_robotics_manip_internal_Rig_T *obj);
static t_robotics_manip_internal_Rig_T *kat_RigidBodyTree_RigidBodyTree
  (t_robotics_manip_internal_Rig_T *obj, r_robotics_manip_internal_Rig_T *iobj_0,
   r_robotics_manip_internal_Rig_T *iobj_1, r_robotics_manip_internal_Rig_T
   *iobj_2, r_robotics_manip_internal_Rig_T *iobj_3,
   r_robotics_manip_internal_Rig_T *iobj_4, r_robotics_manip_internal_Rig_T
   *iobj_5, r_robotics_manip_internal_Rig_T *iobj_6,
   r_robotics_manip_internal_Rig_T *iobj_7, r_robotics_manip_internal_Rig_T
   *iobj_8, r_robotics_manip_internal_Rig_T *iobj_9);
static void emxInitStruct_t_robotics_man_gl(t_robotics_manip_internal__gl_T
  *pStruct);
static void emxInitStruct_robotics_slman_gl(robotics_slmanip_internal__gl_T
  *pStruct);
static t_robotics_manip_internal__gl_T *RigidBodyTree_RigidBodyTree_gl
  (t_robotics_manip_internal__gl_T *obj, r_robotics_manip_internal_R_g_T *iobj_0,
   r_robotics_manip_internal_R_g_T *iobj_1, r_robotics_manip_internal_R_g_T
   *iobj_2, r_robotics_manip_internal_R_g_T *iobj_3,
   r_robotics_manip_internal_R_g_T *iobj_4, r_robotics_manip_internal_R_g_T
   *iobj_5, r_robotics_manip_internal_R_g_T *iobj_6,
   r_robotics_manip_internal_R_g_T *iobj_7, r_robotics_manip_internal_R_g_T
   *iobj_8, r_robotics_manip_internal_R_g_T *iobj_9);
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

  (katana_smo_M->Timing.TaskCounters.TID[2])++;
  if ((katana_smo_M->Timing.TaskCounters.TID[2]) > 9) {// Sample time: [0.04s, 0.0s] 
    katana_smo_M->Timing.TaskCounters.TID[2] = 0;
  }

  (katana_smo_M->Timing.TaskCounters.TID[3])++;
  if ((katana_smo_M->Timing.TaskCounters.TID[3]) > 249) {// Sample time: [1.0s, 0.0s] 
    katana_smo_M->Timing.TaskCounters.TID[3] = 0;
  }
}

// This function updates continuous states using the ODE8 fixed-step
//  solver algorithm

static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
#define katana_smo_NSTAGES             13

  static real_T rt_ODE8_B[13] = {
    4.174749114153025E-2, 0.0, 0.0, 0.0,
    0.0, -5.54523286112393E-2, 2.393128072011801E-1, 7.03510669403443E-1,
    -7.597596138144609E-1, 6.605630309222863E-1, 1.581874825101233E-1,
    -2.381095387528628E-1, 2.5E-1
  };

  static real_T rt_ODE8_C[13] = {
    0.0, 5.555555555555556E-2, 8.333333333333333E-2, 1.25E-1,
    3.125E-1, 3.75E-1, 1.475E-1, 4.65E-1,
    5.648654513822596E-1, 6.5E-1, 9.246562776405044E-1, 1.0, 1.0
  };

  static real_T rt_ODE8_A[13][13] = {
    // rt_ODE8_A[0][]
    { 0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[1][]
    { 5.555555555555556E-2, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[2][]
    { 2.083333333333333E-2, 6.25E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[3][]
    { 3.125E-2, 0.0, 9.375E-2, 0.0,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[4][]
    { 3.125E-1, 0.0, -1.171875, 1.171875,
      0.0, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[5][]
    { 3.75E-2, 0.0, 0.0, 1.875E-1,
      1.5E-1, 0.0, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[6][]
    { 4.791013711111111E-2, 0.0, 0.0, 1.122487127777778E-1,
      -2.550567377777778E-2, 1.284682388888889E-2, 0.0, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[7][]
    { 1.691798978729228E-2, 0.0, 0.0, 3.878482784860432E-1,
      3.597736985150033E-2, 1.969702142156661E-1, -1.727138523405018E-1, 0.0,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[8][]
    { 6.90957533591923E-2, 0.0, 0.0, -6.342479767288542E-1,
      -1.611975752246041E-1, 1.386503094588253E-1, 9.409286140357563E-1,
      2.11636326481944E-1,
      0.0, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[9][]
    { 1.835569968390454E-1, 0.0, 0.0, -2.468768084315592,
      -2.912868878163005E-1, -2.647302023311738E-2, 2.8478387641928,
      2.813873314698498E-1,
      1.237448998633147E-1, 0.0, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[10][]
    { -1.215424817395888, 0.0, 0.0, 1.667260866594577E1,
      9.157418284168179E-1, -6.056605804357471, -1.600357359415618E1,
      1.484930308629766E1,
      -1.337157573528985E1, 5.134182648179638, 0.0, 0.0, 0.0 },

    // rt_ODE8_A[11][]
    { 2.588609164382643E-1, 0.0, 0.0, -4.774485785489205,
      -4.350930137770325E-1, -3.049483332072241, 5.577920039936099,
      6.155831589861039,
      -5.062104586736938, 2.193926173180679, 1.346279986593349E-1, 0.0, 0.0 },

    // rt_ODE8_A[12][]
    { 8.224275996265075E-1, 0.0, 0.0, -1.165867325727766E1,
      -7.576221166909362E-1, 7.139735881595818E-1, 1.207577498689006E1,
      -2.127659113920403,
      1.990166207048956, -2.342864715440405E-1, 1.758985777079423E-1, 0.0, 0.0 },
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE8_IntgData *intgData = static_cast<ODE8_IntgData *>(rtsiGetSolverData(si));
  real_T *deltaY = intgData->deltaY;
  real_T *x0 = intgData->x0;
  real_T* f[katana_smo_NSTAGES];
  int idx,stagesIdx,statesIdx;
  double deltaX;
  int_T nXc = 42;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);
  f[0] = intgData->f[0];
  f[1] = intgData->f[1];
  f[2] = intgData->f[2];
  f[3] = intgData->f[3];
  f[4] = intgData->f[4];
  f[5] = intgData->f[5];
  f[6] = intgData->f[6];
  f[7] = intgData->f[7];
  f[8] = intgData->f[8];
  f[9] = intgData->f[9];
  f[10] = intgData->f[10];
  f[11] = intgData->f[11];
  f[12] = intgData->f[12];

  // Save the state values at time t in y and x0
  (void) memset(deltaY, 0,
                static_cast<uint_T>(nXc)*sizeof(real_T));
  (void) memcpy(x0, x,
                nXc*sizeof(real_T));
  for (stagesIdx=0;stagesIdx<katana_smo_NSTAGES;stagesIdx++) {
    (void) memcpy(x, x0,
                  static_cast<uint_T>(nXc)*sizeof(real_T));
    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaX = 0;
      for (idx=0;idx<stagesIdx;idx++) {
        deltaX = deltaX + h*rt_ODE8_A[stagesIdx][idx]*f[idx][statesIdx];
      }

      x[statesIdx] = x0[statesIdx] + deltaX;
    }

    if (stagesIdx==0) {
      rtsiSetdX(si, f[stagesIdx]);
      katana_smo_derivatives();
    } else {
      (stagesIdx==katana_smo_NSTAGES-1)? rtsiSetT(si, tnew) : rtsiSetT(si, t + h*
        rt_ODE8_C[stagesIdx]);
      rtsiSetdX(si, f[stagesIdx]);
      katana_smo_step();
      katana_smo_derivatives();
    }

    for (statesIdx=0;statesIdx<nXc;statesIdx++) {
      deltaY[statesIdx] = deltaY[statesIdx] + h*rt_ODE8_B[stagesIdx]*f[stagesIdx]
        [statesIdx];
    }
  }

  for (statesIdx=0;statesIdx<nXc;statesIdx++) {
    x[statesIdx] = x0[statesIdx] + deltaY[statesIdx];
  }

  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void katana_smo_emxInit_real_T(emxArray_real_T_katana_smo_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_katana_smo_T *emxArray;
  *pEmxArray = (emxArray_real_T_katana_smo_T *)malloc(sizeof
    (emxArray_real_T_katana_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (katana_smo_B.i_c = 0; katana_smo_B.i_c < numDimensions; katana_smo_B.i_c
       ++) {
    emxArray->size[katana_smo_B.i_c] = 0;
  }
}

static void katana_smo_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_katana_smo_434.getLatestMessage
    (&katana_smo_B.b_varargout_2_m);
  for (katana_smo_B.i_p4 = 0; katana_smo_B.i_p4 < 7; katana_smo_B.i_p4++) {
    varargout_2_Data[katana_smo_B.i_p4] =
      katana_smo_B.b_varargout_2_m.Data[katana_smo_B.i_p4];
  }

  *varargout_2_Data_SL_Info_Curren =
    katana_smo_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    katana_smo_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    katana_smo_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &katana_smo_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_katana_smo_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    katana_smo_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    katana_smo_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void katana_emxEnsureCapacity_real_T(emxArray_real_T_katana_smo_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  katana_smo_B.newNumel = 1;
  for (katana_smo_B.i_h = 0; katana_smo_B.i_h < emxArray->numDimensions;
       katana_smo_B.i_h++) {
    katana_smo_B.newNumel *= emxArray->size[katana_smo_B.i_h];
  }

  if (katana_smo_B.newNumel > emxArray->allocatedSize) {
    katana_smo_B.i_h = emxArray->allocatedSize;
    if (katana_smo_B.i_h < 16) {
      katana_smo_B.i_h = 16;
    }

    while (katana_smo_B.i_h < katana_smo_B.newNumel) {
      if (katana_smo_B.i_h > 1073741823) {
        katana_smo_B.i_h = MAX_int32_T;
      } else {
        katana_smo_B.i_h <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(katana_smo_B.i_h), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = katana_smo_B.i_h;
    emxArray->canFreeData = true;
  }
}

static void katana_smo_emxInit_f_cell_wrap1(emxArray_f_cell_wrap_katana_g_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_katana_g_T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_katana_g_T *)malloc(sizeof
    (emxArray_f_cell_wrap_katana_g_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_katana_smo_g_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (katana_smo_B.i_n = 0; katana_smo_B.i_n < numDimensions; katana_smo_B.i_n
       ++) {
    emxArray->size[katana_smo_B.i_n] = 0;
  }
}

static void emxEnsureCapacity_f_cell_wrap1(emxArray_f_cell_wrap_katana_g_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  katana_smo_B.newNumel_k = 1;
  for (katana_smo_B.i_pc = 0; katana_smo_B.i_pc < emxArray->numDimensions;
       katana_smo_B.i_pc++) {
    katana_smo_B.newNumel_k *= emxArray->size[katana_smo_B.i_pc];
  }

  if (katana_smo_B.newNumel_k > emxArray->allocatedSize) {
    katana_smo_B.i_pc = emxArray->allocatedSize;
    if (katana_smo_B.i_pc < 16) {
      katana_smo_B.i_pc = 16;
    }

    while (katana_smo_B.i_pc < katana_smo_B.newNumel_k) {
      if (katana_smo_B.i_pc > 1073741823) {
        katana_smo_B.i_pc = MAX_int32_T;
      } else {
        katana_smo_B.i_pc <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(katana_smo_B.i_pc), sizeof
                     (f_cell_wrap_katana_smo_g_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_katana_smo_g_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_katana_smo_g_T *)newData;
    emxArray->allocatedSize = katana_smo_B.i_pc;
    emxArray->canFreeData = true;
  }
}

static void rigidBodyJoint_get_JointAxis_g(const c_rigidBodyJoint_katana_smo_g_T
  *obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (katana_smo_B.b_kstr_o = 0; katana_smo_B.b_kstr_o < 8;
       katana_smo_B.b_kstr_o++) {
    katana_smo_B.b_m3[katana_smo_B.b_kstr_o] = tmp[katana_smo_B.b_kstr_o];
  }

  katana_smo_B.b_bool_m0 = false;
  if (obj->Type->size[1] == 8) {
    katana_smo_B.b_kstr_o = 1;
    do {
      exitg1 = 0;
      if (katana_smo_B.b_kstr_o - 1 < 8) {
        katana_smo_B.kstr_e = katana_smo_B.b_kstr_o - 1;
        if (obj->Type->data[katana_smo_B.kstr_e] !=
            katana_smo_B.b_m3[katana_smo_B.kstr_e]) {
          exitg1 = 1;
        } else {
          katana_smo_B.b_kstr_o++;
        }
      } else {
        katana_smo_B.b_bool_m0 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (katana_smo_B.b_bool_m0) {
    guard1 = true;
  } else {
    for (katana_smo_B.b_kstr_o = 0; katana_smo_B.b_kstr_o < 9;
         katana_smo_B.b_kstr_o++) {
      katana_smo_B.b_m[katana_smo_B.b_kstr_o] = tmp_0[katana_smo_B.b_kstr_o];
    }

    katana_smo_B.b_bool_m0 = false;
    if (obj->Type->size[1] == 9) {
      katana_smo_B.b_kstr_o = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr_o - 1 < 9) {
          katana_smo_B.kstr_e = katana_smo_B.b_kstr_o - 1;
          if (obj->Type->data[katana_smo_B.kstr_e] !=
              katana_smo_B.b_m[katana_smo_B.kstr_e]) {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr_o++;
          }
        } else {
          katana_smo_B.b_bool_m0 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_bool_m0) {
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

static void katana_smo_cat(real_T varargin_1, real_T varargin_2, real_T
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

static void rigidBodyJoint_transformBodyT_g(const
  c_rigidBodyJoint_katana_smo_g_T *obj, const real_T q_data[], const int32_T
  *q_size, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (katana_smo_B.b_kstr_j = 0; katana_smo_B.b_kstr_j < 5;
       katana_smo_B.b_kstr_j++) {
    katana_smo_B.b_me[katana_smo_B.b_kstr_j] = tmp[katana_smo_B.b_kstr_j];
  }

  katana_smo_B.b_bool_m = false;
  if (obj->Type->size[1] == 5) {
    katana_smo_B.b_kstr_j = 1;
    do {
      exitg1 = 0;
      if (katana_smo_B.b_kstr_j - 1 < 5) {
        katana_smo_B.kstr = katana_smo_B.b_kstr_j - 1;
        if (obj->Type->data[katana_smo_B.kstr] !=
            katana_smo_B.b_me[katana_smo_B.kstr]) {
          exitg1 = 1;
        } else {
          katana_smo_B.b_kstr_j++;
        }
      } else {
        katana_smo_B.b_bool_m = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (katana_smo_B.b_bool_m) {
    katana_smo_B.b_kstr_j = 0;
  } else {
    for (katana_smo_B.b_kstr_j = 0; katana_smo_B.b_kstr_j < 8;
         katana_smo_B.b_kstr_j++) {
      katana_smo_B.b_md[katana_smo_B.b_kstr_j] = tmp_0[katana_smo_B.b_kstr_j];
    }

    katana_smo_B.b_bool_m = false;
    if (obj->Type->size[1] == 8) {
      katana_smo_B.b_kstr_j = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr_j - 1 < 8) {
          katana_smo_B.kstr = katana_smo_B.b_kstr_j - 1;
          if (obj->Type->data[katana_smo_B.kstr] !=
              katana_smo_B.b_md[katana_smo_B.kstr]) {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr_j++;
          }
        } else {
          katana_smo_B.b_bool_m = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_bool_m) {
      katana_smo_B.b_kstr_j = 1;
    } else {
      katana_smo_B.b_kstr_j = -1;
    }
  }

  switch (katana_smo_B.b_kstr_j) {
   case 0:
    memset(&katana_smo_B.TJ[0], 0, sizeof(real_T) << 4U);
    katana_smo_B.TJ[0] = 1.0;
    katana_smo_B.TJ[5] = 1.0;
    katana_smo_B.TJ[10] = 1.0;
    katana_smo_B.TJ[15] = 1.0;
    break;

   case 1:
    rigidBodyJoint_get_JointAxis_g(obj, katana_smo_B.v);
    katana_smo_B.result_data[0] = katana_smo_B.v[0];
    katana_smo_B.result_data[1] = katana_smo_B.v[1];
    katana_smo_B.result_data[2] = katana_smo_B.v[2];
    if (0 <= (*q_size != 0) - 1) {
      katana_smo_B.result_data[3] = q_data[0];
    }

    katana_smo_B.cth = 1.0 / sqrt((katana_smo_B.result_data[0] *
      katana_smo_B.result_data[0] + katana_smo_B.result_data[1] *
      katana_smo_B.result_data[1]) + katana_smo_B.result_data[2] *
      katana_smo_B.result_data[2]);
    katana_smo_B.v[0] = katana_smo_B.result_data[0] * katana_smo_B.cth;
    katana_smo_B.v[1] = katana_smo_B.result_data[1] * katana_smo_B.cth;
    katana_smo_B.v[2] = katana_smo_B.result_data[2] * katana_smo_B.cth;
    katana_smo_B.cth = cos(katana_smo_B.result_data[3]);
    katana_smo_B.sth = sin(katana_smo_B.result_data[3]);
    katana_smo_B.tempR_tmp = katana_smo_B.v[1] * katana_smo_B.v[0] * (1.0 -
      katana_smo_B.cth);
    katana_smo_B.tempR_tmp_a = katana_smo_B.v[2] * katana_smo_B.sth;
    katana_smo_B.tempR_tmp_as = katana_smo_B.v[2] * katana_smo_B.v[0] * (1.0 -
      katana_smo_B.cth);
    katana_smo_B.tempR_tmp_i = katana_smo_B.v[1] * katana_smo_B.sth;
    katana_smo_B.tempR_tmp_l = katana_smo_B.v[2] * katana_smo_B.v[1] * (1.0 -
      katana_smo_B.cth);
    katana_smo_B.sth *= katana_smo_B.v[0];
    katana_smo_cat(katana_smo_B.v[0] * katana_smo_B.v[0] * (1.0 -
      katana_smo_B.cth) + katana_smo_B.cth, katana_smo_B.tempR_tmp -
                   katana_smo_B.tempR_tmp_a, katana_smo_B.tempR_tmp_as +
                   katana_smo_B.tempR_tmp_i, katana_smo_B.tempR_tmp +
                   katana_smo_B.tempR_tmp_a, katana_smo_B.v[1] * katana_smo_B.v
                   [1] * (1.0 - katana_smo_B.cth) + katana_smo_B.cth,
                   katana_smo_B.tempR_tmp_l - katana_smo_B.sth,
                   katana_smo_B.tempR_tmp_as - katana_smo_B.tempR_tmp_i,
                   katana_smo_B.tempR_tmp_l + katana_smo_B.sth, katana_smo_B.v[2]
                   * katana_smo_B.v[2] * (1.0 - katana_smo_B.cth) +
                   katana_smo_B.cth, katana_smo_B.tempR);
    for (katana_smo_B.b_kstr_j = 0; katana_smo_B.b_kstr_j < 3;
         katana_smo_B.b_kstr_j++) {
      katana_smo_B.kstr = katana_smo_B.b_kstr_j + 1;
      katana_smo_B.R_g[katana_smo_B.kstr - 1] = katana_smo_B.tempR
        [(katana_smo_B.kstr - 1) * 3];
      katana_smo_B.kstr = katana_smo_B.b_kstr_j + 1;
      katana_smo_B.R_g[katana_smo_B.kstr + 2] = katana_smo_B.tempR
        [(katana_smo_B.kstr - 1) * 3 + 1];
      katana_smo_B.kstr = katana_smo_B.b_kstr_j + 1;
      katana_smo_B.R_g[katana_smo_B.kstr + 5] = katana_smo_B.tempR
        [(katana_smo_B.kstr - 1) * 3 + 2];
    }

    memset(&katana_smo_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (katana_smo_B.b_kstr_j = 0; katana_smo_B.b_kstr_j < 3;
         katana_smo_B.b_kstr_j++) {
      katana_smo_B.kstr = katana_smo_B.b_kstr_j << 2;
      katana_smo_B.TJ[katana_smo_B.kstr] = katana_smo_B.R_g[3 *
        katana_smo_B.b_kstr_j];
      katana_smo_B.TJ[katana_smo_B.kstr + 1] = katana_smo_B.R_g[3 *
        katana_smo_B.b_kstr_j + 1];
      katana_smo_B.TJ[katana_smo_B.kstr + 2] = katana_smo_B.R_g[3 *
        katana_smo_B.b_kstr_j + 2];
    }

    katana_smo_B.TJ[15] = 1.0;
    break;

   default:
    rigidBodyJoint_get_JointAxis_g(obj, katana_smo_B.v);
    memset(&katana_smo_B.tempR[0], 0, 9U * sizeof(real_T));
    katana_smo_B.tempR[0] = 1.0;
    katana_smo_B.tempR[4] = 1.0;
    katana_smo_B.tempR[8] = 1.0;
    for (katana_smo_B.b_kstr_j = 0; katana_smo_B.b_kstr_j < 3;
         katana_smo_B.b_kstr_j++) {
      katana_smo_B.kstr = katana_smo_B.b_kstr_j << 2;
      katana_smo_B.TJ[katana_smo_B.kstr] = katana_smo_B.tempR[3 *
        katana_smo_B.b_kstr_j];
      katana_smo_B.TJ[katana_smo_B.kstr + 1] = katana_smo_B.tempR[3 *
        katana_smo_B.b_kstr_j + 1];
      katana_smo_B.TJ[katana_smo_B.kstr + 2] = katana_smo_B.tempR[3 *
        katana_smo_B.b_kstr_j + 2];
      katana_smo_B.TJ[katana_smo_B.b_kstr_j + 12] =
        katana_smo_B.v[katana_smo_B.b_kstr_j] * q_data[0];
    }

    katana_smo_B.TJ[3] = 0.0;
    katana_smo_B.TJ[7] = 0.0;
    katana_smo_B.TJ[11] = 0.0;
    katana_smo_B.TJ[15] = 1.0;
    break;
  }

  for (katana_smo_B.b_kstr_j = 0; katana_smo_B.b_kstr_j < 4;
       katana_smo_B.b_kstr_j++) {
    for (katana_smo_B.kstr = 0; katana_smo_B.kstr < 4; katana_smo_B.kstr++) {
      katana_smo_B.obj_tmp_tmp = katana_smo_B.kstr << 2;
      katana_smo_B.obj_tmp = katana_smo_B.b_kstr_j + katana_smo_B.obj_tmp_tmp;
      katana_smo_B.obj[katana_smo_B.obj_tmp] = 0.0;
      katana_smo_B.obj[katana_smo_B.obj_tmp] +=
        katana_smo_B.TJ[katana_smo_B.obj_tmp_tmp] * obj->
        JointToParentTransform[katana_smo_B.b_kstr_j];
      katana_smo_B.obj[katana_smo_B.obj_tmp] +=
        katana_smo_B.TJ[katana_smo_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_j + 4];
      katana_smo_B.obj[katana_smo_B.obj_tmp] +=
        katana_smo_B.TJ[katana_smo_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_j + 8];
      katana_smo_B.obj[katana_smo_B.obj_tmp] +=
        katana_smo_B.TJ[katana_smo_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_j + 12];
    }

    for (katana_smo_B.kstr = 0; katana_smo_B.kstr < 4; katana_smo_B.kstr++) {
      katana_smo_B.obj_tmp_tmp = katana_smo_B.kstr << 2;
      katana_smo_B.obj_tmp = katana_smo_B.b_kstr_j + katana_smo_B.obj_tmp_tmp;
      T[katana_smo_B.obj_tmp] = 0.0;
      T[katana_smo_B.obj_tmp] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp] *
        katana_smo_B.obj[katana_smo_B.b_kstr_j];
      T[katana_smo_B.obj_tmp] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp + 1] *
        katana_smo_B.obj[katana_smo_B.b_kstr_j + 4];
      T[katana_smo_B.obj_tmp] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp + 2] *
        katana_smo_B.obj[katana_smo_B.b_kstr_j + 8];
      T[katana_smo_B.obj_tmp] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp + 3] *
        katana_smo_B.obj[katana_smo_B.b_kstr_j + 12];
    }
  }
}

static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_katana_smo_g_T *obj, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (katana_smo_B.b_kstr_e = 0; katana_smo_B.b_kstr_e < 5;
       katana_smo_B.b_kstr_e++) {
    katana_smo_B.b_h3[katana_smo_B.b_kstr_e] = tmp[katana_smo_B.b_kstr_e];
  }

  katana_smo_B.b_bool_f = false;
  if (obj->Type->size[1] == 5) {
    katana_smo_B.b_kstr_e = 1;
    do {
      exitg1 = 0;
      if (katana_smo_B.b_kstr_e - 1 < 5) {
        katana_smo_B.kstr_h = katana_smo_B.b_kstr_e - 1;
        if (obj->Type->data[katana_smo_B.kstr_h] !=
            katana_smo_B.b_h3[katana_smo_B.kstr_h]) {
          exitg1 = 1;
        } else {
          katana_smo_B.b_kstr_e++;
        }
      } else {
        katana_smo_B.b_bool_f = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (katana_smo_B.b_bool_f) {
    katana_smo_B.b_kstr_e = 0;
  } else {
    for (katana_smo_B.b_kstr_e = 0; katana_smo_B.b_kstr_e < 8;
         katana_smo_B.b_kstr_e++) {
      katana_smo_B.b_j[katana_smo_B.b_kstr_e] = tmp_0[katana_smo_B.b_kstr_e];
    }

    katana_smo_B.b_bool_f = false;
    if (obj->Type->size[1] == 8) {
      katana_smo_B.b_kstr_e = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr_e - 1 < 8) {
          katana_smo_B.kstr_h = katana_smo_B.b_kstr_e - 1;
          if (obj->Type->data[katana_smo_B.kstr_h] !=
              katana_smo_B.b_j[katana_smo_B.kstr_h]) {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr_e++;
          }
        } else {
          katana_smo_B.b_bool_f = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_bool_f) {
      katana_smo_B.b_kstr_e = 1;
    } else {
      katana_smo_B.b_kstr_e = -1;
    }
  }

  switch (katana_smo_B.b_kstr_e) {
   case 0:
    memset(&katana_smo_B.TJ_b[0], 0, sizeof(real_T) << 4U);
    katana_smo_B.TJ_b[0] = 1.0;
    katana_smo_B.TJ_b[5] = 1.0;
    katana_smo_B.TJ_b[10] = 1.0;
    katana_smo_B.TJ_b[15] = 1.0;
    break;

   case 1:
    rigidBodyJoint_get_JointAxis_g(obj, katana_smo_B.v_a);
    katana_smo_B.axang_idx_0 = katana_smo_B.v_a[0];
    katana_smo_B.axang_idx_1 = katana_smo_B.v_a[1];
    katana_smo_B.axang_idx_2 = katana_smo_B.v_a[2];
    katana_smo_B.b_iz = 1.0 / sqrt((katana_smo_B.axang_idx_0 *
      katana_smo_B.axang_idx_0 + katana_smo_B.axang_idx_1 *
      katana_smo_B.axang_idx_1) + katana_smo_B.axang_idx_2 *
      katana_smo_B.axang_idx_2);
    katana_smo_B.v_a[0] = katana_smo_B.axang_idx_0 * katana_smo_B.b_iz;
    katana_smo_B.v_a[1] = katana_smo_B.axang_idx_1 * katana_smo_B.b_iz;
    katana_smo_B.v_a[2] = katana_smo_B.axang_idx_2 * katana_smo_B.b_iz;
    katana_smo_B.axang_idx_0 = katana_smo_B.v_a[1] * katana_smo_B.v_a[0] * 0.0;
    katana_smo_B.axang_idx_1 = katana_smo_B.v_a[2] * katana_smo_B.v_a[0] * 0.0;
    katana_smo_B.axang_idx_2 = katana_smo_B.v_a[2] * katana_smo_B.v_a[1] * 0.0;
    katana_smo_cat(katana_smo_B.v_a[0] * katana_smo_B.v_a[0] * 0.0 + 1.0,
                   katana_smo_B.axang_idx_0 - katana_smo_B.v_a[2] * 0.0,
                   katana_smo_B.axang_idx_1 + katana_smo_B.v_a[1] * 0.0,
                   katana_smo_B.axang_idx_0 + katana_smo_B.v_a[2] * 0.0,
                   katana_smo_B.v_a[1] * katana_smo_B.v_a[1] * 0.0 + 1.0,
                   katana_smo_B.axang_idx_2 - katana_smo_B.v_a[0] * 0.0,
                   katana_smo_B.axang_idx_1 - katana_smo_B.v_a[1] * 0.0,
                   katana_smo_B.axang_idx_2 + katana_smo_B.v_a[0] * 0.0,
                   katana_smo_B.v_a[2] * katana_smo_B.v_a[2] * 0.0 + 1.0,
                   katana_smo_B.tempR_d);
    for (katana_smo_B.b_kstr_e = 0; katana_smo_B.b_kstr_e < 3;
         katana_smo_B.b_kstr_e++) {
      katana_smo_B.kstr_h = katana_smo_B.b_kstr_e + 1;
      katana_smo_B.R_ld[katana_smo_B.kstr_h - 1] = katana_smo_B.tempR_d
        [(katana_smo_B.kstr_h - 1) * 3];
      katana_smo_B.kstr_h = katana_smo_B.b_kstr_e + 1;
      katana_smo_B.R_ld[katana_smo_B.kstr_h + 2] = katana_smo_B.tempR_d
        [(katana_smo_B.kstr_h - 1) * 3 + 1];
      katana_smo_B.kstr_h = katana_smo_B.b_kstr_e + 1;
      katana_smo_B.R_ld[katana_smo_B.kstr_h + 5] = katana_smo_B.tempR_d
        [(katana_smo_B.kstr_h - 1) * 3 + 2];
    }

    memset(&katana_smo_B.TJ_b[0], 0, sizeof(real_T) << 4U);
    for (katana_smo_B.b_kstr_e = 0; katana_smo_B.b_kstr_e < 3;
         katana_smo_B.b_kstr_e++) {
      katana_smo_B.kstr_h = katana_smo_B.b_kstr_e << 2;
      katana_smo_B.TJ_b[katana_smo_B.kstr_h] = katana_smo_B.R_ld[3 *
        katana_smo_B.b_kstr_e];
      katana_smo_B.TJ_b[katana_smo_B.kstr_h + 1] = katana_smo_B.R_ld[3 *
        katana_smo_B.b_kstr_e + 1];
      katana_smo_B.TJ_b[katana_smo_B.kstr_h + 2] = katana_smo_B.R_ld[3 *
        katana_smo_B.b_kstr_e + 2];
    }

    katana_smo_B.TJ_b[15] = 1.0;
    break;

   default:
    rigidBodyJoint_get_JointAxis_g(obj, katana_smo_B.v_a);
    memset(&katana_smo_B.tempR_d[0], 0, 9U * sizeof(real_T));
    katana_smo_B.tempR_d[0] = 1.0;
    katana_smo_B.tempR_d[4] = 1.0;
    katana_smo_B.tempR_d[8] = 1.0;
    for (katana_smo_B.b_kstr_e = 0; katana_smo_B.b_kstr_e < 3;
         katana_smo_B.b_kstr_e++) {
      katana_smo_B.kstr_h = katana_smo_B.b_kstr_e << 2;
      katana_smo_B.TJ_b[katana_smo_B.kstr_h] = katana_smo_B.tempR_d[3 *
        katana_smo_B.b_kstr_e];
      katana_smo_B.TJ_b[katana_smo_B.kstr_h + 1] = katana_smo_B.tempR_d[3 *
        katana_smo_B.b_kstr_e + 1];
      katana_smo_B.TJ_b[katana_smo_B.kstr_h + 2] = katana_smo_B.tempR_d[3 *
        katana_smo_B.b_kstr_e + 2];
      katana_smo_B.TJ_b[katana_smo_B.b_kstr_e + 12] =
        katana_smo_B.v_a[katana_smo_B.b_kstr_e] * 0.0;
    }

    katana_smo_B.TJ_b[3] = 0.0;
    katana_smo_B.TJ_b[7] = 0.0;
    katana_smo_B.TJ_b[11] = 0.0;
    katana_smo_B.TJ_b[15] = 1.0;
    break;
  }

  for (katana_smo_B.b_kstr_e = 0; katana_smo_B.b_kstr_e < 4;
       katana_smo_B.b_kstr_e++) {
    for (katana_smo_B.kstr_h = 0; katana_smo_B.kstr_h < 4; katana_smo_B.kstr_h++)
    {
      katana_smo_B.obj_tmp_tmp_a = katana_smo_B.kstr_h << 2;
      katana_smo_B.obj_tmp_c = katana_smo_B.b_kstr_e +
        katana_smo_B.obj_tmp_tmp_a;
      katana_smo_B.obj_p[katana_smo_B.obj_tmp_c] = 0.0;
      katana_smo_B.obj_p[katana_smo_B.obj_tmp_c] +=
        katana_smo_B.TJ_b[katana_smo_B.obj_tmp_tmp_a] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_e];
      katana_smo_B.obj_p[katana_smo_B.obj_tmp_c] +=
        katana_smo_B.TJ_b[katana_smo_B.obj_tmp_tmp_a + 1] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_e + 4];
      katana_smo_B.obj_p[katana_smo_B.obj_tmp_c] +=
        katana_smo_B.TJ_b[katana_smo_B.obj_tmp_tmp_a + 2] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_e + 8];
      katana_smo_B.obj_p[katana_smo_B.obj_tmp_c] +=
        katana_smo_B.TJ_b[katana_smo_B.obj_tmp_tmp_a + 3] *
        obj->JointToParentTransform[katana_smo_B.b_kstr_e + 12];
    }

    for (katana_smo_B.kstr_h = 0; katana_smo_B.kstr_h < 4; katana_smo_B.kstr_h++)
    {
      katana_smo_B.obj_tmp_tmp_a = katana_smo_B.kstr_h << 2;
      katana_smo_B.obj_tmp_c = katana_smo_B.b_kstr_e +
        katana_smo_B.obj_tmp_tmp_a;
      T[katana_smo_B.obj_tmp_c] = 0.0;
      T[katana_smo_B.obj_tmp_c] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp_a] *
        katana_smo_B.obj_p[katana_smo_B.b_kstr_e];
      T[katana_smo_B.obj_tmp_c] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp_a + 1] *
        katana_smo_B.obj_p[katana_smo_B.b_kstr_e + 4];
      T[katana_smo_B.obj_tmp_c] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp_a + 2] *
        katana_smo_B.obj_p[katana_smo_B.b_kstr_e + 8];
      T[katana_smo_B.obj_tmp_c] += obj->
        ChildToJointTransform[katana_smo_B.obj_tmp_tmp_a + 3] *
        katana_smo_B.obj_p[katana_smo_B.b_kstr_e + 12];
    }
  }
}

static void katana_smo_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (katana_smo_B.i3 = 0; katana_smo_B.i3 < 3; katana_smo_B.i3++) {
    katana_smo_B.R_ln[3 * katana_smo_B.i3] = T[katana_smo_B.i3];
    katana_smo_B.R_ln[3 * katana_smo_B.i3 + 1] = T[katana_smo_B.i3 + 4];
    katana_smo_B.R_ln[3 * katana_smo_B.i3 + 2] = T[katana_smo_B.i3 + 8];
  }

  for (katana_smo_B.i3 = 0; katana_smo_B.i3 < 9; katana_smo_B.i3++) {
    katana_smo_B.R_h[katana_smo_B.i3] = -katana_smo_B.R_ln[katana_smo_B.i3];
  }

  for (katana_smo_B.i3 = 0; katana_smo_B.i3 < 3; katana_smo_B.i3++) {
    katana_smo_B.Tinv_tmp = katana_smo_B.i3 << 2;
    Tinv[katana_smo_B.Tinv_tmp] = katana_smo_B.R_ln[3 * katana_smo_B.i3];
    Tinv[katana_smo_B.Tinv_tmp + 1] = katana_smo_B.R_ln[3 * katana_smo_B.i3 + 1];
    Tinv[katana_smo_B.Tinv_tmp + 2] = katana_smo_B.R_ln[3 * katana_smo_B.i3 + 2];
    Tinv[katana_smo_B.i3 + 12] = katana_smo_B.R_h[katana_smo_B.i3 + 6] * T[14] +
      (katana_smo_B.R_h[katana_smo_B.i3 + 3] * T[13] +
       katana_smo_B.R_h[katana_smo_B.i3] * T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void katana_smo_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  katana_smo_B.dv3[0] = 0.0;
  katana_smo_B.dv3[3] = -T[14];
  katana_smo_B.dv3[6] = T[13];
  katana_smo_B.dv3[1] = T[14];
  katana_smo_B.dv3[4] = 0.0;
  katana_smo_B.dv3[7] = -T[12];
  katana_smo_B.dv3[2] = -T[13];
  katana_smo_B.dv3[5] = T[12];
  katana_smo_B.dv3[8] = 0.0;
  for (katana_smo_B.i1 = 0; katana_smo_B.i1 < 3; katana_smo_B.i1++) {
    for (katana_smo_B.X_tmp_c = 0; katana_smo_B.X_tmp_c < 3;
         katana_smo_B.X_tmp_c++) {
      katana_smo_B.X_tmp_f = katana_smo_B.i1 + 3 * katana_smo_B.X_tmp_c;
      katana_smo_B.dv4[katana_smo_B.X_tmp_f] = 0.0;
      katana_smo_B.i2 = katana_smo_B.X_tmp_c << 2;
      katana_smo_B.dv4[katana_smo_B.X_tmp_f] += T[katana_smo_B.i2] *
        katana_smo_B.dv3[katana_smo_B.i1];
      katana_smo_B.dv4[katana_smo_B.X_tmp_f] += T[katana_smo_B.i2 + 1] *
        katana_smo_B.dv3[katana_smo_B.i1 + 3];
      katana_smo_B.dv4[katana_smo_B.X_tmp_f] += T[katana_smo_B.i2 + 2] *
        katana_smo_B.dv3[katana_smo_B.i1 + 6];
      X[katana_smo_B.X_tmp_c + 6 * katana_smo_B.i1] = T[(katana_smo_B.i1 << 2) +
        katana_smo_B.X_tmp_c];
      X[katana_smo_B.X_tmp_c + 6 * (katana_smo_B.i1 + 3)] = 0.0;
    }
  }

  for (katana_smo_B.i1 = 0; katana_smo_B.i1 < 3; katana_smo_B.i1++) {
    X[6 * katana_smo_B.i1 + 3] = katana_smo_B.dv4[3 * katana_smo_B.i1];
    katana_smo_B.X_tmp_c = katana_smo_B.i1 << 2;
    katana_smo_B.X_tmp_f = 6 * (katana_smo_B.i1 + 3);
    X[katana_smo_B.X_tmp_f + 3] = T[katana_smo_B.X_tmp_c];
    X[6 * katana_smo_B.i1 + 4] = katana_smo_B.dv4[3 * katana_smo_B.i1 + 1];
    X[katana_smo_B.X_tmp_f + 4] = T[katana_smo_B.X_tmp_c + 1];
    X[6 * katana_smo_B.i1 + 5] = katana_smo_B.dv4[3 * katana_smo_B.i1 + 2];
    X[katana_smo_B.X_tmp_f + 5] = T[katana_smo_B.X_tmp_c + 2];
  }
}

static void katana_smo_emxFree_real_T(emxArray_real_T_katana_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_katana_smo_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_katana_smo_T *)NULL;
  }
}

static void katana_smo_emxFree_f_cell_wrap1(emxArray_f_cell_wrap_katana_g_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_katana_g_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_katana_smo_g_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_katana_g_T *)NULL;
  }
}

static void RigidBodyTreeDynamics_massMatri(t_robotics_manip_internal_R_g_T
  *robot, const real_T q[7], emxArray_real_T_katana_smo_T *H)
{
  emxArray_f_cell_wrap_katana_g_T *Ic;
  emxArray_f_cell_wrap_katana_g_T *X;
  emxArray_real_T_katana_smo_T *Si;
  emxArray_real_T_katana_smo_T *Fi;
  emxArray_real_T_katana_smo_T *Hji;
  r_robotics_manip_internal_R_g_T *obj;
  katana_smo_B.nb_m = robot->NumBodies;
  katana_smo_B.vNum_m = robot->VelocityNumber;
  katana_smo_B.f_o = H->size[0] * H->size[1];
  katana_smo_B.c_tmp = static_cast<int32_T>(katana_smo_B.vNum_m);
  H->size[0] = katana_smo_B.c_tmp;
  H->size[1] = katana_smo_B.c_tmp;
  katana_emxEnsureCapacity_real_T(H, katana_smo_B.f_o);
  katana_smo_B.loop_ub_k = katana_smo_B.c_tmp * katana_smo_B.c_tmp - 1;
  for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.loop_ub_k;
       katana_smo_B.f_o++) {
    H->data[katana_smo_B.f_o] = 0.0;
  }

  katana_smo_emxInit_f_cell_wrap1(&Ic, 2);
  katana_smo_emxInit_f_cell_wrap1(&X, 2);
  katana_smo_B.c_tmp = static_cast<int32_T>(katana_smo_B.nb_m);
  katana_smo_B.c = katana_smo_B.c_tmp - 1;
  katana_smo_B.f_o = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = katana_smo_B.c_tmp;
  emxEnsureCapacity_f_cell_wrap1(Ic, katana_smo_B.f_o);
  katana_smo_B.f_o = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = katana_smo_B.c_tmp;
  emxEnsureCapacity_f_cell_wrap1(X, katana_smo_B.f_o);
  for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp <= katana_smo_B.c;
       katana_smo_B.c_tmp++) {
    for (katana_smo_B.f_o = 0; katana_smo_B.f_o < 36; katana_smo_B.f_o++) {
      Ic->data[katana_smo_B.c_tmp].f1[katana_smo_B.f_o] = robot->
        Bodies[katana_smo_B.c_tmp]->SpatialInertia[katana_smo_B.f_o];
    }

    katana_smo_B.vNum_m = robot->PositionDoFMap[katana_smo_B.c_tmp];
    katana_smo_B.p_idx_1_p = robot->PositionDoFMap[katana_smo_B.c_tmp + 10];
    if (katana_smo_B.p_idx_1_p < katana_smo_B.vNum_m) {
      obj = robot->Bodies[katana_smo_B.c_tmp];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, katana_smo_B.T_f);
    } else {
      if (katana_smo_B.vNum_m > katana_smo_B.p_idx_1_p) {
        katana_smo_B.g = 0;
        katana_smo_B.f_o = -1;
      } else {
        katana_smo_B.g = static_cast<int32_T>(katana_smo_B.vNum_m) - 1;
        katana_smo_B.f_o = static_cast<int32_T>(katana_smo_B.p_idx_1_p) - 1;
      }

      obj = robot->Bodies[katana_smo_B.c_tmp];
      katana_smo_B.loop_ub_k = katana_smo_B.f_o - katana_smo_B.g;
      katana_smo_B.q_size_i = katana_smo_B.loop_ub_k + 1;
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.loop_ub_k;
           katana_smo_B.f_o++) {
        katana_smo_B.q_data_d[katana_smo_B.f_o] = q[katana_smo_B.g +
          katana_smo_B.f_o];
      }

      rigidBodyJoint_transformBodyT_g(&obj->JointInternal, katana_smo_B.q_data_d,
        &katana_smo_B.q_size_i, katana_smo_B.T_f);
    }

    katana_smo_tforminv(katana_smo_B.T_f, katana_smo_B.dv1);
    katana_smo_tformToSpatialXform(katana_smo_B.dv1, X->data[katana_smo_B.c_tmp]
      .f1);
  }

  katana_smo_B.g = static_cast<int32_T>(((-1.0 - katana_smo_B.nb_m) + 1.0) /
    -1.0) - 1;
  katana_smo_emxInit_real_T(&Si, 2);
  katana_smo_emxInit_real_T(&Fi, 2);
  katana_smo_emxInit_real_T(&Hji, 2);
  for (katana_smo_B.c = 0; katana_smo_B.c <= katana_smo_B.g; katana_smo_B.c++) {
    katana_smo_B.n_l = static_cast<int32_T>(katana_smo_B.nb_m +
      -static_cast<real_T>(katana_smo_B.c));
    katana_smo_B.pid_tmp_o = katana_smo_B.n_l - 1;
    katana_smo_B.pid_c = robot->Bodies[katana_smo_B.pid_tmp_o]->ParentIndex;
    katana_smo_B.vNum_m = robot->VelocityDoFMap[katana_smo_B.n_l - 1];
    katana_smo_B.p_idx_1_p = robot->VelocityDoFMap[katana_smo_B.n_l + 9];
    if (katana_smo_B.pid_c > 0.0) {
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o < 6; katana_smo_B.f_o++) {
        for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < 6; katana_smo_B.c_tmp
             ++) {
          katana_smo_B.X_tmp_m = katana_smo_B.f_o + 6 * katana_smo_B.c_tmp;
          katana_smo_B.X_c[katana_smo_B.X_tmp_m] = 0.0;
          for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
               katana_smo_B.loop_ub_k++) {
            katana_smo_B.X_c[katana_smo_B.X_tmp_m] += X->
              data[katana_smo_B.pid_tmp_o].f1[6 * katana_smo_B.f_o +
              katana_smo_B.loop_ub_k] * Ic->data[katana_smo_B.pid_tmp_o].f1[6 *
              katana_smo_B.c_tmp + katana_smo_B.loop_ub_k];
          }
        }
      }

      for (katana_smo_B.f_o = 0; katana_smo_B.f_o < 6; katana_smo_B.f_o++) {
        for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < 6; katana_smo_B.c_tmp
             ++) {
          katana_smo_B.b_idx_0_e = 0.0;
          for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
               katana_smo_B.loop_ub_k++) {
            katana_smo_B.b_idx_0_e += katana_smo_B.X_c[6 *
              katana_smo_B.loop_ub_k + katana_smo_B.f_o] * X->
              data[katana_smo_B.pid_tmp_o].f1[6 * katana_smo_B.c_tmp +
              katana_smo_B.loop_ub_k];
          }

          katana_smo_B.loop_ub_k = 6 * katana_smo_B.c_tmp + katana_smo_B.f_o;
          Ic->data[static_cast<int32_T>(katana_smo_B.pid_c) - 1]
            .f1[katana_smo_B.loop_ub_k] += katana_smo_B.b_idx_0_e;
        }
      }
    }

    katana_smo_B.b_idx_0_e = robot->VelocityDoFMap[katana_smo_B.n_l - 1];
    katana_smo_B.b_idx_1_o = robot->VelocityDoFMap[katana_smo_B.n_l + 9];
    if (katana_smo_B.b_idx_0_e <= katana_smo_B.b_idx_1_o) {
      obj = robot->Bodies[katana_smo_B.pid_tmp_o];
      katana_smo_B.f_o = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f_o);
      katana_smo_B.loop_ub_k = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.loop_ub_k;
           katana_smo_B.f_o++) {
        Si->data[katana_smo_B.f_o] = obj->JointInternal.MotionSubspace->
          data[katana_smo_B.f_o];
      }

      katana_smo_B.n_l = Si->size[1] - 1;
      katana_smo_B.f_o = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      katana_emxEnsureCapacity_real_T(Fi, katana_smo_B.f_o);
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.n_l;
           katana_smo_B.f_o++) {
        katana_smo_B.X_tmp_m = katana_smo_B.f_o * 6 - 1;
        for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < 6; katana_smo_B.c_tmp
             ++) {
          katana_smo_B.s_f = 0.0;
          for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
               katana_smo_B.loop_ub_k++) {
            katana_smo_B.s_f += Ic->data[katana_smo_B.pid_tmp_o]
              .f1[katana_smo_B.loop_ub_k * 6 + katana_smo_B.c_tmp] * Si->data
              [(katana_smo_B.X_tmp_m + katana_smo_B.loop_ub_k) + 1];
          }

          Fi->data[(katana_smo_B.X_tmp_m + katana_smo_B.c_tmp) + 1] =
            katana_smo_B.s_f;
        }
      }

      if (katana_smo_B.vNum_m > katana_smo_B.p_idx_1_p) {
        katana_smo_B.X_tmp_m = 0;
        katana_smo_B.cb_n = 0;
      } else {
        katana_smo_B.X_tmp_m = static_cast<int32_T>(katana_smo_B.vNum_m) - 1;
        katana_smo_B.cb_n = katana_smo_B.X_tmp_m;
      }

      katana_smo_B.m_p = Si->size[1];
      katana_smo_B.n_l = Fi->size[1] - 1;
      katana_smo_B.f_o = Hji->size[0] * Hji->size[1];
      Hji->size[0] = Si->size[1];
      Hji->size[1] = Fi->size[1];
      katana_emxEnsureCapacity_real_T(Hji, katana_smo_B.f_o);
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.n_l;
           katana_smo_B.f_o++) {
        katana_smo_B.coffset_p = katana_smo_B.f_o * katana_smo_B.m_p - 1;
        katana_smo_B.boffset_f = katana_smo_B.f_o * 6 - 1;
        for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < katana_smo_B.m_p;
             katana_smo_B.c_tmp++) {
          katana_smo_B.aoffset_i = katana_smo_B.c_tmp * 6 - 1;
          katana_smo_B.s_f = 0.0;
          for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
               katana_smo_B.loop_ub_k++) {
            katana_smo_B.k_o = katana_smo_B.loop_ub_k + 1;
            katana_smo_B.s_f += Si->data[katana_smo_B.aoffset_i +
              katana_smo_B.k_o] * Fi->data[katana_smo_B.boffset_f +
              katana_smo_B.k_o];
          }

          Hji->data[(katana_smo_B.coffset_p + katana_smo_B.c_tmp) + 1] =
            katana_smo_B.s_f;
        }
      }

      katana_smo_B.loop_ub_k = Hji->size[1];
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o < katana_smo_B.loop_ub_k;
           katana_smo_B.f_o++) {
        katana_smo_B.n_l = Hji->size[0];
        for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < katana_smo_B.n_l;
             katana_smo_B.c_tmp++) {
          H->data[(katana_smo_B.X_tmp_m + katana_smo_B.c_tmp) + H->size[0] *
            (katana_smo_B.cb_n + katana_smo_B.f_o)] = Hji->data[Hji->size[0] *
            katana_smo_B.f_o + katana_smo_B.c_tmp];
        }
      }

      katana_smo_B.n_l = Fi->size[1];
      katana_smo_B.f_o = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = Fi->size[1];
      katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f_o);
      katana_smo_B.loop_ub_k = Fi->size[0] * Fi->size[1] - 1;
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.loop_ub_k;
           katana_smo_B.f_o++) {
        Si->data[katana_smo_B.f_o] = Fi->data[katana_smo_B.f_o];
      }

      katana_smo_B.f_o = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = katana_smo_B.n_l;
      katana_emxEnsureCapacity_real_T(Fi, katana_smo_B.f_o);
      for (katana_smo_B.f_o = 0; katana_smo_B.f_o < katana_smo_B.n_l;
           katana_smo_B.f_o++) {
        katana_smo_B.X_tmp_m = katana_smo_B.f_o * 6 - 1;
        for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < 6; katana_smo_B.c_tmp
             ++) {
          katana_smo_B.aoffset_i = katana_smo_B.c_tmp * 6 - 1;
          katana_smo_B.s_f = 0.0;
          for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
               katana_smo_B.loop_ub_k++) {
            katana_smo_B.k_o = katana_smo_B.loop_ub_k + 1;
            katana_smo_B.s_f += X->data[katana_smo_B.pid_tmp_o]
              .f1[katana_smo_B.aoffset_i + katana_smo_B.k_o] * Si->
              data[katana_smo_B.X_tmp_m + katana_smo_B.k_o];
          }

          Fi->data[(katana_smo_B.X_tmp_m + katana_smo_B.c_tmp) + 1] =
            katana_smo_B.s_f;
        }
      }

      while (katana_smo_B.pid_c > 0.0) {
        katana_smo_B.c_tmp = static_cast<int32_T>(katana_smo_B.pid_c);
        katana_smo_B.pid_tmp_o = katana_smo_B.c_tmp - 1;
        obj = robot->Bodies[katana_smo_B.pid_tmp_o];
        katana_smo_B.f_o = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
        katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f_o);
        katana_smo_B.loop_ub_k = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.loop_ub_k;
             katana_smo_B.f_o++) {
          Si->data[katana_smo_B.f_o] = obj->JointInternal.MotionSubspace->
            data[katana_smo_B.f_o];
        }

        katana_smo_B.b_idx_0_e = robot->VelocityDoFMap[katana_smo_B.c_tmp - 1];
        katana_smo_B.b_idx_1_o = robot->VelocityDoFMap[katana_smo_B.c_tmp + 9];
        if (katana_smo_B.b_idx_0_e <= katana_smo_B.b_idx_1_o) {
          katana_smo_B.m_p = Si->size[1];
          katana_smo_B.n_l = Fi->size[1] - 1;
          katana_smo_B.f_o = Hji->size[0] * Hji->size[1];
          Hji->size[0] = Si->size[1];
          Hji->size[1] = Fi->size[1];
          katana_emxEnsureCapacity_real_T(Hji, katana_smo_B.f_o);
          for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.n_l;
               katana_smo_B.f_o++) {
            katana_smo_B.coffset_p = katana_smo_B.f_o * katana_smo_B.m_p - 1;
            katana_smo_B.boffset_f = katana_smo_B.f_o * 6 - 1;
            for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < katana_smo_B.m_p;
                 katana_smo_B.c_tmp++) {
              katana_smo_B.aoffset_i = katana_smo_B.c_tmp * 6 - 1;
              katana_smo_B.s_f = 0.0;
              for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
                   katana_smo_B.loop_ub_k++) {
                katana_smo_B.k_o = katana_smo_B.loop_ub_k + 1;
                katana_smo_B.s_f += Si->data[katana_smo_B.aoffset_i +
                  katana_smo_B.k_o] * Fi->data[katana_smo_B.boffset_f +
                  katana_smo_B.k_o];
              }

              Hji->data[(katana_smo_B.coffset_p + katana_smo_B.c_tmp) + 1] =
                katana_smo_B.s_f;
            }
          }

          if (katana_smo_B.b_idx_0_e > katana_smo_B.b_idx_1_o) {
            katana_smo_B.X_tmp_m = 0;
          } else {
            katana_smo_B.X_tmp_m = static_cast<int32_T>(katana_smo_B.b_idx_0_e)
              - 1;
          }

          if (katana_smo_B.vNum_m > katana_smo_B.p_idx_1_p) {
            katana_smo_B.cb_n = 0;
          } else {
            katana_smo_B.cb_n = static_cast<int32_T>(katana_smo_B.vNum_m) - 1;
          }

          katana_smo_B.loop_ub_k = Hji->size[1];
          for (katana_smo_B.f_o = 0; katana_smo_B.f_o < katana_smo_B.loop_ub_k;
               katana_smo_B.f_o++) {
            katana_smo_B.n_l = Hji->size[0];
            for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < katana_smo_B.n_l;
                 katana_smo_B.c_tmp++) {
              H->data[(katana_smo_B.X_tmp_m + katana_smo_B.c_tmp) + H->size[0] *
                (katana_smo_B.cb_n + katana_smo_B.f_o)] = Hji->data[Hji->size[0]
                * katana_smo_B.f_o + katana_smo_B.c_tmp];
            }
          }

          if (katana_smo_B.vNum_m > katana_smo_B.p_idx_1_p) {
            katana_smo_B.X_tmp_m = 0;
          } else {
            katana_smo_B.X_tmp_m = static_cast<int32_T>(katana_smo_B.vNum_m) - 1;
          }

          if (katana_smo_B.b_idx_0_e > katana_smo_B.b_idx_1_o) {
            katana_smo_B.cb_n = 0;
          } else {
            katana_smo_B.cb_n = static_cast<int32_T>(katana_smo_B.b_idx_0_e) - 1;
          }

          katana_smo_B.loop_ub_k = Hji->size[0];
          for (katana_smo_B.f_o = 0; katana_smo_B.f_o < katana_smo_B.loop_ub_k;
               katana_smo_B.f_o++) {
            katana_smo_B.n_l = Hji->size[1];
            for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < katana_smo_B.n_l;
                 katana_smo_B.c_tmp++) {
              H->data[(katana_smo_B.X_tmp_m + katana_smo_B.c_tmp) + H->size[0] *
                (katana_smo_B.cb_n + katana_smo_B.f_o)] = Hji->data[Hji->size[0]
                * katana_smo_B.c_tmp + katana_smo_B.f_o];
            }
          }
        }

        katana_smo_B.n_l = Fi->size[1];
        katana_smo_B.f_o = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = Fi->size[1];
        katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f_o);
        katana_smo_B.loop_ub_k = Fi->size[0] * Fi->size[1] - 1;
        for (katana_smo_B.f_o = 0; katana_smo_B.f_o <= katana_smo_B.loop_ub_k;
             katana_smo_B.f_o++) {
          Si->data[katana_smo_B.f_o] = Fi->data[katana_smo_B.f_o];
        }

        katana_smo_B.f_o = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = katana_smo_B.n_l;
        katana_emxEnsureCapacity_real_T(Fi, katana_smo_B.f_o);
        for (katana_smo_B.f_o = 0; katana_smo_B.f_o < katana_smo_B.n_l;
             katana_smo_B.f_o++) {
          katana_smo_B.X_tmp_m = katana_smo_B.f_o * 6 - 1;
          for (katana_smo_B.c_tmp = 0; katana_smo_B.c_tmp < 6;
               katana_smo_B.c_tmp++) {
            katana_smo_B.aoffset_i = katana_smo_B.c_tmp * 6 - 1;
            katana_smo_B.s_f = 0.0;
            for (katana_smo_B.loop_ub_k = 0; katana_smo_B.loop_ub_k < 6;
                 katana_smo_B.loop_ub_k++) {
              katana_smo_B.k_o = katana_smo_B.loop_ub_k + 1;
              katana_smo_B.s_f += X->data[katana_smo_B.pid_tmp_o]
                .f1[katana_smo_B.aoffset_i + katana_smo_B.k_o] * Si->
                data[katana_smo_B.X_tmp_m + katana_smo_B.k_o];
            }

            Fi->data[(katana_smo_B.X_tmp_m + katana_smo_B.c_tmp) + 1] =
              katana_smo_B.s_f;
          }
        }

        katana_smo_B.pid_c = robot->Bodies[katana_smo_B.pid_tmp_o]->ParentIndex;
      }
    }
  }

  katana_smo_emxFree_real_T(&Hji);
  katana_smo_emxFree_real_T(&Fi);
  katana_smo_emxFree_real_T(&Si);
  katana_smo_emxFree_f_cell_wrap1(&X);
  katana_smo_emxFree_f_cell_wrap1(&Ic);
}

static void katana_smo_emxInit_f_cell_wrap(emxArray_f_cell_wrap_katana_s_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_katana_s_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_f_cell_wrap_katana_s_T *)malloc(sizeof
    (emxArray_f_cell_wrap_katana_s_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_katana_smo_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void katana_smo_emxInit_char_T(emxArray_char_T_katana_smo_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_char_T_katana_smo_T *emxArray;
  *pEmxArray = (emxArray_char_T_katana_smo_T *)malloc(sizeof
    (emxArray_char_T_katana_smo_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (katana_smo_B.i_b = 0; katana_smo_B.i_b < numDimensions; katana_smo_B.i_b
       ++) {
    emxArray->size[katana_smo_B.i_b] = 0;
  }
}

static void k_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_katana_s_T
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

    newData = calloc(static_cast<uint32_T>(i), sizeof(f_cell_wrap_katana_smo_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_katana_smo_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_katana_smo_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

static void katana_emxEnsureCapacity_char_T(emxArray_char_T_katana_smo_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  katana_smo_B.newNumel_m = 1;
  for (katana_smo_B.i_ad = 0; katana_smo_B.i_ad < emxArray->numDimensions;
       katana_smo_B.i_ad++) {
    katana_smo_B.newNumel_m *= emxArray->size[katana_smo_B.i_ad];
  }

  if (katana_smo_B.newNumel_m > emxArray->allocatedSize) {
    katana_smo_B.i_ad = emxArray->allocatedSize;
    if (katana_smo_B.i_ad < 16) {
      katana_smo_B.i_ad = 16;
    }

    while (katana_smo_B.i_ad < katana_smo_B.newNumel_m) {
      if (katana_smo_B.i_ad > 1073741823) {
        katana_smo_B.i_ad = MAX_int32_T;
      } else {
        katana_smo_B.i_ad <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(katana_smo_B.i_ad), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = katana_smo_B.i_ad;
    emxArray->canFreeData = true;
  }
}

static void ka_rigidBodyJoint_get_JointAxis(const c_rigidBodyJoint_katana_smo_T *
  obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (katana_smo_B.b_kstr_m = 0; katana_smo_B.b_kstr_m < 8;
       katana_smo_B.b_kstr_m++) {
    katana_smo_B.b_c0[katana_smo_B.b_kstr_m] = tmp[katana_smo_B.b_kstr_m];
  }

  katana_smo_B.b_bool_g = false;
  if (obj->Type->size[1] == 8) {
    katana_smo_B.b_kstr_m = 1;
    do {
      exitg1 = 0;
      if (katana_smo_B.b_kstr_m - 1 < 8) {
        katana_smo_B.kstr_p = katana_smo_B.b_kstr_m - 1;
        if (obj->Type->data[katana_smo_B.kstr_p] !=
            katana_smo_B.b_c0[katana_smo_B.kstr_p]) {
          exitg1 = 1;
        } else {
          katana_smo_B.b_kstr_m++;
        }
      } else {
        katana_smo_B.b_bool_g = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (katana_smo_B.b_bool_g) {
    guard1 = true;
  } else {
    for (katana_smo_B.b_kstr_m = 0; katana_smo_B.b_kstr_m < 9;
         katana_smo_B.b_kstr_m++) {
      katana_smo_B.b_c[katana_smo_B.b_kstr_m] = tmp_0[katana_smo_B.b_kstr_m];
    }

    katana_smo_B.b_bool_g = false;
    if (obj->Type->size[1] == 9) {
      katana_smo_B.b_kstr_m = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr_m - 1 < 9) {
          katana_smo_B.kstr_p = katana_smo_B.b_kstr_m - 1;
          if (obj->Type->data[katana_smo_B.kstr_p] !=
              katana_smo_B.b_c[katana_smo_B.kstr_p]) {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr_m++;
          }
        } else {
          katana_smo_B.b_bool_g = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_bool_g) {
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

static void katana_smo_emxFree_char_T(emxArray_char_T_katana_smo_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_katana_smo_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_katana_smo_T *)NULL;
  }
}

static void RigidBodyTree_forwardKinematics(t_robotics_manip_internal_Rig_T *obj,
  const real_T qvec[7], emxArray_f_cell_wrap_katana_s_T *Ttree)
{
  r_robotics_manip_internal_Rig_T *body;
  emxArray_char_T_katana_smo_T *switch_expression;
  static const int8_T tmp[16] = { 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1
  };

  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  katana_smo_B.n = obj->NumBodies;
  for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 16;
       katana_smo_B.b_kstr_d++) {
    katana_smo_B.c_f1[katana_smo_B.b_kstr_d] = tmp[katana_smo_B.b_kstr_d];
  }

  katana_smo_B.b_kstr_d = Ttree->size[0] * Ttree->size[1];
  Ttree->size[0] = 1;
  katana_smo_B.e = static_cast<int32_T>(katana_smo_B.n);
  Ttree->size[1] = katana_smo_B.e;
  k_emxEnsureCapacity_f_cell_wrap(Ttree, katana_smo_B.b_kstr_d);
  if (katana_smo_B.e != 0) {
    katana_smo_B.ntilecols = katana_smo_B.e - 1;
    if (0 <= katana_smo_B.ntilecols) {
      memcpy(&katana_smo_B.expl_temp.f1[0], &katana_smo_B.c_f1[0], sizeof(real_T)
             << 4U);
    }

    for (katana_smo_B.b_jtilecol = 0; katana_smo_B.b_jtilecol <=
         katana_smo_B.ntilecols; katana_smo_B.b_jtilecol++) {
      Ttree->data[katana_smo_B.b_jtilecol] = katana_smo_B.expl_temp;
    }
  }

  katana_smo_B.k = 1.0;
  katana_smo_B.ntilecols = static_cast<int32_T>(katana_smo_B.n) - 1;
  katana_smo_emxInit_char_T(&switch_expression, 2);
  if (0 <= katana_smo_B.ntilecols) {
    for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 5;
         katana_smo_B.b_kstr_d++) {
      katana_smo_B.b_cs[katana_smo_B.b_kstr_d] = tmp_0[katana_smo_B.b_kstr_d];
    }
  }

  for (katana_smo_B.b_jtilecol = 0; katana_smo_B.b_jtilecol <=
       katana_smo_B.ntilecols; katana_smo_B.b_jtilecol++) {
    body = obj->Bodies[katana_smo_B.b_jtilecol];
    katana_smo_B.n = body->JointInternal.PositionNumber;
    katana_smo_B.n += katana_smo_B.k;
    if (katana_smo_B.k > katana_smo_B.n - 1.0) {
      katana_smo_B.e = 0;
      katana_smo_B.d = 0;
    } else {
      katana_smo_B.e = static_cast<int32_T>(katana_smo_B.k) - 1;
      katana_smo_B.d = static_cast<int32_T>(katana_smo_B.n - 1.0);
    }

    katana_smo_B.b_kstr_d = switch_expression->size[0] * switch_expression->
      size[1];
    switch_expression->size[0] = 1;
    switch_expression->size[1] = body->JointInternal.Type->size[1];
    katana_emxEnsureCapacity_char_T(switch_expression, katana_smo_B.b_kstr_d);
    katana_smo_B.loop_ub_a = body->JointInternal.Type->size[0] *
      body->JointInternal.Type->size[1] - 1;
    for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d <=
         katana_smo_B.loop_ub_a; katana_smo_B.b_kstr_d++) {
      switch_expression->data[katana_smo_B.b_kstr_d] = body->
        JointInternal.Type->data[katana_smo_B.b_kstr_d];
    }

    katana_smo_B.b_bool_a = false;
    if (switch_expression->size[1] == 5) {
      katana_smo_B.b_kstr_d = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr_d - 1 < 5) {
          katana_smo_B.loop_ub_a = katana_smo_B.b_kstr_d - 1;
          if (switch_expression->data[katana_smo_B.loop_ub_a] !=
              katana_smo_B.b_cs[katana_smo_B.loop_ub_a]) {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr_d++;
          }
        } else {
          katana_smo_B.b_bool_a = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_bool_a) {
      katana_smo_B.b_kstr_d = 0;
    } else {
      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 8;
           katana_smo_B.b_kstr_d++) {
        katana_smo_B.b_h[katana_smo_B.b_kstr_d] = tmp_1[katana_smo_B.b_kstr_d];
      }

      katana_smo_B.b_bool_a = false;
      if (switch_expression->size[1] == 8) {
        katana_smo_B.b_kstr_d = 1;
        do {
          exitg1 = 0;
          if (katana_smo_B.b_kstr_d - 1 < 8) {
            katana_smo_B.loop_ub_a = katana_smo_B.b_kstr_d - 1;
            if (switch_expression->data[katana_smo_B.loop_ub_a] !=
                katana_smo_B.b_h[katana_smo_B.loop_ub_a]) {
              exitg1 = 1;
            } else {
              katana_smo_B.b_kstr_d++;
            }
          } else {
            katana_smo_B.b_bool_a = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (katana_smo_B.b_bool_a) {
        katana_smo_B.b_kstr_d = 1;
      } else {
        katana_smo_B.b_kstr_d = -1;
      }
    }

    switch (katana_smo_B.b_kstr_d) {
     case 0:
      memset(&katana_smo_B.c_f1[0], 0, sizeof(real_T) << 4U);
      katana_smo_B.c_f1[0] = 1.0;
      katana_smo_B.c_f1[5] = 1.0;
      katana_smo_B.c_f1[10] = 1.0;
      katana_smo_B.c_f1[15] = 1.0;
      break;

     case 1:
      ka_rigidBodyJoint_get_JointAxis(&body->JointInternal, katana_smo_B.v_j);
      katana_smo_B.d -= katana_smo_B.e;
      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < katana_smo_B.d;
           katana_smo_B.b_kstr_d++) {
        katana_smo_B.e_data[katana_smo_B.b_kstr_d] = katana_smo_B.e +
          katana_smo_B.b_kstr_d;
      }

      katana_smo_B.result_data_j[0] = katana_smo_B.v_j[0];
      katana_smo_B.result_data_j[1] = katana_smo_B.v_j[1];
      katana_smo_B.result_data_j[2] = katana_smo_B.v_j[2];
      if (0 <= (katana_smo_B.d != 0) - 1) {
        katana_smo_B.result_data_j[3] = qvec[katana_smo_B.e_data[0]];
      }

      katana_smo_B.k = 1.0 / sqrt((katana_smo_B.result_data_j[0] *
        katana_smo_B.result_data_j[0] + katana_smo_B.result_data_j[1] *
        katana_smo_B.result_data_j[1]) + katana_smo_B.result_data_j[2] *
        katana_smo_B.result_data_j[2]);
      katana_smo_B.v_j[0] = katana_smo_B.result_data_j[0] * katana_smo_B.k;
      katana_smo_B.v_j[1] = katana_smo_B.result_data_j[1] * katana_smo_B.k;
      katana_smo_B.v_j[2] = katana_smo_B.result_data_j[2] * katana_smo_B.k;
      katana_smo_B.k = cos(katana_smo_B.result_data_j[3]);
      katana_smo_B.sth_f = sin(katana_smo_B.result_data_j[3]);
      katana_smo_B.tempR_l[0] = katana_smo_B.v_j[0] * katana_smo_B.v_j[0] * (1.0
        - katana_smo_B.k) + katana_smo_B.k;
      katana_smo_B.tempR_tmp_g = katana_smo_B.v_j[1] * katana_smo_B.v_j[0] *
        (1.0 - katana_smo_B.k);
      katana_smo_B.tempR_tmp_c = katana_smo_B.v_j[2] * katana_smo_B.sth_f;
      katana_smo_B.tempR_l[1] = katana_smo_B.tempR_tmp_g -
        katana_smo_B.tempR_tmp_c;
      katana_smo_B.tempR_tmp_o = katana_smo_B.v_j[2] * katana_smo_B.v_j[0] *
        (1.0 - katana_smo_B.k);
      katana_smo_B.tempR_tmp_lm = katana_smo_B.v_j[1] * katana_smo_B.sth_f;
      katana_smo_B.tempR_l[2] = katana_smo_B.tempR_tmp_o +
        katana_smo_B.tempR_tmp_lm;
      katana_smo_B.tempR_l[3] = katana_smo_B.tempR_tmp_g +
        katana_smo_B.tempR_tmp_c;
      katana_smo_B.tempR_l[4] = katana_smo_B.v_j[1] * katana_smo_B.v_j[1] * (1.0
        - katana_smo_B.k) + katana_smo_B.k;
      katana_smo_B.tempR_tmp_g = katana_smo_B.v_j[2] * katana_smo_B.v_j[1] *
        (1.0 - katana_smo_B.k);
      katana_smo_B.tempR_tmp_c = katana_smo_B.v_j[0] * katana_smo_B.sth_f;
      katana_smo_B.tempR_l[5] = katana_smo_B.tempR_tmp_g -
        katana_smo_B.tempR_tmp_c;
      katana_smo_B.tempR_l[6] = katana_smo_B.tempR_tmp_o -
        katana_smo_B.tempR_tmp_lm;
      katana_smo_B.tempR_l[7] = katana_smo_B.tempR_tmp_g +
        katana_smo_B.tempR_tmp_c;
      katana_smo_B.tempR_l[8] = katana_smo_B.v_j[2] * katana_smo_B.v_j[2] * (1.0
        - katana_smo_B.k) + katana_smo_B.k;
      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 3;
           katana_smo_B.b_kstr_d++) {
        katana_smo_B.e = katana_smo_B.b_kstr_d + 1;
        katana_smo_B.R_dy[katana_smo_B.e - 1] = katana_smo_B.tempR_l
          [(katana_smo_B.e - 1) * 3];
        katana_smo_B.e = katana_smo_B.b_kstr_d + 1;
        katana_smo_B.R_dy[katana_smo_B.e + 2] = katana_smo_B.tempR_l
          [(katana_smo_B.e - 1) * 3 + 1];
        katana_smo_B.e = katana_smo_B.b_kstr_d + 1;
        katana_smo_B.R_dy[katana_smo_B.e + 5] = katana_smo_B.tempR_l
          [(katana_smo_B.e - 1) * 3 + 2];
      }

      memset(&katana_smo_B.c_f1[0], 0, sizeof(real_T) << 4U);
      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 3;
           katana_smo_B.b_kstr_d++) {
        katana_smo_B.d = katana_smo_B.b_kstr_d << 2;
        katana_smo_B.c_f1[katana_smo_B.d] = katana_smo_B.R_dy[3 *
          katana_smo_B.b_kstr_d];
        katana_smo_B.c_f1[katana_smo_B.d + 1] = katana_smo_B.R_dy[3 *
          katana_smo_B.b_kstr_d + 1];
        katana_smo_B.c_f1[katana_smo_B.d + 2] = katana_smo_B.R_dy[3 *
          katana_smo_B.b_kstr_d + 2];
      }

      katana_smo_B.c_f1[15] = 1.0;
      break;

     default:
      ka_rigidBodyJoint_get_JointAxis(&body->JointInternal, katana_smo_B.v_j);
      memset(&katana_smo_B.tempR_l[0], 0, 9U * sizeof(real_T));
      katana_smo_B.tempR_l[0] = 1.0;
      katana_smo_B.tempR_l[4] = 1.0;
      katana_smo_B.tempR_l[8] = 1.0;
      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 3;
           katana_smo_B.b_kstr_d++) {
        katana_smo_B.d = katana_smo_B.b_kstr_d << 2;
        katana_smo_B.c_f1[katana_smo_B.d] = katana_smo_B.tempR_l[3 *
          katana_smo_B.b_kstr_d];
        katana_smo_B.c_f1[katana_smo_B.d + 1] = katana_smo_B.tempR_l[3 *
          katana_smo_B.b_kstr_d + 1];
        katana_smo_B.c_f1[katana_smo_B.d + 2] = katana_smo_B.tempR_l[3 *
          katana_smo_B.b_kstr_d + 2];
        katana_smo_B.c_f1[katana_smo_B.b_kstr_d + 12] =
          katana_smo_B.v_j[katana_smo_B.b_kstr_d] * qvec[katana_smo_B.e];
      }

      katana_smo_B.c_f1[3] = 0.0;
      katana_smo_B.c_f1[7] = 0.0;
      katana_smo_B.c_f1[11] = 0.0;
      katana_smo_B.c_f1[15] = 1.0;
      break;
    }

    for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 16;
         katana_smo_B.b_kstr_d++) {
      katana_smo_B.a[katana_smo_B.b_kstr_d] =
        body->JointInternal.JointToParentTransform[katana_smo_B.b_kstr_d];
    }

    for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 16;
         katana_smo_B.b_kstr_d++) {
      katana_smo_B.b[katana_smo_B.b_kstr_d] =
        body->JointInternal.ChildToJointTransform[katana_smo_B.b_kstr_d];
    }

    for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 4;
         katana_smo_B.b_kstr_d++) {
      for (katana_smo_B.e = 0; katana_smo_B.e < 4; katana_smo_B.e++) {
        katana_smo_B.d = katana_smo_B.e << 2;
        katana_smo_B.loop_ub_a = katana_smo_B.b_kstr_d + katana_smo_B.d;
        katana_smo_B.a_c[katana_smo_B.loop_ub_a] = 0.0;
        katana_smo_B.a_c[katana_smo_B.loop_ub_a] +=
          katana_smo_B.c_f1[katana_smo_B.d] *
          katana_smo_B.a[katana_smo_B.b_kstr_d];
        katana_smo_B.a_c[katana_smo_B.loop_ub_a] +=
          katana_smo_B.c_f1[katana_smo_B.d + 1] *
          katana_smo_B.a[katana_smo_B.b_kstr_d + 4];
        katana_smo_B.a_c[katana_smo_B.loop_ub_a] +=
          katana_smo_B.c_f1[katana_smo_B.d + 2] *
          katana_smo_B.a[katana_smo_B.b_kstr_d + 8];
        katana_smo_B.a_c[katana_smo_B.loop_ub_a] +=
          katana_smo_B.c_f1[katana_smo_B.d + 3] *
          katana_smo_B.a[katana_smo_B.b_kstr_d + 12];
      }

      for (katana_smo_B.e = 0; katana_smo_B.e < 4; katana_smo_B.e++) {
        katana_smo_B.d = katana_smo_B.e << 2;
        katana_smo_B.loop_ub_a = katana_smo_B.b_kstr_d + katana_smo_B.d;
        Ttree->data[katana_smo_B.b_jtilecol].f1[katana_smo_B.loop_ub_a] = 0.0;
        Ttree->data[katana_smo_B.b_jtilecol].f1[katana_smo_B.loop_ub_a] +=
          katana_smo_B.b[katana_smo_B.d] *
          katana_smo_B.a_c[katana_smo_B.b_kstr_d];
        Ttree->data[katana_smo_B.b_jtilecol].f1[katana_smo_B.loop_ub_a] +=
          katana_smo_B.b[katana_smo_B.d + 1] *
          katana_smo_B.a_c[katana_smo_B.b_kstr_d + 4];
        Ttree->data[katana_smo_B.b_jtilecol].f1[katana_smo_B.loop_ub_a] +=
          katana_smo_B.b[katana_smo_B.d + 2] *
          katana_smo_B.a_c[katana_smo_B.b_kstr_d + 8];
        Ttree->data[katana_smo_B.b_jtilecol].f1[katana_smo_B.loop_ub_a] +=
          katana_smo_B.b[katana_smo_B.d + 3] *
          katana_smo_B.a_c[katana_smo_B.b_kstr_d + 12];
      }
    }

    katana_smo_B.k = katana_smo_B.n;
    if (body->ParentIndex > 0.0) {
      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 16;
           katana_smo_B.b_kstr_d++) {
        katana_smo_B.a[katana_smo_B.b_kstr_d] = Ttree->data[static_cast<int32_T>
          (body->ParentIndex) - 1].f1[katana_smo_B.b_kstr_d];
      }

      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 4;
           katana_smo_B.b_kstr_d++) {
        for (katana_smo_B.e = 0; katana_smo_B.e < 4; katana_smo_B.e++) {
          katana_smo_B.d = katana_smo_B.e << 2;
          katana_smo_B.loop_ub_a = katana_smo_B.b_kstr_d + katana_smo_B.d;
          katana_smo_B.a_c[katana_smo_B.loop_ub_a] = 0.0;
          katana_smo_B.a_c[katana_smo_B.loop_ub_a] += Ttree->
            data[katana_smo_B.b_jtilecol].f1[katana_smo_B.d] *
            katana_smo_B.a[katana_smo_B.b_kstr_d];
          katana_smo_B.a_c[katana_smo_B.loop_ub_a] += Ttree->
            data[katana_smo_B.b_jtilecol].f1[katana_smo_B.d + 1] *
            katana_smo_B.a[katana_smo_B.b_kstr_d + 4];
          katana_smo_B.a_c[katana_smo_B.loop_ub_a] += Ttree->
            data[katana_smo_B.b_jtilecol].f1[katana_smo_B.d + 2] *
            katana_smo_B.a[katana_smo_B.b_kstr_d + 8];
          katana_smo_B.a_c[katana_smo_B.loop_ub_a] += Ttree->
            data[katana_smo_B.b_jtilecol].f1[katana_smo_B.d + 3] *
            katana_smo_B.a[katana_smo_B.b_kstr_d + 12];
        }
      }

      for (katana_smo_B.b_kstr_d = 0; katana_smo_B.b_kstr_d < 16;
           katana_smo_B.b_kstr_d++) {
        Ttree->data[katana_smo_B.b_jtilecol].f1[katana_smo_B.b_kstr_d] =
          katana_smo_B.a_c[katana_smo_B.b_kstr_d];
      }
    }
  }

  katana_smo_emxFree_char_T(&switch_expression);
}

static void katana_smo_emxFree_f_cell_wrap(emxArray_f_cell_wrap_katana_s_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_katana_s_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_katana_smo_T *)NULL) && (*pEmxArray
        )->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_katana_s_T *)NULL;
  }
}

static void katana_smo_SystemCore_step_g(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_smo_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  *varargout_1 = Sub_katana_smo_435.getLatestMessage(&katana_smo_B.b_varargout_2);
  for (katana_smo_B.i_px = 0; katana_smo_B.i_px < 7; katana_smo_B.i_px++) {
    varargout_2_Data[katana_smo_B.i_px] =
      katana_smo_B.b_varargout_2.Data[katana_smo_B.i_px];
  }

  *varargout_2_Data_SL_Info_Curren =
    katana_smo_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    katana_smo_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = katana_smo_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &katana_smo_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_katana_smo_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    katana_smo_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    katana_smo_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void RigidBodyTreeDynamics_massMat_g(t_robotics_manip_internal__gl_T
  *robot, const real_T q[7], emxArray_real_T_katana_smo_T *H,
  emxArray_real_T_katana_smo_T *lambda)
{
  emxArray_f_cell_wrap_katana_g_T *Ic;
  emxArray_f_cell_wrap_katana_g_T *X;
  emxArray_real_T_katana_smo_T *lambda_;
  emxArray_real_T_katana_smo_T *Si;
  emxArray_real_T_katana_smo_T *Fi;
  emxArray_real_T_katana_smo_T *Hji;
  emxArray_real_T_katana_smo_T *s;
  r_robotics_manip_internal_R_g_T *obj;
  emxArray_char_T_katana_smo_T *a;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  boolean_T exitg1;
  int32_T exitg2;
  katana_smo_B.nb_o = robot->NumBodies;
  katana_smo_B.vNum_o = robot->VelocityNumber;
  katana_smo_B.f = H->size[0] * H->size[1];
  katana_smo_B.b_i_b = static_cast<int32_T>(katana_smo_B.vNum_o);
  H->size[0] = katana_smo_B.b_i_b;
  H->size[1] = katana_smo_B.b_i_b;
  katana_emxEnsureCapacity_real_T(H, katana_smo_B.f);
  katana_smo_B.loop_ub = katana_smo_B.b_i_b * katana_smo_B.b_i_b - 1;
  for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
       katana_smo_B.f++) {
    H->data[katana_smo_B.f] = 0.0;
  }

  katana_smo_emxInit_real_T(&lambda_, 2);
  katana_smo_B.f = lambda_->size[0] * lambda_->size[1];
  lambda_->size[0] = 1;
  katana_smo_B.nm1d2 = static_cast<int32_T>(katana_smo_B.nb_o);
  lambda_->size[1] = katana_smo_B.nm1d2;
  katana_emxEnsureCapacity_real_T(lambda_, katana_smo_B.f);
  katana_smo_B.idx = katana_smo_B.nm1d2 - 1;
  for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.idx; katana_smo_B.f++)
  {
    lambda_->data[katana_smo_B.f] = 0.0;
  }

  katana_smo_B.f = lambda->size[0] * lambda->size[1];
  lambda->size[0] = 1;
  lambda->size[1] = katana_smo_B.b_i_b;
  katana_emxEnsureCapacity_real_T(lambda, katana_smo_B.f);
  katana_smo_B.loop_ub = katana_smo_B.b_i_b - 1;
  for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
       katana_smo_B.f++) {
    lambda->data[katana_smo_B.f] = 0.0;
  }

  katana_smo_emxInit_f_cell_wrap1(&Ic, 2);
  katana_smo_emxInit_f_cell_wrap1(&X, 2);
  katana_smo_B.f = Ic->size[0] * Ic->size[1];
  Ic->size[0] = 1;
  Ic->size[1] = katana_smo_B.nm1d2;
  emxEnsureCapacity_f_cell_wrap1(Ic, katana_smo_B.f);
  katana_smo_B.f = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = katana_smo_B.nm1d2;
  emxEnsureCapacity_f_cell_wrap1(X, katana_smo_B.f);
  for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b <= katana_smo_B.idx;
       katana_smo_B.b_i_b++) {
    for (katana_smo_B.f = 0; katana_smo_B.f < 36; katana_smo_B.f++) {
      Ic->data[katana_smo_B.b_i_b].f1[katana_smo_B.f] = robot->
        Bodies[katana_smo_B.b_i_b]->SpatialInertia[katana_smo_B.f];
    }

    katana_smo_B.vNum_o = robot->PositionDoFMap[katana_smo_B.b_i_b];
    katana_smo_B.p_idx_1 = robot->PositionDoFMap[katana_smo_B.b_i_b + 10];
    if (katana_smo_B.p_idx_1 < katana_smo_B.vNum_o) {
      obj = robot->Bodies[katana_smo_B.b_i_b];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, katana_smo_B.T_c);
    } else {
      if (katana_smo_B.vNum_o > katana_smo_B.p_idx_1) {
        katana_smo_B.nm1d2 = 0;
        katana_smo_B.f = -1;
      } else {
        katana_smo_B.nm1d2 = static_cast<int32_T>(katana_smo_B.vNum_o) - 1;
        katana_smo_B.f = static_cast<int32_T>(katana_smo_B.p_idx_1) - 1;
      }

      obj = robot->Bodies[katana_smo_B.b_i_b];
      katana_smo_B.loop_ub = katana_smo_B.f - katana_smo_B.nm1d2;
      katana_smo_B.q_size_f = katana_smo_B.loop_ub + 1;
      for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
           katana_smo_B.f++) {
        katana_smo_B.q_data_b[katana_smo_B.f] = q[katana_smo_B.nm1d2 +
          katana_smo_B.f];
      }

      rigidBodyJoint_transformBodyT_g(&obj->JointInternal, katana_smo_B.q_data_b,
        &katana_smo_B.q_size_f, katana_smo_B.T_c);
    }

    katana_smo_tforminv(katana_smo_B.T_c, katana_smo_B.dv);
    katana_smo_tformToSpatialXform(katana_smo_B.dv, X->data[katana_smo_B.b_i_b].
      f1);
  }

  katana_smo_B.nm1d2 = static_cast<int32_T>(((-1.0 - katana_smo_B.nb_o) + 1.0) /
    -1.0) - 1;
  katana_smo_emxInit_real_T(&Si, 2);
  katana_smo_emxInit_real_T(&Fi, 2);
  katana_smo_emxInit_real_T(&Hji, 2);
  katana_smo_emxInit_char_T(&a, 2);
  for (katana_smo_B.idx = 0; katana_smo_B.idx <= katana_smo_B.nm1d2;
       katana_smo_B.idx++) {
    katana_smo_B.n_a = static_cast<int32_T>(katana_smo_B.nb_o +
      -static_cast<real_T>(katana_smo_B.idx));
    katana_smo_B.pid_tmp = katana_smo_B.n_a - 1;
    katana_smo_B.pid = robot->Bodies[katana_smo_B.pid_tmp]->ParentIndex;
    katana_smo_B.vNum_o = robot->VelocityDoFMap[katana_smo_B.n_a - 1];
    katana_smo_B.p_idx_1 = robot->VelocityDoFMap[katana_smo_B.n_a + 9];
    if (katana_smo_B.pid > 0.0) {
      for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
        for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < 6; katana_smo_B.b_i_b
             ++) {
          katana_smo_B.X_tmp = katana_smo_B.f + 6 * katana_smo_B.b_i_b;
          katana_smo_B.X[katana_smo_B.X_tmp] = 0.0;
          for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub < 6;
               katana_smo_B.loop_ub++) {
            katana_smo_B.X[katana_smo_B.X_tmp] += X->data[katana_smo_B.pid_tmp].
              f1[6 * katana_smo_B.f + katana_smo_B.loop_ub] * Ic->
              data[katana_smo_B.pid_tmp].f1[6 * katana_smo_B.b_i_b +
              katana_smo_B.loop_ub];
          }
        }
      }

      for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
        for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < 6; katana_smo_B.b_i_b
             ++) {
          katana_smo_B.b_idx_0_i = 0.0;
          for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub < 6;
               katana_smo_B.loop_ub++) {
            katana_smo_B.b_idx_0_i += katana_smo_B.X[6 * katana_smo_B.loop_ub +
              katana_smo_B.f] * X->data[katana_smo_B.pid_tmp].f1[6 *
              katana_smo_B.b_i_b + katana_smo_B.loop_ub];
          }

          katana_smo_B.loop_ub = 6 * katana_smo_B.b_i_b + katana_smo_B.f;
          Ic->data[static_cast<int32_T>(katana_smo_B.pid) - 1]
            .f1[katana_smo_B.loop_ub] += katana_smo_B.b_idx_0_i;
        }
      }

      lambda_->data[katana_smo_B.pid_tmp] = katana_smo_B.pid;
      exitg1 = false;
      while ((!exitg1) && (lambda_->data[katana_smo_B.pid_tmp] > 0.0)) {
        obj = robot->Bodies[static_cast<int32_T>(lambda_->
          data[katana_smo_B.pid_tmp]) - 1];
        katana_smo_B.f = a->size[0] * a->size[1];
        a->size[0] = 1;
        a->size[1] = obj->JointInternal.Type->size[1];
        katana_emxEnsureCapacity_char_T(a, katana_smo_B.f);
        katana_smo_B.loop_ub = obj->JointInternal.Type->size[0] *
          obj->JointInternal.Type->size[1] - 1;
        for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
             katana_smo_B.f++) {
          a->data[katana_smo_B.f] = obj->JointInternal.Type->data[katana_smo_B.f];
        }

        for (katana_smo_B.f = 0; katana_smo_B.f < 5; katana_smo_B.f++) {
          katana_smo_B.b_mc[katana_smo_B.f] = tmp[katana_smo_B.f];
        }

        katana_smo_B.b_bool_j = false;
        if (a->size[1] == 5) {
          katana_smo_B.f = 1;
          do {
            exitg2 = 0;
            if (katana_smo_B.f - 1 < 5) {
              katana_smo_B.b_i_b = katana_smo_B.f - 1;
              if (a->data[katana_smo_B.b_i_b] !=
                  katana_smo_B.b_mc[katana_smo_B.b_i_b]) {
                exitg2 = 1;
              } else {
                katana_smo_B.f++;
              }
            } else {
              katana_smo_B.b_bool_j = true;
              exitg2 = 1;
            }
          } while (exitg2 == 0);
        }

        if (katana_smo_B.b_bool_j) {
          lambda_->data[katana_smo_B.pid_tmp] = robot->Bodies
            [static_cast<int32_T>(lambda_->data[katana_smo_B.pid_tmp]) - 1]
            ->ParentIndex;
        } else {
          exitg1 = true;
        }
      }
    }

    katana_smo_B.b_idx_0_i = robot->VelocityDoFMap[katana_smo_B.n_a - 1];
    katana_smo_B.b_idx_1_f = robot->VelocityDoFMap[katana_smo_B.n_a + 9];
    if (katana_smo_B.b_idx_0_i <= katana_smo_B.b_idx_1_f) {
      obj = robot->Bodies[katana_smo_B.pid_tmp];
      katana_smo_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
      katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f);
      katana_smo_B.loop_ub = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
           katana_smo_B.f++) {
        Si->data[katana_smo_B.f] = obj->JointInternal.MotionSubspace->
          data[katana_smo_B.f];
      }

      katana_smo_B.n_a = Si->size[1] - 1;
      katana_smo_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = Si->size[1];
      katana_emxEnsureCapacity_real_T(Fi, katana_smo_B.f);
      for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub <= katana_smo_B.n_a;
           katana_smo_B.loop_ub++) {
        katana_smo_B.coffset_tmp = katana_smo_B.loop_ub * 6 - 1;
        for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < 6; katana_smo_B.b_i_b
             ++) {
          katana_smo_B.s = 0.0;
          for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
            katana_smo_B.s += Ic->data[katana_smo_B.pid_tmp].f1[katana_smo_B.f *
              6 + katana_smo_B.b_i_b] * Si->data[(katana_smo_B.coffset_tmp +
              katana_smo_B.f) + 1];
          }

          Fi->data[(katana_smo_B.coffset_tmp + katana_smo_B.b_i_b) + 1] =
            katana_smo_B.s;
        }
      }

      if (katana_smo_B.vNum_o > katana_smo_B.p_idx_1) {
        katana_smo_B.coffset_tmp = 0;
        katana_smo_B.cb = 0;
      } else {
        katana_smo_B.coffset_tmp = static_cast<int32_T>(katana_smo_B.vNum_o) - 1;
        katana_smo_B.cb = static_cast<int32_T>(katana_smo_B.vNum_o) - 1;
      }

      katana_smo_B.m_g = Si->size[1];
      katana_smo_B.n_a = Fi->size[1] - 1;
      katana_smo_B.f = Hji->size[0] * Hji->size[1];
      Hji->size[0] = Si->size[1];
      Hji->size[1] = Fi->size[1];
      katana_emxEnsureCapacity_real_T(Hji, katana_smo_B.f);
      for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub <= katana_smo_B.n_a;
           katana_smo_B.loop_ub++) {
        katana_smo_B.coffset = katana_smo_B.loop_ub * katana_smo_B.m_g - 1;
        katana_smo_B.boffset = katana_smo_B.loop_ub * 6 - 1;
        for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < katana_smo_B.m_g;
             katana_smo_B.b_i_b++) {
          katana_smo_B.aoffset_e = katana_smo_B.b_i_b * 6 - 1;
          katana_smo_B.s = 0.0;
          for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
            katana_smo_B.X_tmp = katana_smo_B.f + 1;
            katana_smo_B.s += Si->data[katana_smo_B.aoffset_e +
              katana_smo_B.X_tmp] * Fi->data[katana_smo_B.boffset +
              katana_smo_B.X_tmp];
          }

          Hji->data[(katana_smo_B.coffset + katana_smo_B.b_i_b) + 1] =
            katana_smo_B.s;
        }
      }

      katana_smo_B.loop_ub = Hji->size[1];
      for (katana_smo_B.f = 0; katana_smo_B.f < katana_smo_B.loop_ub;
           katana_smo_B.f++) {
        katana_smo_B.n_a = Hji->size[0];
        for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < katana_smo_B.n_a;
             katana_smo_B.b_i_b++) {
          H->data[(katana_smo_B.coffset_tmp + katana_smo_B.b_i_b) + H->size[0] *
            (katana_smo_B.cb + katana_smo_B.f)] = Hji->data[Hji->size[0] *
            katana_smo_B.f + katana_smo_B.b_i_b];
        }
      }

      katana_smo_B.n_a = Fi->size[1];
      katana_smo_B.f = Si->size[0] * Si->size[1];
      Si->size[0] = 6;
      Si->size[1] = Fi->size[1];
      katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f);
      katana_smo_B.loop_ub = Fi->size[0] * Fi->size[1] - 1;
      for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
           katana_smo_B.f++) {
        Si->data[katana_smo_B.f] = Fi->data[katana_smo_B.f];
      }

      katana_smo_B.f = Fi->size[0] * Fi->size[1];
      Fi->size[0] = 6;
      Fi->size[1] = katana_smo_B.n_a;
      katana_emxEnsureCapacity_real_T(Fi, katana_smo_B.f);
      for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub < katana_smo_B.n_a;
           katana_smo_B.loop_ub++) {
        katana_smo_B.coffset_tmp = katana_smo_B.loop_ub * 6 - 1;
        for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < 6; katana_smo_B.b_i_b
             ++) {
          katana_smo_B.aoffset_e = katana_smo_B.b_i_b * 6 - 1;
          katana_smo_B.s = 0.0;
          for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
            katana_smo_B.X_tmp = katana_smo_B.f + 1;
            katana_smo_B.s += X->data[katana_smo_B.pid_tmp]
              .f1[katana_smo_B.aoffset_e + katana_smo_B.X_tmp] * Si->
              data[katana_smo_B.coffset_tmp + katana_smo_B.X_tmp];
          }

          Fi->data[(katana_smo_B.coffset_tmp + katana_smo_B.b_i_b) + 1] =
            katana_smo_B.s;
        }
      }

      while (katana_smo_B.pid > 0.0) {
        katana_smo_B.b_i_b = static_cast<int32_T>(katana_smo_B.pid);
        katana_smo_B.pid_tmp = katana_smo_B.b_i_b - 1;
        obj = robot->Bodies[katana_smo_B.pid_tmp];
        katana_smo_B.f = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = obj->JointInternal.MotionSubspace->size[1];
        katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f);
        katana_smo_B.loop_ub = obj->JointInternal.MotionSubspace->size[0] *
          obj->JointInternal.MotionSubspace->size[1] - 1;
        for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
             katana_smo_B.f++) {
          Si->data[katana_smo_B.f] = obj->JointInternal.MotionSubspace->
            data[katana_smo_B.f];
        }

        katana_smo_B.b_idx_0_i = robot->VelocityDoFMap[katana_smo_B.b_i_b - 1];
        katana_smo_B.b_idx_1_f = robot->VelocityDoFMap[katana_smo_B.b_i_b + 9];
        if (katana_smo_B.b_idx_0_i <= katana_smo_B.b_idx_1_f) {
          katana_smo_B.m_g = Si->size[1];
          katana_smo_B.n_a = Fi->size[1] - 1;
          katana_smo_B.f = Hji->size[0] * Hji->size[1];
          Hji->size[0] = Si->size[1];
          Hji->size[1] = Fi->size[1];
          katana_emxEnsureCapacity_real_T(Hji, katana_smo_B.f);
          for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub <=
               katana_smo_B.n_a; katana_smo_B.loop_ub++) {
            katana_smo_B.coffset = katana_smo_B.loop_ub * katana_smo_B.m_g - 1;
            katana_smo_B.boffset = katana_smo_B.loop_ub * 6 - 1;
            for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < katana_smo_B.m_g;
                 katana_smo_B.b_i_b++) {
              katana_smo_B.aoffset_e = katana_smo_B.b_i_b * 6 - 1;
              katana_smo_B.s = 0.0;
              for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
                katana_smo_B.X_tmp = katana_smo_B.f + 1;
                katana_smo_B.s += Si->data[katana_smo_B.aoffset_e +
                  katana_smo_B.X_tmp] * Fi->data[katana_smo_B.boffset +
                  katana_smo_B.X_tmp];
              }

              Hji->data[(katana_smo_B.coffset + katana_smo_B.b_i_b) + 1] =
                katana_smo_B.s;
            }
          }

          if (katana_smo_B.b_idx_0_i > katana_smo_B.b_idx_1_f) {
            katana_smo_B.X_tmp = 0;
          } else {
            katana_smo_B.X_tmp = static_cast<int32_T>(katana_smo_B.b_idx_0_i) -
              1;
          }

          if (katana_smo_B.vNum_o > katana_smo_B.p_idx_1) {
            katana_smo_B.coffset_tmp = 0;
          } else {
            katana_smo_B.coffset_tmp = static_cast<int32_T>(katana_smo_B.vNum_o)
              - 1;
          }

          katana_smo_B.loop_ub = Hji->size[1];
          for (katana_smo_B.f = 0; katana_smo_B.f < katana_smo_B.loop_ub;
               katana_smo_B.f++) {
            katana_smo_B.n_a = Hji->size[0];
            for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < katana_smo_B.n_a;
                 katana_smo_B.b_i_b++) {
              H->data[(katana_smo_B.X_tmp + katana_smo_B.b_i_b) + H->size[0] *
                (katana_smo_B.coffset_tmp + katana_smo_B.f)] = Hji->data
                [Hji->size[0] * katana_smo_B.f + katana_smo_B.b_i_b];
            }
          }

          if (katana_smo_B.vNum_o > katana_smo_B.p_idx_1) {
            katana_smo_B.X_tmp = 0;
          } else {
            katana_smo_B.X_tmp = static_cast<int32_T>(katana_smo_B.vNum_o) - 1;
          }

          if (katana_smo_B.b_idx_0_i > katana_smo_B.b_idx_1_f) {
            katana_smo_B.coffset_tmp = 0;
          } else {
            katana_smo_B.coffset_tmp = static_cast<int32_T>
              (katana_smo_B.b_idx_0_i) - 1;
          }

          katana_smo_B.loop_ub = Hji->size[0];
          for (katana_smo_B.f = 0; katana_smo_B.f < katana_smo_B.loop_ub;
               katana_smo_B.f++) {
            katana_smo_B.n_a = Hji->size[1];
            for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < katana_smo_B.n_a;
                 katana_smo_B.b_i_b++) {
              H->data[(katana_smo_B.X_tmp + katana_smo_B.b_i_b) + H->size[0] *
                (katana_smo_B.coffset_tmp + katana_smo_B.f)] = Hji->data
                [Hji->size[0] * katana_smo_B.b_i_b + katana_smo_B.f];
            }
          }
        }

        katana_smo_B.n_a = Fi->size[1];
        katana_smo_B.f = Si->size[0] * Si->size[1];
        Si->size[0] = 6;
        Si->size[1] = Fi->size[1];
        katana_emxEnsureCapacity_real_T(Si, katana_smo_B.f);
        katana_smo_B.loop_ub = Fi->size[0] * Fi->size[1] - 1;
        for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
             katana_smo_B.f++) {
          Si->data[katana_smo_B.f] = Fi->data[katana_smo_B.f];
        }

        katana_smo_B.f = Fi->size[0] * Fi->size[1];
        Fi->size[0] = 6;
        Fi->size[1] = katana_smo_B.n_a;
        katana_emxEnsureCapacity_real_T(Fi, katana_smo_B.f);
        for (katana_smo_B.loop_ub = 0; katana_smo_B.loop_ub < katana_smo_B.n_a;
             katana_smo_B.loop_ub++) {
          katana_smo_B.coffset_tmp = katana_smo_B.loop_ub * 6 - 1;
          for (katana_smo_B.b_i_b = 0; katana_smo_B.b_i_b < 6;
               katana_smo_B.b_i_b++) {
            katana_smo_B.aoffset_e = katana_smo_B.b_i_b * 6 - 1;
            katana_smo_B.s = 0.0;
            for (katana_smo_B.f = 0; katana_smo_B.f < 6; katana_smo_B.f++) {
              katana_smo_B.X_tmp = katana_smo_B.f + 1;
              katana_smo_B.s += X->data[katana_smo_B.pid_tmp]
                .f1[katana_smo_B.aoffset_e + katana_smo_B.X_tmp] * Si->
                data[katana_smo_B.coffset_tmp + katana_smo_B.X_tmp];
            }

            Fi->data[(katana_smo_B.coffset_tmp + katana_smo_B.b_i_b) + 1] =
              katana_smo_B.s;
          }
        }

        katana_smo_B.pid = robot->Bodies[katana_smo_B.pid_tmp]->ParentIndex;
      }
    }
  }

  katana_smo_emxFree_char_T(&a);
  katana_smo_emxFree_real_T(&Hji);
  katana_smo_emxFree_real_T(&Fi);
  katana_smo_emxFree_real_T(&Si);
  katana_smo_emxFree_f_cell_wrap1(&X);
  katana_smo_emxFree_f_cell_wrap1(&Ic);
  for (katana_smo_B.f = 0; katana_smo_B.f < 10; katana_smo_B.f++) {
    katana_smo_B.mask[katana_smo_B.f] = (robot->VelocityDoFMap[katana_smo_B.f] <=
      robot->VelocityDoFMap[katana_smo_B.f + 10]);
  }

  katana_smo_B.idx = 0;
  katana_smo_B.f = 1;
  exitg1 = false;
  while ((!exitg1) && (katana_smo_B.f - 1 < 10)) {
    if (katana_smo_B.mask[katana_smo_B.f - 1]) {
      katana_smo_B.idx++;
      katana_smo_B.ii_data[katana_smo_B.idx - 1] = katana_smo_B.f;
      if (katana_smo_B.idx >= 10) {
        exitg1 = true;
      } else {
        katana_smo_B.f++;
      }
    } else {
      katana_smo_B.f++;
    }
  }

  if (1 > katana_smo_B.idx) {
    katana_smo_B.idx = 0;
  }

  for (katana_smo_B.f = 0; katana_smo_B.f < katana_smo_B.idx; katana_smo_B.f++)
  {
    katana_smo_B.nonFixedIndices_data[katana_smo_B.f] =
      katana_smo_B.ii_data[katana_smo_B.f];
  }

  katana_smo_B.b_i_b = katana_smo_B.idx - 1;
  katana_smo_emxInit_real_T(&s, 2);
  for (katana_smo_B.idx = 0; katana_smo_B.idx <= katana_smo_B.b_i_b;
       katana_smo_B.idx++) {
    katana_smo_B.vNum_o = robot->
      VelocityDoFMap[katana_smo_B.nonFixedIndices_data[katana_smo_B.idx] - 1];
    katana_smo_B.p_idx_1 = robot->
      VelocityDoFMap[katana_smo_B.nonFixedIndices_data[katana_smo_B.idx] + 9];
    if (rtIsNaN(katana_smo_B.vNum_o) || rtIsNaN(katana_smo_B.p_idx_1)) {
      katana_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      katana_emxEnsureCapacity_real_T(s, katana_smo_B.f);
      s->data[0] = (rtNaN);
    } else if (katana_smo_B.p_idx_1 < katana_smo_B.vNum_o) {
      s->size[0] = 1;
      s->size[1] = 0;
    } else if ((rtIsInf(katana_smo_B.vNum_o) || rtIsInf(katana_smo_B.p_idx_1)) &&
               (katana_smo_B.vNum_o == katana_smo_B.p_idx_1)) {
      katana_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = 1;
      katana_emxEnsureCapacity_real_T(s, katana_smo_B.f);
      s->data[0] = (rtNaN);
    } else if (floor(katana_smo_B.vNum_o) == katana_smo_B.vNum_o) {
      katana_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      katana_smo_B.loop_ub = static_cast<int32_T>(floor(katana_smo_B.p_idx_1 -
        katana_smo_B.vNum_o));
      s->size[1] = katana_smo_B.loop_ub + 1;
      katana_emxEnsureCapacity_real_T(s, katana_smo_B.f);
      for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
           katana_smo_B.f++) {
        s->data[katana_smo_B.f] = katana_smo_B.vNum_o + static_cast<real_T>
          (katana_smo_B.f);
      }
    } else {
      katana_smo_B.nb_o = floor((katana_smo_B.p_idx_1 - katana_smo_B.vNum_o) +
        0.5);
      katana_smo_B.pid = katana_smo_B.vNum_o + katana_smo_B.nb_o;
      katana_smo_B.b_idx_0_i = katana_smo_B.pid - katana_smo_B.p_idx_1;
      katana_smo_B.b_idx_1_f = fabs(katana_smo_B.vNum_o);
      katana_smo_B.s = fabs(katana_smo_B.p_idx_1);
      if ((katana_smo_B.b_idx_1_f > katana_smo_B.s) || rtIsNaN(katana_smo_B.s))
      {
        katana_smo_B.s = katana_smo_B.b_idx_1_f;
      }

      if (fabs(katana_smo_B.b_idx_0_i) < 4.4408920985006262E-16 * katana_smo_B.s)
      {
        katana_smo_B.nb_o++;
        katana_smo_B.pid = katana_smo_B.p_idx_1;
      } else if (katana_smo_B.b_idx_0_i > 0.0) {
        katana_smo_B.pid = (katana_smo_B.nb_o - 1.0) + katana_smo_B.vNum_o;
      } else {
        katana_smo_B.nb_o++;
      }

      if (katana_smo_B.nb_o >= 0.0) {
        katana_smo_B.f = static_cast<int32_T>(katana_smo_B.nb_o);
      } else {
        katana_smo_B.f = 0;
      }

      katana_smo_B.n_a = katana_smo_B.f - 1;
      katana_smo_B.f = s->size[0] * s->size[1];
      s->size[0] = 1;
      s->size[1] = katana_smo_B.n_a + 1;
      katana_emxEnsureCapacity_real_T(s, katana_smo_B.f);
      if (katana_smo_B.n_a + 1 > 0) {
        s->data[0] = katana_smo_B.vNum_o;
        if (katana_smo_B.n_a + 1 > 1) {
          s->data[katana_smo_B.n_a] = katana_smo_B.pid;
          katana_smo_B.nm1d2 = katana_smo_B.n_a / 2;
          katana_smo_B.loop_ub = katana_smo_B.nm1d2 - 2;
          for (katana_smo_B.f = 0; katana_smo_B.f <= katana_smo_B.loop_ub;
               katana_smo_B.f++) {
            katana_smo_B.X_tmp = katana_smo_B.f + 1;
            s->data[katana_smo_B.X_tmp] = katana_smo_B.vNum_o + static_cast<
              real_T>(katana_smo_B.X_tmp);
            s->data[katana_smo_B.n_a - katana_smo_B.X_tmp] = katana_smo_B.pid -
              static_cast<real_T>(katana_smo_B.X_tmp);
          }

          if (katana_smo_B.nm1d2 << 1 == katana_smo_B.n_a) {
            s->data[katana_smo_B.nm1d2] = (katana_smo_B.vNum_o +
              katana_smo_B.pid) / 2.0;
          } else {
            s->data[katana_smo_B.nm1d2] = katana_smo_B.vNum_o +
              static_cast<real_T>(katana_smo_B.nm1d2);
            s->data[katana_smo_B.nm1d2 + 1] = katana_smo_B.pid -
              static_cast<real_T>(katana_smo_B.nm1d2);
          }
        }
      }
    }

    if (katana_smo_B.vNum_o > katana_smo_B.p_idx_1) {
      katana_smo_B.nm1d2 = 0;
    } else {
      katana_smo_B.nm1d2 = static_cast<int32_T>(katana_smo_B.vNum_o) - 1;
    }

    katana_smo_B.loop_ub = s->size[1];
    for (katana_smo_B.f = 0; katana_smo_B.f < katana_smo_B.loop_ub;
         katana_smo_B.f++) {
      lambda->data[katana_smo_B.nm1d2 + katana_smo_B.f] = s->data[katana_smo_B.f]
        - 1.0;
    }

    if (lambda_->data[katana_smo_B.nonFixedIndices_data[katana_smo_B.idx] - 1] ==
        0.0) {
      lambda->data[static_cast<int32_T>(katana_smo_B.vNum_o) - 1] = 0.0;
    } else {
      katana_smo_B.f = static_cast<int32_T>(lambda_->
        data[katana_smo_B.nonFixedIndices_data[katana_smo_B.idx] - 1]);
      katana_smo_B.b_idx_1_f = robot->VelocityDoFMap[katana_smo_B.f + 9];
      lambda->data[static_cast<int32_T>(katana_smo_B.vNum_o) - 1] =
        katana_smo_B.b_idx_1_f;
    }
  }

  katana_smo_emxFree_real_T(&s);
  katana_smo_emxFree_real_T(&lambda_);
}

static void RigidBodyTreeDynamics_inverseDy(t_robotics_manip_internal__gl_T
  *robot, const real_T q[7], const real_T qdot[7], const real_T fext[60], real_T
  tau[7])
{
  emxArray_f_cell_wrap_katana_g_T *X;
  emxArray_f_cell_wrap_katana_g_T *Xtree;
  emxArray_real_T_katana_smo_T *vJ;
  emxArray_real_T_katana_smo_T *vB;
  emxArray_real_T_katana_smo_T *aB;
  emxArray_real_T_katana_smo_T *f;
  emxArray_real_T_katana_smo_T *S;
  emxArray_real_T_katana_smo_T *taui;
  r_robotics_manip_internal_R_g_T *obj;
  emxArray_char_T_katana_smo_T *a;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  katana_smo_B.a0[0] = 0.0;
  katana_smo_B.a0[1] = 0.0;
  katana_smo_B.a0[2] = 0.0;
  katana_smo_B.a0[3] = -robot->Gravity[0];
  katana_smo_B.a0[4] = -robot->Gravity[1];
  katana_smo_B.a0[5] = -robot->Gravity[2];
  katana_smo_emxInit_real_T(&vJ, 2);
  katana_smo_B.nb = robot->NumBodies;
  katana_smo_B.i_a = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  katana_smo_B.unnamed_idx_1 = static_cast<int32_T>(katana_smo_B.nb);
  vJ->size[1] = katana_smo_B.unnamed_idx_1;
  katana_emxEnsureCapacity_real_T(vJ, katana_smo_B.i_a);
  katana_smo_B.loop_ub_tmp = 6 * katana_smo_B.unnamed_idx_1 - 1;
  for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.loop_ub_tmp;
       katana_smo_B.i_a++) {
    vJ->data[katana_smo_B.i_a] = 0.0;
  }

  katana_smo_emxInit_real_T(&vB, 2);
  katana_smo_B.i_a = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = katana_smo_B.unnamed_idx_1;
  katana_emxEnsureCapacity_real_T(vB, katana_smo_B.i_a);
  for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.loop_ub_tmp;
       katana_smo_B.i_a++) {
    vB->data[katana_smo_B.i_a] = 0.0;
  }

  katana_smo_emxInit_real_T(&aB, 2);
  katana_smo_B.i_a = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = katana_smo_B.unnamed_idx_1;
  katana_emxEnsureCapacity_real_T(aB, katana_smo_B.i_a);
  for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.loop_ub_tmp;
       katana_smo_B.i_a++) {
    aB->data[katana_smo_B.i_a] = 0.0;
  }

  for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 7; katana_smo_B.i_a++) {
    tau[katana_smo_B.i_a] = 0.0;
  }

  katana_smo_emxInit_f_cell_wrap1(&X, 2);
  katana_smo_emxInit_f_cell_wrap1(&Xtree, 2);
  katana_smo_B.loop_ub_tmp = katana_smo_B.unnamed_idx_1 - 1;
  katana_smo_B.i_a = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = katana_smo_B.unnamed_idx_1;
  emxEnsureCapacity_f_cell_wrap1(Xtree, katana_smo_B.i_a);
  katana_smo_B.i_a = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = katana_smo_B.unnamed_idx_1;
  emxEnsureCapacity_f_cell_wrap1(X, katana_smo_B.i_a);
  for (katana_smo_B.b_k = 0; katana_smo_B.b_k <= katana_smo_B.loop_ub_tmp;
       katana_smo_B.b_k++) {
    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 36; katana_smo_B.i_a++) {
      Xtree->data[katana_smo_B.b_k].f1[katana_smo_B.i_a] = 0.0;
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
      Xtree->data[katana_smo_B.b_k].f1[katana_smo_B.i_a + 6 * katana_smo_B.i_a] =
        1.0;
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 36; katana_smo_B.i_a++) {
      X->data[katana_smo_B.b_k].f1[katana_smo_B.i_a] = 0.0;
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
      X->data[katana_smo_B.b_k].f1[katana_smo_B.i_a + 6 * katana_smo_B.i_a] =
        1.0;
    }
  }

  katana_smo_emxInit_real_T(&f, 2);
  katana_smo_B.i_a = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = katana_smo_B.unnamed_idx_1;
  katana_emxEnsureCapacity_real_T(f, katana_smo_B.i_a);
  katana_smo_emxInit_real_T(&S, 2);
  if (0 <= katana_smo_B.loop_ub_tmp) {
    katana_smo_B.dv2[0] = 0.0;
    katana_smo_B.dv2[4] = 0.0;
    katana_smo_B.dv2[8] = 0.0;
  }

  for (katana_smo_B.unnamed_idx_1 = 0; katana_smo_B.unnamed_idx_1 <=
       katana_smo_B.loop_ub_tmp; katana_smo_B.unnamed_idx_1++) {
    obj = robot->Bodies[katana_smo_B.unnamed_idx_1];
    katana_smo_B.i_a = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj->JointInternal.MotionSubspace->size[1];
    katana_emxEnsureCapacity_real_T(S, katana_smo_B.i_a);
    katana_smo_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
      obj->JointInternal.MotionSubspace->size[1] - 1;
    for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.b_k;
         katana_smo_B.i_a++) {
      S->data[katana_smo_B.i_a] = obj->JointInternal.MotionSubspace->
        data[katana_smo_B.i_a];
    }

    katana_smo_B.a_idx_0 = robot->PositionDoFMap[katana_smo_B.unnamed_idx_1];
    katana_smo_B.a_idx_1 = robot->PositionDoFMap[katana_smo_B.unnamed_idx_1 + 10];
    katana_smo_B.b_idx_0 = robot->VelocityDoFMap[katana_smo_B.unnamed_idx_1];
    katana_smo_B.b_idx_1 = robot->VelocityDoFMap[katana_smo_B.unnamed_idx_1 + 10];
    if (katana_smo_B.a_idx_1 < katana_smo_B.a_idx_0) {
      obj = robot->Bodies[katana_smo_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj->JointInternal, katana_smo_B.T);
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        vJ->data[katana_smo_B.i_a + 6 * katana_smo_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (katana_smo_B.a_idx_0 > katana_smo_B.a_idx_1) {
        katana_smo_B.b_k = 0;
        katana_smo_B.i_a = -1;
      } else {
        katana_smo_B.b_k = static_cast<int32_T>(katana_smo_B.a_idx_0) - 1;
        katana_smo_B.i_a = static_cast<int32_T>(katana_smo_B.a_idx_1) - 1;
      }

      if (katana_smo_B.b_idx_0 > katana_smo_B.b_idx_1) {
        katana_smo_B.p = -1;
      } else {
        katana_smo_B.p = static_cast<int32_T>(katana_smo_B.b_idx_0) - 2;
      }

      obj = robot->Bodies[katana_smo_B.unnamed_idx_1];
      katana_smo_B.q_size_tmp = katana_smo_B.i_a - katana_smo_B.b_k;
      katana_smo_B.q_size = katana_smo_B.q_size_tmp + 1;
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.q_size_tmp;
           katana_smo_B.i_a++) {
        katana_smo_B.q_data[katana_smo_B.i_a] = q[katana_smo_B.b_k +
          katana_smo_B.i_a];
      }

      rigidBodyJoint_transformBodyT_g(&obj->JointInternal, katana_smo_B.q_data,
        &katana_smo_B.q_size, katana_smo_B.T);
      katana_smo_B.inner = S->size[1] - 1;
      for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
        vJ->data[katana_smo_B.b_k + 6 * katana_smo_B.unnamed_idx_1] = 0.0;
      }

      for (katana_smo_B.b_k = 0; katana_smo_B.b_k <= katana_smo_B.inner;
           katana_smo_B.b_k++) {
        katana_smo_B.aoffset = katana_smo_B.b_k * 6 - 1;
        for (katana_smo_B.q_size_tmp = 0; katana_smo_B.q_size_tmp < 6;
             katana_smo_B.q_size_tmp++) {
          katana_smo_B.i_a = 6 * katana_smo_B.unnamed_idx_1 +
            katana_smo_B.q_size_tmp;
          vJ->data[katana_smo_B.i_a] += S->data[(katana_smo_B.aoffset +
            katana_smo_B.q_size_tmp) + 1] * qdot[(katana_smo_B.p +
            katana_smo_B.b_k) + 1];
        }
      }
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
      katana_smo_B.R_j[3 * katana_smo_B.i_a] = katana_smo_B.T[katana_smo_B.i_a];
      katana_smo_B.R_j[3 * katana_smo_B.i_a + 1] =
        katana_smo_B.T[katana_smo_B.i_a + 4];
      katana_smo_B.R_j[3 * katana_smo_B.i_a + 2] =
        katana_smo_B.T[katana_smo_B.i_a + 8];
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 9; katana_smo_B.i_a++) {
      katana_smo_B.R_d[katana_smo_B.i_a] = -katana_smo_B.R_j[katana_smo_B.i_a];
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
      katana_smo_B.b_k = katana_smo_B.i_a << 2;
      katana_smo_B.Tinv[katana_smo_B.b_k] = katana_smo_B.R_j[3 *
        katana_smo_B.i_a];
      katana_smo_B.Tinv[katana_smo_B.b_k + 1] = katana_smo_B.R_j[3 *
        katana_smo_B.i_a + 1];
      katana_smo_B.Tinv[katana_smo_B.b_k + 2] = katana_smo_B.R_j[3 *
        katana_smo_B.i_a + 2];
      katana_smo_B.Tinv[katana_smo_B.i_a + 12] =
        katana_smo_B.R_d[katana_smo_B.i_a + 6] * katana_smo_B.T[14] +
        (katana_smo_B.R_d[katana_smo_B.i_a + 3] * katana_smo_B.T[13] +
         katana_smo_B.R_d[katana_smo_B.i_a] * katana_smo_B.T[12]);
    }

    katana_smo_B.Tinv[3] = 0.0;
    katana_smo_B.Tinv[7] = 0.0;
    katana_smo_B.Tinv[11] = 0.0;
    katana_smo_B.Tinv[15] = 1.0;
    katana_smo_B.dv2[3] = -katana_smo_B.Tinv[14];
    katana_smo_B.dv2[6] = katana_smo_B.Tinv[13];
    katana_smo_B.dv2[1] = katana_smo_B.Tinv[14];
    katana_smo_B.dv2[7] = -katana_smo_B.Tinv[12];
    katana_smo_B.dv2[2] = -katana_smo_B.Tinv[13];
    katana_smo_B.dv2[5] = katana_smo_B.Tinv[12];
    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
      for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 3; katana_smo_B.b_k++) {
        katana_smo_B.q_size_tmp = katana_smo_B.i_a + 3 * katana_smo_B.b_k;
        katana_smo_B.R_j[katana_smo_B.q_size_tmp] = 0.0;
        katana_smo_B.p = katana_smo_B.b_k << 2;
        katana_smo_B.R_j[katana_smo_B.q_size_tmp] +=
          katana_smo_B.Tinv[katana_smo_B.p] * katana_smo_B.dv2[katana_smo_B.i_a];
        katana_smo_B.R_j[katana_smo_B.q_size_tmp] +=
          katana_smo_B.Tinv[katana_smo_B.p + 1] *
          katana_smo_B.dv2[katana_smo_B.i_a + 3];
        katana_smo_B.R_j[katana_smo_B.q_size_tmp] +=
          katana_smo_B.Tinv[katana_smo_B.p + 2] *
          katana_smo_B.dv2[katana_smo_B.i_a + 6];
        X->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.b_k + 6 *
          katana_smo_B.i_a] = katana_smo_B.Tinv[(katana_smo_B.i_a << 2) +
          katana_smo_B.b_k];
        X->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.b_k + 6 *
          (katana_smo_B.i_a + 3)] = 0.0;
      }
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
      X->data[katana_smo_B.unnamed_idx_1].f1[6 * katana_smo_B.i_a + 3] =
        katana_smo_B.R_j[3 * katana_smo_B.i_a];
      katana_smo_B.b_k = katana_smo_B.i_a << 2;
      katana_smo_B.q_size_tmp = 6 * (katana_smo_B.i_a + 3);
      X->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.q_size_tmp + 3] =
        katana_smo_B.Tinv[katana_smo_B.b_k];
      X->data[katana_smo_B.unnamed_idx_1].f1[6 * katana_smo_B.i_a + 4] =
        katana_smo_B.R_j[3 * katana_smo_B.i_a + 1];
      X->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.q_size_tmp + 4] =
        katana_smo_B.Tinv[katana_smo_B.b_k + 1];
      X->data[katana_smo_B.unnamed_idx_1].f1[6 * katana_smo_B.i_a + 5] =
        katana_smo_B.R_j[3 * katana_smo_B.i_a + 2];
      X->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.q_size_tmp + 5] =
        katana_smo_B.Tinv[katana_smo_B.b_k + 2];
    }

    katana_smo_B.a_idx_0 = robot->Bodies[katana_smo_B.unnamed_idx_1]
      ->ParentIndex;
    if (katana_smo_B.a_idx_0 > 0.0) {
      katana_smo_B.m = static_cast<int32_T>(katana_smo_B.a_idx_0);
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        katana_smo_B.a_idx_1 = 0.0;
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.a_idx_1 += vB->data[(katana_smo_B.m - 1) * 6 +
            katana_smo_B.b_k] * X->data[katana_smo_B.unnamed_idx_1].f1[6 *
            katana_smo_B.b_k + katana_smo_B.i_a];
        }

        katana_smo_B.y[katana_smo_B.i_a] = vJ->data[6 *
          katana_smo_B.unnamed_idx_1 + katana_smo_B.i_a] + katana_smo_B.a_idx_1;
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        vB->data[katana_smo_B.i_a + 6 * katana_smo_B.unnamed_idx_1] =
          katana_smo_B.y[katana_smo_B.i_a];
      }

      katana_smo_B.inner = S->size[1] - 1;
      for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
        katana_smo_B.y[katana_smo_B.b_k] = 0.0;
      }

      for (katana_smo_B.b_k = 0; katana_smo_B.b_k <= katana_smo_B.inner;
           katana_smo_B.b_k++) {
        katana_smo_B.aoffset = katana_smo_B.b_k * 6 - 1;
        for (katana_smo_B.q_size_tmp = 0; katana_smo_B.q_size_tmp < 6;
             katana_smo_B.q_size_tmp++) {
          katana_smo_B.a_idx_1 = S->data[(katana_smo_B.aoffset +
            katana_smo_B.q_size_tmp) + 1] * 0.0 +
            katana_smo_B.y[katana_smo_B.q_size_tmp];
          katana_smo_B.y[katana_smo_B.q_size_tmp] = katana_smo_B.a_idx_1;
        }
      }

      katana_smo_B.R_j[0] = 0.0;
      katana_smo_B.b_k = 6 * katana_smo_B.unnamed_idx_1 + 2;
      katana_smo_B.R_j[3] = -vB->data[katana_smo_B.b_k];
      katana_smo_B.i_a = 6 * katana_smo_B.unnamed_idx_1 + 1;
      katana_smo_B.R_j[6] = vB->data[katana_smo_B.i_a];
      katana_smo_B.R_j[1] = vB->data[katana_smo_B.b_k];
      katana_smo_B.R_j[4] = 0.0;
      katana_smo_B.R_j[7] = -vB->data[6 * katana_smo_B.unnamed_idx_1];
      katana_smo_B.R_j[2] = -vB->data[katana_smo_B.i_a];
      katana_smo_B.R_j[5] = vB->data[6 * katana_smo_B.unnamed_idx_1];
      katana_smo_B.R_j[8] = 0.0;
      katana_smo_B.R[3] = 0.0;
      katana_smo_B.b_k = 6 * katana_smo_B.unnamed_idx_1 + 5;
      katana_smo_B.R[9] = -vB->data[katana_smo_B.b_k];
      katana_smo_B.i_a = 6 * katana_smo_B.unnamed_idx_1 + 4;
      katana_smo_B.R[15] = vB->data[katana_smo_B.i_a];
      katana_smo_B.R[4] = vB->data[katana_smo_B.b_k];
      katana_smo_B.R[10] = 0.0;
      katana_smo_B.b_k = 6 * katana_smo_B.unnamed_idx_1 + 3;
      katana_smo_B.R[16] = -vB->data[katana_smo_B.b_k];
      katana_smo_B.R[5] = -vB->data[katana_smo_B.i_a];
      katana_smo_B.R[11] = vB->data[katana_smo_B.b_k];
      katana_smo_B.R[17] = 0.0;
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
        katana_smo_B.a_idx_1 = katana_smo_B.R_j[3 * katana_smo_B.i_a];
        katana_smo_B.R[6 * katana_smo_B.i_a] = katana_smo_B.a_idx_1;
        katana_smo_B.b_k = 6 * (katana_smo_B.i_a + 3);
        katana_smo_B.R[katana_smo_B.b_k] = 0.0;
        katana_smo_B.R[katana_smo_B.b_k + 3] = katana_smo_B.a_idx_1;
        katana_smo_B.a_idx_1 = katana_smo_B.R_j[3 * katana_smo_B.i_a + 1];
        katana_smo_B.R[6 * katana_smo_B.i_a + 1] = katana_smo_B.a_idx_1;
        katana_smo_B.R[katana_smo_B.b_k + 1] = 0.0;
        katana_smo_B.R[katana_smo_B.b_k + 4] = katana_smo_B.a_idx_1;
        katana_smo_B.a_idx_1 = katana_smo_B.R_j[3 * katana_smo_B.i_a + 2];
        katana_smo_B.R[6 * katana_smo_B.i_a + 2] = katana_smo_B.a_idx_1;
        katana_smo_B.R[katana_smo_B.b_k + 2] = 0.0;
        katana_smo_B.R[katana_smo_B.b_k + 5] = katana_smo_B.a_idx_1;
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        katana_smo_B.a_idx_1 = 0.0;
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.a_idx_1 += aB->data[(katana_smo_B.m - 1) * 6 +
            katana_smo_B.b_k] * X->data[katana_smo_B.unnamed_idx_1].f1[6 *
            katana_smo_B.b_k + katana_smo_B.i_a];
        }

        katana_smo_B.X_e[katana_smo_B.i_a] = katana_smo_B.a_idx_1 +
          katana_smo_B.y[katana_smo_B.i_a];
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        katana_smo_B.y[katana_smo_B.i_a] = 0.0;
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.a_idx_1 = katana_smo_B.R[6 * katana_smo_B.b_k +
            katana_smo_B.i_a] * vJ->data[6 * katana_smo_B.unnamed_idx_1 +
            katana_smo_B.b_k] + katana_smo_B.y[katana_smo_B.i_a];
          katana_smo_B.y[katana_smo_B.i_a] = katana_smo_B.a_idx_1;
        }

        aB->data[katana_smo_B.i_a + 6 * katana_smo_B.unnamed_idx_1] =
          katana_smo_B.X_e[katana_smo_B.i_a] + katana_smo_B.y[katana_smo_B.i_a];
      }

      katana_smo_B.R_j[0] = 0.0;
      katana_smo_B.R_j[3] = -katana_smo_B.T[14];
      katana_smo_B.R_j[6] = katana_smo_B.T[13];
      katana_smo_B.R_j[1] = katana_smo_B.T[14];
      katana_smo_B.R_j[4] = 0.0;
      katana_smo_B.R_j[7] = -katana_smo_B.T[12];
      katana_smo_B.R_j[2] = -katana_smo_B.T[13];
      katana_smo_B.R_j[5] = katana_smo_B.T[12];
      katana_smo_B.R_j[8] = 0.0;
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 3; katana_smo_B.b_k++) {
          katana_smo_B.q_size_tmp = katana_smo_B.i_a + 3 * katana_smo_B.b_k;
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] = 0.0;
          katana_smo_B.p = katana_smo_B.b_k << 2;
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] +=
            katana_smo_B.T[katana_smo_B.p] * katana_smo_B.R_j[katana_smo_B.i_a];
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] +=
            katana_smo_B.T[katana_smo_B.p + 1] *
            katana_smo_B.R_j[katana_smo_B.i_a + 3];
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] +=
            katana_smo_B.T[katana_smo_B.p + 2] *
            katana_smo_B.R_j[katana_smo_B.i_a + 6];
          katana_smo_B.R[katana_smo_B.b_k + 6 * katana_smo_B.i_a] =
            katana_smo_B.T[(katana_smo_B.i_a << 2) + katana_smo_B.b_k];
          katana_smo_B.R[katana_smo_B.b_k + 6 * (katana_smo_B.i_a + 3)] = 0.0;
        }
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
        katana_smo_B.R[6 * katana_smo_B.i_a + 3] = katana_smo_B.R_d[3 *
          katana_smo_B.i_a];
        katana_smo_B.b_k = katana_smo_B.i_a << 2;
        katana_smo_B.q_size_tmp = 6 * (katana_smo_B.i_a + 3);
        katana_smo_B.R[katana_smo_B.q_size_tmp + 3] =
          katana_smo_B.T[katana_smo_B.b_k];
        katana_smo_B.R[6 * katana_smo_B.i_a + 4] = katana_smo_B.R_d[3 *
          katana_smo_B.i_a + 1];
        katana_smo_B.R[katana_smo_B.q_size_tmp + 4] =
          katana_smo_B.T[katana_smo_B.b_k + 1];
        katana_smo_B.R[6 * katana_smo_B.i_a + 5] = katana_smo_B.R_d[3 *
          katana_smo_B.i_a + 2];
        katana_smo_B.R[katana_smo_B.q_size_tmp + 5] =
          katana_smo_B.T[katana_smo_B.b_k + 2];
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.p = katana_smo_B.i_a + 6 * katana_smo_B.b_k;
          katana_smo_B.b_I[katana_smo_B.p] = 0.0;
          for (katana_smo_B.q_size_tmp = 0; katana_smo_B.q_size_tmp < 6;
               katana_smo_B.q_size_tmp++) {
            katana_smo_B.b_I[katana_smo_B.p] += Xtree->data[static_cast<int32_T>
              (katana_smo_B.a_idx_0) - 1].f1[6 * katana_smo_B.q_size_tmp +
              katana_smo_B.i_a] * katana_smo_B.R[6 * katana_smo_B.b_k +
              katana_smo_B.q_size_tmp];
          }
        }
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 36; katana_smo_B.i_a++) {
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.i_a] =
          katana_smo_B.b_I[katana_smo_B.i_a];
      }
    } else {
      katana_smo_B.inner = S->size[1] - 1;
      for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
        katana_smo_B.i_a = 6 * katana_smo_B.unnamed_idx_1 + katana_smo_B.b_k;
        vB->data[katana_smo_B.i_a] = vJ->data[katana_smo_B.i_a];
        katana_smo_B.y[katana_smo_B.b_k] = 0.0;
      }

      for (katana_smo_B.b_k = 0; katana_smo_B.b_k <= katana_smo_B.inner;
           katana_smo_B.b_k++) {
        katana_smo_B.aoffset = katana_smo_B.b_k * 6 - 1;
        for (katana_smo_B.q_size_tmp = 0; katana_smo_B.q_size_tmp < 6;
             katana_smo_B.q_size_tmp++) {
          katana_smo_B.a_idx_1 = S->data[(katana_smo_B.aoffset +
            katana_smo_B.q_size_tmp) + 1] * 0.0 +
            katana_smo_B.y[katana_smo_B.q_size_tmp];
          katana_smo_B.y[katana_smo_B.q_size_tmp] = katana_smo_B.a_idx_1;
        }
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        katana_smo_B.a_idx_1 = 0.0;
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.a_idx_1 += X->data[katana_smo_B.unnamed_idx_1].f1[6 *
            katana_smo_B.b_k + katana_smo_B.i_a] *
            katana_smo_B.a0[katana_smo_B.b_k];
        }

        aB->data[katana_smo_B.i_a + 6 * katana_smo_B.unnamed_idx_1] =
          katana_smo_B.a_idx_1 + katana_smo_B.y[katana_smo_B.i_a];
      }

      katana_smo_B.R_j[0] = 0.0;
      katana_smo_B.R_j[3] = -katana_smo_B.T[14];
      katana_smo_B.R_j[6] = katana_smo_B.T[13];
      katana_smo_B.R_j[1] = katana_smo_B.T[14];
      katana_smo_B.R_j[4] = 0.0;
      katana_smo_B.R_j[7] = -katana_smo_B.T[12];
      katana_smo_B.R_j[2] = -katana_smo_B.T[13];
      katana_smo_B.R_j[5] = katana_smo_B.T[12];
      katana_smo_B.R_j[8] = 0.0;
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 3; katana_smo_B.b_k++) {
          katana_smo_B.q_size_tmp = katana_smo_B.i_a + 3 * katana_smo_B.b_k;
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] = 0.0;
          katana_smo_B.p = katana_smo_B.b_k << 2;
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] +=
            katana_smo_B.T[katana_smo_B.p] * katana_smo_B.R_j[katana_smo_B.i_a];
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] +=
            katana_smo_B.T[katana_smo_B.p + 1] *
            katana_smo_B.R_j[katana_smo_B.i_a + 3];
          katana_smo_B.R_d[katana_smo_B.q_size_tmp] +=
            katana_smo_B.T[katana_smo_B.p + 2] *
            katana_smo_B.R_j[katana_smo_B.i_a + 6];
          Xtree->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.b_k + 6 *
            katana_smo_B.i_a] = katana_smo_B.T[(katana_smo_B.i_a << 2) +
            katana_smo_B.b_k];
          Xtree->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.b_k + 6 *
            (katana_smo_B.i_a + 3)] = 0.0;
        }
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[6 * katana_smo_B.i_a + 3] =
          katana_smo_B.R_d[3 * katana_smo_B.i_a];
        katana_smo_B.b_k = katana_smo_B.i_a << 2;
        katana_smo_B.q_size_tmp = 6 * (katana_smo_B.i_a + 3);
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.q_size_tmp + 3] =
          katana_smo_B.T[katana_smo_B.b_k];
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[6 * katana_smo_B.i_a + 4] =
          katana_smo_B.R_d[3 * katana_smo_B.i_a + 1];
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.q_size_tmp + 4] =
          katana_smo_B.T[katana_smo_B.b_k + 1];
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[6 * katana_smo_B.i_a + 5] =
          katana_smo_B.R_d[3 * katana_smo_B.i_a + 2];
        Xtree->data[katana_smo_B.unnamed_idx_1].f1[katana_smo_B.q_size_tmp + 5] =
          katana_smo_B.T[katana_smo_B.b_k + 2];
      }
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 36; katana_smo_B.i_a++) {
      katana_smo_B.b_I[katana_smo_B.i_a] = robot->
        Bodies[katana_smo_B.unnamed_idx_1]->SpatialInertia[katana_smo_B.i_a];
    }

    katana_smo_B.R_j[0] = 0.0;
    katana_smo_B.b_k = 6 * katana_smo_B.unnamed_idx_1 + 2;
    katana_smo_B.R_j[3] = -vB->data[katana_smo_B.b_k];
    katana_smo_B.i_a = 6 * katana_smo_B.unnamed_idx_1 + 1;
    katana_smo_B.R_j[6] = vB->data[katana_smo_B.i_a];
    katana_smo_B.R_j[1] = vB->data[katana_smo_B.b_k];
    katana_smo_B.R_j[4] = 0.0;
    katana_smo_B.R_j[7] = -vB->data[6 * katana_smo_B.unnamed_idx_1];
    katana_smo_B.R_j[2] = -vB->data[katana_smo_B.i_a];
    katana_smo_B.R_j[5] = vB->data[6 * katana_smo_B.unnamed_idx_1];
    katana_smo_B.R_j[8] = 0.0;
    katana_smo_B.R[18] = 0.0;
    katana_smo_B.b_k = 6 * katana_smo_B.unnamed_idx_1 + 5;
    katana_smo_B.R[24] = -vB->data[katana_smo_B.b_k];
    katana_smo_B.i_a = 6 * katana_smo_B.unnamed_idx_1 + 4;
    katana_smo_B.R[30] = vB->data[katana_smo_B.i_a];
    katana_smo_B.R[19] = vB->data[katana_smo_B.b_k];
    katana_smo_B.R[25] = 0.0;
    katana_smo_B.b_k = 6 * katana_smo_B.unnamed_idx_1 + 3;
    katana_smo_B.R[31] = -vB->data[katana_smo_B.b_k];
    katana_smo_B.R[20] = -vB->data[katana_smo_B.i_a];
    katana_smo_B.R[26] = vB->data[katana_smo_B.b_k];
    katana_smo_B.R[32] = 0.0;
    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 3; katana_smo_B.i_a++) {
      katana_smo_B.a_idx_1 = katana_smo_B.R_j[3 * katana_smo_B.i_a];
      katana_smo_B.R[6 * katana_smo_B.i_a] = katana_smo_B.a_idx_1;
      katana_smo_B.R[6 * katana_smo_B.i_a + 3] = 0.0;
      katana_smo_B.b_k = 6 * (katana_smo_B.i_a + 3);
      katana_smo_B.R[katana_smo_B.b_k + 3] = katana_smo_B.a_idx_1;
      katana_smo_B.a_idx_1 = katana_smo_B.R_j[3 * katana_smo_B.i_a + 1];
      katana_smo_B.R[6 * katana_smo_B.i_a + 1] = katana_smo_B.a_idx_1;
      katana_smo_B.R[6 * katana_smo_B.i_a + 4] = 0.0;
      katana_smo_B.R[katana_smo_B.b_k + 4] = katana_smo_B.a_idx_1;
      katana_smo_B.a_idx_1 = katana_smo_B.R_j[3 * katana_smo_B.i_a + 2];
      katana_smo_B.R[6 * katana_smo_B.i_a + 2] = katana_smo_B.a_idx_1;
      katana_smo_B.R[6 * katana_smo_B.i_a + 5] = 0.0;
      katana_smo_B.R[katana_smo_B.b_k + 5] = katana_smo_B.a_idx_1;
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
      katana_smo_B.X_e[katana_smo_B.i_a] = 0.0;
      katana_smo_B.b_I_b[katana_smo_B.i_a] = 0.0;
      for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
        katana_smo_B.a_idx_0 = katana_smo_B.b_I[6 * katana_smo_B.b_k +
          katana_smo_B.i_a];
        katana_smo_B.q_size_tmp = 6 * katana_smo_B.unnamed_idx_1 +
          katana_smo_B.b_k;
        katana_smo_B.a_idx_1 = vB->data[katana_smo_B.q_size_tmp] *
          katana_smo_B.a_idx_0 + katana_smo_B.X_e[katana_smo_B.i_a];
        katana_smo_B.a_idx_0 = aB->data[katana_smo_B.q_size_tmp] *
          katana_smo_B.a_idx_0 + katana_smo_B.b_I_b[katana_smo_B.i_a];
        katana_smo_B.X_e[katana_smo_B.i_a] = katana_smo_B.a_idx_1;
        katana_smo_B.b_I_b[katana_smo_B.i_a] = katana_smo_B.a_idx_0;
      }
    }

    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
      katana_smo_B.y[katana_smo_B.i_a] = 0.0;
      katana_smo_B.a_idx_1 = 0.0;
      for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
        katana_smo_B.a_idx_1 += Xtree->data[katana_smo_B.unnamed_idx_1].f1[6 *
          katana_smo_B.i_a + katana_smo_B.b_k] * fext[6 *
          katana_smo_B.unnamed_idx_1 + katana_smo_B.b_k];
        katana_smo_B.y[katana_smo_B.i_a] += katana_smo_B.R[6 * katana_smo_B.b_k
          + katana_smo_B.i_a] * katana_smo_B.X_e[katana_smo_B.b_k];
      }

      f->data[katana_smo_B.i_a + 6 * katana_smo_B.unnamed_idx_1] =
        (katana_smo_B.b_I_b[katana_smo_B.i_a] + katana_smo_B.y[katana_smo_B.i_a])
        - katana_smo_B.a_idx_1;
    }
  }

  katana_smo_emxFree_real_T(&aB);
  katana_smo_emxFree_real_T(&vB);
  katana_smo_emxFree_real_T(&vJ);
  katana_smo_emxFree_f_cell_wrap1(&Xtree);
  katana_smo_B.q_size_tmp = static_cast<int32_T>(((-1.0 - katana_smo_B.nb) + 1.0)
    / -1.0) - 1;
  katana_smo_emxInit_real_T(&taui, 1);
  katana_smo_emxInit_char_T(&a, 2);
  if (0 <= katana_smo_B.q_size_tmp) {
    for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 5; katana_smo_B.i_a++) {
      katana_smo_B.b_h2[katana_smo_B.i_a] = tmp[katana_smo_B.i_a];
    }
  }

  for (katana_smo_B.loop_ub_tmp = 0; katana_smo_B.loop_ub_tmp <=
       katana_smo_B.q_size_tmp; katana_smo_B.loop_ub_tmp++) {
    katana_smo_B.a_idx_0 = katana_smo_B.nb + -static_cast<real_T>
      (katana_smo_B.loop_ub_tmp);
    katana_smo_B.p = static_cast<int32_T>(katana_smo_B.a_idx_0);
    katana_smo_B.inner = katana_smo_B.p - 1;
    obj = robot->Bodies[katana_smo_B.inner];
    katana_smo_B.i_a = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = obj->JointInternal.Type->size[1];
    katana_emxEnsureCapacity_char_T(a, katana_smo_B.i_a);
    katana_smo_B.b_k = obj->JointInternal.Type->size[0] *
      obj->JointInternal.Type->size[1] - 1;
    for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.b_k;
         katana_smo_B.i_a++) {
      a->data[katana_smo_B.i_a] = obj->JointInternal.Type->data[katana_smo_B.i_a];
    }

    katana_smo_B.b_bool = false;
    if (a->size[1] == 5) {
      katana_smo_B.i_a = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.i_a - 1 < 5) {
          katana_smo_B.unnamed_idx_1 = katana_smo_B.i_a - 1;
          if (a->data[katana_smo_B.unnamed_idx_1] !=
              katana_smo_B.b_h2[katana_smo_B.unnamed_idx_1]) {
            exitg1 = 1;
          } else {
            katana_smo_B.i_a++;
          }
        } else {
          katana_smo_B.b_bool = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (!katana_smo_B.b_bool) {
      obj = robot->Bodies[katana_smo_B.inner];
      katana_smo_B.i_a = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj->JointInternal.MotionSubspace->size[1];
      katana_emxEnsureCapacity_real_T(S, katana_smo_B.i_a);
      katana_smo_B.b_k = obj->JointInternal.MotionSubspace->size[0] *
        obj->JointInternal.MotionSubspace->size[1] - 1;
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a <= katana_smo_B.b_k;
           katana_smo_B.i_a++) {
        S->data[katana_smo_B.i_a] = obj->JointInternal.MotionSubspace->
          data[katana_smo_B.i_a];
      }

      katana_smo_B.m = S->size[1] - 1;
      katana_smo_B.i_a = taui->size[0];
      taui->size[0] = S->size[1];
      katana_emxEnsureCapacity_real_T(taui, katana_smo_B.i_a);
      for (katana_smo_B.unnamed_idx_1 = 0; katana_smo_B.unnamed_idx_1 <=
           katana_smo_B.m; katana_smo_B.unnamed_idx_1++) {
        katana_smo_B.aoffset = katana_smo_B.unnamed_idx_1 * 6 - 1;
        katana_smo_B.a_idx_1 = 0.0;
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.a_idx_1 += f->data[(static_cast<int32_T>
            (katana_smo_B.a_idx_0) - 1) * 6 + katana_smo_B.b_k] * S->data
            [(katana_smo_B.aoffset + katana_smo_B.b_k) + 1];
        }

        taui->data[katana_smo_B.unnamed_idx_1] = katana_smo_B.a_idx_1;
      }

      katana_smo_B.b_idx_0 = robot->VelocityDoFMap[katana_smo_B.p - 1];
      katana_smo_B.b_idx_1 = robot->VelocityDoFMap[katana_smo_B.p + 9];
      if (katana_smo_B.b_idx_0 > katana_smo_B.b_idx_1) {
        katana_smo_B.b_k = 0;
        katana_smo_B.i_a = 0;
      } else {
        katana_smo_B.b_k = static_cast<int32_T>(katana_smo_B.b_idx_0) - 1;
        katana_smo_B.i_a = static_cast<int32_T>(katana_smo_B.b_idx_1);
      }

      katana_smo_B.unnamed_idx_1 = katana_smo_B.i_a - katana_smo_B.b_k;
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < katana_smo_B.unnamed_idx_1;
           katana_smo_B.i_a++) {
        tau[katana_smo_B.b_k + katana_smo_B.i_a] = taui->data[katana_smo_B.i_a];
      }
    }

    katana_smo_B.a_idx_0 = robot->Bodies[katana_smo_B.inner]->ParentIndex;
    if (katana_smo_B.a_idx_0 > 0.0) {
      katana_smo_B.m = static_cast<int32_T>(katana_smo_B.a_idx_0);
      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        katana_smo_B.a_idx_1 = 0.0;
        for (katana_smo_B.b_k = 0; katana_smo_B.b_k < 6; katana_smo_B.b_k++) {
          katana_smo_B.a_idx_1 += f->data[(katana_smo_B.p - 1) * 6 +
            katana_smo_B.b_k] * X->data[katana_smo_B.inner].f1[6 *
            katana_smo_B.i_a + katana_smo_B.b_k];
        }

        katana_smo_B.a0[katana_smo_B.i_a] = f->data[(katana_smo_B.m - 1) * 6 +
          katana_smo_B.i_a] + katana_smo_B.a_idx_1;
      }

      for (katana_smo_B.i_a = 0; katana_smo_B.i_a < 6; katana_smo_B.i_a++) {
        f->data[katana_smo_B.i_a + 6 * (katana_smo_B.m - 1)] =
          katana_smo_B.a0[katana_smo_B.i_a];
      }
    }
  }

  katana_smo_emxFree_char_T(&a);
  katana_smo_emxFree_real_T(&taui);
  katana_smo_emxFree_real_T(&S);
  katana_smo_emxFree_real_T(&f);
  katana_smo_emxFree_f_cell_wrap1(&X);
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

static void katana_smo_atan2(const real_T y_data[], const int32_T y_size[3],
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

static void matlabCodegenHandle_matla_glelt(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_smo_g_T
  *pStruct)
{
  katana_smo_emxFree_char_T(&pStruct->Type);
  katana_smo_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_s_robotics_manip_(s_robotics_manip_internal_R_g_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_t_robotics_manip_(t_robotics_manip_internal_R_g_T
  *pStruct)
{
  emxFreeStruct_s_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_b_g_T
  *pStruct)
{
  emxFreeStruct_t_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_r_robotics_manip_(r_robotics_manip_internal_R_g_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_c_rigidBodyJoint1(c_rigidBodyJoint_katana_smo_T
  *pStruct)
{
  katana_smo_emxFree_char_T(&pStruct->Type);
}

static void emxFreeStruct_s_robotics_mani_g(s_robotics_manip_internal_Rig_T
  *pStruct)
{
  katana_smo_emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxFreeStruct_t_robotics_mani_g(t_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_s_robotics_mani_g(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmani_g(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_t_robotics_mani_g(&pStruct->TreeInternal);
}

static void emxFreeStruct_r_robotics_mani_g(r_robotics_manip_internal_Rig_T
  *pStruct)
{
  katana_smo_emxFree_char_T(&pStruct->NameInternal);
  emxFreeStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxFreeStruct_t_robotics_man_gl(t_robotics_manip_internal__gl_T
  *pStruct)
{
  emxFreeStruct_s_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slman_gl(robotics_slmanip_internal__gl_T
  *pStruct)
{
  emxFreeStruct_t_robotics_man_gl(&pStruct->TreeInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabC_gle(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_smo_g_T
  *pStruct)
{
  katana_smo_emxInit_char_T(&pStruct->Type, 2);
  katana_smo_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_s_robotics_manip_(s_robotics_manip_internal_R_g_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_t_robotics_manip_(t_robotics_manip_internal_R_g_T
  *pStruct)
{
  emxInitStruct_s_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_b_g_T
  *pStruct)
{
  emxInitStruct_t_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_r_robotics_manip_(r_robotics_manip_internal_R_g_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static r_robotics_manip_internal_R_g_T *kat_RigidBody_RigidBody_gleltfx
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
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
    0.0, 1.0, 0.0, 0.0, 0.0, 0.2015, 1.0 };

  static const real_T tmp_5[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 0.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *ka_RigidBody_RigidBody_gleltfxu
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.0019489197322284262, 2.6951489071562546E-8,
    -4.4937896671701257E-6, 0.0, 0.0125458284565125, -0.00096109392909374985,
    2.6951489071562546E-8, 0.0012093514540699925, -7.3895666185625148E-9,
    -0.0125458284565125, 0.0, 0.00030665253768749997, -4.4937896671701257E-6,
    -7.3895666185625148E-9, 0.0013505307332393373, 0.00096109392909374985,
    -0.00030665253768749997, 0.0, 0.0, -0.0125458284565125,
    0.00096109392909374985, 0.74793301875, 0.0, 0.0, 0.0125458284565125, 0.0,
    -0.00030665253768749997, 0.0, 0.74793301875, 0.0, -0.00096109392909374985,
    0.00030665253768749997, 0.0, 0.0, 0.0, 0.74793301875 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.2015, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
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
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *k_RigidBody_RigidBody_gleltfxuz
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.00050065261658781507,
    -0.00031029205020686275, -8.7838011803105021E-6, 0.0,
    -0.00013790090002500002, 0.0042356421792562509, -0.00031029205020686275,
    0.011162767422933272, -3.9653045483207511E-7, 0.00013790090002500002, 0.0,
    -0.074097681280875, -8.7838011803105021E-6, -3.9653045483207511E-7,
    0.011495928601611478, -0.0042356421792562509, 0.074097681280875, 0.0, 0.0,
    0.00013790090002500002, -0.0042356421792562509, 0.80174941875, 0.0, 0.0,
    -0.00013790090002500002, 0.0, 0.074097681280875, 0.0, 0.80174941875, 0.0,
    0.0042356421792562509, -0.074097681280875, 0.0, 0.0, 0.0, 0.80174941875 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0,
    4.8965888601467475E-12, 1.0, 0.0, 0.0, -1.0, 4.8965888601467475E-12, 0.0,
    0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
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
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *RigidBody_RigidBody_gleltfxuze
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.001219775793495013,
    -0.00029931964941361808, 4.2018854669582246E-6, 0.0, 0.00014818191238125,
    0.00710243037793125, -0.00029931964941361808, 0.004974673458468885,
    1.2921544806731438E-6, -0.00014818191238125, 0.0, -0.045988692336675,
    4.2018854669582246E-6, 1.2921544806731438E-6, 0.0058613068319286685,
    -0.00710243037793125, 0.045988692336675, 0.0, 0.0, -0.00014818191238125,
    -0.00710243037793125, 0.79241664375, 0.0, 0.0, 0.00014818191238125, 0.0,
    0.045988692336675, 0.0, 0.79241664375, 0.0, 0.00710243037793125,
    -0.045988692336675, 0.0, 0.0, 0.0, 0.79241664375 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.19, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
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
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *RigidBody_RigidBody_gleltfxuzem
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.00078931701543279577,
    -0.00015712527567217886, -1.21E-6, 0.0, -0.0, 0.0040155011938687495,
    -0.00015712527567217886, 0.0032606881495012034, 1.47E-7, 0.0, 0.0,
    -0.034851950348231249, -1.21E-6, 1.47E-7, 0.0036671681649339989,
    -0.0040155011938687495, 0.034851950348231249, 0.0, 0.0, 0.0,
    -0.0040155011938687495, 0.69149323125, 0.0, 0.0, -0.0, 0.0,
    0.034851950348231249, 0.0, 0.69149323125, 0.0, 0.0040155011938687495,
    -0.034851950348231249, 0.0, 0.0, 0.0, 0.69149323125 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    -2.0682310711021444E-13, 0.0, -0.0, 2.0682310711021444E-13, -1.0, 0.0, 0.139,
    0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
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
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *RigidBody_RigidBod_gleltfxuzeme
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 0.00012120434463534985,
    2.6202518020128955E-8, 2.631439250295649E-7, 0.0, -0.0004304958309801,
    3.566659743E-6, 2.6202518020128955E-8, 0.0001353810232666779,
    -1.29992501967243E-7, 0.0004304958309801, 0.0, 0.00080477859340006869,
    2.631439250295649E-7, -1.29992501967243E-7, 9.6049777927135308E-5,
    -3.566659743E-6, -0.00080477859340006869, 0.0, 0.0, 0.0004304958309801,
    -3.566659743E-6, 0.25622555625, 0.0, 0.0, -0.0004304958309801, 0.0,
    -0.00080477859340006869, 0.0, 0.25622555625, 0.0, 3.566659743E-6,
    0.00080477859340006869, 0.0, 0.0, 0.0, 0.25622555625 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 4.8965888601467475E-12, -1.0, -0.0, 0.0,
    4.8965888601467475E-12, 2.3976582465313225E-23, 1.0, 0.0, -1.0,
    -4.8965888601467475E-12, 4.8965888601467475E-12, 0.0, 0.1523, 0.0, 0.0, 1.0
  };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
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
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *RigidBody_RigidBo_gleltfxuzemei
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 1.146800198769026E-5, 0.0,
    1.1763499710356129E-8, 0.0, -3.312817101576E-7, -0.0, 0.0,
    2.5245729043558727E-5, 0.0, 3.312817101576E-7, 0.0, 0.00079391661839268838,
    1.1763499710356129E-8, 0.0, 2.2705727055868466E-5, 0.0,
    -0.00079391661839268838, 0.0, 0.0, 3.312817101576E-7, 0.0, 0.0552136183596,
    0.0, 0.0, -3.312817101576E-7, 0.0, -0.00079391661839268838, 0.0,
    0.0552136183596, 0.0, -0.0, 0.00079391661839268838, 0.0, 0.0, 0.0,
    0.0552136183596 };

  static const char_T tmp_1[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_2[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_3[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_4[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, -0.0323, 1.0
  };

  static const real_T tmp_5[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 6.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *RigidBody_RigidB_gleltfxuzemeim
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 2.1998212265328824E-5, 7.342819342071772E-6,
    1.5199863152008166E-6, 0.0, 4.03510735430586E-5, 0.0006335093374037153,
    7.342819342071772E-6, 1.990179729760085E-5, 1.9515467858155628E-8,
    -4.03510735430586E-5, 0.0, -4.49072459144208E-5, 1.5199863152008166E-6,
    1.9515467858155628E-8, 3.9611644021150629E-5, -0.0006335093374037153,
    4.49072459144208E-5, 0.0, 0.0, -4.03510735430586E-5, -0.0006335093374037153,
    0.0251722230462, 0.0, 0.0, 4.03510735430586E-5, 0.0, 4.49072459144208E-5,
    0.0, 0.0251722230462, 0.0, 0.0006335093374037153, -4.49072459144208E-5, 0.0,
    0.0, 0.0, 0.0251722230462 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    -2.0682310711021444E-13, 0.0, -0.0, 2.0682310711021444E-13, -1.0, 0.0, 0.034,
    0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 7.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *RigidBody_Rigid_gleltfxuzemeimo
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  int8_T tmp[6];
  static const real_T tmp_0[36] = { 2.1998212265328824E-5, 7.342819342071772E-6,
    1.5199863152008166E-6, 0.0, 4.03510735430586E-5, 0.0006335093374037153,
    7.342819342071772E-6, 1.990179729760085E-5, 1.9515467858155628E-8,
    -4.03510735430586E-5, 0.0, -4.49072459144208E-5, 1.5199863152008166E-6,
    1.9515467858155628E-8, 3.9611644021150629E-5, -0.0006335093374037153,
    4.49072459144208E-5, 0.0, 0.0, -4.03510735430586E-5, -0.0006335093374037153,
    0.0251722230462, 0.0, 0.0, 4.03510735430586E-5, 0.0, 4.49072459144208E-5,
    0.0, 0.0251722230462, 0.0, 0.0006335093374037153, -4.49072459144208E-5, 0.0,
    0.0, 0.0, 0.0251722230462 };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.034, 0.0, 0.0, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_5[36] = { 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 7.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_R_g_T *k_RigidBody_Rigid_j
  (r_robotics_manip_internal_R_g_T *obj)
{
  r_robotics_manip_internal_R_g_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_smo_T *switch_expression;
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

  static const real_T tmp_4[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, -0.1505, 1.0
  };

  static const real_T tmp_5[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  obj->ParentIndex = 6.0;
  for (b_kstr = 0; b_kstr < 36; b_kstr++) {
    obj->SpatialInertia[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static s_robotics_manip_internal_R_g_T *k_RigidBody_Rigid_g
  (s_robotics_manip_internal_R_g_T *obj)
{
  s_robotics_manip_internal_R_g_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
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
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      katana_smo_B.msubspace_data[b_kstr] = tmp[b_kstr];
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
      katana_smo_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      katana_smo_B.msubspace_data[b_kstr] = 0;
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
  katana_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] =
      katana_smo_B.msubspace_data[b_kstr];
  }

  return b_obj;
}

static t_robotics_manip_internal_R_g_T *k_RigidBodyTree_RigidBodyTree_g
  (t_robotics_manip_internal_R_g_T *obj, r_robotics_manip_internal_R_g_T *iobj_0,
   r_robotics_manip_internal_R_g_T *iobj_1, r_robotics_manip_internal_R_g_T
   *iobj_2, r_robotics_manip_internal_R_g_T *iobj_3,
   r_robotics_manip_internal_R_g_T *iobj_4, r_robotics_manip_internal_R_g_T
   *iobj_5, r_robotics_manip_internal_R_g_T *iobj_6,
   r_robotics_manip_internal_R_g_T *iobj_7, r_robotics_manip_internal_R_g_T
   *iobj_8, r_robotics_manip_internal_R_g_T *iobj_9)
{
  t_robotics_manip_internal_R_g_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 0, 1, 2, 3, 4, 5, 0, 6, 7, 0, -1, 1, 2, 3, 4,
    5, -1, 6, 7, -1 };

  b_obj = obj;
  obj->Bodies[0] = kat_RigidBody_RigidBody_gleltfx(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = ka_RigidBody_RigidBody_gleltfxu(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = k_RigidBody_RigidBody_gleltfxuz(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = RigidBody_RigidBody_gleltfxuze(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = RigidBody_RigidBody_gleltfxuzem(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = RigidBody_RigidBod_gleltfxuzeme(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = RigidBody_RigidBo_gleltfxuzemei(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = RigidBody_RigidB_gleltfxuzemeim(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = RigidBody_Rigid_gleltfxuzemeimo(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = k_RigidBody_Rigid_j(iobj_8);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->VelocityNumber = 7.0;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  k_RigidBody_Rigid_g(&obj->Base);
  return b_obj;
}

static void emxInitStruct_c_rigidBodyJoint1(c_rigidBodyJoint_katana_smo_T
  *pStruct)
{
  katana_smo_emxInit_char_T(&pStruct->Type, 2);
}

static void emxInitStruct_s_robotics_mani_g(s_robotics_manip_internal_Rig_T
  *pStruct)
{
  katana_smo_emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static void emxInitStruct_t_robotics_mani_g(t_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_s_robotics_mani_g(&pStruct->Base);
}

static void emxInitStruct_robotics_slmani_g(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_t_robotics_mani_g(&pStruct->TreeInternal);
}

static void emxInitStruct_r_robotics_mani_g(r_robotics_manip_internal_Rig_T
  *pStruct)
{
  katana_smo_emxInit_char_T(&pStruct->NameInternal, 2);
  emxInitStruct_c_rigidBodyJoint1(&pStruct->JointInternal);
}

static r_robotics_manip_internal_Rig_T *katana_smo_RigidBody_RigidBody
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[17] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'b', 'a',
    's', 'e', '_', 'f', 'r', 'a', 'm', 'e' };

  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.2015, 1.0 };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 17;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 17; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 0.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static r_robotics_manip_internal_Rig_T *katana_sm_RigidBody_RigidBody_g
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[22] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'm', 'o',
    't', 'o', 'r', '1', '_', 'p', 'a', 'n', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.2015, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 22;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 22; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 0.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_Rig_T *katana_s_RigidBody_RigidBody_gl
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[23] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'm', 'o',
    't', 'o', 'r', '2', '_', 'l', 'i', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0,
    4.8965888601467475E-12, 1.0, 0.0, 0.0, -1.0, 4.8965888601467475E-12, 0.0,
    0.0, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 23;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 23; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 2.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_Rig_T *katana__RigidBody_RigidBody_gle
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[23] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'm', 'o',
    't', 'o', 'r', '3', '_', 'l', 'i', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.19, 0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 23;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 23; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 3.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_Rig_T *katana_RigidBody_RigidBody_glel
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[23] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'm', 'o',
    't', 'o', 'r', '4', '_', 'l', 'i', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    -2.0682310711021444E-13, 0.0, -0.0, 2.0682310711021444E-13, -1.0, 0.0, 0.139,
    0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 23;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 23; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 4.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_Rig_T *katan_RigidBody_RigidBody_glelt
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[29] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'm', 'o',
    't', 'o', 'r', '5', '_', 'w', 'r', 'i', 's', 't', '_', 'r', 'o', 'l', 'l',
    '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 4.8965888601467475E-12, -1.0, -0.0, 0.0,
    4.8965888601467475E-12, 2.3976582465313225E-23, 1.0, 0.0, -1.0,
    -4.8965888601467475E-12, 4.8965888601467475E-12, 0.0, 0.1523, 0.0, 0.0, 1.0
  };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 29;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 29; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 5.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
  obj->JointInternal.JointAxisInternal[2] = 1.0;
  return b_obj;
}

static r_robotics_manip_internal_Rig_T *kata_RigidBody_RigidBody_gleltf
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[19] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'g', 'r',
    'i', 'p', 'p', 'e', 'r', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_1[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_2[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_3[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, -0.0323, 1.0
  };

  static const real_T tmp_4[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  int32_T exitg1;
  b_obj = obj;
  b_kstr = obj->NameInternal->size[0] * obj->NameInternal->size[1];
  obj->NameInternal->size[0] = 1;
  obj->NameInternal->size[1] = 19;
  katana_emxEnsureCapacity_char_T(obj->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 19; b_kstr++) {
    obj->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  obj->ParentIndex = 6.0;
  b_kstr = obj->JointInternal.Type->size[0] * obj->JointInternal.Type->size[1];
  obj->JointInternal.Type->size[0] = 1;
  obj->JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  katana_smo_emxFree_char_T(&switch_expression);
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
    obj->JointInternal.JointToParentTransform[b_kstr] = tmp_3[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->JointInternal.ChildToJointTransform[b_kstr] = tmp_4[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static t_robotics_manip_internal_Rig_T *kat_RigidBodyTree_RigidBodyTree
  (t_robotics_manip_internal_Rig_T *obj, r_robotics_manip_internal_Rig_T *iobj_0,
   r_robotics_manip_internal_Rig_T *iobj_1, r_robotics_manip_internal_Rig_T
   *iobj_2, r_robotics_manip_internal_Rig_T *iobj_3,
   r_robotics_manip_internal_Rig_T *iobj_4, r_robotics_manip_internal_Rig_T
   *iobj_5, r_robotics_manip_internal_Rig_T *iobj_6,
   r_robotics_manip_internal_Rig_T *iobj_7, r_robotics_manip_internal_Rig_T
   *iobj_8, r_robotics_manip_internal_Rig_T *iobj_9)
{
  t_robotics_manip_internal_Rig_T *b_obj;
  s_robotics_manip_internal_Rig_T *obj_0;
  emxArray_char_T_katana_smo_T *switch_expression;
  boolean_T b_bool;
  int32_T b_kstr;
  char_T b[8];
  char_T b_0[9];
  int32_T loop_ub;
  static const char_T tmp[20] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'l', '_',
    'f', 'i', 'n', 'g', 'e', 'r', '_', 'l', 'i', 'n', 'k' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_1[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  static const real_T tmp_2[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, -1.0,
    -2.0682310711021444E-13, 0.0, -0.0, 2.0682310711021444E-13, -1.0, 0.0, 0.034,
    0.0, 0.0, 1.0 };

  static const real_T tmp_3[16] = { 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0 };

  static const char_T tmp_4[20] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'r', '_',
    'f', 'i', 'n', 'g', 'e', 'r', '_', 'l', 'i', 'n', 'k' };

  static const real_T tmp_5[16] = { 1.0, 0.0, -0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0,
    0.0, 1.0, 0.0, 0.034, 0.0, 0.0, 1.0 };

  static const char_T tmp_6[25] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'g', 'r',
    'i', 'p', 'p', 'e', 'r', '_', 't', 'o', 'o', 'l', '_', 'f', 'r', 'a', 'm',
    'e' };

  static const char_T tmp_7[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const real_T tmp_8[16] = { 4.8965888601467475E-12, 0.0, -1.0, 0.0, 0.0,
    1.0, 0.0, 0.0, 1.0, 0.0, 4.8965888601467475E-12, 0.0, 0.0, 0.0, -0.1505, 1.0
  };

  static const char_T tmp_9[16] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'b', 'a',
    's', 'e', '_', 'l', 'i', 'n', 'k' };

  int32_T exitg1;
  b_obj = obj;
  obj->Bodies[0] = katana_smo_RigidBody_RigidBody(iobj_0);
  obj->Bodies[1] = katana_sm_RigidBody_RigidBody_g(iobj_9);
  obj->Bodies[2] = katana_s_RigidBody_RigidBody_gl(iobj_1);
  obj->Bodies[3] = katana__RigidBody_RigidBody_gle(iobj_2);
  obj->Bodies[4] = katana_RigidBody_RigidBody_glel(iobj_3);
  obj->Bodies[5] = katan_RigidBody_RigidBody_glelt(iobj_4);
  obj->Bodies[6] = kata_RigidBody_RigidBody_gleltf(iobj_5);
  b_kstr = iobj_6->NameInternal->size[0] * iobj_6->NameInternal->size[1];
  iobj_6->NameInternal->size[0] = 1;
  iobj_6->NameInternal->size[1] = 20;
  katana_emxEnsureCapacity_char_T(iobj_6->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 20; b_kstr++) {
    iobj_6->NameInternal->data[b_kstr] = tmp[b_kstr];
  }

  iobj_6->ParentIndex = 7.0;
  b_kstr = iobj_6->JointInternal.Type->size[0] * iobj_6->
    JointInternal.Type->size[1];
  iobj_6->JointInternal.Type->size[0] = 1;
  iobj_6->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(iobj_6->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    iobj_6->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  katana_smo_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_6->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_6->JointInternal.Type->size[0] * iobj_6->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_6->JointInternal.Type->data[b_kstr];
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
    iobj_6->JointInternal.JointToParentTransform[b_kstr] = tmp_2[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_6->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  iobj_6->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_6->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_6->JointInternal.JointAxisInternal[2] = 1.0;
  obj->Bodies[7] = iobj_6;
  b_kstr = iobj_7->NameInternal->size[0] * iobj_7->NameInternal->size[1];
  iobj_7->NameInternal->size[0] = 1;
  iobj_7->NameInternal->size[1] = 20;
  katana_emxEnsureCapacity_char_T(iobj_7->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 20; b_kstr++) {
    iobj_7->NameInternal->data[b_kstr] = tmp_4[b_kstr];
  }

  iobj_7->ParentIndex = 7.0;
  b_kstr = iobj_7->JointInternal.Type->size[0] * iobj_7->
    JointInternal.Type->size[1];
  iobj_7->JointInternal.Type->size[0] = 1;
  iobj_7->JointInternal.Type->size[1] = 8;
  katana_emxEnsureCapacity_char_T(iobj_7->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    iobj_7->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_7->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_7->JointInternal.Type->size[0] * iobj_7->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_7->JointInternal.Type->data[b_kstr];
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
    iobj_7->JointInternal.JointToParentTransform[b_kstr] = tmp_5[b_kstr];
  }

  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    iobj_7->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
  }

  iobj_7->JointInternal.JointAxisInternal[0] = 0.0;
  iobj_7->JointInternal.JointAxisInternal[1] = 0.0;
  iobj_7->JointInternal.JointAxisInternal[2] = 1.0;
  obj->Bodies[8] = iobj_7;
  b_kstr = iobj_8->NameInternal->size[0] * iobj_8->NameInternal->size[1];
  iobj_8->NameInternal->size[0] = 1;
  iobj_8->NameInternal->size[1] = 25;
  katana_emxEnsureCapacity_char_T(iobj_8->NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 25; b_kstr++) {
    iobj_8->NameInternal->data[b_kstr] = tmp_6[b_kstr];
  }

  iobj_8->ParentIndex = 6.0;
  b_kstr = iobj_8->JointInternal.Type->size[0] * iobj_8->
    JointInternal.Type->size[1];
  iobj_8->JointInternal.Type->size[0] = 1;
  iobj_8->JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(iobj_8->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    iobj_8->JointInternal.Type->data[b_kstr] = tmp_7[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = iobj_8->JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = iobj_8->JointInternal.Type->size[0] * iobj_8->
    JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = iobj_8->JointInternal.Type->data[b_kstr];
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
    iobj_8->JointInternal.ChildToJointTransform[b_kstr] = tmp_3[b_kstr];
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
  obj->Base.NameInternal->size[1] = 16;
  katana_emxEnsureCapacity_char_T(obj->Base.NameInternal, b_kstr);
  for (b_kstr = 0; b_kstr < 16; b_kstr++) {
    obj->Base.NameInternal->data[b_kstr] = tmp_9[b_kstr];
  }

  b_kstr = obj->Base.JointInternal.Type->size[0] * obj->
    Base.JointInternal.Type->size[1];
  obj->Base.JointInternal.Type->size[0] = 1;
  obj->Base.JointInternal.Type->size[1] = 5;
  katana_emxEnsureCapacity_char_T(obj->Base.JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj_0->JointInternal.Type->data[b_kstr] = tmp_7[b_kstr];
  }

  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->Base.JointInternal.Type->size[1];
  katana_emxEnsureCapacity_char_T(switch_expression, b_kstr);
  loop_ub = obj->Base.JointInternal.Type->size[0] * obj->
    Base.JointInternal.Type->size[1] - 1;
  for (b_kstr = 0; b_kstr <= loop_ub; b_kstr++) {
    switch_expression->data[b_kstr] = obj_0->JointInternal.Type->data[b_kstr];
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

  katana_smo_emxFree_char_T(&switch_expression);
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

static void emxInitStruct_t_robotics_man_gl(t_robotics_manip_internal__gl_T
  *pStruct)
{
  emxInitStruct_s_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slman_gl(robotics_slmanip_internal__gl_T
  *pStruct)
{
  emxInitStruct_t_robotics_man_gl(&pStruct->TreeInternal);
}

static t_robotics_manip_internal__gl_T *RigidBodyTree_RigidBodyTree_gl
  (t_robotics_manip_internal__gl_T *obj, r_robotics_manip_internal_R_g_T *iobj_0,
   r_robotics_manip_internal_R_g_T *iobj_1, r_robotics_manip_internal_R_g_T
   *iobj_2, r_robotics_manip_internal_R_g_T *iobj_3,
   r_robotics_manip_internal_R_g_T *iobj_4, r_robotics_manip_internal_R_g_T
   *iobj_5, r_robotics_manip_internal_R_g_T *iobj_6,
   r_robotics_manip_internal_R_g_T *iobj_7, r_robotics_manip_internal_R_g_T
   *iobj_8, r_robotics_manip_internal_R_g_T *iobj_9)
{
  t_robotics_manip_internal__gl_T *b_obj;
  int32_T i;
  static const int8_T tmp[20] = { 0, 1, 2, 3, 4, 5, 0, 6, 7, 0, -1, 1, 2, 3, 4,
    5, -1, 6, 7, -1 };

  b_obj = obj;
  obj->Bodies[0] = kat_RigidBody_RigidBody_gleltfx(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = ka_RigidBody_RigidBody_gleltfxu(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = k_RigidBody_RigidBody_gleltfxuz(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = RigidBody_RigidBody_gleltfxuze(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = RigidBody_RigidBody_gleltfxuzem(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = RigidBody_RigidBod_gleltfxuzeme(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = RigidBody_RigidBo_gleltfxuzemei(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = RigidBody_RigidB_gleltfxuzemeim(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = RigidBody_Rigid_gleltfxuzemeimo(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = k_RigidBody_Rigid_j(iobj_8);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->Gravity[0] = 0.0;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = -9.81;
  obj->VelocityNumber = 7.0;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  k_RigidBody_Rigid_g(&obj->Base);
  return b_obj;
}

// Model step function
void katana_smo_step(void)
{
  robotics_slmanip_internal_blo_T *obj;
  t_robotics_manip_internal_Rig_T *obj_0;
  emxArray_f_cell_wrap_katana_s_T *Ttree;
  emxArray_char_T_katana_smo_T *bname;
  r_robotics_manip_internal_Rig_T *obj_1;
  robotics_slmanip_internal__gl_T *obj_2;
  emxArray_real_T_katana_smo_T *L;
  emxArray_real_T_katana_smo_T *lambda;
  emxArray_real_T_katana_smo_T *H;
  emxArray_real_T_katana_smo_T *tmp;
  static const char_T tmp_0[17] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'b', 'a',
    's', 'e', '_', 'f', 'r', 'a', 'm', 'e' };

  static const char_T tmp_1[23] = { 'k', 'a', 't', 'a', 'n', 'a', '_', 'm', 'o',
    't', 'o', 'r', '4', '_', 'l', 'i', 'f', 't', '_', 'l', 'i', 'n', 'k' };

  int32_T exitg1;
  boolean_T exitg2;
  if (rtmIsMajorTimeStep(katana_smo_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&katana_smo_M->solverInfo,
                          ((katana_smo_M->Timing.clockTick0+1)*
      katana_smo_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(katana_smo_M)) {
    katana_smo_M->Timing.t[0] = rtsiGetT(&katana_smo_M->solverInfo);
  }

  katana_smo_emxInit_real_T(&H, 2);
  if (rtmIsMajorTimeStep(katana_smo_M) &&
      katana_smo_M->Timing.TaskCounters.TID[1] == 0) {
    // Outputs for Atomic SubSystem: '<S3>/Subscribe'
    // MATLABSystem: '<S9>/SourceBlock' incorporates:
    //   Inport: '<S11>/In1'

    katana_smo_SystemCore_step(&katana_smo_B.b_varargout_1, katana_smo_B.bias,
      &katana_smo_B.b_varargout_2_Data_SL_Info_Curr,
      &katana_smo_B.b_varargout_2_Data_SL_Info_Rece,
      &katana_smo_B.b_varargout_2_Layout_DataOffset,
      katana_smo_B.b_varargout_2_Layout_Dim,
      &katana_smo_B.b_varargout_2_Layout_Dim_SL_Inf,
      &katana_smo_B.b_varargout_2_Layout_Dim_SL_I_e);

    // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S11>/Enable'

    if (katana_smo_B.b_varargout_1) {
      for (katana_smo_B.i = 0; katana_smo_B.i < 7; katana_smo_B.i++) {
        katana_smo_B.In1_h.Data[katana_smo_B.i] =
          katana_smo_B.bias[katana_smo_B.i];
      }

      katana_smo_B.In1_h.Data_SL_Info.CurrentLength =
        katana_smo_B.b_varargout_2_Data_SL_Info_Curr;
      katana_smo_B.In1_h.Data_SL_Info.ReceivedLength =
        katana_smo_B.b_varargout_2_Data_SL_Info_Rece;
      katana_smo_B.In1_h.Layout.DataOffset =
        katana_smo_B.b_varargout_2_Layout_DataOffset;
      memcpy(&katana_smo_B.In1_h.Layout.Dim[0],
             &katana_smo_B.b_varargout_2_Layout_Dim[0], sizeof
             (SL_Bus_katana_smo_std_msgs_MultiArrayDimension) << 4U);
      katana_smo_B.In1_h.Layout.Dim_SL_Info.CurrentLength =
        katana_smo_B.b_varargout_2_Layout_Dim_SL_Inf;
      katana_smo_B.In1_h.Layout.Dim_SL_Info.ReceivedLength =
        katana_smo_B.b_varargout_2_Layout_Dim_SL_I_e;
    }

    // End of MATLABSystem: '<S9>/SourceBlock'
    // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe'

    // MATLABSystem: '<S17>/MATLAB System'
    RigidBodyTreeDynamics_massMatri(&katana_smo_DW.obj_b.TreeInternal,
      katana_smo_B.In1_h.Data, H);
    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 49; katana_smo_B.b_kstr
         ++) {
      katana_smo_B.MATLABSystem[katana_smo_B.b_kstr] = H->
        data[katana_smo_B.b_kstr];
    }

    // End of MATLABSystem: '<S17>/MATLAB System'
    katana_smo_emxInit_f_cell_wrap(&Ttree, 2);
    katana_smo_emxInit_char_T(&bname, 2);

    // MATLABSystem: '<S16>/MATLAB System'
    obj = &katana_smo_DW.obj_bm;
    obj_0 = &katana_smo_DW.obj_bm.TreeInternal;
    RigidBodyTree_forwardKinematics(&obj->TreeInternal, katana_smo_B.In1_h.Data,
      Ttree);
    katana_smo_B.bid1 = -1.0;
    katana_smo_B.b_kstr = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = obj_0->Base.NameInternal->size[1];
    katana_emxEnsureCapacity_char_T(bname, katana_smo_B.b_kstr);
    katana_smo_B.n_k = obj_0->Base.NameInternal->size[0] *
      obj_0->Base.NameInternal->size[1] - 1;
    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <= katana_smo_B.n_k;
         katana_smo_B.b_kstr++) {
      bname->data[katana_smo_B.b_kstr] = obj_0->Base.NameInternal->
        data[katana_smo_B.b_kstr];
    }

    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 17; katana_smo_B.b_kstr
         ++) {
      katana_smo_B.b_i[katana_smo_B.b_kstr] = tmp_0[katana_smo_B.b_kstr];
    }

    katana_smo_B.b_varargout_1 = false;
    if (bname->size[1] == 17) {
      katana_smo_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr - 1 < 17) {
          katana_smo_B.n_k = katana_smo_B.b_kstr - 1;
          if (bname->data[katana_smo_B.n_k] != katana_smo_B.b_i[katana_smo_B.n_k])
          {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr++;
          }
        } else {
          katana_smo_B.b_varargout_1 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_varargout_1) {
      katana_smo_B.bid1 = 0.0;
    } else {
      katana_smo_B.vNum = obj->TreeInternal.NumBodies;
      katana_smo_B.i = 0;
      exitg2 = false;
      while ((!exitg2) && (katana_smo_B.i <= static_cast<int32_T>
                           (katana_smo_B.vNum) - 1)) {
        obj_1 = obj_0->Bodies[katana_smo_B.i];
        katana_smo_B.b_kstr = bname->size[0] * bname->size[1];
        bname->size[0] = 1;
        bname->size[1] = obj_1->NameInternal->size[1];
        katana_emxEnsureCapacity_char_T(bname, katana_smo_B.b_kstr);
        katana_smo_B.n_k = obj_1->NameInternal->size[0] * obj_1->
          NameInternal->size[1] - 1;
        for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <= katana_smo_B.n_k;
             katana_smo_B.b_kstr++) {
          bname->data[katana_smo_B.b_kstr] = obj_1->NameInternal->
            data[katana_smo_B.b_kstr];
        }

        for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 17;
             katana_smo_B.b_kstr++) {
          katana_smo_B.b_i[katana_smo_B.b_kstr] = tmp_0[katana_smo_B.b_kstr];
        }

        katana_smo_B.b_varargout_1 = false;
        if (bname->size[1] == 17) {
          katana_smo_B.b_kstr = 1;
          do {
            exitg1 = 0;
            if (katana_smo_B.b_kstr - 1 < 17) {
              katana_smo_B.n_k = katana_smo_B.b_kstr - 1;
              if (bname->data[katana_smo_B.n_k] !=
                  katana_smo_B.b_i[katana_smo_B.n_k]) {
                exitg1 = 1;
              } else {
                katana_smo_B.b_kstr++;
              }
            } else {
              katana_smo_B.b_varargout_1 = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (katana_smo_B.b_varargout_1) {
          katana_smo_B.bid1 = static_cast<real_T>(katana_smo_B.i) + 1.0;
          exitg2 = true;
        } else {
          katana_smo_B.i++;
        }
      }
    }

    if (katana_smo_B.bid1 == 0.0) {
      memset(&katana_smo_B.T1[0], 0, sizeof(real_T) << 4U);
      katana_smo_B.T1[0] = 1.0;
      katana_smo_B.T1[5] = 1.0;
      katana_smo_B.T1[10] = 1.0;
      katana_smo_B.T1[15] = 1.0;
    } else {
      for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 16;
           katana_smo_B.b_kstr++) {
        katana_smo_B.T1[katana_smo_B.b_kstr] = Ttree->data[static_cast<int32_T>
          (katana_smo_B.bid1) - 1].f1[katana_smo_B.b_kstr];
      }
    }

    katana_smo_B.bid1 = -1.0;
    katana_smo_B.b_kstr = bname->size[0] * bname->size[1];
    bname->size[0] = 1;
    bname->size[1] = obj_0->Base.NameInternal->size[1];
    katana_emxEnsureCapacity_char_T(bname, katana_smo_B.b_kstr);
    katana_smo_B.n_k = obj_0->Base.NameInternal->size[0] *
      obj_0->Base.NameInternal->size[1] - 1;
    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <= katana_smo_B.n_k;
         katana_smo_B.b_kstr++) {
      bname->data[katana_smo_B.b_kstr] = obj_0->Base.NameInternal->
        data[katana_smo_B.b_kstr];
    }

    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 23; katana_smo_B.b_kstr
         ++) {
      katana_smo_B.b_n[katana_smo_B.b_kstr] = tmp_1[katana_smo_B.b_kstr];
    }

    katana_smo_B.b_varargout_1 = false;
    if (bname->size[1] == 23) {
      katana_smo_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (katana_smo_B.b_kstr - 1 < 23) {
          katana_smo_B.n_k = katana_smo_B.b_kstr - 1;
          if (bname->data[katana_smo_B.n_k] != katana_smo_B.b_n[katana_smo_B.n_k])
          {
            exitg1 = 1;
          } else {
            katana_smo_B.b_kstr++;
          }
        } else {
          katana_smo_B.b_varargout_1 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_smo_B.b_varargout_1) {
      katana_smo_B.bid1 = 0.0;
    } else {
      katana_smo_B.vNum = obj->TreeInternal.NumBodies;
      katana_smo_B.i = 0;
      exitg2 = false;
      while ((!exitg2) && (katana_smo_B.i <= static_cast<int32_T>
                           (katana_smo_B.vNum) - 1)) {
        obj_1 = obj_0->Bodies[katana_smo_B.i];
        katana_smo_B.b_kstr = bname->size[0] * bname->size[1];
        bname->size[0] = 1;
        bname->size[1] = obj_1->NameInternal->size[1];
        katana_emxEnsureCapacity_char_T(bname, katana_smo_B.b_kstr);
        katana_smo_B.n_k = obj_1->NameInternal->size[0] * obj_1->
          NameInternal->size[1] - 1;
        for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <= katana_smo_B.n_k;
             katana_smo_B.b_kstr++) {
          bname->data[katana_smo_B.b_kstr] = obj_1->NameInternal->
            data[katana_smo_B.b_kstr];
        }

        for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 23;
             katana_smo_B.b_kstr++) {
          katana_smo_B.b_n[katana_smo_B.b_kstr] = tmp_1[katana_smo_B.b_kstr];
        }

        katana_smo_B.b_varargout_1 = false;
        if (bname->size[1] == 23) {
          katana_smo_B.b_kstr = 1;
          do {
            exitg1 = 0;
            if (katana_smo_B.b_kstr - 1 < 23) {
              katana_smo_B.n_k = katana_smo_B.b_kstr - 1;
              if (bname->data[katana_smo_B.n_k] !=
                  katana_smo_B.b_n[katana_smo_B.n_k]) {
                exitg1 = 1;
              } else {
                katana_smo_B.b_kstr++;
              }
            } else {
              katana_smo_B.b_varargout_1 = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (katana_smo_B.b_varargout_1) {
          katana_smo_B.bid1 = static_cast<real_T>(katana_smo_B.i) + 1.0;
          exitg2 = true;
        } else {
          katana_smo_B.i++;
        }
      }
    }

    katana_smo_emxFree_char_T(&bname);

    // MATLABSystem: '<S16>/MATLAB System'
    if (katana_smo_B.bid1 == 0.0) {
      memset(&katana_smo_B.T2[0], 0, sizeof(real_T) << 4U);
      katana_smo_B.T2[0] = 1.0;
      katana_smo_B.T2[5] = 1.0;
      katana_smo_B.T2[10] = 1.0;
      katana_smo_B.T2[15] = 1.0;
    } else {
      for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 16;
           katana_smo_B.b_kstr++) {
        katana_smo_B.T2[katana_smo_B.b_kstr] = Ttree->data[static_cast<int32_T>
          (katana_smo_B.bid1) - 1].f1[katana_smo_B.b_kstr];
      }
    }

    katana_smo_emxFree_f_cell_wrap(&Ttree);

    // MATLABSystem: '<S16>/MATLAB System'
    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 3; katana_smo_B.b_kstr++)
    {
      katana_smo_B.R_p[3 * katana_smo_B.b_kstr] =
        katana_smo_B.T2[katana_smo_B.b_kstr];
      katana_smo_B.R_p[3 * katana_smo_B.b_kstr + 1] =
        katana_smo_B.T2[katana_smo_B.b_kstr + 4];
      katana_smo_B.R_p[3 * katana_smo_B.b_kstr + 2] =
        katana_smo_B.T2[katana_smo_B.b_kstr + 8];
    }

    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 9; katana_smo_B.b_kstr++)
    {
      katana_smo_B.R_l[katana_smo_B.b_kstr] =
        -katana_smo_B.R_p[katana_smo_B.b_kstr];
    }

    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 3; katana_smo_B.b_kstr++)
    {
      katana_smo_B.i = katana_smo_B.b_kstr << 2;
      katana_smo_B.R_k[katana_smo_B.i] = katana_smo_B.R_p[3 *
        katana_smo_B.b_kstr];
      katana_smo_B.R_k[katana_smo_B.i + 1] = katana_smo_B.R_p[3 *
        katana_smo_B.b_kstr + 1];
      katana_smo_B.R_k[katana_smo_B.i + 2] = katana_smo_B.R_p[3 *
        katana_smo_B.b_kstr + 2];
      katana_smo_B.R_k[katana_smo_B.b_kstr + 12] =
        katana_smo_B.R_l[katana_smo_B.b_kstr + 6] * katana_smo_B.T2[14] +
        (katana_smo_B.R_l[katana_smo_B.b_kstr + 3] * katana_smo_B.T2[13] +
         katana_smo_B.R_l[katana_smo_B.b_kstr] * katana_smo_B.T2[12]);
    }

    katana_smo_B.R_k[3] = 0.0;
    katana_smo_B.R_k[7] = 0.0;
    katana_smo_B.R_k[11] = 0.0;
    katana_smo_B.R_k[15] = 1.0;
    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 4; katana_smo_B.b_kstr++)
    {
      for (katana_smo_B.n_k = 0; katana_smo_B.n_k < 4; katana_smo_B.n_k++) {
        katana_smo_B.i = katana_smo_B.b_kstr << 2;
        katana_smo_B.rtb_MATLABSystem_h_tmp = katana_smo_B.n_k + katana_smo_B.i;
        katana_smo_B.T2[katana_smo_B.rtb_MATLABSystem_h_tmp] = 0.0;
        katana_smo_B.T2[katana_smo_B.rtb_MATLABSystem_h_tmp] +=
          katana_smo_B.T1[katana_smo_B.i] * katana_smo_B.R_k[katana_smo_B.n_k];
        katana_smo_B.T2[katana_smo_B.rtb_MATLABSystem_h_tmp] +=
          katana_smo_B.T1[katana_smo_B.i + 1] *
          katana_smo_B.R_k[katana_smo_B.n_k + 4];
        katana_smo_B.T2[katana_smo_B.rtb_MATLABSystem_h_tmp] +=
          katana_smo_B.T1[katana_smo_B.i + 2] *
          katana_smo_B.R_k[katana_smo_B.n_k + 8];
        katana_smo_B.T2[katana_smo_B.rtb_MATLABSystem_h_tmp] +=
          katana_smo_B.T1[katana_smo_B.i + 3] *
          katana_smo_B.R_k[katana_smo_B.n_k + 12];
      }
    }

    // Outputs for Atomic SubSystem: '<S3>/Subscribe1'
    // MATLABSystem: '<S10>/SourceBlock' incorporates:
    //   Inport: '<S12>/In1'

    katana_smo_SystemCore_step_g(&katana_smo_B.b_varargout_1, katana_smo_B.bias,
      &katana_smo_B.b_varargout_2_Data_SL_Info_Curr,
      &katana_smo_B.b_varargout_2_Data_SL_Info_Rece,
      &katana_smo_B.b_varargout_2_Layout_DataOffset,
      katana_smo_B.b_varargout_2_Layout_Dim,
      &katana_smo_B.b_varargout_2_Layout_Dim_SL_Inf,
      &katana_smo_B.b_varargout_2_Layout_Dim_SL_I_e);

    // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
    //   EnablePort: '<S12>/Enable'

    if (katana_smo_B.b_varargout_1) {
      for (katana_smo_B.i = 0; katana_smo_B.i < 7; katana_smo_B.i++) {
        katana_smo_B.In1.Data[katana_smo_B.i] = katana_smo_B.bias[katana_smo_B.i];
      }

      katana_smo_B.In1.Data_SL_Info.CurrentLength =
        katana_smo_B.b_varargout_2_Data_SL_Info_Curr;
      katana_smo_B.In1.Data_SL_Info.ReceivedLength =
        katana_smo_B.b_varargout_2_Data_SL_Info_Rece;
      katana_smo_B.In1.Layout.DataOffset =
        katana_smo_B.b_varargout_2_Layout_DataOffset;
      memcpy(&katana_smo_B.In1.Layout.Dim[0],
             &katana_smo_B.b_varargout_2_Layout_Dim[0], sizeof
             (SL_Bus_katana_smo_std_msgs_MultiArrayDimension) << 4U);
      katana_smo_B.In1.Layout.Dim_SL_Info.CurrentLength =
        katana_smo_B.b_varargout_2_Layout_Dim_SL_Inf;
      katana_smo_B.In1.Layout.Dim_SL_Info.ReceivedLength =
        katana_smo_B.b_varargout_2_Layout_Dim_SL_I_e;
    }

    // End of MATLABSystem: '<S10>/SourceBlock'
    // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
    // End of Outputs for SubSystem: '<S3>/Subscribe1'
  }

  katana_smo_emxInit_real_T(&L, 2);
  katana_smo_emxInit_real_T(&lambda, 2);
  katana_smo_emxInit_real_T(&tmp, 1);

  // MATLABSystem: '<S19>/MATLAB System' incorporates:
  //   Constant: '<S15>/Constant2'
  //   Integrator: '<S15>/Integrator'

  obj_2 = &katana_smo_DW.obj;
  RigidBodyTreeDynamics_massMat_g(&katana_smo_DW.obj.TreeInternal,
    katana_smo_B.In1_h.Data, L, lambda);
  katana_smo_B.vNum = obj_2->TreeInternal.VelocityNumber;
  katana_smo_B.rtb_MATLABSystem_h_tmp = static_cast<int32_T>(katana_smo_B.vNum);
  katana_smo_B.b_kstr = tmp->size[0];
  tmp->size[0] = katana_smo_B.rtb_MATLABSystem_h_tmp;
  katana_emxEnsureCapacity_real_T(tmp, katana_smo_B.b_kstr);
  for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <
       katana_smo_B.rtb_MATLABSystem_h_tmp; katana_smo_B.b_kstr++) {
    tmp->data[katana_smo_B.b_kstr] = 0.0;
  }

  RigidBodyTreeDynamics_inverseDy(&obj_2->TreeInternal, katana_smo_B.In1_h.Data,
    &katana_smo_X.Integrator_CSTATE[7], katana_smo_P.Constant2_Value,
    katana_smo_B.bias);
  katana_smo_emxFree_real_T(&tmp);

  // MATLABSystem: '<S19>/MATLAB System'
  for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 7; katana_smo_B.b_kstr++)
  {
    katana_smo_B.bias[katana_smo_B.b_kstr] =
      katana_smo_B.In1.Data[katana_smo_B.b_kstr] -
      katana_smo_B.bias[katana_smo_B.b_kstr];
  }

  if ((L->size[0] == 0) || (L->size[1] == 0)) {
    katana_smo_B.u1 = 0;
  } else {
    katana_smo_B.i = L->size[0];
    katana_smo_B.u1 = L->size[1];
    if (katana_smo_B.i > katana_smo_B.u1) {
      katana_smo_B.u1 = katana_smo_B.i;
    }
  }

  katana_smo_B.b_kstr = H->size[0] * H->size[1];
  H->size[0] = L->size[0];
  H->size[1] = L->size[1];
  katana_emxEnsureCapacity_real_T(H, katana_smo_B.b_kstr);
  katana_smo_B.n_k = L->size[0] * L->size[1] - 1;
  for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <= katana_smo_B.n_k;
       katana_smo_B.b_kstr++) {
    H->data[katana_smo_B.b_kstr] = L->data[katana_smo_B.b_kstr];
  }

  katana_smo_B.iend = static_cast<int32_T>(((-1.0 - static_cast<real_T>
    (katana_smo_B.u1)) + 1.0) / -1.0) - 1;
  for (katana_smo_B.i = 0; katana_smo_B.i <= katana_smo_B.iend; katana_smo_B.i++)
  {
    katana_smo_B.j = static_cast<real_T>(katana_smo_B.u1) + -static_cast<real_T>
      (katana_smo_B.i);
    katana_smo_B.b_kstr = static_cast<int32_T>(katana_smo_B.j);
    katana_smo_B.n_k = katana_smo_B.b_kstr - 1;
    H->data[(static_cast<int32_T>(katana_smo_B.j) + H->size[0] *
             (static_cast<int32_T>(katana_smo_B.j) - 1)) - 1] = sqrt(H->data
      [(katana_smo_B.n_k * H->size[0] + katana_smo_B.b_kstr) - 1]);
    katana_smo_B.bid1 = lambda->data[katana_smo_B.n_k];
    while (katana_smo_B.bid1 > 0.0) {
      katana_smo_B.i_p = static_cast<int32_T>(katana_smo_B.bid1) - 1;
      H->data[(static_cast<int32_T>(katana_smo_B.j) + H->size[0] * (static_cast<
                int32_T>(katana_smo_B.bid1) - 1)) - 1] = H->data
        [(katana_smo_B.i_p * H->size[0] + katana_smo_B.b_kstr) - 1] / H->data[((
        static_cast<int32_T>(katana_smo_B.j) - 1) * H->size[0] +
        static_cast<int32_T>(katana_smo_B.j)) - 1];
      katana_smo_B.bid1 = lambda->data[katana_smo_B.i_p];
    }

    katana_smo_B.bid1 = lambda->data[katana_smo_B.n_k];
    while (katana_smo_B.bid1 > 0.0) {
      katana_smo_B.j = katana_smo_B.bid1;
      while (katana_smo_B.j > 0.0) {
        katana_smo_B.n_k = static_cast<int32_T>(katana_smo_B.j) - 1;
        H->data[(static_cast<int32_T>(katana_smo_B.bid1) + H->size[0] * (
                  static_cast<int32_T>(katana_smo_B.j) - 1)) - 1] = H->data
          [(katana_smo_B.n_k * H->size[0] + static_cast<int32_T>
            (katana_smo_B.bid1)) - 1] - H->data[((static_cast<int32_T>
          (katana_smo_B.bid1) - 1) * H->size[0] + katana_smo_B.b_kstr) - 1] *
          H->data[((static_cast<int32_T>(katana_smo_B.j) - 1) * H->size[0] +
                   katana_smo_B.b_kstr) - 1];
        katana_smo_B.j = lambda->data[katana_smo_B.n_k];
      }

      katana_smo_B.bid1 = lambda->data[static_cast<int32_T>(katana_smo_B.bid1) -
        1];
    }
  }

  katana_smo_B.b_kstr = L->size[0] * L->size[1];
  L->size[0] = H->size[0];
  L->size[1] = H->size[1];
  katana_emxEnsureCapacity_real_T(L, katana_smo_B.b_kstr);
  katana_smo_B.n_k = H->size[0] * H->size[1] - 1;
  for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr <= katana_smo_B.n_k;
       katana_smo_B.b_kstr++) {
    L->data[katana_smo_B.b_kstr] = H->data[katana_smo_B.b_kstr];
  }

  katana_smo_B.n_k = H->size[1];
  if ((H->size[0] == 0) || (H->size[1] == 0) || (1 >= H->size[1])) {
  } else {
    katana_smo_B.iend = 0;
    for (katana_smo_B.b_kstr = 2; katana_smo_B.b_kstr <= katana_smo_B.n_k;
         katana_smo_B.b_kstr++) {
      for (katana_smo_B.i = 0; katana_smo_B.i <= katana_smo_B.iend;
           katana_smo_B.i++) {
        L->data[katana_smo_B.i + L->size[0] * (katana_smo_B.b_kstr - 1)] = 0.0;
      }

      if (katana_smo_B.iend + 1 < H->size[0]) {
        katana_smo_B.iend++;
      }
    }
  }

  katana_smo_emxFree_real_T(&H);

  // MATLABSystem: '<S19>/MATLAB System'
  katana_smo_B.iend = static_cast<int32_T>(((-1.0 - katana_smo_B.vNum) + 1.0) /
    -1.0) - 1;
  for (katana_smo_B.i = 0; katana_smo_B.i <= katana_smo_B.iend; katana_smo_B.i++)
  {
    katana_smo_B.n_k = static_cast<int32_T>(katana_smo_B.vNum +
      -static_cast<real_T>(katana_smo_B.i));
    katana_smo_B.b_kstr = katana_smo_B.n_k - 1;
    katana_smo_B.bias[katana_smo_B.b_kstr] /= L->data[(katana_smo_B.b_kstr *
      L->size[0] + katana_smo_B.n_k) - 1];
    katana_smo_B.j = lambda->data[katana_smo_B.b_kstr];
    while (katana_smo_B.j > 0.0) {
      katana_smo_B.u1 = static_cast<int32_T>(katana_smo_B.j) - 1;
      katana_smo_B.bias[katana_smo_B.u1] -= L->data[(katana_smo_B.u1 * L->size[0]
        + katana_smo_B.n_k) - 1] * katana_smo_B.bias[katana_smo_B.b_kstr];
      katana_smo_B.j = lambda->data[katana_smo_B.u1];
    }
  }

  katana_smo_B.n_k = katana_smo_B.rtb_MATLABSystem_h_tmp - 1;
  for (katana_smo_B.i = 0; katana_smo_B.i <= katana_smo_B.n_k; katana_smo_B.i++)
  {
    katana_smo_B.j = lambda->data[katana_smo_B.i];
    while (katana_smo_B.j > 0.0) {
      katana_smo_B.b_kstr = static_cast<int32_T>(katana_smo_B.j) - 1;
      katana_smo_B.bias[katana_smo_B.i] -= L->data[katana_smo_B.b_kstr * L->
        size[0] + katana_smo_B.i] * katana_smo_B.bias[katana_smo_B.b_kstr];
      katana_smo_B.j = lambda->data[katana_smo_B.b_kstr];
    }

    katana_smo_B.bias[katana_smo_B.i] /= L->data[L->size[0] * katana_smo_B.i +
      katana_smo_B.i];
  }

  katana_smo_emxFree_real_T(&lambda);
  katana_smo_emxFree_real_T(&L);
  if (rtmIsMajorTimeStep(katana_smo_M) &&
      katana_smo_M->Timing.TaskCounters.TID[3] == 0) {
    // MATLABSystem: '<S1>/Get Parameter7'
    ParamGet_katana_smo_421.get_parameter(&katana_smo_B.GetParameter7_o1);

    // MATLABSystem: '<S1>/Get Parameter8'
    ParamGet_katana_smo_422.get_parameter(&katana_smo_B.GetParameter8_o1);

    // MATLABSystem: '<S1>/Get Parameter9'
    ParamGet_katana_smo_423.get_parameter(&katana_smo_B.GetParameter9_o1);
  }

  // MATLAB Function: '<S15>/Observer' incorporates:
  //   Integrator: '<S15>/Integrator'
  //   MATLABSystem: '<S19>/MATLAB System'

  memset(&katana_smo_B.xp_est[0], 0, 14U * sizeof(real_T));
  for (katana_smo_B.i = 0; katana_smo_B.i < 7; katana_smo_B.i++) {
    katana_smo_B.vNum = 2.0 / (exp
      ((katana_smo_X.Integrator_CSTATE[katana_smo_B.i] -
        katana_smo_B.In1_h.Data[katana_smo_B.i]) / katana_smo_B.GetParameter9_o1)
      + 1.0) - 1.0;
    katana_smo_B.z[katana_smo_B.i] = katana_smo_B.vNum *
      katana_smo_B.GetParameter8_o1;
    katana_smo_B.xp_est[katana_smo_B.i] = katana_smo_B.vNum * (sqrt(fabs
      (katana_smo_B.In1_h.Data[katana_smo_B.i] -
       katana_smo_X.Integrator_CSTATE[katana_smo_B.i])) *
      katana_smo_B.GetParameter7_o1) +
      katana_smo_X.Integrator_CSTATE[katana_smo_B.i + 7];
    katana_smo_B.xp_est[katana_smo_B.i + 7] = katana_smo_B.bias[katana_smo_B.i]
      + katana_smo_B.z[katana_smo_B.i];
  }

  // End of MATLAB Function: '<S15>/Observer'
  if (rtmIsMajorTimeStep(katana_smo_M) &&
      katana_smo_M->Timing.TaskCounters.TID[1] == 0) {
    // MATLABSystem: '<S14>/Coordinate Transformation Conversion1'
    katana_smo_B.vNum = sqrt(katana_smo_B.T2[0] * katana_smo_B.T2[0] +
      katana_smo_B.T2[1] * katana_smo_B.T2[1]);
    katana_smo_B.CoordinateTransformationConvers[0] = rt_atan2d_snf
      (katana_smo_B.T2[6], katana_smo_B.T2[10]);
    katana_smo_B.CoordinateTransformationConvers[1] = rt_atan2d_snf
      (-katana_smo_B.T2[2], katana_smo_B.vNum);
    katana_smo_B.CoordinateTransformationConvers[2] = rt_atan2d_snf
      (katana_smo_B.T2[1], katana_smo_B.T2[0]);
    if (katana_smo_B.vNum < 2.2204460492503131E-15) {
      katana_smo_B.n_k = 0;
      for (katana_smo_B.i = 0; katana_smo_B.i < 1; katana_smo_B.i++) {
        katana_smo_B.n_k++;
      }

      katana_smo_B.rtb_MATLABSystem_h_size[0] = 1;
      katana_smo_B.rtb_MATLABSystem_h_size[1] = 1;
      katana_smo_B.rtb_MATLABSystem_h_size[2] = katana_smo_B.n_k;
      katana_smo_B.rtb_MATLABSystem_h_size_o[0] = 1;
      katana_smo_B.rtb_MATLABSystem_h_size_o[1] = 1;
      katana_smo_B.rtb_MATLABSystem_h_size_o[2] = katana_smo_B.n_k;
      katana_smo_B.rtb_MATLABSystem_h_size_n[0] = 1;
      katana_smo_B.rtb_MATLABSystem_h_size_n[1] = 1;
      katana_smo_B.rtb_MATLABSystem_h_size_n[2] = katana_smo_B.n_k;
      for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < katana_smo_B.n_k;
           katana_smo_B.b_kstr++) {
        katana_smo_B.rtb_MATLABSystem_h_data = -katana_smo_B.T2[9];
        katana_smo_B.rtb_MATLABSystem_h_data_p = katana_smo_B.T2[5];
        katana_smo_B.rtb_MATLABSystem_h_data_p5 = -katana_smo_B.T2[2];
      }

      katana_smo_atan2(&katana_smo_B.rtb_MATLABSystem_h_data,
                       katana_smo_B.rtb_MATLABSystem_h_size,
                       &katana_smo_B.rtb_MATLABSystem_h_data_p,
                       katana_smo_B.rtb_MATLABSystem_h_size_o,
                       &katana_smo_B.tmp_data, katana_smo_B.tmp_size);
      katana_smo_B.sy_size[0] = 1;
      katana_smo_B.sy_size[1] = 1;
      katana_smo_B.sy_size[2] = katana_smo_B.n_k;
      for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < katana_smo_B.n_k;
           katana_smo_B.b_kstr++) {
        katana_smo_B.rtb_MATLABSystem_h_data = katana_smo_B.vNum;
      }

      katana_smo_atan2(&katana_smo_B.rtb_MATLABSystem_h_data_p5,
                       katana_smo_B.rtb_MATLABSystem_h_size_n,
                       &katana_smo_B.rtb_MATLABSystem_h_data,
                       katana_smo_B.sy_size,
                       &katana_smo_B.rtb_MATLABSystem_h_data_p,
                       katana_smo_B.rtb_MATLABSystem_h_size);
      katana_smo_B.n_k = katana_smo_B.tmp_size[2];
      for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < katana_smo_B.n_k;
           katana_smo_B.b_kstr++) {
        katana_smo_B.CoordinateTransformationConvers[0] = katana_smo_B.tmp_data;
      }

      katana_smo_B.n_k = katana_smo_B.rtb_MATLABSystem_h_size[2];
      for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < katana_smo_B.n_k;
           katana_smo_B.b_kstr++) {
        katana_smo_B.CoordinateTransformationConvers[1] =
          katana_smo_B.rtb_MATLABSystem_h_data_p;
      }

      katana_smo_B.CoordinateTransformationConvers[2] = 0.0;
    }

    katana_smo_B.vNum = katana_smo_B.CoordinateTransformationConvers[0];
    katana_smo_B.CoordinateTransformationConvers[0] =
      katana_smo_B.CoordinateTransformationConvers[2];
    katana_smo_B.CoordinateTransformationConvers[2] = katana_smo_B.vNum;

    // End of MATLABSystem: '<S14>/Coordinate Transformation Conversion1'
  }

  // MATLAB Function: '<S14>/mass estimator'
  katana_smo_B.vNum = cos(katana_smo_B.CoordinateTransformationConvers[0]);
  if (fabs(katana_smo_B.vNum) > 0.2) {
    // TransferFcn: '<S13>/Low Pass (z1)' incorporates:
    //   TransferFcn: '<S13>/Low Pass (z1)1'
    //   TransferFcn: '<S13>/Low Pass (z1)2'
    //   TransferFcn: '<S13>/Low Pass (z1)3'
    //   TransferFcn: '<S13>/Low Pass (z1)4'
    //   TransferFcn: '<S13>/Low Pass (z1)5'
    //   TransferFcn: '<S13>/Low Pass (z1)6'

    katana_smo_B.bid1 = katana_smo_P.lowpass_B[0] / katana_smo_P.lowpass_A[0];
    katana_smo_B.j = katana_smo_P.lowpass_B[1] / katana_smo_P.lowpass_A[0] -
      katana_smo_B.bid1 * (katana_smo_P.lowpass_A[1] / katana_smo_P.lowpass_A[0]);
    katana_smo_B.rtb_LowPassz1_tmp = katana_smo_P.lowpass_B[0] /
      katana_smo_P.lowpass_A[0];
    katana_smo_B.rtb_LowPassz1_tmp_a = katana_smo_P.lowpass_B[2] /
      katana_smo_P.lowpass_A[0] - katana_smo_B.bid1 * (katana_smo_P.lowpass_A[2]
      / katana_smo_P.lowpass_A[0]);
    katana_smo_B.rtb_LowPassz1_tmp_e = katana_smo_P.lowpass_B[3] /
      katana_smo_P.lowpass_A[0] - katana_smo_B.bid1 * (katana_smo_P.lowpass_A[3]
      / katana_smo_P.lowpass_A[0]);
    katana_smo_B.bid1 = katana_smo_P.lowpass_B[4] / katana_smo_P.lowpass_A[0] -
      katana_smo_B.bid1 * (katana_smo_P.lowpass_A[4] / katana_smo_P.lowpass_A[0]);

    // SignalConversion generated from: '<S18>/ SFunction ' incorporates:
    //   TransferFcn: '<S13>/Low Pass (z1)'
    //   TransferFcn: '<S13>/Low Pass (z1)1'
    //   TransferFcn: '<S13>/Low Pass (z1)2'
    //   TransferFcn: '<S13>/Low Pass (z1)3'
    //   TransferFcn: '<S13>/Low Pass (z1)4'
    //   TransferFcn: '<S13>/Low Pass (z1)5'
    //   TransferFcn: '<S13>/Low Pass (z1)6'

    katana_smo_B.bias[0] = (((katana_smo_B.j * katana_smo_X.LowPassz1_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[0]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz1_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz1_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz1_CSTATE[3];
    katana_smo_B.bias[1] = (((katana_smo_B.j * katana_smo_X.LowPassz11_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz11_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz11_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz11_CSTATE[3];
    katana_smo_B.bias[2] = (((katana_smo_B.j * katana_smo_X.LowPassz12_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[2]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz12_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz12_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz12_CSTATE[3];
    katana_smo_B.bias[3] = (((katana_smo_B.j * katana_smo_X.LowPassz13_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[3]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz13_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz13_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz13_CSTATE[3];
    katana_smo_B.bias[4] = (((katana_smo_B.j * katana_smo_X.LowPassz14_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[4]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz14_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz14_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz14_CSTATE[3];
    katana_smo_B.bias[5] = (((katana_smo_B.j * katana_smo_X.LowPassz15_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[5]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz15_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz15_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz15_CSTATE[3];
    katana_smo_B.bias[6] = (((katana_smo_B.j * katana_smo_X.LowPassz16_CSTATE[0]
      + katana_smo_B.rtb_LowPassz1_tmp * katana_smo_B.z[6]) +
      katana_smo_B.rtb_LowPassz1_tmp_a * katana_smo_X.LowPassz16_CSTATE[1]) +
      katana_smo_B.rtb_LowPassz1_tmp_e * katana_smo_X.LowPassz16_CSTATE[2]) +
      katana_smo_B.bid1 * katana_smo_X.LowPassz16_CSTATE[3];
    for (katana_smo_B.b_kstr = 0; katana_smo_B.b_kstr < 7; katana_smo_B.b_kstr++)
    {
      katana_smo_B.dv5[katana_smo_B.b_kstr] = 0.0;
      for (katana_smo_B.n_k = 0; katana_smo_B.n_k < 7; katana_smo_B.n_k++) {
        katana_smo_B.dv5[katana_smo_B.b_kstr] += katana_smo_B.MATLABSystem[7 *
          katana_smo_B.n_k + katana_smo_B.b_kstr] *
          katana_smo_B.bias[katana_smo_B.n_k];
      }
    }

    katana_smo_B.vNum = katana_smo_B.dv5[3] / (2.546676 * katana_smo_B.vNum);
  } else {
    katana_smo_B.vNum = 0.0;
  }

  // End of MATLAB Function: '<S14>/mass estimator'

  // RateTransition: '<S2>/Rate Transition'
  if ((rtmIsMajorTimeStep(katana_smo_M) &&
       katana_smo_M->Timing.TaskCounters.TID[1] == 0) && (rtmIsMajorTimeStep
       (katana_smo_M) &&
       katana_smo_M->Timing.TaskCounters.TID[2] == 0)) {
    katana_smo_DW.RateTransition_Buffer = katana_smo_B.vNum;
  }

  if (rtmIsMajorTimeStep(katana_smo_M) &&
      katana_smo_M->Timing.TaskCounters.TID[2] == 0) {
    // BusAssignment: '<S2>/Bus Assignment2'
    katana_smo_B.BusAssignment2.Data = katana_smo_DW.RateTransition_Buffer;

    // Outputs for Atomic SubSystem: '<S2>/Publish2'
    // MATLABSystem: '<S7>/SinkBlock'
    Pub_katana_smo_449.publish(&katana_smo_B.BusAssignment2);

    // End of Outputs for SubSystem: '<S2>/Publish2'
  }

  // End of RateTransition: '<S2>/Rate Transition'
  if (rtmIsMajorTimeStep(katana_smo_M) &&
      katana_smo_M->Timing.TaskCounters.TID[1] == 0) {
    // BusAssignment: '<S2>/Bus Assignment3' incorporates:
    //   Constant: '<S2>/Constant1'
    //   Constant: '<S6>/Constant'
    //   Integrator: '<S15>/Integrator'

    katana_smo_B.BusAssignment3 = katana_smo_P.Constant_Value_d;
    for (katana_smo_B.i = 0; katana_smo_B.i < 7; katana_smo_B.i++) {
      katana_smo_B.BusAssignment3.Data[katana_smo_B.i] =
        katana_smo_X.Integrator_CSTATE[katana_smo_B.i + 7];
    }

    katana_smo_B.BusAssignment3.Data_SL_Info.CurrentLength =
      katana_smo_P.Constant1_Value;
    katana_smo_B.BusAssignment3.Data_SL_Info.ReceivedLength =
      katana_smo_P.Constant1_Value;

    // End of BusAssignment: '<S2>/Bus Assignment3'

    // Outputs for Atomic SubSystem: '<S2>/Publish3'
    // MATLABSystem: '<S8>/SinkBlock'
    Pub_katana_smo_450.publish(&katana_smo_B.BusAssignment3);

    // End of Outputs for SubSystem: '<S2>/Publish3'
  }

  if (rtmIsMajorTimeStep(katana_smo_M)) {
    rt_ertODEUpdateContinuousStates(&katana_smo_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++katana_smo_M->Timing.clockTick0;
    katana_smo_M->Timing.t[0] = rtsiGetSolverStopTime(&katana_smo_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.004s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.004, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      katana_smo_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void katana_smo_derivatives(void)
{
  real_T LowPassz1_CSTATE_tmp;
  real_T LowPassz1_CSTATE_tmp_0;
  real_T LowPassz1_CSTATE_tmp_1;
  real_T LowPassz1_CSTATE_tmp_2;
  XDot_katana_smo_T *_rtXdot;
  _rtXdot = ((XDot_katana_smo_T *) katana_smo_M->derivs);

  // Derivatives for Integrator: '<S15>/Integrator'
  memcpy(&_rtXdot->Integrator_CSTATE[0], &katana_smo_B.xp_est[0], 14U * sizeof
         (real_T));

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)' incorporates:
  //   TransferFcn: '<S13>/Low Pass (z1)1'
  //   TransferFcn: '<S13>/Low Pass (z1)2'
  //   TransferFcn: '<S13>/Low Pass (z1)3'
  //   TransferFcn: '<S13>/Low Pass (z1)4'
  //   TransferFcn: '<S13>/Low Pass (z1)5'
  //   TransferFcn: '<S13>/Low Pass (z1)6'

  _rtXdot->LowPassz1_CSTATE[0] = 0.0;
  LowPassz1_CSTATE_tmp = -katana_smo_P.lowpass_A[1] / katana_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz1_CSTATE[0];
  _rtXdot->LowPassz1_CSTATE[1] = 0.0;
  LowPassz1_CSTATE_tmp_0 = -katana_smo_P.lowpass_A[2] / katana_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz1_CSTATE[1];
  _rtXdot->LowPassz1_CSTATE[2] = 0.0;
  LowPassz1_CSTATE_tmp_1 = -katana_smo_P.lowpass_A[3] / katana_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz1_CSTATE[2];
  _rtXdot->LowPassz1_CSTATE[3] = 0.0;
  LowPassz1_CSTATE_tmp_2 = -katana_smo_P.lowpass_A[4] / katana_smo_P.lowpass_A[0];
  _rtXdot->LowPassz1_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz1_CSTATE[3];
  _rtXdot->LowPassz1_CSTATE[1] += katana_smo_X.LowPassz1_CSTATE[0];
  _rtXdot->LowPassz1_CSTATE[2] += katana_smo_X.LowPassz1_CSTATE[1];
  _rtXdot->LowPassz1_CSTATE[3] += katana_smo_X.LowPassz1_CSTATE[2];
  _rtXdot->LowPassz1_CSTATE[0] += katana_smo_B.z[0];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)1'
  _rtXdot->LowPassz11_CSTATE[0] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz11_CSTATE[0];
  _rtXdot->LowPassz11_CSTATE[1] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz11_CSTATE[1];
  _rtXdot->LowPassz11_CSTATE[2] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz11_CSTATE[2];
  _rtXdot->LowPassz11_CSTATE[3] = 0.0;
  _rtXdot->LowPassz11_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz11_CSTATE[3];
  _rtXdot->LowPassz11_CSTATE[1] += katana_smo_X.LowPassz11_CSTATE[0];
  _rtXdot->LowPassz11_CSTATE[2] += katana_smo_X.LowPassz11_CSTATE[1];
  _rtXdot->LowPassz11_CSTATE[3] += katana_smo_X.LowPassz11_CSTATE[2];
  _rtXdot->LowPassz11_CSTATE[0] += katana_smo_B.z[1];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)2'
  _rtXdot->LowPassz12_CSTATE[0] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz12_CSTATE[0];
  _rtXdot->LowPassz12_CSTATE[1] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz12_CSTATE[1];
  _rtXdot->LowPassz12_CSTATE[2] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz12_CSTATE[2];
  _rtXdot->LowPassz12_CSTATE[3] = 0.0;
  _rtXdot->LowPassz12_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz12_CSTATE[3];
  _rtXdot->LowPassz12_CSTATE[1] += katana_smo_X.LowPassz12_CSTATE[0];
  _rtXdot->LowPassz12_CSTATE[2] += katana_smo_X.LowPassz12_CSTATE[1];
  _rtXdot->LowPassz12_CSTATE[3] += katana_smo_X.LowPassz12_CSTATE[2];
  _rtXdot->LowPassz12_CSTATE[0] += katana_smo_B.z[2];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)3'
  _rtXdot->LowPassz13_CSTATE[0] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz13_CSTATE[0];
  _rtXdot->LowPassz13_CSTATE[1] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz13_CSTATE[1];
  _rtXdot->LowPassz13_CSTATE[2] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz13_CSTATE[2];
  _rtXdot->LowPassz13_CSTATE[3] = 0.0;
  _rtXdot->LowPassz13_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz13_CSTATE[3];
  _rtXdot->LowPassz13_CSTATE[1] += katana_smo_X.LowPassz13_CSTATE[0];
  _rtXdot->LowPassz13_CSTATE[2] += katana_smo_X.LowPassz13_CSTATE[1];
  _rtXdot->LowPassz13_CSTATE[3] += katana_smo_X.LowPassz13_CSTATE[2];
  _rtXdot->LowPassz13_CSTATE[0] += katana_smo_B.z[3];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)4'
  _rtXdot->LowPassz14_CSTATE[0] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz14_CSTATE[0];
  _rtXdot->LowPassz14_CSTATE[1] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz14_CSTATE[1];
  _rtXdot->LowPassz14_CSTATE[2] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz14_CSTATE[2];
  _rtXdot->LowPassz14_CSTATE[3] = 0.0;
  _rtXdot->LowPassz14_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz14_CSTATE[3];
  _rtXdot->LowPassz14_CSTATE[1] += katana_smo_X.LowPassz14_CSTATE[0];
  _rtXdot->LowPassz14_CSTATE[2] += katana_smo_X.LowPassz14_CSTATE[1];
  _rtXdot->LowPassz14_CSTATE[3] += katana_smo_X.LowPassz14_CSTATE[2];
  _rtXdot->LowPassz14_CSTATE[0] += katana_smo_B.z[4];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)5'
  _rtXdot->LowPassz15_CSTATE[0] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz15_CSTATE[0];
  _rtXdot->LowPassz15_CSTATE[1] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz15_CSTATE[1];
  _rtXdot->LowPassz15_CSTATE[2] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz15_CSTATE[2];
  _rtXdot->LowPassz15_CSTATE[3] = 0.0;
  _rtXdot->LowPassz15_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz15_CSTATE[3];
  _rtXdot->LowPassz15_CSTATE[1] += katana_smo_X.LowPassz15_CSTATE[0];
  _rtXdot->LowPassz15_CSTATE[2] += katana_smo_X.LowPassz15_CSTATE[1];
  _rtXdot->LowPassz15_CSTATE[3] += katana_smo_X.LowPassz15_CSTATE[2];
  _rtXdot->LowPassz15_CSTATE[0] += katana_smo_B.z[5];

  // Derivatives for TransferFcn: '<S13>/Low Pass (z1)6'
  _rtXdot->LowPassz16_CSTATE[0] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp *
    katana_smo_X.LowPassz16_CSTATE[0];
  _rtXdot->LowPassz16_CSTATE[1] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_0 *
    katana_smo_X.LowPassz16_CSTATE[1];
  _rtXdot->LowPassz16_CSTATE[2] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_1 *
    katana_smo_X.LowPassz16_CSTATE[2];
  _rtXdot->LowPassz16_CSTATE[3] = 0.0;
  _rtXdot->LowPassz16_CSTATE[0] += LowPassz1_CSTATE_tmp_2 *
    katana_smo_X.LowPassz16_CSTATE[3];
  _rtXdot->LowPassz16_CSTATE[1] += katana_smo_X.LowPassz16_CSTATE[0];
  _rtXdot->LowPassz16_CSTATE[2] += katana_smo_X.LowPassz16_CSTATE[1];
  _rtXdot->LowPassz16_CSTATE[3] += katana_smo_X.LowPassz16_CSTATE[2];
  _rtXdot->LowPassz16_CSTATE[0] += katana_smo_B.z[6];
}

// Model initialize function
void katana_smo_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&katana_smo_M->solverInfo,
                          &katana_smo_M->Timing.simTimeStep);
    rtsiSetTPtr(&katana_smo_M->solverInfo, &rtmGetTPtr(katana_smo_M));
    rtsiSetStepSizePtr(&katana_smo_M->solverInfo,
                       &katana_smo_M->Timing.stepSize0);
    rtsiSetdXPtr(&katana_smo_M->solverInfo, &katana_smo_M->derivs);
    rtsiSetContStatesPtr(&katana_smo_M->solverInfo, (real_T **)
                         &katana_smo_M->contStates);
    rtsiSetNumContStatesPtr(&katana_smo_M->solverInfo,
      &katana_smo_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&katana_smo_M->solverInfo,
      &katana_smo_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&katana_smo_M->solverInfo,
      &katana_smo_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&katana_smo_M->solverInfo,
      &katana_smo_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&katana_smo_M->solverInfo, (&rtmGetErrorStatus
      (katana_smo_M)));
    rtsiSetRTModelPtr(&katana_smo_M->solverInfo, katana_smo_M);
  }

  rtsiSetSimTimeStep(&katana_smo_M->solverInfo, MAJOR_TIME_STEP);
  katana_smo_M->intgData.deltaY= katana_smo_M->OdeDeltaY;
  katana_smo_M->intgData.f[0] = katana_smo_M->odeF[0];
  katana_smo_M->intgData.f[1] = katana_smo_M->odeF[1];
  katana_smo_M->intgData.f[2] = katana_smo_M->odeF[2];
  katana_smo_M->intgData.f[3] = katana_smo_M->odeF[3];
  katana_smo_M->intgData.f[4] = katana_smo_M->odeF[4];
  katana_smo_M->intgData.f[5] = katana_smo_M->odeF[5];
  katana_smo_M->intgData.f[6] = katana_smo_M->odeF[6];
  katana_smo_M->intgData.f[7] = katana_smo_M->odeF[7];
  katana_smo_M->intgData.f[8] = katana_smo_M->odeF[8];
  katana_smo_M->intgData.f[9] = katana_smo_M->odeF[9];
  katana_smo_M->intgData.f[10] = katana_smo_M->odeF[10];
  katana_smo_M->intgData.f[11] = katana_smo_M->odeF[11];
  katana_smo_M->intgData.f[12] = katana_smo_M->odeF[12];
  katana_smo_M->intgData.x0 = katana_smo_M->odeX0;
  katana_smo_M->contStates = ((X_katana_smo_T *) &katana_smo_X);
  rtsiSetSolverData(&katana_smo_M->solverInfo, static_cast<void *>
                    (&katana_smo_M->intgData));
  rtsiSetSolverName(&katana_smo_M->solverInfo,"ode8");
  rtmSetTPtr(katana_smo_M, &katana_smo_M->Timing.tArray[0]);
  katana_smo_M->Timing.stepSize0 = 0.004;

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
    memcpy(&katana_smo_X.Integrator_CSTATE[0], &katana_smo_P.Integrator_IC[0],
           14U * sizeof(real_T));

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    katana_smo_X.LowPassz1_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    katana_smo_X.LowPassz11_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    katana_smo_X.LowPassz12_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    katana_smo_X.LowPassz13_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    katana_smo_X.LowPassz14_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    katana_smo_X.LowPassz15_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    katana_smo_X.LowPassz16_CSTATE[0] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    katana_smo_X.LowPassz1_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    katana_smo_X.LowPassz11_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    katana_smo_X.LowPassz12_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    katana_smo_X.LowPassz13_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    katana_smo_X.LowPassz14_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    katana_smo_X.LowPassz15_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    katana_smo_X.LowPassz16_CSTATE[1] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    katana_smo_X.LowPassz1_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    katana_smo_X.LowPassz11_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    katana_smo_X.LowPassz12_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    katana_smo_X.LowPassz13_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    katana_smo_X.LowPassz14_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    katana_smo_X.LowPassz15_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    katana_smo_X.LowPassz16_CSTATE[2] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)'
    katana_smo_X.LowPassz1_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)1'
    katana_smo_X.LowPassz11_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)2'
    katana_smo_X.LowPassz12_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)3'
    katana_smo_X.LowPassz13_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)4'
    katana_smo_X.LowPassz14_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)5'
    katana_smo_X.LowPassz15_CSTATE[3] = 0.0;

    // InitializeConditions for TransferFcn: '<S13>/Low Pass (z1)6'
    katana_smo_X.LowPassz16_CSTATE[3] = 0.0;

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1'
    katana_smo_B.In1_h = katana_smo_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    katana_smo_DW.obj_j.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      katana_smo_B.cv1[i] = tmp[i];
    }

    katana_smo_B.cv1[16] = '\x00';
    Sub_katana_smo_434.createSubscriber(katana_smo_B.cv1, 1);
    katana_smo_DW.obj_j.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S3>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    katana_smo_B.In1 = katana_smo_P.Out1_Y0_o;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    katana_smo_DW.obj_m.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      katana_smo_B.cv3[i] = tmp_0[i];
    }

    katana_smo_B.cv3[14] = '\x00';
    Sub_katana_smo_435.createSubscriber(katana_smo_B.cv3, 1);
    katana_smo_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish2'
    // Start for MATLABSystem: '<S7>/SinkBlock'
    katana_smo_DW.obj_fj.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_fj.isInitialized = 1;
    for (i = 0; i < 15; i++) {
      katana_smo_B.cv2[i] = tmp_1[i];
    }

    katana_smo_B.cv2[15] = '\x00';
    Pub_katana_smo_449.createPublisher(katana_smo_B.cv2, 1);
    katana_smo_DW.obj_fj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S7>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish2'

    // SystemInitialize for Atomic SubSystem: '<S2>/Publish3'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    katana_smo_DW.obj_o.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 21; i++) {
      katana_smo_B.cv[i] = tmp_2[i];
    }

    katana_smo_B.cv[21] = '\x00';
    Pub_katana_smo_450.createPublisher(katana_smo_B.cv, 1);
    katana_smo_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S2>/Publish3'
    emxInitStruct_robotics_slmanip_(&katana_smo_DW.obj_b);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_1_d);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_20_e);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_19_d);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_18_h);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_17_n);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_16_d);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_15_m);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_14_l);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_13_l);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_12_i);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_11_a);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_10_n);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_9_l);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_8_d);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_7_f);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_6_h);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_5_a);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_4_a);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_3_o);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_2_k);

    // Start for MATLABSystem: '<S17>/MATLAB System'
    katana_smo_DW.obj_b.isInitialized = 0;
    katana_smo_DW.obj_b.isInitialized = 1;
    k_RigidBodyTree_RigidBodyTree_g(&katana_smo_DW.obj_b.TreeInternal,
      &katana_smo_DW.gobj_2_k, &katana_smo_DW.gobj_4_a, &katana_smo_DW.gobj_5_a,
      &katana_smo_DW.gobj_6_h, &katana_smo_DW.gobj_7_f, &katana_smo_DW.gobj_8_d,
      &katana_smo_DW.gobj_9_l, &katana_smo_DW.gobj_10_n,
      &katana_smo_DW.gobj_11_a, &katana_smo_DW.gobj_3_o);
    emxInitStruct_robotics_slmani_g(&katana_smo_DW.obj_bm);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_1_e);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_20_l);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_19_i);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_18_i);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_17_n5);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_16_p);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_15_l);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_14_m);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_13_l2);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_12_k);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_11_j);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_10_g);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_9_m);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_8_f);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_7_i);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_6_m);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_5_j);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_4_h);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_3_m);
    emxInitStruct_r_robotics_mani_g(&katana_smo_DW.gobj_2_kz);

    // Start for MATLABSystem: '<S16>/MATLAB System'
    katana_smo_DW.obj_bm.isInitialized = 0;
    katana_smo_DW.obj_bm.isInitialized = 1;
    kat_RigidBodyTree_RigidBodyTree(&katana_smo_DW.obj_bm.TreeInternal,
      &katana_smo_DW.gobj_2_kz, &katana_smo_DW.gobj_4_h, &katana_smo_DW.gobj_5_j,
      &katana_smo_DW.gobj_6_m, &katana_smo_DW.gobj_7_i, &katana_smo_DW.gobj_8_f,
      &katana_smo_DW.gobj_9_m, &katana_smo_DW.gobj_10_g,
      &katana_smo_DW.gobj_11_j, &katana_smo_DW.gobj_3_m);
    emxInitStruct_robotics_slman_gl(&katana_smo_DW.obj);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_1);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_20);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_19);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_18);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_17);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_16);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_15);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_14);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_13);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_12);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_11);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_10);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_9);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_8);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_7);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_6);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_5);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_4);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_3);
    emxInitStruct_r_robotics_manip_(&katana_smo_DW.gobj_2);

    // Start for MATLABSystem: '<S19>/MATLAB System'
    katana_smo_DW.obj.isInitialized = 0;
    katana_smo_DW.obj.isInitialized = 1;
    RigidBodyTree_RigidBodyTree_gl(&katana_smo_DW.obj.TreeInternal,
      &katana_smo_DW.gobj_2, &katana_smo_DW.gobj_4, &katana_smo_DW.gobj_5,
      &katana_smo_DW.gobj_6, &katana_smo_DW.gobj_7, &katana_smo_DW.gobj_8,
      &katana_smo_DW.gobj_9, &katana_smo_DW.gobj_10, &katana_smo_DW.gobj_11,
      &katana_smo_DW.gobj_3);

    // Start for MATLABSystem: '<S1>/Get Parameter7'
    katana_smo_DW.obj_f.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_smo_B.cv4[i] = tmp_3[i];
    }

    katana_smo_B.cv4[11] = '\x00';
    ParamGet_katana_smo_421.initialize(katana_smo_B.cv4);
    ParamGet_katana_smo_421.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_smo_421.set_initial_value(0.0);
    katana_smo_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter7'

    // Start for MATLABSystem: '<S1>/Get Parameter8'
    katana_smo_DW.obj_i.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      katana_smo_B.cv5[i] = tmp_4[i];
    }

    katana_smo_B.cv5[10] = '\x00';
    ParamGet_katana_smo_422.initialize(katana_smo_B.cv5);
    ParamGet_katana_smo_422.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_smo_422.set_initial_value(0.0);
    katana_smo_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter8'

    // Start for MATLABSystem: '<S1>/Get Parameter9'
    katana_smo_DW.obj_l.matlabCodegenIsDeleted = false;
    katana_smo_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 10; i++) {
      katana_smo_B.cv5[i] = tmp_5[i];
    }

    katana_smo_B.cv5[10] = '\x00';
    ParamGet_katana_smo_423.initialize(katana_smo_B.cv5);
    ParamGet_katana_smo_423.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_smo_423.set_initial_value(0.0);
    katana_smo_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S1>/Get Parameter9'
  }
}

// Model terminate function
void katana_smo_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S3>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_matla_glelt(&katana_smo_DW.obj_j);

  // End of Terminate for SubSystem: '<S3>/Subscribe'
  emxFreeStruct_robotics_slmanip_(&katana_smo_DW.obj_b);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_1_d);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_20_e);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_19_d);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_18_h);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_17_n);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_16_d);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_15_m);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_14_l);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_13_l);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_12_i);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_11_a);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_10_n);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_9_l);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_8_d);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_7_f);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_6_h);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_5_a);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_4_a);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_3_o);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_2_k);
  emxFreeStruct_robotics_slmani_g(&katana_smo_DW.obj_bm);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_1_e);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_20_l);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_19_i);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_18_i);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_17_n5);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_16_p);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_15_l);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_14_m);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_13_l2);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_12_k);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_11_j);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_10_g);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_9_m);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_8_f);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_7_i);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_6_m);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_5_j);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_4_h);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_3_m);
  emxFreeStruct_r_robotics_mani_g(&katana_smo_DW.gobj_2_kz);

  // Terminate for Atomic SubSystem: '<S3>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_matla_glelt(&katana_smo_DW.obj_m);

  // End of Terminate for SubSystem: '<S3>/Subscribe1'
  emxFreeStruct_robotics_slman_gl(&katana_smo_DW.obj);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_1);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_20);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_19);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_18);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_17);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_16);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_15);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_14);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_13);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_12);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_11);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_10);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_9);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_8);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_7);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_6);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_5);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_4);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_3);
  emxFreeStruct_r_robotics_manip_(&katana_smo_DW.gobj_2);

  // Terminate for MATLABSystem: '<S1>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&katana_smo_DW.obj_f);

  // Terminate for MATLABSystem: '<S1>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&katana_smo_DW.obj_i);

  // Terminate for MATLABSystem: '<S1>/Get Parameter9'
  matlabCodegenHandle_matlabCodeg(&katana_smo_DW.obj_l);

  // Terminate for Atomic SubSystem: '<S2>/Publish2'
  // Terminate for MATLABSystem: '<S7>/SinkBlock'
  matlabCodegenHandle_matlabC_gle(&katana_smo_DW.obj_fj);

  // End of Terminate for SubSystem: '<S2>/Publish2'

  // Terminate for Atomic SubSystem: '<S2>/Publish3'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_matlabC_gle(&katana_smo_DW.obj_o);

  // End of Terminate for SubSystem: '<S2>/Publish3'
}

//
// File trailer for generated code.
//
// [EOF]
//
