//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: katana_control.cpp
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
#include "katana_control.h"
#include "katana_control_private.h"

// Block signals (default storage)
B_katana_control_T katana_control_B;

// Block states (default storage)
DW_katana_control_T katana_control_DW;

// Real-time model
RT_MODEL_katana_control_T katana_control_M_ = RT_MODEL_katana_control_T();
RT_MODEL_katana_control_T *const katana_control_M = &katana_control_M_;

// Forward declaration for local functions
static void katana_contro_SystemCore_step_f(boolean_T *varargout_1, real32_T
  varargout_2_Data[14], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void katana_control_emxInit_real_T(emxArray_real_T_katana_contro_T
  **pEmxArray, int32_T numDimensions);
static void katana_emxEnsureCapacity_real_T(emxArray_real_T_katana_contro_T
  *emxArray, int32_T oldNumel);
static void katana_cont_emxInit_f_cell_wrap(emxArray_f_cell_wrap_katana_c_T
  **pEmxArray, int32_T numDimensions);
static void k_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_katana_c_T
  *emxArray, int32_T oldNumel);
static void katana_control_eye(real_T b_I[36]);
static void katana_control_emxInit_char_T(emxArray_char_T_katana_contro_T
  **pEmxArray, int32_T numDimensions);
static void katana_emxEnsureCapacity_char_T(emxArray_char_T_katana_contro_T
  *emxArray, int32_T oldNumel);
static void ka_rigidBodyJoint_get_JointAxis(const
  c_rigidBodyJoint_katana_contr_T *obj, real_T ax[3]);
static void katana_control_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_katana_contr_T *obj, real_T T[16]);
static void katana_control_emxFree_char_T(emxArray_char_T_katana_contro_T
  **pEmxArray);
static void katana_control_emxFree_real_T(emxArray_real_T_katana_contro_T
  **pEmxArray);
static void katana_cont_emxFree_f_cell_wrap(emxArray_f_cell_wrap_katana_c_T
  **pEmxArray);
static boolean_T katana_control_strcmp(const emxArray_char_T_katana_contro_T *a);
static void kat_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real32_T q[7], real32_T jointTorq[7]);
static void katana_control_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void matlabCodegenHandle_ma_fvdnt1up(ros_slros_internal_block_Subs_T *obj);
static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_contr_T
  *pStruct);
static void emxFreeStruct_s_robotics_manip_(s_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_t_robotics_manip_(t_robotics_manip_internal_Rig_T
  *pStruct);
static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxFreeStruct_r_robotics_manip_(r_robotics_manip_internal_Rig_T
  *pStruct);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_GetP_T *obj);
static void matlabCodegenHandle_mat_fvdnt1u(ros_slros_internal_block_Publ_T *obj);
static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_contr_T
  *pStruct);
