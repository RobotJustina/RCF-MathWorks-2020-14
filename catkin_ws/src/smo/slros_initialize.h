#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block smo/ROS Subscribers/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_smo_std_msgs_Float64MultiArray> Sub_smo_299;

// For Block smo/ROS Subscribers/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_smo_std_msgs_Float64MultiArray> Sub_smo_638;

// For Block smo/ROS Publishers/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_smo_std_msgs_Float64> Pub_smo_311;

// For Block smo/ROS Publishers/Publish3
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_smo_std_msgs_Float64MultiArray> Pub_smo_331;

// For Block smo/ROS Params SMO/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_smo_383;

// For Block smo/ROS Params SMO/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_smo_384;

// For Block smo/ROS Params SMO/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_smo_385;

void slros_node_init(int argc, char** argv);

#endif
