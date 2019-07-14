#include <iostream>
#include <ros/ros.h>


int main(int argc, char **argv)
{
    ros::init(argc, argv, "test");
    {
        ros::NodeHandle n;
    }
    ros::NodeHandle n;


    ros::Rate rate(10);
    while(ros::ok())
    {
        ROS_INFO("hogehoge");
        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}
