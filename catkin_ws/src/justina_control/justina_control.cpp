//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: justina_control.cpp
//
// Code generated for Simulink model 'justina_control'.
//
// Model version                  : 1.263
// Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
// C/C++ source code generated on : Sun Oct  4 14:49:08 2020
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "justina_control.h"
#include "justina_control_private.h"

// Block signals (default storage)
B_justina_control_T justina_control_B;

// Block states (default storage)
DW_justina_control_T justina_control_DW;

// Real-time model
RT_MODEL_justina_control_T justina_control_M_ = RT_MODEL_justina_control_T();
RT_MODEL_justina_control_T *const justina_control_M = &justina_control_M_;

// Forward declaration for local functions
static void justina_contr_SystemCore_step_a(boolean_T *varargout_1, real32_T
  varargout_2_Data[14], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void justina_control_emxInit_real_T(emxArray_real_T_justina_contr_T
  **pEmxArray, int32_T numDimensions);
static void justin_emxEnsureCapacity_real_T(emxArray_real_T_justina_contr_T
  *emxArray, int32_T oldNumel);
static void justina_con_emxInit_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray, int32_T numDimensions);
static void j_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  *emxArray, int32_T oldNumel);
static void justina_control_eye(real_T b_I[36]);
static void justina_control_emxInit_char_T(emxArray_char_T_justina_contr_T
  **pEmxArray, int32_T numDimensions);
static void justin_emxEnsureCapacity_char_T(emxArray_char_T_justina_contr_T
  *emxArray, int32_T oldNumel);
static void ju_rigidBodyJoint_get_JointAxis(const
  c_rigidBodyJoint_justina_cont_T *obj, real_T ax[3]);
static void justina_control_cat(real_T varargin_1, real_T varargin_2, real_T
  varargin_3, real_T varargin_4, real_T varargin_5, real_T varargin_6, real_T
  varargin_7, real_T varargin_8, real_T varargin_9, real_T y[9]);
static void rigidBodyJoint_transformBodyToP(const
  c_rigidBodyJoint_justina_cont_T *obj, real_T T[16]);
static void justina_control_emxFree_char_T(emxArray_char_T_justina_contr_T
  **pEmxArray);
static void justina_control_emxFree_real_T(emxArray_real_T_justina_contr_T
  **pEmxArray);
static void justina_con_emxFree_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray);
static boolean_T justina_control_strcmp(const emxArray_char_T_justina_contr_T *a);
static void jus_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real32_T q[7], real32_T jointTorq[7]);
static void justina_control_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void justina_cont_SystemCore_step_ad(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0);
static void matlabCodegenHa_adssxyfyxoejjze(ros_slros_internal_block_Subs_T *obj);
static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_cont_T
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
static void matlabCodegenHan_adssxyfyxoejjz(ros_slros_internal_block_Publ_T *obj);
static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_cont_T
  *pStruct);
static void emxInitStruct_p_robotics_manip_(p_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_q_robotics_manip_(q_robotics_manip_internal_Rig_T
  *pStruct);
static void emxInitStruct_robotics_slmanip_(robotics_slmanip_internal_blo_T
  *pStruct);
static void emxInitStruct_o_robotics_manip_(o_robotics_manip_internal_Rig_T
  *pStruct);
static o_robotics_manip_internal_Rig_T *justina_con_RigidBody_RigidBody
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina_c_RigidBody_RigidBody_a
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina__RigidBody_RigidBody_ad
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justina_RigidBody_RigidBody_ads
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justin_RigidBody_RigidBody_adss
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *justi_RigidBody_RigidBody_adssx
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *just_RigidBody_RigidBody_adssxy
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *jus_RigidBody_RigidBody_adssxyf
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *ju_RigidBody_RigidBody_adssxyfy
  (o_robotics_manip_internal_Rig_T *obj);
static o_robotics_manip_internal_Rig_T *j_RigidBody_RigidBody_adssxyfyx
  (o_robotics_manip_internal_Rig_T *obj);
static p_robotics_manip_internal_Rig_T *RigidBody_RigidBody_adssxyfyxo
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

  (justina_control_M->Timing.TaskCounters.TID[1])++;
  if ((justina_control_M->Timing.TaskCounters.TID[1]) > 249) {// Sample time: [1.0s, 0.0s] 
    justina_control_M->Timing.TaskCounters.TID[1] = 0;
  }
}

static void justina_contr_SystemCore_step_a(boolean_T *varargout_1, real32_T
  varargout_2_Data[14], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_justina_control_318.getLatestMessage
    (&justina_control_B.b_varargout_2_c);
  for (i = 0; i < 14; i++) {
    varargout_2_Data[i] = justina_control_B.b_varargout_2_c.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_control_B.b_varargout_2_c.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_control_B.b_varargout_2_c.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    justina_control_B.b_varargout_2_c.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0],
         &justina_control_B.b_varargout_2_c.Layout.Dim[0], sizeof
         (SL_Bus_justina_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_control_B.b_varargout_2_c.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_control_B.b_varargout_2_c.Layout.Dim_SL_Info.ReceivedLength;
}

static void justina_control_emxInit_real_T(emxArray_real_T_justina_contr_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_real_T_justina_contr_T *emxArray;
  *pEmxArray = (emxArray_real_T_justina_contr_T *)malloc(sizeof
    (emxArray_real_T_justina_contr_T));
  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_control_B.i_f = 0; justina_control_B.i_f < numDimensions;
       justina_control_B.i_f++) {
    emxArray->size[justina_control_B.i_f] = 0;
  }
}

