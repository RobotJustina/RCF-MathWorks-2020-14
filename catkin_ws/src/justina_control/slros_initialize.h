#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block justina_control/ROS Subscribers/Subscribe
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_control_std_msgs_Float64MultiArray> Sub_justina_control_299;

// For Block justina_control/ROS Subscribers/Subscribe1
extern SimulinkSubscriber<std_msgs::Float32MultiArray, SL_Bus_justina_control_std_msgs_Float32MultiArray> Sub_justina_control_318;

// For Block justina_control/ROS Subscribers/Subscribe2
extern SimulinkSubscriber<std_msgs::Float64MultiArray, SL_Bus_justina_control_std_msgs_Float64MultiArray> Sub_justina_control_638;

// For Block justina_control/ROS Publishers/Publish1
extern SimulinkPublisher<std_msgs::Float64MultiArray, SL_Bus_justina_control_std_msgs_Float64MultiArray> Pub_justina_control_304;

// For Block justina_control/ROS Params PD/Get Parameter
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_368;

// For Block justina_control/ROS Params PD/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_370;

// For Block justina_control/ROS Params PD/Get Parameter10
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_403;

// For Block justina_control/ROS Params PD/Get Parameter11
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_404;

// For Block justina_control/ROS Params PD/Get Parameter12
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_405;

// For Block justina_control/ROS Params PD/Get Parameter13
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_406;

// For Block justina_control/ROS Params PD/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_372;

// For Block justina_control/ROS Params PD/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_374;

// For Block justina_control/ROS Params PD/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_376;

// For Block justina_control/ROS Params PD/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_378;

// For Block justina_control/ROS Params PD/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_380;

// For Block justina_control/ROS Params PD/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_400;

// For Block justina_control/ROS Params PD/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_401;

// For Block justina_control/ROS Params PD/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_justina_control_402;

void slros_node_init(int argc, char** argv);

#endif
