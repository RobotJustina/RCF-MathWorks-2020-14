#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "justina_control";

// For Block justina_control/ROS Subscribers/Subscribe
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_control_std_msgs_Float64MultiArray> Sub_justina_control_299;

// For Block justina_control/ROS Subscribers/Subscribe1
SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_justina_control_std_msgs_Float32MultiArray> Sub_justina_control_318;

// For Block justina_control/ROS Subscribers/Subscribe2
SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_control_std_msgs_Float64MultiArray> Sub_justina_control_638;

// For Block justina_control/ROS Publishers/Publish1
SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_justina_control_std_msgs_Float64MultiArray> Pub_justina_control_304;

// For Block justina_control/ROS Params PD/Get Parameter
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_368;

// For Block justina_control/ROS Params PD/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_370;

// For Block justina_control/ROS Params PD/Get Parameter10
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_403;

// For Block justina_control/ROS Params PD/Get Parameter11
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_404;

// For Block justina_control/ROS Params PD/Get Parameter12
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_405;

// For Block justina_control/ROS Params PD/Get Parameter13
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_406;

// For Block justina_control/ROS Params PD/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_372;

// For Block justina_control/ROS Params PD/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_374;

// For Block justina_control/ROS Params PD/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_376;

// For Block justina_control/ROS Params PD/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_378;

// For Block justina_control/ROS Params PD/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_380;

// For Block justina_control/ROS Params PD/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_400;

// For Block justina_control/ROS Params PD/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_401;

// For Block justina_control/ROS Params PD/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_402;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