static void justin_emxEnsureCapacity_real_T(emxArray_real_T_justina_contr_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_control_B.newNumel = 1;
  for (justina_control_B.i_ln = 0; justina_control_B.i_ln <
       emxArray->numDimensions; justina_control_B.i_ln++) {
    justina_control_B.newNumel *= emxArray->size[justina_control_B.i_ln];
  }

  if (justina_control_B.newNumel > emxArray->allocatedSize) {
    justina_control_B.i_ln = emxArray->allocatedSize;
    if (justina_control_B.i_ln < 16) {
      justina_control_B.i_ln = 16;
    }

    while (justina_control_B.i_ln < justina_control_B.newNumel) {
      if (justina_control_B.i_ln > 1073741823) {
        justina_control_B.i_ln = MAX_int32_T;
      } else {
        justina_control_B.i_ln <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_control_B.i_ln), sizeof
                     (real_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(real_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (real_T *)newData;
    emxArray->allocatedSize = justina_control_B.i_ln;
    emxArray->canFreeData = true;
  }
}

static void justina_con_emxInit_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_f_cell_wrap_justina__T *emxArray;
  *pEmxArray = (emxArray_f_cell_wrap_justina__T *)malloc(sizeof
    (emxArray_f_cell_wrap_justina__T));
  emxArray = *pEmxArray;
  emxArray->data = (f_cell_wrap_justina_control_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_control_B.i_j = 0; justina_control_B.i_j < numDimensions;
       justina_control_B.i_j++) {
    emxArray->size[justina_control_B.i_j] = 0;
  }
}

static void j_emxEnsureCapacity_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_control_B.newNumel_d = 1;
  for (justina_control_B.i_e = 0; justina_control_B.i_e <
       emxArray->numDimensions; justina_control_B.i_e++) {
    justina_control_B.newNumel_d *= emxArray->size[justina_control_B.i_e];
  }

  if (justina_control_B.newNumel_d > emxArray->allocatedSize) {
    justina_control_B.i_e = emxArray->allocatedSize;
    if (justina_control_B.i_e < 16) {
      justina_control_B.i_e = 16;
    }

    while (justina_control_B.i_e < justina_control_B.newNumel_d) {
      if (justina_control_B.i_e > 1073741823) {
        justina_control_B.i_e = MAX_int32_T;
      } else {
        justina_control_B.i_e <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_control_B.i_e), sizeof
                     (f_cell_wrap_justina_control_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(f_cell_wrap_justina_control_T)
             * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (f_cell_wrap_justina_control_T *)newData;
    emxArray->allocatedSize = justina_control_B.i_e;
    emxArray->canFreeData = true;
  }
}

static void justina_control_eye(real_T b_I[36])
{
  int32_T b_k;
  memset(&b_I[0], 0, 36U * sizeof(real_T));
  for (b_k = 0; b_k < 6; b_k++) {
    b_I[b_k + 6 * b_k] = 1.0;
  }
}

static void justina_control_emxInit_char_T(emxArray_char_T_justina_contr_T
  **pEmxArray, int32_T numDimensions)
{
  emxArray_char_T_justina_contr_T *emxArray;
  *pEmxArray = (emxArray_char_T_justina_contr_T *)malloc(sizeof
    (emxArray_char_T_justina_contr_T));
  emxArray = *pEmxArray;
  emxArray->data = (char_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)malloc(sizeof(int32_T) * numDimensions);
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (justina_control_B.i_a = 0; justina_control_B.i_a < numDimensions;
       justina_control_B.i_a++) {
    emxArray->size[justina_control_B.i_a] = 0;
  }
}

static void justin_emxEnsureCapacity_char_T(emxArray_char_T_justina_contr_T
  *emxArray, int32_T oldNumel)
{
  void *newData;
  if (oldNumel < 0) {
    oldNumel = 0;
  }

  justina_control_B.newNumel_h = 1;
  for (justina_control_B.i_b = 0; justina_control_B.i_b <
       emxArray->numDimensions; justina_control_B.i_b++) {
    justina_control_B.newNumel_h *= emxArray->size[justina_control_B.i_b];
  }

  if (justina_control_B.newNumel_h > emxArray->allocatedSize) {
    justina_control_B.i_b = emxArray->allocatedSize;
    if (justina_control_B.i_b < 16) {
      justina_control_B.i_b = 16;
    }

    while (justina_control_B.i_b < justina_control_B.newNumel_h) {
      if (justina_control_B.i_b > 1073741823) {
        justina_control_B.i_b = MAX_int32_T;
      } else {
        justina_control_B.i_b <<= 1;
      }
    }

    newData = calloc(static_cast<uint32_T>(justina_control_B.i_b), sizeof(char_T));
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, sizeof(char_T) * oldNumel);
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = (char_T *)newData;
    emxArray->allocatedSize = justina_control_B.i_b;
    emxArray->canFreeData = true;
  }
}

static void ju_rigidBodyJoint_get_JointAxis(const
  c_rigidBodyJoint_justina_cont_T *obj, real_T ax[3])
{
  static const char_T tmp[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  static const char_T tmp_0[9] = { 'p', 'r', 'i', 's', 'm', 'a', 't', 'i', 'c' };

  boolean_T guard1 = false;
  int32_T exitg1;
  for (justina_control_B.b_kstr_b = 0; justina_control_B.b_kstr_b < 8;
       justina_control_B.b_kstr_b++) {
    justina_control_B.b_n[justina_control_B.b_kstr_b] =
      tmp[justina_control_B.b_kstr_b];
  }

  justina_control_B.b_bool_n = false;
  if (obj->Type->size[1] == 8) {
    justina_control_B.b_kstr_b = 1;
    do {
      exitg1 = 0;
      if (justina_control_B.b_kstr_b - 1 < 8) {
        justina_control_B.kstr_n = justina_control_B.b_kstr_b - 1;
        if (obj->Type->data[justina_control_B.kstr_n] !=
            justina_control_B.b_n[justina_control_B.kstr_n]) {
          exitg1 = 1;
        } else {
          justina_control_B.b_kstr_b++;
        }
      } else {
        justina_control_B.b_bool_n = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  guard1 = false;
  if (justina_control_B.b_bool_n) {
    guard1 = true;
  } else {
    for (justina_control_B.b_kstr_b = 0; justina_control_B.b_kstr_b < 9;
         justina_control_B.b_kstr_b++) {
      justina_control_B.b_g[justina_control_B.b_kstr_b] =
        tmp_0[justina_control_B.b_kstr_b];
    }

    justina_control_B.b_bool_n = false;
    if (obj->Type->size[1] == 9) {
      justina_control_B.b_kstr_b = 1;
      do {
        exitg1 = 0;
        if (justina_control_B.b_kstr_b - 1 < 9) {
          justina_control_B.kstr_n = justina_control_B.b_kstr_b - 1;
          if (obj->Type->data[justina_control_B.kstr_n] !=
              justina_control_B.b_g[justina_control_B.kstr_n]) {
            exitg1 = 1;
          } else {
            justina_control_B.b_kstr_b++;
          }
        } else {
          justina_control_B.b_bool_n = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_control_B.b_bool_n) {
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

static void justina_control_cat(real_T varargin_1, real_T varargin_2, real_T
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
  c_rigidBodyJoint_justina_cont_T *obj, real_T T[16])
{
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  for (justina_control_B.b_kstr_o = 0; justina_control_B.b_kstr_o < 5;
       justina_control_B.b_kstr_o++) {
    justina_control_B.b_d[justina_control_B.b_kstr_o] =
      tmp[justina_control_B.b_kstr_o];
  }

  justina_control_B.b_bool_o = false;
  if (obj->Type->size[1] == 5) {
    justina_control_B.b_kstr_o = 1;
    do {
      exitg1 = 0;
      if (justina_control_B.b_kstr_o - 1 < 5) {
        justina_control_B.kstr = justina_control_B.b_kstr_o - 1;
        if (obj->Type->data[justina_control_B.kstr] !=
            justina_control_B.b_d[justina_control_B.kstr]) {
          exitg1 = 1;
        } else {
          justina_control_B.b_kstr_o++;
        }
      } else {
        justina_control_B.b_bool_o = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  if (justina_control_B.b_bool_o) {
    justina_control_B.b_kstr_o = 0;
  } else {
    for (justina_control_B.b_kstr_o = 0; justina_control_B.b_kstr_o < 8;
         justina_control_B.b_kstr_o++) {
      justina_control_B.b_m[justina_control_B.b_kstr_o] =
        tmp_0[justina_control_B.b_kstr_o];
    }

    justina_control_B.b_bool_o = false;
    if (obj->Type->size[1] == 8) {
      justina_control_B.b_kstr_o = 1;
      do {
        exitg1 = 0;
        if (justina_control_B.b_kstr_o - 1 < 8) {
          justina_control_B.kstr = justina_control_B.b_kstr_o - 1;
          if (obj->Type->data[justina_control_B.kstr] !=
              justina_control_B.b_m[justina_control_B.kstr]) {
            exitg1 = 1;
          } else {
            justina_control_B.b_kstr_o++;
          }
        } else {
          justina_control_B.b_bool_o = true;
          exitg1 = 1;
        }
      } while (exitg1 == 0);
    }

    if (justina_control_B.b_bool_o) {
      justina_control_B.b_kstr_o = 1;
    } else {
      justina_control_B.b_kstr_o = -1;
    }
  }

  switch (justina_control_B.b_kstr_o) {
   case 0:
    memset(&justina_control_B.TJ[0], 0, sizeof(real_T) << 4U);
    justina_control_B.TJ[0] = 1.0;
    justina_control_B.TJ[5] = 1.0;
    justina_control_B.TJ[10] = 1.0;
    justina_control_B.TJ[15] = 1.0;
    break;

   case 1:
    ju_rigidBodyJoint_get_JointAxis(obj, justina_control_B.v_f);
    justina_control_B.axang_idx_0 = justina_control_B.v_f[0];
    justina_control_B.axang_idx_1 = justina_control_B.v_f[1];
    justina_control_B.axang_idx_2 = justina_control_B.v_f[2];
    justina_control_B.b_gu = 1.0 / sqrt((justina_control_B.axang_idx_0 *
      justina_control_B.axang_idx_0 + justina_control_B.axang_idx_1 *
      justina_control_B.axang_idx_1) + justina_control_B.axang_idx_2 *
      justina_control_B.axang_idx_2);
    justina_control_B.v_f[0] = justina_control_B.axang_idx_0 *
      justina_control_B.b_gu;
    justina_control_B.v_f[1] = justina_control_B.axang_idx_1 *
      justina_control_B.b_gu;
    justina_control_B.v_f[2] = justina_control_B.axang_idx_2 *
      justina_control_B.b_gu;
    justina_control_B.axang_idx_0 = justina_control_B.v_f[1] *
      justina_control_B.v_f[0] * 0.0;
    justina_control_B.axang_idx_1 = justina_control_B.v_f[2] *
      justina_control_B.v_f[0] * 0.0;
    justina_control_B.axang_idx_2 = justina_control_B.v_f[2] *
      justina_control_B.v_f[1] * 0.0;
    justina_control_cat(justina_control_B.v_f[0] * justina_control_B.v_f[0] *
                        0.0 + 1.0, justina_control_B.axang_idx_0 -
                        justina_control_B.v_f[2] * 0.0,
                        justina_control_B.axang_idx_1 + justina_control_B.v_f[1]
                        * 0.0, justina_control_B.axang_idx_0 +
                        justina_control_B.v_f[2] * 0.0, justina_control_B.v_f[1]
                        * justina_control_B.v_f[1] * 0.0 + 1.0,
                        justina_control_B.axang_idx_2 - justina_control_B.v_f[0]
                        * 0.0, justina_control_B.axang_idx_1 -
                        justina_control_B.v_f[1] * 0.0,
                        justina_control_B.axang_idx_2 + justina_control_B.v_f[0]
                        * 0.0, justina_control_B.v_f[2] * justina_control_B.v_f
                        [2] * 0.0 + 1.0, justina_control_B.tempR_p);
    for (justina_control_B.b_kstr_o = 0; justina_control_B.b_kstr_o < 3;
         justina_control_B.b_kstr_o++) {
      justina_control_B.kstr = justina_control_B.b_kstr_o + 1;
      justina_control_B.R_b[justina_control_B.kstr - 1] =
        justina_control_B.tempR_p[(justina_control_B.kstr - 1) * 3];
      justina_control_B.kstr = justina_control_B.b_kstr_o + 1;
      justina_control_B.R_b[justina_control_B.kstr + 2] =
        justina_control_B.tempR_p[(justina_control_B.kstr - 1) * 3 + 1];
      justina_control_B.kstr = justina_control_B.b_kstr_o + 1;
      justina_control_B.R_b[justina_control_B.kstr + 5] =
        justina_control_B.tempR_p[(justina_control_B.kstr - 1) * 3 + 2];
    }

    memset(&justina_control_B.TJ[0], 0, sizeof(real_T) << 4U);
    for (justina_control_B.b_kstr_o = 0; justina_control_B.b_kstr_o < 3;
         justina_control_B.b_kstr_o++) {
      justina_control_B.kstr = justina_control_B.b_kstr_o << 2;
      justina_control_B.TJ[justina_control_B.kstr] = justina_control_B.R_b[3 *
        justina_control_B.b_kstr_o];
      justina_control_B.TJ[justina_control_B.kstr + 1] = justina_control_B.R_b[3
        * justina_control_B.b_kstr_o + 1];
      justina_control_B.TJ[justina_control_B.kstr + 2] = justina_control_B.R_b[3
        * justina_control_B.b_kstr_o + 2];
    }

    justina_control_B.TJ[15] = 1.0;
    break;

   default:
    ju_rigidBodyJoint_get_JointAxis(obj, justina_control_B.v_f);
    memset(&justina_control_B.tempR_p[0], 0, 9U * sizeof(real_T));
    justina_control_B.tempR_p[0] = 1.0;
    justina_control_B.tempR_p[4] = 1.0;
    justina_control_B.tempR_p[8] = 1.0;
    for (justina_control_B.b_kstr_o = 0; justina_control_B.b_kstr_o < 3;
         justina_control_B.b_kstr_o++) {
      justina_control_B.kstr = justina_control_B.b_kstr_o << 2;
      justina_control_B.TJ[justina_control_B.kstr] = justina_control_B.tempR_p[3
        * justina_control_B.b_kstr_o];
      justina_control_B.TJ[justina_control_B.kstr + 1] =
        justina_control_B.tempR_p[3 * justina_control_B.b_kstr_o + 1];
      justina_control_B.TJ[justina_control_B.kstr + 2] =
        justina_control_B.tempR_p[3 * justina_control_B.b_kstr_o + 2];
      justina_control_B.TJ[justina_control_B.b_kstr_o + 12] =
        justina_control_B.v_f[justina_control_B.b_kstr_o] * 0.0;
    }

    justina_control_B.TJ[3] = 0.0;
    justina_control_B.TJ[7] = 0.0;
    justina_control_B.TJ[11] = 0.0;
    justina_control_B.TJ[15] = 1.0;
    break;
  }

  for (justina_control_B.b_kstr_o = 0; justina_control_B.b_kstr_o < 4;
       justina_control_B.b_kstr_o++) {
    for (justina_control_B.kstr = 0; justina_control_B.kstr < 4;
         justina_control_B.kstr++) {
      justina_control_B.obj_tmp_tmp = justina_control_B.kstr << 2;
      justina_control_B.obj_tmp_b = justina_control_B.b_kstr_o +
        justina_control_B.obj_tmp_tmp;
      justina_control_B.obj[justina_control_B.obj_tmp_b] = 0.0;
      justina_control_B.obj[justina_control_B.obj_tmp_b] +=
        justina_control_B.TJ[justina_control_B.obj_tmp_tmp] *
        obj->JointToParentTransform[justina_control_B.b_kstr_o];
      justina_control_B.obj[justina_control_B.obj_tmp_b] +=
        justina_control_B.TJ[justina_control_B.obj_tmp_tmp + 1] *
        obj->JointToParentTransform[justina_control_B.b_kstr_o + 4];
      justina_control_B.obj[justina_control_B.obj_tmp_b] +=
        justina_control_B.TJ[justina_control_B.obj_tmp_tmp + 2] *
        obj->JointToParentTransform[justina_control_B.b_kstr_o + 8];
      justina_control_B.obj[justina_control_B.obj_tmp_b] +=
        justina_control_B.TJ[justina_control_B.obj_tmp_tmp + 3] *
        obj->JointToParentTransform[justina_control_B.b_kstr_o + 12];
    }

    for (justina_control_B.kstr = 0; justina_control_B.kstr < 4;
         justina_control_B.kstr++) {
      justina_control_B.obj_tmp_tmp = justina_control_B.kstr << 2;
      justina_control_B.obj_tmp_b = justina_control_B.b_kstr_o +
        justina_control_B.obj_tmp_tmp;
      T[justina_control_B.obj_tmp_b] = 0.0;
      T[justina_control_B.obj_tmp_b] += obj->
        ChildToJointTransform[justina_control_B.obj_tmp_tmp] *
        justina_control_B.obj[justina_control_B.b_kstr_o];
      T[justina_control_B.obj_tmp_b] += obj->
        ChildToJointTransform[justina_control_B.obj_tmp_tmp + 1] *
        justina_control_B.obj[justina_control_B.b_kstr_o + 4];
      T[justina_control_B.obj_tmp_b] += obj->
        ChildToJointTransform[justina_control_B.obj_tmp_tmp + 2] *
        justina_control_B.obj[justina_control_B.b_kstr_o + 8];
      T[justina_control_B.obj_tmp_b] += obj->
        ChildToJointTransform[justina_control_B.obj_tmp_tmp + 3] *
        justina_control_B.obj[justina_control_B.b_kstr_o + 12];
    }
  }
}

static void justina_control_emxFree_char_T(emxArray_char_T_justina_contr_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_char_T_justina_contr_T *)NULL) {
    if (((*pEmxArray)->data != (char_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_char_T_justina_contr_T *)NULL;
  }
}

static void justina_control_emxFree_real_T(emxArray_real_T_justina_contr_T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T_justina_contr_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_real_T_justina_contr_T *)NULL;
  }
}

static void justina_con_emxFree_f_cell_wrap(emxArray_f_cell_wrap_justina__T
  **pEmxArray)
{
  if (*pEmxArray != (emxArray_f_cell_wrap_justina__T *)NULL) {
    if (((*pEmxArray)->data != (f_cell_wrap_justina_control_T *)NULL) &&
        (*pEmxArray)->canFreeData) {
      free((*pEmxArray)->data);
    }

    free((*pEmxArray)->size);
    free(*pEmxArray);
    *pEmxArray = (emxArray_f_cell_wrap_justina__T *)NULL;
  }
}

static boolean_T justina_control_strcmp(const emxArray_char_T_justina_contr_T *a)
{
  boolean_T b_bool;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  int32_T exitg1;
  for (justina_control_B.b_kstr_j = 0; justina_control_B.b_kstr_j < 5;
       justina_control_B.b_kstr_j++) {
    justina_control_B.b_dy[justina_control_B.b_kstr_j] =
      tmp[justina_control_B.b_kstr_j];
  }

  b_bool = false;
  if (a->size[1] == 5) {
    justina_control_B.b_kstr_j = 1;
    do {
      exitg1 = 0;
      if (justina_control_B.b_kstr_j - 1 < 5) {
        justina_control_B.kstr_b = justina_control_B.b_kstr_j - 1;
        if (a->data[justina_control_B.kstr_b] !=
            justina_control_B.b_dy[justina_control_B.kstr_b]) {
          exitg1 = 1;
        } else {
          justina_control_B.b_kstr_j++;
        }
      } else {
        b_bool = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return b_bool;
}

static void jus_GravityTorqueBlock_stepImpl(robotics_slmanip_internal_blo_T *obj,
  const real32_T q[7], real32_T jointTorq[7])
{
  q_robotics_manip_internal_Rig_T *robot;
  emxArray_f_cell_wrap_justina__T *X;
  emxArray_f_cell_wrap_justina__T *Xtree;
  emxArray_real_T_justina_contr_T *vJ;
  emxArray_real_T_justina_contr_T *vB;
  emxArray_real_T_justina_contr_T *aB;
  emxArray_real_T_justina_contr_T *f;
  emxArray_real_T_justina_contr_T *S;
  emxArray_real_T_justina_contr_T *taui;
  o_robotics_manip_internal_Rig_T *obj_0;
  emxArray_char_T_justina_contr_T *switch_expression;
  static const char_T tmp[5] = { 'f', 'i', 'x', 'e', 'd' };

  static const char_T tmp_0[8] = { 'r', 'e', 'v', 'o', 'l', 'u', 't', 'e' };

  int32_T exitg1;
  robot = &obj->TreeInternal;
  for (justina_control_B.i_l = 0; justina_control_B.i_l < 7;
       justina_control_B.i_l++) {
    justina_control_B.q[justina_control_B.i_l] = q[justina_control_B.i_l];
  }

  justina_control_B.a0[0] = 0.0;
  justina_control_B.a0[1] = 0.0;
  justina_control_B.a0[2] = 0.0;
  justina_control_B.a0[3] = -obj->TreeInternal.Gravity[0];
  justina_control_B.a0[4] = -obj->TreeInternal.Gravity[1];
  justina_control_B.a0[5] = -obj->TreeInternal.Gravity[2];
  justina_control_emxInit_real_T(&vJ, 2);
  justina_control_B.nb = obj->TreeInternal.NumBodies;
  justina_control_B.b_kstr = vJ->size[0] * vJ->size[1];
  vJ->size[0] = 6;
  justina_control_B.m = static_cast<int32_T>(justina_control_B.nb);
  vJ->size[1] = justina_control_B.m;
  justin_emxEnsureCapacity_real_T(vJ, justina_control_B.b_kstr);
  justina_control_B.loop_ub_tmp = 6 * justina_control_B.m - 1;
  for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <=
       justina_control_B.loop_ub_tmp; justina_control_B.b_kstr++) {
    vJ->data[justina_control_B.b_kstr] = 0.0;
  }

  justina_control_emxInit_real_T(&vB, 2);
  justina_control_B.b_kstr = vB->size[0] * vB->size[1];
  vB->size[0] = 6;
  vB->size[1] = justina_control_B.m;
  justin_emxEnsureCapacity_real_T(vB, justina_control_B.b_kstr);
  for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <=
       justina_control_B.loop_ub_tmp; justina_control_B.b_kstr++) {
    vB->data[justina_control_B.b_kstr] = 0.0;
  }

  justina_control_emxInit_real_T(&aB, 2);
  justina_control_B.b_kstr = aB->size[0] * aB->size[1];
  aB->size[0] = 6;
  aB->size[1] = justina_control_B.m;
  justin_emxEnsureCapacity_real_T(aB, justina_control_B.b_kstr);
  for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <=
       justina_control_B.loop_ub_tmp; justina_control_B.b_kstr++) {
    aB->data[justina_control_B.b_kstr] = 0.0;
  }

  for (justina_control_B.i_l = 0; justina_control_B.i_l < 7;
       justina_control_B.i_l++) {
    justina_control_B.tau[justina_control_B.i_l] = 0.0;
  }

  justina_con_emxInit_f_cell_wrap(&X, 2);
  justina_con_emxInit_f_cell_wrap(&Xtree, 2);
  justina_control_B.c_tmp = justina_control_B.m - 1;
  justina_control_B.b_kstr = Xtree->size[0] * Xtree->size[1];
  Xtree->size[0] = 1;
  Xtree->size[1] = justina_control_B.m;
  j_emxEnsureCapacity_f_cell_wrap(Xtree, justina_control_B.b_kstr);
  justina_control_B.b_kstr = X->size[0] * X->size[1];
  X->size[0] = 1;
  X->size[1] = justina_control_B.m;
  j_emxEnsureCapacity_f_cell_wrap(X, justina_control_B.b_kstr);
  if (0 <= justina_control_B.c_tmp) {
    justina_control_eye(justina_control_B.b_I);
  }

  for (justina_control_B.b_k = 0; justina_control_B.b_k <=
       justina_control_B.c_tmp; justina_control_B.b_k++) {
    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 36;
         justina_control_B.b_kstr++) {
      Xtree->data[justina_control_B.b_k].f1[justina_control_B.b_kstr] =
        justina_control_B.b_I[justina_control_B.b_kstr];
      X->data[justina_control_B.b_k].f1[justina_control_B.b_kstr] =
        justina_control_B.b_I[justina_control_B.b_kstr];
    }
  }

  justina_control_emxInit_real_T(&f, 2);
  justina_control_B.b_kstr = f->size[0] * f->size[1];
  f->size[0] = 6;
  f->size[1] = justina_control_B.m;
  justin_emxEnsureCapacity_real_T(f, justina_control_B.b_kstr);
  justina_control_emxInit_real_T(&S, 2);
  justina_control_emxInit_char_T(&switch_expression, 2);
  if (0 <= justina_control_B.c_tmp) {
    justina_control_B.dv[0] = 0.0;
    justina_control_B.dv[4] = 0.0;
    justina_control_B.dv[8] = 0.0;
  }

  for (justina_control_B.i_l = 0; justina_control_B.i_l <=
       justina_control_B.c_tmp; justina_control_B.i_l++) {
    obj_0 = robot->Bodies[justina_control_B.i_l];
    justina_control_B.b_kstr = S->size[0] * S->size[1];
    S->size[0] = 6;
    S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
    justin_emxEnsureCapacity_real_T(S, justina_control_B.b_kstr);
    justina_control_B.m = obj_0->JointInternal.MotionSubspace->size[0] *
      obj_0->JointInternal.MotionSubspace->size[1] - 1;
    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <=
         justina_control_B.m; justina_control_B.b_kstr++) {
      S->data[justina_control_B.b_kstr] = obj_0->
        JointInternal.MotionSubspace->data[justina_control_B.b_kstr];
    }

    justina_control_B.a_idx_0 = robot->PositionDoFMap[justina_control_B.i_l];
    justina_control_B.a_idx_1 = robot->PositionDoFMap[justina_control_B.i_l + 10];
    if (justina_control_B.a_idx_1 < justina_control_B.a_idx_0) {
      obj_0 = robot->Bodies[justina_control_B.i_l];
      rigidBodyJoint_transformBodyToP(&obj_0->JointInternal, justina_control_B.T);
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        vJ->data[justina_control_B.b_kstr + 6 * justina_control_B.i_l] = 0.0;
      }
    } else {
      if (justina_control_B.a_idx_0 > justina_control_B.a_idx_1) {
        justina_control_B.b_k = 0;
        justina_control_B.loop_ub_tmp = 0;
      } else {
        justina_control_B.b_k = static_cast<int32_T>(justina_control_B.a_idx_0)
          - 1;
        justina_control_B.loop_ub_tmp = static_cast<int32_T>
          (justina_control_B.a_idx_1);
      }

      obj_0 = robot->Bodies[justina_control_B.i_l];
      justina_control_B.b_kstr = switch_expression->size[0] *
        switch_expression->size[1];
      switch_expression->size[0] = 1;
      switch_expression->size[1] = obj_0->JointInternal.Type->size[1];
      justin_emxEnsureCapacity_char_T(switch_expression,
        justina_control_B.b_kstr);
      justina_control_B.m = obj_0->JointInternal.Type->size[0] *
        obj_0->JointInternal.Type->size[1] - 1;
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <=
           justina_control_B.m; justina_control_B.b_kstr++) {
        switch_expression->data[justina_control_B.b_kstr] =
          obj_0->JointInternal.Type->data[justina_control_B.b_kstr];
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 5;
           justina_control_B.b_kstr++) {
        justina_control_B.b_l[justina_control_B.b_kstr] =
          tmp[justina_control_B.b_kstr];
      }

      justina_control_B.b_bool = false;
      if (switch_expression->size[1] == 5) {
        justina_control_B.b_kstr = 1;
        do {
          exitg1 = 0;
          if (justina_control_B.b_kstr - 1 < 5) {
            justina_control_B.m = justina_control_B.b_kstr - 1;
            if (switch_expression->data[justina_control_B.m] !=
                justina_control_B.b_l[justina_control_B.m]) {
              exitg1 = 1;
            } else {
              justina_control_B.b_kstr++;
            }
          } else {
            justina_control_B.b_bool = true;
            exitg1 = 1;
          }
        } while (exitg1 == 0);
      }

      if (justina_control_B.b_bool) {
        justina_control_B.b_kstr = 0;
      } else {
        for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 8;
             justina_control_B.b_kstr++) {
          justina_control_B.b_g1[justina_control_B.b_kstr] =
            tmp_0[justina_control_B.b_kstr];
        }

        justina_control_B.b_bool = false;
        if (switch_expression->size[1] == 8) {
          justina_control_B.b_kstr = 1;
          do {
            exitg1 = 0;
            if (justina_control_B.b_kstr - 1 < 8) {
              justina_control_B.m = justina_control_B.b_kstr - 1;
              if (switch_expression->data[justina_control_B.m] !=
                  justina_control_B.b_g1[justina_control_B.m]) {
                exitg1 = 1;
              } else {
                justina_control_B.b_kstr++;
              }
            } else {
              justina_control_B.b_bool = true;
              exitg1 = 1;
            }
          } while (exitg1 == 0);
        }

        if (justina_control_B.b_bool) {
          justina_control_B.b_kstr = 1;
        } else {
          justina_control_B.b_kstr = -1;
        }
      }

      switch (justina_control_B.b_kstr) {
       case 0:
        memset(&justina_control_B.Tinv[0], 0, sizeof(real_T) << 4U);
        justina_control_B.Tinv[0] = 1.0;
        justina_control_B.Tinv[5] = 1.0;
        justina_control_B.Tinv[10] = 1.0;
        justina_control_B.Tinv[15] = 1.0;
        break;

       case 1:
        ju_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal,
          justina_control_B.v);
        justina_control_B.loop_ub_tmp -= justina_control_B.b_k;
        for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <
             justina_control_B.loop_ub_tmp; justina_control_B.b_kstr++) {
          justina_control_B.l_data[justina_control_B.b_kstr] =
            justina_control_B.b_k + justina_control_B.b_kstr;
        }

        justina_control_B.result_data[0] = justina_control_B.v[0];
        justina_control_B.result_data[1] = justina_control_B.v[1];
        justina_control_B.result_data[2] = justina_control_B.v[2];
        if (0 <= (justina_control_B.loop_ub_tmp != 0) - 1) {
          justina_control_B.result_data[3] =
            justina_control_B.q[justina_control_B.l_data[0]];
        }

        justina_control_B.a_idx_0 = 1.0 / sqrt((justina_control_B.result_data[0]
          * justina_control_B.result_data[0] + justina_control_B.result_data[1] *
          justina_control_B.result_data[1]) + justina_control_B.result_data[2] *
          justina_control_B.result_data[2]);
        justina_control_B.v[0] = justina_control_B.result_data[0] *
          justina_control_B.a_idx_0;
        justina_control_B.v[1] = justina_control_B.result_data[1] *
          justina_control_B.a_idx_0;
        justina_control_B.v[2] = justina_control_B.result_data[2] *
          justina_control_B.a_idx_0;
        justina_control_B.a_idx_0 = cos(justina_control_B.result_data[3]);
        justina_control_B.sth = sin(justina_control_B.result_data[3]);
        justina_control_B.a_idx_1 = justina_control_B.v[1] *
          justina_control_B.v[0] * (1.0 - justina_control_B.a_idx_0);
        justina_control_B.tempR_tmp = justina_control_B.v[2] *
          justina_control_B.sth;
        justina_control_B.tempR_tmp_l = justina_control_B.v[2] *
          justina_control_B.v[0] * (1.0 - justina_control_B.a_idx_0);
        justina_control_B.tempR_tmp_j = justina_control_B.v[1] *
          justina_control_B.sth;
        justina_control_B.tempR_tmp_d = justina_control_B.v[2] *
          justina_control_B.v[1] * (1.0 - justina_control_B.a_idx_0);
        justina_control_B.sth *= justina_control_B.v[0];
        justina_control_cat(justina_control_B.v[0] * justina_control_B.v[0] *
                            (1.0 - justina_control_B.a_idx_0) +
                            justina_control_B.a_idx_0, justina_control_B.a_idx_1
                            - justina_control_B.tempR_tmp,
                            justina_control_B.tempR_tmp_l +
                            justina_control_B.tempR_tmp_j,
                            justina_control_B.a_idx_1 +
                            justina_control_B.tempR_tmp, justina_control_B.v[1] *
                            justina_control_B.v[1] * (1.0 -
          justina_control_B.a_idx_0) + justina_control_B.a_idx_0,
                            justina_control_B.tempR_tmp_d -
                            justina_control_B.sth, justina_control_B.tempR_tmp_l
                            - justina_control_B.tempR_tmp_j,
                            justina_control_B.tempR_tmp_d +
                            justina_control_B.sth, justina_control_B.v[2] *
                            justina_control_B.v[2] * (1.0 -
          justina_control_B.a_idx_0) + justina_control_B.a_idx_0,
                            justina_control_B.tempR_c);
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 3;
             justina_control_B.b_k++) {
          justina_control_B.b_kstr = justina_control_B.b_k + 1;
          justina_control_B.R[justina_control_B.b_kstr - 1] =
            justina_control_B.tempR_c[(justina_control_B.b_kstr - 1) * 3];
          justina_control_B.b_kstr = justina_control_B.b_k + 1;
          justina_control_B.R[justina_control_B.b_kstr + 2] =
            justina_control_B.tempR_c[(justina_control_B.b_kstr - 1) * 3 + 1];
          justina_control_B.b_kstr = justina_control_B.b_k + 1;
          justina_control_B.R[justina_control_B.b_kstr + 5] =
            justina_control_B.tempR_c[(justina_control_B.b_kstr - 1) * 3 + 2];
        }

        memset(&justina_control_B.Tinv[0], 0, sizeof(real_T) << 4U);
        for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
             justina_control_B.b_kstr++) {
          justina_control_B.loop_ub_tmp = justina_control_B.b_kstr << 2;
          justina_control_B.Tinv[justina_control_B.loop_ub_tmp] =
            justina_control_B.R[3 * justina_control_B.b_kstr];
          justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 1] =
            justina_control_B.R[3 * justina_control_B.b_kstr + 1];
          justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 2] =
            justina_control_B.R[3 * justina_control_B.b_kstr + 2];
        }

        justina_control_B.Tinv[15] = 1.0;
        break;

       default:
        ju_rigidBodyJoint_get_JointAxis(&obj_0->JointInternal,
          justina_control_B.v);
        memset(&justina_control_B.tempR_c[0], 0, 9U * sizeof(real_T));
        justina_control_B.tempR_c[0] = 1.0;
        justina_control_B.tempR_c[4] = 1.0;
        justina_control_B.tempR_c[8] = 1.0;
        for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
             justina_control_B.b_kstr++) {
          justina_control_B.loop_ub_tmp = justina_control_B.b_kstr << 2;
          justina_control_B.Tinv[justina_control_B.loop_ub_tmp] =
            justina_control_B.tempR_c[3 * justina_control_B.b_kstr];
          justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 1] =
            justina_control_B.tempR_c[3 * justina_control_B.b_kstr + 1];
          justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 2] =
            justina_control_B.tempR_c[3 * justina_control_B.b_kstr + 2];
          justina_control_B.Tinv[justina_control_B.b_kstr + 12] =
            justina_control_B.v[justina_control_B.b_kstr] *
            justina_control_B.q[justina_control_B.b_k];
        }

        justina_control_B.Tinv[3] = 0.0;
        justina_control_B.Tinv[7] = 0.0;
        justina_control_B.Tinv[11] = 0.0;
        justina_control_B.Tinv[15] = 1.0;
        break;
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 16;
           justina_control_B.b_kstr++) {
        justina_control_B.a[justina_control_B.b_kstr] =
          obj_0->JointInternal.JointToParentTransform[justina_control_B.b_kstr];
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 16;
           justina_control_B.b_kstr++) {
        justina_control_B.b[justina_control_B.b_kstr] =
          obj_0->JointInternal.ChildToJointTransform[justina_control_B.b_kstr];
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 4;
           justina_control_B.b_kstr++) {
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 4;
             justina_control_B.b_k++) {
          justina_control_B.loop_ub_tmp = justina_control_B.b_k << 2;
          justina_control_B.m = justina_control_B.b_kstr +
            justina_control_B.loop_ub_tmp;
          justina_control_B.a_k[justina_control_B.m] = 0.0;
          justina_control_B.a_k[justina_control_B.m] +=
            justina_control_B.Tinv[justina_control_B.loop_ub_tmp] *
            justina_control_B.a[justina_control_B.b_kstr];
          justina_control_B.a_k[justina_control_B.m] +=
            justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 1] *
            justina_control_B.a[justina_control_B.b_kstr + 4];
          justina_control_B.a_k[justina_control_B.m] +=
            justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 2] *
            justina_control_B.a[justina_control_B.b_kstr + 8];
          justina_control_B.a_k[justina_control_B.m] +=
            justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 3] *
            justina_control_B.a[justina_control_B.b_kstr + 12];
        }

        for (justina_control_B.b_k = 0; justina_control_B.b_k < 4;
             justina_control_B.b_k++) {
          justina_control_B.m = justina_control_B.b_k << 2;
          justina_control_B.loop_ub_tmp = justina_control_B.b_kstr +
            justina_control_B.m;
          justina_control_B.T[justina_control_B.loop_ub_tmp] = 0.0;
          justina_control_B.T[justina_control_B.loop_ub_tmp] +=
            justina_control_B.b[justina_control_B.m] *
            justina_control_B.a_k[justina_control_B.b_kstr];
          justina_control_B.T[justina_control_B.loop_ub_tmp] +=
            justina_control_B.b[justina_control_B.m + 1] *
            justina_control_B.a_k[justina_control_B.b_kstr + 4];
          justina_control_B.T[justina_control_B.loop_ub_tmp] +=
            justina_control_B.b[justina_control_B.m + 2] *
            justina_control_B.a_k[justina_control_B.b_kstr + 8];
          justina_control_B.T[justina_control_B.loop_ub_tmp] +=
            justina_control_B.b[justina_control_B.m + 3] *
            justina_control_B.a_k[justina_control_B.b_kstr + 12];
        }
      }

      justina_control_B.inner = S->size[1] - 1;
      for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
           justina_control_B.b_k++) {
        vJ->data[justina_control_B.b_k + 6 * justina_control_B.i_l] = 0.0;
      }

      for (justina_control_B.b_k = 0; justina_control_B.b_k <=
           justina_control_B.inner; justina_control_B.b_k++) {
        justina_control_B.aoffset = justina_control_B.b_k * 6 - 1;
        for (justina_control_B.loop_ub_tmp = 0; justina_control_B.loop_ub_tmp <
             6; justina_control_B.loop_ub_tmp++) {
          justina_control_B.b_kstr = 6 * justina_control_B.i_l +
            justina_control_B.loop_ub_tmp;
          vJ->data[justina_control_B.b_kstr] += S->data
            [(justina_control_B.aoffset + justina_control_B.loop_ub_tmp) + 1] *
            0.0;
        }
      }
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
         justina_control_B.b_kstr++) {
      justina_control_B.R[3 * justina_control_B.b_kstr] =
        justina_control_B.T[justina_control_B.b_kstr];
      justina_control_B.R[3 * justina_control_B.b_kstr + 1] =
        justina_control_B.T[justina_control_B.b_kstr + 4];
      justina_control_B.R[3 * justina_control_B.b_kstr + 2] =
        justina_control_B.T[justina_control_B.b_kstr + 8];
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 9;
         justina_control_B.b_kstr++) {
      justina_control_B.tempR_c[justina_control_B.b_kstr] =
        -justina_control_B.R[justina_control_B.b_kstr];
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
         justina_control_B.b_kstr++) {
      justina_control_B.loop_ub_tmp = justina_control_B.b_kstr << 2;
      justina_control_B.Tinv[justina_control_B.loop_ub_tmp] =
        justina_control_B.R[3 * justina_control_B.b_kstr];
      justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 1] =
        justina_control_B.R[3 * justina_control_B.b_kstr + 1];
      justina_control_B.Tinv[justina_control_B.loop_ub_tmp + 2] =
        justina_control_B.R[3 * justina_control_B.b_kstr + 2];
      justina_control_B.Tinv[justina_control_B.b_kstr + 12] =
        justina_control_B.tempR_c[justina_control_B.b_kstr + 6] *
        justina_control_B.T[14] +
        (justina_control_B.tempR_c[justina_control_B.b_kstr + 3] *
         justina_control_B.T[13] +
         justina_control_B.tempR_c[justina_control_B.b_kstr] *
         justina_control_B.T[12]);
    }

    justina_control_B.Tinv[3] = 0.0;
    justina_control_B.Tinv[7] = 0.0;
    justina_control_B.Tinv[11] = 0.0;
    justina_control_B.Tinv[15] = 1.0;
    justina_control_B.dv[3] = -justina_control_B.Tinv[14];
    justina_control_B.dv[6] = justina_control_B.Tinv[13];
    justina_control_B.dv[1] = justina_control_B.Tinv[14];
    justina_control_B.dv[7] = -justina_control_B.Tinv[12];
    justina_control_B.dv[2] = -justina_control_B.Tinv[13];
    justina_control_B.dv[5] = justina_control_B.Tinv[12];
    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
         justina_control_B.b_kstr++) {
      for (justina_control_B.b_k = 0; justina_control_B.b_k < 3;
           justina_control_B.b_k++) {
        justina_control_B.loop_ub_tmp = justina_control_B.b_kstr + 3 *
          justina_control_B.b_k;
        justina_control_B.R[justina_control_B.loop_ub_tmp] = 0.0;
        justina_control_B.m = justina_control_B.b_k << 2;
        justina_control_B.R[justina_control_B.loop_ub_tmp] +=
          justina_control_B.Tinv[justina_control_B.m] *
          justina_control_B.dv[justina_control_B.b_kstr];
        justina_control_B.R[justina_control_B.loop_ub_tmp] +=
          justina_control_B.Tinv[justina_control_B.m + 1] *
          justina_control_B.dv[justina_control_B.b_kstr + 3];
        justina_control_B.R[justina_control_B.loop_ub_tmp] +=
          justina_control_B.Tinv[justina_control_B.m + 2] *
          justina_control_B.dv[justina_control_B.b_kstr + 6];
        X->data[justina_control_B.i_l].f1[justina_control_B.b_k + 6 *
          justina_control_B.b_kstr] = justina_control_B.Tinv
          [(justina_control_B.b_kstr << 2) + justina_control_B.b_k];
        X->data[justina_control_B.i_l].f1[justina_control_B.b_k + 6 *
          (justina_control_B.b_kstr + 3)] = 0.0;
      }
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
         justina_control_B.b_kstr++) {
      X->data[justina_control_B.i_l].f1[6 * justina_control_B.b_kstr + 3] =
        justina_control_B.R[3 * justina_control_B.b_kstr];
      justina_control_B.b_k = justina_control_B.b_kstr << 2;
      justina_control_B.loop_ub_tmp = 6 * (justina_control_B.b_kstr + 3);
      X->data[justina_control_B.i_l].f1[justina_control_B.loop_ub_tmp + 3] =
        justina_control_B.Tinv[justina_control_B.b_k];
      X->data[justina_control_B.i_l].f1[6 * justina_control_B.b_kstr + 4] =
        justina_control_B.R[3 * justina_control_B.b_kstr + 1];
      X->data[justina_control_B.i_l].f1[justina_control_B.loop_ub_tmp + 4] =
        justina_control_B.Tinv[justina_control_B.b_k + 1];
      X->data[justina_control_B.i_l].f1[6 * justina_control_B.b_kstr + 5] =
        justina_control_B.R[3 * justina_control_B.b_kstr + 2];
      X->data[justina_control_B.i_l].f1[justina_control_B.loop_ub_tmp + 5] =
        justina_control_B.Tinv[justina_control_B.b_k + 2];
    }

    justina_control_B.a_idx_0 = robot->Bodies[justina_control_B.i_l]
      ->ParentIndex;
    if (justina_control_B.a_idx_0 > 0.0) {
      justina_control_B.m = static_cast<int32_T>(justina_control_B.a_idx_0);
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        justina_control_B.a_idx_1 = 0.0;
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.a_idx_1 += vB->data[(justina_control_B.m - 1) * 6 +
            justina_control_B.b_k] * X->data[justina_control_B.i_l].f1[6 *
            justina_control_B.b_k + justina_control_B.b_kstr];
        }

        justina_control_B.y[justina_control_B.b_kstr] = vJ->data[6 *
          justina_control_B.i_l + justina_control_B.b_kstr] +
          justina_control_B.a_idx_1;
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        vB->data[justina_control_B.b_kstr + 6 * justina_control_B.i_l] =
          justina_control_B.y[justina_control_B.b_kstr];
      }

      justina_control_B.inner = S->size[1] - 1;
      for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
           justina_control_B.b_k++) {
        justina_control_B.y[justina_control_B.b_k] = 0.0;
      }

      for (justina_control_B.b_k = 0; justina_control_B.b_k <=
           justina_control_B.inner; justina_control_B.b_k++) {
        justina_control_B.aoffset = justina_control_B.b_k * 6 - 1;
        for (justina_control_B.loop_ub_tmp = 0; justina_control_B.loop_ub_tmp <
             6; justina_control_B.loop_ub_tmp++) {
          justina_control_B.a_idx_1 = S->data[(justina_control_B.aoffset +
            justina_control_B.loop_ub_tmp) + 1] * 0.0 +
            justina_control_B.y[justina_control_B.loop_ub_tmp];
          justina_control_B.y[justina_control_B.loop_ub_tmp] =
            justina_control_B.a_idx_1;
        }
      }

      justina_control_B.tempR_c[0] = 0.0;
      justina_control_B.b_k = 6 * justina_control_B.i_l + 2;
      justina_control_B.tempR_c[3] = -vB->data[justina_control_B.b_k];
      justina_control_B.b_kstr = 6 * justina_control_B.i_l + 1;
      justina_control_B.tempR_c[6] = vB->data[justina_control_B.b_kstr];
      justina_control_B.tempR_c[1] = vB->data[justina_control_B.b_k];
      justina_control_B.tempR_c[4] = 0.0;
      justina_control_B.tempR_c[7] = -vB->data[6 * justina_control_B.i_l];
      justina_control_B.tempR_c[2] = -vB->data[justina_control_B.b_kstr];
      justina_control_B.tempR_c[5] = vB->data[6 * justina_control_B.i_l];
      justina_control_B.tempR_c[8] = 0.0;
      justina_control_B.tempR[3] = 0.0;
      justina_control_B.b_k = 6 * justina_control_B.i_l + 5;
      justina_control_B.tempR[9] = -vB->data[justina_control_B.b_k];
      justina_control_B.b_kstr = 6 * justina_control_B.i_l + 4;
      justina_control_B.tempR[15] = vB->data[justina_control_B.b_kstr];
      justina_control_B.tempR[4] = vB->data[justina_control_B.b_k];
      justina_control_B.tempR[10] = 0.0;
      justina_control_B.b_k = 6 * justina_control_B.i_l + 3;
      justina_control_B.tempR[16] = -vB->data[justina_control_B.b_k];
      justina_control_B.tempR[5] = -vB->data[justina_control_B.b_kstr];
      justina_control_B.tempR[11] = vB->data[justina_control_B.b_k];
      justina_control_B.tempR[17] = 0.0;
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
           justina_control_B.b_kstr++) {
        justina_control_B.a_idx_1 = justina_control_B.tempR_c[3 *
          justina_control_B.b_kstr];
        justina_control_B.tempR[6 * justina_control_B.b_kstr] =
          justina_control_B.a_idx_1;
        justina_control_B.b_k = 6 * (justina_control_B.b_kstr + 3);
        justina_control_B.tempR[justina_control_B.b_k] = 0.0;
        justina_control_B.tempR[justina_control_B.b_k + 3] =
          justina_control_B.a_idx_1;
        justina_control_B.a_idx_1 = justina_control_B.tempR_c[3 *
          justina_control_B.b_kstr + 1];
        justina_control_B.tempR[6 * justina_control_B.b_kstr + 1] =
          justina_control_B.a_idx_1;
        justina_control_B.tempR[justina_control_B.b_k + 1] = 0.0;
        justina_control_B.tempR[justina_control_B.b_k + 4] =
          justina_control_B.a_idx_1;
        justina_control_B.a_idx_1 = justina_control_B.tempR_c[3 *
          justina_control_B.b_kstr + 2];
        justina_control_B.tempR[6 * justina_control_B.b_kstr + 2] =
          justina_control_B.a_idx_1;
        justina_control_B.tempR[justina_control_B.b_k + 2] = 0.0;
        justina_control_B.tempR[justina_control_B.b_k + 5] =
          justina_control_B.a_idx_1;
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        justina_control_B.a_idx_1 = 0.0;
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.a_idx_1 += aB->data[(justina_control_B.m - 1) * 6 +
            justina_control_B.b_k] * X->data[justina_control_B.i_l].f1[6 *
            justina_control_B.b_k + justina_control_B.b_kstr];
        }

        justina_control_B.X[justina_control_B.b_kstr] =
          justina_control_B.a_idx_1 +
          justina_control_B.y[justina_control_B.b_kstr];
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        justina_control_B.y[justina_control_B.b_kstr] = 0.0;
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.a_idx_1 = justina_control_B.tempR[6 *
            justina_control_B.b_k + justina_control_B.b_kstr] * vJ->data[6 *
            justina_control_B.i_l + justina_control_B.b_k] +
            justina_control_B.y[justina_control_B.b_kstr];
          justina_control_B.y[justina_control_B.b_kstr] =
            justina_control_B.a_idx_1;
        }

        aB->data[justina_control_B.b_kstr + 6 * justina_control_B.i_l] =
          justina_control_B.X[justina_control_B.b_kstr] +
          justina_control_B.y[justina_control_B.b_kstr];
      }

      justina_control_B.R[0] = 0.0;
      justina_control_B.R[3] = -justina_control_B.T[14];
      justina_control_B.R[6] = justina_control_B.T[13];
      justina_control_B.R[1] = justina_control_B.T[14];
      justina_control_B.R[4] = 0.0;
      justina_control_B.R[7] = -justina_control_B.T[12];
      justina_control_B.R[2] = -justina_control_B.T[13];
      justina_control_B.R[5] = justina_control_B.T[12];
      justina_control_B.R[8] = 0.0;
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
           justina_control_B.b_kstr++) {
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 3;
             justina_control_B.b_k++) {
          justina_control_B.loop_ub_tmp = justina_control_B.b_kstr + 3 *
            justina_control_B.b_k;
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] = 0.0;
          justina_control_B.m = justina_control_B.b_k << 2;
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] +=
            justina_control_B.T[justina_control_B.m] *
            justina_control_B.R[justina_control_B.b_kstr];
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] +=
            justina_control_B.T[justina_control_B.m + 1] *
            justina_control_B.R[justina_control_B.b_kstr + 3];
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] +=
            justina_control_B.T[justina_control_B.m + 2] *
            justina_control_B.R[justina_control_B.b_kstr + 6];
          justina_control_B.b_I[justina_control_B.b_k + 6 *
            justina_control_B.b_kstr] = justina_control_B.T
            [(justina_control_B.b_kstr << 2) + justina_control_B.b_k];
          justina_control_B.b_I[justina_control_B.b_k + 6 *
            (justina_control_B.b_kstr + 3)] = 0.0;
        }
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
           justina_control_B.b_kstr++) {
        justina_control_B.b_I[6 * justina_control_B.b_kstr + 3] =
          justina_control_B.tempR_c[3 * justina_control_B.b_kstr];
        justina_control_B.loop_ub_tmp = justina_control_B.b_kstr << 2;
        justina_control_B.b_k = 6 * (justina_control_B.b_kstr + 3);
        justina_control_B.b_I[justina_control_B.b_k + 3] =
          justina_control_B.T[justina_control_B.loop_ub_tmp];
        justina_control_B.b_I[6 * justina_control_B.b_kstr + 4] =
          justina_control_B.tempR_c[3 * justina_control_B.b_kstr + 1];
        justina_control_B.b_I[justina_control_B.b_k + 4] =
          justina_control_B.T[justina_control_B.loop_ub_tmp + 1];
        justina_control_B.b_I[6 * justina_control_B.b_kstr + 5] =
          justina_control_B.tempR_c[3 * justina_control_B.b_kstr + 2];
        justina_control_B.b_I[justina_control_B.b_k + 5] =
          justina_control_B.T[justina_control_B.loop_ub_tmp + 2];
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.m = justina_control_B.b_kstr + 6 *
            justina_control_B.b_k;
          justina_control_B.tempR[justina_control_B.m] = 0.0;
          for (justina_control_B.loop_ub_tmp = 0; justina_control_B.loop_ub_tmp <
               6; justina_control_B.loop_ub_tmp++) {
            justina_control_B.tempR[justina_control_B.m] += Xtree->data[
              static_cast<int32_T>(justina_control_B.a_idx_0) - 1].f1[6 *
              justina_control_B.loop_ub_tmp + justina_control_B.b_kstr] *
              justina_control_B.b_I[6 * justina_control_B.b_k +
              justina_control_B.loop_ub_tmp];
          }
        }
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 36;
           justina_control_B.b_kstr++) {
        Xtree->data[justina_control_B.i_l].f1[justina_control_B.b_kstr] =
          justina_control_B.tempR[justina_control_B.b_kstr];
      }
    } else {
      justina_control_B.inner = S->size[1] - 1;
      for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
           justina_control_B.b_k++) {
        justina_control_B.b_kstr = 6 * justina_control_B.i_l +
          justina_control_B.b_k;
        vB->data[justina_control_B.b_kstr] = vJ->data[justina_control_B.b_kstr];
        justina_control_B.y[justina_control_B.b_k] = 0.0;
      }

      for (justina_control_B.b_k = 0; justina_control_B.b_k <=
           justina_control_B.inner; justina_control_B.b_k++) {
        justina_control_B.aoffset = justina_control_B.b_k * 6 - 1;
        for (justina_control_B.loop_ub_tmp = 0; justina_control_B.loop_ub_tmp <
             6; justina_control_B.loop_ub_tmp++) {
          justina_control_B.a_idx_1 = S->data[(justina_control_B.aoffset +
            justina_control_B.loop_ub_tmp) + 1] * 0.0 +
            justina_control_B.y[justina_control_B.loop_ub_tmp];
          justina_control_B.y[justina_control_B.loop_ub_tmp] =
            justina_control_B.a_idx_1;
        }
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        justina_control_B.a_idx_1 = 0.0;
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.a_idx_1 += X->data[justina_control_B.i_l].f1[6 *
            justina_control_B.b_k + justina_control_B.b_kstr] *
            justina_control_B.a0[justina_control_B.b_k];
        }

        aB->data[justina_control_B.b_kstr + 6 * justina_control_B.i_l] =
          justina_control_B.a_idx_1 +
          justina_control_B.y[justina_control_B.b_kstr];
      }

      justina_control_B.R[0] = 0.0;
      justina_control_B.R[3] = -justina_control_B.T[14];
      justina_control_B.R[6] = justina_control_B.T[13];
      justina_control_B.R[1] = justina_control_B.T[14];
      justina_control_B.R[4] = 0.0;
      justina_control_B.R[7] = -justina_control_B.T[12];
      justina_control_B.R[2] = -justina_control_B.T[13];
      justina_control_B.R[5] = justina_control_B.T[12];
      justina_control_B.R[8] = 0.0;
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
           justina_control_B.b_kstr++) {
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 3;
             justina_control_B.b_k++) {
          justina_control_B.loop_ub_tmp = justina_control_B.b_kstr + 3 *
            justina_control_B.b_k;
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] = 0.0;
          justina_control_B.m = justina_control_B.b_k << 2;
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] +=
            justina_control_B.T[justina_control_B.m] *
            justina_control_B.R[justina_control_B.b_kstr];
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] +=
            justina_control_B.T[justina_control_B.m + 1] *
            justina_control_B.R[justina_control_B.b_kstr + 3];
          justina_control_B.tempR_c[justina_control_B.loop_ub_tmp] +=
            justina_control_B.T[justina_control_B.m + 2] *
            justina_control_B.R[justina_control_B.b_kstr + 6];
          Xtree->data[justina_control_B.i_l].f1[justina_control_B.b_k + 6 *
            justina_control_B.b_kstr] = justina_control_B.T
            [(justina_control_B.b_kstr << 2) + justina_control_B.b_k];
          Xtree->data[justina_control_B.i_l].f1[justina_control_B.b_k + 6 *
            (justina_control_B.b_kstr + 3)] = 0.0;
        }
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
           justina_control_B.b_kstr++) {
        Xtree->data[justina_control_B.i_l].f1[6 * justina_control_B.b_kstr + 3] =
          justina_control_B.tempR_c[3 * justina_control_B.b_kstr];
        justina_control_B.b_k = justina_control_B.b_kstr << 2;
        justina_control_B.loop_ub_tmp = 6 * (justina_control_B.b_kstr + 3);
        Xtree->data[justina_control_B.i_l].f1[justina_control_B.loop_ub_tmp + 3]
          = justina_control_B.T[justina_control_B.b_k];
        Xtree->data[justina_control_B.i_l].f1[6 * justina_control_B.b_kstr + 4] =
          justina_control_B.tempR_c[3 * justina_control_B.b_kstr + 1];
        Xtree->data[justina_control_B.i_l].f1[justina_control_B.loop_ub_tmp + 4]
          = justina_control_B.T[justina_control_B.b_k + 1];
        Xtree->data[justina_control_B.i_l].f1[6 * justina_control_B.b_kstr + 5] =
          justina_control_B.tempR_c[3 * justina_control_B.b_kstr + 2];
        Xtree->data[justina_control_B.i_l].f1[justina_control_B.loop_ub_tmp + 5]
          = justina_control_B.T[justina_control_B.b_k + 2];
      }
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 36;
         justina_control_B.b_kstr++) {
      justina_control_B.b_I[justina_control_B.b_kstr] = robot->
        Bodies[justina_control_B.i_l]->SpatialInertia[justina_control_B.b_kstr];
    }

    justina_control_B.tempR_c[0] = 0.0;
    justina_control_B.b_k = 6 * justina_control_B.i_l + 2;
    justina_control_B.tempR_c[3] = -vB->data[justina_control_B.b_k];
    justina_control_B.b_kstr = 6 * justina_control_B.i_l + 1;
    justina_control_B.tempR_c[6] = vB->data[justina_control_B.b_kstr];
    justina_control_B.tempR_c[1] = vB->data[justina_control_B.b_k];
    justina_control_B.tempR_c[4] = 0.0;
    justina_control_B.tempR_c[7] = -vB->data[6 * justina_control_B.i_l];
    justina_control_B.tempR_c[2] = -vB->data[justina_control_B.b_kstr];
    justina_control_B.tempR_c[5] = vB->data[6 * justina_control_B.i_l];
    justina_control_B.tempR_c[8] = 0.0;
    justina_control_B.tempR[18] = 0.0;
    justina_control_B.b_k = 6 * justina_control_B.i_l + 5;
    justina_control_B.tempR[24] = -vB->data[justina_control_B.b_k];
    justina_control_B.b_kstr = 6 * justina_control_B.i_l + 4;
    justina_control_B.tempR[30] = vB->data[justina_control_B.b_kstr];
    justina_control_B.tempR[19] = vB->data[justina_control_B.b_k];
    justina_control_B.tempR[25] = 0.0;
    justina_control_B.b_k = 6 * justina_control_B.i_l + 3;
    justina_control_B.tempR[31] = -vB->data[justina_control_B.b_k];
    justina_control_B.tempR[20] = -vB->data[justina_control_B.b_kstr];
    justina_control_B.tempR[26] = vB->data[justina_control_B.b_k];
    justina_control_B.tempR[32] = 0.0;
    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 3;
         justina_control_B.b_kstr++) {
      justina_control_B.a_idx_1 = justina_control_B.tempR_c[3 *
        justina_control_B.b_kstr];
      justina_control_B.tempR[6 * justina_control_B.b_kstr] =
        justina_control_B.a_idx_1;
      justina_control_B.tempR[6 * justina_control_B.b_kstr + 3] = 0.0;
      justina_control_B.b_k = 6 * (justina_control_B.b_kstr + 3);
      justina_control_B.tempR[justina_control_B.b_k + 3] =
        justina_control_B.a_idx_1;
      justina_control_B.a_idx_1 = justina_control_B.tempR_c[3 *
        justina_control_B.b_kstr + 1];
      justina_control_B.tempR[6 * justina_control_B.b_kstr + 1] =
        justina_control_B.a_idx_1;
      justina_control_B.tempR[6 * justina_control_B.b_kstr + 4] = 0.0;
      justina_control_B.tempR[justina_control_B.b_k + 4] =
        justina_control_B.a_idx_1;
      justina_control_B.a_idx_1 = justina_control_B.tempR_c[3 *
        justina_control_B.b_kstr + 2];
      justina_control_B.tempR[6 * justina_control_B.b_kstr + 2] =
        justina_control_B.a_idx_1;
      justina_control_B.tempR[6 * justina_control_B.b_kstr + 5] = 0.0;
      justina_control_B.tempR[justina_control_B.b_k + 5] =
        justina_control_B.a_idx_1;
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
         justina_control_B.b_kstr++) {
      justina_control_B.X[justina_control_B.b_kstr] = 0.0;
      justina_control_B.b_I_c[justina_control_B.b_kstr] = 0.0;
      for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
           justina_control_B.b_k++) {
        justina_control_B.a_idx_0 = justina_control_B.b_I[6 *
          justina_control_B.b_k + justina_control_B.b_kstr];
        justina_control_B.loop_ub_tmp = 6 * justina_control_B.i_l +
          justina_control_B.b_k;
        justina_control_B.a_idx_1 = vB->data[justina_control_B.loop_ub_tmp] *
          justina_control_B.a_idx_0 +
          justina_control_B.X[justina_control_B.b_kstr];
        justina_control_B.a_idx_0 = aB->data[justina_control_B.loop_ub_tmp] *
          justina_control_B.a_idx_0 +
          justina_control_B.b_I_c[justina_control_B.b_kstr];
        justina_control_B.X[justina_control_B.b_kstr] =
          justina_control_B.a_idx_1;
        justina_control_B.b_I_c[justina_control_B.b_kstr] =
          justina_control_B.a_idx_0;
      }
    }

    for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
         justina_control_B.b_kstr++) {
      justina_control_B.y[justina_control_B.b_kstr] = 0.0;
      justina_control_B.a_idx_1 = 0.0;
      for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
           justina_control_B.b_k++) {
        justina_control_B.a_idx_1 += Xtree->data[justina_control_B.i_l].f1[6 *
          justina_control_B.b_kstr + justina_control_B.b_k] * 0.0;
        justina_control_B.y[justina_control_B.b_kstr] +=
          justina_control_B.tempR[6 * justina_control_B.b_k +
          justina_control_B.b_kstr] * justina_control_B.X[justina_control_B.b_k];
      }

      f->data[justina_control_B.b_kstr + 6 * justina_control_B.i_l] =
        (justina_control_B.b_I_c[justina_control_B.b_kstr] +
         justina_control_B.y[justina_control_B.b_kstr]) -
        justina_control_B.a_idx_1;
    }
  }

  justina_control_emxFree_char_T(&switch_expression);
  justina_control_emxFree_real_T(&aB);
  justina_control_emxFree_real_T(&vB);
  justina_control_emxFree_real_T(&vJ);
  justina_con_emxFree_f_cell_wrap(&Xtree);
  justina_control_B.loop_ub_tmp = static_cast<int32_T>(((-1.0 -
    justina_control_B.nb) + 1.0) / -1.0) - 1;
  justina_control_emxInit_real_T(&taui, 1);
  for (justina_control_B.c_tmp = 0; justina_control_B.c_tmp <=
       justina_control_B.loop_ub_tmp; justina_control_B.c_tmp++) {
    justina_control_B.a_idx_0 = justina_control_B.nb + -static_cast<real_T>
      (justina_control_B.c_tmp);
    justina_control_B.inner = static_cast<int32_T>(justina_control_B.a_idx_0);
    justina_control_B.obj_tmp = justina_control_B.inner - 1;
    obj_0 = robot->Bodies[justina_control_B.obj_tmp];
    if (!justina_control_strcmp(obj_0->JointInternal.Type)) {
      obj_0 = robot->Bodies[justina_control_B.obj_tmp];
      justina_control_B.b_kstr = S->size[0] * S->size[1];
      S->size[0] = 6;
      S->size[1] = obj_0->JointInternal.MotionSubspace->size[1];
      justin_emxEnsureCapacity_real_T(S, justina_control_B.b_kstr);
      justina_control_B.m = obj_0->JointInternal.MotionSubspace->size[0] *
        obj_0->JointInternal.MotionSubspace->size[1] - 1;
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <=
           justina_control_B.m; justina_control_B.b_kstr++) {
        S->data[justina_control_B.b_kstr] = obj_0->
          JointInternal.MotionSubspace->data[justina_control_B.b_kstr];
      }

      justina_control_B.m = S->size[1] - 1;
      justina_control_B.b_kstr = taui->size[0];
      taui->size[0] = S->size[1];
      justin_emxEnsureCapacity_real_T(taui, justina_control_B.b_kstr);
      for (justina_control_B.i_l = 0; justina_control_B.i_l <=
           justina_control_B.m; justina_control_B.i_l++) {
        justina_control_B.aoffset = justina_control_B.i_l * 6 - 1;
        justina_control_B.a_idx_1 = 0.0;
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.a_idx_1 += f->data[(static_cast<int32_T>
            (justina_control_B.a_idx_0) - 1) * 6 + justina_control_B.b_k] *
            S->data[(justina_control_B.aoffset + justina_control_B.b_k) + 1];
        }

        taui->data[justina_control_B.i_l] = justina_control_B.a_idx_1;
      }

      justina_control_B.a_idx_0 = robot->VelocityDoFMap[justina_control_B.inner
        - 1];
      justina_control_B.a_idx_1 = robot->VelocityDoFMap[justina_control_B.inner
        + 9];
      if (justina_control_B.a_idx_0 > justina_control_B.a_idx_1) {
        justina_control_B.i_l = 0;
        justina_control_B.b_kstr = 0;
      } else {
        justina_control_B.i_l = static_cast<int32_T>(justina_control_B.a_idx_0)
          - 1;
        justina_control_B.b_kstr = static_cast<int32_T>
          (justina_control_B.a_idx_1);
      }

      justina_control_B.m = justina_control_B.b_kstr - justina_control_B.i_l;
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr <
           justina_control_B.m; justina_control_B.b_kstr++) {
        justina_control_B.tau[justina_control_B.i_l + justina_control_B.b_kstr] =
          taui->data[justina_control_B.b_kstr];
      }
    }

    justina_control_B.a_idx_0 = robot->Bodies[justina_control_B.obj_tmp]
      ->ParentIndex;
    if (justina_control_B.a_idx_0 > 0.0) {
      justina_control_B.m = static_cast<int32_T>(justina_control_B.a_idx_0);
      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        justina_control_B.a_idx_1 = 0.0;
        for (justina_control_B.b_k = 0; justina_control_B.b_k < 6;
             justina_control_B.b_k++) {
          justina_control_B.a_idx_1 += f->data[(justina_control_B.inner - 1) * 6
            + justina_control_B.b_k] * X->data[justina_control_B.obj_tmp].f1[6 *
            justina_control_B.b_kstr + justina_control_B.b_k];
        }

        justina_control_B.a0[justina_control_B.b_kstr] = f->data
          [(justina_control_B.m - 1) * 6 + justina_control_B.b_kstr] +
          justina_control_B.a_idx_1;
      }

      for (justina_control_B.b_kstr = 0; justina_control_B.b_kstr < 6;
           justina_control_B.b_kstr++) {
        f->data[justina_control_B.b_kstr + 6 * (justina_control_B.m - 1)] =
          justina_control_B.a0[justina_control_B.b_kstr];
      }
    }
  }

  justina_control_emxFree_real_T(&taui);
  justina_control_emxFree_real_T(&S);
  justina_control_emxFree_real_T(&f);
  justina_con_emxFree_f_cell_wrap(&X);
  for (justina_control_B.i_l = 0; justina_control_B.i_l < 7;
       justina_control_B.i_l++) {
    jointTorq[justina_control_B.i_l] = static_cast<real32_T>
      (justina_control_B.tau[justina_control_B.i_l]);
  }
}

