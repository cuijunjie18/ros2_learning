// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/Objective.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__OBJECTIVE__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__OBJECTIVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/objective__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Objective_pts
{
public:
  Init_Objective_pts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rm_interfaces::msg::Objective pts(::rm_interfaces::msg::Objective::_pts_type arg)
  {
    msg_.pts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::Objective msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::Objective>()
{
  return rm_interfaces::msg::builder::Init_Objective_pts();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__OBJECTIVE__BUILDER_HPP_
