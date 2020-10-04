//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: manipulator.cpp
//
// Code generated for Simulink model 'manipulator'.
//
// Model version                  : 1.132
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Sat Oct  3 22:49:05 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "manipulator.h"
#include "manipulator_private.h"

// Block signals (default storage)
B_manipulator_T manipulator_B;

// Continuous states
X_manipulator_T manipulator_X;

// Block states (default storage)
DW_manipulator_T manipulator_DW;

// Real-time model
RT_MODEL_manipulator_T manipulator_M_ = RT_MODEL_manipulator_T();
RT_MODEL_manipulator_T *const manipulator_M = &manipulator_M_;

// Forward declaration for local functions
static void manipulator_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_manipulator_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static real_T manipulator_eml_rand_mt19937ar(uint32_T state[625]);
static real_T manipulator_rand(void);
static void matlabCodegenHandle_matlab_mqwx(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_matlabCod_m(ros_slros_internal_block_Curr_T *obj);
static void matlabCodegenHandle_matlabCo_mq(ros_slros_internal_block_Publ_T *obj);
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

  (manipulator_M->Timing.TaskCounters.TID[2])++;
  if ((manipulator_M->Timing.TaskCounters.TID[2]) > 9) {// Sample time: [0.04s, 0.0s] 
    manipulator_M->Timing.TaskCounters.TID[2] = 0;
  }

  (manipulator_M->Timing.TaskCounters.TID[3])++;
  if ((manipulator_M->Timing.TaskCounters.TID[3]) > 249) {// Sample time: [1.0s, 0.0s] 
    manipulator_M->Timing.TaskCounters.TID[3] = 0;
  }
}

// Projection for root system: '<Root>'
void manipulator_projection(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_0;
  char *msg;

  // Projection for SimscapeExecutionBlock: '<S49>/STATE_1'
  simulationData = (NeslSimulationData *)manipulator_DW.STATE_1_SimData;
  time = manipulator_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 14;
  simulationData->mData->mContStates.mX =
    &manipulator_X.manipulatorManipulatorla_1_join[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &manipulator_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &manipulator_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(manipulator_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&manipulator_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  manipulator_B.iv3[0] = 0;
  manipulator_B.dv3[0] = manipulator_B.INPUT_8_1_1[0];
  manipulator_B.dv3[1] = manipulator_B.INPUT_8_1_1[1];
  manipulator_B.dv3[2] = manipulator_B.INPUT_8_1_1[2];
  manipulator_B.dv3[3] = manipulator_B.INPUT_8_1_1[3];
  manipulator_B.iv3[1] = 4;
  manipulator_B.dv3[4] = manipulator_B.INPUT_1_1_1[0];
  manipulator_B.dv3[5] = manipulator_B.INPUT_1_1_1[1];
  manipulator_B.dv3[6] = manipulator_B.INPUT_1_1_1[2];
  manipulator_B.dv3[7] = manipulator_B.INPUT_1_1_1[3];
  manipulator_B.iv3[2] = 8;
  manipulator_B.dv3[8] = manipulator_B.INPUT_2_1_1[0];
  manipulator_B.dv3[9] = manipulator_B.INPUT_2_1_1[1];
  manipulator_B.dv3[10] = manipulator_B.INPUT_2_1_1[2];
  manipulator_B.dv3[11] = manipulator_B.INPUT_2_1_1[3];
  manipulator_B.iv3[3] = 12;
  manipulator_B.dv3[12] = manipulator_B.INPUT_3_1_1[0];
  manipulator_B.dv3[13] = manipulator_B.INPUT_3_1_1[1];
  manipulator_B.dv3[14] = manipulator_B.INPUT_3_1_1[2];
  manipulator_B.dv3[15] = manipulator_B.INPUT_3_1_1[3];
  manipulator_B.iv3[4] = 16;
  manipulator_B.dv3[16] = manipulator_B.INPUT_4_1_1[0];
  manipulator_B.dv3[17] = manipulator_B.INPUT_4_1_1[1];
  manipulator_B.dv3[18] = manipulator_B.INPUT_4_1_1[2];
  manipulator_B.dv3[19] = manipulator_B.INPUT_4_1_1[3];
  manipulator_B.iv3[5] = 20;
  manipulator_B.dv3[20] = manipulator_B.INPUT_5_1_1[0];
  manipulator_B.dv3[21] = manipulator_B.INPUT_5_1_1[1];
  manipulator_B.dv3[22] = manipulator_B.INPUT_5_1_1[2];
  manipulator_B.dv3[23] = manipulator_B.INPUT_5_1_1[3];
  manipulator_B.iv3[6] = 24;
  manipulator_B.dv3[24] = manipulator_B.INPUT_6_1_1[0];
  manipulator_B.dv3[25] = manipulator_B.INPUT_6_1_1[1];
  manipulator_B.dv3[26] = manipulator_B.INPUT_6_1_1[2];
  manipulator_B.dv3[27] = manipulator_B.INPUT_6_1_1[3];
  manipulator_B.iv3[7] = 28;
  manipulator_B.dv3[28] = manipulator_B.INPUT_7_1_1[0];
  manipulator_B.dv3[29] = manipulator_B.INPUT_7_1_1[1];
  manipulator_B.dv3[30] = manipulator_B.INPUT_7_1_1[2];
  manipulator_B.dv3[31] = manipulator_B.INPUT_7_1_1[3];
  manipulator_B.iv3[8] = 32;
  simulationData->mData->mInputValues.mN = 32;
  simulationData->mData->mInputValues.mX = &manipulator_B.dv3[0];
  simulationData->mData->mInputOffsets.mN = 9;
  simulationData->mData->mInputOffsets.mX = &manipulator_B.iv3[0];
  diagnosticManager = (NeuDiagnosticManager *)manipulator_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_0 = ne_simulator_method((NeslSimulator *)manipulator_DW.STATE_1_Simulator,
    NESL_SIM_PROJECTION, simulationData, diagnosticManager);
  if (tmp_0 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(manipulator_M, msg);
    }
  }

  // End of Projection for SimscapeExecutionBlock: '<S49>/STATE_1'
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
  manipulator_derivatives();

  // f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*));
  hB[0] = h * rt_ODE5_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[0]);
  rtsiSetdX(si, f1);
  manipulator_step();
  manipulator_derivatives();

  // f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*));
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE5_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[1]);
  rtsiSetdX(si, f2);
  manipulator_step();
  manipulator_derivatives();

  // f(:,4) = feval(odefile, t + hA(3), y + f*hB(:,3), args(:)(*));
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE5_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, t + h*rt_ODE5_A[2]);
  rtsiSetdX(si, f3);
  manipulator_step();
  manipulator_derivatives();

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
  manipulator_step();
  manipulator_derivatives();

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
  manipulator_step();
  manipulator_derivatives();

  // tnew = t + hA(6);
  // ynew = y + f*hB(:,6);
  for (i = 0; i <= 5; i++) {
    hB[i] = h * rt_ODE5_B[5][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2] +
                   f3[i]*hB[3] + f4[i]*hB[4] + f5[i]*hB[5]);
  }

  manipulator_step();
  manipulator_projection();
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

