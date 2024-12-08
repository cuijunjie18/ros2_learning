#include "rclcpp/rclcpp.hpp"

int main(int argc,char **argv)
{
    // 初始化rclcpp
    rclcpp::init(argc,argv);
    
    // 产生节点
    auto node = std::make_shared<rclcpp::Node>("cjj_test");

    // 打印一句自我介绍
    RCLCPP_INFO(node->get_logger(),"原神~~~~，启动");

    // 运行节点
    rclcpp::spin(node);

    // 结束运行
    rclcpp::shutdown();

    return 0;
}