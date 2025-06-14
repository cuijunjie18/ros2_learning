#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class TopicPublisher01 : public rclcpp::Node
{
    public:
        // int publish_counter = 0;
        // 构造函数,有一个参数为节点名称
        TopicPublisher01(std::string name) : Node(name)
        {
            RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

            // 创建发布者
            command_publisher_ = this->create_publisher<std_msgs::msg::String>("command", 10);

            // 创建定时器，500ms为周期，定时发布
            timer_ = this->create_wall_timer(std::chrono::milliseconds(500), std::bind(&TopicPublisher01::timer_callback, this));
        }

    private:

        void timer_callback()
        {
            // 记录发布次数
            // this->publish_counter++;
            static int publish_counter = 0;
            publish_counter++;
            // 创建消息
            std_msgs::msg::String message;
            message.data = publish_counter%2?"forward":"backward";

            // 日志打印
            RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
            
            // 发布消息
            command_publisher_->publish(message);
        }

        // 声名定时器指针
        rclcpp::TimerBase::SharedPtr timer_;

        // 声明话题发布者指针
        rclcpp::Publisher<std_msgs::msg::String>::SharedPtr command_publisher_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*创建对应节点的共享指针对象*/
    auto node = std::make_shared<TopicPublisher01>("topic_publisher_01");
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}