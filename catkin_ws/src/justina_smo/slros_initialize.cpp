#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "justina_smo";

// For Block justina_smo/ROS Subscribers/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_smo_std_msgs_Float64MultiArray> Sub_justina_smo_299;

// For Block justina_smo/ROS Subscribers/Subscribe1
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_smo_std_msgs_Float64MultiArray> Sub_justina_smo_638;

// For Block justina_smo/ROS Publishers/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_justina_smo_std_msgs_Float64> Pub_justina_smo_311;

// For Block justina_smo/ROS Publishers/Publish3
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_justina_smo_std_msgs_Float64MultiArray> Pub_justina_smo_331;

// For Block justina_smo/ROS Params SMO/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_justina_smo_383;

// For Block justina_smo/ROS Params SMO/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_justina_smo_384;

// For Block justina_smo/ROS Params SMO/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_justina_smo_385;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

