#include <image_detector.hpp>

ImageDetectNode::ImageDetectNode(std::string name) : Node(name)
{
    RCLCPP_INFO(this->get_logger(),"节点%s成功建立!",name.c_str());
    image_detector = this->create_publisher<rm_interfaces::msg::Objective>(
        "image_detector",10
    );
}