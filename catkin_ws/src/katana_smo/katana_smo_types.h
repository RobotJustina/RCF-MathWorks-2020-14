//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: katana_smo_types.h
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
#ifndef RTW_HEADER_katana_smo_types_h_
#define RTW_HEADER_katana_smo_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_katana_smo_std_msgs_Float64;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_katana_smo_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_katana_smo_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_katana_smo_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_katana_smo_std_msgs_Float64MultiArray_

// MsgType=std_msgs/Float64MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real_T Data[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_katana_smo_std_msgs_MultiArrayLayout Layout;
} SL_Bus_katana_smo_std_msgs_Float64MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_KfqCMIBkl3ev4xEgDOiqNC_
#define DEFINED_TYPEDEF_FOR_struct_KfqCMIBkl3ev4xEgDOiqNC_

typedef struct {
  real_T NameLength;
  uint8_T Name[29];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[10];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
} struct_KfqCMIBkl3ev4xEgDOiqNC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Ysp0RTtosAwbWr4EQraC8F_
#define DEFINED_TYPEDEF_FOR_struct_Ysp0RTtosAwbWr4EQraC8F_

typedef struct {
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[31];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
} struct_Ysp0RTtosAwbWr4EQraC8F;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_N3UoQxFxRUAblPL3j43CSB_
#define DEFINED_TYPEDEF_FOR_struct_N3UoQxFxRUAblPL3j43CSB_

typedef struct {
  real_T NumBodies;
  real_T Gravity[3];
  real_T NumNonFixedBodies;
  real_T PositionNumber;
  real_T VelocityNumber;
  real_T PositionDoFMap[20];
  real_T VelocityDoFMap[20];
  real_T MaxNameLength;
  real_T MaxJointPositionNumber;
  uint8_T DataFormat;
  real_T JointPositionLimits[14];
  struct_KfqCMIBkl3ev4xEgDOiqNC Bodies[11];
  struct_Ysp0RTtosAwbWr4EQraC8F Joints[11];
} struct_N3UoQxFxRUAblPL3j43CSB;

#endif

#ifndef struct_tag_KSdGoEc2IyOHz4CLi4rcCD
#define struct_tag_KSdGoEc2IyOHz4CLi4rcCD

struct tag_KSdGoEc2IyOHz4CLi4rcCD
{
  int32_T __dummy;
};

#endif                                 //struct_tag_KSdGoEc2IyOHz4CLi4rcCD

#ifndef typedef_e_robotics_slcore_internal_bl_T
#define typedef_e_robotics_slcore_internal_bl_T

typedef struct tag_KSdGoEc2IyOHz4CLi4rcCD e_robotics_slcore_internal_bl_T;

#endif                                 //typedef_e_robotics_slcore_internal_bl_T

#ifndef struct_tag_PzhaB0v2Sx4ikuHWZx5WUB
#define struct_tag_PzhaB0v2Sx4ikuHWZx5WUB

struct tag_PzhaB0v2Sx4ikuHWZx5WUB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  e_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                 //struct_tag_PzhaB0v2Sx4ikuHWZx5WUB

#ifndef typedef_ros_slros_internal_block_GetP_T
#define typedef_ros_slros_internal_block_GetP_T

typedef struct tag_PzhaB0v2Sx4ikuHWZx5WUB ros_slros_internal_block_GetP_T;

#endif                                 //typedef_ros_slros_internal_block_GetP_T

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_rkSooZHJZnr3Dpfu1LNqfH

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 //struct_tag_9SewJ4y3IXNs5GrZti8qkG

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef struct_tag_vxHWSOYrO9xtYchIOe7EKG
#define struct_tag_vxHWSOYrO9xtYchIOe7EKG

struct tag_vxHWSOYrO9xtYchIOe7EKG
{
  int32_T isInitialized;
};

#endif                                 //struct_tag_vxHWSOYrO9xtYchIOe7EKG

#ifndef typedef_robotics_slcore_internal_bloc_T
#define typedef_robotics_slcore_internal_bloc_T

typedef struct tag_vxHWSOYrO9xtYchIOe7EKG robotics_slcore_internal_bloc_T;

#endif                                 //typedef_robotics_slcore_internal_bloc_T

#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T

