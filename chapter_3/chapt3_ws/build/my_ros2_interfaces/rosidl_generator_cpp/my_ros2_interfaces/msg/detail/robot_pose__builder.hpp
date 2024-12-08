// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_
#define MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_interfaces/msg/detail/robot_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotPose_pose
{
public:
  explicit Init_RobotPose_pose(::my_ros2_interfaces::msg::RobotPose & msg)
  : msg_(msg)
  {}
  ::my_ros2_interfaces::msg::RobotPose pose(::my_ros2_interfaces::msg::RobotPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interfaces::msg::RobotPose msg_;
};

class Init_RobotPose_status
{
public:
  Init_RobotPose_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotPose_pose status(::my_ros2_interfaces::msg::RobotPose::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotPose_pose(msg_);
  }

private:
  ::my_ros2_interfaces::msg::RobotPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interfaces::msg::RobotPose>()
{
  return my_ros2_interfaces::msg::builder::Init_RobotPose_status();
}

}  // namespace my_ros2_interfaces

#endif  // MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_POSE__BUILDER_HPP_
