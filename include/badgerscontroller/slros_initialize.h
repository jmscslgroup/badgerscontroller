#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "badgerscontroller_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block badgerscontroller/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_badgerscontroller_std_msgs_Float64> Sub_badgerscontroller_34;

// For Block badgerscontroller/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_badgerscontroller_std_msgs_Float64> Sub_badgerscontroller_47;

// For Block badgerscontroller/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_badgerscontroller_std_msgs_Float64> Pub_badgerscontroller_35;

void slros_node_init(int argc, char** argv);

#endif