struct emxArray_char_T
{
  char_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_char_T

#ifndef typedef_emxArray_char_T_katana_smo_T
#define typedef_emxArray_char_T_katana_smo_T

typedef struct emxArray_char_T emxArray_char_T_katana_smo_T;

#endif                                 //typedef_emxArray_char_T_katana_smo_T

#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T

struct emxArray_real_T
{
  real_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_real_T

#ifndef typedef_emxArray_real_T_katana_smo_T
#define typedef_emxArray_real_T_katana_smo_T

typedef struct emxArray_real_T emxArray_real_T_katana_smo_T;

#endif                                 //typedef_emxArray_real_T_katana_smo_T

#ifndef struct_tag_sOhdIGMkO9hGNA83ljxtOwE
#define struct_tag_sOhdIGMkO9hGNA83ljxtOwE

struct tag_sOhdIGMkO9hGNA83ljxtOwE
{
  real_T NameLength;
  uint8_T Name[29];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[10];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
};

#endif                                 //struct_tag_sOhdIGMkO9hGNA83ljxtOwE

#ifndef typedef_sOhdIGMkO9hGNA83ljxtOwE_katan_T
#define typedef_sOhdIGMkO9hGNA83ljxtOwE_katan_T

typedef struct tag_sOhdIGMkO9hGNA83ljxtOwE sOhdIGMkO9hGNA83ljxtOwE_katan_T;

#endif                                 //typedef_sOhdIGMkO9hGNA83ljxtOwE_katan_T

#ifndef struct_tag_sEm5A2yIh4bIm3aFFFE2SID
#define struct_tag_sEm5A2yIh4bIm3aFFFE2SID

struct tag_sEm5A2yIh4bIm3aFFFE2SID
{
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[31];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
};

#endif                                 //struct_tag_sEm5A2yIh4bIm3aFFFE2SID

#ifndef typedef_sEm5A2yIh4bIm3aFFFE2SID_katan_T
#define typedef_sEm5A2yIh4bIm3aFFFE2SID_katan_T

typedef struct tag_sEm5A2yIh4bIm3aFFFE2SID sEm5A2yIh4bIm3aFFFE2SID_katan_T;

#endif                                 //typedef_sEm5A2yIh4bIm3aFFFE2SID_katan_T

#ifndef struct_tag_8EP4ctv7s0SDnh3V6WCLOG
#define struct_tag_8EP4ctv7s0SDnh3V6WCLOG

struct tag_8EP4ctv7s0SDnh3V6WCLOG
{
  real_T f1[16];
};

#endif                                 //struct_tag_8EP4ctv7s0SDnh3V6WCLOG

#ifndef typedef_f_cell_wrap_katana_smo_T
#define typedef_f_cell_wrap_katana_smo_T

typedef struct tag_8EP4ctv7s0SDnh3V6WCLOG f_cell_wrap_katana_smo_T;

#endif                                 //typedef_f_cell_wrap_katana_smo_T

#ifndef struct_tag_2xAJzS7rvIyFzfuC7FOGlD
#define struct_tag_2xAJzS7rvIyFzfuC7FOGlD

struct tag_2xAJzS7rvIyFzfuC7FOGlD
{
  emxArray_char_T_katana_smo_T *Type;
  real_T PositionNumber;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
};

#endif                                 //struct_tag_2xAJzS7rvIyFzfuC7FOGlD

#ifndef typedef_c_rigidBodyJoint_katana_smo_T
#define typedef_c_rigidBodyJoint_katana_smo_T

typedef struct tag_2xAJzS7rvIyFzfuC7FOGlD c_rigidBodyJoint_katana_smo_T;

#endif                                 //typedef_c_rigidBodyJoint_katana_smo_T

#ifndef struct_tag_BPMfb1nwAW0cVckEDiFVnG
#define struct_tag_BPMfb1nwAW0cVckEDiFVnG

struct tag_BPMfb1nwAW0cVckEDiFVnG
{
  emxArray_char_T_katana_smo_T *NameInternal;
  c_rigidBodyJoint_katana_smo_T JointInternal;
  real_T ParentIndex;
};

#endif                                 //struct_tag_BPMfb1nwAW0cVckEDiFVnG

#ifndef typedef_r_robotics_manip_internal_Rig_T
#define typedef_r_robotics_manip_internal_Rig_T

typedef struct tag_BPMfb1nwAW0cVckEDiFVnG r_robotics_manip_internal_Rig_T;

#endif                                 //typedef_r_robotics_manip_internal_Rig_T

#ifndef struct_tag_EpnOXkcFkOFmcaZiu2CuCD
#define struct_tag_EpnOXkcFkOFmcaZiu2CuCD

struct tag_EpnOXkcFkOFmcaZiu2CuCD
{
  emxArray_char_T_katana_smo_T *NameInternal;
  c_rigidBodyJoint_katana_smo_T JointInternal;
};

#endif                                 //struct_tag_EpnOXkcFkOFmcaZiu2CuCD

#ifndef typedef_s_robotics_manip_internal_Rig_T
#define typedef_s_robotics_manip_internal_Rig_T

typedef struct tag_EpnOXkcFkOFmcaZiu2CuCD s_robotics_manip_internal_Rig_T;

#endif                                 //typedef_s_robotics_manip_internal_Rig_T

#ifndef struct_tag_j3SFBHG3a8FjUWuDWIF6EG
#define struct_tag_j3SFBHG3a8FjUWuDWIF6EG

struct tag_j3SFBHG3a8FjUWuDWIF6EG
{
  real_T NumBodies;
  s_robotics_manip_internal_Rig_T Base;
  r_robotics_manip_internal_Rig_T *Bodies[10];
  real_T PositionNumber;
};

#endif                                 //struct_tag_j3SFBHG3a8FjUWuDWIF6EG

#ifndef typedef_t_robotics_manip_internal_Rig_T
#define typedef_t_robotics_manip_internal_Rig_T

typedef struct tag_j3SFBHG3a8FjUWuDWIF6EG t_robotics_manip_internal_Rig_T;

#endif                                 //typedef_t_robotics_manip_internal_Rig_T

#ifndef struct_tag_1rP6dD3HtSO8EN6ecu4nk
#define struct_tag_1rP6dD3HtSO8EN6ecu4nk

struct tag_1rP6dD3HtSO8EN6ecu4nk
{
  int32_T isInitialized;
  t_robotics_manip_internal_Rig_T TreeInternal;
};

#endif                                 //struct_tag_1rP6dD3HtSO8EN6ecu4nk

#ifndef typedef_robotics_slmanip_internal_blo_T
#define typedef_robotics_slmanip_internal_blo_T

typedef struct tag_1rP6dD3HtSO8EN6ecu4nk robotics_slmanip_internal_blo_T;

#endif                                 //typedef_robotics_slmanip_internal_blo_T

#ifndef struct_tag_pGgszObO16I6TGXaEMnuXB
#define struct_tag_pGgszObO16I6TGXaEMnuXB

struct tag_pGgszObO16I6TGXaEMnuXB
{
  real_T f1[36];
};

#endif                                 //struct_tag_pGgszObO16I6TGXaEMnuXB

#ifndef typedef_f_cell_wrap_katana_smo_g_T
#define typedef_f_cell_wrap_katana_smo_g_T

typedef struct tag_pGgszObO16I6TGXaEMnuXB f_cell_wrap_katana_smo_g_T;

#endif                                 //typedef_f_cell_wrap_katana_smo_g_T

#ifndef struct_tag_QsLFVUgAtzQUBY1V99co0D
#define struct_tag_QsLFVUgAtzQUBY1V99co0D

struct tag_QsLFVUgAtzQUBY1V99co0D
{
  emxArray_char_T_katana_smo_T *Type;
  emxArray_real_T_katana_smo_T *MotionSubspace;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
};

#endif                                 //struct_tag_QsLFVUgAtzQUBY1V99co0D

#ifndef typedef_c_rigidBodyJoint_katana_smo_g_T
#define typedef_c_rigidBodyJoint_katana_smo_g_T

typedef struct tag_QsLFVUgAtzQUBY1V99co0D c_rigidBodyJoint_katana_smo_g_T;

#endif                                 //typedef_c_rigidBodyJoint_katana_smo_g_T

#ifndef struct_tag_IYTryndM9hCl2aQvRVOEpC
#define struct_tag_IYTryndM9hCl2aQvRVOEpC

struct tag_IYTryndM9hCl2aQvRVOEpC
{
  real_T Index;
  c_rigidBodyJoint_katana_smo_g_T JointInternal;
  real_T ParentIndex;
  real_T SpatialInertia[36];
};

#endif                                 //struct_tag_IYTryndM9hCl2aQvRVOEpC

#ifndef typedef_r_robotics_manip_internal_R_g_T
#define typedef_r_robotics_manip_internal_R_g_T

typedef struct tag_IYTryndM9hCl2aQvRVOEpC r_robotics_manip_internal_R_g_T;

#endif                                 //typedef_r_robotics_manip_internal_R_g_T

#ifndef struct_tag_Y04n94zUMq8rhLX3OxwtfD
#define struct_tag_Y04n94zUMq8rhLX3OxwtfD

struct tag_Y04n94zUMq8rhLX3OxwtfD
{
  c_rigidBodyJoint_katana_smo_g_T JointInternal;
};

#endif                                 //struct_tag_Y04n94zUMq8rhLX3OxwtfD

#ifndef typedef_s_robotics_manip_internal_R_g_T
#define typedef_s_robotics_manip_internal_R_g_T

typedef struct tag_Y04n94zUMq8rhLX3OxwtfD s_robotics_manip_internal_R_g_T;

#endif                                 //typedef_s_robotics_manip_internal_R_g_T

#ifndef struct_tag_adHmrPvDKD0ArwdbUi0kXC
#define struct_tag_adHmrPvDKD0ArwdbUi0kXC

struct tag_adHmrPvDKD0ArwdbUi0kXC
{
  real_T NumBodies;
  s_robotics_manip_internal_R_g_T Base;
  r_robotics_manip_internal_R_g_T *Bodies[10];
  real_T VelocityNumber;
  real_T PositionDoFMap[20];
  real_T VelocityDoFMap[20];
};

#endif                                 //struct_tag_adHmrPvDKD0ArwdbUi0kXC

#ifndef typedef_t_robotics_manip_internal_R_g_T
#define typedef_t_robotics_manip_internal_R_g_T

typedef struct tag_adHmrPvDKD0ArwdbUi0kXC t_robotics_manip_internal_R_g_T;

#endif                                 //typedef_t_robotics_manip_internal_R_g_T

#ifndef struct_tag_XelI9Pmf5IifkfUX35naJD
#define struct_tag_XelI9Pmf5IifkfUX35naJD

struct tag_XelI9Pmf5IifkfUX35naJD
{
  int32_T isInitialized;
  t_robotics_manip_internal_R_g_T TreeInternal;
};

#endif                                 //struct_tag_XelI9Pmf5IifkfUX35naJD

#ifndef typedef_robotics_slmanip_internal_b_g_T
#define typedef_robotics_slmanip_internal_b_g_T

typedef struct tag_XelI9Pmf5IifkfUX35naJD robotics_slmanip_internal_b_g_T;

#endif                                 //typedef_robotics_slmanip_internal_b_g_T

#ifndef struct_tag_vHfXEiuA3KFu0p3XQ6SOuG
#define struct_tag_vHfXEiuA3KFu0p3XQ6SOuG

struct tag_vHfXEiuA3KFu0p3XQ6SOuG
{
  real_T NumBodies;
  s_robotics_manip_internal_R_g_T Base;
  real_T Gravity[3];
  r_robotics_manip_internal_R_g_T *Bodies[10];
  real_T VelocityNumber;
  real_T PositionDoFMap[20];
  real_T VelocityDoFMap[20];
};

#endif                                 //struct_tag_vHfXEiuA3KFu0p3XQ6SOuG

#ifndef typedef_t_robotics_manip_internal__gl_T
#define typedef_t_robotics_manip_internal__gl_T

typedef struct tag_vHfXEiuA3KFu0p3XQ6SOuG t_robotics_manip_internal__gl_T;

#endif                                 //typedef_t_robotics_manip_internal__gl_T

#ifndef struct_tag_JaIDC5o8TCYfAaNTPWKJe
#define struct_tag_JaIDC5o8TCYfAaNTPWKJe

struct tag_JaIDC5o8TCYfAaNTPWKJe
{
  int32_T isInitialized;
  t_robotics_manip_internal__gl_T TreeInternal;
};

#endif                                 //struct_tag_JaIDC5o8TCYfAaNTPWKJe

#ifndef typedef_robotics_slmanip_internal__gl_T
#define typedef_robotics_slmanip_internal__gl_T

typedef struct tag_JaIDC5o8TCYfAaNTPWKJe robotics_slmanip_internal__gl_T;

#endif                                 //typedef_robotics_slmanip_internal__gl_T

#ifndef struct_emxArray_tag_8EP4ctv7s0SDnh3V6W
#define struct_emxArray_tag_8EP4ctv7s0SDnh3V6W

struct emxArray_tag_8EP4ctv7s0SDnh3V6W
{
  f_cell_wrap_katana_smo_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_tag_8EP4ctv7s0SDnh3V6W

#ifndef typedef_emxArray_f_cell_wrap_katana_s_T
#define typedef_emxArray_f_cell_wrap_katana_s_T

typedef struct emxArray_tag_8EP4ctv7s0SDnh3V6W emxArray_f_cell_wrap_katana_s_T;

#endif                                 //typedef_emxArray_f_cell_wrap_katana_s_T

#ifndef struct_emxArray_tag_pGgszObO16I6TGXaEM
#define struct_emxArray_tag_pGgszObO16I6TGXaEM

struct emxArray_tag_pGgszObO16I6TGXaEM
{
  f_cell_wrap_katana_smo_g_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_tag_pGgszObO16I6TGXaEM

#ifndef typedef_emxArray_f_cell_wrap_katana_g_T
#define typedef_emxArray_f_cell_wrap_katana_g_T

typedef struct emxArray_tag_pGgszObO16I6TGXaEM emxArray_f_cell_wrap_katana_g_T;

#endif                                 //typedef_emxArray_f_cell_wrap_katana_g_T

// Parameters (default storage)
typedef struct P_katana_smo_T_ P_katana_smo_T;

// Forward declaration for rtModel
typedef struct tag_RTM_katana_smo_T RT_MODEL_katana_smo_T;

#endif                                 // RTW_HEADER_katana_smo_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
