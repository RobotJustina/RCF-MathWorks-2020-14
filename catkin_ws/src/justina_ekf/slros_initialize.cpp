#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "justina_ekf";

// For Block justina_ekf/ROS Subscribers/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_ekf_std_msgs_Float64MultiArray> Sub_justina_ekf_299;

// For Block justina_ekf/ROS Subscribers/Subscribe1
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_ekf_std_msgs_Float64MultiArray> Sub_justina_ekf_638;

// For Block justina_ekf/ROS Publishers/Publish3
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_justina_ekf_std_msgs_Float64MultiArray> Pub_justina_ekf_331;

// For Block justina_ekf/ROS Params SMO/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_justina_ekf_383;

// For Block justina_ekf/ROS Params SMO/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_justina_ekf_384;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

