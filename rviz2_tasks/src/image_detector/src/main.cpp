#include <objective_track.hpp>
//#include <image_detector.hpp>

int main(int argc,char** argv)
{
    /*
    rclcpp::init(argc,argv);
    auto node = std::make_shared<ImageDetectNode>("image_detector");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;*/
    objective_track_test();
    return 0;
}