static void manipulator_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_manipulator_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_manipulator_160.getLatestMessage
    (&manipulator_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = manipulator_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    manipulator_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    manipulator_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = manipulator_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &manipulator_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_manipulator_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    manipulator_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    manipulator_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

// Function for MATLAB Function: '<S1>/Pose Quantization and Noise'
static real_T manipulator_eml_rand_mt19937ar(uint32_T state[625])
{
  real_T r;
  uint32_T mti;
  uint32_T y;
  int32_T kk;
  int32_T k;
  boolean_T b_isvalid;
  int32_T exitg1;
  boolean_T exitg2;

  // ========================= COPYRIGHT NOTICE ============================
  //  This is a uniform (0,1) pseudorandom number generator based on:
  //
  //  A C-program for MT19937, with initialization improved 2002/1/26.
  //  Coded by Takuji Nishimura and Makoto Matsumoto.
  //
  //  Copyright (C) 1997 - 2002, Makoto Matsumoto and Takuji Nishimura,
  //  All rights reserved.
  //
  //  Redistribution and use in source and binary forms, with or without
  //  modification, are permitted provided that the following conditions
  //  are met:
  //
  //    1. Redistributions of source code must retain the above copyright
  //       notice, this list of conditions and the following disclaimer.
  //
  //    2. Redistributions in binary form must reproduce the above copyright
  //       notice, this list of conditions and the following disclaimer
  //       in the documentation and/or other materials provided with the
  //       distribution.
  //
  //    3. The names of its contributors may not be used to endorse or
  //       promote products derived from this software without specific
  //       prior written permission.
  //
  //  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
  //  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
  //  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
  //  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT
  //  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
  //  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  //  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
  //  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
  //  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  //  (INCLUDING  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  //  OF THIS  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  //
  // =============================   END   =================================
  do {
    exitg1 = 0;
    for (k = 0; k < 2; k++) {
      mti = state[624] + 1U;
      if (mti >= 625U) {
        for (kk = 0; kk < 227; kk++) {
          y = (state[kk + 1] & 2147483647U) | (state[kk] & 2147483648U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          state[kk] = state[kk + 397] ^ y;
        }

        for (kk = 0; kk < 396; kk++) {
          y = (state[kk + 227] & 2147483648U) | (state[kk + 228] & 2147483647U);
          if ((y & 1U) == 0U) {
            y >>= 1U;
          } else {
            y = y >> 1U ^ 2567483615U;
          }

          state[kk + 227] = state[kk] ^ y;
        }

        y = (state[623] & 2147483648U) | (state[0] & 2147483647U);
        if ((y & 1U) == 0U) {
          y >>= 1U;
        } else {
          y = y >> 1U ^ 2567483615U;
        }

        state[623] = state[396] ^ y;
        mti = 1U;
      }

      y = state[static_cast<int32_T>(mti) - 1];
      state[624] = mti;
      y ^= y >> 11U;
      y ^= y << 7U & 2636928640U;
      y ^= y << 15U & 4022730752U;
      manipulator_B.u[k] = y >> 18U ^ y;
    }

    r = (static_cast<real_T>(manipulator_B.u[0] >> 5U) * 6.7108864E+7 +
         static_cast<real_T>(manipulator_B.u[1] >> 6U)) * 1.1102230246251565E-16;
    if (r == 0.0) {
      b_isvalid = ((state[624] >= 1U) && (state[624] < 625U));
      if (b_isvalid) {
        b_isvalid = false;
        k = 1;
        exitg2 = false;
        while ((!exitg2) && (k < 625)) {
          if (state[k - 1] == 0U) {
            k++;
          } else {
            b_isvalid = true;
            exitg2 = true;
          }
        }
      }

      if (!b_isvalid) {
        mti = 5489U;
        state[0] = 5489U;
        for (k = 0; k < 623; k++) {
          mti = ((mti >> 30U ^ mti) * 1812433253U + k) + 1U;
          state[k + 1] = mti;
        }

        state[624] = 624U;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  return r;
}

// Function for MATLAB Function: '<S1>/Pose Quantization and Noise'
static real_T manipulator_rand(void)
{
  real_T r;
  int32_T hi;
  uint32_T test2;
  uint32_T b_r;
  switch (manipulator_DW.method) {
   case 4U:
    hi = static_cast<int32_T>(manipulator_DW.state / 127773U);
    b_r = (manipulator_DW.state - hi * 127773U) * 16807U;
    test2 = 2836U * hi;
    if (b_r < test2) {
      b_r = ~(test2 - b_r) & 2147483647U;
    } else {
      b_r -= test2;
    }

    manipulator_DW.state = b_r;
    r = static_cast<real_T>(b_r) * 4.6566128752457969E-10;
    break;

   case 5U:
    b_r = 69069U * manipulator_DW.state_b[0] + 1234567U;
    test2 = manipulator_DW.state_b[1] << 13 ^ manipulator_DW.state_b[1];
    test2 ^= test2 >> 17;
    test2 ^= test2 << 5;
    manipulator_DW.state_b[0] = b_r;
    manipulator_DW.state_b[1] = test2;
    r = static_cast<real_T>(b_r + test2) * 2.328306436538696E-10;
    break;

   default:
    if (!manipulator_DW.state_not_empty) {
      memset(&manipulator_DW.state_i[0], 0, 625U * sizeof(uint32_T));
      b_r = 5489U;
      manipulator_DW.state_i[0] = 5489U;
      for (hi = 0; hi < 623; hi++) {
        b_r = ((b_r >> 30U ^ b_r) * 1812433253U + hi) + 1U;
        manipulator_DW.state_i[hi + 1] = b_r;
      }

      manipulator_DW.state_i[624] = 624U;
      manipulator_DW.state_not_empty = true;
    }

    r = manipulator_eml_rand_mt19937ar(manipulator_DW.state_i);
    break;
  }

  return r;
}

static void matlabCodegenHandle_matlab_mqwx(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCod_m(ros_slros_internal_block_Curr_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCo_mq(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

// Model step function
void manipulator_step(void)
{
  if (rtmIsMajorTimeStep(manipulator_M)) {
    // set solver stop time
    rtsiSetSolverStopTime(&manipulator_M->solverInfo,
                          ((manipulator_M->Timing.clockTick0+1)*
      manipulator_M->Timing.stepSize0));
  }                                    // end MajorTimeStep

  // Update absolute time of base rate at minor time step
  if (rtmIsMinorTimeStep(manipulator_M)) {
    manipulator_M->Timing.t[0] = rtsiGetT(&manipulator_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    boolean_T b_varargout_1;
    static const real_T b[7] = { 138.88888888888889, 138.88888888888889,
      158.29542289481014, 138.88888888888889, 158.29542289481014,
      158.29542289481014, 158.29542289481014 };

    static const uint8_T b_0[10] = { 108U, 97U, 95U, 49U, 95U, 106U, 111U, 105U,
      110U, 116U };

    static const uint8_T c[10] = { 108U, 97U, 95U, 50U, 95U, 106U, 111U, 105U,
      110U, 116U };

    static const uint8_T d[10] = { 108U, 97U, 95U, 51U, 95U, 106U, 111U, 105U,
      110U, 116U };

    static const uint8_T e[10] = { 108U, 97U, 95U, 52U, 95U, 106U, 111U, 105U,
      110U, 116U };

    static const uint8_T f[10] = { 108U, 97U, 95U, 53U, 95U, 106U, 111U, 105U,
      110U, 116U };

    static const uint8_T g[10] = { 108U, 97U, 95U, 54U, 95U, 106U, 111U, 105U,
      110U, 116U };

    static const uint8_T h[10] = { 108U, 97U, 95U, 55U, 95U, 106U, 111U, 105U,
      110U, 116U };

    // SimscapeExecutionBlock: '<S49>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S49>/OUTPUT_1_0'

    simulationData = (NeslSimulationData *)manipulator_DW.STATE_1_SimData;
    manipulator_B.time_tmp = manipulator_M->Timing.t[0];
    manipulator_B.time = manipulator_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &manipulator_B.time;
    simulationData->mData->mContStates.mN = 14;
    simulationData->mData->mContStates.mX =
      &manipulator_X.manipulatorManipulatorla_1_join[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &manipulator_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &manipulator_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(manipulator_M);
    simulationData->mData->mIsMajorTimeStep = tmp;
    b_varargout_1 = false;
    simulationData->mData->mIsSolverAssertCheck = b_varargout_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    b_varargout_1 = rtsiIsSolverComputingJacobian(&manipulator_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = b_varargout_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    manipulator_B.iv1[0] = 0;
    manipulator_B.dv1[0] = manipulator_B.INPUT_8_1_1[0];
    manipulator_B.dv1[1] = manipulator_B.INPUT_8_1_1[1];
    manipulator_B.dv1[2] = manipulator_B.INPUT_8_1_1[2];
    manipulator_B.dv1[3] = manipulator_B.INPUT_8_1_1[3];
    manipulator_B.iv1[1] = 4;
    manipulator_B.dv1[4] = manipulator_B.INPUT_1_1_1[0];
    manipulator_B.dv1[5] = manipulator_B.INPUT_1_1_1[1];
    manipulator_B.dv1[6] = manipulator_B.INPUT_1_1_1[2];
    manipulator_B.dv1[7] = manipulator_B.INPUT_1_1_1[3];
    manipulator_B.iv1[2] = 8;
    manipulator_B.dv1[8] = manipulator_B.INPUT_2_1_1[0];
    manipulator_B.dv1[9] = manipulator_B.INPUT_2_1_1[1];
    manipulator_B.dv1[10] = manipulator_B.INPUT_2_1_1[2];
    manipulator_B.dv1[11] = manipulator_B.INPUT_2_1_1[3];
    manipulator_B.iv1[3] = 12;
    manipulator_B.dv1[12] = manipulator_B.INPUT_3_1_1[0];
    manipulator_B.dv1[13] = manipulator_B.INPUT_3_1_1[1];
    manipulator_B.dv1[14] = manipulator_B.INPUT_3_1_1[2];
    manipulator_B.dv1[15] = manipulator_B.INPUT_3_1_1[3];
    manipulator_B.iv1[4] = 16;
    manipulator_B.dv1[16] = manipulator_B.INPUT_4_1_1[0];
    manipulator_B.dv1[17] = manipulator_B.INPUT_4_1_1[1];
    manipulator_B.dv1[18] = manipulator_B.INPUT_4_1_1[2];
    manipulator_B.dv1[19] = manipulator_B.INPUT_4_1_1[3];
    manipulator_B.iv1[5] = 20;
    manipulator_B.dv1[20] = manipulator_B.INPUT_5_1_1[0];
    manipulator_B.dv1[21] = manipulator_B.INPUT_5_1_1[1];
    manipulator_B.dv1[22] = manipulator_B.INPUT_5_1_1[2];
    manipulator_B.dv1[23] = manipulator_B.INPUT_5_1_1[3];
    manipulator_B.iv1[6] = 24;
    manipulator_B.dv1[24] = manipulator_B.INPUT_6_1_1[0];
    manipulator_B.dv1[25] = manipulator_B.INPUT_6_1_1[1];
    manipulator_B.dv1[26] = manipulator_B.INPUT_6_1_1[2];
    manipulator_B.dv1[27] = manipulator_B.INPUT_6_1_1[3];
    manipulator_B.iv1[7] = 28;
    manipulator_B.dv1[28] = manipulator_B.INPUT_7_1_1[0];
    manipulator_B.dv1[29] = manipulator_B.INPUT_7_1_1[1];
    manipulator_B.dv1[30] = manipulator_B.INPUT_7_1_1[2];
    manipulator_B.dv1[31] = manipulator_B.INPUT_7_1_1[3];
    manipulator_B.iv1[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &manipulator_B.dv1[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &manipulator_B.iv1[0];
    simulationData->mData->mOutputs.mN = 14;
    simulationData->mData->mOutputs.mX = &manipulator_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    manipulator_B.i = ne_simulator_method((NeslSimulator *)
      manipulator_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (manipulator_B.i != 0) {
      b_varargout_1 = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (b_varargout_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    if (rtmIsMajorTimeStep(manipulator_M) &&
        manipulator_M->Timing.TaskCounters.TID[2] == 0) {
      // Outputs for Atomic SubSystem: '<Root>/Subscribe1'
      // MATLABSystem: '<S4>/SourceBlock' incorporates:
      //   Inport: '<S57>/In1'

      b_varargout_1 = Sub_manipulator_272.getLatestMessage
        (&manipulator_B.b_varargout_2_b);

      // Outputs for Enabled SubSystem: '<S4>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S57>/Enable'

      if (b_varargout_1) {
        manipulator_B.In1_j = manipulator_B.b_varargout_2_b;
      }

      // End of MATLABSystem: '<S4>/SourceBlock'
      // End of Outputs for SubSystem: '<S4>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subscribe1'
    }

    // SimscapeInputBlock: '<S49>/INPUT_8_1_1'
    manipulator_B.INPUT_8_1_1[0] = manipulator_B.In1_j.Data;
    manipulator_B.INPUT_8_1_1[1] = 0.0;
    manipulator_B.INPUT_8_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_8_1_1_Discrete[0] = !(manipulator_B.INPUT_8_1_1[0] ==
        manipulator_DW.INPUT_8_1_1_Discrete[1]);
      manipulator_DW.INPUT_8_1_1_Discrete[1] = manipulator_B.INPUT_8_1_1[0];
    }

    manipulator_B.INPUT_8_1_1[0] = manipulator_DW.INPUT_8_1_1_Discrete[1];
    manipulator_B.INPUT_8_1_1[3] = manipulator_DW.INPUT_8_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_8_1_1'
    if (rtmIsMajorTimeStep(manipulator_M) &&
        manipulator_M->Timing.TaskCounters.TID[1] == 0) {
      // Outputs for Atomic SubSystem: '<Root>/Subscribe'
      // MATLABSystem: '<S3>/SourceBlock' incorporates:
      //   Inport: '<S56>/In1'

      manipulator_SystemCore_step(&b_varargout_1,
        manipulator_B.b_varargout_2_Data,
        &manipulator_B.b_varargout_2_Data_SL_Info_Curr,
        &manipulator_B.b_varargout_2_Data_SL_Info_Rece,
        &manipulator_B.b_varargout_2_Layout_DataOffset,
        manipulator_B.b_varargout_2_Layout_Dim,
        &manipulator_B.b_varargout_2_Layout_Dim_SL_Inf,
        &manipulator_B.b_varargout_2_Layout_Dim_SL_I_g);

      // Outputs for Enabled SubSystem: '<S3>/Enabled Subsystem' incorporates:
      //   EnablePort: '<S56>/Enable'

      if (b_varargout_1) {
        for (manipulator_B.i = 0; manipulator_B.i < 7; manipulator_B.i++) {
          manipulator_B.In1.Data[manipulator_B.i] =
            manipulator_B.b_varargout_2_Data[manipulator_B.i];
        }

        manipulator_B.In1.Data_SL_Info.CurrentLength =
          manipulator_B.b_varargout_2_Data_SL_Info_Curr;
        manipulator_B.In1.Data_SL_Info.ReceivedLength =
          manipulator_B.b_varargout_2_Data_SL_Info_Rece;
        manipulator_B.In1.Layout.DataOffset =
          manipulator_B.b_varargout_2_Layout_DataOffset;
        memcpy(&manipulator_B.In1.Layout.Dim[0],
               &manipulator_B.b_varargout_2_Layout_Dim[0], sizeof
               (SL_Bus_manipulator_std_msgs_MultiArrayDimension) << 4U);
        manipulator_B.In1.Layout.Dim_SL_Info.CurrentLength =
          manipulator_B.b_varargout_2_Layout_Dim_SL_Inf;
        manipulator_B.In1.Layout.Dim_SL_Info.ReceivedLength =
          manipulator_B.b_varargout_2_Layout_Dim_SL_I_g;
      }

      // End of MATLABSystem: '<S3>/SourceBlock'
      // End of Outputs for SubSystem: '<S3>/Enabled Subsystem'
      // End of Outputs for SubSystem: '<Root>/Subscribe'

      // MATLAB Function: '<S1>/Torque Quantization' incorporates:
      //   SimscapeExecutionBlock: '<S49>/OUTPUT_1_0'
      //   SimscapeExecutionBlock: '<S49>/STATE_1'

      for (manipulator_B.i = 0; manipulator_B.i < 7; manipulator_B.i++) {
        manipulator_B.quantized_torque[manipulator_B.i] = rt_roundd_snf
          (manipulator_B.In1.Data[manipulator_B.i] * b[manipulator_B.i]) /
          b[manipulator_B.i];
      }

      // End of MATLAB Function: '<S1>/Torque Quantization'
    }

    // SimscapeInputBlock: '<S49>/INPUT_1_1_1'
    manipulator_B.INPUT_1_1_1[0] = manipulator_B.quantized_torque[0];
    manipulator_B.INPUT_1_1_1[1] = 0.0;
    manipulator_B.INPUT_1_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_1_1_1_Discrete[0] = !(manipulator_B.INPUT_1_1_1[0] ==
        manipulator_DW.INPUT_1_1_1_Discrete[1]);
      manipulator_DW.INPUT_1_1_1_Discrete[1] = manipulator_B.INPUT_1_1_1[0];
    }

    manipulator_B.INPUT_1_1_1[0] = manipulator_DW.INPUT_1_1_1_Discrete[1];
    manipulator_B.INPUT_1_1_1[3] = manipulator_DW.INPUT_1_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_1_1_1'

    // SimscapeInputBlock: '<S49>/INPUT_2_1_1'
    manipulator_B.INPUT_2_1_1[0] = manipulator_B.quantized_torque[1];
    manipulator_B.INPUT_2_1_1[1] = 0.0;
    manipulator_B.INPUT_2_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_2_1_1_Discrete[0] = !(manipulator_B.INPUT_2_1_1[0] ==
        manipulator_DW.INPUT_2_1_1_Discrete[1]);
      manipulator_DW.INPUT_2_1_1_Discrete[1] = manipulator_B.INPUT_2_1_1[0];
    }

    manipulator_B.INPUT_2_1_1[0] = manipulator_DW.INPUT_2_1_1_Discrete[1];
    manipulator_B.INPUT_2_1_1[3] = manipulator_DW.INPUT_2_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_2_1_1'

    // SimscapeInputBlock: '<S49>/INPUT_3_1_1'
    manipulator_B.INPUT_3_1_1[0] = manipulator_B.quantized_torque[2];
    manipulator_B.INPUT_3_1_1[1] = 0.0;
    manipulator_B.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_3_1_1_Discrete[0] = !(manipulator_B.INPUT_3_1_1[0] ==
        manipulator_DW.INPUT_3_1_1_Discrete[1]);
      manipulator_DW.INPUT_3_1_1_Discrete[1] = manipulator_B.INPUT_3_1_1[0];
    }

    manipulator_B.INPUT_3_1_1[0] = manipulator_DW.INPUT_3_1_1_Discrete[1];
    manipulator_B.INPUT_3_1_1[3] = manipulator_DW.INPUT_3_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_3_1_1'

    // SimscapeInputBlock: '<S49>/INPUT_4_1_1'
    manipulator_B.INPUT_4_1_1[0] = manipulator_B.quantized_torque[3];
    manipulator_B.INPUT_4_1_1[1] = 0.0;
    manipulator_B.INPUT_4_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_4_1_1_Discrete[0] = !(manipulator_B.INPUT_4_1_1[0] ==
        manipulator_DW.INPUT_4_1_1_Discrete[1]);
      manipulator_DW.INPUT_4_1_1_Discrete[1] = manipulator_B.INPUT_4_1_1[0];
    }

    manipulator_B.INPUT_4_1_1[0] = manipulator_DW.INPUT_4_1_1_Discrete[1];
    manipulator_B.INPUT_4_1_1[3] = manipulator_DW.INPUT_4_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_4_1_1'

    // SimscapeInputBlock: '<S49>/INPUT_5_1_1'
    manipulator_B.INPUT_5_1_1[0] = manipulator_B.quantized_torque[4];
    manipulator_B.INPUT_5_1_1[1] = 0.0;
    manipulator_B.INPUT_5_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_5_1_1_Discrete[0] = !(manipulator_B.INPUT_5_1_1[0] ==
        manipulator_DW.INPUT_5_1_1_Discrete[1]);
      manipulator_DW.INPUT_5_1_1_Discrete[1] = manipulator_B.INPUT_5_1_1[0];
    }

    manipulator_B.INPUT_5_1_1[0] = manipulator_DW.INPUT_5_1_1_Discrete[1];
    manipulator_B.INPUT_5_1_1[3] = manipulator_DW.INPUT_5_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_5_1_1'

    // SimscapeInputBlock: '<S49>/INPUT_6_1_1'
    manipulator_B.INPUT_6_1_1[0] = manipulator_B.quantized_torque[5];
    manipulator_B.INPUT_6_1_1[1] = 0.0;
    manipulator_B.INPUT_6_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_6_1_1_Discrete[0] = !(manipulator_B.INPUT_6_1_1[0] ==
        manipulator_DW.INPUT_6_1_1_Discrete[1]);
      manipulator_DW.INPUT_6_1_1_Discrete[1] = manipulator_B.INPUT_6_1_1[0];
    }

    manipulator_B.INPUT_6_1_1[0] = manipulator_DW.INPUT_6_1_1_Discrete[1];
    manipulator_B.INPUT_6_1_1[3] = manipulator_DW.INPUT_6_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_6_1_1'

    // SimscapeInputBlock: '<S49>/INPUT_7_1_1'
    manipulator_B.INPUT_7_1_1[0] = manipulator_B.quantized_torque[6];
    manipulator_B.INPUT_7_1_1[1] = 0.0;
    manipulator_B.INPUT_7_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(manipulator_M)) {
      manipulator_DW.INPUT_7_1_1_Discrete[0] = !(manipulator_B.INPUT_7_1_1[0] ==
        manipulator_DW.INPUT_7_1_1_Discrete[1]);
      manipulator_DW.INPUT_7_1_1_Discrete[1] = manipulator_B.INPUT_7_1_1[0];
    }

    manipulator_B.INPUT_7_1_1[0] = manipulator_DW.INPUT_7_1_1_Discrete[1];
    manipulator_B.INPUT_7_1_1[3] = manipulator_DW.INPUT_7_1_1_Discrete[0];

    // End of SimscapeInputBlock: '<S49>/INPUT_7_1_1'

    // SimscapeExecutionBlock: '<S49>/OUTPUT_1_0'
    simulationData = (NeslSimulationData *)manipulator_DW.OUTPUT_1_0_SimData;
    manipulator_B.time_k = manipulator_B.time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &manipulator_B.time_k;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &manipulator_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &manipulator_DW.OUTPUT_1_0_Modes;
    b_varargout_1 = false;
    simulationData->mData->mFoundZcEvents = b_varargout_1;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    manipulator_B.iv[0] = 0;
    manipulator_B.dv[0] = manipulator_B.INPUT_8_1_1[0];
    manipulator_B.dv[1] = manipulator_B.INPUT_8_1_1[1];
    manipulator_B.dv[2] = manipulator_B.INPUT_8_1_1[2];
    manipulator_B.dv[3] = manipulator_B.INPUT_8_1_1[3];
    manipulator_B.iv[1] = 4;
    manipulator_B.dv[4] = manipulator_B.INPUT_1_1_1[0];
    manipulator_B.dv[5] = manipulator_B.INPUT_1_1_1[1];
    manipulator_B.dv[6] = manipulator_B.INPUT_1_1_1[2];
    manipulator_B.dv[7] = manipulator_B.INPUT_1_1_1[3];
    manipulator_B.iv[2] = 8;
    manipulator_B.dv[8] = manipulator_B.INPUT_2_1_1[0];
    manipulator_B.dv[9] = manipulator_B.INPUT_2_1_1[1];
    manipulator_B.dv[10] = manipulator_B.INPUT_2_1_1[2];
    manipulator_B.dv[11] = manipulator_B.INPUT_2_1_1[3];
    manipulator_B.iv[3] = 12;
    manipulator_B.dv[12] = manipulator_B.INPUT_3_1_1[0];
    manipulator_B.dv[13] = manipulator_B.INPUT_3_1_1[1];
    manipulator_B.dv[14] = manipulator_B.INPUT_3_1_1[2];
    manipulator_B.dv[15] = manipulator_B.INPUT_3_1_1[3];
    manipulator_B.iv[4] = 16;
    manipulator_B.dv[16] = manipulator_B.INPUT_4_1_1[0];
    manipulator_B.dv[17] = manipulator_B.INPUT_4_1_1[1];
    manipulator_B.dv[18] = manipulator_B.INPUT_4_1_1[2];
    manipulator_B.dv[19] = manipulator_B.INPUT_4_1_1[3];
    manipulator_B.iv[5] = 20;
    manipulator_B.dv[20] = manipulator_B.INPUT_5_1_1[0];
    manipulator_B.dv[21] = manipulator_B.INPUT_5_1_1[1];
    manipulator_B.dv[22] = manipulator_B.INPUT_5_1_1[2];
    manipulator_B.dv[23] = manipulator_B.INPUT_5_1_1[3];
    manipulator_B.iv[6] = 24;
    manipulator_B.dv[24] = manipulator_B.INPUT_6_1_1[0];
    manipulator_B.dv[25] = manipulator_B.INPUT_6_1_1[1];
    manipulator_B.dv[26] = manipulator_B.INPUT_6_1_1[2];
    manipulator_B.dv[27] = manipulator_B.INPUT_6_1_1[3];
    manipulator_B.iv[7] = 28;
    manipulator_B.dv[28] = manipulator_B.INPUT_7_1_1[0];
    manipulator_B.dv[29] = manipulator_B.INPUT_7_1_1[1];
    manipulator_B.dv[30] = manipulator_B.INPUT_7_1_1[2];
    manipulator_B.dv[31] = manipulator_B.INPUT_7_1_1[3];
    manipulator_B.iv[8] = 32;
    memcpy(&manipulator_B.dv[32], &manipulator_B.STATE_1[0], 14U * sizeof(real_T));
    manipulator_B.iv[9] = 46;
    simulationData->mData->mInputValues.mN = 46;
    simulationData->mData->mInputValues.mX = &manipulator_B.dv[0];
    simulationData->mData->mInputOffsets.mN = 10;
    simulationData->mData->mInputOffsets.mX = &manipulator_B.iv[0];
    simulationData->mData->mOutputs.mN = 7;
    simulationData->mData->mOutputs.mX = &manipulator_B.OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)
      manipulator_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    manipulator_B.i = ne_simulator_method((NeslSimulator *)
      manipulator_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (manipulator_B.i != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    if (rtmIsMajorTimeStep(manipulator_M) &&
        manipulator_M->Timing.TaskCounters.TID[3] == 0) {
      // MATLABSystem: '<Root>/Get Parameter'
      ParamGet_manipulator_433.get_parameter(&manipulator_B.GetParameter_o1);
    }

    if (rtmIsMajorTimeStep(manipulator_M) &&
        manipulator_M->Timing.TaskCounters.TID[1] == 0) {
      // MATLAB Function: '<S1>/Pose Quantization and Noise'
      for (manipulator_B.i = 0; manipulator_B.i < 7; manipulator_B.i++) {
        if (manipulator_B.GetParameter_o1 <= MIN_int32_T) {
          manipulator_B.saturatedUnaryMinus = MAX_int32_T;
        } else {
          manipulator_B.saturatedUnaryMinus = -manipulator_B.GetParameter_o1;
        }

        manipulator_B.time_tmp = manipulator_rand();
        manipulator_B.quantized_q[manipulator_B.i] = ((floor
          (((static_cast<real_T>(manipulator_B.GetParameter_o1) -
             static_cast<real_T>(manipulator_B.saturatedUnaryMinus)) + 1.0) *
           manipulator_B.time_tmp) + static_cast<real_T>
          (manipulator_B.saturatedUnaryMinus)) + rt_roundd_snf
          (manipulator_B.OUTPUT_1_0[manipulator_B.i] / 0.0015339807878856412)) *
          0.0015339807878856412;
      }

      // End of MATLAB Function: '<S1>/Pose Quantization and Noise'

      // RateTransition: '<S2>/Rate Transition1'
      if (rtmIsMajorTimeStep(manipulator_M) &&
          manipulator_M->Timing.TaskCounters.TID[2] == 0) {
        for (manipulator_B.i = 0; manipulator_B.i < 7; manipulator_B.i++) {
          manipulator_DW.RateTransition1_Buffer[manipulator_B.i] =
            manipulator_B.quantized_q[manipulator_B.i];
        }
      }
    }

    // RateTransition: '<S2>/Rate Transition1'
    if (rtmIsMajorTimeStep(manipulator_M) &&
        manipulator_M->Timing.TaskCounters.TID[2] == 0) {
      // MATLABSystem: '<S2>/Current Time'
      currentROSTimeBus(&manipulator_B.rtb_CurrentTime_c);

      // MATLAB Function: '<S2>/MATLAB Function' incorporates:
      //   Constant: '<S50>/Constant'
      //   MATLABSystem: '<S2>/Current Time'

      manipulator_B.js = manipulator_P.Constant_Value_n;
      manipulator_B.js.Name[0].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[0].Data_SL_Info.ReceivedLength = 10U;
      manipulator_B.js.Name[1].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[1].Data_SL_Info.ReceivedLength = 10U;
      manipulator_B.js.Name[2].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[2].Data_SL_Info.ReceivedLength = 10U;
      manipulator_B.js.Name[3].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[3].Data_SL_Info.ReceivedLength = 10U;
      manipulator_B.js.Name[4].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[4].Data_SL_Info.ReceivedLength = 10U;
      manipulator_B.js.Name[5].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[5].Data_SL_Info.ReceivedLength = 10U;
      manipulator_B.js.Name[6].Data_SL_Info.CurrentLength = 10U;
      manipulator_B.js.Name[6].Data_SL_Info.ReceivedLength = 10U;
      for (manipulator_B.i = 0; manipulator_B.i < 10; manipulator_B.i++) {
        manipulator_B.js.Name[0].Data[manipulator_B.i] = b_0[manipulator_B.i];
        manipulator_B.js.Name[1].Data[manipulator_B.i] = c[manipulator_B.i];
        manipulator_B.js.Name[2].Data[manipulator_B.i] = d[manipulator_B.i];
        manipulator_B.js.Name[3].Data[manipulator_B.i] = e[manipulator_B.i];
        manipulator_B.js.Name[4].Data[manipulator_B.i] = f[manipulator_B.i];
        manipulator_B.js.Name[5].Data[manipulator_B.i] = g[manipulator_B.i];
        manipulator_B.js.Name[6].Data[manipulator_B.i] = h[manipulator_B.i];
      }

      manipulator_B.js.Name_SL_Info.CurrentLength = 7U;
      manipulator_B.js.Name_SL_Info.ReceivedLength = 7U;
      manipulator_B.js.Header.Stamp = manipulator_B.rtb_CurrentTime_c;
      manipulator_B.js.Position_SL_Info.CurrentLength = 7U;
      manipulator_B.js.Position_SL_Info.ReceivedLength = 7U;
      manipulator_B.js.Position[0] = manipulator_DW.RateTransition1_Buffer[0];
      manipulator_B.js.Position[1] = manipulator_DW.RateTransition1_Buffer[1];
      manipulator_B.js.Position[2] = manipulator_DW.RateTransition1_Buffer[2];
      manipulator_B.js.Position[3] = manipulator_DW.RateTransition1_Buffer[3];
      manipulator_B.js.Position[4] = manipulator_DW.RateTransition1_Buffer[4];
      manipulator_B.js.Position[5] = manipulator_DW.RateTransition1_Buffer[5];
      manipulator_B.js.Position[6] = manipulator_DW.RateTransition1_Buffer[6];

      // End of MATLAB Function: '<S2>/MATLAB Function'

      // Outputs for Atomic SubSystem: '<S2>/Publish2'
      // MATLABSystem: '<S55>/SinkBlock'
      Pub_manipulator_591.publish(&manipulator_B.js);

      // End of Outputs for SubSystem: '<S2>/Publish2'
    }

    if (rtmIsMajorTimeStep(manipulator_M) &&
        manipulator_M->Timing.TaskCounters.TID[1] == 0) {
      // BusAssignment: '<S2>/Bus Assignment1' incorporates:
      //   Constant: '<S2>/Constant'
      //   Constant: '<S51>/Constant'

      manipulator_B.BusAssignment1 = manipulator_P.Constant_Value_m;
      for (manipulator_B.i = 0; manipulator_B.i < 7; manipulator_B.i++) {
        manipulator_B.BusAssignment1.Data[manipulator_B.i] =
          manipulator_B.quantized_q[manipulator_B.i];
      }

      manipulator_B.BusAssignment1.Data_SL_Info.CurrentLength =
        manipulator_P.Constant_Value_mx;
      manipulator_B.BusAssignment1.Data_SL_Info.ReceivedLength =
        manipulator_P.Constant_Value_mx;

      // End of BusAssignment: '<S2>/Bus Assignment1'

      // Outputs for Atomic SubSystem: '<S2>/Publish1'
      // MATLABSystem: '<S54>/SinkBlock'
      Pub_manipulator_163.publish(&manipulator_B.BusAssignment1);

      // End of Outputs for SubSystem: '<S2>/Publish1'
    }
  }

  if (rtmIsMajorTimeStep(manipulator_M)) {
    NeslSimulationData *simulationData;
    real_T time;
    boolean_T tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T tmp_0;
    char *msg;

    // Update for SimscapeExecutionBlock: '<S49>/STATE_1'
    simulationData = (NeslSimulationData *)manipulator_DW.STATE_1_SimData;
    time = manipulator_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 14;
    simulationData->mData->mContStates.mX =
      &manipulator_X.manipulatorManipulatorla_1_join[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &manipulator_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &manipulator_DW.STATE_1_Modes;
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(manipulator_M);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&manipulator_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    manipulator_B.iv5[0] = 0;
    manipulator_B.dv5[0] = manipulator_B.INPUT_8_1_1[0];
    manipulator_B.dv5[1] = manipulator_B.INPUT_8_1_1[1];
    manipulator_B.dv5[2] = manipulator_B.INPUT_8_1_1[2];
    manipulator_B.dv5[3] = manipulator_B.INPUT_8_1_1[3];
    manipulator_B.iv5[1] = 4;
    manipulator_B.dv5[4] = manipulator_B.INPUT_1_1_1[0];
    manipulator_B.dv5[5] = manipulator_B.INPUT_1_1_1[1];
    manipulator_B.dv5[6] = manipulator_B.INPUT_1_1_1[2];
    manipulator_B.dv5[7] = manipulator_B.INPUT_1_1_1[3];
    manipulator_B.iv5[2] = 8;
    manipulator_B.dv5[8] = manipulator_B.INPUT_2_1_1[0];
    manipulator_B.dv5[9] = manipulator_B.INPUT_2_1_1[1];
    manipulator_B.dv5[10] = manipulator_B.INPUT_2_1_1[2];
    manipulator_B.dv5[11] = manipulator_B.INPUT_2_1_1[3];
    manipulator_B.iv5[3] = 12;
    manipulator_B.dv5[12] = manipulator_B.INPUT_3_1_1[0];
    manipulator_B.dv5[13] = manipulator_B.INPUT_3_1_1[1];
    manipulator_B.dv5[14] = manipulator_B.INPUT_3_1_1[2];
    manipulator_B.dv5[15] = manipulator_B.INPUT_3_1_1[3];
    manipulator_B.iv5[4] = 16;
    manipulator_B.dv5[16] = manipulator_B.INPUT_4_1_1[0];
    manipulator_B.dv5[17] = manipulator_B.INPUT_4_1_1[1];
    manipulator_B.dv5[18] = manipulator_B.INPUT_4_1_1[2];
    manipulator_B.dv5[19] = manipulator_B.INPUT_4_1_1[3];
    manipulator_B.iv5[5] = 20;
    manipulator_B.dv5[20] = manipulator_B.INPUT_5_1_1[0];
    manipulator_B.dv5[21] = manipulator_B.INPUT_5_1_1[1];
    manipulator_B.dv5[22] = manipulator_B.INPUT_5_1_1[2];
    manipulator_B.dv5[23] = manipulator_B.INPUT_5_1_1[3];
    manipulator_B.iv5[6] = 24;
    manipulator_B.dv5[24] = manipulator_B.INPUT_6_1_1[0];
    manipulator_B.dv5[25] = manipulator_B.INPUT_6_1_1[1];
    manipulator_B.dv5[26] = manipulator_B.INPUT_6_1_1[2];
    manipulator_B.dv5[27] = manipulator_B.INPUT_6_1_1[3];
    manipulator_B.iv5[7] = 28;
    manipulator_B.dv5[28] = manipulator_B.INPUT_7_1_1[0];
    manipulator_B.dv5[29] = manipulator_B.INPUT_7_1_1[1];
    manipulator_B.dv5[30] = manipulator_B.INPUT_7_1_1[2];
    manipulator_B.dv5[31] = manipulator_B.INPUT_7_1_1[3];
    manipulator_B.iv5[8] = 32;
    simulationData->mData->mInputValues.mN = 32;
    simulationData->mData->mInputValues.mX = &manipulator_B.dv5[0];
    simulationData->mData->mInputOffsets.mN = 9;
    simulationData->mData->mInputOffsets.mX = &manipulator_B.iv5[0];
    diagnosticManager = (NeuDiagnosticManager *)manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_0 = ne_simulator_method((NeslSimulator *)
      manipulator_DW.STATE_1_Simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_0 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    // End of Update for SimscapeExecutionBlock: '<S49>/STATE_1'
  }                                    // end MajorTimeStep

  if (rtmIsMajorTimeStep(manipulator_M)) {
    rt_ertODEUpdateContinuousStates(&manipulator_M->solverInfo);

    // Update absolute time for base rate
    // The "clockTick0" counts the number of times the code of this task has
    //  been executed. The absolute time is the multiplication of "clockTick0"
    //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
    //  overflow during the application lifespan selected.

    ++manipulator_M->Timing.clockTick0;
    manipulator_M->Timing.t[0] = rtsiGetSolverStopTime
      (&manipulator_M->solverInfo);

    {
      // Update absolute timer for sample time: [0.004s, 0.0s]
      // The "clockTick1" counts the number of times the code of this task has
      //  been executed. The resolution of this integer timer is 0.004, which is the step size
      //  of the task. Size of "clockTick1" ensures timer will not overflow during the
      //  application lifespan selected.

      manipulator_M->Timing.clockTick1++;
    }

    rate_scheduler();
  }                                    // end MajorTimeStep
}

// Derivatives for root system: '<Root>'
void manipulator_derivatives(void)
{
  NeslSimulationData *simulationData;
  real_T time;
  boolean_T tmp;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  int32_T tmp_0;
  char *msg;
  XDot_manipulator_T *_rtXdot;
  _rtXdot = ((XDot_manipulator_T *) manipulator_M->derivs);

  // Derivatives for SimscapeExecutionBlock: '<S49>/STATE_1'
  simulationData = (NeslSimulationData *)manipulator_DW.STATE_1_SimData;
  time = manipulator_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 14;
  simulationData->mData->mContStates.mX =
    &manipulator_X.manipulatorManipulatorla_1_join[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &manipulator_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 0;
  simulationData->mData->mModeVector.mX = &manipulator_DW.STATE_1_Modes;
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(manipulator_M);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&manipulator_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  manipulator_B.iv4[0] = 0;
  manipulator_B.dv4[0] = manipulator_B.INPUT_8_1_1[0];
  manipulator_B.dv4[1] = manipulator_B.INPUT_8_1_1[1];
  manipulator_B.dv4[2] = manipulator_B.INPUT_8_1_1[2];
  manipulator_B.dv4[3] = manipulator_B.INPUT_8_1_1[3];
  manipulator_B.iv4[1] = 4;
  manipulator_B.dv4[4] = manipulator_B.INPUT_1_1_1[0];
  manipulator_B.dv4[5] = manipulator_B.INPUT_1_1_1[1];
  manipulator_B.dv4[6] = manipulator_B.INPUT_1_1_1[2];
  manipulator_B.dv4[7] = manipulator_B.INPUT_1_1_1[3];
  manipulator_B.iv4[2] = 8;
  manipulator_B.dv4[8] = manipulator_B.INPUT_2_1_1[0];
  manipulator_B.dv4[9] = manipulator_B.INPUT_2_1_1[1];
  manipulator_B.dv4[10] = manipulator_B.INPUT_2_1_1[2];
  manipulator_B.dv4[11] = manipulator_B.INPUT_2_1_1[3];
  manipulator_B.iv4[3] = 12;
  manipulator_B.dv4[12] = manipulator_B.INPUT_3_1_1[0];
  manipulator_B.dv4[13] = manipulator_B.INPUT_3_1_1[1];
  manipulator_B.dv4[14] = manipulator_B.INPUT_3_1_1[2];
  manipulator_B.dv4[15] = manipulator_B.INPUT_3_1_1[3];
  manipulator_B.iv4[4] = 16;
  manipulator_B.dv4[16] = manipulator_B.INPUT_4_1_1[0];
  manipulator_B.dv4[17] = manipulator_B.INPUT_4_1_1[1];
  manipulator_B.dv4[18] = manipulator_B.INPUT_4_1_1[2];
  manipulator_B.dv4[19] = manipulator_B.INPUT_4_1_1[3];
  manipulator_B.iv4[5] = 20;
  manipulator_B.dv4[20] = manipulator_B.INPUT_5_1_1[0];
  manipulator_B.dv4[21] = manipulator_B.INPUT_5_1_1[1];
  manipulator_B.dv4[22] = manipulator_B.INPUT_5_1_1[2];
  manipulator_B.dv4[23] = manipulator_B.INPUT_5_1_1[3];
  manipulator_B.iv4[6] = 24;
  manipulator_B.dv4[24] = manipulator_B.INPUT_6_1_1[0];
  manipulator_B.dv4[25] = manipulator_B.INPUT_6_1_1[1];
  manipulator_B.dv4[26] = manipulator_B.INPUT_6_1_1[2];
  manipulator_B.dv4[27] = manipulator_B.INPUT_6_1_1[3];
  manipulator_B.iv4[7] = 28;
  manipulator_B.dv4[28] = manipulator_B.INPUT_7_1_1[0];
  manipulator_B.dv4[29] = manipulator_B.INPUT_7_1_1[1];
  manipulator_B.dv4[30] = manipulator_B.INPUT_7_1_1[2];
  manipulator_B.dv4[31] = manipulator_B.INPUT_7_1_1[3];
  manipulator_B.iv4[8] = 32;
  simulationData->mData->mInputValues.mN = 32;
  simulationData->mData->mInputValues.mX = &manipulator_B.dv4[0];
  simulationData->mData->mInputOffsets.mN = 9;
  simulationData->mData->mInputOffsets.mX = &manipulator_B.iv4[0];
  simulationData->mData->mDx.mN = 14;
  simulationData->mData->mDx.mX = &_rtXdot->manipulatorManipulatorla_1_join[0];
  diagnosticManager = (NeuDiagnosticManager *)manipulator_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_0 = ne_simulator_method((NeslSimulator *)manipulator_DW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_0 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(manipulator_M, msg);
    }
  }

  // End of Derivatives for SimscapeExecutionBlock: '<S49>/STATE_1'
}

// Model initialize function
void manipulator_initialize(void)
{
  // Registration code
  {
    // Setup solver object
    rtsiSetSimTimeStepPtr(&manipulator_M->solverInfo,
                          &manipulator_M->Timing.simTimeStep);
    rtsiSetTPtr(&manipulator_M->solverInfo, &rtmGetTPtr(manipulator_M));
    rtsiSetStepSizePtr(&manipulator_M->solverInfo,
                       &manipulator_M->Timing.stepSize0);
    rtsiSetdXPtr(&manipulator_M->solverInfo, &manipulator_M->derivs);
    rtsiSetContStatesPtr(&manipulator_M->solverInfo, (real_T **)
                         &manipulator_M->contStates);
    rtsiSetNumContStatesPtr(&manipulator_M->solverInfo,
      &manipulator_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&manipulator_M->solverInfo,
      &manipulator_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&manipulator_M->solverInfo,
      &manipulator_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&manipulator_M->solverInfo,
      &manipulator_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&manipulator_M->solverInfo, (&rtmGetErrorStatus
      (manipulator_M)));
    rtsiSetRTModelPtr(&manipulator_M->solverInfo, manipulator_M);
  }

  rtsiSetSimTimeStep(&manipulator_M->solverInfo, MAJOR_TIME_STEP);
  manipulator_M->intgData.y = manipulator_M->odeY;
  manipulator_M->intgData.f[0] = manipulator_M->odeF[0];
  manipulator_M->intgData.f[1] = manipulator_M->odeF[1];
  manipulator_M->intgData.f[2] = manipulator_M->odeF[2];
  manipulator_M->intgData.f[3] = manipulator_M->odeF[3];
  manipulator_M->intgData.f[4] = manipulator_M->odeF[4];
  manipulator_M->intgData.f[5] = manipulator_M->odeF[5];
  manipulator_M->contStates = ((X_manipulator_T *) &manipulator_X);
  rtsiSetSolverData(&manipulator_M->solverInfo, static_cast<void *>
                    (&manipulator_M->intgData));
  rtsiSetSolverName(&manipulator_M->solverInfo,"ode5");
  rtmSetTPtr(manipulator_M, &manipulator_M->Timing.tArray[0]);
  manipulator_M->Timing.stepSize0 = 0.004;

  {
    NeslSimulator *tmp;
    boolean_T tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    int32_T i;
    char *msg;
    NeslSimulationData *simulationData;
    boolean_T tmp_1;
    real_T time;
    real_T time_tmp;
    static const char_T tmp_2[22] = { '/', 's', 'i', 'm', 'u', 'l', 'a', 't',
      'e', 'd', '_', 'o', 'b', 'j', 'e', 'c', 't', '_', 'm', 'a', 's', 's' };

    static const char_T tmp_3[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_4[13] = { '/', 'n', 'o', 'i', 's', 'e', '_', 'f',
      'a', 'c', 't', 'o', 'r' };

    static const char_T tmp_5[13] = { '/', 'j', 'o', 'i', 'n', 't', '_', 's',
      't', 'a', 't', 'e', 's' };

    static const char_T tmp_6[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p',
      'o', 's', 'i', 't', 'i', 'o', 'n', 's' };

    // Start for SimscapeExecutionBlock: '<S49>/STATE_1' incorporates:
    //   SimscapeExecutionBlock: '<S49>/OUTPUT_1_0'

    tmp = nesl_lease_simulator("manipulator/Manipulator/Solver Configuration_1",
      0, 0);
    manipulator_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(manipulator_DW.STATE_1_Simulator);
    if (tmp_0) {
      manipulator_5aaa3abb_1_gateway();
      tmp = nesl_lease_simulator(
        "manipulator/Manipulator/Solver Configuration_1", 0, 0);
      manipulator_DW.STATE_1_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    manipulator_DW.STATE_1_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    manipulator_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    manipulator_B.modelParameters.mSolverType = NE_SOLVER_TYPE_ODE;
    manipulator_B.modelParameters.mSolverTolerance = 0.001;
    manipulator_B.modelParameters.mVariableStepSolver = false;
    manipulator_B.modelParameters.mFixedStepSize = 0.004;
    manipulator_B.modelParameters.mStartTime = 0.0;
    manipulator_B.modelParameters.mLoadInitialState = false;
    manipulator_B.modelParameters.mUseSimState = false;
    manipulator_B.modelParameters.mLinTrimCompile = false;
    manipulator_B.modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    manipulator_B.modelParameters.mRTWModifiedTimeStamp = 5.23568514E+8;
    manipulator_B.d = 0.001;
    manipulator_B.modelParameters.mSolverTolerance = manipulator_B.d;
    manipulator_B.d = 0.004;
    manipulator_B.modelParameters.mFixedStepSize = manipulator_B.d;
    tmp_0 = false;
    manipulator_B.modelParameters.mVariableStepSolver = tmp_0;
    diagnosticManager = (NeuDiagnosticManager *)manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      manipulator_DW.STATE_1_Simulator, &manipulator_B.modelParameters,
      diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    manipulator_B.expl_temp.mRealParameters.mN = 0;
    manipulator_B.expl_temp.mRealParameters.mX = NULL;
    manipulator_B.expl_temp.mLogicalParameters.mN = 0;
    manipulator_B.expl_temp.mLogicalParameters.mX = NULL;
    manipulator_B.expl_temp.mIntegerParameters.mN = 0;
    manipulator_B.expl_temp.mIntegerParameters.mX = NULL;
    manipulator_B.expl_temp.mIndexParameters.mN = 0;
    manipulator_B.expl_temp.mIndexParameters.mX = NULL;
    nesl_simulator_set_rtps((NeslSimulator *)manipulator_DW.STATE_1_Simulator,
      manipulator_B.expl_temp);
    simulationData = (NeslSimulationData *)manipulator_DW.STATE_1_SimData;
    time_tmp = manipulator_M->Timing.t[0];
    manipulator_B.time_c = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &manipulator_B.time_c;
    simulationData->mData->mContStates.mN = 14;
    simulationData->mData->mContStates.mX =
      &manipulator_X.manipulatorManipulatorla_1_join[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &manipulator_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &manipulator_DW.STATE_1_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    tmp_0 = rtmIsMajorTimeStep(manipulator_M);
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_1 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_1;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_1 = rtsiIsSolverComputingJacobian(&manipulator_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_1;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)manipulator_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)manipulator_DW.STATE_1_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (i != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    // End of Start for SimscapeExecutionBlock: '<S49>/STATE_1'

    // Start for Atomic SubSystem: '<Root>/Subscribe1'
    // Start for MATLABSystem: '<S4>/SourceBlock'
    manipulator_DW.obj_k.matlabCodegenIsDeleted = true;
    manipulator_DW.obj_k.isInitialized = 0;
    manipulator_DW.obj_k.matlabCodegenIsDeleted = false;
    manipulator_DW.obj_k.isSetupComplete = false;
    manipulator_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 22; i++) {
      manipulator_B.cv[i] = tmp_2[i];
    }

    manipulator_B.cv[22] = '\x00';
    Sub_manipulator_272.createSubscriber(manipulator_B.cv, 1);
    manipulator_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S4>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe1'

    // Start for Atomic SubSystem: '<Root>/Subscribe'
    // Start for MATLABSystem: '<S3>/SourceBlock'
    manipulator_DW.obj_f.matlabCodegenIsDeleted = true;
    manipulator_DW.obj_f.isInitialized = 0;
    manipulator_DW.obj_f.matlabCodegenIsDeleted = false;
    manipulator_DW.obj_f.isSetupComplete = false;
    manipulator_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      manipulator_B.cv2[i] = tmp_3[i];
    }

    manipulator_B.cv2[14] = '\x00';
    Sub_manipulator_160.createSubscriber(manipulator_B.cv2, 1);
    manipulator_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S3>/SourceBlock'
    // End of Start for SubSystem: '<Root>/Subscribe'

    // Start for SimscapeExecutionBlock: '<S49>/OUTPUT_1_0'
    tmp = nesl_lease_simulator("manipulator/Manipulator/Solver Configuration_1",
      1, 0);
    manipulator_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_1 = pointer_is_null(manipulator_DW.OUTPUT_1_0_Simulator);
    if (tmp_1) {
      manipulator_5aaa3abb_1_gateway();
      tmp = nesl_lease_simulator(
        "manipulator/Manipulator/Solver Configuration_1", 1, 0);
      manipulator_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    simulationData = nesl_create_simulation_data();
    manipulator_DW.OUTPUT_1_0_SimData = (void *)simulationData;
    diagnosticManager = rtw_create_diagnostics();
    manipulator_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    manipulator_B.modelParameters_m.mSolverType = NE_SOLVER_TYPE_ODE;
    manipulator_B.modelParameters_m.mSolverTolerance = 0.001;
    manipulator_B.modelParameters_m.mVariableStepSolver = false;
    manipulator_B.modelParameters_m.mFixedStepSize = 0.004;
    manipulator_B.modelParameters_m.mStartTime = 0.0;
    manipulator_B.modelParameters_m.mLoadInitialState = false;
    manipulator_B.modelParameters_m.mUseSimState = false;
    manipulator_B.modelParameters_m.mLinTrimCompile = false;
    manipulator_B.modelParameters_m.mLoggingMode = SSC_LOGGING_NONE;
    manipulator_B.modelParameters_m.mRTWModifiedTimeStamp = 5.23568514E+8;
    manipulator_B.d = 0.001;
    manipulator_B.modelParameters_m.mSolverTolerance = manipulator_B.d;
    manipulator_B.d = 0.004;
    manipulator_B.modelParameters_m.mFixedStepSize = manipulator_B.d;
    tmp_1 = false;
    manipulator_B.modelParameters_m.mVariableStepSolver = tmp_1;
    diagnosticManager = (NeuDiagnosticManager *)
      manipulator_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = nesl_initialize_simulator((NeslSimulator *)
      manipulator_DW.OUTPUT_1_0_Simulator, &manipulator_B.modelParameters_m,
      diagnosticManager);
    if (i != 0) {
      tmp_1 = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (tmp_1) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    simulationData = (NeslSimulationData *)manipulator_DW.OUTPUT_1_0_SimData;
    time = time_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &manipulator_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &manipulator_DW.OUTPUT_1_0_Modes;
    tmp_1 = false;
    simulationData->mData->mFoundZcEvents = tmp_1;
    simulationData->mData->mIsMajorTimeStep = tmp_0;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    diagnosticManager = (NeuDiagnosticManager *)
      manipulator_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    i = ne_simulator_method((NeslSimulator *)manipulator_DW.OUTPUT_1_0_Simulator,
      NESL_SIM_INITIALIZEONCE, simulationData, diagnosticManager);
    if (i != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(manipulator_M));
      if (tmp_0) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    // Start for MATLABSystem: '<Root>/Get Parameter'
    manipulator_DW.obj.matlabCodegenIsDeleted = true;
    manipulator_DW.obj.isInitialized = 0;
    manipulator_DW.obj.matlabCodegenIsDeleted = false;
    manipulator_DW.obj.isSetupComplete = false;
    manipulator_DW.obj.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      manipulator_B.cv3[i] = tmp_4[i];
    }

    manipulator_B.cv3[13] = '\x00';
    ParamGet_manipulator_433.initialize(manipulator_B.cv3);
    ParamGet_manipulator_433.initialize_error_codes(0, 1, 2, 3);
    ParamGet_manipulator_433.set_initial_value(0);
    manipulator_DW.obj.isSetupComplete = true;

    // End of Start for MATLABSystem: '<Root>/Get Parameter'

    // Start for MATLABSystem: '<S2>/Current Time'
    manipulator_DW.obj_a.matlabCodegenIsDeleted = true;
    manipulator_DW.obj_a.isInitialized = 0;
    manipulator_DW.obj_a.matlabCodegenIsDeleted = false;
    manipulator_DW.obj_a.isSetupComplete = false;
    manipulator_DW.obj_a.isInitialized = 1;
    manipulator_DW.obj_a.isSetupComplete = true;

    // Start for Atomic SubSystem: '<S2>/Publish2'
    // Start for MATLABSystem: '<S55>/SinkBlock'
    manipulator_DW.obj_d.matlabCodegenIsDeleted = true;
    manipulator_DW.obj_d.isInitialized = 0;
    manipulator_DW.obj_d.matlabCodegenIsDeleted = false;
    manipulator_DW.obj_d.isSetupComplete = false;
    manipulator_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      manipulator_B.cv3[i] = tmp_5[i];
    }

    manipulator_B.cv3[13] = '\x00';
    Pub_manipulator_591.createPublisher(manipulator_B.cv3, 1);
    manipulator_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S55>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish2'

    // Start for Atomic SubSystem: '<S2>/Publish1'
    // Start for MATLABSystem: '<S54>/SinkBlock'
    manipulator_DW.obj_ag.matlabCodegenIsDeleted = true;
    manipulator_DW.obj_ag.isInitialized = 0;
    manipulator_DW.obj_ag.matlabCodegenIsDeleted = false;
    manipulator_DW.obj_ag.isSetupComplete = false;
    manipulator_DW.obj_ag.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      manipulator_B.cv1[i] = tmp_6[i];
    }

    manipulator_B.cv1[16] = '\x00';
    Pub_manipulator_163.createPublisher(manipulator_B.cv1, 1);
    manipulator_DW.obj_ag.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S54>/SinkBlock'
    // End of Start for SubSystem: '<S2>/Publish1'

    // InitializeConditions for SimscapeExecutionBlock: '<S49>/STATE_1'
    tmp_0 = false;
    if (tmp_0) {
      i = strcmp("ode5", rtsiGetSolverName(&manipulator_M->solverInfo));
      if (i != 0) {
        msg = solver_mismatch_message("ode5", rtsiGetSolverName
          (&manipulator_M->solverInfo));
        rtmSetErrorStatus(manipulator_M, msg);
      }
    }

    // End of InitializeConditions for SimscapeExecutionBlock: '<S49>/STATE_1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S4>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S57>/Out1'
    manipulator_B.In1_j = manipulator_P.Out1_Y0_h;

    // End of SystemInitialize for SubSystem: '<S4>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<Root>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S3>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S56>/Out1'
    manipulator_B.In1 = manipulator_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S3>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<Root>/Subscribe'

    // SystemInitialize for MATLAB Function: '<S1>/Pose Quantization and Noise'
    manipulator_DW.method = 7U;
    manipulator_DW.state = 1144108930U;
    manipulator_DW.state_b[0] = 362436069U;
    manipulator_DW.state_b[1] = 521288629U;
  }
}

// Model terminate function
void manipulator_terminate(void)
{
  // Terminate for SimscapeExecutionBlock: '<S49>/STATE_1'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    manipulator_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    manipulator_DW.STATE_1_SimData);
  nesl_erase_simulator("manipulator/Manipulator/Solver Configuration_1");

  // Terminate for Atomic SubSystem: '<Root>/Subscribe1'
  // Terminate for MATLABSystem: '<S4>/SourceBlock'
  matlabCodegenHandle_matlab_mqwx(&manipulator_DW.obj_k);

  // End of Terminate for SubSystem: '<Root>/Subscribe1'

  // Terminate for Atomic SubSystem: '<Root>/Subscribe'
  // Terminate for MATLABSystem: '<S3>/SourceBlock'
  matlabCodegenHandle_matlab_mqwx(&manipulator_DW.obj_f);

  // End of Terminate for SubSystem: '<Root>/Subscribe'

  // Terminate for SimscapeExecutionBlock: '<S49>/OUTPUT_1_0'
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    manipulator_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    manipulator_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("manipulator/Manipulator/Solver Configuration_1");

  // Terminate for MATLABSystem: '<Root>/Get Parameter'
  matlabCodegenHandle_matlabCodeg(&manipulator_DW.obj);

  // Terminate for MATLABSystem: '<S2>/Current Time'
  matlabCodegenHandle_matlabCod_m(&manipulator_DW.obj_a);

  // Terminate for Atomic SubSystem: '<S2>/Publish2'
  // Terminate for MATLABSystem: '<S55>/SinkBlock'
  matlabCodegenHandle_matlabCo_mq(&manipulator_DW.obj_d);

  // End of Terminate for SubSystem: '<S2>/Publish2'

  // Terminate for Atomic SubSystem: '<S2>/Publish1'
  // Terminate for MATLABSystem: '<S54>/SinkBlock'
  matlabCodegenHandle_matlabCo_mq(&manipulator_DW.obj_ag);

  // End of Terminate for SubSystem: '<S2>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
