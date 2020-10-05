#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block katana_manipulator/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_manipulator_std_msgs_Float64MultiArray> Sub_katana_manipulator_595;

// For Block katana_manipulator/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_katana_manipulator_std_msgs_Float64> Sub_katana_manipulator_596;

// For Block katana_manipulator/ROS Publishers/Publish1
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_katana_manipulator_std_msgs_Float64MultiArray> Pub_katana_manipulator_608;

void slros_node_init(int argc, char** argv);

#endif
