#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block ekf/ROS Subscribers/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_ekf_std_msgs_Float64MultiArray> Sub_ekf_299;

// For Block ekf/ROS Subscribers/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_ekf_std_msgs_Float64MultiArray> Sub_ekf_638;

// For Block ekf/ROS Publishers/Publish3
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_ekf_std_msgs_Float64MultiArray> Pub_ekf_331;

// For Block ekf/ROS Params SMO/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_ekf_383;

// For Block ekf/ROS Params SMO/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_ekf_384;

void slros_node_init(int argc, char** argv);

#endif