static void justina_control_SystemCore_step(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_justina_control_299.getLatestMessage
    (&justina_control_B.b_varargout_2_m);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = justina_control_B.b_varargout_2_m.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_control_B.b_varargout_2_m.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_control_B.b_varargout_2_m.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    justina_control_B.b_varargout_2_m.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0],
         &justina_control_B.b_varargout_2_m.Layout.Dim[0], sizeof
         (SL_Bus_justina_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_control_B.b_varargout_2_m.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_control_B.b_varargout_2_m.Layout.Dim_SL_Info.ReceivedLength;
}

static void justina_cont_SystemCore_step_ad(boolean_T *varargout_1, real_T
  varargout_2_Data[7], uint32_T *varargout_2_Data_SL_Info_Curren, uint32_T
  *varargout_2_Data_SL_Info_Receiv, uint32_T *varargout_2_Layout_DataOffset,
  SL_Bus_justina_control_std_msgs_MultiArrayDimension varargout_2_Layout_Dim[16],
  uint32_T *varargout_2_Layout_Dim_SL_Info_, uint32_T
  *varargout_2_Layout_Dim_SL_Inf_0)
{
  int32_T i;
  *varargout_1 = Sub_justina_control_638.getLatestMessage
    (&justina_control_B.b_varargout_2);
  for (i = 0; i < 7; i++) {
    varargout_2_Data[i] = justina_control_B.b_varargout_2.Data[i];
  }

  *varargout_2_Data_SL_Info_Curren =
    justina_control_B.b_varargout_2.Data_SL_Info.CurrentLength;
  *varargout_2_Data_SL_Info_Receiv =
    justina_control_B.b_varargout_2.Data_SL_Info.ReceivedLength;
  *varargout_2_Layout_DataOffset =
    justina_control_B.b_varargout_2.Layout.DataOffset;
  memcpy(&varargout_2_Layout_Dim[0],
         &justina_control_B.b_varargout_2.Layout.Dim[0], sizeof
         (SL_Bus_justina_control_std_msgs_MultiArrayDimension) << 4U);
  *varargout_2_Layout_Dim_SL_Info_ =
    justina_control_B.b_varargout_2.Layout.Dim_SL_Info.CurrentLength;
  *varargout_2_Layout_Dim_SL_Inf_0 =
    justina_control_B.b_varargout_2.Layout.Dim_SL_Info.ReceivedLength;
}

