#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include <visualization_msgs/msg/marker.hpp>

#include <std_msgs/msg/string.hpp>

class ShowPoints : public rclcpp::Node
{
    public:
        // int publish_counter = 0;
        // 构造函数,有一个参数为节点名称
        ShowPoints(std::string name) : Node(name)
        {
            RCLCPP_INFO(this->get_logger(), "%s节点已经启动.", name.c_str());

            x = 0;
            y = 0;
            z = 0;
            id = 0;

            // 创建发布者
            points_pb = this->create_publisher<visualization_msgs::msg::MarkerArray>("my_test", 10);

            // 创建定时器，500ms为周期，定时发布
            timer_ = this->create_wall_timer(std::chrono::milliseconds(50), std::bind(&ShowPoints::timer_callback, this));
        }

    private:
        void update_position()
        {
            markers.markers.clear();
            visualization_msgs::msg::Marker temp;

            // 一些id标识及时间戳
            temp.header.frame_id = "cjj";
            temp.header.stamp = rclcpp::Node::now();

            // 命名空间与id
            temp.ns = "cjj";
            temp.id = 1;

            // 展示的marker类别
            temp.type = visualization_msgs::msg::Marker::SPHERE;

            // 位置
            temp.pose.position.x = this->x;
            temp.pose.position.y = this->y;
            temp.pose.position.z = this->z;

            // 四元数定坐标轴
            temp.pose.orientation.x = 0;
            temp.pose.orientation.y = 0;
            temp.pose.orientation.z = 0;
            temp.pose.orientation.w = 1;

            // marker的尺寸
            temp.scale.x = 1.0;
            temp.scale.y = 1.0;
            temp.scale.z = 1.0; 

            // 颜色(注意范围为0~1)
            temp.color.r = 1.0f;
            temp.color.g = 0.0f;
            temp.color.b = 0.0f;
            temp.color.a = 1.0; // 透明度0为完全透明，1为不透明

            // 添加进数组
            markers.markers.push_back(temp);
        }
        void timer_callback()
        {
            this->id++;
            // x += 0.01;
            //x %= 100;
            //y += 0.01;
            //y %= 100;
            z += 0.01;
            //z %= 100;
            RCLCPP_INFO(this->get_logger(),"x:%f,y:%f,z:%f",x,y,z);
            update_position();
            points_pb->publish(markers);
        }

        // 声名定时器指针
        rclcpp::TimerBase::SharedPtr timer_;

        // 声明话题发布者指针
        rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr points_pb;

        // maker可视化
        visualization_msgs::msg::MarkerArray markers;

        // 机器人的坐标
        double x;
        double y;
        double z;
        int id;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*创建对应节点的共享指针对象*/
    auto node = std::make_shared<ShowPoints>("cjj");
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}