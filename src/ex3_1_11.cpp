#include "ros/ros.h"
#include "geometry_msgs/Point.h"
#include "visualization_msgs/Marker.h"

void callback(const geometry_msgs::Point::ConstPtr& point) {

}

int main( int argc, char ** argv) {
ros::init(argc, argv, "marker_publisher");
ros::NodeHandle nh;
ros::Publisher pub = nh.advertise<visualization_msgs::Marker>("output", 10, true);
visualization_msgs::Marker mrk;

ros::Subscriber sub = n.subscribe("input", 1000, callback);

ros::spin();

return 0;
}
