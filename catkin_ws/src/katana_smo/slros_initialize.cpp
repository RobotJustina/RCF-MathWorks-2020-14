#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "katana_smo";

// For Block katana_smo/ROS Subscribers/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_smo_std_msgs_Float64MultiArray> Sub_katana_smo_434;

// For Block katana_smo/ROS Subscribers/Subscribe1
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_smo_std_msgs_Float64MultiArray> Sub_katana_smo_435;

// For Block katana_smo/ROS Publishers/Publish2
SimulinkPublisher<std_msgs::Float64, SL_Bus_katana_smo_std_msgs_Float64> Pub_katana_smo_449;

// For Block katana_smo/ROS Publishers/Publish3
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_katana_smo_std_msgs_Float64MultiArray> Pub_katana_smo_450;

// For Block katana_smo/ROS Params SMO/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_katana_smo_421;

// For Block katana_smo/ROS Params SMO/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_katana_smo_422;

// For Block katana_smo/ROS Params SMO/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_katana_smo_423;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