static void emxInitStruct_s_robotics_manip_(s_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_t_robotics_manip_(t_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_r_robotics_manip_(r_robotics_manip_internal_Rig_T
  *pStruct);
static r_robotics_manip_internal_Rig_T *katana_cont_RigidBody_RigidBody
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana_co_RigidBody_RigidBody_f
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana_c_RigidBody_RigidBody_fv
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana__RigidBody_RigidBody_fvd
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katana_RigidBody_RigidBody_fvdn
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *katan_RigidBody_RigidBody_fvdnt
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *kata_RigidBody_RigidBody_fvdnt1
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *kat_RigidBody_RigidBody_fvdnt1u
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *ka_RigidBody_RigidBody_fvdnt1up
  (r_robotics_manip_internal_Rig_T *obj);
static r_robotics_manip_internal_Rig_T *k_RigidBody_RigidBody_fvdnt1upy
  (r_robotics_manip_internal_Rig_T *obj);
static s_robotics_manip_internal_Rig_T *RigidBody_RigidBody_fvdnt1upyz
  (s_robotics_manip_internal_Rig_T *obj);
static t_robotics_manip_internal_Rig_T *kat_RigidBodyTree_RigidBodyTree
  (t_robotics_manip_internal_Rig_T *obj, r_robotics_manip_internal_Rig_T *iobj_0,
   r_robotics_manip_internal_Rig_T *iobj_1, r_robotics_manip_internal_Rig_T
   *iobj_2, r_robotics_manip_internal_Rig_T *iobj_3,
   r_robotics_manip_internal_Rig_T *iobj_4, r_robotics_manip_internal_Rig_T
   *iobj_5, r_robotics_manip_internal_Rig_T *iobj_6,
   r_robotics_manip_internal_Rig_T *iobj_7, r_robotics_manip_internal_Rig_T
   *iobj_8, r_robotics_manip_internal_Rig_T *iobj_9);
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

  (katana_control_M->Timing.TaskCounters.TID[1])++;
  if ((katana_control_M->Timing.TaskCounters.TID[1]) > 249) {// Sample time: [1.0s, 0.0s] 
    katana_control_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static void katana_contro_SystemCore_step_f(boolean_T *varargout_1, real32_T
  varargout_2_Data[14], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_katana_control_332.getLatestMessage
    (&katana_control_B.b_varargout_2_m);
  for (i = 0; i < 14; i++) {
    varargout_2_Data[i] = katana_control_B.b_varargout_2_m.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    katana_control_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    katana_control_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    katana_control_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0],
         &katana_control_B.b_varargout_2_m.Layout.Dim[0], sizeof
         (SL_Bus_katana_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    katana_control_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    katana_control_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void katana_control_emxInit_real_T(emxArray_real_T_katana_contro_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_katana_contro_T *emxArray;
  *pEmxArray = (emxArray_real_T_katana_contro_T *)malloc(sizeof
    (emxArray_real_T_katana_contro_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (katana_control_B.i_bj = 0; katana_control_B.i_bj < numDimensions;
       katana_control_B.i_bj++) {
    emxArray->size[katana_control_B.i_bj] = 0;
  }
}

static void katana_emxEnsureCapacity_real_T(emxArray_real_T_katana_contro_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  katana_control_B.newNumel = 1;
  for (katana_control_B.i_n = 0; katana_control_B.i_n < emxArray->numDimensions;
       katana_control_B.i_n++) {
    katana_control_B.newNumel *= emxArray->size[katana_control_B.i_n];
  }

  if (katana_control_B.newNumel > emxArray->allocatedSize) {
    katana_control_B.i_n = emxArray->allocatedSize;
    if (katana_control_B.i_n < 16) {
      katana_control_B.i_n = 16;
    }

    while (katana_control_B.i_n < katana_control_B.newNumel) {
      if (katana_control_B.i_n > 1073741823) {
        katana_control_B.i_n = MAX_int32_T;
      } else {
        katana_control_B.i_n <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(katana_control_B.i_n), sizeof(real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = katana_control_B.i_n;
    emxArray->canFreeData = true;
  }
}

static void katana_cont_emxInit_f_cell_wrap(emxArray_f_cell_wrap_katana_c_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_katana_c_T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_katana_c_T *)malloc(sizeof
    (emxArray_f_cell_wrap_katana_c_T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_katana_control_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (katana_control_B.i_f = 0; katana_control_B.i_f < numDimensions;
       katana_control_B.i_f++) {
    emxArray->size[katana_control_B.i_f] = 0;
  }
}

static void k_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_katana_c_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  katana_control_B.newNumel_h = 1;
  for (katana_control_B.i_b = 0; katana_control_B.i_b < emxArray->numDimensions;
       katana_control_B.i_b++) {
    katana_control_B.newNumel_h *= emxArray->size[katana_control_B.i_b];
  }

  if (katana_control_B.newNumel_h > emxArray->allocatedSize) {
    katana_control_B.i_b = emxArray->allocatedSize;
    if (katana_control_B.i_b < 16) {
      katana_control_B.i_b = 16;
    }

    while (katana_control_B.i_b < katana_control_B.newNumel_h) {
      if (katana_control_B.i_b > 1073741823) {
        katana_control_B.i_b = MAX_int32_T;
      } else {
        katana_control_B.i_b <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(katana_control_B.i_b), sizeof
                     (f_cell_wrap_katana_control_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_katana_control_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_katana_control_T *)newData;
    emxArray->allocatedSize = katana_control_B.i_b;
    emxArray->canFreeData = true;
  }
}

static void katana_control_eye(real_T b_I[36])
{
  int32_T b_k;
  memset(&b_I[0], 0, 36U * sizeof(real_T));
  for (b_k = 0; b_k < 6; b_k++) {
    b_I[b_k + 6 * b_k] = 1.0;
  }
}

static void katana_control_emxInit_char_T(emxArray_char_T_katana_contro_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T_katana_contro_T *emxArray;
  *pEmxArray = (emxArray_char_T_katana_contro_T *)malloc(sizeof
    (emxArray_char_T_katana_contro_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (katana_control_B.i_j = 0; katana_control_B.i_j < numDimensions;
       katana_control_B.i_j++) {
    emxArray->size[katana_control_B.i_j] = 0;
  }
}

static void katana_emxEnsureCapacity_char_T(emxArray_char_T_katana_contro_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  katana_control_B.newNumel_b = 1;
  for (katana_control_B.i_l = 0; katana_control_B.i_l < emxArray->numDimensions;
       katana_control_B.i_l++) {
    katana_control_B.newNumel_b *= emxArray->size[katana_control_B.i_l];
  }

  if (katana_control_B.newNumel_b > emxArray->allocatedSize) {
    katana_control_B.i_l = emxArray->allocatedSize;
    if (katana_control_B.i_l < 16) {
      katana_control_B.i_l = 16;
    }

    while (katana_control_B.i_l < katana_control_B.newNumel_b) {
      if (katana_control_B.i_l > 1073741823) {
        katana_control_B.i_l = MAX_int32_T;
      } else {
        katana_control_B.i_l <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(katana_control_B.i_l), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = katana_control_B.i_l;
    emxArray->canFreeData = true;
  }
}

static void ka_rigidBodyJoint_get_JointAxis(const
  c_rigidBodyJoint_katana_contr_T *obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (katana_control_B.b_kstr_b = 0; katana_control_B.b_kstr_b < 8;
       katana_control_B.b_kstr_b++) {
    katana_control_B.b_m[katana_control_B.b_kstr_b] =
      tmp[katana_control_B.b_kstr_b];
  }

  katana_control_B.b_bool_i = false;
  if (obj->Type->size[1] == 8) {
    katana_control_B.b_kstr_b = 1;
    do {
      exitg1 = 0;
      if (katana_control_B.b_kstr_b - 1 < 8) {
        katana_control_B.kstr_o = katana_control_B.b_kstr_b - 1;
        if (obj->Type->data[katana_control_B.kstr_o] !=
            katana_control_B.b_m[katana_control_B.kstr_o]) {
          exitg1 = 1;
        } else {
          katana_control_B.b_kstr_b++;
        }
      } else {
        katana_control_B.b_bool_i = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (katana_control_B.b_bool_i) {
    guard1 = true;
  } else {
    for (katana_control_B.b_kstr_b = 0; katana_control_B.b_kstr_b < 9;
         katana_control_B.b_kstr_b++) {
      katana_control_B.b_f[katana_control_B.b_kstr_b] =
        tmp_0[katana_control_B.b_kstr_b];
    }

    katana_control_B.b_bool_i = false;
    if (obj->Type->size[1] == 9) {
      katana_control_B.b_kstr_b = 1;
      do {
        exitg1 = 0;
        if (katana_control_B.b_kstr_b - 1 < 9) {
          katana_control_B.kstr_o = katana_control_B.b_kstr_b - 1;
          if (obj->Type->data[katana_control_B.kstr_o] !=
              katana_control_B.b_f[katana_control_B.kstr_o]) {
            exitg1 = 1;
          } else {
            katana_control_B.b_kstr_b++;
          }
        } else {
          katana_control_B.b_bool_i = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_control_B.b_bool_i) {
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

static void katana_control_cat(real_T varargin_1, real_T varargin_2, real_T
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

static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_katana_contr_T *obj, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (katana_control_B.b_kstr_d = 0; katana_control_B.b_kstr_d < 5;
       katana_control_B.b_kstr_d++) {
    katana_control_B.b_gu[katana_control_B.b_kstr_d] =
      tmp[katana_control_B.b_kstr_d];
  }

  katana_control_B.b_bool_n = false;
  if (obj->Type->size[1] == 5) {
    katana_control_B.b_kstr_d = 1;
    do {
      exitg1 = 0;
      if (katana_control_B.b_kstr_d - 1 < 5) {
        katana_control_B.kstr = katana_control_B.b_kstr_d - 1;
        if (obj->Type->data[katana_control_B.kstr] !=
            katana_control_B.b_gu[katana_control_B.kstr]) {
          exitg1 = 1;
        } else {
          katana_control_B.b_kstr_d++;
        }
      } else {
        katana_control_B.b_bool_n = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (katana_control_B.b_bool_n) {
    katana_control_B.b_kstr_d = 0;
  } else {
    for (katana_control_B.b_kstr_d = 0; katana_control_B.b_kstr_d < 8;
         katana_control_B.b_kstr_d++) {
      katana_control_B.b_g1[katana_control_B.b_kstr_d] =
        tmp_0[katana_control_B.b_kstr_d];
    }

    katana_control_B.b_bool_n = false;
    if (obj->Type->size[1] == 8) {
      katana_control_B.b_kstr_d = 1;
      do {
        exitg1 = 0;
        if (katana_control_B.b_kstr_d - 1 < 8) {
          katana_control_B.kstr = katana_control_B.b_kstr_d - 1;
          if (obj->Type->data[katana_control_B.kstr] !=
              katana_control_B.b_g1[katana_control_B.kstr]) {
            exitg1 = 1;
          } else {
            katana_control_B.b_kstr_d++;
          }
        } else {
          katana_control_B.b_bool_n = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (katana_control_B.b_bool_n) {
      katana_control_B.b_kstr_d = 1;
    } else {
      katana_control_B.b_kstr_d = -1;
    }
  }

  switch (katana_control_B.b_kstr_d) {
   case 0:
    memset(&katana_control_B.TJ[0], 0, sizeof(real_T) << 4U);
    katana_control_B.TJ[0] = 1.0;
    katana_control_B.TJ[5] = 1.0;
    katana_control_B.TJ[10] = 1.0;
    katana_control_B.TJ[15] = 1.0;
    break;

   case 1:
    ka_rigidBodyJoint_get_JointAxis(obj, katana_control_B.v_c);
    katana_control_B.axang_idx_0 = katana_control_B.v_c[0];
    katana_control_B.axang_idx_1 = katana_control_B.v_c[1];
    katana_control_B.axang_idx_2 = katana_control_B.v_c[2];
    katana_control_B.b_j = 1.0 / sqrt((katana_control_B.axang_idx_0 *
      katana_control_B.axang_idx_0 + katana_control_B.axang_idx_1 *
      katana_control_B.axang_idx_1) + katana_control_B.axang_idx_2 *
      katana_control_B.axang_idx_2);
    katana_control_B.v_c[0] = katana_control_B.axang_idx_0 *
      katana_control_B.b_j;
    katana_control_B.v_c[1] = katana_control_B.axang_idx_1 *
      katana_control_B.b_j;
    katana_control_B.v_c[2] = katana_control_B.axang_idx_2 *
      katana_control_B.b_j;
    katana_control_B.axang_idx_0 = katana_control_B.v_c[1] *
      katana_control_B.v_c[0] * 0.0;
    katana_control_B.axang_idx_1 = katana_control_B.v_c[2] *
      katana_control_B.v_c[0] * 0.0;
    katana_control_B.axang_idx_2 = katana_control_B.v_c[2] *
      katana_control_B.v_c[1] * 0.0;
    katana_control_cat(katana_control_B.v_c[0] * katana_control_B.v_c[0] * 0.0 +
                       1.0, katana_control_B.axang_idx_0 - katana_control_B.v_c
                       [2] * 0.0, katana_control_B.axang_idx_1 +
                       katana_control_B.v_c[1] * 0.0,
                       katana_control_B.axang_idx_0 + katana_control_B.v_c[2] *
                       0.0, katana_control_B.v_c[1] * katana_control_B.v_c[1] *
                       0.0 + 1.0, katana_control_B.axang_idx_2 -
                       katana_control_B.v_c[0] * 0.0,
                       katana_control_B.axang_idx_1 - katana_control_B.v_c[1] *
                       0.0, katana_control_B.axang_idx_2 + katana_control_B.v_c
                       [0] * 0.0, katana_control_B.v_c[2] *
                       katana_control_B.v_c[2] * 0.0 + 1.0,
                       katana_control_B.tempR_b);
    for (katana_control_B.b_kstr_d = 0; katana_control_B.b_kstr_d < 3;
         katana_control_B.b_kstr_d++) {
      katana_control_B.kstr = katana_control_B.b_kstr_d + 1;
      katana_control_B.R_c[katana_control_B.kstr - 1] =
        katana_control_B.tempR_b[(katana_control_B.kstr - 1) * 3];
      katana_control_B.kstr = katana_control_B.b_kstr_d + 1;
      katana_control_B.R_c[katana_control_B.kstr + 2] =
        katana_control_B.tempR_b[(katana_control_B.kstr - 1) * 3 + 1];
      katana_control_B.kstr = katana_control_B.b_kstr_d + 1;
      katana_control_B.R_c[katana_control_B.kstr + 5] =
        katana_control_B.tempR_b[(katana_control_B.kstr - 1) * 3 + 2];
    }

    memset(&katana_control_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (katana_control_B.b_kstr_d = 0; katana_control_B.b_kstr_d < 3;
         katana_control_B.b_kstr_d++) {
      katana_control_B.kstr = katana_control_B.b_kstr_d << 2;
      katana_control_B.TJ[katana_control_B.kstr] = katana_control_B.R_c[3 *
        katana_control_B.b_kstr_d];
      katana_control_B.TJ[katana_control_B.kstr + 1] = katana_control_B.R_c[3 *
        katana_control_B.b_kstr_d + 1];
      katana_control_B.TJ[katana_control_B.kstr + 2] = katana_control_B.R_c[3 *
        katana_control_B.b_kstr_d + 2];
    }

    katana_control_B.TJ[15] = 1.0;
    break;

   default:
    ka_rigidBodyJoint_get_JointAxis(obj, katana_control_B.v_c);
    memset(&katana_control_B.tempR_b[0], 0, 9U * sizeof(real_T));
    katana_control_B.tempR_b[0] = 1.0;
    katana_control_B.tempR_b[4] = 1.0;
    katana_control_B.tempR_b[8] = 1.0;
    for (katana_control_B.b_kstr_d = 0; katana_control_B.b_kstr_d < 3;
         katana_control_B.b_kstr_d++) {
      katana_control_B.kstr = katana_control_B.b_kstr_d << 2;
      katana_control_B.TJ[katana_control_B.kstr] = katana_control_B.tempR_b[3 *
        katana_control_B.b_kstr_d];
      katana_control_B.TJ[katana_control_B.kstr + 1] = katana_control_B.tempR_b
        [3 * katana_control_B.b_kstr_d + 1];
      katana_control_B.TJ[katana_control_B.kstr + 2] = katana_control_B.tempR_b
        [3 * katana_control_B.b_kstr_d + 2];
      katana_control_B.TJ[katana_control_B.b_kstr_d + 12] =
        katana_control_B.v_c[katana_control_B.b_kstr_d] * 0.0;
    }

    katana_control_B.TJ[3] = 0.0;
    katana_control_B.TJ[7] = 0.0;
    katana_control_B.TJ[11] = 0.0;
    katana_control_B.TJ[15] = 1.0;
    break;
  }

  for (katana_control_B.b_kstr_d = 0; katana_control_B.b_kstr_d < 4;
       katana_control_B.b_kstr_d++) {
    for (katana_control_B.kstr = 0; katana_control_B.kstr < 4;
         katana_control_B.kstr++) {
      katana_control_B.obj_tmp_tmp = katana_control_B.kstr << 2;
      katana_control_B.obj_tmp_l = katana_control_B.b_kstr_d +
        katana_control_B.obj_tmp_tmp;
      katana_control_B.obj[katana_control_B.obj_tmp_l] = 0.0;
      katana_control_B.obj[katana_control_B.obj_tmp_l] +=
        katana_control_B.TJ[katana_control_B.obj_tmp_tmp] *
        obj->JointToParentTransform[katana_control_B.b_kstr_d];
      katana_control_B.obj[katana_control_B.obj_tmp_l] +=
        katana_control_B.TJ[katana_control_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[katana_control_B.b_kstr_d + 4];
      katana_control_B.obj[katana_control_B.obj_tmp_l] +=
        katana_control_B.TJ[katana_control_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[katana_control_B.b_kstr_d + 8];
      katana_control_B.obj[katana_control_B.obj_tmp_l] +=
        katana_control_B.TJ[katana_control_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[katana_control_B.b_kstr_d + 12];
    }

    for (katana_control_B.kstr = 0; katana_control_B.kstr < 4;
         katana_control_B.kstr++) {
      katana_control_B.obj_tmp_tmp = katana_control_B.kstr << 2;
      katana_control_B.obj_tmp_l = katana_control_B.b_kstr_d +
        katana_control_B.obj_tmp_tmp;
      T[katana_control_B.obj_tmp_l] = 0.0;
      T[katana_control_B.obj_tmp_l] += obj->
        ChildToJointTransform[katana_control_B.obj_tmp_tmp] *
        katana_control_B.obj[katana_control_B.b_kstr_d];
      T[katana_control_B.obj_tmp_l] += obj->
        ChildToJointTransform[katana_control_B.obj_tmp_tmp + 1] *
        katana_control_B.obj[katana_control_B.b_kstr_d + 4];
      T[katana_control_B.obj_tmp_l] += obj->
        ChildToJointTransform[katana_control_B.obj_tmp_tmp + 2] *
        katana_control_B.obj[katana_control_B.b_kstr_d + 8];
      T[katana_control_B.obj_tmp_l] += obj->
        ChildToJointTransform[katana_control_B.obj_tmp_tmp + 3] *
        katana_control_B.obj[katana_control_B.b_kstr_d + 12];
    }
  }
}

static void katana_control_emxFree_char_T(emxArray_char_T_katana_contro_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_katana_contro_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_katana_contro_T *)NULL;
  }
}

static void katana_control_emxFree_real_T(emxArray_real_T_katana_contro_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_katana_contro_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_katana_contro_T *)NULL;
  }
}

static void katana_cont_emxFree_f_cell_wrap(emxArray_f_cell_wrap_katana_c_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_katana_c_T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_katana_control_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_katana_c_T *)NULL;
  }
}

static boolean_T katana_control_strcmp(const emxArray_char_T_katana_contro_T *a)
{
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  for (katana_control_B.b_kstr_e = 0; katana_control_B.b_kstr_e < 5;
       katana_control_B.b_kstr_e++) {
    katana_control_B.b_l[katana_control_B.b_kstr_e] =
      tmp[katana_control_B.b_kstr_e];
  }

  b_bool = false;
  if (a->size[1] == 5) {
    katana_control_B.b_kstr_e = 1;
    do {
      exitg1 = 0;
      if (katana_control_B.b_kstr_e - 1 < 5) {
        katana_control_B.kstr_d = katana_control_B.b_kstr_e - 1;
        if (a->data[katana_control_B.kstr_d] !=
            katana_control_B.b_l[katana_control_B.kstr_d]) {
          exitg1 = 1;
        } else {
          katana_control_B.b_kstr_e++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void kat_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real32_T q[7], real32_T jointTorq[7])
{
  t_robotics_manip_internal_Rig_T *robot;
  emxArray_f_cell_wrap_katana_c_T *X;
  emxArray_f_cell_wrap_katana_c_T *Xtree;
  emxArray_real_T_katana_contro_T *vJ;
  emxArray_real_T_katana_contro_T *vB;
  emxArray_real_T_katana_contro_T *aB;
  emxArray_real_T_katana_contro_T *f;
  emxArray_real_T_katana_contro_T *S;
  emxArray_real_T_katana_contro_T *taui;
  r_robotics_manip_internal_Rig_T *obj_0;
  emxArray_char_T_katana_contro_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  robot = &obj->TreeInternal;
  for (katana_control_B.i_d = 0; katana_control_B.i_d < 7; katana_control_B.i_d
       ++) {
    katana_control_B.q[katana_control_B.i_d] = q[katana_control_B.i_d];
  }

  katana_control_B.a0[0] = 0.0;
  katana_control_B.a0[1] = 0.0;
  katana_control_B.a0[2] = 0.0;
  katana_control_B.a0[3] = -obj->TreeInternal.Gravity[0];
  katana_control_B.a0[4] = -obj->TreeInternal.Gravity[1];
  katana_control_B.a0[5] = -obj->TreeInternal.Gravity[2];
  katana_control_emxInit_real_T(&vJ, 2);
  katana_control_B.nb = obj->TreeInternal.NumBodies;
  katana_control_B.b_kstr = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  katana_control_B.m = static_cast<int32_T>(katana_control_B.nb);
  vJ->size[1] = katana_control_B.m;
  katana_emxEnsureCapacity_real_T(vJ, katana_control_B.b_kstr);
  katana_control_B.loop_ub_tmp = 6 * katana_control_B.m - 1;
  for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <=
       katana_control_B.loop_ub_tmp; katana_control_B.b_kstr++) {
    vJ->data[katana_control_B.b_kstr] = 0.0;
  }

  katana_control_emxInit_real_T(&vB, 2);
  katana_control_B.b_kstr = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = katana_control_B.m;
  katana_emxEnsureCapacity_real_T(vB, katana_control_B.b_kstr);
  for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <=
       katana_control_B.loop_ub_tmp; katana_control_B.b_kstr++) {
    vB->data[katana_control_B.b_kstr] = 0.0;
  }

  katana_control_emxInit_real_T(&aB, 2);
  katana_control_B.b_kstr = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = katana_control_B.m;
  katana_emxEnsureCapacity_real_T(aB, katana_control_B.b_kstr);
  for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <=
       katana_control_B.loop_ub_tmp; katana_control_B.b_kstr++) {
    aB->data[katana_control_B.b_kstr] = 0.0;
  }

  for (katana_control_B.i_d = 0; katana_control_B.i_d < 7; katana_control_B.i_d
       ++) {
    katana_control_B.tau[katana_control_B.i_d] = 0.0;
  }

  katana_cont_emxInit_f_cell_wrap(&X, 2);
  katana_cont_emxInit_f_cell_wrap(&Xtree, 2);
  katana_control_B.c_tmp = katana_control_B.m - 1;
  katana_control_B.b_kstr = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = katana_control_B.m;
  k_emxEnsureCapacity_f_cell_wrap(Xtree, katana_control_B.b_kstr);
  katana_control_B.b_kstr = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = katana_control_B.m;
  k_emxEnsureCapacity_f_cell_wrap(X, katana_control_B.b_kstr);
  if (0 <= katana_control_B.c_tmp) {
    katana_control_eye(katana_control_B.b_I);
  }

  for (katana_control_B.b_k = 0; katana_control_B.b_k <= katana_control_B.c_tmp;
       katana_control_B.b_k++) {
    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 36;
         katana_control_B.b_kstr++) {
      Xtree->data[katana_control_B.b_k].f1[katana_control_B.b_kstr] =
        katana_control_B.b_I[katana_control_B.b_kstr];
      X->data[katana_control_B.b_k].f1[katana_control_B.b_kstr] =
        katana_control_B.b_I[katana_control_B.b_kstr];
    }
  }

  katana_control_emxInit_real_T(&f, 2);
  katana_control_B.b_kstr = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = katana_control_B.m;
  katana_emxEnsureCapacity_real_T(f, katana_control_B.b_kstr);
  katana_control_emxInit_real_T(&S, 2);
  katana_control_emxInit_char_T(&switch_expression, 2);
  if (0 <= katana_control_B.c_tmp) {
    katana_control_B.dv[0] = 0.0;
    katana_control_B.dv[4] = 0.0;
    katana_control_B.dv[8] = 0.0;
  }

  for (katana_control_B.i_d = 0; katana_control_B.i_d <= katana_control_B.c_tmp;
       katana_control_B.i_d++) {
    obj_0 = robot->Bodies[katana_control_B.i_d];
    katana_control_B.b_kstr = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
    katana_emxEnsureCapacity_real_T(S, katana_control_B.b_kstr);
    katana_control_B.m = obj_0->JointInternal.MotionSubspace->size[0] *
      obj_0->JointInternal.MotionSubspace->size[1] - 1;
    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <=
         katana_control_B.m; katana_control_B.b_kstr++) {
      S->data[katana_control_B.b_kstr] = obj_0->
        JointInternal.MotionSubspace->data[katana_control_B.b_kstr];
    }

    katana_control_B.a_idx_0 = robot->PositionDoFMap[katana_control_B.i_d];
    katana_control_B.a_idx_1 = robot->PositionDoFMap[katana_control_B.i_d + 10];
    if (katana_control_B.a_idx_1 < katana_control_B.a_idx_0) {
      obj_0 = robot->Bodies[katana_control_B.i_d];
      rigidBodyJoint_transformBodyToP(&obj_0->JointInternal, katana_control_B.T);
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        vJ->data[katana_control_B.b_kstr + 6 * katana_control_B.i_d] = 0.0;
      }
    } else {
      if (katana_control_B.a_idx_0 > katana_control_B.a_idx_1) {
        katana_control_B.b_k = 0;
        katana_control_B.loop_ub_tmp = 0;
      } else {
        katana_control_B.b_k = static_cast<int32_T>(katana_control_B.a_idx_0) -
          1;
        katana_control_B.loop_ub_tmp = static_cast<int32_T>
          (katana_control_B.a_idx_1);
      }

      obj_0 = robot->Bodies[katana_control_B.i_d];
      katana_control_B.b_kstr = switch_expression->size[0] *
        switch_expression->size[1];
      switch_expression->size[0] = 1;
      switch_expression->size[1] = obj_0->JointInternal.Type->size[1];
      katana_emxEnsureCapacity_char_T(switch_expression, katana_control_B.b_kstr);
      katana_control_B.m = obj_0->JointInternal.Type->size[0] *
        obj_0->JointInternal.Type->size[1] - 1;
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <=
           katana_control_B.m; katana_control_B.b_kstr++) {
        switch_expression->data[katana_control_B.b_kstr] =
          obj_0->JointInternal.Type->data[katana_control_B.b_kstr];
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 5;
           katana_control_B.b_kstr++) {
        katana_control_B.b_d[katana_control_B.b_kstr] =
          tmp[katana_control_B.b_kstr];
      }

      katana_control_B.b_bool = false;
      if (switch_expression->size[1] == 5) {
        katana_control_B.b_kstr = 1;
        do {
          exitg1 = 0;
          if (katana_control_B.b_kstr - 1 < 5) {
            katana_control_B.m = katana_control_B.b_kstr - 1;
            if (switch_expression->data[katana_control_B.m] !=
                katana_control_B.b_d[katana_control_B.m]) {
              exitg1 = 1;
            } else {
              katana_control_B.b_kstr++;
            }
          } else {
            katana_control_B.b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (katana_control_B.b_bool) {
        katana_control_B.b_kstr = 0;
      } else {
        for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 8;
             katana_control_B.b_kstr++) {
          katana_control_B.b_g[katana_control_B.b_kstr] =
            tmp_0[katana_control_B.b_kstr];
        }

        katana_control_B.b_bool = false;
        if (switch_expression->size[1] == 8) {
          katana_control_B.b_kstr = 1;
          do {
            exitg1 = 0;
            if (katana_control_B.b_kstr - 1 < 8) {
              katana_control_B.m = katana_control_B.b_kstr - 1;
              if (switch_expression->data[katana_control_B.m] !=
                  katana_control_B.b_g[katana_control_B.m]) {
                exitg1 = 1;
              } else {
                katana_control_B.b_kstr++;
              }
            } else {
              katana_control_B.b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (katana_control_B.b_bool) {
          katana_control_B.b_kstr = 1;
        } else {
          katana_control_B.b_kstr = -1;
        }
      }

      switch (katana_control_B.b_kstr) {
       case 0:
        memset(&katana_control_B.Tinv[0], 0, sizeof(real_T) << 4U);
        katana_control_B.Tinv[0] = 1.0;
        katana_control_B.Tinv[5] = 1.0;
        katana_control_B.Tinv[10] = 1.0;
        katana_control_B.Tinv[15] = 1.0;
        break;

       case 1:
        ka_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal,
          katana_control_B.v);
        katana_control_B.loop_ub_tmp -= katana_control_B.b_k;
        for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <
             katana_control_B.loop_ub_tmp; katana_control_B.b_kstr++) {
          katana_control_B.l_data[katana_control_B.b_kstr] =
            katana_control_B.b_k + katana_control_B.b_kstr;
        }

        katana_control_B.result_data[0] = katana_control_B.v[0];
        katana_control_B.result_data[1] = katana_control_B.v[1];
        katana_control_B.result_data[2] = katana_control_B.v[2];
        if (0 <= (katana_control_B.loop_ub_tmp != 0) - 1) {
          katana_control_B.result_data[3] =
            katana_control_B.q[katana_control_B.l_data[0]];
        }

        katana_control_B.a_idx_0 = 1.0 / sqrt((katana_control_B.result_data[0] *
          katana_control_B.result_data[0] + katana_control_B.result_data[1] *
          katana_control_B.result_data[1]) + katana_control_B.result_data[2] *
          katana_control_B.result_data[2]);
        katana_control_B.v[0] = katana_control_B.result_data[0] *
          katana_control_B.a_idx_0;
        katana_control_B.v[1] = katana_control_B.result_data[1] *
          katana_control_B.a_idx_0;
        katana_control_B.v[2] = katana_control_B.result_data[2] *
          katana_control_B.a_idx_0;
        katana_control_B.a_idx_0 = cos(katana_control_B.result_data[3]);
        katana_control_B.sth = sin(katana_control_B.result_data[3]);
        katana_control_B.a_idx_1 = katana_control_B.v[1] * katana_control_B.v[0]
          * (1.0 - katana_control_B.a_idx_0);
        katana_control_B.tempR_tmp = katana_control_B.v[2] *
          katana_control_B.sth;
        katana_control_B.tempR_tmp_n = katana_control_B.v[2] *
          katana_control_B.v[0] * (1.0 - katana_control_B.a_idx_0);
        katana_control_B.tempR_tmp_p = katana_control_B.v[1] *
          katana_control_B.sth;
        katana_control_B.tempR_tmp_l = katana_control_B.v[2] *
          katana_control_B.v[1] * (1.0 - katana_control_B.a_idx_0);
        katana_control_B.sth *= katana_control_B.v[0];
        katana_control_cat(katana_control_B.v[0] * katana_control_B.v[0] * (1.0
          - katana_control_B.a_idx_0) + katana_control_B.a_idx_0,
                           katana_control_B.a_idx_1 - katana_control_B.tempR_tmp,
                           katana_control_B.tempR_tmp_n +
                           katana_control_B.tempR_tmp_p,
                           katana_control_B.a_idx_1 + katana_control_B.tempR_tmp,
                           katana_control_B.v[1] * katana_control_B.v[1] * (1.0
          - katana_control_B.a_idx_0) + katana_control_B.a_idx_0,
                           katana_control_B.tempR_tmp_l - katana_control_B.sth,
                           katana_control_B.tempR_tmp_n -
                           katana_control_B.tempR_tmp_p,
                           katana_control_B.tempR_tmp_l + katana_control_B.sth,
                           katana_control_B.v[2] * katana_control_B.v[2] * (1.0
          - katana_control_B.a_idx_0) + katana_control_B.a_idx_0,
                           katana_control_B.tempR_k);
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 3;
             katana_control_B.b_k++) {
          katana_control_B.b_kstr = katana_control_B.b_k + 1;
          katana_control_B.R[katana_control_B.b_kstr - 1] =
            katana_control_B.tempR_k[(katana_control_B.b_kstr - 1) * 3];
          katana_control_B.b_kstr = katana_control_B.b_k + 1;
          katana_control_B.R[katana_control_B.b_kstr + 2] =
            katana_control_B.tempR_k[(katana_control_B.b_kstr - 1) * 3 + 1];
          katana_control_B.b_kstr = katana_control_B.b_k + 1;
          katana_control_B.R[katana_control_B.b_kstr + 5] =
            katana_control_B.tempR_k[(katana_control_B.b_kstr - 1) * 3 + 2];
        }

        memset(&katana_control_B.Tinv[0], 0, sizeof(real_T) << 4U);
        for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
             katana_control_B.b_kstr++) {
          katana_control_B.loop_ub_tmp = katana_control_B.b_kstr << 2;
          katana_control_B.Tinv[katana_control_B.loop_ub_tmp] =
            katana_control_B.R[3 * katana_control_B.b_kstr];
          katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 1] =
            katana_control_B.R[3 * katana_control_B.b_kstr + 1];
          katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 2] =
            katana_control_B.R[3 * katana_control_B.b_kstr + 2];
        }

        katana_control_B.Tinv[15] = 1.0;
        break;

       default:
        ka_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal,
          katana_control_B.v);
        memset(&katana_control_B.tempR_k[0], 0, 9U * sizeof(real_T));
        katana_control_B.tempR_k[0] = 1.0;
        katana_control_B.tempR_k[4] = 1.0;
        katana_control_B.tempR_k[8] = 1.0;
        for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
             katana_control_B.b_kstr++) {
          katana_control_B.loop_ub_tmp = katana_control_B.b_kstr << 2;
          katana_control_B.Tinv[katana_control_B.loop_ub_tmp] =
            katana_control_B.tempR_k[3 * katana_control_B.b_kstr];
          katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 1] =
            katana_control_B.tempR_k[3 * katana_control_B.b_kstr + 1];
          katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 2] =
            katana_control_B.tempR_k[3 * katana_control_B.b_kstr + 2];
          katana_control_B.Tinv[katana_control_B.b_kstr + 12] =
            katana_control_B.v[katana_control_B.b_kstr] *
            katana_control_B.q[katana_control_B.b_k];
        }

        katana_control_B.Tinv[3] = 0.0;
        katana_control_B.Tinv[7] = 0.0;
        katana_control_B.Tinv[11] = 0.0;
        katana_control_B.Tinv[15] = 1.0;
        break;
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 16;
           katana_control_B.b_kstr++) {
        katana_control_B.a[katana_control_B.b_kstr] =
          obj_0->JointInternal.JointToParentTransform[katana_control_B.b_kstr];
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 16;
           katana_control_B.b_kstr++) {
        katana_control_B.b[katana_control_B.b_kstr] =
          obj_0->JointInternal.ChildToJointTransform[katana_control_B.b_kstr];
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 4;
           katana_control_B.b_kstr++) {
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 4;
             katana_control_B.b_k++) {
          katana_control_B.loop_ub_tmp = katana_control_B.b_k << 2;
          katana_control_B.m = katana_control_B.b_kstr +
            katana_control_B.loop_ub_tmp;
          katana_control_B.a_c[katana_control_B.m] = 0.0;
          katana_control_B.a_c[katana_control_B.m] +=
            katana_control_B.Tinv[katana_control_B.loop_ub_tmp] *
            katana_control_B.a[katana_control_B.b_kstr];
          katana_control_B.a_c[katana_control_B.m] +=
            katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 1] *
            katana_control_B.a[katana_control_B.b_kstr + 4];
          katana_control_B.a_c[katana_control_B.m] +=
            katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 2] *
            katana_control_B.a[katana_control_B.b_kstr + 8];
          katana_control_B.a_c[katana_control_B.m] +=
            katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 3] *
            katana_control_B.a[katana_control_B.b_kstr + 12];
        }

        for (katana_control_B.b_k = 0; katana_control_B.b_k < 4;
             katana_control_B.b_k++) {
          katana_control_B.m = katana_control_B.b_k << 2;
          katana_control_B.loop_ub_tmp = katana_control_B.b_kstr +
            katana_control_B.m;
          katana_control_B.T[katana_control_B.loop_ub_tmp] = 0.0;
          katana_control_B.T[katana_control_B.loop_ub_tmp] +=
            katana_control_B.b[katana_control_B.m] *
            katana_control_B.a_c[katana_control_B.b_kstr];
          katana_control_B.T[katana_control_B.loop_ub_tmp] +=
            katana_control_B.b[katana_control_B.m + 1] *
            katana_control_B.a_c[katana_control_B.b_kstr + 4];
          katana_control_B.T[katana_control_B.loop_ub_tmp] +=
            katana_control_B.b[katana_control_B.m + 2] *
            katana_control_B.a_c[katana_control_B.b_kstr + 8];
          katana_control_B.T[katana_control_B.loop_ub_tmp] +=
            katana_control_B.b[katana_control_B.m + 3] *
            katana_control_B.a_c[katana_control_B.b_kstr + 12];
        }
      }

      katana_control_B.inner = S->size[1] - 1;
      for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
           katana_control_B.b_k++) {
        vJ->data[katana_control_B.b_k + 6 * katana_control_B.i_d] = 0.0;
      }

      for (katana_control_B.b_k = 0; katana_control_B.b_k <=
           katana_control_B.inner; katana_control_B.b_k++) {
        katana_control_B.aoffset = katana_control_B.b_k * 6 - 1;
        for (katana_control_B.loop_ub_tmp = 0; katana_control_B.loop_ub_tmp < 6;
             katana_control_B.loop_ub_tmp++) {
          katana_control_B.b_kstr = 6 * katana_control_B.i_d +
            katana_control_B.loop_ub_tmp;
          vJ->data[katana_control_B.b_kstr] += S->data[(katana_control_B.aoffset
            + katana_control_B.loop_ub_tmp) + 1] * 0.0;
        }
      }
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
         katana_control_B.b_kstr++) {
      katana_control_B.R[3 * katana_control_B.b_kstr] =
        katana_control_B.T[katana_control_B.b_kstr];
      katana_control_B.R[3 * katana_control_B.b_kstr + 1] =
        katana_control_B.T[katana_control_B.b_kstr + 4];
      katana_control_B.R[3 * katana_control_B.b_kstr + 2] =
        katana_control_B.T[katana_control_B.b_kstr + 8];
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 9;
         katana_control_B.b_kstr++) {
      katana_control_B.tempR_k[katana_control_B.b_kstr] =
        -katana_control_B.R[katana_control_B.b_kstr];
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
         katana_control_B.b_kstr++) {
      katana_control_B.loop_ub_tmp = katana_control_B.b_kstr << 2;
      katana_control_B.Tinv[katana_control_B.loop_ub_tmp] = katana_control_B.R[3
        * katana_control_B.b_kstr];
      katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 1] =
        katana_control_B.R[3 * katana_control_B.b_kstr + 1];
      katana_control_B.Tinv[katana_control_B.loop_ub_tmp + 2] =
        katana_control_B.R[3 * katana_control_B.b_kstr + 2];
      katana_control_B.Tinv[katana_control_B.b_kstr + 12] =
        katana_control_B.tempR_k[katana_control_B.b_kstr + 6] *
        katana_control_B.T[14] +
        (katana_control_B.tempR_k[katana_control_B.b_kstr + 3] *
         katana_control_B.T[13] +
         katana_control_B.tempR_k[katana_control_B.b_kstr] * katana_control_B.T
         [12]);
    }

    katana_control_B.Tinv[3] = 0.0;
    katana_control_B.Tinv[7] = 0.0;
    katana_control_B.Tinv[11] = 0.0;
    katana_control_B.Tinv[15] = 1.0;
    katana_control_B.dv[3] = -katana_control_B.Tinv[14];
    katana_control_B.dv[6] = katana_control_B.Tinv[13];
    katana_control_B.dv[1] = katana_control_B.Tinv[14];
    katana_control_B.dv[7] = -katana_control_B.Tinv[12];
    katana_control_B.dv[2] = -katana_control_B.Tinv[13];
    katana_control_B.dv[5] = katana_control_B.Tinv[12];
    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
         katana_control_B.b_kstr++) {
      for (katana_control_B.b_k = 0; katana_control_B.b_k < 3;
           katana_control_B.b_k++) {
        katana_control_B.loop_ub_tmp = katana_control_B.b_kstr + 3 *
          katana_control_B.b_k;
        katana_control_B.R[katana_control_B.loop_ub_tmp] = 0.0;
        katana_control_B.m = katana_control_B.b_k << 2;
        katana_control_B.R[katana_control_B.loop_ub_tmp] +=
          katana_control_B.Tinv[katana_control_B.m] *
          katana_control_B.dv[katana_control_B.b_kstr];
        katana_control_B.R[katana_control_B.loop_ub_tmp] +=
          katana_control_B.Tinv[katana_control_B.m + 1] *
          katana_control_B.dv[katana_control_B.b_kstr + 3];
        katana_control_B.R[katana_control_B.loop_ub_tmp] +=
          katana_control_B.Tinv[katana_control_B.m + 2] *
          katana_control_B.dv[katana_control_B.b_kstr + 6];
        X->data[katana_control_B.i_d].f1[katana_control_B.b_k + 6 *
          katana_control_B.b_kstr] = katana_control_B.Tinv
          [(katana_control_B.b_kstr << 2) + katana_control_B.b_k];
        X->data[katana_control_B.i_d].f1[katana_control_B.b_k + 6 *
          (katana_control_B.b_kstr + 3)] = 0.0;
      }
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
         katana_control_B.b_kstr++) {
      X->data[katana_control_B.i_d].f1[6 * katana_control_B.b_kstr + 3] =
        katana_control_B.R[3 * katana_control_B.b_kstr];
      katana_control_B.b_k = katana_control_B.b_kstr << 2;
      katana_control_B.loop_ub_tmp = 6 * (katana_control_B.b_kstr + 3);
      X->data[katana_control_B.i_d].f1[katana_control_B.loop_ub_tmp + 3] =
        katana_control_B.Tinv[katana_control_B.b_k];
      X->data[katana_control_B.i_d].f1[6 * katana_control_B.b_kstr + 4] =
        katana_control_B.R[3 * katana_control_B.b_kstr + 1];
      X->data[katana_control_B.i_d].f1[katana_control_B.loop_ub_tmp + 4] =
        katana_control_B.Tinv[katana_control_B.b_k + 1];
      X->data[katana_control_B.i_d].f1[6 * katana_control_B.b_kstr + 5] =
        katana_control_B.R[3 * katana_control_B.b_kstr + 2];
      X->data[katana_control_B.i_d].f1[katana_control_B.loop_ub_tmp + 5] =
        katana_control_B.Tinv[katana_control_B.b_k + 2];
    }

    katana_control_B.a_idx_0 = robot->Bodies[katana_control_B.i_d]->ParentIndex;
    if (katana_control_B.a_idx_0 > 0.0) {
      katana_control_B.m = static_cast<int32_T>(katana_control_B.a_idx_0);
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        katana_control_B.a_idx_1 = 0.0;
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.a_idx_1 += vB->data[(katana_control_B.m - 1) * 6 +
            katana_control_B.b_k] * X->data[katana_control_B.i_d].f1[6 *
            katana_control_B.b_k + katana_control_B.b_kstr];
        }

        katana_control_B.y[katana_control_B.b_kstr] = vJ->data[6 *
          katana_control_B.i_d + katana_control_B.b_kstr] +
          katana_control_B.a_idx_1;
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        vB->data[katana_control_B.b_kstr + 6 * katana_control_B.i_d] =
          katana_control_B.y[katana_control_B.b_kstr];
      }

      katana_control_B.inner = S->size[1] - 1;
      for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
           katana_control_B.b_k++) {
        katana_control_B.y[katana_control_B.b_k] = 0.0;
      }

      for (katana_control_B.b_k = 0; katana_control_B.b_k <=
           katana_control_B.inner; katana_control_B.b_k++) {
        katana_control_B.aoffset = katana_control_B.b_k * 6 - 1;
        for (katana_control_B.loop_ub_tmp = 0; katana_control_B.loop_ub_tmp < 6;
             katana_control_B.loop_ub_tmp++) {
          katana_control_B.a_idx_1 = S->data[(katana_control_B.aoffset +
            katana_control_B.loop_ub_tmp) + 1] * 0.0 +
            katana_control_B.y[katana_control_B.loop_ub_tmp];
          katana_control_B.y[katana_control_B.loop_ub_tmp] =
            katana_control_B.a_idx_1;
        }
      }

      katana_control_B.tempR_k[0] = 0.0;
      katana_control_B.b_k = 6 * katana_control_B.i_d + 2;
      katana_control_B.tempR_k[3] = -vB->data[katana_control_B.b_k];
      katana_control_B.b_kstr = 6 * katana_control_B.i_d + 1;
      katana_control_B.tempR_k[6] = vB->data[katana_control_B.b_kstr];
      katana_control_B.tempR_k[1] = vB->data[katana_control_B.b_k];
      katana_control_B.tempR_k[4] = 0.0;
      katana_control_B.tempR_k[7] = -vB->data[6 * katana_control_B.i_d];
      katana_control_B.tempR_k[2] = -vB->data[katana_control_B.b_kstr];
      katana_control_B.tempR_k[5] = vB->data[6 * katana_control_B.i_d];
      katana_control_B.tempR_k[8] = 0.0;
      katana_control_B.tempR[3] = 0.0;
      katana_control_B.b_k = 6 * katana_control_B.i_d + 5;
      katana_control_B.tempR[9] = -vB->data[katana_control_B.b_k];
      katana_control_B.b_kstr = 6 * katana_control_B.i_d + 4;
      katana_control_B.tempR[15] = vB->data[katana_control_B.b_kstr];
      katana_control_B.tempR[4] = vB->data[katana_control_B.b_k];
      katana_control_B.tempR[10] = 0.0;
      katana_control_B.b_k = 6 * katana_control_B.i_d + 3;
      katana_control_B.tempR[16] = -vB->data[katana_control_B.b_k];
      katana_control_B.tempR[5] = -vB->data[katana_control_B.b_kstr];
      katana_control_B.tempR[11] = vB->data[katana_control_B.b_k];
      katana_control_B.tempR[17] = 0.0;
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
           katana_control_B.b_kstr++) {
        katana_control_B.a_idx_1 = katana_control_B.tempR_k[3 *
          katana_control_B.b_kstr];
        katana_control_B.tempR[6 * katana_control_B.b_kstr] =
          katana_control_B.a_idx_1;
        katana_control_B.b_k = 6 * (katana_control_B.b_kstr + 3);
        katana_control_B.tempR[katana_control_B.b_k] = 0.0;
        katana_control_B.tempR[katana_control_B.b_k + 3] =
          katana_control_B.a_idx_1;
        katana_control_B.a_idx_1 = katana_control_B.tempR_k[3 *
          katana_control_B.b_kstr + 1];
        katana_control_B.tempR[6 * katana_control_B.b_kstr + 1] =
          katana_control_B.a_idx_1;
        katana_control_B.tempR[katana_control_B.b_k + 1] = 0.0;
        katana_control_B.tempR[katana_control_B.b_k + 4] =
          katana_control_B.a_idx_1;
        katana_control_B.a_idx_1 = katana_control_B.tempR_k[3 *
          katana_control_B.b_kstr + 2];
        katana_control_B.tempR[6 * katana_control_B.b_kstr + 2] =
          katana_control_B.a_idx_1;
        katana_control_B.tempR[katana_control_B.b_k + 2] = 0.0;
        katana_control_B.tempR[katana_control_B.b_k + 5] =
          katana_control_B.a_idx_1;
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        katana_control_B.a_idx_1 = 0.0;
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.a_idx_1 += aB->data[(katana_control_B.m - 1) * 6 +
            katana_control_B.b_k] * X->data[katana_control_B.i_d].f1[6 *
            katana_control_B.b_k + katana_control_B.b_kstr];
        }

        katana_control_B.X[katana_control_B.b_kstr] = katana_control_B.a_idx_1 +
          katana_control_B.y[katana_control_B.b_kstr];
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        katana_control_B.y[katana_control_B.b_kstr] = 0.0;
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.a_idx_1 = katana_control_B.tempR[6 *
            katana_control_B.b_k + katana_control_B.b_kstr] * vJ->data[6 *
            katana_control_B.i_d + katana_control_B.b_k] +
            katana_control_B.y[katana_control_B.b_kstr];
          katana_control_B.y[katana_control_B.b_kstr] = katana_control_B.a_idx_1;
        }

        aB->data[katana_control_B.b_kstr + 6 * katana_control_B.i_d] =
          katana_control_B.X[katana_control_B.b_kstr] +
          katana_control_B.y[katana_control_B.b_kstr];
      }

      katana_control_B.R[0] = 0.0;
      katana_control_B.R[3] = -katana_control_B.T[14];
      katana_control_B.R[6] = katana_control_B.T[13];
      katana_control_B.R[1] = katana_control_B.T[14];
      katana_control_B.R[4] = 0.0;
      katana_control_B.R[7] = -katana_control_B.T[12];
      katana_control_B.R[2] = -katana_control_B.T[13];
      katana_control_B.R[5] = katana_control_B.T[12];
      katana_control_B.R[8] = 0.0;
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
           katana_control_B.b_kstr++) {
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 3;
             katana_control_B.b_k++) {
          katana_control_B.loop_ub_tmp = katana_control_B.b_kstr + 3 *
            katana_control_B.b_k;
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] = 0.0;
          katana_control_B.m = katana_control_B.b_k << 2;
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] +=
            katana_control_B.T[katana_control_B.m] *
            katana_control_B.R[katana_control_B.b_kstr];
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] +=
            katana_control_B.T[katana_control_B.m + 1] *
            katana_control_B.R[katana_control_B.b_kstr + 3];
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] +=
            katana_control_B.T[katana_control_B.m + 2] *
            katana_control_B.R[katana_control_B.b_kstr + 6];
          katana_control_B.b_I[katana_control_B.b_k + 6 *
            katana_control_B.b_kstr] = katana_control_B.T
            [(katana_control_B.b_kstr << 2) + katana_control_B.b_k];
          katana_control_B.b_I[katana_control_B.b_k + 6 *
            (katana_control_B.b_kstr + 3)] = 0.0;
        }
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
           katana_control_B.b_kstr++) {
        katana_control_B.b_I[6 * katana_control_B.b_kstr + 3] =
          katana_control_B.tempR_k[3 * katana_control_B.b_kstr];
        katana_control_B.loop_ub_tmp = katana_control_B.b_kstr << 2;
        katana_control_B.b_k = 6 * (katana_control_B.b_kstr + 3);
        katana_control_B.b_I[katana_control_B.b_k + 3] =
          katana_control_B.T[katana_control_B.loop_ub_tmp];
        katana_control_B.b_I[6 * katana_control_B.b_kstr + 4] =
          katana_control_B.tempR_k[3 * katana_control_B.b_kstr + 1];
        katana_control_B.b_I[katana_control_B.b_k + 4] =
          katana_control_B.T[katana_control_B.loop_ub_tmp + 1];
        katana_control_B.b_I[6 * katana_control_B.b_kstr + 5] =
          katana_control_B.tempR_k[3 * katana_control_B.b_kstr + 2];
        katana_control_B.b_I[katana_control_B.b_k + 5] =
          katana_control_B.T[katana_control_B.loop_ub_tmp + 2];
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.m = katana_control_B.b_kstr + 6 *
            katana_control_B.b_k;
          katana_control_B.tempR[katana_control_B.m] = 0.0;
          for (katana_control_B.loop_ub_tmp = 0; katana_control_B.loop_ub_tmp <
               6; katana_control_B.loop_ub_tmp++) {
            katana_control_B.tempR[katana_control_B.m] += Xtree->data[
              static_cast<int32_T>(katana_control_B.a_idx_0) - 1].f1[6 *
              katana_control_B.loop_ub_tmp + katana_control_B.b_kstr] *
              katana_control_B.b_I[6 * katana_control_B.b_k +
              katana_control_B.loop_ub_tmp];
          }
        }
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 36;
           katana_control_B.b_kstr++) {
        Xtree->data[katana_control_B.i_d].f1[katana_control_B.b_kstr] =
          katana_control_B.tempR[katana_control_B.b_kstr];
      }
    } else {
      katana_control_B.inner = S->size[1] - 1;
      for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
           katana_control_B.b_k++) {
        katana_control_B.b_kstr = 6 * katana_control_B.i_d +
          katana_control_B.b_k;
        vB->data[katana_control_B.b_kstr] = vJ->data[katana_control_B.b_kstr];
        katana_control_B.y[katana_control_B.b_k] = 0.0;
      }

      for (katana_control_B.b_k = 0; katana_control_B.b_k <=
           katana_control_B.inner; katana_control_B.b_k++) {
        katana_control_B.aoffset = katana_control_B.b_k * 6 - 1;
        for (katana_control_B.loop_ub_tmp = 0; katana_control_B.loop_ub_tmp < 6;
             katana_control_B.loop_ub_tmp++) {
          katana_control_B.a_idx_1 = S->data[(katana_control_B.aoffset +
            katana_control_B.loop_ub_tmp) + 1] * 0.0 +
            katana_control_B.y[katana_control_B.loop_ub_tmp];
          katana_control_B.y[katana_control_B.loop_ub_tmp] =
            katana_control_B.a_idx_1;
        }
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        katana_control_B.a_idx_1 = 0.0;
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.a_idx_1 += X->data[katana_control_B.i_d].f1[6 *
            katana_control_B.b_k + katana_control_B.b_kstr] *
            katana_control_B.a0[katana_control_B.b_k];
        }

        aB->data[katana_control_B.b_kstr + 6 * katana_control_B.i_d] =
          katana_control_B.a_idx_1 + katana_control_B.y[katana_control_B.b_kstr];
      }

      katana_control_B.R[0] = 0.0;
      katana_control_B.R[3] = -katana_control_B.T[14];
      katana_control_B.R[6] = katana_control_B.T[13];
      katana_control_B.R[1] = katana_control_B.T[14];
      katana_control_B.R[4] = 0.0;
      katana_control_B.R[7] = -katana_control_B.T[12];
      katana_control_B.R[2] = -katana_control_B.T[13];
      katana_control_B.R[5] = katana_control_B.T[12];
      katana_control_B.R[8] = 0.0;
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
           katana_control_B.b_kstr++) {
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 3;
             katana_control_B.b_k++) {
          katana_control_B.loop_ub_tmp = katana_control_B.b_kstr + 3 *
            katana_control_B.b_k;
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] = 0.0;
          katana_control_B.m = katana_control_B.b_k << 2;
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] +=
            katana_control_B.T[katana_control_B.m] *
            katana_control_B.R[katana_control_B.b_kstr];
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] +=
            katana_control_B.T[katana_control_B.m + 1] *
            katana_control_B.R[katana_control_B.b_kstr + 3];
          katana_control_B.tempR_k[katana_control_B.loop_ub_tmp] +=
            katana_control_B.T[katana_control_B.m + 2] *
            katana_control_B.R[katana_control_B.b_kstr + 6];
          Xtree->data[katana_control_B.i_d].f1[katana_control_B.b_k + 6 *
            katana_control_B.b_kstr] = katana_control_B.T
            [(katana_control_B.b_kstr << 2) + katana_control_B.b_k];
          Xtree->data[katana_control_B.i_d].f1[katana_control_B.b_k + 6 *
            (katana_control_B.b_kstr + 3)] = 0.0;
        }
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
           katana_control_B.b_kstr++) {
        Xtree->data[katana_control_B.i_d].f1[6 * katana_control_B.b_kstr + 3] =
          katana_control_B.tempR_k[3 * katana_control_B.b_kstr];
        katana_control_B.b_k = katana_control_B.b_kstr << 2;
        katana_control_B.loop_ub_tmp = 6 * (katana_control_B.b_kstr + 3);
        Xtree->data[katana_control_B.i_d].f1[katana_control_B.loop_ub_tmp + 3] =
          katana_control_B.T[katana_control_B.b_k];
        Xtree->data[katana_control_B.i_d].f1[6 * katana_control_B.b_kstr + 4] =
          katana_control_B.tempR_k[3 * katana_control_B.b_kstr + 1];
        Xtree->data[katana_control_B.i_d].f1[katana_control_B.loop_ub_tmp + 4] =
          katana_control_B.T[katana_control_B.b_k + 1];
        Xtree->data[katana_control_B.i_d].f1[6 * katana_control_B.b_kstr + 5] =
          katana_control_B.tempR_k[3 * katana_control_B.b_kstr + 2];
        Xtree->data[katana_control_B.i_d].f1[katana_control_B.loop_ub_tmp + 5] =
          katana_control_B.T[katana_control_B.b_k + 2];
      }
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 36;
         katana_control_B.b_kstr++) {
      katana_control_B.b_I[katana_control_B.b_kstr] = robot->
        Bodies[katana_control_B.i_d]->SpatialInertia[katana_control_B.b_kstr];
    }

    katana_control_B.tempR_k[0] = 0.0;
    katana_control_B.b_k = 6 * katana_control_B.i_d + 2;
    katana_control_B.tempR_k[3] = -vB->data[katana_control_B.b_k];
    katana_control_B.b_kstr = 6 * katana_control_B.i_d + 1;
    katana_control_B.tempR_k[6] = vB->data[katana_control_B.b_kstr];
    katana_control_B.tempR_k[1] = vB->data[katana_control_B.b_k];
    katana_control_B.tempR_k[4] = 0.0;
    katana_control_B.tempR_k[7] = -vB->data[6 * katana_control_B.i_d];
    katana_control_B.tempR_k[2] = -vB->data[katana_control_B.b_kstr];
    katana_control_B.tempR_k[5] = vB->data[6 * katana_control_B.i_d];
    katana_control_B.tempR_k[8] = 0.0;
    katana_control_B.tempR[18] = 0.0;
    katana_control_B.b_k = 6 * katana_control_B.i_d + 5;
    katana_control_B.tempR[24] = -vB->data[katana_control_B.b_k];
    katana_control_B.b_kstr = 6 * katana_control_B.i_d + 4;
    katana_control_B.tempR[30] = vB->data[katana_control_B.b_kstr];
    katana_control_B.tempR[19] = vB->data[katana_control_B.b_k];
    katana_control_B.tempR[25] = 0.0;
    katana_control_B.b_k = 6 * katana_control_B.i_d + 3;
    katana_control_B.tempR[31] = -vB->data[katana_control_B.b_k];
    katana_control_B.tempR[20] = -vB->data[katana_control_B.b_kstr];
    katana_control_B.tempR[26] = vB->data[katana_control_B.b_k];
    katana_control_B.tempR[32] = 0.0;
    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 3;
         katana_control_B.b_kstr++) {
      katana_control_B.a_idx_1 = katana_control_B.tempR_k[3 *
        katana_control_B.b_kstr];
      katana_control_B.tempR[6 * katana_control_B.b_kstr] =
        katana_control_B.a_idx_1;
      katana_control_B.tempR[6 * katana_control_B.b_kstr + 3] = 0.0;
      katana_control_B.b_k = 6 * (katana_control_B.b_kstr + 3);
      katana_control_B.tempR[katana_control_B.b_k + 3] =
        katana_control_B.a_idx_1;
      katana_control_B.a_idx_1 = katana_control_B.tempR_k[3 *
        katana_control_B.b_kstr + 1];
      katana_control_B.tempR[6 * katana_control_B.b_kstr + 1] =
        katana_control_B.a_idx_1;
      katana_control_B.tempR[6 * katana_control_B.b_kstr + 4] = 0.0;
      katana_control_B.tempR[katana_control_B.b_k + 4] =
        katana_control_B.a_idx_1;
      katana_control_B.a_idx_1 = katana_control_B.tempR_k[3 *
        katana_control_B.b_kstr + 2];
      katana_control_B.tempR[6 * katana_control_B.b_kstr + 2] =
        katana_control_B.a_idx_1;
      katana_control_B.tempR[6 * katana_control_B.b_kstr + 5] = 0.0;
      katana_control_B.tempR[katana_control_B.b_k + 5] =
        katana_control_B.a_idx_1;
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
         katana_control_B.b_kstr++) {
      katana_control_B.X[katana_control_B.b_kstr] = 0.0;
      katana_control_B.b_I_p[katana_control_B.b_kstr] = 0.0;
      for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
           katana_control_B.b_k++) {
        katana_control_B.a_idx_0 = katana_control_B.b_I[6 * katana_control_B.b_k
          + katana_control_B.b_kstr];
        katana_control_B.loop_ub_tmp = 6 * katana_control_B.i_d +
          katana_control_B.b_k;
        katana_control_B.a_idx_1 = vB->data[katana_control_B.loop_ub_tmp] *
          katana_control_B.a_idx_0 + katana_control_B.X[katana_control_B.b_kstr];
        katana_control_B.a_idx_0 = aB->data[katana_control_B.loop_ub_tmp] *
          katana_control_B.a_idx_0 +
          katana_control_B.b_I_p[katana_control_B.b_kstr];
        katana_control_B.X[katana_control_B.b_kstr] = katana_control_B.a_idx_1;
        katana_control_B.b_I_p[katana_control_B.b_kstr] =
          katana_control_B.a_idx_0;
      }
    }

    for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
         katana_control_B.b_kstr++) {
      katana_control_B.y[katana_control_B.b_kstr] = 0.0;
      katana_control_B.a_idx_1 = 0.0;
      for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
           katana_control_B.b_k++) {
        katana_control_B.a_idx_1 += Xtree->data[katana_control_B.i_d].f1[6 *
          katana_control_B.b_kstr + katana_control_B.b_k] * 0.0;
        katana_control_B.y[katana_control_B.b_kstr] += katana_control_B.tempR[6 *
          katana_control_B.b_k + katana_control_B.b_kstr] *
          katana_control_B.X[katana_control_B.b_k];
      }

      f->data[katana_control_B.b_kstr + 6 * katana_control_B.i_d] =
        (katana_control_B.b_I_p[katana_control_B.b_kstr] +
         katana_control_B.y[katana_control_B.b_kstr]) - katana_control_B.a_idx_1;
    }
  }

  katana_control_emxFree_char_T(&switch_expression);
  katana_control_emxFree_real_T(&aB);
  katana_control_emxFree_real_T(&vB);
  katana_control_emxFree_real_T(&vJ);
  katana_cont_emxFree_f_cell_wrap(&Xtree);
  katana_control_B.loop_ub_tmp = static_cast<int32_T>(((-1.0 -
    katana_control_B.nb) + 1.0) / -1.0) - 1;
  katana_control_emxInit_real_T(&taui, 1);
  for (katana_control_B.c_tmp = 0; katana_control_B.c_tmp <=
       katana_control_B.loop_ub_tmp; katana_control_B.c_tmp++) {
    katana_control_B.a_idx_0 = katana_control_B.nb + -static_cast<real_T>
      (katana_control_B.c_tmp);
    katana_control_B.inner = static_cast<int32_T>(katana_control_B.a_idx_0);
    katana_control_B.obj_tmp = katana_control_B.inner - 1;
    obj_0 = robot->Bodies[katana_control_B.obj_tmp];
    if (!katana_control_strcmp(obj_0->JointInternal.Type)) {
      obj_0 = robot->Bodies[katana_control_B.obj_tmp];
      katana_control_B.b_kstr = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
      katana_emxEnsureCapacity_real_T(S, katana_control_B.b_kstr);
      katana_control_B.m = obj_0->JointInternal.MotionSubspace->size[0] *
        obj_0->JointInternal.MotionSubspace->size[1] - 1;
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <=
           katana_control_B.m; katana_control_B.b_kstr++) {
        S->data[katana_control_B.b_kstr] = obj_0->
          JointInternal.MotionSubspace->data[katana_control_B.b_kstr];
      }

      katana_control_B.m = S->size[1] - 1;
      katana_control_B.b_kstr = taui->size[0];
      taui->size[0] = S->size[1];
      katana_emxEnsureCapacity_real_T(taui, katana_control_B.b_kstr);
      for (katana_control_B.i_d = 0; katana_control_B.i_d <= katana_control_B.m;
           katana_control_B.i_d++) {
        katana_control_B.aoffset = katana_control_B.i_d * 6 - 1;
        katana_control_B.a_idx_1 = 0.0;
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.a_idx_1 += f->data[(static_cast<int32_T>
            (katana_control_B.a_idx_0) - 1) * 6 + katana_control_B.b_k] *
            S->data[(katana_control_B.aoffset + katana_control_B.b_k) + 1];
        }

        taui->data[katana_control_B.i_d] = katana_control_B.a_idx_1;
      }

      katana_control_B.a_idx_0 = robot->VelocityDoFMap[katana_control_B.inner -
        1];
      katana_control_B.a_idx_1 = robot->VelocityDoFMap[katana_control_B.inner +
        9];
      if (katana_control_B.a_idx_0 > katana_control_B.a_idx_1) {
        katana_control_B.i_d = 0;
        katana_control_B.b_kstr = 0;
      } else {
        katana_control_B.i_d = static_cast<int32_T>(katana_control_B.a_idx_0) -
          1;
        katana_control_B.b_kstr = static_cast<int32_T>(katana_control_B.a_idx_1);
      }

      katana_control_B.m = katana_control_B.b_kstr - katana_control_B.i_d;
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr <
           katana_control_B.m; katana_control_B.b_kstr++) {
        katana_control_B.tau[katana_control_B.i_d + katana_control_B.b_kstr] =
          taui->data[katana_control_B.b_kstr];
      }
    }

    katana_control_B.a_idx_0 = robot->Bodies[katana_control_B.obj_tmp]
      ->ParentIndex;
    if (katana_control_B.a_idx_0 > 0.0) {
      katana_control_B.m = static_cast<int32_T>(katana_control_B.a_idx_0);
      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        katana_control_B.a_idx_1 = 0.0;
        for (katana_control_B.b_k = 0; katana_control_B.b_k < 6;
             katana_control_B.b_k++) {
          katana_control_B.a_idx_1 += f->data[(katana_control_B.inner - 1) * 6 +
            katana_control_B.b_k] * X->data[katana_control_B.obj_tmp].f1[6 *
            katana_control_B.b_kstr + katana_control_B.b_k];
        }

        katana_control_B.a0[katana_control_B.b_kstr] = f->data
          [(katana_control_B.m - 1) * 6 + katana_control_B.b_kstr] +
          katana_control_B.a_idx_1;
      }

      for (katana_control_B.b_kstr = 0; katana_control_B.b_kstr < 6;
           katana_control_B.b_kstr++) {
        f->data[katana_control_B.b_kstr + 6 * (katana_control_B.m - 1)] =
          katana_control_B.a0[katana_control_B.b_kstr];
      }
    }
  }

  katana_control_emxFree_real_T(&taui);
  katana_control_emxFree_real_T(&S);
  katana_control_emxFree_real_T(&f);
  katana_cont_emxFree_f_cell_wrap(&X);
  for (katana_control_B.i_d = 0; katana_control_B.i_d < 7; katana_control_B.i_d
       ++) {
    jointTorq[katana_control_B.i_d] = static_cast<real32_T>
      (katana_control_B.tau[katana_control_B.i_d]);
  }
}

