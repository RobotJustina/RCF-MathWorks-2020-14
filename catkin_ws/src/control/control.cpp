//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: control.cpp
//
// Code generated for Simulink model 'control'.
//
// Model version                  : 1.263
// Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
// C/C++ source code generated on : Sat Oct  3 22:44:28 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "control.h"
#include "control_private.h"

// Block signals (default storage)
B_control_T control_B;

// Block states (default storage)
DW_control_T control_DW;

// Real-time model
RT_MODEL_control_T control_M_ = RT_MODEL_control_T();
RT_MODEL_control_T *const control_M = &control_M_;

// Forward declaration for local functions
static void control_SystemCore_step_m(boolean_T *varargout_1, real32_T
  varargout_2_Data[14], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void control_emxInit_real_T(emxArray_real_T_control_T **pEmxArray,
  int32_T numDimensions);
static void contro_emxEnsureCapacity_real_T(emxArray_real_T_control_T *emxArray,
  int32_T oldNumel);
static void control_emxInit_e_cell_wrap(emxArray_e_cell_wrap_control_T
  **pEmxArray, int32_T numDimensions);
static void c_emxEnsureCapacity_e_cell_wrap(emxArray_e_cell_wrap_control_T
  *emxArray, int32_T oldNumel);
static void control_eye(real_T b_I[36]);
static void control_emxInit_char_T(emxArray_char_T_control_T **pEmxArray,
  int32_T numDimensions);
static void contro_emxEnsureCapacity_char_T(emxArray_char_T_control_T *emxArray,
  int32_T oldNumel);
static void co_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_control_T *obj,
  real_T ax[3]);
static void control_normalizeRows(const real_T matrix[3], real_T normRowMatrix[3]);
static void control_cat(real_T varargin_1, real_T varargin_2, real_T varargin_3,
  real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T varargin_7,
  real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_control_T *obj,
  real_T T[16]);
static void control_tforminv(const real_T T[16], real_T Tinv[16]);
static void control_tformToSpatialXform(const real_T T[16], real_T X[36]);
static void control_emxFree_char_T(emxArray_char_T_control_T **pEmxArray);
static void control_emxFree_real_T(emxArray_real_T_control_T **pEmxArray);
static void control_emxFree_e_cell_wrap(emxArray_e_cell_wrap_control_T
  **pEmxArray);
