//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: manipulator_types.h
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
#ifndef RTW_HEADER_manipulator_types_h_
#define RTW_HEADER_manipulator_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_ros_time_Time_

// MsgType=ros_time/Time
typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_manipulator_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_String_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_String_

// MsgType=std_msgs/String
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn 
  uint8_T Data[10];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;
} SL_Bus_manipulator_std_msgs_String;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_Header_

// MsgType=std_msgs/Header
typedef struct {
  uint32_T Seq;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;

  // MsgType=ros_time/Time
  SL_Bus_manipulator_ros_time_Time Stamp;
} SL_Bus_manipulator_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_sensor_msgs_JointState_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_sensor_msgs_JointState_

// MsgType=sensor_msgs/JointState
typedef struct {
  // MsgType=std_msgs/String:PrimitiveROSType=string[]:IsVarLen=1:VarLenCategory=data:VarLenElem=Name_SL_Info:TruncateAction=warn 
  SL_Bus_manipulator_std_msgs_String Name[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Name
  SL_Bus_ROSVariableLengthArrayInfo Name_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Position_SL_Info:TruncateAction=warn 
  real_T Position[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Position
  SL_Bus_ROSVariableLengthArrayInfo Position_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Velocity_SL_Info:TruncateAction=warn 
  real_T Velocity[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Velocity
  SL_Bus_ROSVariableLengthArrayInfo Velocity_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Effort_SL_Info:TruncateAction=warn 
  real_T Effort[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Effort
  SL_Bus_ROSVariableLengthArrayInfo Effort_SL_Info;

  // MsgType=std_msgs/Header
  SL_Bus_manipulator_std_msgs_Header Header;
} SL_Bus_manipulator_sensor_msgs_JointState;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_MultiArrayDimension_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_MultiArrayDimension_

// MsgType=std_msgs/MultiArrayDimension
typedef struct {
  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=Label_SL_Info:TruncateAction=warn 
  uint8_T Label[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Label
  SL_Bus_ROSVariableLengthArrayInfo Label_SL_Info;
  uint32_T Size;
  uint32_T Stride;
} SL_Bus_manipulator_std_msgs_MultiArrayDimension;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_MultiArrayLayout_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_MultiArrayLayout_

// MsgType=std_msgs/MultiArrayLayout
typedef struct {
  uint32_T DataOffset;

  // MsgType=std_msgs/MultiArrayDimension:IsVarLen=1:VarLenCategory=data:VarLenElem=Dim_SL_Info:TruncateAction=warn 
  SL_Bus_manipulator_std_msgs_MultiArrayDimension Dim[16];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Dim
  SL_Bus_ROSVariableLengthArrayInfo Dim_SL_Info;
} SL_Bus_manipulator_std_msgs_MultiArrayLayout;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_Float64MultiArray_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_Float64MultiArray_

// MsgType=std_msgs/Float64MultiArray
typedef struct {
  // IsVarLen=1:VarLenCategory=data:VarLenElem=Data_SL_Info:TruncateAction=warn
  real_T Data[7];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Data
  SL_Bus_ROSVariableLengthArrayInfo Data_SL_Info;

  // MsgType=std_msgs/MultiArrayLayout
  SL_Bus_manipulator_std_msgs_MultiArrayLayout Layout;
} SL_Bus_manipulator_std_msgs_Float64MultiArray;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_Float64_
#define DEFINED_TYPEDEF_FOR_SL_Bus_manipulator_std_msgs_Float64_

// MsgType=std_msgs/Float64
typedef struct {
  real_T Data;
} SL_Bus_manipulator_std_msgs_Float64;

#endif

#ifndef typedef_d_robotics_slcore_internal_bl_T
#define typedef_d_robotics_slcore_internal_bl_T

typedef struct {
  int32_T __dummy;
} d_robotics_slcore_internal_bl_T;

#endif                                 //typedef_d_robotics_slcore_internal_bl_T

#ifndef typedef_ros_slros_internal_block_GetP_T
#define typedef_ros_slros_internal_block_GetP_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  d_robotics_slcore_internal_bl_T SampleTimeHandler;
} ros_slros_internal_block_GetP_T;

#endif                                 //typedef_ros_slros_internal_block_GetP_T

#ifndef typedef_ros_slros_internal_block_Curr_T
#define typedef_ros_slros_internal_block_Curr_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  d_robotics_slcore_internal_bl_T SampleTimeHandler;
} ros_slros_internal_block_Curr_T;

#endif                                 //typedef_ros_slros_internal_block_Curr_T

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Publ_T;

#endif                                 //typedef_ros_slros_internal_block_Publ_T

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct {
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
} ros_slros_internal_block_Subs_T;

#endif                                 //typedef_ros_slros_internal_block_Subs_T

#ifndef typedef_struct_T_manipulator_T
#define typedef_struct_T_manipulator_T

typedef struct {
  char_T Value[6];
} struct_T_manipulator_T;

#endif                                 //typedef_struct_T_manipulator_T

#ifndef typedef_b_struct_T_manipulator_T
#define typedef_b_struct_T_manipulator_T

typedef struct {
  char_T Value[3];
} b_struct_T_manipulator_T;

#endif                                 //typedef_b_struct_T_manipulator_T

#ifndef struct_tag_sI6PfD9gKI62KvmaMlArLgH
#define struct_tag_sI6PfD9gKI62KvmaMlArLgH

struct tag_sI6PfD9gKI62KvmaMlArLgH
{
  char_T HeaderFile[18];
  char_T SourceFile[20];
};

#endif                                 //struct_tag_sI6PfD9gKI62KvmaMlArLgH

#ifndef typedef_sI6PfD9gKI62KvmaMlArLgH_manip_T
#define typedef_sI6PfD9gKI62KvmaMlArLgH_manip_T

typedef struct tag_sI6PfD9gKI62KvmaMlArLgH sI6PfD9gKI62KvmaMlArLgH_manip_T;

#endif                                 //typedef_sI6PfD9gKI62KvmaMlArLgH_manip_T

#ifndef typedef_c_struct_T_manipulator_T
#define typedef_c_struct_T_manipulator_T

typedef struct {
  char_T Value[17];
} c_struct_T_manipulator_T;

#endif                                 //typedef_c_struct_T_manipulator_T

// Parameters (default storage)
typedef struct P_manipulator_T_ P_manipulator_T;

// Forward declaration for rtModel
typedef struct tag_RTM_manipulator_T RT_MODEL_manipulator_T;

#endif                                 // RTW_HEADER_manipulator_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
