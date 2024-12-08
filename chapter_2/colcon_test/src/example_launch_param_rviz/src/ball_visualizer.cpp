#include <cmath>
#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <visualization_msgs/msg/marker.hpp>

class BallVisualizer : public rclcpp::Node
{
public:
  BallVisualizer() : Node("ball_visualizer"), theta_(0.0)
  {
    // 创建 PoseStamped 的发布者（如果你仍然需要发布位置信息）    
    // 创建 Marker 的发布者
    this->declare_parameter<float>("angular_velocity", 0.1);
    marker_publisher_ = this->create_publisher<visualization_msgs::msg::Marker>("visualization_marker", 10);

    timer_ = this->create_wall_timer(
        std::chrono::milliseconds(100),
        std::bind(&BallVisualizer::timer_callback, this));
  }

private:
  void timer_callback()
  {
    // 更新小球位置
    float radius = 1.0;
    // 获取参数：旋转速度
    float angular_velocity = this->get_parameter("angular_velocity").as_double();
    theta_ += angular_velocity;

    float x = radius * std::cos(theta_);
    float y = radius * std::sin(theta_);
    float z = 0.0;

    // 创建并发布 Marker 消息
    auto marker_message = visualization_msgs::msg::Marker();
    marker_message.header.stamp = this->now();
    marker_message.header.frame_id = "world";
    marker_message.ns = "ball";
    marker_message.id = 0;
    marker_message.type = visualization_msgs::msg::Marker::SPHERE;
    marker_message.action = visualization_msgs::msg::Marker::ADD;

    // 设置小球的位置和大小
    marker_message.pose.position.x = x;
    marker_message.pose.position.y = y;
    marker_message.pose.position.z = z;
    marker_message.pose.orientation.w = 1.0;

    marker_message.scale.x = 0.2;  // 小球的直径为 0.2 米
    marker_message.scale.y = 0.2;
    marker_message.scale.z = 0.2;

    // 设置颜色为红色
    marker_message.color.r = 1.0f;
    marker_message.color.g = 0.0f;
    marker_message.color.b = 0.0f;
    marker_message.color.a = 1.0;

    marker_publisher_->publish(marker_message);
  }

  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_publisher_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  float theta_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<BallVisualizer>());
  rclcpp::shutdown();
  return 0;
}
