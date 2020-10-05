#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "katana_control";

// For Block katana_control/ROS Subscribers/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_katana_control_std_msgs_Float64MultiArray> Sub_katana_control_331;

// For Block katana_control/ROS Subscribers/Subscribe1
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_katana_control_std_msgs_Float32MultiArray> Sub_katana_control_332;

// For Block katana_control/ROS Publishers/Publish1
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_katana_control_std_msgs_Float64MultiArray> Pub_katana_control_321;

// For Block katana_control/ROS Params PD/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_343;

// For Block katana_control/ROS Params PD/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_344;

// For Block katana_control/ROS Params PD/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_349;

// For Block katana_control/ROS Params PD/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_350;

// For Block katana_control/ROS Params PD/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_351;

// For Block katana_control/ROS Params PD/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_352;

// For Block katana_control/ROS Params PD/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_katana_control_353;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

