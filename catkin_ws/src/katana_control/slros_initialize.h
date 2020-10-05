#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block katana_control/ROS Subscribers/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_control_std_msgs_Float64MultiArray> Sub_katana_control_331;

// For Block katana_control/ROS Subscribers/Subscribe1
extern SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_katana_control_std_msgs_Float32MultiArray> Sub_katana_control_332;

// For Block katana_control/ROS Publishers/Publish1
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_katana_control_std_msgs_Float64MultiArray> Pub_katana_control_321;

// For Block katana_control/ROS Params PD/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_343;

// For Block katana_control/ROS Params PD/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_344;

// For Block katana_control/ROS Params PD/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_349;

// For Block katana_control/ROS Params PD/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_350;

// For Block katana_control/ROS Params PD/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_351;

// For Block katana_control/ROS Params PD/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_352;

// For Block katana_control/ROS Params PD/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_353;

void slros_node_init(int argc, char** argv);

#endif
