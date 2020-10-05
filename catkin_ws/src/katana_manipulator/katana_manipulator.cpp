//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: katana_manipulator.cpp
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
#include "katana_manipulator.h"
#include "katana_manipulator_private.h"

// Block signals (default storage)
B_katana_manipulator_T katana_manipulator_B;

// Continuous states
X_katana_manipulator_T katana_manipulator_X;

// Block states (default storage)
DW_katana_manipulator_T katana_manipulator_DW;

// Real-time model
RT_MODEL_katana_manipulator_T katana_manipulator_M_ =
  RT_MODEL_katana_manipulator_T();
RT_MODEL_katana_manipulator_T *const katana_manipulator_M =
  &katana_manipulator_M_;

// Forward declaration for local functions
static void katana_manipula_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_manipulator_std_msgs_MultiArrayDimension varargout_2_Layout_Dim
  [16], uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void matlabCodegenHandle_matlabCod_h(ros_slros_internal_block_Subs_T *obj);
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

  (katana_manipulator_M->Timing.TaskCounters.TID[2])++;
  if ((katana_manipulator_M->Timing.TaskCounters.TID[2]) > 39) {// Sample time: [0.004s, 0.0s] 
    katana_manipulator_M->Timing.TaskCounters.TID[2] = 0;
  }

  (katana_manipulator_M->Timing.TaskCounters.TID[3])++;
  if ((katana_manipulator_M->Timing.TaskCounters.TID[3]) > 399) {// Sample time: [0.04s, 0.0s] 
    katana_manipulator_M->Timing.TaskCounters.TID[3] = 0;
  }
}

