#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block manipulator/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_manipulator_std_msgs_Float64MultiArray> Sub_manipulator_160;

// For Block manipulator/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_manipulator_std_msgs_Float64> Sub_manipulator_272;

// For Block manipulator/ROS Publishers/Publish1
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_manipulator_std_msgs_Float64MultiArray> Pub_manipulator_163;

// For Block manipulator/ROS Publishers/Publish2
extern SimulinkPublisher<sensor_msgs::JointState, SL_Bus_manipulator_sensor_msgs_JointState> Pub_manipulator_591;

// For Block manipulator/Get Parameter
extern SimulinkParameterGetter<int32_T, int> ParamGet_manipulator_433;

void slros_node_init(int argc, char** argv);

#endif
