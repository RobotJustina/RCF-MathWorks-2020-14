#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include <ros/ros.h>
#include <std_msgs/Float64MultiArray.h>
#include <std_msgs/MultiArrayDimension.h>
#include <std_msgs/MultiArrayLayout.h>
#include "justina_ekf_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(std_msgs::Float64MultiArray* msgPtr, SL_Bus_justina_ekf_std_msgs_Float64MultiArray const* busPtr);
void convertToBus(SL_Bus_justina_ekf_std_msgs_Float64MultiArray* busPtr, std_msgs::Float64MultiArray const* msgPtr);

void convertFromBus(std_msgs::MultiArrayDimension* msgPtr, SL_Bus_justina_ekf_std_msgs_MultiArrayDimension const* busPtr);
void convertToBus(SL_Bus_justina_ekf_std_msgs_MultiArrayDimension* busPtr, std_msgs::MultiArrayDimension const* msgPtr);

void convertFromBus(std_msgs::MultiArrayLayout* msgPtr, SL_Bus_justina_ekf_std_msgs_MultiArrayLayout const* busPtr);
void convertToBus(SL_Bus_justina_ekf_std_msgs_MultiArrayLayout* busPtr, std_msgs::MultiArrayLayout const* msgPtr);


#endif
