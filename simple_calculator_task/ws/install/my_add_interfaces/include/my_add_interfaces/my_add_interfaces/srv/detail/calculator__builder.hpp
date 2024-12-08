// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_add_interfaces:srv/Calculator.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__BUILDER_HPP_
#define MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_add_interfaces/srv/detail/calculator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_add_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calculator_Request_my_ans
{
public:
  Init_Calculator_Request_my_ans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_add_interfaces::srv::Calculator_Request my_ans(::my_add_interfaces::srv::Calculator_Request::_my_ans_type arg)
  {
    msg_.my_ans = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_add_interfaces::srv::Calculator_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_add_interfaces::srv::Calculator_Request>()
{
  return my_add_interfaces::srv::builder::Init_Calculator_Request_my_ans();
}

}  // namespace my_add_interfaces


namespace my_add_interfaces
{

namespace srv
{

namespace builder
{

class Init_Calculator_Response_flag
{
public:
  Init_Calculator_Response_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_add_interfaces::srv::Calculator_Response flag(::my_add_interfaces::srv::Calculator_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_add_interfaces::srv::Calculator_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_add_interfaces::srv::Calculator_Response>()
{
  return my_add_interfaces::srv::builder::Init_Calculator_Response_flag();
}

}  // namespace my_add_interfaces

#endif  // MY_ADD_INTERFACES__SRV__DETAIL__CALCULATOR__BUILDER_HPP_