static void katana_control_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_katana_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_katana_control_331.getLatestMessage
    (&katana_control_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = katana_control_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    katana_control_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    katana_control_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    katana_control_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0], &katana_control_B.b_varargout_2.Layout.Dim
         [0], sizeof(SL_Bus_katana_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    katana_control_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    katana_control_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void matlabCodegenHandle_ma_fvdnt1up(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_contr_T
  *pStruct)
{
  katana_control_emxFree_char_T(&pStruct->Type);
  katana_control_emxFree_real_T(&pStruct->MotionSubspace);
}

static void emxFreeStruct_s_robotics_manip_(s_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxFreeStruct_t_robotics_manip_(t_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxFreeStruct_s_robotics_manip_(&pStruct->Base);
}

static void emxFreeStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxFreeStruct_t_robotics_manip_(&pStruct->TreeInternal);
}

static void emxFreeStruct_r_robotics_manip_(r_robotics_manip_internal_Rig_T
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

static void matlabCodegenHandle_mat_fvdnt1u(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_katana_contr_T
  *pStruct)
{
  katana_control_emxInit_char_T(&pStruct->Type, 2);
  katana_control_emxInit_real_T(&pStruct->MotionSubspace, 2);
}

static void emxInitStruct_s_robotics_manip_(s_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static void emxInitStruct_t_robotics_manip_(t_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_s_robotics_manip_(&pStruct->Base);
}

static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct)
{
  emxInitStruct_t_robotics_manip_(&pStruct->TreeInternal);
}

static void emxInitStruct_r_robotics_manip_(r_robotics_manip_internal_Rig_T
  *pStruct)
{
  emxInitStruct_c_rigidBodyJoint(&pStruct->JointInternal);
}

static r_robotics_manip_internal_Rig_T *katana_cont_RigidBody_RigidBody
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *katana_co_RigidBody_RigidBody_f
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *katana_c_RigidBody_RigidBody_fv
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *katana__RigidBody_RigidBody_fvd
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *katana_RigidBody_RigidBody_fvdn
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *katan_RigidBody_RigidBody_fvdnt
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *kata_RigidBody_RigidBody_fvdnt1
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *kat_RigidBody_RigidBody_fvdnt1u
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *ka_RigidBody_RigidBody_fvdnt1up
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static r_robotics_manip_internal_Rig_T *k_RigidBody_RigidBody_fvdnt1upy
  (r_robotics_manip_internal_Rig_T *obj)
{
  r_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
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

static s_robotics_manip_internal_Rig_T *RigidBody_RigidBody_fvdnt1upyz
  (s_robotics_manip_internal_Rig_T *obj)
{
  s_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_katana_contro_T *switch_expression;
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

  katana_control_emxInit_char_T(&switch_expression, 2);
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

  katana_control_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      katana_control_B.msubspace_data[b_kstr] = tmp[b_kstr];
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
      katana_control_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      katana_control_B.msubspace_data[b_kstr] = 0;
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
      katana_control_B.msubspace_data[b_kstr];
  }

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
  int32_T i;
  static const int8_T tmp[20] = { 0, 1, 2, 3, 4, 5, 0, 6, 7, 0, -1, 1, 2, 3, 4,
    5, -1, 6, 7, -1 };

  b_obj = obj;
  obj->Bodies[0] = katana_cont_RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = katana_co_RigidBody_RigidBody_f(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = katana_c_RigidBody_RigidBody_fv(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = katana__RigidBody_RigidBody_fvd(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = katana_RigidBody_RigidBody_fvdn(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = katan_RigidBody_RigidBody_fvdnt(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = kata_RigidBody_RigidBody_fvdnt1(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = kat_RigidBody_RigidBody_fvdnt1u(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = ka_RigidBody_RigidBody_fvdnt1up(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = k_RigidBody_RigidBody_fvdnt1upy(iobj_8);
  obj->Bodies[9]->Index = 10.0;
  obj->NumBodies = 10.0;
  obj->Gravity[0] = 0.0;
  obj->Gravity[1] = 0.0;
  obj->Gravity[2] = -9.81;
  for (i = 0; i < 20; i++) {
    obj->PositionDoFMap[i] = tmp[i];
  }

  for (i = 0; i < 20; i++) {
    obj->VelocityDoFMap[i] = tmp[i];
  }

  RigidBody_RigidBody_fvdnt1upyz(&obj->Base);
  return b_obj;
}

// Model step function
void katana_control_step(void)
{
  // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S12>/In1'

  katana_contro_SystemCore_step_f(&katana_control_B.b_varargout_1,
    katana_control_B.b_varargout_2_Data,
    &katana_control_B.b_varargout_2_Data_SL_Info_Curr,
    &katana_control_B.b_varargout_2_Data_SL_Info_Rece,
    &katana_control_B.b_varargout_2_Layout_DataOffset,
    katana_control_B.b_varargout_2_Layout_Dim,
    &katana_control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &katana_control_B.b_varargout_2_Layout_Dim_SL_I_o);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (katana_control_B.b_varargout_1) {
    for (katana_control_B.i = 0; katana_control_B.i < 14; katana_control_B.i++)
    {
      katana_control_B.In1_a.Data[katana_control_B.i] =
        katana_control_B.b_varargout_2_Data[katana_control_B.i];
    }

    katana_control_B.In1_a.Data_SL_Info.CurrentLength =
      katana_control_B.b_varargout_2_Data_SL_Info_Curr;
    katana_control_B.In1_a.Data_SL_Info.ReceivedLength =
      katana_control_B.b_varargout_2_Data_SL_Info_Rece;
    katana_control_B.In1_a.Layout.DataOffset =
      katana_control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&katana_control_B.In1_a.Layout.Dim[0],
           &katana_control_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_katana_control_std_msgs_MultiArrayDimension) << 4U);
    katana_control_B.In1_a.Layout.Dim_SL_Info.CurrentLength =
      katana_control_B.b_varargout_2_Layout_Dim_SL_Inf;
    katana_control_B.In1_a.Layout.Dim_SL_Info.ReceivedLength =
      katana_control_B.b_varargout_2_Layout_Dim_SL_I_o;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe1'

  // RateTransition: '<S4>/Rate Transition3'
  if (katana_control_M->Timing.TaskCounters.TID[1] == 0) {
    for (katana_control_B.i = 0; katana_control_B.i < 14; katana_control_B.i++)
    {
      katana_control_B.RateTransition3[katana_control_B.i] =
        katana_control_B.In1_a.Data[katana_control_B.i];
    }

    // MATLABSystem: '<S5>/MATLAB System'
    kat_GravityTorqueBlock_stepImpl(&katana_control_DW.obj,
      &katana_control_B.In1_a.Data[0], katana_control_B.MATLABSystem);
  }

  // End of RateTransition: '<S4>/Rate Transition3'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S11>/In1'

  katana_control_SystemCore_step(&katana_control_B.b_varargout_1,
    katana_control_B.TmpSignalConversionAtSFunct,
    &katana_control_B.b_varargout_2_Data_SL_Info_Curr,
    &katana_control_B.b_varargout_2_Data_SL_Info_Rece,
    &katana_control_B.b_varargout_2_Layout_DataOffset,
    katana_control_B.b_varargout_2_Layout_Dim,
    &katana_control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &katana_control_B.b_varargout_2_Layout_Dim_SL_I_o);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S11>/Enable'

  if (katana_control_B.b_varargout_1) {
    for (katana_control_B.i = 0; katana_control_B.i < 7; katana_control_B.i++) {
      katana_control_B.In1.Data[katana_control_B.i] =
        katana_control_B.TmpSignalConversionAtSFunct[katana_control_B.i];
    }

    katana_control_B.In1.Data_SL_Info.CurrentLength =
      katana_control_B.b_varargout_2_Data_SL_Info_Curr;
    katana_control_B.In1.Data_SL_Info.ReceivedLength =
      katana_control_B.b_varargout_2_Data_SL_Info_Rece;
    katana_control_B.In1.Layout.DataOffset =
      katana_control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&katana_control_B.In1.Layout.Dim[0],
           &katana_control_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_katana_control_std_msgs_MultiArrayDimension) << 4U);
    katana_control_B.In1.Layout.Dim_SL_Info.CurrentLength =
      katana_control_B.b_varargout_2_Layout_Dim_SL_Inf;
    katana_control_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      katana_control_B.b_varargout_2_Layout_Dim_SL_I_o;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe'

  // RateTransition: '<S4>/Rate Transition2'
  if (katana_control_M->Timing.TaskCounters.TID[1] == 0) {
    // SignalConversion generated from: '<S6>/ SFunction ' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function1'
    //   MATLABSystem: '<S2>/Get Parameter'
    //   MATLABSystem: '<S2>/Get Parameter1'
    //   MATLABSystem: '<S2>/Get Parameter2'
    //   MATLABSystem: '<S2>/Get Parameter3'
    //   MATLABSystem: '<S2>/Get Parameter4'
    //   MATLABSystem: '<S2>/Get Parameter5'
    //   MATLABSystem: '<S2>/Get Parameter6'

    ParamGet_katana_control_343.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[0]);
    ParamGet_katana_control_344.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[1]);
    ParamGet_katana_control_349.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[2]);
    ParamGet_katana_control_350.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[3]);
    ParamGet_katana_control_351.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[4]);
    ParamGet_katana_control_352.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[5]);
    ParamGet_katana_control_353.get_parameter
      (&katana_control_B.TmpSignalConversionAtSFunct[6]);
    for (katana_control_B.i = 0; katana_control_B.i < 7; katana_control_B.i++) {
      // MATLAB Function: '<S1>/MATLAB Function1'
      katana_control_B.torque[katana_control_B.i] = static_cast<real32_T>
        ((katana_control_B.RateTransition3[katana_control_B.i] -
          static_cast<real32_T>(katana_control_B.In1.Data[katana_control_B.i])) *
         katana_control_B.TmpSignalConversionAtSFunct[katana_control_B.i]) +
        katana_control_B.MATLABSystem[katana_control_B.i];

      // RateTransition: '<S3>/Rate Transition1'
      katana_control_B.RateTransition1[katana_control_B.i] =
        katana_control_DW.RateTransition1_Buffer0[katana_control_B.i];
    }
  }

  // End of RateTransition: '<S4>/Rate Transition2'

  // BusAssignment: '<S3>/Bus Assignment1' incorporates:
  //   Constant: '<S3>/Constant'
  //   Constant: '<S7>/Constant'

  katana_control_B.BusAssignment1 = katana_control_P.Constant_Value_f;
  for (katana_control_B.i = 0; katana_control_B.i < 7; katana_control_B.i++) {
    katana_control_B.BusAssignment1.Data[katana_control_B.i] =
      katana_control_B.RateTransition1[katana_control_B.i];
  }

  katana_control_B.BusAssignment1.Data_SL_Info.CurrentLength =
    katana_control_P.Constant_Value_g;
  katana_control_B.BusAssignment1.Data_SL_Info.ReceivedLength =
    katana_control_P.Constant_Value_g;

  // End of BusAssignment: '<S3>/Bus Assignment1'

  // Outputs for Atomic SubSystem: '<S3>/Publish1'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_katana_control_321.publish(&katana_control_B.BusAssignment1);

  // End of Outputs for SubSystem: '<S3>/Publish1'

  // Update for RateTransition: '<S3>/Rate Transition1'
  if (katana_control_M->Timing.TaskCounters.TID[1] == 0) {
    for (katana_control_B.i = 0; katana_control_B.i < 7; katana_control_B.i++) {
      katana_control_DW.RateTransition1_Buffer0[katana_control_B.i] =
        katana_control_B.torque[katana_control_B.i];
    }
  }

  // End of Update for RateTransition: '<S3>/Rate Transition1'
  rate_scheduler();
}

// Model initialize function
void katana_control_initialize(void)
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

    static const char_T tmp_1[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

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

    // Start for RateTransition: '<S3>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      katana_control_B.RateTransition1[i] =
        katana_control_P.RateTransition1_InitialConditio;
    }

    // End of Start for RateTransition: '<S3>/Rate Transition1'

    // InitializeConditions for RateTransition: '<S3>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      katana_control_DW.RateTransition1_Buffer0[i] =
        katana_control_P.RateTransition1_InitialConditio;
    }

    // End of InitializeConditions for RateTransition: '<S3>/Rate Transition1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    katana_control_B.In1_a = katana_control_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    katana_control_DW.obj_b.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_b.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      katana_control_B.cv[i] = tmp[i];
    }

    katana_control_B.cv[16] = '\x00';
    Sub_katana_control_332.createSubscriber(katana_control_B.cv, 1);
    katana_control_DW.obj_b.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S11>/Out1'
    katana_control_B.In1 = katana_control_P.Out1_Y0_o;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    katana_control_DW.obj_a.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      katana_control_B.cv[i] = tmp_0[i];
    }

    katana_control_B.cv[16] = '\x00';
    Sub_katana_control_331.createSubscriber(katana_control_B.cv, 1);
    katana_control_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    katana_control_DW.obj_lv.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_lv.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      katana_control_B.cv1[i] = tmp_1[i];
    }

    katana_control_B.cv1[14] = '\x00';
    Pub_katana_control_321.createPublisher(katana_control_B.cv1, 1);
    katana_control_DW.obj_lv.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Publish1'
    emxInitStruct_robotics_slmanip_(&katana_control_DW.obj);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_1);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_20);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_19);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_18);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_17);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_16);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_15);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_14);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_13);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_12);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_11);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_10);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_9);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_8);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_7);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_6);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_5);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_4);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_3);
    emxInitStruct_r_robotics_manip_(&katana_control_DW.gobj_2);

    // Start for MATLABSystem: '<S5>/MATLAB System'
    katana_control_DW.obj.isInitialized = 0;
    katana_control_DW.obj.isInitialized = 1;
    kat_RigidBodyTree_RigidBodyTree(&katana_control_DW.obj.TreeInternal,
      &katana_control_DW.gobj_2, &katana_control_DW.gobj_4,
      &katana_control_DW.gobj_5, &katana_control_DW.gobj_6,
      &katana_control_DW.gobj_7, &katana_control_DW.gobj_8,
      &katana_control_DW.gobj_9, &katana_control_DW.gobj_10,
      &katana_control_DW.gobj_11, &katana_control_DW.gobj_3);

    // Start for MATLABSystem: '<S2>/Get Parameter'
    katana_control_DW.obj_l.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_2[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_343.initialize(katana_control_B.cv2);
    ParamGet_katana_control_343.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_343.set_initial_value(0.0);
    katana_control_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter'

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    katana_control_DW.obj_p.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_3[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_344.initialize(katana_control_B.cv2);
    ParamGet_katana_control_344.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_344.set_initial_value(0.0);
    katana_control_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter1'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    katana_control_DW.obj_m.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_4[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_349.initialize(katana_control_B.cv2);
    ParamGet_katana_control_349.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_349.set_initial_value(0.0);
    katana_control_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter2'

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    katana_control_DW.obj_f.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_5[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_350.initialize(katana_control_B.cv2);
    ParamGet_katana_control_350.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_350.set_initial_value(0.0);
    katana_control_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter3'

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    katana_control_DW.obj_py.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_py.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_6[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_351.initialize(katana_control_B.cv2);
    ParamGet_katana_control_351.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_351.set_initial_value(0.0);
    katana_control_DW.obj_py.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter4'

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    katana_control_DW.obj_h.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_7[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_352.initialize(katana_control_B.cv2);
    ParamGet_katana_control_352.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_352.set_initial_value(0.0);
    katana_control_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter5'

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    katana_control_DW.obj_pg.matlabCodegenIsDeleted = false;
    katana_control_DW.obj_pg.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      katana_control_B.cv2[i] = tmp_8[i];
    }

    katana_control_B.cv2[11] = '\x00';
    ParamGet_katana_control_353.initialize(katana_control_B.cv2);
    ParamGet_katana_control_353.initialize_error_codes(0, 1, 2, 3);
    ParamGet_katana_control_353.set_initial_value(0.0);
    katana_control_DW.obj_pg.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter6'
  }
}

// Model terminate function
void katana_control_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHandle_ma_fvdnt1up(&katana_control_DW.obj_b);

  // End of Terminate for SubSystem: '<S4>/Subscribe1'
  emxFreeStruct_robotics_slmanip_(&katana_control_DW.obj);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_1);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_20);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_19);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_18);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_17);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_16);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_15);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_14);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_13);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_12);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_11);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_10);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_9);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_8);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_7);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_6);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_5);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_4);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_3);
  emxFreeStruct_r_robotics_manip_(&katana_control_DW.gobj_2);

  // Terminate for Atomic SubSystem: '<S4>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHandle_ma_fvdnt1up(&katana_control_DW.obj_a);

  // End of Terminate for SubSystem: '<S4>/Subscribe'

  // Terminate for MATLABSystem: '<S2>/Get Parameter'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_l);

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_p);

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_m);

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_f);

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_py);

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_h);

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  matlabCodegenHandle_matlabCodeg(&katana_control_DW.obj_pg);

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHandle_mat_fvdnt1u(&katana_control_DW.obj_lv);

  // End of Terminate for SubSystem: '<S3>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
