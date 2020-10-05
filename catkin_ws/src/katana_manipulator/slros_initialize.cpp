#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "katana_manipulator";

// For Block katana_manipulator/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_manipulator_std_msgs_Float64MultiArray> Sub_katana_manipulator_595;

// For Block katana_manipulator/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_katana_manipulator_std_msgs_Float64> Sub_katana_manipulator_596;

// For Block katana_manipulator/ROS Publishers/Publish1
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_katana_manipulator_std_msgs_Float64MultiArray> Pub_katana_manipulator_608;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