static void matlabCodegenHa_adssxyfyxoejjze(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxFreeStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_cont_T
  *pStruct)
{
  justina_control_emxFree_char_T(&pStruct->Type);
  justina_control_emxFree_real_T(&pStruct->MotionSubspace);
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

static void matlabCodegenHan_adssxyfyxoejjz(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void emxInitStruct_c_rigidBodyJoint(c_rigidBodyJoint_justina_cont_T
  *pStruct)
{
  justina_control_emxInit_char_T(&pStruct->Type, 2);
  justina_control_emxInit_real_T(&pStruct->MotionSubspace, 2);
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

static o_robotics_manip_internal_Rig_T *justina_con_RigidBody_RigidBody
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justina_c_RigidBody_RigidBody_a
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justina__RigidBody_RigidBody_ad
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justina_RigidBody_RigidBody_ads
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justin_RigidBody_RigidBody_adss
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *justi_RigidBody_RigidBody_adssx
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *just_RigidBody_RigidBody_adssxy
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *jus_RigidBody_RigidBody_adssxyf
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *ju_RigidBody_RigidBody_adssxyfy
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static o_robotics_manip_internal_Rig_T *j_RigidBody_RigidBody_adssxyfyx
  (o_robotics_manip_internal_Rig_T *obj)
{
  o_robotics_manip_internal_Rig_T *b_obj;
  int8_T msubspace_data[36];
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
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

static p_robotics_manip_internal_Rig_T *RigidBody_RigidBody_adssxyfyxo
  (p_robotics_manip_internal_Rig_T *obj)
{
  p_robotics_manip_internal_Rig_T *b_obj;
  emxArray_char_T_justina_contr_T *switch_expression;
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

  justina_control_emxInit_char_T(&switch_expression, 2);
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

  justina_control_emxFree_char_T(&switch_expression);
  switch (b_kstr) {
   case 0:
    tmp[0] = 0;
    tmp[1] = 0;
    tmp[2] = 1;
    tmp[3] = 0;
    tmp[4] = 0;
    tmp[5] = 0;
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_control_B.msubspace_data[b_kstr] = tmp[b_kstr];
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
      justina_control_B.msubspace_data[b_kstr] = tmp[b_kstr];
    }

    obj->JointInternal.JointAxisInternal[0] = 0.0;
    obj->JointInternal.JointAxisInternal[1] = 0.0;
    obj->JointInternal.JointAxisInternal[2] = 1.0;
    break;

   default:
    for (b_kstr = 0; b_kstr < 6; b_kstr++) {
      justina_control_B.msubspace_data[b_kstr] = 0;
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
      justina_control_B.msubspace_data[b_kstr];
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
  obj->Bodies[0] = justina_con_RigidBody_RigidBody(iobj_0);
  obj->Bodies[0]->Index = 1.0;
  obj->Bodies[1] = justina_c_RigidBody_RigidBody_a(iobj_9);
  obj->Bodies[1]->Index = 2.0;
  obj->Bodies[2] = justina__RigidBody_RigidBody_ad(iobj_1);
  obj->Bodies[2]->Index = 3.0;
  obj->Bodies[3] = justina_RigidBody_RigidBody_ads(iobj_2);
  obj->Bodies[3]->Index = 4.0;
  obj->Bodies[4] = justin_RigidBody_RigidBody_adss(iobj_3);
  obj->Bodies[4]->Index = 5.0;
  obj->Bodies[5] = justi_RigidBody_RigidBody_adssx(iobj_4);
  obj->Bodies[5]->Index = 6.0;
  obj->Bodies[6] = just_RigidBody_RigidBody_adssxy(iobj_5);
  obj->Bodies[6]->Index = 7.0;
  obj->Bodies[7] = jus_RigidBody_RigidBody_adssxyf(iobj_6);
  obj->Bodies[7]->Index = 8.0;
  obj->Bodies[8] = ju_RigidBody_RigidBody_adssxyfy(iobj_7);
  obj->Bodies[8]->Index = 9.0;
  obj->Bodies[9] = j_RigidBody_RigidBody_adssxyfyx(iobj_8);
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

  RigidBody_RigidBody_adssxyfyxo(&obj->Base);
  return b_obj;
}

// Model step function
void justina_control_step(void)
{
  // Outputs for Atomic SubSystem: '<S4>/Subscribe1'
  // MATLABSystem: '<S10>/SourceBlock' incorporates:
  //   Inport: '<S13>/In1'

  justina_contr_SystemCore_step_a(&justina_control_B.b_varargout_1,
    justina_control_B.b_varargout_2_Data,
    &justina_control_B.b_varargout_2_Data_SL_Info_Curr,
    &justina_control_B.b_varargout_2_Data_SL_Info_Rece,
    &justina_control_B.b_varargout_2_Layout_DataOffset,
    justina_control_B.b_varargout_2_Layout_Dim,
    &justina_control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &justina_control_B.b_varargout_2_Layout_Dim_SL_I_i);

  // Outputs for Enabled SubSystem: '<S10>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S13>/Enable'

  if (justina_control_B.b_varargout_1) {
    for (justina_control_B.i = 0; justina_control_B.i < 14; justina_control_B.i
         ++) {
      justina_control_B.In1_e.Data[justina_control_B.i] =
        justina_control_B.b_varargout_2_Data[justina_control_B.i];
    }

    justina_control_B.In1_e.Data_SL_Info.CurrentLength =
      justina_control_B.b_varargout_2_Data_SL_Info_Curr;
    justina_control_B.In1_e.Data_SL_Info.ReceivedLength =
      justina_control_B.b_varargout_2_Data_SL_Info_Rece;
    justina_control_B.In1_e.Layout.DataOffset =
      justina_control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&justina_control_B.In1_e.Layout.Dim[0],
           &justina_control_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_justina_control_std_msgs_MultiArrayDimension) << 4U);
    justina_control_B.In1_e.Layout.Dim_SL_Info.CurrentLength =
      justina_control_B.b_varargout_2_Layout_Dim_SL_Inf;
    justina_control_B.In1_e.Layout.Dim_SL_Info.ReceivedLength =
      justina_control_B.b_varargout_2_Layout_Dim_SL_I_i;
  }

  // End of MATLABSystem: '<S10>/SourceBlock'
  // End of Outputs for SubSystem: '<S10>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe1'

  // RateTransition: '<S4>/Rate Transition3'
  if (justina_control_M->Timing.TaskCounters.TID[1] == 0) {
    for (justina_control_B.i = 0; justina_control_B.i < 14; justina_control_B.i
         ++) {
      justina_control_B.RateTransition3[justina_control_B.i] =
        justina_control_B.In1_e.Data[justina_control_B.i];
    }

    // MATLABSystem: '<S5>/MATLAB System'
    jus_GravityTorqueBlock_stepImpl(&justina_control_DW.obj,
      &justina_control_B.In1_e.Data[0], justina_control_B.MATLABSystem);
  }

  // End of RateTransition: '<S4>/Rate Transition3'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe'
  // MATLABSystem: '<S9>/SourceBlock' incorporates:
  //   Inport: '<S12>/In1'

  justina_control_SystemCore_step(&justina_control_B.b_varargout_1,
    justina_control_B.TmpSignalConversionAtSFunct,
    &justina_control_B.b_varargout_2_Data_SL_Info_Curr,
    &justina_control_B.b_varargout_2_Data_SL_Info_Rece,
    &justina_control_B.b_varargout_2_Layout_DataOffset,
    justina_control_B.b_varargout_2_Layout_Dim,
    &justina_control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &justina_control_B.b_varargout_2_Layout_Dim_SL_I_i);

  // Outputs for Enabled SubSystem: '<S9>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S12>/Enable'

  if (justina_control_B.b_varargout_1) {
    for (justina_control_B.i = 0; justina_control_B.i < 7; justina_control_B.i++)
    {
      justina_control_B.In1_k.Data[justina_control_B.i] =
        justina_control_B.TmpSignalConversionAtSFunct[justina_control_B.i];
    }

    justina_control_B.In1_k.Data_SL_Info.CurrentLength =
      justina_control_B.b_varargout_2_Data_SL_Info_Curr;
    justina_control_B.In1_k.Data_SL_Info.ReceivedLength =
      justina_control_B.b_varargout_2_Data_SL_Info_Rece;
    justina_control_B.In1_k.Layout.DataOffset =
      justina_control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&justina_control_B.In1_k.Layout.Dim[0],
           &justina_control_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_justina_control_std_msgs_MultiArrayDimension) << 4U);
    justina_control_B.In1_k.Layout.Dim_SL_Info.CurrentLength =
      justina_control_B.b_varargout_2_Layout_Dim_SL_Inf;
    justina_control_B.In1_k.Layout.Dim_SL_Info.ReceivedLength =
      justina_control_B.b_varargout_2_Layout_Dim_SL_I_i;
  }

  // End of MATLABSystem: '<S9>/SourceBlock'
  // End of Outputs for SubSystem: '<S9>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe'

  // RateTransition: '<S4>/Rate Transition2'
  if (justina_control_M->Timing.TaskCounters.TID[1] == 0) {
    for (justina_control_B.i = 0; justina_control_B.i < 7; justina_control_B.i++)
    {
      justina_control_B.RateTransition2[justina_control_B.i] =
        justina_control_B.In1_k.Data[justina_control_B.i];
    }
  }

  // End of RateTransition: '<S4>/Rate Transition2'

  // Outputs for Atomic SubSystem: '<S4>/Subscribe2'
  // MATLABSystem: '<S11>/SourceBlock' incorporates:
  //   Inport: '<S14>/In1'

  justina_cont_SystemCore_step_ad(&justina_control_B.b_varargout_1,
    justina_control_B.TmpSignalConversionAtSFunct,
    &justina_control_B.b_varargout_2_Data_SL_Info_Curr,
    &justina_control_B.b_varargout_2_Data_SL_Info_Rece,
    &justina_control_B.b_varargout_2_Layout_DataOffset,
    justina_control_B.b_varargout_2_Layout_Dim,
    &justina_control_B.b_varargout_2_Layout_Dim_SL_Inf,
    &justina_control_B.b_varargout_2_Layout_Dim_SL_I_i);

  // Outputs for Enabled SubSystem: '<S11>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S14>/Enable'

  if (justina_control_B.b_varargout_1) {
    for (justina_control_B.i = 0; justina_control_B.i < 7; justina_control_B.i++)
    {
      justina_control_B.In1.Data[justina_control_B.i] =
        justina_control_B.TmpSignalConversionAtSFunct[justina_control_B.i];
    }

    justina_control_B.In1.Data_SL_Info.CurrentLength =
      justina_control_B.b_varargout_2_Data_SL_Info_Curr;
    justina_control_B.In1.Data_SL_Info.ReceivedLength =
      justina_control_B.b_varargout_2_Data_SL_Info_Rece;
    justina_control_B.In1.Layout.DataOffset =
      justina_control_B.b_varargout_2_Layout_DataOffset;
    memcpy(&justina_control_B.In1.Layout.Dim[0],
           &justina_control_B.b_varargout_2_Layout_Dim[0], sizeof
           (SL_Bus_justina_control_std_msgs_MultiArrayDimension) << 4U);
    justina_control_B.In1.Layout.Dim_SL_Info.CurrentLength =
      justina_control_B.b_varargout_2_Layout_Dim_SL_Inf;
    justina_control_B.In1.Layout.Dim_SL_Info.ReceivedLength =
      justina_control_B.b_varargout_2_Layout_Dim_SL_I_i;
  }

  // End of MATLABSystem: '<S11>/SourceBlock'
  // End of Outputs for SubSystem: '<S11>/Enabled Subsystem'
  // End of Outputs for SubSystem: '<S4>/Subscribe2'

  // RateTransition: '<S4>/Rate Transition1' incorporates:
  //   MATLAB Function: '<S1>/MATLAB Function1'

  if (justina_control_M->Timing.TaskCounters.TID[1] == 0) {
    // SignalConversion generated from: '<S6>/ SFunction ' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function1'
    //   MATLABSystem: '<S2>/Get Parameter'
    //   MATLABSystem: '<S2>/Get Parameter1'
    //   MATLABSystem: '<S2>/Get Parameter2'
    //   MATLABSystem: '<S2>/Get Parameter3'
    //   MATLABSystem: '<S2>/Get Parameter4'
    //   MATLABSystem: '<S2>/Get Parameter5'
    //   MATLABSystem: '<S2>/Get Parameter6'

    ParamGet_justina_control_368.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[0]);
    ParamGet_justina_control_370.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[1]);
    ParamGet_justina_control_372.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[2]);
    ParamGet_justina_control_374.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[3]);
    ParamGet_justina_control_376.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[4]);
    ParamGet_justina_control_378.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[5]);
    ParamGet_justina_control_380.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFunct[6]);

    // SignalConversion generated from: '<S6>/ SFunction ' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function1'
    //   MATLABSystem: '<S2>/Get Parameter10'
    //   MATLABSystem: '<S2>/Get Parameter11'
    //   MATLABSystem: '<S2>/Get Parameter12'
    //   MATLABSystem: '<S2>/Get Parameter13'
    //   MATLABSystem: '<S2>/Get Parameter7'
    //   MATLABSystem: '<S2>/Get Parameter8'
    //   MATLABSystem: '<S2>/Get Parameter9'

    ParamGet_justina_control_400.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[0]);
    ParamGet_justina_control_401.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[1]);
    ParamGet_justina_control_402.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[2]);
    ParamGet_justina_control_403.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[3]);
    ParamGet_justina_control_404.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[4]);
    ParamGet_justina_control_405.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[5]);
    ParamGet_justina_control_406.get_parameter
      (&justina_control_B.TmpSignalConversionAtSFun_a[6]);
    for (justina_control_B.i = 0; justina_control_B.i < 7; justina_control_B.i++)
    {
      // MATLAB Function: '<S1>/MATLAB Function1'
      justina_control_B.rtb_torque_p = (static_cast<real32_T>
        ((justina_control_B.RateTransition3[justina_control_B.i] -
          static_cast<real32_T>
          (justina_control_B.RateTransition2[justina_control_B.i])) *
         justina_control_B.TmpSignalConversionAtSFunct[justina_control_B.i]) +
        justina_control_B.MATLABSystem[justina_control_B.i]) +
        static_cast<real32_T>
        ((justina_control_B.RateTransition3[justina_control_B.i + 7] -
          static_cast<real32_T>(justina_control_B.In1.Data[justina_control_B.i]))
         * justina_control_B.TmpSignalConversionAtSFun_a[justina_control_B.i]);
      if (justina_control_B.rtb_torque_p > 2.5) {
        justina_control_B.rtb_torque_p = 2.5;
      } else {
        if (justina_control_B.rtb_torque_p < -2.5) {
          justina_control_B.rtb_torque_p = -2.5;
        }
      }

      // RateTransition: '<S3>/Rate Transition1'
      justina_control_B.RateTransition1[justina_control_B.i] =
        justina_control_DW.RateTransition1_Buffer0[justina_control_B.i];
      justina_control_B.torque[justina_control_B.i] =
        justina_control_B.rtb_torque_p;
    }
  }

  // End of RateTransition: '<S4>/Rate Transition1'

  // BusAssignment: '<S3>/Bus Assignment1' incorporates:
  //   Constant: '<S3>/Constant'
  //   Constant: '<S7>/Constant'

  justina_control_B.BusAssignment1 = justina_control_P.Constant_Value_e;
  for (justina_control_B.i = 0; justina_control_B.i < 7; justina_control_B.i++)
  {
    justina_control_B.BusAssignment1.Data[justina_control_B.i] =
      justina_control_B.RateTransition1[justina_control_B.i];
  }

  justina_control_B.BusAssignment1.Data_SL_Info.CurrentLength =
    justina_control_P.Constant_Value_d;
  justina_control_B.BusAssignment1.Data_SL_Info.ReceivedLength =
    justina_control_P.Constant_Value_d;

  // End of BusAssignment: '<S3>/Bus Assignment1'

  // Outputs for Atomic SubSystem: '<S3>/Publish1'
  // MATLABSystem: '<S8>/SinkBlock'
  Pub_justina_control_304.publish(&justina_control_B.BusAssignment1);

  // End of Outputs for SubSystem: '<S3>/Publish1'

  // Update for RateTransition: '<S3>/Rate Transition1'
  if (justina_control_M->Timing.TaskCounters.TID[1] == 0) {
    for (justina_control_B.i = 0; justina_control_B.i < 7; justina_control_B.i++)
    {
      justina_control_DW.RateTransition1_Buffer0[justina_control_B.i] =
        justina_control_B.torque[justina_control_B.i];
    }
  }

  // End of Update for RateTransition: '<S3>/Rate Transition1'
  rate_scheduler();
}

