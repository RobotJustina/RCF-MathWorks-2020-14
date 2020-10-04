//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: justina_control_types.h
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
#ifndef RTW_HEADER_justina_control_types_h_
#define RTW_HEADER_justina_control_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_justina_control_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_justina_control_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_justina_control_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_Float64MultiArray_

// MsgType=std_msgs/Float64MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real_T Data[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_justina_control_std_msgs_MultiArrayLayout Layout;
} SL_Bus_justina_control_std_msgs_Float64MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_Float32MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_justina_control_std_msgs_Float32MultiArray_

// MsgType=std_msgs/Float32MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real32_T Data[14];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_justina_control_std_msgs_MultiArrayLayout Layout;
} SL_Bus_justina_control_std_msgs_Float32MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_8MDKU1QH03aEqJoxBiQBqF_
#define DEFINED_TYPEDEF_FOR_struct_8MDKU1QH03aEqJoxBiQBqF_

typedef struct {
  real_T NameLength;
  uint8_T Name[20];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[10];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
} struct_8MDKU1QH03aEqJoxBiQBqF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_5Np81zJKxJDg8ksUwS8TqH_
#define DEFINED_TYPEDEF_FOR_struct_5Np81zJKxJDg8ksUwS8TqH_

typedef struct {
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[20];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
} struct_5Np81zJKxJDg8ksUwS8TqH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_EuvQoF9u9X0OfH8NoM43sB_
#define DEFINED_TYPEDEF_FOR_struct_EuvQoF9u9X0OfH8NoM43sB_

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
  struct_8MDKU1QH03aEqJoxBiQBqF Bodies[11];
  struct_5Np81zJKxJDg8ksUwS8TqH Joints[11];
} struct_EuvQoF9u9X0OfH8NoM43sB;

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

#ifndef typedef_emxArray_char_T_justina_contr_T
#define typedef_emxArray_char_T_justina_contr_T

typedef struct emxArray_char_T emxArray_char_T_justina_contr_T;

#endif                                 //typedef_emxArray_char_T_justina_contr_T

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

#ifndef typedef_emxArray_real_T_justina_contr_T
#define typedef_emxArray_real_T_justina_contr_T

typedef struct emxArray_real_T emxArray_real_T_justina_contr_T;

#endif                                 //typedef_emxArray_real_T_justina_contr_T

#ifndef struct_tag_ssoOm1dpzkll0ActLkI75EE
#define struct_tag_ssoOm1dpzkll0ActLkI75EE

struct tag_ssoOm1dpzkll0ActLkI75EE
{
  real_T NameLength;
  uint8_T Name[20];
  real_T ParentIndex;
  real_T NumChildren;
  real_T ChildrenIndices[10];
  real_T Mass;
  real_T CenterOfMass[3];
  real_T Inertia[9];
  real_T SpatialInertia[36];
};

#endif                                 //struct_tag_ssoOm1dpzkll0ActLkI75EE

#ifndef typedef_ssoOm1dpzkll0ActLkI75EE_justi_T
#define typedef_ssoOm1dpzkll0ActLkI75EE_justi_T

typedef struct tag_ssoOm1dpzkll0ActLkI75EE ssoOm1dpzkll0ActLkI75EE_justi_T;

#endif                                 //typedef_ssoOm1dpzkll0ActLkI75EE_justi_T

#ifndef struct_tag_sb1GSy5uAZojAgyRiXnSERH
#define struct_tag_sb1GSy5uAZojAgyRiXnSERH

struct tag_sb1GSy5uAZojAgyRiXnSERH
{
  uint8_T Type;
  real_T NameLength;
  uint8_T Name[20];
  real_T VelocityNumber;
  real_T PositionNumber;
  real_T MotionSubspace[36];
  real_T JointAxis[3];
  real_T PositionLimits[14];
  real_T HomePosition[7];
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
};

#endif                                 //struct_tag_sb1GSy5uAZojAgyRiXnSERH

#ifndef typedef_sb1GSy5uAZojAgyRiXnSERH_justi_T
#define typedef_sb1GSy5uAZojAgyRiXnSERH_justi_T

typedef struct tag_sb1GSy5uAZojAgyRiXnSERH sb1GSy5uAZojAgyRiXnSERH_justi_T;

#endif                                 //typedef_sb1GSy5uAZojAgyRiXnSERH_justi_T

#ifndef struct_tag_pGgszObO16I6TGXaEMnuXB
#define struct_tag_pGgszObO16I6TGXaEMnuXB

struct tag_pGgszObO16I6TGXaEMnuXB
{
  real_T f1[36];
};

#endif                                 //struct_tag_pGgszObO16I6TGXaEMnuXB

#ifndef typedef_f_cell_wrap_justina_control_T
#define typedef_f_cell_wrap_justina_control_T

typedef struct tag_pGgszObO16I6TGXaEMnuXB f_cell_wrap_justina_control_T;

#endif                                 //typedef_f_cell_wrap_justina_control_T

#ifndef struct_tag_QsLFVUgAtzQUBY1V99co0D
#define struct_tag_QsLFVUgAtzQUBY1V99co0D

