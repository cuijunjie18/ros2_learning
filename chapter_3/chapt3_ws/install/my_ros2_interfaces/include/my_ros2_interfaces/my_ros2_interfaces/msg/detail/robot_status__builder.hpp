// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_ros2_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_ros2_interfaces/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_ros2_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_pose
{
public:
  explicit Init_RobotStatus_pose(::my_ros2_interfaces::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::my_ros2_interfaces::msg::RobotStatus pose(::my_ros2_interfaces::msg::RobotStatus::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_ros2_interfaces::msg::RobotStatus msg_;
};

class Init_RobotStatus_status
{
public:
  Init_RobotStatus_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_pose status(::my_ros2_interfaces::msg::RobotStatus::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotStatus_pose(msg_);
  }

private:
  ::my_ros2_interfaces::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_ros2_interfaces::msg::RobotStatus>()
{
  return my_ros2_interfaces::msg::builder::Init_RobotStatus_status();
}

}  // namespace my_ros2_interfaces

#endif  // MY_ROS2_INTERFACES__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
