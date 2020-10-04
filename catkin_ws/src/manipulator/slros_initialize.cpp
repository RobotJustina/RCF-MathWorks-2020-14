#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "manipulator";

// For Block manipulator/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_manipulator_std_msgs_Float64MultiArray> Sub_manipulator_160;

// For Block manipulator/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_manipulator_std_msgs_Float64> Sub_manipulator_272;

// For Block manipulator/ROS Publishers/Publish1
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_manipulator_std_msgs_Float64MultiArray> Pub_manipulator_163;

// For Block manipulator/ROS Publishers/Publish2
SimulinkPublisher<sensor_msgs::JointState, SL_Bus_manipulator_sensor_msgs_JointState> Pub_manipulator_591;

// For Block manipulator/Get Parameter
SimulinkParameterGetter<int32_T, int> ParamGet_manipulator_433;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