// Model initialize function
void justina_control_initialize(void)
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

    static const char_T tmp_2[14] = { '/', 'j', 'o', 'i', 'n', 't', '_', 't',
      'o', 'r', 'q', 'u', 'e', 's' };

    static const char_T tmp_3[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '1' };

    static const char_T tmp_4[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '2' };

    static const char_T tmp_5[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '3' };

    static const char_T tmp_6[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '4' };

    static const char_T tmp_7[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '5' };

    static const char_T tmp_8[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '6' };

    static const char_T tmp_9[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'P', '7' };

    static const char_T tmp_a[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '1' };

    static const char_T tmp_b[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '2' };

    static const char_T tmp_c[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '3' };

    static const char_T tmp_d[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '4' };

    static const char_T tmp_e[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '5' };

    static const char_T tmp_f[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '6' };

    static const char_T tmp_g[11] = { '/', 'c', 'o', 'n', 't', 'r', 'o', 'l',
      '/', 'D', '7' };

    // Start for RateTransition: '<S3>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      justina_control_B.RateTransition1[i] =
        justina_control_P.RateTransition1_InitialConditio;
    }

    // End of Start for RateTransition: '<S3>/Rate Transition1'

    // InitializeConditions for RateTransition: '<S3>/Rate Transition1'
    for (i = 0; i < 7; i++) {
      justina_control_DW.RateTransition1_Buffer0[i] =
        justina_control_P.RateTransition1_InitialConditio;
    }

    // End of InitializeConditions for RateTransition: '<S3>/Rate Transition1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe1'
    // SystemInitialize for Enabled SubSystem: '<S10>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S13>/Out1'
    justina_control_B.In1_e = justina_control_P.Out1_Y0;

    // End of SystemInitialize for SubSystem: '<S10>/Enabled Subsystem'

    // Start for MATLABSystem: '<S10>/SourceBlock'
    justina_control_DW.obj_gx.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_gx.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      justina_control_B.cv[i] = tmp[i];
    }

    justina_control_B.cv[16] = '\x00';
    Sub_justina_control_318.createSubscriber(justina_control_B.cv, 1);
    justina_control_DW.obj_gx.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S10>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe1'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe'
    // SystemInitialize for Enabled SubSystem: '<S9>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S12>/Out1'
    justina_control_B.In1_k = justina_control_P.Out1_Y0_a;

    // End of SystemInitialize for SubSystem: '<S9>/Enabled Subsystem'

    // Start for MATLABSystem: '<S9>/SourceBlock'
    justina_control_DW.obj_m.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_m.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      justina_control_B.cv[i] = tmp_0[i];
    }

    justina_control_B.cv[16] = '\x00';
    Sub_justina_control_299.createSubscriber(justina_control_B.cv, 1);
    justina_control_DW.obj_m.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S9>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe'

    // SystemInitialize for Atomic SubSystem: '<S4>/Subscribe2'
    // SystemInitialize for Enabled SubSystem: '<S11>/Enabled Subsystem'
    // SystemInitialize for Outport: '<S14>/Out1'
    justina_control_B.In1 = justina_control_P.Out1_Y0_k;

    // End of SystemInitialize for SubSystem: '<S11>/Enabled Subsystem'

    // Start for MATLABSystem: '<S11>/SourceBlock'
    justina_control_DW.obj_a.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_a.isInitialized = 1;
    for (i = 0; i < 13; i++) {
      justina_control_B.cv2[i] = tmp_1[i];
    }

    justina_control_B.cv2[13] = '\x00';
    Sub_justina_control_638.createSubscriber(justina_control_B.cv2, 1);
    justina_control_DW.obj_a.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S11>/SourceBlock'
    // End of SystemInitialize for SubSystem: '<S4>/Subscribe2'

    // SystemInitialize for Atomic SubSystem: '<S3>/Publish1'
    // Start for MATLABSystem: '<S8>/SinkBlock'
    justina_control_DW.obj_d1.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_d1.isInitialized = 1;
    for (i = 0; i < 14; i++) {
      justina_control_B.cv1[i] = tmp_2[i];
    }

    justina_control_B.cv1[14] = '\x00';
    Pub_justina_control_304.createPublisher(justina_control_B.cv1, 1);
    justina_control_DW.obj_d1.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S8>/SinkBlock'
    // End of SystemInitialize for SubSystem: '<S3>/Publish1'
    emxInitStruct_robotics_slmanip_(&justina_control_DW.obj);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_1);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_20);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_19);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_18);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_17);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_16);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_15);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_14);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_13);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_12);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_11);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_10);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_9);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_8);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_7);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_6);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_5);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_4);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_3);
    emxInitStruct_o_robotics_manip_(&justina_control_DW.gobj_2);

    // Start for MATLABSystem: '<S5>/MATLAB System'
    justina_control_DW.obj.isInitialized = 0;
    justina_control_DW.obj.isInitialized = 1;
    jus_RigidBodyTree_RigidBodyTree(&justina_control_DW.obj.TreeInternal,
      &justina_control_DW.gobj_2, &justina_control_DW.gobj_4,
      &justina_control_DW.gobj_5, &justina_control_DW.gobj_6,
      &justina_control_DW.gobj_7, &justina_control_DW.gobj_8,
      &justina_control_DW.gobj_9, &justina_control_DW.gobj_10,
      &justina_control_DW.gobj_11, &justina_control_DW.gobj_3);

    // Start for MATLABSystem: '<S2>/Get Parameter'
    justina_control_DW.obj_l.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_3[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_368.initialize(justina_control_B.cv3);
    ParamGet_justina_control_368.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_368.set_initial_value(0.0);
    justina_control_DW.obj_l.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter'

    // Start for MATLABSystem: '<S2>/Get Parameter1'
    justina_control_DW.obj_o.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_o.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_4[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_370.initialize(justina_control_B.cv3);
    ParamGet_justina_control_370.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_370.set_initial_value(0.0);
    justina_control_DW.obj_o.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter1'

    // Start for MATLABSystem: '<S2>/Get Parameter2'
    justina_control_DW.obj_o1.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_o1.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_5[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_372.initialize(justina_control_B.cv3);
    ParamGet_justina_control_372.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_372.set_initial_value(0.0);
    justina_control_DW.obj_o1.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter2'

    // Start for MATLABSystem: '<S2>/Get Parameter3'
    justina_control_DW.obj_k.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_6[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_374.initialize(justina_control_B.cv3);
    ParamGet_justina_control_374.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_374.set_initial_value(0.0);
    justina_control_DW.obj_k.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter3'

    // Start for MATLABSystem: '<S2>/Get Parameter4'
    justina_control_DW.obj_d.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_d.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_7[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_376.initialize(justina_control_B.cv3);
    ParamGet_justina_control_376.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_376.set_initial_value(0.0);
    justina_control_DW.obj_d.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter4'

    // Start for MATLABSystem: '<S2>/Get Parameter5'
    justina_control_DW.obj_i.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_8[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_378.initialize(justina_control_B.cv3);
    ParamGet_justina_control_378.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_378.set_initial_value(0.0);
    justina_control_DW.obj_i.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter5'

    // Start for MATLABSystem: '<S2>/Get Parameter6'
    justina_control_DW.obj_f.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_f.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_9[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_380.initialize(justina_control_B.cv3);
    ParamGet_justina_control_380.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_380.set_initial_value(0.0);
    justina_control_DW.obj_f.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter6'

    // Start for MATLABSystem: '<S2>/Get Parameter7'
    justina_control_DW.obj_h.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_h.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_a[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_400.initialize(justina_control_B.cv3);
    ParamGet_justina_control_400.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_400.set_initial_value(0.0);
    justina_control_DW.obj_h.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter7'

    // Start for MATLABSystem: '<S2>/Get Parameter8'
    justina_control_DW.obj_og.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_og.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_b[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_401.initialize(justina_control_B.cv3);
    ParamGet_justina_control_401.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_401.set_initial_value(0.0);
    justina_control_DW.obj_og.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter8'

    // Start for MATLABSystem: '<S2>/Get Parameter9'
    justina_control_DW.obj_fy.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_fy.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_c[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_402.initialize(justina_control_B.cv3);
    ParamGet_justina_control_402.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_402.set_initial_value(0.0);
    justina_control_DW.obj_fy.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter9'

    // Start for MATLABSystem: '<S2>/Get Parameter10'
    justina_control_DW.obj_if.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_if.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_d[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_403.initialize(justina_control_B.cv3);
    ParamGet_justina_control_403.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_403.set_initial_value(0.0);
    justina_control_DW.obj_if.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter10'

    // Start for MATLABSystem: '<S2>/Get Parameter11'
    justina_control_DW.obj_g.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_g.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_e[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_404.initialize(justina_control_B.cv3);
    ParamGet_justina_control_404.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_404.set_initial_value(0.0);
    justina_control_DW.obj_g.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter11'

    // Start for MATLABSystem: '<S2>/Get Parameter12'
    justina_control_DW.obj_c.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_c.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_f[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_405.initialize(justina_control_B.cv3);
    ParamGet_justina_control_405.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_405.set_initial_value(0.0);
    justina_control_DW.obj_c.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter12'

    // Start for MATLABSystem: '<S2>/Get Parameter13'
    justina_control_DW.obj_p.matlabCodegenIsDeleted = false;
    justina_control_DW.obj_p.isInitialized = 1;
    for (i = 0; i < 11; i++) {
      justina_control_B.cv3[i] = tmp_g[i];
    }

    justina_control_B.cv3[11] = '\x00';
    ParamGet_justina_control_406.initialize(justina_control_B.cv3);
    ParamGet_justina_control_406.initialize_error_codes(0, 1, 2, 3);
    ParamGet_justina_control_406.set_initial_value(0.0);
    justina_control_DW.obj_p.isSetupComplete = true;

    // End of Start for MATLABSystem: '<S2>/Get Parameter13'
  }
}

// Model terminate function
void justina_control_terminate(void)
{
  // Terminate for Atomic SubSystem: '<S4>/Subscribe1'
  // Terminate for MATLABSystem: '<S10>/SourceBlock'
  matlabCodegenHa_adssxyfyxoejjze(&justina_control_DW.obj_gx);

  // End of Terminate for SubSystem: '<S4>/Subscribe1'
  emxFreeStruct_robotics_slmanip_(&justina_control_DW.obj);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_1);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_20);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_19);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_18);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_17);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_16);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_15);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_14);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_13);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_12);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_11);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_10);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_9);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_8);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_7);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_6);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_5);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_4);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_3);
  emxFreeStruct_o_robotics_manip_(&justina_control_DW.gobj_2);

  // Terminate for Atomic SubSystem: '<S4>/Subscribe'
  // Terminate for MATLABSystem: '<S9>/SourceBlock'
  matlabCodegenHa_adssxyfyxoejjze(&justina_control_DW.obj_m);

  // End of Terminate for SubSystem: '<S4>/Subscribe'

  // Terminate for Atomic SubSystem: '<S4>/Subscribe2'
  // Terminate for MATLABSystem: '<S11>/SourceBlock'
  matlabCodegenHa_adssxyfyxoejjze(&justina_control_DW.obj_a);

  // End of Terminate for SubSystem: '<S4>/Subscribe2'

  // Terminate for MATLABSystem: '<S2>/Get Parameter'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_l);

  // Terminate for MATLABSystem: '<S2>/Get Parameter1'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_o);

  // Terminate for MATLABSystem: '<S2>/Get Parameter2'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_o1);

  // Terminate for MATLABSystem: '<S2>/Get Parameter3'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_k);

  // Terminate for MATLABSystem: '<S2>/Get Parameter4'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_d);

  // Terminate for MATLABSystem: '<S2>/Get Parameter5'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_i);

  // Terminate for MATLABSystem: '<S2>/Get Parameter6'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_f);

  // Terminate for MATLABSystem: '<S2>/Get Parameter7'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_h);

  // Terminate for MATLABSystem: '<S2>/Get Parameter8'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_og);

  // Terminate for MATLABSystem: '<S2>/Get Parameter9'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_fy);

  // Terminate for MATLABSystem: '<S2>/Get Parameter10'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_if);

  // Terminate for MATLABSystem: '<S2>/Get Parameter11'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_g);

  // Terminate for MATLABSystem: '<S2>/Get Parameter12'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_c);

  // Terminate for MATLABSystem: '<S2>/Get Parameter13'
  matlabCodegenHandle_matlabCodeg(&justina_control_DW.obj_p);

  // Terminate for Atomic SubSystem: '<S3>/Publish1'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  matlabCodegenHan_adssxyfyxoejjz(&justina_control_DW.obj_d1);

  // End of Terminate for SubSystem: '<S3>/Publish1'
}

//
// File trailer for generated code.
//
// [EOF]
//
