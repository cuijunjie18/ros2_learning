// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_add_interfaces:msg/MyAdd.idl
// generated code does not contain a copyright notice

#ifndef MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__BUILDER_HPP_
#define MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_add_interfaces/msg/detail/my_add__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_add_interfaces
{

namespace msg
{

namespace builder
{

class Init_MyAdd_b
{
public:
  explicit Init_MyAdd_b(::my_add_interfaces::msg::MyAdd & msg)
  : msg_(msg)
  {}
  ::my_add_interfaces::msg::MyAdd b(::my_add_interfaces::msg::MyAdd::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_add_interfaces::msg::MyAdd msg_;
};

class Init_MyAdd_a
{
public:
  Init_MyAdd_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MyAdd_b a(::my_add_interfaces::msg::MyAdd::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_MyAdd_b(msg_);
  }

private:
  ::my_add_interfaces::msg::MyAdd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_add_interfaces::msg::MyAdd>()
{
  return my_add_interfaces::msg::builder::Init_MyAdd_a();
}

}  // namespace my_add_interfaces

#endif  // MY_ADD_INTERFACES__MSG__DETAIL__MY_ADD__BUILDER_HPP_
