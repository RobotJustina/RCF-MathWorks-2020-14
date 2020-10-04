#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "justina_manipulator";

// For Block justina_manipulator/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_manipulator_std_msgs_Float64MultiArray> Sub_justina_manipulator_160;

// For Block justina_manipulator/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_justina_manipulator_std_msgs_Float64> Sub_justina_manipulator_272;

// For Block justina_manipulator/ROS Publishers/Publish1
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_justina_manipulator_std_msgs_Float64MultiArray> Pub_justina_manipulator_163;

// For Block justina_manipulator/ROS Publishers/Publish2
SimulinkPublisher<sensor_msgs::JointState, SL_Bus_justina_manipulator_sensor_msgs_JointState> Pub_justina_manipulator_591;

// For Block justina_manipulator/Get Parameter
SimulinkParameterGetter<int32_T, int> ParamGet_justina_manipulator_433;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

