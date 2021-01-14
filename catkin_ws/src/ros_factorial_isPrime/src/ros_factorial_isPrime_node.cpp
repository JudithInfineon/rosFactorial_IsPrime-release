/* ===========================================================================
** Copyright (C) 2019-2020 Infineon Technologies AG. All rights reserved.
** ===========================================================================
**
** ===========================================================================
** Infineon Technologies AG (INFINEON) is supplying this file for use
** exclusively with Infineon's sensor products. This file can be freely
** distributed within development tools and software supporting such
** products.
**
** THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
** OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
** MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
** INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR DIRECT, INDIRECT,
** INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES, FOR ANY REASON
** WHATSOEVER.
** ===========================================================================
*/


#include <ros/ros.h>
#include <string>
#include "ros_factorial_isPrime/ros_factorial_isPrime_app.h"

int main(int argc, char **argv){
    ros::init(argc, argv, "ros_factorial_isPrime");
    ros::NodeHandle ros_factorial_isPrime_node;
    ROS_INFO_STREAM("_");
    ROS_INFO_STREAM(std::to_string(Factorial(3)));
    ROS_INFO_STREAM(std::to_string(IsPrime(3)));
    ROS_INFO_STREAM("*");
    return 0;
}