struct tag_QsLFVUgAtzQUBY1V99co0D
{
  emxArray_char_T_justina_contr_T *Type;
  emxArray_real_T_justina_contr_T *MotionSubspace;
  real_T JointToParentTransform[16];
  real_T ChildToJointTransform[16];
  real_T JointAxisInternal[3];
};

#endif                                 //struct_tag_QsLFVUgAtzQUBY1V99co0D

#ifndef typedef_c_rigidBodyJoint_justina_cont_T
#define typedef_c_rigidBodyJoint_justina_cont_T

typedef struct tag_QsLFVUgAtzQUBY1V99co0D c_rigidBodyJoint_justina_cont_T;

#endif                                 //typedef_c_rigidBodyJoint_justina_cont_T

#ifndef struct_tag_IYTryndM9hCl2aQvRVOEpC
#define struct_tag_IYTryndM9hCl2aQvRVOEpC

struct tag_IYTryndM9hCl2aQvRVOEpC
{
  real_T Index;
  c_rigidBodyJoint_justina_cont_T JointInternal;
  real_T ParentIndex;
  real_T SpatialInertia[36];
};

#endif                                 //struct_tag_IYTryndM9hCl2aQvRVOEpC

#ifndef typedef_o_robotics_manip_internal_Rig_T
#define typedef_o_robotics_manip_internal_Rig_T

typedef struct tag_IYTryndM9hCl2aQvRVOEpC o_robotics_manip_internal_Rig_T;

#endif                                 //typedef_o_robotics_manip_internal_Rig_T

#ifndef struct_tag_Y04n94zUMq8rhLX3OxwtfD
#define struct_tag_Y04n94zUMq8rhLX3OxwtfD

struct tag_Y04n94zUMq8rhLX3OxwtfD
{
  c_rigidBodyJoint_justina_cont_T JointInternal;
};

#endif                                 //struct_tag_Y04n94zUMq8rhLX3OxwtfD

#ifndef typedef_p_robotics_manip_internal_Rig_T
#define typedef_p_robotics_manip_internal_Rig_T

typedef struct tag_Y04n94zUMq8rhLX3OxwtfD p_robotics_manip_internal_Rig_T;

#endif                                 //typedef_p_robotics_manip_internal_Rig_T

#ifndef struct_tag_yIxfxWnYtOJi6eBGKIKu6G
#define struct_tag_yIxfxWnYtOJi6eBGKIKu6G

struct tag_yIxfxWnYtOJi6eBGKIKu6G
{
  real_T NumBodies;
  p_robotics_manip_internal_Rig_T Base;
  real_T Gravity[3];
  o_robotics_manip_internal_Rig_T *Bodies[10];
  real_T PositionDoFMap[20];
  real_T VelocityDoFMap[20];
};

#endif                                 //struct_tag_yIxfxWnYtOJi6eBGKIKu6G

#ifndef typedef_q_robotics_manip_internal_Rig_T
#define typedef_q_robotics_manip_internal_Rig_T

typedef struct tag_yIxfxWnYtOJi6eBGKIKu6G q_robotics_manip_internal_Rig_T;

#endif                                 //typedef_q_robotics_manip_internal_Rig_T

#ifndef struct_tag_G91cxKCSBxOFL5OWGrcUlB
#define struct_tag_G91cxKCSBxOFL5OWGrcUlB

struct tag_G91cxKCSBxOFL5OWGrcUlB
{
  int32_T isInitialized;
  q_robotics_manip_internal_Rig_T TreeInternal;
};

#endif                                 //struct_tag_G91cxKCSBxOFL5OWGrcUlB

#ifndef typedef_robotics_slmanip_internal_blo_T
#define typedef_robotics_slmanip_internal_blo_T

typedef struct tag_G91cxKCSBxOFL5OWGrcUlB robotics_slmanip_internal_blo_T;

#endif                                 //typedef_robotics_slmanip_internal_blo_T

#ifndef struct_emxArray_tag_pGgszObO16I6TGXaEM
#define struct_emxArray_tag_pGgszObO16I6TGXaEM

struct emxArray_tag_pGgszObO16I6TGXaEM
{
  f_cell_wrap_justina_control_T *data;
  int32_T *size;
  int32_T allocatedSize;
  int32_T numDimensions;
  boolean_T canFreeData;
};

#endif                                 //struct_emxArray_tag_pGgszObO16I6TGXaEM

#ifndef typedef_emxArray_f_cell_wrap_justina__T
#define typedef_emxArray_f_cell_wrap_justina__T

typedef struct emxArray_tag_pGgszObO16I6TGXaEM emxArray_f_cell_wrap_justina__T;

#endif                                 //typedef_emxArray_f_cell_wrap_justina__T

// Parameters (default storage)
typedef struct P_justina_control_T_ P_justina_control_T;

// Forward declaration for rtModel
typedef struct tag_RTM_justina_control_T RT_MODEL_justina_control_T;

#endif                                 // RTW_HEADER_justina_control_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
