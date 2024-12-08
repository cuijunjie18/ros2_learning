// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rm_interfaces:msg/ImageInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__BUILDER_HPP_
#define RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rm_interfaces/msg/detail/image_info__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImageInfo_detect_point
{
public:
  explicit Init_ImageInfo_detect_point(::rm_interfaces::msg::ImageInfo & msg)
  : msg_(msg)
  {}
  ::rm_interfaces::msg::ImageInfo detect_point(::rm_interfaces::msg::ImageInfo::_detect_point_type arg)
  {
    msg_.detect_point = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rm_interfaces::msg::ImageInfo msg_;
};

class Init_ImageInfo_image
{
public:
  explicit Init_ImageInfo_image(::rm_interfaces::msg::ImageInfo & msg)
  : msg_(msg)
  {}
  Init_ImageInfo_detect_point image(::rm_interfaces::msg::ImageInfo::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_ImageInfo_detect_point(msg_);
  }

private:
  ::rm_interfaces::msg::ImageInfo msg_;
};

class Init_ImageInfo_header
{
public:
  Init_ImageInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImageInfo_image header(::rm_interfaces::msg::ImageInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ImageInfo_image(msg_);
  }

private:
  ::rm_interfaces::msg::ImageInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rm_interfaces::msg::ImageInfo>()
{
  return rm_interfaces::msg::builder::Init_ImageInfo_header();
}

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__BUILDER_HPP_
