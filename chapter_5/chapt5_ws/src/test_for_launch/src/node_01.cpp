#include <rclcpp/rclcpp.hpp>

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<rclcpp::Node>("cjj_1");
    RCLCPP_INFO(node->get_logger(),"普通节点node_01,启动!"); // node->get_logger()为调用类函数
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}