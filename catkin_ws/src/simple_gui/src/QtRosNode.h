#pragma once
#include <iostream>
#include <cmath>
#include <QThread>
#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "std_msgs/Float32MultiArray.h"
#include "std_msgs/Float64MultiArray.h"
#include "std_msgs/Int16.h"

class QtRosNode : public QThread
{
Q_OBJECT
public:
    QtRosNode();
    ~QtRosNode();
    
    ros::NodeHandle* n;
    ros::Subscriber subCurrentPose;
    ros::Subscriber subEstimatedMass;
    ros::Publisher  pubGoalPose;
    ros::Publisher  pubObjectMass;

    std::vector<double> current_pose;
    double estimated_mass;
    bool gui_closed;
    
    void run();
    void setNodeHandle(ros::NodeHandle* nh);

    void publishGoalPose(std::vector<double> goal_pose);
    void publishObjectMass(double object_mass);
    void callbackCurrentPose(const std_msgs::Float64MultiArray::ConstPtr& msg);
    void callbackEstimatedMass(const std_msgs::Float64::ConstPtr& msg);
    
signals:
    void updateGraphics();
    void onRosNodeFinished();
    
};