static boolean_T control_strcmp(const emxArray_char_T_control_T *a);
static void con_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real32_T q[7], real32_T jointTorq[7]);
static void control_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void control_SystemCore_step_mt(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void matlabCodegenHa_mte535djuslmntn(ros_slros_internal_block_Subs_T *obj);
static void co_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_control_T *pStruct);
static void emxFreeStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_k_robotics_manip_(k_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_j_robotics_manip_(j_robotics_manip_internal_Rig_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHan_mte535djuslmnt(ros_slros_internal_block_Publ_T *obj);
static void co_emxInitStruct_rigidBodyJoint(rigidBodyJoint_control_T *pStruct);
static void emxInitStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_k_robotics_manip_(k_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_j_robotics_manip_(j_robotics_manip_internal_Rig_T
  *pStruct);
static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody_m
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody_mt
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody_mte
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *contro_RigidBody_RigidBody_mte5
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *contr_RigidBody_RigidBody_mte53
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *cont_RigidBody_RigidBody_mte535
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *con_RigidBody_RigidBody_mte535d
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *co_RigidBody_RigidBody_mte535dj
  (j_robotics_manip_internal_Rig_T *obj);
static j_robotics_manip_internal_Rig_T *c_RigidBody_RigidBody_mte535dju
  (j_robotics_manip_internal_Rig_T *obj);
static i_robotics_manip_internal_Rig_T *RigidBody_RigidBody_mte535djus
  (i_robotics_manip_internal_Rig_T *obj);
static k_robotics_manip_internal_Rig_T *con_RigidBodyTree_RigidBodyTree
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

  (control_M->Timing.TaskCounters.TID[1])++;
  if ((control_M->Timing.TaskCounters.TID[1]) > 249) {// Sample time: [1.0s, 0.0s] 
    control_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static void control_SystemCore_step_m(boolean_T *varargout_1, real32_T
  varargout_2_Data[14], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_control_318.getLatestMessage(&control_B.b_varargout_2_c);
  for (i = 0; i < 14; i++) {
    varargout_2_Data[i] = control_B.b_varargout_2_c.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    control_B.b_varargout_2_c.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    control_B.b_varargout_2_c.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = control_B.b_varargout_2_c.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &control_B.b_varargout_2_c.Layout.Dim[0],
         sizeof(SL_Bus_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    control_B.b_varargout_2_c.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    control_B.b_varargout_2_c.Layout.Dim_SL_Info.ReceivedLength;
}

static void control_emxInit_real_T(emxArray_real_T_control_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_real_T_control_T *emxArray;
  *pEmxArray = (emxArray_real_T_control_T *)malloc(sizeof
    (emxArray_real_T_control_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (control_B.i_o = 0; control_B.i_o < numDimensions; control_B.i_o++) {
    emxArray->size[control_B.i_o] = 0;
  }
}

static void contro_emxEnsureCapacity_real_T(emxArray_real_T_control_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  control_B.newNumel = 1;
  for (control_B.i_e = 0; control_B.i_e < emxArray->numDimensions; control_B.i_e
       ++) {
    control_B.newNumel *= emxArray->size[control_B.i_e];
  }

  if (control_B.newNumel > emxArray->allocatedSize) {
    control_B.i_e = emxArray->allocatedSize;
    if (control_B.i_e < 16) {
      control_B.i_e = 16;
    }

    while (control_B.i_e < control_B.newNumel) {
      if (control_B.i_e > 1073741823) {
        control_B.i_e = MAX_int32_T;
      } else {
        control_B.i_e <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(control_B.i_e), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = control_B.i_e;
    emxArray->canFreeData = true;
  }
}

static void control_emxInit_e_cell_wrap(emxArray_e_cell_wrap_control_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_e_cell_wrap_control_T *emxArray;
  *pEmxArray = (emxArray_e_cell_wrap_control_T *)malloc(sizeof
    (emxArray_e_cell_wrap_control_T));
  emxArray = *pEmxArray;
  emxArray->data = (e_cell_wrap_control_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (control_B.i_i = 0; control_B.i_i < numDimensions; control_B.i_i++) {
    emxArray->size[control_B.i_i] = 0;
  }
}

static void c_emxEnsureCapacity_e_cell_wrap(emxArray_e_cell_wrap_control_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  control_B.newNumel_f = 1;
  for (control_B.i_a = 0; control_B.i_a < emxArray->numDimensions; control_B.i_a
       ++) {
    control_B.newNumel_f *= emxArray->size[control_B.i_a];
  }

  if (control_B.newNumel_f > emxArray->allocatedSize) {
    control_B.i_a = emxArray->allocatedSize;
    if (control_B.i_a < 16) {
      control_B.i_a = 16;
    }

    while (control_B.i_a < control_B.newNumel_f) {
      if (control_B.i_a > 1073741823) {
        control_B.i_a = MAX_int32_T;
      } else {
        control_B.i_a <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(control_B.i_a), sizeof
                     (e_cell_wrap_control_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(e_cell_wrap_control_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (e_cell_wrap_control_T *)newData;
    emxArray->allocatedSize = control_B.i_a;
    emxArray->canFreeData = true;
  }
}

static void control_eye(real_T b_I[36])
{
  int32_T b_k;
  memset(&b_I[0], 0, 36U * sizeof(real_T));
  for (b_k = 0; b_k < 6; b_k++) {
    b_I[b_k + 6 * b_k] = 1.0;
  }
}

static void control_emxInit_char_T(emxArray_char_T_control_T **pEmxArray,
  int32_T numDimensions)
{
  emxArray_char_T_control_T *emxArray;
  *pEmxArray = (emxArray_char_T_control_T *)malloc(sizeof
    (emxArray_char_T_control_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (control_B.i_n = 0; control_B.i_n < numDimensions; control_B.i_n++) {
    emxArray->size[control_B.i_n] = 0;
  }
}

static void contro_emxEnsureCapacity_char_T(emxArray_char_T_control_T *emxArray,
  int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  control_B.newNumel_b = 1;
  for (control_B.i_j = 0; control_B.i_j < emxArray->numDimensions; control_B.i_j
       ++) {
    control_B.newNumel_b *= emxArray->size[control_B.i_j];
  }

  if (control_B.newNumel_b > emxArray->allocatedSize) {
    control_B.i_j = emxArray->allocatedSize;
    if (control_B.i_j < 16) {
      control_B.i_j = 16;
    }

    while (control_B.i_j < control_B.newNumel_b) {
      if (control_B.i_j > 1073741823) {
        control_B.i_j = MAX_int32_T;
      } else {
        control_B.i_j <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(control_B.i_j), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = control_B.i_j;
    emxArray->canFreeData = true;
  }
}

static void co_rigidBodyJoint_get_JointAxis(const rigidBodyJoint_control_T *obj,
  real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (control_B.b_kstr_h = 0; control_B.b_kstr_h < 8; control_B.b_kstr_h++) {
    control_B.b_d[control_B.b_kstr_h] = tmp[control_B.b_kstr_h];
  }

  control_B.b_bool_m3 = false;
  if (obj->Type->size[1] == 8) {
    control_B.b_kstr_h = 1;
    do {
      exitg1 = 0;
      if (control_B.b_kstr_h - 1 < 8) {
        control_B.kstr_l = control_B.b_kstr_h - 1;
        if (obj->Type->data[control_B.kstr_l] != control_B.b_d[control_B.kstr_l])
        {
          exitg1 = 1;
        } else {
          control_B.b_kstr_h++;
        }
      } else {
        control_B.b_bool_m3 = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (control_B.b_bool_m3) {
    guard1 = true;
  } else {
    for (control_B.b_kstr_h = 0; control_B.b_kstr_h < 9; control_B.b_kstr_h++) {
      control_B.b_p[control_B.b_kstr_h] = tmp_0[control_B.b_kstr_h];
    }

    control_B.b_bool_m3 = false;
    if (obj->Type->size[1] == 9) {
      control_B.b_kstr_h = 1;
      do {
        exitg1 = 0;
        if (control_B.b_kstr_h - 1 < 9) {
          control_B.kstr_l = control_B.b_kstr_h - 1;
          if (obj->Type->data[control_B.kstr_l] !=
              control_B.b_p[control_B.kstr_l]) {
            exitg1 = 1;
          } else {
            control_B.b_kstr_h++;
          }
        } else {
          control_B.b_bool_m3 = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (control_B.b_bool_m3) {
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

static void control_normalizeRows(const real_T matrix[3], real_T normRowMatrix[3])
{
  real_T b;
  b = 1.0 / sqrt((matrix[0] * matrix[0] + matrix[1] * matrix[1]) + matrix[2] *
                 matrix[2]);
  normRowMatrix[0] = matrix[0] * b;
  normRowMatrix[1] = matrix[1] * b;
  normRowMatrix[2] = matrix[2] * b;
}

static void control_cat(real_T varargin_1, real_T varargin_2, real_T varargin_3,
  real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T varargin_7,
  real_T varargin_8, real_T varargin_9, real_T y[9])
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

static void rigidBodyJoint_transformBodyToP(const rigidBodyJoint_control_T *obj,
  real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (control_B.b_kstr = 0; control_B.b_kstr < 5; control_B.b_kstr++) {
    control_B.b_b[control_B.b_kstr] = tmp[control_B.b_kstr];
  }

  control_B.b_bool_m = false;
  if (obj->Type->size[1] == 5) {
    control_B.b_kstr = 1;
    do {
      exitg1 = 0;
      if (control_B.b_kstr - 1 < 5) {
        control_B.kstr = control_B.b_kstr - 1;
        if (obj->Type->data[control_B.kstr] != control_B.b_b[control_B.kstr]) {
          exitg1 = 1;
        } else {
          control_B.b_kstr++;
        }
      } else {
        control_B.b_bool_m = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (control_B.b_bool_m) {
    control_B.b_kstr = 0;
  } else {
    for (control_B.b_kstr = 0; control_B.b_kstr < 8; control_B.b_kstr++) {
      control_B.b_j[control_B.b_kstr] = tmp_0[control_B.b_kstr];
    }

    control_B.b_bool_m = false;
    if (obj->Type->size[1] == 8) {
      control_B.b_kstr = 1;
      do {
        exitg1 = 0;
        if (control_B.b_kstr - 1 < 8) {
          control_B.kstr = control_B.b_kstr - 1;
          if (obj->Type->data[control_B.kstr] != control_B.b_j[control_B.kstr])
          {
            exitg1 = 1;
          } else {
            control_B.b_kstr++;
          }
        } else {
          control_B.b_bool_m = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (control_B.b_bool_m) {
      control_B.b_kstr = 1;
    } else {
      control_B.b_kstr = -1;
    }
  }

  switch (control_B.b_kstr) {
   case 0:
    memset(&control_B.TJ_c[0], 0, sizeof(real_T) << 4U);
    control_B.TJ_c[0] = 1.0;
    control_B.TJ_c[5] = 1.0;
    control_B.TJ_c[10] = 1.0;
    control_B.TJ_c[15] = 1.0;
    break;

   case 1:
    co_rigidBodyJoint_get_JointAxis(obj, control_B.v_m);
    control_B.v_n[0] = control_B.v_m[0];
    control_B.v_n[1] = control_B.v_m[1];
    control_B.v_n[2] = control_B.v_m[2];
    control_normalizeRows(control_B.v_n, control_B.v_m);
    control_B.tempR_tmp_d = control_B.v_m[1] * control_B.v_m[0] * 0.0;
    control_B.tempR_tmp_dy = control_B.v_m[2] * control_B.v_m[0] * 0.0;
    control_B.tempR_tmp_lx = control_B.v_m[2] * control_B.v_m[1] * 0.0;
    control_cat(control_B.v_m[0] * control_B.v_m[0] * 0.0 + 1.0,
                control_B.tempR_tmp_d - control_B.v_m[2] * 0.0,
                control_B.tempR_tmp_dy + control_B.v_m[1] * 0.0,
                control_B.tempR_tmp_d + control_B.v_m[2] * 0.0, control_B.v_m[1]
                * control_B.v_m[1] * 0.0 + 1.0, control_B.tempR_tmp_lx -
                control_B.v_m[0] * 0.0, control_B.tempR_tmp_dy - control_B.v_m[1]
                * 0.0, control_B.tempR_tmp_lx + control_B.v_m[0] * 0.0,
                control_B.v_m[2] * control_B.v_m[2] * 0.0 + 1.0,
                control_B.tempR_c);
    for (control_B.b_kstr = 0; control_B.b_kstr < 3; control_B.b_kstr++) {
      control_B.kstr = control_B.b_kstr + 1;
      control_B.R_p[control_B.kstr - 1] = control_B.tempR_c[(control_B.kstr - 1)
        * 3];
      control_B.kstr = control_B.b_kstr + 1;
      control_B.R_p[control_B.kstr + 2] = control_B.tempR_c[(control_B.kstr - 1)
        * 3 + 1];
      control_B.kstr = control_B.b_kstr + 1;
      control_B.R_p[control_B.kstr + 5] = control_B.tempR_c[(control_B.kstr - 1)
        * 3 + 2];
    }

    memset(&control_B.TJ_c[0], 0, sizeof(real_T) << 4U);
    for (control_B.b_kstr = 0; control_B.b_kstr < 3; control_B.b_kstr++) {
      control_B.kstr = control_B.b_kstr << 2;
      control_B.TJ_c[control_B.kstr] = control_B.R_p[3 * control_B.b_kstr];
      control_B.TJ_c[control_B.kstr + 1] = control_B.R_p[3 * control_B.b_kstr +
        1];
      control_B.TJ_c[control_B.kstr + 2] = control_B.R_p[3 * control_B.b_kstr +
        2];
    }

    control_B.TJ_c[15] = 1.0;
    break;

   default:
    co_rigidBodyJoint_get_JointAxis(obj, control_B.v_m);
    memset(&control_B.tempR_c[0], 0, 9U * sizeof(real_T));
    control_B.tempR_c[0] = 1.0;
    control_B.tempR_c[4] = 1.0;
    control_B.tempR_c[8] = 1.0;
    for (control_B.b_kstr = 0; control_B.b_kstr < 3; control_B.b_kstr++) {
      control_B.kstr = control_B.b_kstr << 2;
      control_B.TJ_c[control_B.kstr] = control_B.tempR_c[3 * control_B.b_kstr];
      control_B.TJ_c[control_B.kstr + 1] = control_B.tempR_c[3 *
        control_B.b_kstr + 1];
      control_B.TJ_c[control_B.kstr + 2] = control_B.tempR_c[3 *
        control_B.b_kstr + 2];
      control_B.TJ_c[control_B.b_kstr + 12] = control_B.v_m[control_B.b_kstr] *
        0.0;
    }

    control_B.TJ_c[3] = 0.0;
    control_B.TJ_c[7] = 0.0;
    control_B.TJ_c[11] = 0.0;
    control_B.TJ_c[15] = 1.0;
    break;
  }

  for (control_B.b_kstr = 0; control_B.b_kstr < 4; control_B.b_kstr++) {
    for (control_B.kstr = 0; control_B.kstr < 4; control_B.kstr++) {
      control_B.obj_tmp_tmp = control_B.kstr << 2;
      control_B.obj_tmp = control_B.b_kstr + control_B.obj_tmp_tmp;
      control_B.obj[control_B.obj_tmp] = 0.0;
      control_B.obj[control_B.obj_tmp] += control_B.TJ_c[control_B.obj_tmp_tmp] *
        obj->JointToParentTransform[control_B.b_kstr];
      control_B.obj[control_B.obj_tmp] += control_B.TJ_c[control_B.obj_tmp_tmp +
        1] * obj->JointToParentTransform[control_B.b_kstr + 4];
      control_B.obj[control_B.obj_tmp] += control_B.TJ_c[control_B.obj_tmp_tmp +
        2] * obj->JointToParentTransform[control_B.b_kstr + 8];
      control_B.obj[control_B.obj_tmp] += control_B.TJ_c[control_B.obj_tmp_tmp +
        3] * obj->JointToParentTransform[control_B.b_kstr + 12];
    }

    for (control_B.kstr = 0; control_B.kstr < 4; control_B.kstr++) {
      control_B.obj_tmp_tmp = control_B.kstr << 2;
      control_B.obj_tmp = control_B.b_kstr + control_B.obj_tmp_tmp;
      T[control_B.obj_tmp] = 0.0;
      T[control_B.obj_tmp] += obj->ChildToJointTransform[control_B.obj_tmp_tmp] *
        control_B.obj[control_B.b_kstr];
      T[control_B.obj_tmp] += obj->ChildToJointTransform[control_B.obj_tmp_tmp +
        1] * control_B.obj[control_B.b_kstr + 4];
      T[control_B.obj_tmp] += obj->ChildToJointTransform[control_B.obj_tmp_tmp +
        2] * control_B.obj[control_B.b_kstr + 8];
      T[control_B.obj_tmp] += obj->ChildToJointTransform[control_B.obj_tmp_tmp +
        3] * control_B.obj[control_B.b_kstr + 12];
    }
  }
}

static void control_tforminv(const real_T T[16], real_T Tinv[16])
{
  for (control_B.i2 = 0; control_B.i2 < 3; control_B.i2++) {
    control_B.R_f[3 * control_B.i2] = T[control_B.i2];
    control_B.R_f[3 * control_B.i2 + 1] = T[control_B.i2 + 4];
    control_B.R_f[3 * control_B.i2 + 2] = T[control_B.i2 + 8];
  }

  for (control_B.i2 = 0; control_B.i2 < 9; control_B.i2++) {
    control_B.R_g[control_B.i2] = -control_B.R_f[control_B.i2];
  }

  for (control_B.i2 = 0; control_B.i2 < 3; control_B.i2++) {
    control_B.Tinv_tmp = control_B.i2 << 2;
    Tinv[control_B.Tinv_tmp] = control_B.R_f[3 * control_B.i2];
    Tinv[control_B.Tinv_tmp + 1] = control_B.R_f[3 * control_B.i2 + 1];
    Tinv[control_B.Tinv_tmp + 2] = control_B.R_f[3 * control_B.i2 + 2];
    Tinv[control_B.i2 + 12] = control_B.R_g[control_B.i2 + 6] * T[14] +
      (control_B.R_g[control_B.i2 + 3] * T[13] + control_B.R_g[control_B.i2] *
       T[12]);
  }

  Tinv[3] = 0.0;
  Tinv[7] = 0.0;
  Tinv[11] = 0.0;
  Tinv[15] = 1.0;
}

static void control_tformToSpatialXform(const real_T T[16], real_T X[36])
{
  control_B.dv1[0] = 0.0;
  control_B.dv1[3] = -T[14];
  control_B.dv1[6] = T[13];
  control_B.dv1[1] = T[14];
  control_B.dv1[4] = 0.0;
  control_B.dv1[7] = -T[12];
  control_B.dv1[2] = -T[13];
  control_B.dv1[5] = T[12];
  control_B.dv1[8] = 0.0;
  for (control_B.i_bn = 0; control_B.i_bn < 3; control_B.i_bn++) {
    for (control_B.X_tmp = 0; control_B.X_tmp < 3; control_B.X_tmp++) {
      control_B.X_tmp_d = control_B.i_bn + 3 * control_B.X_tmp;
      control_B.dv2[control_B.X_tmp_d] = 0.0;
      control_B.i1 = control_B.X_tmp << 2;
      control_B.dv2[control_B.X_tmp_d] += T[control_B.i1] *
        control_B.dv1[control_B.i_bn];
      control_B.dv2[control_B.X_tmp_d] += T[control_B.i1 + 1] *
        control_B.dv1[control_B.i_bn + 3];
      control_B.dv2[control_B.X_tmp_d] += T[control_B.i1 + 2] *
        control_B.dv1[control_B.i_bn + 6];
      X[control_B.X_tmp + 6 * control_B.i_bn] = T[(control_B.i_bn << 2) +
        control_B.X_tmp];
      X[control_B.X_tmp + 6 * (control_B.i_bn + 3)] = 0.0;
    }
  }

  for (control_B.i_bn = 0; control_B.i_bn < 3; control_B.i_bn++) {
    X[6 * control_B.i_bn + 3] = control_B.dv2[3 * control_B.i_bn];
    control_B.X_tmp = control_B.i_bn << 2;
    control_B.X_tmp_d = 6 * (control_B.i_bn + 3);
    X[control_B.X_tmp_d + 3] = T[control_B.X_tmp];
    X[6 * control_B.i_bn + 4] = control_B.dv2[3 * control_B.i_bn + 1];
    X[control_B.X_tmp_d + 4] = T[control_B.X_tmp + 1];
    X[6 * control_B.i_bn + 5] = control_B.dv2[3 * control_B.i_bn + 2];
    X[control_B.X_tmp_d + 5] = T[control_B.X_tmp + 2];
  }
}

static void control_emxFree_char_T(emxArray_char_T_control_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_control_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_control_T *)NULL;
  }
}

static void control_emxFree_real_T(emxArray_real_T_control_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_control_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_control_T *)NULL;
  }
}

static void control_emxFree_e_cell_wrap(emxArray_e_cell_wrap_control_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_e_cell_wrap_control_T *)NULL) {
    if (((*pEmxArray)->data != (e_cell_wrap_control_T *)NULL) && (*pEmxArray)
        ->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_e_cell_wrap_control_T *)NULL;
  }
}

static boolean_T control_strcmp(const emxArray_char_T_control_T *a)
{
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  for (control_B.b_kstr_j = 0; control_B.b_kstr_j < 5; control_B.b_kstr_j++) {
    control_B.b_n[control_B.b_kstr_j] = tmp[control_B.b_kstr_j];
  }

  b_bool = false;
  if (a->size[1] == 5) {
    control_B.b_kstr_j = 1;
    do {
      exitg1 = 0;
      if (control_B.b_kstr_j - 1 < 5) {
        control_B.kstr_j = control_B.b_kstr_j - 1;
        if (a->data[control_B.kstr_j] != control_B.b_n[control_B.kstr_j]) {
          exitg1 = 1;
        } else {
          control_B.b_kstr_j++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void con_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real32_T q[7], real32_T jointTorq[7])
{
  k_robotics_manip_internal_Rig_T *robot;
  emxArray_e_cell_wrap_control_T *X;
  emxArray_e_cell_wrap_control_T *Xtree;
  emxArray_real_T_control_T *vJ;
  emxArray_real_T_control_T *vB;
  emxArray_real_T_control_T *aB;
  emxArray_real_T_control_T *f;
  emxArray_real_T_control_T *S;
  emxArray_real_T_control_T *taui;
  j_robotics_manip_internal_Rig_T *obj_0;
  emxArray_real_T_control_T *a;
  emxArray_char_T_control_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  robot = &obj->TreeInternal;
  for (control_B.i_b = 0; control_B.i_b < 7; control_B.i_b++) {
    control_B.q[control_B.i_b] = q[control_B.i_b];
  }

  control_B.a0[0] = 0.0;
  control_B.a0[1] = 0.0;
  control_B.a0[2] = 0.0;
  control_B.a0[3] = -obj->TreeInternal.Gravity[0];
  control_B.a0[4] = -obj->TreeInternal.Gravity[1];
  control_B.a0[5] = -obj->TreeInternal.Gravity[2];
  control_emxInit_real_T(&vJ, 2);
  control_B.nb = obj->TreeInternal.NumBodies;
  control_B.u = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  control_B.unnamed_idx_1 = static_cast<int32_T>(control_B.nb);
  vJ->size[1] = control_B.unnamed_idx_1;
  contro_emxEnsureCapacity_real_T(vJ, control_B.u);
  control_B.aoffset = 6 * control_B.unnamed_idx_1 - 1;
  for (control_B.u = 0; control_B.u <= control_B.aoffset; control_B.u++) {
    vJ->data[control_B.u] = 0.0;
  }

  control_emxInit_real_T(&vB, 2);
  control_B.u = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = control_B.unnamed_idx_1;
  contro_emxEnsureCapacity_real_T(vB, control_B.u);
  for (control_B.u = 0; control_B.u <= control_B.aoffset; control_B.u++) {
    vB->data[control_B.u] = 0.0;
  }

  control_emxInit_real_T(&aB, 2);
  control_B.u = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = control_B.unnamed_idx_1;
  contro_emxEnsureCapacity_real_T(aB, control_B.u);
  for (control_B.u = 0; control_B.u <= control_B.aoffset; control_B.u++) {
    aB->data[control_B.u] = 0.0;
  }

  for (control_B.i_b = 0; control_B.i_b < 7; control_B.i_b++) {
    control_B.tau[control_B.i_b] = 0.0;
  }

  control_emxInit_e_cell_wrap(&X, 2);
  control_emxInit_e_cell_wrap(&Xtree, 2);
  control_B.i_b = control_B.unnamed_idx_1 - 1;
  control_B.u = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = control_B.unnamed_idx_1;
  c_emxEnsureCapacity_e_cell_wrap(Xtree, control_B.u);
  control_B.u = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = control_B.unnamed_idx_1;
  c_emxEnsureCapacity_e_cell_wrap(X, control_B.u);
  if (0 <= control_B.i_b) {
    control_eye(control_B.b_I);
  }

  for (control_B.b_k = 0; control_B.b_k <= control_B.i_b; control_B.b_k++) {
    for (control_B.u = 0; control_B.u < 36; control_B.u++) {
      Xtree->data[control_B.b_k].f1[control_B.u] = control_B.b_I[control_B.u];
      X->data[control_B.b_k].f1[control_B.u] = control_B.b_I[control_B.u];
    }
  }

  control_emxInit_real_T(&f, 2);
  control_B.u = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = control_B.unnamed_idx_1;
  contro_emxEnsureCapacity_real_T(f, control_B.u);
  control_emxInit_real_T(&S, 2);
  control_emxInit_char_T(&switch_expression, 2);
  for (control_B.unnamed_idx_1 = 0; control_B.unnamed_idx_1 <= control_B.i_b;
       control_B.unnamed_idx_1++) {
    obj_0 = robot->Bodies[control_B.unnamed_idx_1];
    control_B.u = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
    contro_emxEnsureCapacity_real_T(S, control_B.u);
    control_B.aoffset = obj_0->JointInternal.MotionSubspace->size[0] *
      obj_0->JointInternal.MotionSubspace->size[1] - 1;
    for (control_B.u = 0; control_B.u <= control_B.aoffset; control_B.u++) {
      S->data[control_B.u] = obj_0->JointInternal.MotionSubspace->
        data[control_B.u];
    }

    control_B.a_idx_0 = robot->PositionDoFMap[control_B.unnamed_idx_1];
    control_B.a_idx_1 = robot->PositionDoFMap[control_B.unnamed_idx_1 + 10];
    control_B.b_idx_0 = robot->VelocityDoFMap[control_B.unnamed_idx_1];
    control_B.b_idx_1 = robot->VelocityDoFMap[control_B.unnamed_idx_1 + 10];
    if (control_B.a_idx_1 < control_B.a_idx_0) {
      obj_0 = robot->Bodies[control_B.unnamed_idx_1];
      rigidBodyJoint_transformBodyToP(&obj_0->JointInternal, control_B.T);
      control_B.t = 1;
      control_B.qddoti_data[0] = 0.0;
      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        vJ->data[control_B.u + 6 * control_B.unnamed_idx_1] = 0.0;
      }
    } else {
      if (control_B.a_idx_0 > control_B.a_idx_1) {
        control_B.b_k = 0;
        control_B.j = 0;
      } else {
        control_B.b_k = static_cast<int32_T>(control_B.a_idx_0) - 1;
        control_B.j = static_cast<int32_T>(control_B.a_idx_1);
      }

      if (control_B.b_idx_0 > control_B.b_idx_1) {
        control_B.m = 0;
        control_B.inner = 0;
        control_B.u = 0;
        control_B.t = -1;
      } else {
        control_B.m = static_cast<int32_T>(control_B.b_idx_0) - 1;
        control_B.inner = static_cast<int32_T>(control_B.b_idx_1);
        control_B.u = control_B.m;
        control_B.t = control_B.inner - 1;
      }

      control_B.u = control_B.t - control_B.u;
      control_B.t = control_B.u + 1;
      if (0 <= control_B.u) {
        memset(&control_B.qddoti_data[0], 0, (control_B.u + 1) * sizeof(real_T));
      }

      obj_0 = robot->Bodies[control_B.unnamed_idx_1];
      control_B.u = switch_expression->size[0] * switch_expression->size[1];
      switch_expression->size[0] = 1;
      switch_expression->size[1] = obj_0->JointInternal.Type->size[1];
      contro_emxEnsureCapacity_char_T(switch_expression, control_B.u);
      control_B.aoffset = obj_0->JointInternal.Type->size[0] *
        obj_0->JointInternal.Type->size[1] - 1;
      for (control_B.u = 0; control_B.u <= control_B.aoffset; control_B.u++) {
        switch_expression->data[control_B.u] = obj_0->JointInternal.Type->
          data[control_B.u];
      }

      for (control_B.u = 0; control_B.u < 5; control_B.u++) {
        control_B.b_o[control_B.u] = tmp[control_B.u];
      }

      control_B.b_bool = false;
      if (switch_expression->size[1] == 5) {
        control_B.u = 1;
        do {
          exitg1 = 0;
          if (control_B.u - 1 < 5) {
            control_B.aoffset = control_B.u - 1;
            if (switch_expression->data[control_B.aoffset] !=
                control_B.b_o[control_B.aoffset]) {
              exitg1 = 1;
            } else {
              control_B.u++;
            }
          } else {
            control_B.b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (control_B.b_bool) {
        control_B.u = 0;
      } else {
        for (control_B.u = 0; control_B.u < 8; control_B.u++) {
          control_B.b_l[control_B.u] = tmp_0[control_B.u];
        }

        control_B.b_bool = false;
        if (switch_expression->size[1] == 8) {
          control_B.u = 1;
          do {
            exitg1 = 0;
            if (control_B.u - 1 < 8) {
              control_B.aoffset = control_B.u - 1;
              if (switch_expression->data[control_B.aoffset] !=
                  control_B.b_l[control_B.aoffset]) {
                exitg1 = 1;
              } else {
                control_B.u++;
              }
            } else {
              control_B.b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (control_B.b_bool) {
          control_B.u = 1;
        } else {
          control_B.u = -1;
        }
      }

      switch (control_B.u) {
       case 0:
        memset(&control_B.TJ[0], 0, sizeof(real_T) << 4U);
        control_B.TJ[0] = 1.0;
        control_B.TJ[5] = 1.0;
        control_B.TJ[10] = 1.0;
        control_B.TJ[15] = 1.0;
        break;

       case 1:
        co_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal, control_B.v);
        control_B.aoffset = control_B.j - control_B.b_k;
        for (control_B.u = 0; control_B.u < control_B.aoffset; control_B.u++) {
          control_B.l_data[control_B.u] = control_B.b_k + control_B.u;
        }

        control_B.result_data[0] = control_B.v[0];
        control_B.result_data[1] = control_B.v[1];
        control_B.result_data[2] = control_B.v[2];
        if (0 <= (control_B.aoffset != 0) - 1) {
          control_B.result_data[3] = control_B.q[control_B.l_data[0]];
        }

        control_normalizeRows(&control_B.result_data[0], control_B.v);
        control_B.a_idx_0 = cos(control_B.result_data[3]);
        control_B.sth = sin(control_B.result_data[3]);
        control_B.a_idx_1 = control_B.v[1] * control_B.v[0] * (1.0 -
          control_B.a_idx_0);
        control_B.b_idx_0 = control_B.v[2] * control_B.sth;
        control_B.b_idx_1 = control_B.v[2] * control_B.v[0] * (1.0 -
          control_B.a_idx_0);
        control_B.tempR_tmp = control_B.v[1] * control_B.sth;
        control_B.tempR_tmp_l = control_B.v[2] * control_B.v[1] * (1.0 -
          control_B.a_idx_0);
        control_B.sth *= control_B.v[0];
        control_cat(control_B.v[0] * control_B.v[0] * (1.0 - control_B.a_idx_0)
                    + control_B.a_idx_0, control_B.a_idx_1 - control_B.b_idx_0,
                    control_B.b_idx_1 + control_B.tempR_tmp, control_B.a_idx_1 +
                    control_B.b_idx_0, control_B.v[1] * control_B.v[1] * (1.0 -
          control_B.a_idx_0) + control_B.a_idx_0, control_B.tempR_tmp_l -
                    control_B.sth, control_B.b_idx_1 - control_B.tempR_tmp,
                    control_B.tempR_tmp_l + control_B.sth, control_B.v[2] *
                    control_B.v[2] * (1.0 - control_B.a_idx_0) +
                    control_B.a_idx_0, control_B.tempR_b);
        for (control_B.b_k = 0; control_B.b_k < 3; control_B.b_k++) {
          control_B.u = control_B.b_k + 1;
          control_B.R[control_B.u - 1] = control_B.tempR_b[(control_B.u - 1) * 3];
          control_B.u = control_B.b_k + 1;
          control_B.R[control_B.u + 2] = control_B.tempR_b[(control_B.u - 1) * 3
            + 1];
          control_B.u = control_B.b_k + 1;
          control_B.R[control_B.u + 5] = control_B.tempR_b[(control_B.u - 1) * 3
            + 2];
        }

        memset(&control_B.TJ[0], 0, sizeof(real_T) << 4U);
        for (control_B.u = 0; control_B.u < 3; control_B.u++) {
          control_B.aoffset = control_B.u << 2;
          control_B.TJ[control_B.aoffset] = control_B.R[3 * control_B.u];
          control_B.TJ[control_B.aoffset + 1] = control_B.R[3 * control_B.u + 1];
          control_B.TJ[control_B.aoffset + 2] = control_B.R[3 * control_B.u + 2];
        }

        control_B.TJ[15] = 1.0;
        break;

       default:
        co_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal, control_B.v);
        memset(&control_B.tempR_b[0], 0, 9U * sizeof(real_T));
        control_B.tempR_b[0] = 1.0;
        control_B.tempR_b[4] = 1.0;
        control_B.tempR_b[8] = 1.0;
        for (control_B.u = 0; control_B.u < 3; control_B.u++) {
          control_B.aoffset = control_B.u << 2;
          control_B.TJ[control_B.aoffset] = control_B.tempR_b[3 * control_B.u];
          control_B.TJ[control_B.aoffset + 1] = control_B.tempR_b[3 *
            control_B.u + 1];
          control_B.TJ[control_B.aoffset + 2] = control_B.tempR_b[3 *
            control_B.u + 2];
          control_B.TJ[control_B.u + 12] = control_B.v[control_B.u] *
            control_B.q[control_B.b_k];
        }

        control_B.TJ[3] = 0.0;
        control_B.TJ[7] = 0.0;
        control_B.TJ[11] = 0.0;
        control_B.TJ[15] = 1.0;
        break;
      }

      for (control_B.u = 0; control_B.u < 16; control_B.u++) {
        control_B.a[control_B.u] = obj_0->
          JointInternal.JointToParentTransform[control_B.u];
      }

      for (control_B.u = 0; control_B.u < 16; control_B.u++) {
        control_B.b[control_B.u] = obj_0->
          JointInternal.ChildToJointTransform[control_B.u];
      }

      for (control_B.u = 0; control_B.u < 4; control_B.u++) {
        for (control_B.b_k = 0; control_B.b_k < 4; control_B.b_k++) {
          control_B.aoffset = control_B.b_k << 2;
          control_B.j = control_B.u + control_B.aoffset;
          control_B.a_k[control_B.j] = 0.0;
          control_B.a_k[control_B.j] += control_B.TJ[control_B.aoffset] *
            control_B.a[control_B.u];
          control_B.a_k[control_B.j] += control_B.TJ[control_B.aoffset + 1] *
            control_B.a[control_B.u + 4];
          control_B.a_k[control_B.j] += control_B.TJ[control_B.aoffset + 2] *
            control_B.a[control_B.u + 8];
          control_B.a_k[control_B.j] += control_B.TJ[control_B.aoffset + 3] *
            control_B.a[control_B.u + 12];
        }

        for (control_B.b_k = 0; control_B.b_k < 4; control_B.b_k++) {
          control_B.j = control_B.b_k << 2;
          control_B.aoffset = control_B.u + control_B.j;
          control_B.T[control_B.aoffset] = 0.0;
          control_B.T[control_B.aoffset] += control_B.b[control_B.j] *
            control_B.a_k[control_B.u];
          control_B.T[control_B.aoffset] += control_B.b[control_B.j + 1] *
            control_B.a_k[control_B.u + 4];
          control_B.T[control_B.aoffset] += control_B.b[control_B.j + 2] *
            control_B.a_k[control_B.u + 8];
          control_B.T[control_B.aoffset] += control_B.b[control_B.j + 3] *
            control_B.a_k[control_B.u + 12];
        }
      }

      if ((S->size[1] == 1) || (control_B.inner - control_B.m == 1)) {
        for (control_B.u = 0; control_B.u < 6; control_B.u++) {
          control_B.b_k = control_B.u + 6 * control_B.unnamed_idx_1;
          vJ->data[control_B.b_k] = 0.0;
          control_B.aoffset = S->size[1];
          for (control_B.m = 0; control_B.m < control_B.aoffset; control_B.m++)
          {
            vJ->data[control_B.b_k] += S->data[6 * control_B.m + control_B.u] *
              0.0;
          }
        }
      } else {
        control_B.inner = S->size[1] - 1;
        for (control_B.u = 0; control_B.u < 6; control_B.u++) {
          vJ->data[control_B.u + 6 * control_B.unnamed_idx_1] = 0.0;
        }

        for (control_B.b_k = 0; control_B.b_k <= control_B.inner; control_B.b_k
             ++) {
          control_B.aoffset = control_B.b_k * 6 - 1;
          for (control_B.c_i = 0; control_B.c_i < 6; control_B.c_i++) {
            control_B.u = 6 * control_B.unnamed_idx_1 + control_B.c_i;
            vJ->data[control_B.u] += S->data[(control_B.aoffset + control_B.c_i)
              + 1] * 0.0;
          }
        }
      }
    }

    control_tforminv(control_B.T, control_B.TJ);
    control_tformToSpatialXform(control_B.TJ, X->data[control_B.unnamed_idx_1].
      f1);
    control_B.a_idx_0 = robot->Bodies[control_B.unnamed_idx_1]->ParentIndex;
    if (control_B.a_idx_0 > 0.0) {
      control_B.m = static_cast<int32_T>(control_B.a_idx_0);
      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.a_idx_1 = 0.0;
        for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
          control_B.a_idx_1 += vB->data[(control_B.m - 1) * 6 + control_B.b_k] *
            X->data[control_B.unnamed_idx_1].f1[6 * control_B.b_k + control_B.u];
        }

        control_B.y[control_B.u] = vJ->data[6 * control_B.unnamed_idx_1 +
          control_B.u] + control_B.a_idx_1;
      }

      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        vB->data[control_B.u + 6 * control_B.unnamed_idx_1] =
          control_B.y[control_B.u];
      }

      if ((S->size[1] == 1) || (control_B.t == 1)) {
        control_B.aoffset = S->size[1];
        for (control_B.u = 0; control_B.u < 6; control_B.u++) {
          control_B.y[control_B.u] = 0.0;
          for (control_B.b_k = 0; control_B.b_k < control_B.aoffset;
               control_B.b_k++) {
            control_B.a_idx_1 = S->data[6 * control_B.b_k + control_B.u] *
              control_B.qddoti_data[control_B.b_k] + control_B.y[control_B.u];
            control_B.y[control_B.u] = control_B.a_idx_1;
          }
        }
      } else {
        control_B.inner = S->size[1] - 1;
        for (control_B.u = 0; control_B.u < 6; control_B.u++) {
          control_B.y[control_B.u] = 0.0;
        }

        for (control_B.b_k = 0; control_B.b_k <= control_B.inner; control_B.b_k
             ++) {
          control_B.aoffset = control_B.b_k * 6 - 1;
          for (control_B.c_i = 0; control_B.c_i < 6; control_B.c_i++) {
            control_B.a_idx_1 = S->data[(control_B.aoffset + control_B.c_i) + 1]
              * 0.0 + control_B.y[control_B.c_i];
            control_B.y[control_B.c_i] = control_B.a_idx_1;
          }
        }
      }

      control_B.tempR_b[0] = 0.0;
      control_B.t = 6 * control_B.unnamed_idx_1 + 2;
      control_B.tempR_b[3] = -vB->data[control_B.t];
      control_B.u = 6 * control_B.unnamed_idx_1 + 1;
      control_B.tempR_b[6] = vB->data[control_B.u];
      control_B.tempR_b[1] = vB->data[control_B.t];
      control_B.tempR_b[4] = 0.0;
      control_B.tempR_b[7] = -vB->data[6 * control_B.unnamed_idx_1];
      control_B.tempR_b[2] = -vB->data[control_B.u];
      control_B.tempR_b[5] = vB->data[6 * control_B.unnamed_idx_1];
      control_B.tempR_b[8] = 0.0;
      control_B.tempR[3] = 0.0;
      control_B.t = 6 * control_B.unnamed_idx_1 + 5;
      control_B.tempR[9] = -vB->data[control_B.t];
      control_B.u = 6 * control_B.unnamed_idx_1 + 4;
      control_B.tempR[15] = vB->data[control_B.u];
      control_B.tempR[4] = vB->data[control_B.t];
      control_B.tempR[10] = 0.0;
      control_B.t = 6 * control_B.unnamed_idx_1 + 3;
      control_B.tempR[16] = -vB->data[control_B.t];
      control_B.tempR[5] = -vB->data[control_B.u];
      control_B.tempR[11] = vB->data[control_B.t];
      control_B.tempR[17] = 0.0;
      for (control_B.u = 0; control_B.u < 3; control_B.u++) {
        control_B.a_idx_1 = control_B.tempR_b[3 * control_B.u];
        control_B.tempR[6 * control_B.u] = control_B.a_idx_1;
        control_B.t = 6 * (control_B.u + 3);
        control_B.tempR[control_B.t] = 0.0;
        control_B.tempR[control_B.t + 3] = control_B.a_idx_1;
        control_B.a_idx_1 = control_B.tempR_b[3 * control_B.u + 1];
        control_B.tempR[6 * control_B.u + 1] = control_B.a_idx_1;
        control_B.tempR[control_B.t + 1] = 0.0;
        control_B.tempR[control_B.t + 4] = control_B.a_idx_1;
        control_B.a_idx_1 = control_B.tempR_b[3 * control_B.u + 2];
        control_B.tempR[6 * control_B.u + 2] = control_B.a_idx_1;
        control_B.tempR[control_B.t + 2] = 0.0;
        control_B.tempR[control_B.t + 5] = control_B.a_idx_1;
      }

      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.a_idx_1 = 0.0;
        for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
          control_B.a_idx_1 += aB->data[(control_B.m - 1) * 6 + control_B.b_k] *
            X->data[control_B.unnamed_idx_1].f1[6 * control_B.b_k + control_B.u];
        }

        control_B.X[control_B.u] = control_B.a_idx_1 + control_B.y[control_B.u];
      }

      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.y[control_B.u] = 0.0;
        for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
          control_B.a_idx_1 = control_B.tempR[6 * control_B.b_k + control_B.u] *
            vJ->data[6 * control_B.unnamed_idx_1 + control_B.b_k] +
            control_B.y[control_B.u];
          control_B.y[control_B.u] = control_B.a_idx_1;
        }

        aB->data[control_B.u + 6 * control_B.unnamed_idx_1] =
          control_B.X[control_B.u] + control_B.y[control_B.u];
      }

      control_B.R[0] = 0.0;
      control_B.R[3] = -control_B.T[14];
      control_B.R[6] = control_B.T[13];
      control_B.R[1] = control_B.T[14];
      control_B.R[4] = 0.0;
      control_B.R[7] = -control_B.T[12];
      control_B.R[2] = -control_B.T[13];
      control_B.R[5] = control_B.T[12];
      control_B.R[8] = 0.0;
      for (control_B.u = 0; control_B.u < 3; control_B.u++) {
        for (control_B.b_k = 0; control_B.b_k < 3; control_B.b_k++) {
          control_B.m = control_B.u + 3 * control_B.b_k;
          control_B.dv[control_B.m] = 0.0;
          control_B.t = control_B.b_k << 2;
          control_B.dv[control_B.m] += control_B.T[control_B.t] *
            control_B.R[control_B.u];
          control_B.dv[control_B.m] += control_B.T[control_B.t + 1] *
            control_B.R[control_B.u + 3];
          control_B.dv[control_B.m] += control_B.T[control_B.t + 2] *
            control_B.R[control_B.u + 6];
          control_B.b_I[control_B.b_k + 6 * control_B.u] = control_B.T
            [(control_B.u << 2) + control_B.b_k];
          control_B.b_I[control_B.b_k + 6 * (control_B.u + 3)] = 0.0;
        }
      }

      for (control_B.u = 0; control_B.u < 3; control_B.u++) {
        control_B.b_I[6 * control_B.u + 3] = control_B.dv[3 * control_B.u];
        control_B.aoffset = control_B.u << 2;
        control_B.t = 6 * (control_B.u + 3);
        control_B.b_I[control_B.t + 3] = control_B.T[control_B.aoffset];
        control_B.b_I[6 * control_B.u + 4] = control_B.dv[3 * control_B.u + 1];
        control_B.b_I[control_B.t + 4] = control_B.T[control_B.aoffset + 1];
        control_B.b_I[6 * control_B.u + 5] = control_B.dv[3 * control_B.u + 2];
        control_B.b_I[control_B.t + 5] = control_B.T[control_B.aoffset + 2];
      }

      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
          control_B.t = control_B.u + 6 * control_B.b_k;
          control_B.tempR[control_B.t] = 0.0;
          for (control_B.m = 0; control_B.m < 6; control_B.m++) {
            control_B.tempR[control_B.t] += Xtree->data[static_cast<int32_T>
              (control_B.a_idx_0) - 1].f1[6 * control_B.m + control_B.u] *
              control_B.b_I[6 * control_B.b_k + control_B.m];
          }
        }
      }

      for (control_B.u = 0; control_B.u < 36; control_B.u++) {
        Xtree->data[control_B.unnamed_idx_1].f1[control_B.u] =
          control_B.tempR[control_B.u];
      }
    } else {
      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.b_k = 6 * control_B.unnamed_idx_1 + control_B.u;
        vB->data[control_B.b_k] = vJ->data[control_B.b_k];
      }

      if ((S->size[1] == 1) || (control_B.t == 1)) {
        control_B.aoffset = S->size[1];
        for (control_B.u = 0; control_B.u < 6; control_B.u++) {
          control_B.y[control_B.u] = 0.0;
          for (control_B.b_k = 0; control_B.b_k < control_B.aoffset;
               control_B.b_k++) {
            control_B.a_idx_1 = S->data[6 * control_B.b_k + control_B.u] *
              control_B.qddoti_data[control_B.b_k] + control_B.y[control_B.u];
            control_B.y[control_B.u] = control_B.a_idx_1;
          }
        }
      } else {
        control_B.inner = S->size[1] - 1;
        for (control_B.u = 0; control_B.u < 6; control_B.u++) {
          control_B.y[control_B.u] = 0.0;
        }

        for (control_B.b_k = 0; control_B.b_k <= control_B.inner; control_B.b_k
             ++) {
          control_B.aoffset = control_B.b_k * 6 - 1;
          for (control_B.c_i = 0; control_B.c_i < 6; control_B.c_i++) {
            control_B.a_idx_1 = S->data[(control_B.aoffset + control_B.c_i) + 1]
              * 0.0 + control_B.y[control_B.c_i];
            control_B.y[control_B.c_i] = control_B.a_idx_1;
          }
        }
      }

      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.a_idx_1 = 0.0;
        for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
          control_B.a_idx_1 += X->data[control_B.unnamed_idx_1].f1[6 *
            control_B.b_k + control_B.u] * control_B.a0[control_B.b_k];
        }

        aB->data[control_B.u + 6 * control_B.unnamed_idx_1] = control_B.a_idx_1
          + control_B.y[control_B.u];
      }

      control_B.R[0] = 0.0;
      control_B.R[3] = -control_B.T[14];
      control_B.R[6] = control_B.T[13];
      control_B.R[1] = control_B.T[14];
      control_B.R[4] = 0.0;
      control_B.R[7] = -control_B.T[12];
      control_B.R[2] = -control_B.T[13];
      control_B.R[5] = control_B.T[12];
      control_B.R[8] = 0.0;
      for (control_B.u = 0; control_B.u < 3; control_B.u++) {
        for (control_B.b_k = 0; control_B.b_k < 3; control_B.b_k++) {
          control_B.m = control_B.u + 3 * control_B.b_k;
          control_B.dv[control_B.m] = 0.0;
          control_B.t = control_B.b_k << 2;
          control_B.dv[control_B.m] += control_B.T[control_B.t] *
            control_B.R[control_B.u];
          control_B.dv[control_B.m] += control_B.T[control_B.t + 1] *
            control_B.R[control_B.u + 3];
          control_B.dv[control_B.m] += control_B.T[control_B.t + 2] *
            control_B.R[control_B.u + 6];
          Xtree->data[control_B.unnamed_idx_1].f1[control_B.b_k + 6 *
            control_B.u] = control_B.T[(control_B.u << 2) + control_B.b_k];
          Xtree->data[control_B.unnamed_idx_1].f1[control_B.b_k + 6 *
            (control_B.u + 3)] = 0.0;
        }
      }

      for (control_B.u = 0; control_B.u < 3; control_B.u++) {
        Xtree->data[control_B.unnamed_idx_1].f1[6 * control_B.u + 3] =
          control_B.dv[3 * control_B.u];
        control_B.b_k = control_B.u << 2;
        control_B.m = 6 * (control_B.u + 3);
        Xtree->data[control_B.unnamed_idx_1].f1[control_B.m + 3] =
          control_B.T[control_B.b_k];
        Xtree->data[control_B.unnamed_idx_1].f1[6 * control_B.u + 4] =
          control_B.dv[3 * control_B.u + 1];
        Xtree->data[control_B.unnamed_idx_1].f1[control_B.m + 4] =
          control_B.T[control_B.b_k + 1];
        Xtree->data[control_B.unnamed_idx_1].f1[6 * control_B.u + 5] =
          control_B.dv[3 * control_B.u + 2];
        Xtree->data[control_B.unnamed_idx_1].f1[control_B.m + 5] =
          control_B.T[control_B.b_k + 2];
      }
    }

    for (control_B.u = 0; control_B.u < 36; control_B.u++) {
      control_B.b_I[control_B.u] = robot->Bodies[control_B.unnamed_idx_1]
        ->SpatialInertia[control_B.u];
    }

    control_B.tempR_b[0] = 0.0;
    control_B.t = 6 * control_B.unnamed_idx_1 + 2;
    control_B.tempR_b[3] = -vB->data[control_B.t];
    control_B.u = 6 * control_B.unnamed_idx_1 + 1;
    control_B.tempR_b[6] = vB->data[control_B.u];
    control_B.tempR_b[1] = vB->data[control_B.t];
    control_B.tempR_b[4] = 0.0;
    control_B.tempR_b[7] = -vB->data[6 * control_B.unnamed_idx_1];
    control_B.tempR_b[2] = -vB->data[control_B.u];
    control_B.tempR_b[5] = vB->data[6 * control_B.unnamed_idx_1];
    control_B.tempR_b[8] = 0.0;
    control_B.tempR[18] = 0.0;
    control_B.t = 6 * control_B.unnamed_idx_1 + 5;
    control_B.tempR[24] = -vB->data[control_B.t];
    control_B.u = 6 * control_B.unnamed_idx_1 + 4;
    control_B.tempR[30] = vB->data[control_B.u];
    control_B.tempR[19] = vB->data[control_B.t];
    control_B.tempR[25] = 0.0;
    control_B.t = 6 * control_B.unnamed_idx_1 + 3;
    control_B.tempR[31] = -vB->data[control_B.t];
    control_B.tempR[20] = -vB->data[control_B.u];
    control_B.tempR[26] = vB->data[control_B.t];
    control_B.tempR[32] = 0.0;
    for (control_B.u = 0; control_B.u < 3; control_B.u++) {
      control_B.a_idx_1 = control_B.tempR_b[3 * control_B.u];
      control_B.tempR[6 * control_B.u] = control_B.a_idx_1;
      control_B.tempR[6 * control_B.u + 3] = 0.0;
      control_B.t = 6 * (control_B.u + 3);
      control_B.tempR[control_B.t + 3] = control_B.a_idx_1;
      control_B.a_idx_1 = control_B.tempR_b[3 * control_B.u + 1];
      control_B.tempR[6 * control_B.u + 1] = control_B.a_idx_1;
      control_B.tempR[6 * control_B.u + 4] = 0.0;
      control_B.tempR[control_B.t + 4] = control_B.a_idx_1;
      control_B.a_idx_1 = control_B.tempR_b[3 * control_B.u + 2];
      control_B.tempR[6 * control_B.u + 2] = control_B.a_idx_1;
      control_B.tempR[6 * control_B.u + 5] = 0.0;
      control_B.tempR[control_B.t + 5] = control_B.a_idx_1;
    }

    for (control_B.u = 0; control_B.u < 6; control_B.u++) {
      control_B.X[control_B.u] = 0.0;
      control_B.b_I_g[control_B.u] = 0.0;
      for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
        control_B.a_idx_0 = control_B.b_I[6 * control_B.b_k + control_B.u];
        control_B.t = 6 * control_B.unnamed_idx_1 + control_B.b_k;
        control_B.a_idx_1 = vB->data[control_B.t] * control_B.a_idx_0 +
          control_B.X[control_B.u];
        control_B.a_idx_0 = aB->data[control_B.t] * control_B.a_idx_0 +
          control_B.b_I_g[control_B.u];
        control_B.X[control_B.u] = control_B.a_idx_1;
        control_B.b_I_g[control_B.u] = control_B.a_idx_0;
      }
    }

    for (control_B.u = 0; control_B.u < 6; control_B.u++) {
      control_B.y[control_B.u] = 0.0;
      control_B.a_idx_1 = 0.0;
      for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
        control_B.a_idx_1 += Xtree->data[control_B.unnamed_idx_1].f1[6 *
          control_B.u + control_B.b_k] * 0.0;
        control_B.y[control_B.u] += control_B.tempR[6 * control_B.b_k +
          control_B.u] * control_B.X[control_B.b_k];
      }

      f->data[control_B.u + 6 * control_B.unnamed_idx_1] =
        (control_B.b_I_g[control_B.u] + control_B.y[control_B.u]) -
        control_B.a_idx_1;
    }
  }

  control_emxFree_char_T(&switch_expression);
  control_emxFree_real_T(&aB);
  control_emxFree_real_T(&vB);
  control_emxFree_real_T(&vJ);
  control_emxFree_e_cell_wrap(&Xtree);
  control_B.i_b = static_cast<int32_T>(((-1.0 - control_B.nb) + 1.0) / -1.0) - 1;
  control_emxInit_real_T(&taui, 1);
  control_emxInit_real_T(&a, 2);
  for (control_B.t = 0; control_B.t <= control_B.i_b; control_B.t++) {
    control_B.a_idx_0 = control_B.nb + -static_cast<real_T>(control_B.t);
    control_B.inner = static_cast<int32_T>(control_B.a_idx_0);
    control_B.j = control_B.inner - 1;
    obj_0 = robot->Bodies[control_B.j];
    if (!control_strcmp(obj_0->JointInternal.Type)) {
      obj_0 = robot->Bodies[control_B.j];
      control_B.u = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
      contro_emxEnsureCapacity_real_T(S, control_B.u);
      control_B.aoffset = obj_0->JointInternal.MotionSubspace->size[0] *
        obj_0->JointInternal.MotionSubspace->size[1] - 1;
      for (control_B.u = 0; control_B.u <= control_B.aoffset; control_B.u++) {
        S->data[control_B.u] = obj_0->JointInternal.MotionSubspace->
          data[control_B.u];
      }

      control_B.u = a->size[0] * a->size[1];
      a->size[0] = S->size[1];
      a->size[1] = 6;
      contro_emxEnsureCapacity_real_T(a, control_B.u);
      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.aoffset = S->size[1];
        for (control_B.b_k = 0; control_B.b_k < control_B.aoffset; control_B.b_k
             ++) {
          a->data[control_B.b_k + a->size[0] * control_B.u] = S->data[6 *
            control_B.b_k + control_B.u];
        }
      }

      control_B.m = a->size[0] - 1;
      control_B.u = taui->size[0];
      taui->size[0] = a->size[0];
      contro_emxEnsureCapacity_real_T(taui, control_B.u);
      for (control_B.unnamed_idx_1 = 0; control_B.unnamed_idx_1 <= control_B.m;
           control_B.unnamed_idx_1++) {
        taui->data[control_B.unnamed_idx_1] = 0.0;
      }

      for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
        control_B.aoffset = (control_B.m + 1) * control_B.b_k - 1;
        for (control_B.c_i = 0; control_B.c_i <= control_B.m; control_B.c_i++) {
          taui->data[control_B.c_i] += f->data[(static_cast<int32_T>
            (control_B.a_idx_0) - 1) * 6 + control_B.b_k] * a->data
            [(control_B.aoffset + control_B.c_i) + 1];
        }
      }

      control_B.b_idx_0 = robot->VelocityDoFMap[control_B.inner - 1];
      control_B.b_idx_1 = robot->VelocityDoFMap[control_B.inner + 9];
      if (control_B.b_idx_0 > control_B.b_idx_1) {
        control_B.m = 0;
        control_B.unnamed_idx_1 = 0;
      } else {
        control_B.m = static_cast<int32_T>(control_B.b_idx_0) - 1;
        control_B.unnamed_idx_1 = static_cast<int32_T>(control_B.b_idx_1);
      }

      control_B.unnamed_idx_1 -= control_B.m;
      for (control_B.u = 0; control_B.u < control_B.unnamed_idx_1; control_B.u++)
      {
        control_B.tau[control_B.m + control_B.u] = taui->data[control_B.u];
      }
    }

    control_B.a_idx_0 = robot->Bodies[control_B.j]->ParentIndex;
    if (control_B.a_idx_0 > 0.0) {
      control_B.m = static_cast<int32_T>(control_B.a_idx_0);
      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        control_B.a_idx_1 = 0.0;
        for (control_B.b_k = 0; control_B.b_k < 6; control_B.b_k++) {
          control_B.a_idx_1 += f->data[(control_B.inner - 1) * 6 + control_B.b_k]
            * X->data[control_B.j].f1[6 * control_B.u + control_B.b_k];
        }

        control_B.a0[control_B.u] = f->data[(control_B.m - 1) * 6 + control_B.u]
          + control_B.a_idx_1;
      }

      for (control_B.u = 0; control_B.u < 6; control_B.u++) {
        f->data[control_B.u + 6 * (control_B.m - 1)] = control_B.a0[control_B.u];
      }
    }
  }

  control_emxFree_real_T(&a);
  control_emxFree_real_T(&taui);
  control_emxFree_real_T(&S);
  control_emxFree_real_T(&f);
  control_emxFree_e_cell_wrap(&X);
  for (control_B.i_b = 0; control_B.i_b < 7; control_B.i_b++) {
    jointTorq[control_B.i_b] = static_cast<real32_T>(control_B.tau[control_B.i_b]);
  }
}

static void control_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_control_299.getLatestMessage(&control_B.b_varargout_2_m);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = control_B.b_varargout_2_m.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    control_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    control_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = control_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &control_B.b_varargout_2_m.Layout.Dim[0],
         sizeof(SL_Bus_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    control_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    control_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void control_SystemCore_step_mt(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_control_638.getLatestMessage(&control_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = control_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    control_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    control_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset = control_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &control_B.b_varargout_2.Layout.Dim[0],
         sizeof(SL_Bus_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    control_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    control_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void matlabCodegenHa_mte535djuslmntn(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void co_emxFreeStruct_rigidBodyJoint(rigidBodyJoint_control_T *pStruct)
{
  control_emxFree_char_T(&pStruct->Type);
  control_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct)
{
  co_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
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
  co_emxFreeStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHan_mte535djuslmnt(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void co_emxInitStruct_rigidBodyJoint(rigidBodyJoint_control_T *pStruct)
{
  control_emxInit_char_T(&pStruct->Type, 2);
  control_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_i_robotics_manip_(i_robotics_manip_internal_Rig_T
  *pStruct)
{
  co_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
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
  co_emxInitStruct_rigidBodyJoint(&pStruct->JointInternal);
}

static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody_m
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = -1.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody_mt
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *control_RigidBody_RigidBody_mte
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *contro_RigidBody_RigidBody_mte5
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *contr_RigidBody_RigidBody_mte53
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = -1.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *cont_RigidBody_RigidBody_mte535
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 8; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = tmp_5[b_kstr];
  }

  obj->JointInternal.JointAxisInternal[0] = 1.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *con_RigidBody_RigidBody_mte535d
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *co_RigidBody_RigidBody_mte535dj
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static j_robotics_manip_internal_Rig_T *c_RigidBody_RigidBody_mte535dju
  (j_robotics_manip_internal_Rig_T *obj)
{
  j_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_1[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] = 0.0;
  }

  obj->JointInternal.JointAxisInternal[0] = 0.0;
  obj->JointInternal.JointAxisInternal[1] = 0.0;
  obj->JointInternal.JointAxisInternal[2] = 0.0;
  return b_obj;
}

static i_robotics_manip_internal_Rig_T *RigidBody_RigidBody_mte535djus
  (i_robotics_manip_internal_Rig_T *obj)
{
  i_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_control_T *switch_expression;
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
  contro_emxEnsureCapacity_char_T(obj->JointInternal.Type, b_kstr);
  for (b_kstr = 0; b_kstr < 5; b_kstr++) {
    obj->JointInternal.Type->data[b_kstr] = tmp_0[b_kstr];
  }

  control_emxInit_char_T(&switch_expression, 2);
  b_kstr = switch_expression->size[0] * switch_expression->size[1];
  switch_expression->size[0] = 1;
  switch_expression->size[1] = obj->JointInternal.Type->size[1];
  contro_emxEnsureCapacity_char_T(switch_expression, b_kstr);
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

  control_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      control_B.msubspace_data[b_kstr] = tmp[b_kstr];
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
      control_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      control_B.msubspace_data[b_kstr] = 0;
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
  contro_emxEnsureCapacity_real_T(obj->JointInternal.MotionSubspace, b_kstr);
  for (b_kstr = 0; b_kstr < 6; b_kstr++) {
    obj->JointInternal.MotionSubspace->data[b_kstr] =
      control_B.msubspace_data[b_kstr];
  }

  return b_obj;
}

static k_robotics_manip_internal_Rig_T *con_RigidBodyTree_RigidBodyTree
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
  obj->Bodies[0] = control_RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = control_RigidBody_RigidBody_m(iobj_1);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = control_RigidBody_RigidBody_mt(iobj_2);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = control_RigidBody_RigidBody_mte(iobj_3);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = contro_RigidBody_RigidBody_mte5(iobj_4);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = contr_RigidBody_RigidBody_mte53(iobj_5);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = cont_RigidBody_RigidBody_mte535(iobj_6);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = con_RigidBody_RigidBody_mte535d(iobj_7);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = co_RigidBody_RigidBody_mte535dj(iobj_8);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = c_RigidBody_RigidBody_mte535dju(iobj_9);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->Gravity[0] = 9.81;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = 0.0;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  RigidBody_RigidBody_mte535djus(&obj->Base);
  return b_obj;
}

// Model step function
void control_step(void)
{
  // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  control_SystemCore_step_m(&control_B.b_varargout_1,
    control_B.b_varargout_2_Data, &control_B.b_varargout_2_Data_SL_Info_Curr,
    &control_B.b_varargout_2_Data_SL_Info_Rece,
    &control_B.b_varargout_2_Layout_DataOffset,
    control_B.b_varargout_2_Layout_Dim,
    &control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &control_B.b_varargout_2_Layout_Dim_SL_I_c);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (control_B.b_varargout_1) {
    for (control_B.i = 0; control_B.i < 14; control_B.i++) {
      control_B.In1_e.Data[control_B.i] =
        control_B.b_varargout_2_Data[control_B.i];
    }

    control_B.In1_e.Data_SL_Info.CurrentLength =
      control_B.b_varargout_2_Data_SL_Info_Curr;
    control_B.In1_e.Data_SL_Info.ReceivedLength =
      control_B.b_varargout_2_Data_SL_Info_Rece;
    control_B.In1_e.Layout.DataOffset =
      control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&control_B.In1_e.Layout.Dim[0], &control_B.b_varargout_2_Layout_Dim[0],
           sizeof(SL_Bus_control_std_msgs_MultiArrayDimension) << 4U);
    control_B.In1_e.Layout.Dim_SL_Info.CurrentLength =
      control_B.b_varargout_2_Layout_Dim_SL_Inf;
    control_B.In1_e.Layout.Dim_SL_Info.ReceivedLength =
      control_B.b_varargout_2_Layout_Dim_SL_I_c;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe1'

  // RateTransition: '<S4>/Rate Transition3'
  if (control_M->Timing.TaskCounters.TID[1] == 0) {
    for (control_B.i = 0; control_B.i < 14; control_B.i++) {
      control_B.RateTransition3[control_B.i] = control_B.In1_e.Data[control_B.i];
    }

    // MATLABSystem: '<S5>/MATLAB System'
    con_GravityTorqueBlock_stepImpl(&control_DW.obj, &control_B.In1_e.Data[0],
      control_B.MATLABSystem);
  }

  // End of RateTransition: '<S4>/Rate Transition3'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S12>/In1'

  control_SystemCore_step(&control_B.b_varargout_1,
    control_B.TmpSignalConversionAtSFunct,
    &control_B.b_varargout_2_Data_SL_Info_Curr,
    &control_B.b_varargout_2_Data_SL_Info_Rece,
    &control_B.b_varargout_2_Layout_DataOffset,
    control_B.b_varargout_2_Layout_Dim,
    &control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &control_B.b_varargout_2_Layout_Dim_SL_I_c);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (control_B.b_varargout_1) {
    for (control_B.i = 0; control_B.i < 7; control_B.i++) {
      control_B.In1_k.Data[control_B.i] =
        control_B.TmpSignalConversionAtSFunct[control_B.i];
    }

    control_B.In1_k.Data_SL_Info.CurrentLength =
      control_B.b_varargout_2_Data_SL_Info_Curr;
    control_B.In1_k.Data_SL_Info.ReceivedLength =
      control_B.b_varargout_2_Data_SL_Info_Rece;
    control_B.In1_k.Layout.DataOffset =
      control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&control_B.In1_k.Layout.Dim[0], &control_B.b_varargout_2_Layout_Dim[0],
           sizeof(SL_Bus_control_std_msgs_MultiArrayDimension) << 4U);
    control_B.In1_k.Layout.Dim_SL_Info.CurrentLength =
      control_B.b_varargout_2_Layout_Dim_SL_Inf;
    control_B.In1_k.Layout.Dim_SL_Info.ReceivedLength =
      control_B.b_varargout_2_Layout_Dim_SL_I_c;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe'

  // RateTransition: '<S4>/Rate Transition2'
  if (control_M->Timing.TaskCounters.TID[1] == 0) {
    for (control_B.i = 0; control_B.i < 7; control_B.i++) {
      control_B.RateTransition2[control_B.i] = control_B.In1_k.Data[control_B.i];
    }
  }

  // End of RateTransition: '<S4>/Rate Transition2'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe2'
  // MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  control_SystemCore_step_mt(&control_B.b_varargout_1,
    control_B.TmpSignalConversionAtSFunct,
    &control_B.b_varargout_2_Data_SL_Info_Curr,
    &control_B.b_varargout_2_Data_SL_Info_Rece,
    &control_B.b_varargout_2_Layout_DataOffset,
    control_B.b_varargout_2_Layout_Dim,
    &control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &control_B.b_varargout_2_Layout_Dim_SL_I_c);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (control_B.b_varargout_1) {
    for (control_B.i = 0; control_B.i < 7; control_B.i++) {
      control_B.In1.Data[control_B.i] =
        control_B.TmpSignalConversionAtSFunct[control_B.i];
    }

    control_B.In1.Data_SL_Info.CurrentLength =
      control_B.b_varargout_2_Data_SL_Info_Curr;
    control_B.In1.Data_SL_Info.ReceivedLength =
      control_B.b_varargout_2_Data_SL_Info_Rece;
    control_B.In1.Layout.DataOffset = control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&control_B.In1.Layout.Dim[0], &control_B.b_varargout_2_Layout_Dim[0],
           sizeof(SL_Bus_control_std_msgs_MultiArrayDimension) << 4U);
    control_B.In1.Layout.Dim_SL_Info.CurrentLength =
      control_B.b_varargout_2_Layout_Dim_SL_Inf;
    control_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      control_B.b_varargout_2_Layout_Dim_SL_I_c;
  }

  // End of MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe2'

  // RateTransition: '<S4>/Rate Transition1' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function1'

  if (control_M->Timing.TaskCounters.TID[1] == 0) {
    // SignalConversion generated from: '<S6>/ SFunction ' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function1'
    //   MATLABSystem: '<S2>/Get Parameter'
    //   MATLABSystem: '<S2>/Get Parameter1'
    //   MATLABSystem: '<S2>/Get Parameter2'
    //   MATLABSystem: '<S2>/Get Parameter3'
    //   MATLABSystem: '<S2>/Get Parameter4'
    //   MATLABSystem: '<S2>/Get Parameter5'
    //   MATLABSystem: '<S2>/Get Parameter6'

    ParamGet_control_368.get_parameter(&control_B.TmpSignalConversionAtSFunct[0]);
    ParamGet_control_370.get_parameter(&control_B.TmpSignalConversionAtSFunct[1]);
    ParamGet_control_372.get_parameter(&control_B.TmpSignalConversionAtSFunct[2]);
    ParamGet_control_374.get_parameter(&control_B.TmpSignalConversionAtSFunct[3]);
    ParamGet_control_376.get_parameter(&control_B.TmpSignalConversionAtSFunct[4]);
    ParamGet_control_378.get_parameter(&control_B.TmpSignalConversionAtSFunct[5]);
    ParamGet_control_380.get_parameter(&control_B.TmpSignalConversionAtSFunct[6]);

    // SignalConversion generated from: '<S6>/ SFunction ' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function1'
    //   MATLABSystem: '<S2>/Get Parameter10'
    //   MATLABSystem: '<S2>/Get Parameter11'
    //   MATLABSystem: '<S2>/Get Parameter12'
    //   MATLABSystem: '<S2>/Get Parameter13'
    //   MATLABSystem: '<S2>/Get Parameter7'
    //   MATLABSystem: '<S2>/Get Parameter8'
    //   MATLABSystem: '<S2>/Get Parameter9'

    ParamGet_control_400.get_parameter(&control_B.TmpSignalConversionAtSFun_a[0]);
    ParamGet_control_401.get_parameter(&control_B.TmpSignalConversionAtSFun_a[1]);
    ParamGet_control_402.get_parameter(&control_B.TmpSignalConversionAtSFun_a[2]);
    ParamGet_control_403.get_parameter(&control_B.TmpSignalConversionAtSFun_a[3]);
    ParamGet_control_404.get_parameter(&control_B.TmpSignalConversionAtSFun_a[4]);
    ParamGet_control_405.get_parameter(&control_B.TmpSignalConversionAtSFun_a[5]);
    ParamGet_control_406.get_parameter(&control_B.TmpSignalConversionAtSFun_a[6]);
    for (control_B.i = 0; control_B.i < 7; control_B.i++) {
      // MATLAB Function: '<S1>/MATLAB Function1'
      control_B.rtb_torque_g = (static_cast<real32_T>
        ((control_B.RateTransition3[control_B.i] - static_cast<real32_T>
          (control_B.RateTransition2[control_B.i])) *
         control_B.TmpSignalConversionAtSFunct[control_B.i]) +
        control_B.MATLABSystem[control_B.i]) + static_cast<real32_T>
        ((control_B.RateTransition3[control_B.i + 7] - static_cast<real32_T>
          (control_B.In1.Data[control_B.i])) *
         control_B.TmpSignalConversionAtSFun_a[control_B.i]);
      if (control_B.rtb_torque_g > 2.5) {
        control_B.rtb_torque_g = 2.5;
      } else {
        if (control_B.rtb_torque_g < -2.5) {
          control_B.rtb_torque_g = -2.5;
        }
      }

      // RateTransition: '<S3>/Rate Transition1'
      control_B.RateTransition1[control_B.i] =
        control_DW.RateTransition1_Buffer0[control_B.i];
      control_B.torque[control_B.i] = control_B.rtb_torque_g;
    }
  }

  // End of RateTransition: '<S4>/Rate Transition1'

  // BusAssignment: '<S3>/Bus Assignment1' incorporates:
  //   Constant: '<S3>/Constant'
  //   Constant: '<S7>/Constant'

  control_B.BusAssignment1 = control_P.Constant_Value_e;
  for (control_B.i = 0; control_B.i < 7; control_B.i++) {
    control_B.BusAssignment1.Data[control_B.i] =
      control_B.RateTransition1[control_B.i];
  }

  control_B.BusAssignment1.Data_SL_Info.CurrentLength =
    control_P.Constant_Value_d;
  control_B.BusAssignment1.Data_SL_Info.ReceivedLength =
    control_P.Constant_Value_d;

  // End of BusAssignment: '<S3>/Bus Assignment1'

  // Outputs for Atomic SubSystem: '<S3>/Publish1'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_control_304.publish(&control_B.BusAssignment1);

  // End of Outputs for SubSystem: '<S3>/Publish1'

  // Update for RateTransition: '<S3>/Rate Transition1'
  if (control_M->Timing.TaskCounters.TID[1] == 0) {
    for (control_B.i = 0; control_B.i < 7; control_B.i++) {
      control_DW.RateTransition1_Buffer0[control_B.i] =
        control_B.torque[control_B.i];
    }
  }

  // End of Update for RateTransition: '<S3>/Rate Transition1'
  rate_scheduler();
}

// Model initialize function
void control_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));

  {
    int32_T i;
    static const char_T tmp[16] = { '/', 'g', 'o', 'a', 'l', '_', 't', 'r', 'a',
      'j', 'e', 'c', 't', 'o', 'r', 'y' };

    static const char_T tmp_0[16] = { '/', 'j', 'o', 'i', 'n', 't', '_', 'p',
      'o', 's', 'i', 't', 'i', 'o', 'n', 's' };

    static const char_T tmp_1[13] = { '/', 'j', 'o', 'i', 'n', 't', '_', 's',
      'p', 'e', 'e', 'd', 's' };

    static const char_T tmp_2[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '1' };

    static const char_T tmp_3[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '2' };

    static const char_T tmp_4[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '3' };

    static const char_T tmp_5[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '4' };

    static const char_T tmp_6[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '5' };

    static const char_T tmp_7[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '6' };

    static const char_T tmp_8[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '7' };

    static const char_T tmp_9[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '1' };

    static const char_T tmp_a[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '2' };

    static const char_T tmp_b[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '3' };

    static const char_T tmp_c[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '4' };

    static const char_T tmp_d[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '5' };

    static const char_T tmp_e[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '6' };

    static const char_T tmp_f[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '7' };

    static const char_T tmp_g[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    // Start for Atomic SubSystem: '<S4>/Subscribe1'
    // Start for MATLABSystem: '<S10>/SourceBlock'
    control_DW.obj_gx.matlabCodegenIsDeleted = false;
    control_DW.obj_gx.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      control_B.cv[i] = tmp[i];
    }

    control_B.cv[16] = '\x00';
    Sub_control_318.createSubscriber(control_B.cv, 1);
    control_DW.obj_gx.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe1'
    emxInitStruct_robotics_slmanip_(&control_DW.obj);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_0);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_19);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_18);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_17);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_16);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_15);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_14);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_13);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_12);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_11);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_10);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_9);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_8);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_7);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_6);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_5);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_4);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_3);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_2);
    emxInitStruct_j_robotics_manip_(&control_DW.gobj_1);

    // Start for MATLABSystem: '<S5>/MATLAB System'
    control_DW.obj.isInitialized = 0;
    control_DW.obj.isInitialized = 1;
    con_RigidBodyTree_RigidBodyTree(&control_DW.obj.TreeInternal,
      &control_DW.gobj_0, &control_DW.gobj_19, &control_DW.gobj_18,
      &control_DW.gobj_17, &control_DW.gobj_16, &control_DW.gobj_15,
      &control_DW.gobj_14, &control_DW.gobj_13, &control_DW.gobj_12,
      &control_DW.gobj_11);

    // Start for Atomic SubSystem: '<S4>/Subscribe'
    // Start for MATLABSystem: '<S9>/SourceBlock'
    control_DW.obj_m.matlabCodegenIsDeleted = false;
    control_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      control_B.cv[i] = tmp_0[i];
    }

    control_B.cv[16] = '\x00';
    Sub_control_299.createSubscriber(control_B.cv, 1);
    control_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe'

    // Start for Atomic SubSystem: '<S4>/Subscribe2'
    // Start for MATLABSystem: '<S11>/SourceBlock'
    control_DW.obj_a.matlabCodegenIsDeleted = false;
    control_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      control_B.cv2[i] = tmp_1[i];
    }

    control_B.cv2[13] = '\x00';
    Sub_control_638.createSubscriber(control_B.cv2, 1);
    control_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of Start for SubSystem: '<S4>/Subscribe2'

    // Start for MATLABSystem: '<S2>/Get Parameter'
    control_DW.obj_l.matlabCodegenIsDeleted = false;
    control_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_2[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_368.initialize(control_B.cv3);
    ParamGet_control_368.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_368.set_initial_value(0.0);
    control_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter'

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    control_DW.obj_o.matlabCodegenIsDeleted = false;
    control_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_3[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_370.initialize(control_B.cv3);
    ParamGet_control_370.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_370.set_initial_value(0.0);
    control_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter1'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    control_DW.obj_o1.matlabCodegenIsDeleted = false;
    control_DW.obj_o1.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_4[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_372.initialize(control_B.cv3);
    ParamGet_control_372.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_372.set_initial_value(0.0);
    control_DW.obj_o1.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter2'

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    control_DW.obj_k.matlabCodegenIsDeleted = false;
    control_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_5[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_374.initialize(control_B.cv3);
    ParamGet_control_374.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_374.set_initial_value(0.0);
    control_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter3'

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    control_DW.obj_d.matlabCodegenIsDeleted = false;
    control_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_6[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_376.initialize(control_B.cv3);
    ParamGet_control_376.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_376.set_initial_value(0.0);
    control_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter4'

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    control_DW.obj_i.matlabCodegenIsDeleted = false;
    control_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_7[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_378.initialize(control_B.cv3);
    ParamGet_control_378.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_378.set_initial_value(0.0);
    control_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter5'

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    control_DW.obj_f.matlabCodegenIsDeleted = false;
    control_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_8[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_380.initialize(control_B.cv3);
    ParamGet_control_380.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_380.set_initial_value(0.0);
    control_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter6'

    // Start for MATLABSystem: '<S2>/Get Parameter7'
    control_DW.obj_h.matlabCodegenIsDeleted = false;
    control_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_9[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_400.initialize(control_B.cv3);
    ParamGet_control_400.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_400.set_initial_value(0.0);
    control_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter7'

    // Start for MATLABSystem: '<S2>/Get Parameter8'
    control_DW.obj_og.matlabCodegenIsDeleted = false;
    control_DW.obj_og.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_a[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_401.initialize(control_B.cv3);
    ParamGet_control_401.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_401.set_initial_value(0.0);
    control_DW.obj_og.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter8'

    // Start for MATLABSystem: '<S2>/Get Parameter9'
    control_DW.obj_fy.matlabCodegenIsDeleted = false;
    control_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_b[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_402.initialize(control_B.cv3);
    ParamGet_control_402.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_402.set_initial_value(0.0);
    control_DW.obj_fy.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter9'

    // Start for MATLABSystem: '<S2>/Get Parameter10'
    control_DW.obj_if.matlabCodegenIsDeleted = false;
    control_DW.obj_if.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_c[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_403.initialize(control_B.cv3);
    ParamGet_control_403.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_403.set_initial_value(0.0);
    control_DW.obj_if.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter10'

    // Start for MATLABSystem: '<S2>/Get Parameter11'
    control_DW.obj_g.matlabCodegenIsDeleted = false;
    control_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_d[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_404.initialize(control_B.cv3);
    ParamGet_control_404.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_404.set_initial_value(0.0);
    control_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter11'

    // Start for MATLABSystem: '<S2>/Get Parameter12'
    control_DW.obj_c.matlabCodegenIsDeleted = false;
    control_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_e[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_405.initialize(control_B.cv3);
    ParamGet_control_405.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_405.set_initial_value(0.0);
    control_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter12'

    // Start for MATLABSystem: '<S2>/Get Parameter13'
    control_DW.obj_p.matlabCodegenIsDeleted = false;
    control_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      control_B.cv3[i] = tmp_f[i];
    }

    control_B.cv3[11] = '\x00';
    ParamGet_control_406.initialize(control_B.cv3);
    ParamGet_control_406.initialize_error_codes(0, 1, 2, 3);
    ParamGet_control_406.set_initial_value(0.0);
    control_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter13'

    // Start for RateTransition: '<S3>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      control_B.RateTransition1[i] = control_P.RateTransition1_InitialConditio;
    }

    // End of Start for RateTransition: '<S3>/Rate Transition1'

    // Start for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    control_DW.obj_d1.matlabCodegenIsDeleted = false;
    control_DW.obj_d1.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      control_B.cv1[i] = tmp_g[i];
    }

    control_B.cv1[14] = '\x00';
    Pub_control_304.createPublisher(control_B.cv1, 1);
    control_DW.obj_d1.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of Start for SubSystem: '<S3>/Publish1'

    // InitializeConditions for RateTransition: '<S3>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      control_DW.RateTransition1_Buffer0[i] =
        control_P.RateTransition1_InitialConditio;
    }

    // End of InitializeConditions for RateTransition: '<S3>/Rate Transition1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1'
    control_B.In1_e = control_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    control_B.In1_k = control_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1'
    control_B.In1 = control_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe2'
  }
}

// Model terminate function
void control_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHa_mte535djuslmntn(&control_DW.obj_gx);

  // End of Terminate for SubSystem: '<S4>/Subscribe1'
  emxFreeStruct_robotics_slmanip_(&control_DW.obj);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_0);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_19);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_18);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_17);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_16);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_15);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_14);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_13);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_12);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_11);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_10);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_9);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_8);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_7);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_6);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_5);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_4);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_3);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_2);
  emxFreeStruct_j_robotics_manip_(&control_DW.gobj_1);

  // Terminate for Atomic SubSystem: '<S4>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHa_mte535djuslmntn(&control_DW.obj_m);

  // End of Terminate for SubSystem: '<S4>/Subscribe'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe2'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  matlabCodegenHa_mte535djuslmntn(&control_DW.obj_a);

  // End of Terminate for SubSystem: '<S4>/Subscribe2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_l);

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_o);

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_o1);

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_k);

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_d);

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_i);

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_f);

  // Terminate for MATLABSystem: '<S2>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_h);

  // Terminate for MATLABSystem: '<S2>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_og);

  // Terminate for MATLABSystem: '<S2>/Get Parameter9'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_fy);

  // Terminate for MATLABSystem: '<S2>/Get Parameter10'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_if);

  // Terminate for MATLABSystem: '<S2>/Get Parameter11'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_g);

  // Terminate for MATLABSystem: '<S2>/Get Parameter12'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_c);

  // Terminate for MATLABSystem: '<S2>/Get Parameter13'
  matlabCodegenHandle_matlabCodeg(&control_DW.obj_p);

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHan_mte535djuslmnt(&control_DW.obj_d1);

  // End of Terminate for SubSystem: '<S3>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
