#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "badgerscontroller";

// For Block badgerscontroller/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_badgerscontroller_std_msgs_Float64> Sub_badgerscontroller_34;

// For Block badgerscontroller/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_badgerscontroller_std_msgs_Float64> Sub_badgerscontroller_47;

// For Block badgerscontroller/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_badgerscontroller_std_msgs_Float64> Pub_badgerscontroller_35;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

