#include "QtRosNode.h"

QtRosNode::QtRosNode()
{
    this->gui_closed = false;
    current_pose.resize(7);
    estimated_mass = 0.0;
}

QtRosNode::~QtRosNode()
{
}

void QtRosNode::run()
{    
    ros::Rate loop(30);
    subCurrentPose   = n->subscribe("/joint_positions", 1, &QtRosNode::callbackCurrentPose, this);
    subEstimatedMass = n->subscribe("/estimated_mass", 1, &QtRosNode::callbackEstimatedMass, this);
    pubGoalPose      = n->advertise<std_msgs::Float64MultiArray>("/goal_positions", 10);
    pubObjectMass    = n->advertise<std_msgs::Float64>("/simulated_object_mass", 10);
  
    while(ros::ok() && !this->gui_closed)
    {   
        ros::spinOnce();
        emit updateGraphics();
        loop.sleep();
    }
    emit onRosNodeFinished();
}

void QtRosNode::setNodeHandle(ros::NodeHandle* nh)
{
    this->n = nh;   
}

void QtRosNode::publishGoalPose(std::vector<double> goal_pose)
{
    std_msgs::Float64MultiArray msg;
    msg.data = goal_pose;
    pubGoalPose.publish(msg);
}

void QtRosNode::publishObjectMass(double object_mass)
{
    std_msgs::Float64 msg;
    msg.data = object_mass;
    pubObjectMass.publish(msg);
}

void QtRosNode::callbackCurrentPose(const std_msgs::Float64MultiArray::ConstPtr& msg)
{
    current_pose = msg->data;
}

void QtRosNode::callbackEstimatedMass(const std_msgs::Float64::ConstPtr& msg)
{
    estimated_mass = msg->data;
}
