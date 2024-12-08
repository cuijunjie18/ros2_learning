#include <rclcpp/rclcpp.hpp>

class Node02 : public rclcpp::Node
{
    public:
        // 构造函数
        Node02(std::string name) : Node(name)
        {
            RCLCPP_INFO(this->get_logger(),"面向对象节点node_02,启动!");
        }
    private:

};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Node02>("cjj_2");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}