// Projection for root system: '<Root>'
void katana_manipulator_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_0;
  char *msg;

  // Projection for SimscapeExecutionBlock: '<S51>/STATE_1'
  simulationData = (NeslSimulationData *)katana_manipulator_DW.STATE_1_SimData;
  time = katana_manipulator_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 14;
  simulationData->mData->mContStates.mX =
    &katana_manipulator_X.katana_manipulatorSubsystemkata[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &katana_manipulator_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &katana_manipulator_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (katana_manipulator_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&katana_manipulator_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  katana_manipulator_B.iv3[0] = 0;
  katana_manipulator_B.dv3[0] = katana_manipulator_B.INPUT_8_1_1[0];
  katana_manipulator_B.dv3[1] = katana_manipulator_B.INPUT_8_1_1[1];
  katana_manipulator_B.dv3[2] = katana_manipulator_B.INPUT_8_1_1[2];
  katana_manipulator_B.dv3[3] = katana_manipulator_B.INPUT_8_1_1[3];
  katana_manipulator_B.iv3[1] = 4;
  katana_manipulator_B.dv3[4] = katana_manipulator_B.INPUT_7_1_1[0];
  katana_manipulator_B.dv3[5] = katana_manipulator_B.INPUT_7_1_1[1];
  katana_manipulator_B.dv3[6] = katana_manipulator_B.INPUT_7_1_1[2];
  katana_manipulator_B.dv3[7] = katana_manipulator_B.INPUT_7_1_1[3];
  katana_manipulator_B.iv3[2] = 8;
  katana_manipulator_B.dv3[8] = katana_manipulator_B.INPUT_1_1_1[0];
  katana_manipulator_B.dv3[9] = katana_manipulator_B.INPUT_1_1_1[1];
  katana_manipulator_B.dv3[10] = katana_manipulator_B.INPUT_1_1_1[2];
  katana_manipulator_B.dv3[11] = katana_manipulator_B.INPUT_1_1_1[3];
  katana_manipulator_B.iv3[3] = 12;
  katana_manipulator_B.dv3[12] = katana_manipulator_B.INPUT_2_1_1[0];
  katana_manipulator_B.dv3[13] = katana_manipulator_B.INPUT_2_1_1[1];
  katana_manipulator_B.dv3[14] = katana_manipulator_B.INPUT_2_1_1[2];
  katana_manipulator_B.dv3[15] = katana_manipulator_B.INPUT_2_1_1[3];
  katana_manipulator_B.iv3[4] = 16;
  katana_manipulator_B.dv3[16] = katana_manipulator_B.INPUT_3_1_1[0];
  katana_manipulator_B.dv3[17] = katana_manipulator_B.INPUT_3_1_1[1];
  katana_manipulator_B.dv3[18] = katana_manipulator_B.INPUT_3_1_1[2];
  katana_manipulator_B.dv3[19] = katana_manipulator_B.INPUT_3_1_1[3];
  katana_manipulator_B.iv3[5] = 20;
  katana_manipulator_B.dv3[20] = katana_manipulator_B.INPUT_4_1_1[0];
  katana_manipulator_B.dv3[21] = katana_manipulator_B.INPUT_4_1_1[1];
  katana_manipulator_B.dv3[22] = katana_manipulator_B.INPUT_4_1_1[2];
  katana_manipulator_B.dv3[23] = katana_manipulator_B.INPUT_4_1_1[3];
  katana_manipulator_B.iv3[6] = 24;
  katana_manipulator_B.dv3[24] = katana_manipulator_B.INPUT_5_1_1[0];
  katana_manipulator_B.dv3[25] = katana_manipulator_B.INPUT_5_1_1[1];
  katana_manipulator_B.dv3[26] = katana_manipulator_B.INPUT_5_1_1[2];
  katana_manipulator_B.dv3[27] = katana_manipulator_B.INPUT_5_1_1[3];
  katana_manipulator_B.iv3[7] = 28;
  katana_manipulator_B.dv3[28] = katana_manipulator_B.INPUT_6_1_1[0];
  katana_manipulator_B.dv3[29] = katana_manipulator_B.INPUT_6_1_1[1];
  katana_manipulator_B.dv3[30] = katana_manipulator_B.INPUT_6_1_1[2];
  katana_manipulator_B.dv3[31] = katana_manipulator_B.INPUT_6_1_1[3];
  katana_manipulator_B.iv3[8] = 32;
  simulationData->mData->mInputValues.mN = 32;
  simulationData->mData->mInputValues.mX = &katana_manipulator_B.dv3[0];
  simulationData->mData->mInputOffsets.mN = 9;
  simulationData->mData->mInputOffsets.mX = &katana_manipulator_B.iv3[0];
  diagnosticManager = (NeuDiagnosticManager *)
    katana_manipulator_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_0 = ne_simulator_method((NeslSimulator *)
    katana_manipulator_DW.STATE_1_Simulator, NESL_SIM_PROJECTION, simulationData,
    diagnosticManager);
  if (tmp_0 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(katana_manipulator_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(katana_manipulator_M, msg);
    }
  }

  // End of Projection for SimscapeExecutionBlock: '<S51>/STATE_1'
}

//
// This function updates continuous states using the ODE5 fixed-step
// solver algorithm
//
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  // Solver Matrices
  static const real_T rt_ODE5_A[6] = {
    1.0/5.0, 3.0/10.0, 4.0/5.0, 8.0/9.0, 1.0, 1.0
  };

  static const real_T rt_ODE5_B[6][6] = {
    { 1.0/5.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

    { 3.0/40.0, 9.0/40.0, 0.0, 0.0, 0.0, 0.0 },

    { 44.0/45.0, -56.0/15.0, 32.0/9.0, 0.0, 0.0, 0.0 },

    { 19372.0/6561.0, -25360.0/2187.0, 64448.0/6561.0, -212.0/729.0, 0.0, 0.0 },

    { 9017.0/3168.0, -355.0/33.0, 46732.0/5247.0, 49.0/176.0, -5103.0/18656.0,
      0.0 },

    { 35.0/384.0, 0.0, 500.0/1113.0, 125.0/192.0, -2187.0/6784.0, 11.0/84.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE5_IntgData *id = static_cast<ODE5_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T *f3 = id->f[3];
  real_T *f4 = id->f[4];
  real_T *f5 = id->f[5];
  real_T hB[6];
  int_T i;
  int_T nXc = 14;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  // Save the state values at time t in y, we'll use x as ynew.
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  // Assumes that rtsiSetT and ModelOutputs are up-to-date
  // f0 = f(t,y)
  rtsiSetdX(si, f0);
  katana_manipulator_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE5_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[0]);
  rtsiSetdX(si, f1);
  katana_manipulator_step();
  katana_manipulator_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE5_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[1]);
  rtsiSetdX(si, f2);
  katana_manipulator_step();
  katana_manipulator_derivatives();

  // f(:,4) = feval(odefile, t + hA(3), y + f*hB(:,3), args(:)(*));
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE5_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[2]);
  rtsiSetdX(si, f3);
  katana_manipulator_step();
  katana_manipulator_derivatives();

  // f(:,5) = feval(odefile, t + hA(4), y + f*hB(:,4), args(:)(*));
  for (i = 0; i <= 3; i++) {
    hB[i] = h * rt_ODE5_B[3][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[3]);
  rtsiSetdX(si, f4);
  katana_manipulator_step();
  katana_manipulator_derivatives();

  // f(:,6) = feval(odefile, t + hA(5), y + f*hB(:,5), args(:)(*));
  for (i = 0; i <= 4; i++) {
    hB[i] = h * rt_ODE5_B[4][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3] + f4[i]*hB[4]);
  }

  rtsiSetT(si, tnew);
  rtsiSetdX(si, f5);
  katana_manipulator_step();
  katana_manipulator_derivatives();

  // tnew = t + hA(6);
  // ynew = y + f*hB(:,6);
  for (i = 0; i <= 5; i++) {
    hB[i] = h * rt_ODE5_B[5][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3] + f4[i]*hB[4] + f5[i]*hB[5]);
  }

  katana_manipulator_step();
  katana_manipulator_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void katana_manipula_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_manipulator_std_msgs_MultiArrayDimension varargout_2_Layout_Dim
  [16], uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_katana_manipulator_595.getLatestMessage
    (&katana_manipulator_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = katana_manipulator_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    katana_manipulator_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    katana_manipulator_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    katana_manipulator_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0],
         &katana_manipulator_B.b_varargout_2.Layout.Dim[0], sizeof
         (SL_Bus_katana_manipulator_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    katana_manipulator_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    katana_manipulator_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_h(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void katana_manipulator_step(void)
{
  if (rtmIsMajorTimeStep(katana_manipulator_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&katana_manipulator_M->solverInfo,
                          ((katana_manipulator_M->Timing.clockTick0+1)*
      katana_manipulator_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(katana_manipulator_M)) {
    katana_manipulator_M->Timing.t[0] = rtsiGetT
      (&katana_manipulator_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    uint32_T b_varargout_2_Data_SL_Info_Curr;
    uint32_T b_varargout_2_Data_SL_Info_Rece;
    uint32_T b_varargout_2_Layout_DataOffset;
    uint32_T b_varargout_2_Layout_Dim_SL_Inf;
    uint32_T b_varargout_2_Layout_Dim_SL_I_0;
    boolean_T b_varargout_1;
    int32_T i;

    // SimscapeExecutionBlock: '<S51>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S51>/OUTPUT_1_0'

    simulationData = (NeslSimulationData *)katana_manipulator_DW.STATE_1_SimData;
    katana_manipulator_B.time_tmp = katana_manipulator_M->Timing.t[0];
    katana_manipulator_B.time = katana_manipulator_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &katana_manipulator_B.time;
    simulationData->mData->mContStates.mN = 14;
    simulationData->mData->mContStates.mX =
      &katana_manipulator_X.katana_manipulatorSubsystemkata[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &katana_manipulator_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &katana_manipulator_DW.STATE_1_Modes;
    b_varargout_1 = false;
    simulationData->mData->mFoundZcEvents = b_varargout_1;
    b_varargout_1 = rtmIsMajorTimeStep(katana_manipulator_M);
    simulationData->mData->mIsMajorTimeStep = b_varargout_1;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&katana_manipulator_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    katana_manipulator_B.iv1[0] = 0;
    katana_manipulator_B.dv1[0] = katana_manipulator_B.INPUT_8_1_1[0];
    katana_manipulator_B.dv1[1] = katana_manipulator_B.INPUT_8_1_1[1];
    katana_manipulator_B.dv1[2] = katana_manipulator_B.INPUT_8_1_1[2];
    katana_manipulator_B.dv1[3] = katana_manipulator_B.INPUT_8_1_1[3];
    katana_manipulator_B.iv1[1] = 4;
    katana_manipulator_B.dv1[4] = katana_manipulator_B.INPUT_7_1_1[0];
    katana_manipulator_B.dv1[5] = katana_manipulator_B.INPUT_7_1_1[1];
    katana_manipulator_B.dv1[6] = katana_manipulator_B.INPUT_7_1_1[2];
    katana_manipulator_B.dv1[7] = katana_manipulator_B.INPUT_7_1_1[3];
    katana_manipulator_B.iv1[2] = 8;
    katana_manipulator_B.dv1[8] = katana_manipulator_B.INPUT_1_1_1[0];
    katana_manipulator_B.dv1[9] = katana_manipulator_B.INPUT_1_1_1[1];
    katana_manipulator_B.dv1[10] = katana_manipulator_B.INPUT_1_1_1[2];
    katana_manipulator_B.dv1[11] = katana_manipulator_B.INPUT_1_1_1[3];
    katana_manipulator_B.iv1[3] = 12;
    katana_manipulator_B.dv1[12] = katana_manipulator_B.INPUT_2_1_1[0];
    katana_manipulator_B.dv1[13] = katana_manipulator_B.INPUT_2_1_1[1];
    katana_manipulator_B.dv1[14] = katana_manipulator_B.INPUT_2_1_1[2];
    katana_manipulator_B.dv1[15] = katana_manipulator_B.INPUT_2_1_1[3];
    katana_manipulator_B.iv1[4] = 16;
    katana_manipulator_B.dv1[16] = katana_manipulator_B.INPUT_3_1_1[0];
    katana_manipulator_B.dv1[17] = katana_manipulator_B.INPUT_3_1_1[1];
    katana_manipulator_B.dv1[18] = katana_manipulator_B.INPUT_3_1_1[2];
    katana_manipulator_B.dv1[19] = katana_manipulator_B.INPUT_3_1_1[3];
    katana_manipulator_B.iv1[5] = 20;
    katana_manipulator_B.dv1[20] = katana_manipulator_B.INPUT_4_1_1[0];
    katana_manipulator_B.dv1[21] = katana_manipulator_B.INPUT_4_1_1[1];
    katana_manipulator_B.dv1[22] = katana_manipulator_B.INPUT_4_1_1[2];
    katana_manipulator_B.dv1[23] = katana_manipulator_B.INPUT_4_1_1[3];
    katana_manipulator_B.iv1[6] = 24;
    katana_manipulator_B.dv1[24] = katana_manipulator_B.INPUT_5_1_1[0];
    katana_manipulator_B.dv1[25] = katana_manipulator_B.INPUT_5_1_1[1];
    katana_manipulator_B.dv1[26] = katana_manipulator_B.INPUT_5_1_1[2];
    katana_manipulator_B.dv1[27] = katana_manipulator_B.INPUT_5_1_1[3];
    katana_manipulator_B.iv1[7] = 28;
    katana_manipulator_B.dv1[28] = katana_manipulator_B.INPUT_6_1_1[0];
    katana_manipulator_B.dv1[29] = katana_manipulator_B.INPUT_6_1_1[1];
    katana_manipulator_B.dv1[30] = katana_manipulator_B.INPUT_6_1_1[2];
    katana_manipulator_B.dv1[31] = katana_manipulator_B.INPUT_6_1_1[3];
    katana_manipulator_B.iv1[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &katana_manipulator_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &katana_manipulator_B.iv1[0];
    simulationData->mData->mOutputs.mN = 14;
    simulationData->mData->mOutputs.mX = &katana_manipulator_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      katana_manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      katana_manipulator_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(katana_manipulator_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(katana_manipulator_M, msg);
      }
    }

    // End of SimscapeExecutionBlock: '<S51>/STATE_1'

    // RateTransition: '<Root>/Rate Transition'
    if ((rtmIsMajorTimeStep(katana_manipulator_M) &&
         katana_manipulator_M->Timing.TaskCounters.TID[1] == 0) &&
        (rtmIsMajorTimeStep(katana_manipulator_M) &&
         katana_manipulator_M->Timing.TaskCounters.TID[3] == 0)) {
      katana_manipulator_B.RateTransition =
        katana_manipulator_DW.RateTransition_Buffer0;
    }

    // End of RateTransition: '<Root>/Rate Transition'

    // SimscapeInputBlock: '<S51>/INPUT_8_1_1'
    katana_manipulator_B.INPUT_8_1_1[0] = katana_manipulator_B.RateTransition;
    katana_manipulator_B.INPUT_8_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_8_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_8_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_8_1_1[0] ==
          katana_manipulator_DW.INPUT_8_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_8_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_8_1_1[0];
    }

    katana_manipulator_B.INPUT_8_1_1[0] =
      katana_manipulator_DW.INPUT_8_1_1_Discrete[1];
    katana_manipulator_B.INPUT_8_1_1[3] =
      katana_manipulator_DW.INPUT_8_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_8_1_1'

    // RateTransition: '<Root>/Rate Transition1'
    if ((rtmIsMajorTimeStep(katana_manipulator_M) &&
         katana_manipulator_M->Timing.TaskCounters.TID[1] == 0) &&
        (rtmIsMajorTimeStep(katana_manipulator_M) &&
         katana_manipulator_M->Timing.TaskCounters.TID[2] == 0)) {
      for (i = 0; i < 7; i++) {
        katana_manipulator_B.RateTransition1[i] =
          katana_manipulator_DW.RateTransition1_Buffer0[i];
      }
    }

    // End of RateTransition: '<Root>/Rate Transition1'

    // SimscapeInputBlock: '<S51>/INPUT_7_1_1'
    katana_manipulator_B.INPUT_7_1_1[0] = katana_manipulator_B.RateTransition1[6];
    katana_manipulator_B.INPUT_7_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_7_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_7_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_7_1_1[0] ==
          katana_manipulator_DW.INPUT_7_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_7_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_7_1_1[0];
    }

    katana_manipulator_B.INPUT_7_1_1[0] =
      katana_manipulator_DW.INPUT_7_1_1_Discrete[1];
    katana_manipulator_B.INPUT_7_1_1[3] =
      katana_manipulator_DW.INPUT_7_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_7_1_1'

    // SimscapeInputBlock: '<S51>/INPUT_1_1_1'
    katana_manipulator_B.INPUT_1_1_1[0] = katana_manipulator_B.RateTransition1[0];
    katana_manipulator_B.INPUT_1_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_1_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_1_1_1[0] ==
          katana_manipulator_DW.INPUT_1_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_1_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_1_1_1[0];
    }

    katana_manipulator_B.INPUT_1_1_1[0] =
      katana_manipulator_DW.INPUT_1_1_1_Discrete[1];
    katana_manipulator_B.INPUT_1_1_1[3] =
      katana_manipulator_DW.INPUT_1_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_1_1_1'

    // SimscapeInputBlock: '<S51>/INPUT_2_1_1'
    katana_manipulator_B.INPUT_2_1_1[0] = katana_manipulator_B.RateTransition1[1];
    katana_manipulator_B.INPUT_2_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_2_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_2_1_1[0] ==
          katana_manipulator_DW.INPUT_2_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_2_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_2_1_1[0];
    }

    katana_manipulator_B.INPUT_2_1_1[0] =
      katana_manipulator_DW.INPUT_2_1_1_Discrete[1];
    katana_manipulator_B.INPUT_2_1_1[3] =
      katana_manipulator_DW.INPUT_2_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_2_1_1'

    // SimscapeInputBlock: '<S51>/INPUT_3_1_1'
    katana_manipulator_B.INPUT_3_1_1[0] = katana_manipulator_B.RateTransition1[2];
    katana_manipulator_B.INPUT_3_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_3_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_3_1_1[0] ==
          katana_manipulator_DW.INPUT_3_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_3_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_3_1_1[0];
    }

    katana_manipulator_B.INPUT_3_1_1[0] =
      katana_manipulator_DW.INPUT_3_1_1_Discrete[1];
    katana_manipulator_B.INPUT_3_1_1[3] =
      katana_manipulator_DW.INPUT_3_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_3_1_1'

    // SimscapeInputBlock: '<S51>/INPUT_4_1_1'
    katana_manipulator_B.INPUT_4_1_1[0] = katana_manipulator_B.RateTransition1[3];
    katana_manipulator_B.INPUT_4_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_4_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_4_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_4_1_1[0] ==
          katana_manipulator_DW.INPUT_4_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_4_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_4_1_1[0];
    }

    katana_manipulator_B.INPUT_4_1_1[0] =
      katana_manipulator_DW.INPUT_4_1_1_Discrete[1];
    katana_manipulator_B.INPUT_4_1_1[3] =
      katana_manipulator_DW.INPUT_4_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_4_1_1'

    // SimscapeInputBlock: '<S51>/INPUT_5_1_1'
    katana_manipulator_B.INPUT_5_1_1[0] = katana_manipulator_B.RateTransition1[4];
    katana_manipulator_B.INPUT_5_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_5_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_5_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_5_1_1[0] ==
          katana_manipulator_DW.INPUT_5_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_5_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_5_1_1[0];
    }

    katana_manipulator_B.INPUT_5_1_1[0] =
      katana_manipulator_DW.INPUT_5_1_1_Discrete[1];
    katana_manipulator_B.INPUT_5_1_1[3] =
      katana_manipulator_DW.INPUT_5_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_5_1_1'

    // SimscapeInputBlock: '<S51>/INPUT_6_1_1'
    katana_manipulator_B.INPUT_6_1_1[0] = katana_manipulator_B.RateTransition1[5];
    katana_manipulator_B.INPUT_6_1_1[1] = 0.0;
    katana_manipulator_B.INPUT_6_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(katana_manipulator_M)) {
      katana_manipulator_DW.INPUT_6_1_1_Discrete[0] =
        !(katana_manipulator_B.INPUT_6_1_1[0] ==
          katana_manipulator_DW.INPUT_6_1_1_Discrete[1]);
      katana_manipulator_DW.INPUT_6_1_1_Discrete[1] =
        katana_manipulator_B.INPUT_6_1_1[0];
    }

    katana_manipulator_B.INPUT_6_1_1[0] =
      katana_manipulator_DW.INPUT_6_1_1_Discrete[1];
    katana_manipulator_B.INPUT_6_1_1[3] =
      katana_manipulator_DW.INPUT_6_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S51>/INPUT_6_1_1'

    // SimscapeExecutionBlock: '<S51>/OUTPUT_1_0'
    simulationData = (NeslSimulationData *)
      katana_manipulator_DW.OUTPUT_1_0_SimData;
    katana_manipulator_B.time_c = katana_manipulator_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &katana_manipulator_B.time_c;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &katana_manipulator_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX =
      &katana_manipulator_DW.OUTPUT_1_0_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = b_varargout_1;
    b_varargout_1 = false;
    simulationData->mData->mIsSolverAssertCheck = b_varargout_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    katana_manipulator_B.iv[0] = 0;
    katana_manipulator_B.dv[0] = katana_manipulator_B.INPUT_8_1_1[0];
    katana_manipulator_B.dv[1] = katana_manipulator_B.INPUT_8_1_1[1];
    katana_manipulator_B.dv[2] = katana_manipulator_B.INPUT_8_1_1[2];
    katana_manipulator_B.dv[3] = katana_manipulator_B.INPUT_8_1_1[3];
    katana_manipulator_B.iv[1] = 4;
    katana_manipulator_B.dv[4] = katana_manipulator_B.INPUT_7_1_1[0];
    katana_manipulator_B.dv[5] = katana_manipulator_B.INPUT_7_1_1[1];
    katana_manipulator_B.dv[6] = katana_manipulator_B.INPUT_7_1_1[2];
    katana_manipulator_B.dv[7] = katana_manipulator_B.INPUT_7_1_1[3];
    katana_manipulator_B.iv[2] = 8;
    katana_manipulator_B.dv[8] = katana_manipulator_B.INPUT_1_1_1[0];
    katana_manipulator_B.dv[9] = katana_manipulator_B.INPUT_1_1_1[1];
    katana_manipulator_B.dv[10] = katana_manipulator_B.INPUT_1_1_1[2];
    katana_manipulator_B.dv[11] = katana_manipulator_B.INPUT_1_1_1[3];
    katana_manipulator_B.iv[3] = 12;
    katana_manipulator_B.dv[12] = katana_manipulator_B.INPUT_2_1_1[0];
    katana_manipulator_B.dv[13] = katana_manipulator_B.INPUT_2_1_1[1];
    katana_manipulator_B.dv[14] = katana_manipulator_B.INPUT_2_1_1[2];
    katana_manipulator_B.dv[15] = katana_manipulator_B.INPUT_2_1_1[3];
    katana_manipulator_B.iv[4] = 16;
    katana_manipulator_B.dv[16] = katana_manipulator_B.INPUT_3_1_1[0];
    katana_manipulator_B.dv[17] = katana_manipulator_B.INPUT_3_1_1[1];
    katana_manipulator_B.dv[18] = katana_manipulator_B.INPUT_3_1_1[2];
    katana_manipulator_B.dv[19] = katana_manipulator_B.INPUT_3_1_1[3];
    katana_manipulator_B.iv[5] = 20;
    katana_manipulator_B.dv[20] = katana_manipulator_B.INPUT_4_1_1[0];
    katana_manipulator_B.dv[21] = katana_manipulator_B.INPUT_4_1_1[1];
    katana_manipulator_B.dv[22] = katana_manipulator_B.INPUT_4_1_1[2];
    katana_manipulator_B.dv[23] = katana_manipulator_B.INPUT_4_1_1[3];
    katana_manipulator_B.iv[6] = 24;
    katana_manipulator_B.dv[24] = katana_manipulator_B.INPUT_5_1_1[0];
    katana_manipulator_B.dv[25] = katana_manipulator_B.INPUT_5_1_1[1];
    katana_manipulator_B.dv[26] = katana_manipulator_B.INPUT_5_1_1[2];
    katana_manipulator_B.dv[27] = katana_manipulator_B.INPUT_5_1_1[3];
    katana_manipulator_B.iv[7] = 28;
    katana_manipulator_B.dv[28] = katana_manipulator_B.INPUT_6_1_1[0];
    katana_manipulator_B.dv[29] = katana_manipulator_B.INPUT_6_1_1[1];
    katana_manipulator_B.dv[30] = katana_manipulator_B.INPUT_6_1_1[2];
    katana_manipulator_B.dv[31] = katana_manipulator_B.INPUT_6_1_1[3];
    katana_manipulator_B.iv[8] = 32;
    memcpy(&katana_manipulator_B.dv[32], &katana_manipulator_B.STATE_1[0], 14U *
           sizeof(real_T));
    katana_manipulator_B.iv[9] = 46;
    simulationData->mData->mInputValues.mN = 46;
    simulationData->mData->mInputValues.mX = &katana_manipulator_B.dv[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &katana_manipulator_B.iv[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &katana_manipulator_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      katana_manipulator_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      katana_manipulator_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS,
      simulationData, diagnosticManager);
    if (i != 0) {
      b_varargout_1 = error_buffer_is_empty(rtmGetErrorStatus
        (katana_manipulator_M));
      if (b_varargout_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(katana_manipulator_M, msg);
      }
    }

    // RateTransition: '<Root>/Rate Transition2' incorporates:
    //   Inport: '<S7>/In1'
    //   MATLABSystem: '<S2>/SourceBlock'

    if ((rtmIsMajorTimeStep(katana_manipulator_M) &&
         katana_manipulator_M->Timing.TaskCounters.TID[1] == 0) &&
        (rtmIsMajorTimeStep(katana_manipulator_M) &&
         katana_manipulator_M->Timing.TaskCounters.TID[2] == 0)) {
      for (i = 0; i < 6; i++) {
        katana_manipulator_DW.RateTransition2_Buffer[i] =
          katana_manipulator_B.OUTPUT_1_0[i + 1];
      }

      katana_manipulator_DW.RateTransition2_Buffer[6] =
        katana_manipulator_B.OUTPUT_1_0[0];
    }

    if (rtmIsMajorTimeStep(katana_manipulator_M) &&
        katana_manipulator_M->Timing.TaskCounters.TID[2] == 0) {
      // BusAssignment: '<S1>/Bus Assignment1' incorporates:
      //   Constant: '<S1>/Constant'
      //   Constant: '<S5>/Constant'

      katana_manipulator_B.BusAssignment1 =
        katana_manipulator_P.Constant_Value_m;
      for (i = 0; i < 7; i++) {
        katana_manipulator_B.BusAssignment1.Data[i] =
          katana_manipulator_DW.RateTransition2_Buffer[i];
      }

      katana_manipulator_B.BusAssignment1.Data_SL_Info.CurrentLength =
        katana_manipulator_P.Constant_Value_f;
      katana_manipulator_B.BusAssignment1.Data_SL_Info.ReceivedLength =
        katana_manipulator_P.Constant_Value_f;

      // End of BusAssignment: '<S1>/Bus Assignment1'

      // Outputs for Atomic SubSystem: '<S1>/Publish1'
      // MATLABSystem: '<S6>/SinkBlock'
      Pub_katana_manipulator_608.publish(&katana_manipulator_B.BusAssignment1);

      // End of Outputs for SubSystem: '<S1>/Publish1'

      // Outputs for Atomic SubSystem: '<Root>/Subscribe'
      // MATLABSystem: '<S2>/SourceBlock'
      katana_manipula_SystemCore_step(&b_varargout_1,
        katana_manipulator_B.b_varargout_2_Data,
        &b_varargout_2_Data_SL_Info_Curr, &b_varargout_2_Data_SL_Info_Rece,
        &b_varargout_2_Layout_DataOffset,
        katana_manipulator_B.b_varargout_2_Layout_Dim,
        &b_varargout_2_Layout_Dim_SL_Inf, &b_varargout_2_Layout_Dim_SL_I_0);

      // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S7>/Enable'

      if (b_varargout_1) {
        for (i = 0; i < 7; i++) {
          katana_manipulator_B.In1.Data[i] =
            katana_manipulator_B.b_varargout_2_Data[i];
        }

        katana_manipulator_B.In1.Data_SL_Info.CurrentLength =
          b_varargout_2_Data_SL_Info_Curr;
        katana_manipulator_B.In1.Data_SL_Info.ReceivedLength =
          b_varargout_2_Data_SL_Info_Rece;
        katana_manipulator_B.In1.Layout.DataOffset =
          b_varargout_2_Layout_DataOffset;
        memcpy(&katana_manipulator_B.In1.Layout.Dim[0],
               &katana_manipulator_B.b_varargout_2_Layout_Dim[0], sizeof
               (SL_Bus_katana_manipulator_std_msgs_MultiArrayDimension) << 4U);
        katana_manipulator_B.In1.Layout.Dim_SL_Info.CurrentLength =
          b_varargout_2_Layout_Dim_SL_Inf;
        katana_manipulator_B.In1.Layout.Dim_SL_Info.ReceivedLength =
          b_varargout_2_Layout_Dim_SL_I_0;
      }

      // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subscribe'
    }

    // End of RateTransition: '<Root>/Rate Transition2'
    if (rtmIsMajorTimeStep(katana_manipulator_M) &&
        katana_manipulator_M->Timing.TaskCounters.TID[3] == 0) {
      // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
      // MATLABSystem: '<S3>/SourceBlock' incorporates:
      //   Inport: '<S8>/In1'

      b_varargout_1 = Sub_katana_manipulator_596.getLatestMessage
        (&katana_manipulator_B.b_varargout_2_k);

      // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S8>/Enable'

      if (b_varargout_1) {
        katana_manipulator_B.In1_c = katana_manipulator_B.b_varargout_2_k;
      }

      // End of MATLABSystem: '<S3>/SourceBlock'
      // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subscribe1'
    }
  }

  if (rtmIsMajorTimeStep(katana_manipulator_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    int32_T i;

    // Update for SimscapeExecutionBlock: '<S51>/STATE_1'
    simulationData = (NeslSimulationData *)katana_manipulator_DW.STATE_1_SimData;
    time = katana_manipulator_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 14;
    simulationData->mData->mContStates.mX =
      &katana_manipulator_X.katana_manipulatorSubsystemkata[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX =
      &katana_manipulator_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &katana_manipulator_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
      (katana_manipulator_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&katana_manipulator_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    katana_manipulator_B.iv5[0] = 0;
    katana_manipulator_B.dv5[0] = katana_manipulator_B.INPUT_8_1_1[0];
    katana_manipulator_B.dv5[1] = katana_manipulator_B.INPUT_8_1_1[1];
    katana_manipulator_B.dv5[2] = katana_manipulator_B.INPUT_8_1_1[2];
    katana_manipulator_B.dv5[3] = katana_manipulator_B.INPUT_8_1_1[3];
    katana_manipulator_B.iv5[1] = 4;
    katana_manipulator_B.dv5[4] = katana_manipulator_B.INPUT_7_1_1[0];
    katana_manipulator_B.dv5[5] = katana_manipulator_B.INPUT_7_1_1[1];
    katana_manipulator_B.dv5[6] = katana_manipulator_B.INPUT_7_1_1[2];
    katana_manipulator_B.dv5[7] = katana_manipulator_B.INPUT_7_1_1[3];
    katana_manipulator_B.iv5[2] = 8;
    katana_manipulator_B.dv5[8] = katana_manipulator_B.INPUT_1_1_1[0];
    katana_manipulator_B.dv5[9] = katana_manipulator_B.INPUT_1_1_1[1];
    katana_manipulator_B.dv5[10] = katana_manipulator_B.INPUT_1_1_1[2];
    katana_manipulator_B.dv5[11] = katana_manipulator_B.INPUT_1_1_1[3];
    katana_manipulator_B.iv5[3] = 12;
    katana_manipulator_B.dv5[12] = katana_manipulator_B.INPUT_2_1_1[0];
    katana_manipulator_B.dv5[13] = katana_manipulator_B.INPUT_2_1_1[1];
    katana_manipulator_B.dv5[14] = katana_manipulator_B.INPUT_2_1_1[2];
    katana_manipulator_B.dv5[15] = katana_manipulator_B.INPUT_2_1_1[3];
    katana_manipulator_B.iv5[4] = 16;
    katana_manipulator_B.dv5[16] = katana_manipulator_B.INPUT_3_1_1[0];
    katana_manipulator_B.dv5[17] = katana_manipulator_B.INPUT_3_1_1[1];
    katana_manipulator_B.dv5[18] = katana_manipulator_B.INPUT_3_1_1[2];
    katana_manipulator_B.dv5[19] = katana_manipulator_B.INPUT_3_1_1[3];
    katana_manipulator_B.iv5[5] = 20;
    katana_manipulator_B.dv5[20] = katana_manipulator_B.INPUT_4_1_1[0];
    katana_manipulator_B.dv5[21] = katana_manipulator_B.INPUT_4_1_1[1];
    katana_manipulator_B.dv5[22] = katana_manipulator_B.INPUT_4_1_1[2];
    katana_manipulator_B.dv5[23] = katana_manipulator_B.INPUT_4_1_1[3];
    katana_manipulator_B.iv5[6] = 24;
    katana_manipulator_B.dv5[24] = katana_manipulator_B.INPUT_5_1_1[0];
    katana_manipulator_B.dv5[25] = katana_manipulator_B.INPUT_5_1_1[1];
    katana_manipulator_B.dv5[26] = katana_manipulator_B.INPUT_5_1_1[2];
    katana_manipulator_B.dv5[27] = katana_manipulator_B.INPUT_5_1_1[3];
    katana_manipulator_B.iv5[7] = 28;
    katana_manipulator_B.dv5[28] = katana_manipulator_B.INPUT_6_1_1[0];
    katana_manipulator_B.dv5[29] = katana_manipulator_B.INPUT_6_1_1[1];
    katana_manipulator_B.dv5[30] = katana_manipulator_B.INPUT_6_1_1[2];
    katana_manipulator_B.dv5[31] = katana_manipulator_B.INPUT_6_1_1[3];
    katana_manipulator_B.iv5[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &katana_manipulator_B.dv5[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &katana_manipulator_B.iv5[0];
    diagnosticManager = (NeuDiagnosticManager *)
      katana_manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)
      katana_manipulator_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(katana_manipulator_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(katana_manipulator_M, msg);
      }
    }

    // End of Update for SimscapeExecutionBlock: '<S51>/STATE_1'

    // Update for RateTransition: '<Root>/Rate Transition'
    if (rtmIsMajorTimeStep(katana_manipulator_M) &&
        katana_manipulator_M->Timing.TaskCounters.TID[3] == 0) {
      katana_manipulator_DW.RateTransition_Buffer0 =
        katana_manipulator_B.In1_c.Data;
    }

    // End of Update for RateTransition: '<Root>/Rate Transition'

    // Update for RateTransition: '<Root>/Rate Transition1'
    if (rtmIsMajorTimeStep(katana_manipulator_M) &&
        katana_manipulator_M->Timing.TaskCounters.TID[2] == 0) {
      for (i = 0; i < 7; i++) {
        katana_manipulator_DW.RateTransition1_Buffer0[i] =
          katana_manipulator_B.In1.Data[i];
      }
    }

    // End of Update for RateTransition: '<Root>/Rate Transition1'
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(katana_manipulator_M)) {
    rt_ertODEUpdateContinuousStates(&katana_manipulator_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++katana_manipulator_M->Timing.clockTick0;
    katana_manipulator_M->Timing.t[0] = rtsiGetSolverStopTime
      (&katana_manipulator_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.0001s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.0001, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      katana_manipulator_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void katana_manipulator_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_0;
  char *msg;
  XDot_katana_manipulator_T *_rtXdot;
  _rtXdot = ((XDot_katana_manipulator_T *) katana_manipulator_M->derivs);

  // Derivatives for SimscapeExecutionBlock: '<S51>/STATE_1'
  simulationData = (NeslSimulationData *)katana_manipulator_DW.STATE_1_SimData;
  time = katana_manipulator_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 14;
  simulationData->mData->mContStates.mX =
    &katana_manipulator_X.katana_manipulatorSubsystemkata[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX =
    &katana_manipulator_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &katana_manipulator_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep
    (katana_manipulator_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&katana_manipulator_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  katana_manipulator_B.iv4[0] = 0;
  katana_manipulator_B.dv4[0] = katana_manipulator_B.INPUT_8_1_1[0];
  katana_manipulator_B.dv4[1] = katana_manipulator_B.INPUT_8_1_1[1];
  katana_manipulator_B.dv4[2] = katana_manipulator_B.INPUT_8_1_1[2];
  katana_manipulator_B.dv4[3] = katana_manipulator_B.INPUT_8_1_1[3];
  katana_manipulator_B.iv4[1] = 4;
  katana_manipulator_B.dv4[4] = katana_manipulator_B.INPUT_7_1_1[0];
  katana_manipulator_B.dv4[5] = katana_manipulator_B.INPUT_7_1_1[1];
  katana_manipulator_B.dv4[6] = katana_manipulator_B.INPUT_7_1_1[2];
  katana_manipulator_B.dv4[7] = katana_manipulator_B.INPUT_7_1_1[3];
  katana_manipulator_B.iv4[2] = 8;
  katana_manipulator_B.dv4[8] = katana_manipulator_B.INPUT_1_1_1[0];
  katana_manipulator_B.dv4[9] = katana_manipulator_B.INPUT_1_1_1[1];
  katana_manipulator_B.dv4[10] = katana_manipulator_B.INPUT_1_1_1[2];
  katana_manipulator_B.dv4[11] = katana_manipulator_B.INPUT_1_1_1[3];
  katana_manipulator_B.iv4[3] = 12;
  katana_manipulator_B.dv4[12] = katana_manipulator_B.INPUT_2_1_1[0];
  katana_manipulator_B.dv4[13] = katana_manipulator_B.INPUT_2_1_1[1];
  katana_manipulator_B.dv4[14] = katana_manipulator_B.INPUT_2_1_1[2];
  katana_manipulator_B.dv4[15] = katana_manipulator_B.INPUT_2_1_1[3];
  katana_manipulator_B.iv4[4] = 16;
  katana_manipulator_B.dv4[16] = katana_manipulator_B.INPUT_3_1_1[0];
  katana_manipulator_B.dv4[17] = katana_manipulator_B.INPUT_3_1_1[1];
  katana_manipulator_B.dv4[18] = katana_manipulator_B.INPUT_3_1_1[2];
  katana_manipulator_B.dv4[19] = katana_manipulator_B.INPUT_3_1_1[3];
  katana_manipulator_B.iv4[5] = 20;
  katana_manipulator_B.dv4[20] = katana_manipulator_B.INPUT_4_1_1[0];
  katana_manipulator_B.dv4[21] = katana_manipulator_B.INPUT_4_1_1[1];
  katana_manipulator_B.dv4[22] = katana_manipulator_B.INPUT_4_1_1[2];
  katana_manipulator_B.dv4[23] = katana_manipulator_B.INPUT_4_1_1[3];
  katana_manipulator_B.iv4[6] = 24;
  katana_manipulator_B.dv4[24] = katana_manipulator_B.INPUT_5_1_1[0];
  katana_manipulator_B.dv4[25] = katana_manipulator_B.INPUT_5_1_1[1];
  katana_manipulator_B.dv4[26] = katana_manipulator_B.INPUT_5_1_1[2];
  katana_manipulator_B.dv4[27] = katana_manipulator_B.INPUT_5_1_1[3];
  katana_manipulator_B.iv4[7] = 28;
  katana_manipulator_B.dv4[28] = katana_manipulator_B.INPUT_6_1_1[0];
  katana_manipulator_B.dv4[29] = katana_manipulator_B.INPUT_6_1_1[1];
  katana_manipulator_B.dv4[30] = katana_manipulator_B.INPUT_6_1_1[2];
  katana_manipulator_B.dv4[31] = katana_manipulator_B.INPUT_6_1_1[3];
  katana_manipulator_B.iv4[8] = 32;
  simulationData->mData->mInputValues.mN = 32;
  simulationData->mData->mInputValues.mX = &katana_manipulator_B.dv4[0];
  simulationData->mData->mInputOffsets.mN = 9;
  simulationData->mData->mInputOffsets.mX = &katana_manipulator_B.iv4[0];
  simulationData->mData->mDx.mN = 14;
  simulationData->mData->mDx.mX = &_rtXdot->katana_manipulatorSubsystemkata[0];
  diagnosticManager = (NeuDiagnosticManager *)
    katana_manipulator_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_0 = ne_simulator_method((NeslSimulator *)
    katana_manipulator_DW.STATE_1_Simulator, NESL_SIM_DERIVATIVES,
    simulationData, diagnosticManager);
  if (tmp_0 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(katana_manipulator_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(katana_manipulator_M, msg);
    }
  }

  // End of Derivatives for SimscapeExecutionBlock: '<S51>/STATE_1'
}

// Model initialize function
void katana_manipulator_initialize(void)
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&katana_manipulator_M->solverInfo,
                          &katana_manipulator_M->Timing.simTimeStep);
    rtsiSetTPtr(&katana_manipulator_M->solverInfo, &rtmGetTPtr
                (katana_manipulator_M));
    rtsiSetStepSizePtr(&katana_manipulator_M->solverInfo,
                       &katana_manipulator_M->Timing.stepSize0);
    rtsiSetdXPtr(&katana_manipulator_M->solverInfo,
                 &katana_manipulator_M->derivs);
    rtsiSetContStatesPtr(&katana_manipulator_M->solverInfo, (real_T **)
                         &katana_manipulator_M->contStates);
    rtsiSetNumContStatesPtr(&katana_manipulator_M->solverInfo,
      &katana_manipulator_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&katana_manipulator_M->solverInfo,
      &katana_manipulator_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&katana_manipulator_M->solverInfo,
      &katana_manipulator_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&katana_manipulator_M->solverInfo,
      &katana_manipulator_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&katana_manipulator_M->solverInfo, (&rtmGetErrorStatus
      (katana_manipulator_M)));
    rtsiSetRTModelPtr(&katana_manipulator_M->solverInfo, katana_manipulator_M);
  }

  rtsiSetSimTimeStep(&katana_manipulator_M->solverInfo, MAJOR_TIME_STEP);
  katana_manipulator_M->intgData.y = katana_manipulator_M->odeY;
  katana_manipulator_M->intgData.f[0] = katana_manipulator_M->odeF[0];
  katana_manipulator_M->intgData.f[1] = katana_manipulator_M->odeF[1];
  katana_manipulator_M->intgData.f[2] = katana_manipulator_M->odeF[2];
  katana_manipulator_M->intgData.f[3] = katana_manipulator_M->odeF[3];
  katana_manipulator_M->intgData.f[4] = katana_manipulator_M->odeF[4];
  katana_manipulator_M->intgData.f[5] = katana_manipulator_M->odeF[5];
  katana_manipulator_M->contStates = ((X_katana_manipulator_T *)
    &katana_manipulator_X);
  rtsiSetSolverData(&katana_manipulator_M->solverInfo, static_cast<void *>
                    (&katana_manipulator_M->intgData));
  rtsiSetSolverName(&katana_manipulator_M->solverInfo,"ode5");
  rtmSetTPtr(katana_manipulator_M, &katana_manipulator_M->Timing.tArray[0]);
  katana_manipulator_M->Timing.stepSize0 = 0.0001;

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeslSimulationData *tmp_1;
    NeuDiagnosticManager *diagnosticManager;
    real_T tmp_2;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    int32_T i;
    static const char_T tmp_3[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p',
      'o', 's', 'i', 't', 'i', 'o', 'n', 's' };

    static const char_T tmp_4[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_5[22] = { '/', 's', 'i', 'm', 'u', 'l', 'a', 't',
      'e', 'd', '_', 'o', 'b', 'j', 'e', 'c', 't', '_', 'm', 'a', 's', 's' };

    // Start for SimscapeExecutionBlock: '<S51>/STATE_1'
    tmp = nesl_lease_simulator(
      "katana_manipulator/Subsystem/Solver Configuration_1", 0, 0);
    katana_manipulator_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(katana_manipulator_DW.STATE_1_Simulator);
    if (tmp_0) {
      katana_manipulator_279f9268_1_gateway();
      tmp = nesl_lease_simulator(
        "katana_manipulator/Subsystem/Solver Configuration_1", 0, 0);
      katana_manipulator_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    katana_manipulator_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    katana_manipulator_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    katana_manipulator_B.modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    katana_manipulator_B.modelParameters.mSolverTolerance = 0.001;
    katana_manipulator_B.modelParameters.mVariableStepSolver = false;
    katana_manipulator_B.modelParameters.mIsUsingODEN = false;
    katana_manipulator_B.modelParameters.mFixedStepSize = 0.0001;
    katana_manipulator_B.modelParameters.mStartTime = 0.0;
    katana_manipulator_B.modelParameters.mLoadInitialState = false;
    katana_manipulator_B.modelParameters.mUseSimState = false;
    katana_manipulator_B.modelParameters.mLinTrimCompile = false;
    katana_manipulator_B.modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    katana_manipulator_B.modelParameters.mRTWModifiedTimeStamp = 5.2374301E+8;
    tmp_2 = 0.001;
    katana_manipulator_B.modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 0.0001;
    katana_manipulator_B.modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    katana_manipulator_B.modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    katana_manipulator_B.modelParameters.mIsUsingODEN = tmp_0;
    katana_manipulator_B.modelParameters.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      katana_manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      katana_manipulator_DW.STATE_1_Simulator,
      &katana_manipulator_B.modelParameters, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(katana_manipulator_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(katana_manipulator_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S51>/STATE_1'

    // Start for RateTransition: '<Root>/Rate Transition'
    katana_manipulator_B.RateTransition =
      katana_manipulator_P.RateTransition_InitialCondition;

    // Start for RateTransition: '<Root>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      katana_manipulator_B.RateTransition1[i] =
        katana_manipulator_P.RateTransition1_InitialConditio;
    }

    // End of Start for RateTransition: '<Root>/Rate Transition1'

    // Start for SimscapeExecutionBlock: '<S51>/OUTPUT_1_0'
    tmp = nesl_lease_simulator(
      "katana_manipulator/Subsystem/Solver Configuration_1", 1, 0);
    katana_manipulator_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(katana_manipulator_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      katana_manipulator_279f9268_1_gateway();
      tmp = nesl_lease_simulator(
        "katana_manipulator/Subsystem/Solver Configuration_1", 1, 0);
      katana_manipulator_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    katana_manipulator_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    katana_manipulator_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    katana_manipulator_B.modelParameters_m.mSolverType = NE_SOLVER_TYPE_ODE;
    katana_manipulator_B.modelParameters_m.mSolverTolerance = 0.001;
    katana_manipulator_B.modelParameters_m.mVariableStepSolver = false;
    katana_manipulator_B.modelParameters_m.mIsUsingODEN = false;
    katana_manipulator_B.modelParameters_m.mFixedStepSize = 0.0001;
    katana_manipulator_B.modelParameters_m.mStartTime = 0.0;
    katana_manipulator_B.modelParameters_m.mLoadInitialState = false;
    katana_manipulator_B.modelParameters_m.mUseSimState = false;
    katana_manipulator_B.modelParameters_m.mLinTrimCompile = false;
    katana_manipulator_B.modelParameters_m.mLoggingMode = SSC_LOGGING_NONE;
    katana_manipulator_B.modelParameters_m.mRTWModifiedTimeStamp = 5.2374301E+8;
    tmp_2 = 0.001;
    katana_manipulator_B.modelParameters_m.mSolverTolerance = tmp_2;
    tmp_2 = 0.0001;
    katana_manipulator_B.modelParameters_m.mFixedStepSize = tmp_2;
    tmp_0 = false;
    katana_manipulator_B.modelParameters_m.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    katana_manipulator_B.modelParameters_m.mIsUsingODEN = tmp_0;
    katana_manipulator_B.modelParameters_m.mLoadInitialState = false;
    diagnosticManager = (NeuDiagnosticManager *)
      katana_manipulator_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      katana_manipulator_DW.OUTPUT_1_0_Simulator,
      &katana_manipulator_B.modelParameters_m, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(katana_manipulator_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(katana_manipulator_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S51>/OUTPUT_1_0'

    // InitializeConditions for SimscapeExecutionBlock: '<S51>/STATE_1'
    tmp_0 = false;
    if (tmp_0) {
      i = strcmp("ode5", rtsiGetSolverName(&katana_manipulator_M->solverInfo));
      if (i != 0) {
        msg = solver_mismatch_message("ode5", rtsiGetSolverName
          (&katana_manipulator_M->solverInfo));
        rtmSetErrorStatus(katana_manipulator_M, msg);
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S51>/STATE_1'

    // InitializeConditions for RateTransition: '<Root>/Rate Transition'
    katana_manipulator_DW.RateTransition_Buffer0 =
      katana_manipulator_P.RateTransition_InitialCondition;

    // InitializeConditions for RateTransition: '<Root>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      katana_manipulator_DW.RateTransition1_Buffer0[i] =
        katana_manipulator_P.RateTransition1_InitialConditio;
    }

    // End of InitializeConditions for RateTransition: '<Root>/Rate Transition1' 

    // SystemInitialize for Atomic SubSystem: '<S1>/Publish1'
    // Start for MATLABSystem: '<S6>/SinkBlock'
    katana_manipulator_DW.obj.matlabCodegenIsDeleted = true;
    katana_manipulator_DW.obj.isInitialized = 0;
    katana_manipulator_DW.obj.matlabCodegenIsDeleted = false;
    katana_manipulator_DW.obj.isSetupComplete = false;
    katana_manipulator_DW.obj.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      katana_manipulator_B.cv1[i] = tmp_3[i];
    }

    katana_manipulator_B.cv1[16] = '\x00';
    Pub_katana_manipulator_608.createPublisher(katana_manipulator_B.cv1, 1);
    katana_manipulator_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S6>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S1>/Publish1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S7>/Out1'
    katana_manipulator_B.In1 = katana_manipulator_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

    // Start for MATLABSystem: '<S2>/SourceBlock'
    katana_manipulator_DW.obj_c.matlabCodegenIsDeleted = true;
    katana_manipulator_DW.obj_c.isInitialized = 0;
    katana_manipulator_DW.obj_c.matlabCodegenIsDeleted = false;
    katana_manipulator_DW.obj_c.isSetupComplete = false;
    katana_manipulator_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      katana_manipulator_B.cv2[i] = tmp_4[i];
    }

    katana_manipulator_B.cv2[14] = '\x00';
    Sub_katana_manipulator_595.createSubscriber(katana_manipulator_B.cv2, 1);
    katana_manipulator_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S8>/Out1'
    katana_manipulator_B.In1_c = katana_manipulator_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'

    // Start for MATLABSystem: '<S3>/SourceBlock'
    katana_manipulator_DW.obj_d.matlabCodegenIsDeleted = true;
    katana_manipulator_DW.obj_d.isInitialized = 0;
    katana_manipulator_DW.obj_d.matlabCodegenIsDeleted = false;
    katana_manipulator_DW.obj_d.isSetupComplete = false;
    katana_manipulator_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      katana_manipulator_B.cv[i] = tmp_5[i];
    }

    katana_manipulator_B.cv[22] = '\x00';
    Sub_katana_manipulator_596.createSubscriber(katana_manipulator_B.cv, 1);
    katana_manipulator_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'
  }
}

// Model terminate function
void katana_manipulator_terminate(void)
{
  // Terminate for SimscapeExecutionBlock: '<S51>/STATE_1'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    katana_manipulator_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    katana_manipulator_DW.STATE_1_SimData);
  nesl_erase_simulator("katana_manipulator/Subsystem/Solver Configuration_1");

  // Terminate for SimscapeExecutionBlock: '<S51>/OUTPUT_1_0'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    katana_manipulator_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    katana_manipulator_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("katana_manipulator/Subsystem/Solver Configuration_1");

  // Terminate for Atomic SubSystem: '<S1>/Publish1'
  // Terminate for MATLABSystem: '<S6>/SinkBlock'
  matlabCodegenHandle_matlabCodeg(&katana_manipulator_DW.obj);

  // End of Terminate for SubSystem: '<S1>/Publish1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  matlabCodegenHandle_matlabCod_h(&katana_manipulator_DW.obj_c);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  matlabCodegenHandle_matlabCod_h(&katana_manipulator_DW.obj_d);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'
}

//
// File trailer for generated code.
//
// [EOF]
//
