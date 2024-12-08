#include <rclcpp/rclcpp.hpp>
#include <my_add_interfaces/msg/my_add.hpp>
#include <my_add_interfaces/srv/calculator.hpp>


class Node01 : public rclcpp::Node
{
    public:
        Node01(std::string name) : Node(name)
        {
            // 设置随机种子
            srand((unsigned)time(NULL));

            // 发布节点建立信息
            RCLCPP_INFO(this->get_logger(),"节点%s已启动",name.c_str());

            // 建立publisher
            command_publisher_1 = this->create_publisher<my_add_interfaces::msg::MyAdd>(
                "Simple_calculator",10
            );

            // 建立servicet
            judge_ans_server = this->create_service<my_add_interfaces::srv::Calculator>(
                "judge_ans",std::bind(&Node01::judge_request,this,
                std::placeholders::_1,std::placeholders::_2)
            );

            // 建立计时器
            timer_1 = this->create_wall_timer(std::chrono::seconds(10),
                std::bind(&Node01::timer_callback,this)
            );
        }

    private:

        // 定时的回调函数
        void timer_callback()
        {

            // 静态变量记录发送次数
            static int counter = 0;
            counter++;

            // 重置MyAdd消息
            if (counter){
                message.a = rand()%100;
                message.b = rand()%100;
            }

            // 日志打印
            if (counter) RCLCPP_INFO(this->get_logger(),"节点%s发布了%ld,%ld",this->get_name(),message.a,message.b);

            // 发布消息
            if (counter) command_publisher_1->publish(message);
        }

        // 接收客户端的request
        void judge_request(
            const std::shared_ptr<my_add_interfaces::srv::Calculator::Request> request,
            std::shared_ptr<my_add_interfaces::srv::Calculator::Response> response 
        ){
            RCLCPP_INFO(this->get_logger(),"服务端接收到请求，开始判断计算结果%ld是否正确...",request->my_ans);
            if (request->my_ans == message.a + message.b) response->flag = true;
            else response->flag = false;
        }
        
        // 定义消息
        my_add_interfaces::msg::MyAdd message;

        // 定义计时器
        rclcpp::TimerBase::SharedPtr timer_1;

        // 定义发布者
        rclcpp::Publisher<my_add_interfaces::msg::MyAdd>::SharedPtr command_publisher_1;

        // 定义服务器
        rclcpp::Service<my_add_interfaces::srv::Calculator>::SharedPtr judge_ans_server;
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Node01>("cjj_root");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}