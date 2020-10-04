#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block justina_manipulator/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_manipulator_std_msgs_Float64MultiArray> Sub_justina_manipulator_160;

// For Block justina_manipulator/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_justina_manipulator_std_msgs_Float64> Sub_justina_manipulator_272;

// For Block justina_manipulator/ROS Publishers/Publish1
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_justina_manipulator_std_msgs_Float64MultiArray> Pub_justina_manipulator_163;

// For Block justina_manipulator/ROS Publishers/Publish2
extern SimulinkPublisher<sensor_msgs::JointState, SL_Bus_justina_manipulator_sensor_msgs_JointState> Pub_justina_manipulator_591;

// For Block justina_manipulator/Get Parameter
extern SimulinkParameterGetter<int32_T, int> ParamGet_justina_manipulator_433;

void slros_node_init(int argc, char** argv);

#endif
