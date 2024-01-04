#include "ros/ros.h"
#include "std_msgs/Float64.h"
#include "geometry_msgs/Twist.h"

class Servo
{
private:
    ros::NodeHandle nh;

    ros::Publisher FL_CON_pub;
    ros::Publisher FR_CON_pub;
    ros::Publisher RL_CON_pub;
    ros::Publisher RR_CON_pub;
    ros::Publisher BASE_CON_pub;
    ros::Subscriber sub;

    std_msgs::Float64 A_angle;
    std_msgs::Float64 B_angle;
    std_msgs::Float64 C_angle;
    std_msgs::Float64 D_angle;
    geometry_msgs::Twist Linear;

public:

    Servo()
    {
        FL_CON_pub = nh.advertise<std_msgs::Float64>("FL_CON/command", 2);
        FR_CON_pub = nh.advertise<std_msgs::Float64>("FR_CON/command", 2);
        RL_CON_pub = nh.advertise<std_msgs::Float64>("RL_CON/command", 2);
        RR_CON_pub = nh.advertise<std_msgs::Float64>("RR_CON/command", 2);

        BASE_CON_pub = nh.advertise<geometry_msgs::Twist>("base_controller/cmd_vel",2);
        
        sub = nh.subscribe("cmd_vel", 5, &Servo::msgCallback, this); 
    }

    void publishAngles() // publishAngles 함수 정의
    {
        FL_CON_pub.publish(A_angle);
        FR_CON_pub.publish(B_angle);
        RL_CON_pub.publish(C_angle);
        RR_CON_pub.publish(D_angle);
    }

    void msgCallback(const geometry_msgs::Twist::ConstPtr& msg) // msgCallback 함수 정의
    {
        ROS_INFO("angular : %lf , linear : %lf", msg->angular.z, msg->linear.x);
        if((msg->angular.z != 0)&&(msg->linear.x ==0))
        {
            A_angle.data = -0.523599;
            B_angle.data = 0.523599;
            C_angle.data = 0.523599;
            D_angle.data = -0.523599;

            publishAngles();
        }
        
        else if((msg->angular.z > 0)&&(msg->linear.x != 0))
        {
            A_angle.data = 0.523599;
            B_angle.data = 0.523599;
            C_angle.data = -0.523599;
            D_angle.data = -0.523599;

            publishAngles();

        }

        else if((msg->angular.z < 0)&&(msg->linear.x != 0))
        {
            A_angle.data = -0.523599;
            B_angle.data = -0.523599;
            C_angle.data = 0.523599;
            D_angle.data = 0.523599;

            publishAngles();

        }
        else
        {
            A_angle.data = 0;
            B_angle.data = 0;
            C_angle.data = 0;
            D_angle.data = 0;
            publishAngles();
        }

        Linear.linear.x = msg->linear.x;
        Linear.angular.z = msg->angular.z;

        BASE_CON_pub.publish(Linear);
        
    }

};

int main(int argc, char **argv)
{
    ros::init(argc, argv, "motor_controller");

    Servo servo;

    ros::Rate loop_rate(20); //50ms

    while (ros::ok())
    {
        ros::spinOnce();

        //ROS_INFO("HELLO");

        // servo.publishAngles();

        loop_rate.sleep();

    }
    ros::spinOnce();

    return 0;
}