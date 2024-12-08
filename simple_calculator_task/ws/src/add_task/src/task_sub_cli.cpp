#include <rclcpp/rclcpp.hpp>
#include <my_add_interfaces/msg/my_add.hpp>
#include <my_add_interfaces/srv/calculator.hpp>

void* wait_ans(void* info)
{
    std::pair<bool,int>* temp = (std::pair<bool,int>*) info;
    std::cin >> temp->second;
    temp->first = true;
    return nullptr;
}

class Node02 : public rclcpp::Node
{
    public:
        Node02(std::string name) : Node(name)
        {
            // 声明节点已经建立
            RCLCPP_INFO(this->get_logger(),"节点%s已经建立",name.c_str());

            // 建立订阅者
            command_subscriber = this->create_subscription<my_add_interfaces::msg::MyAdd>(
                "Simple_calculator",10,std::bind(&Node02::calculator,this,std::placeholders::_1)
            );

            // 建立客户端
            player = this->create_client<my_add_interfaces::srv::Calculator>("judge_ans");
        }

        // 发送请求函数
        void send_request(int ans){
            RCLCPP_INFO(this->get_logger(),"准备发送结果至服务端评判...");

            // 等待服务器上线
            while (!player->wait_for_service(std::chrono::seconds(10))){
                // 检查rclcpp状态
                if (!rclcpp::ok()){
                    RCLCPP_INFO(this->get_logger(),"等待服务过程被中断!");
                    return;
                }
                RCLCPP_INFO(this->get_logger(),"等待服务器上线...");
            }

            // 构造请求
            // std::shared_ptr<my_add_interfaces::srv::Calculator::Request> request;
            auto request = std::make_shared<my_add_interfaces::srv::Calculator::Request>();
            request->my_ans = ans;

            // 发送异步请求
            player->async_send_request(request,
            std::bind(&Node02::result_callback,this,std::placeholders::_1));
        }
    private:
        // 允许用户输入答题
        void player_do(){
            pthread_t p;
            auto start = std::chrono::steady_clock::now();
            std::pair<bool,int> info = {false,0};
            int r = pthread_create(&p,NULL,wait_ans,&info); // 子线程等待输入
            assert(r == 0); // 检查线程是否成功建立
            while (std::chrono::steady_clock::now() - start <std::chrono::seconds(5) && info.first == false);
            if (info.first == false){
                RCLCPP_INFO(this->get_logger(),"本题答题超时，请等待下一题开始...");
            }
            else{
                // 将答案发送到服务端评判
                this->send_request(info.second);
            }
            pthread_cancel(p); // 结束子线程
            return;
        }

        // 接收话题发布的题目
        void calculator(const my_add_interfaces::msg::MyAdd msg){
            RCLCPP_INFO(this->get_logger(),"题目刷新了，接收到了%ld,%ld,请你计算它们的和",msg.a,msg.b);
            player_do(); // 给5秒让用户做题
        }

        // 接收服务端的response回调
        void result_callback(
            rclcpp::Client<my_add_interfaces::srv::Calculator>::SharedFuture result_future
        ){
            auto response = result_future.get();
            if (response->flag) {
                static int score = 0;
                score++;
                RCLCPP_INFO(this->get_logger(),"恭喜你，回答正确!当前得分:%d",score);
            }
            else RCLCPP_INFO(this->get_logger(),"很遗憾，回答错误,请等待下一题开始!");
        }
        // 声明订阅者
        rclcpp::Subscription<my_add_interfaces::msg::MyAdd>::SharedPtr command_subscriber; 

        // 声明客户端
        rclcpp::Client<my_add_interfaces::srv::Calculator>::SharedPtr player;
};

int main(int argc,char** argv)
{
    rclcpp::init(argc,argv);
    auto node = std::make_shared<Node02>("cjj_son");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}