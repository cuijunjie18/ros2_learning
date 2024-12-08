#include <rclcpp/rclcpp.hpp>
#include <rm_interfaces/msg/objective.hpp>
#include <rm_interfaces/msg/image_info.hpp>
#include <opencv2/opencv.hpp>
#include <objective_track.hpp>

class ImageDetectNode : public rclcpp::Node
{
    public:
        ImageDetectNode(std::string name);
    private:
        rclcpp::Publisher<rm_interfaces::msg::Objective>::SharedPtr image_detector; // 图像发送器
};