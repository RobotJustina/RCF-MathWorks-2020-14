#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block katana_smo/ROS Subscribers/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_smo_std_msgs_Float64MultiArray> Sub_katana_smo_434;

// For Block katana_smo/ROS Subscribers/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_smo_std_msgs_Float64MultiArray> Sub_katana_smo_435;

// For Block katana_smo/ROS Publishers/Publish2
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_katana_smo_std_msgs_Float64> Pub_katana_smo_449;

// For Block katana_smo/ROS Publishers/Publish3
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_katana_smo_std_msgs_Float64MultiArray> Pub_katana_smo_450;

// For Block katana_smo/ROS Params SMO/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_smo_421;

// For Block katana_smo/ROS Params SMO/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_smo_422;

// For Block katana_smo/ROS Params SMO/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_katana_smo_423;

void slros_node_init(int argc, char** argv);

#endif
