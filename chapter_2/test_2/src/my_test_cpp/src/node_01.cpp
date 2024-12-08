
#include "rclcpp/rclcpp.hpp"


// 创建一个类节点，名字叫做Node01,继承自Node.
class Node01 : public rclcpp::Node
{

public:
    // 构造函数,有一个参数为节点名称
    Node01(std::string name) : Node(name)
    {
        // 打印一句
        RCLCPP_INFO(this->get_logger(), "大家好，我是%s.",name.c_str());
    }

private:
   
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Node01>("node_01");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}