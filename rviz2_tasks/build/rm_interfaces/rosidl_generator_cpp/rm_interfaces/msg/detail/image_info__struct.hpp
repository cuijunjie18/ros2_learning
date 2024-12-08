// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rm_interfaces:msg/ImageInfo.idl
// generated code does not contain a copyright notice

#ifndef RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__STRUCT_HPP_
#define RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.hpp"
// Member 'detect_point'
#include "rm_interfaces/msg/detail/objective__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rm_interfaces__msg__ImageInfo __attribute__((deprecated))
#else
# define DEPRECATED__rm_interfaces__msg__ImageInfo __declspec(deprecated)
#endif

namespace rm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ImageInfo_
{
  using Type = ImageInfo_<ContainerAllocator>;

  explicit ImageInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    image(_init),
    detect_point(_init)
  {
    (void)_init;
  }

  explicit ImageInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    image(_alloc, _init),
    detect_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _image_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _image_type image;
  using _detect_point_type =
    rm_interfaces::msg::Objective_<ContainerAllocator>;
  _detect_point_type detect_point;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__image(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->image = _arg;
    return *this;
  }
  Type & set__detect_point(
    const rm_interfaces::msg::Objective_<ContainerAllocator> & _arg)
  {
    this->detect_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rm_interfaces::msg::ImageInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const rm_interfaces::msg::ImageInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::ImageInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rm_interfaces::msg::ImageInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rm_interfaces__msg__ImageInfo
    std::shared_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rm_interfaces__msg__ImageInfo
    std::shared_ptr<rm_interfaces::msg::ImageInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ImageInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->image != other.image) {
      return false;
    }
    if (this->detect_point != other.detect_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const ImageInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ImageInfo_

// alias to use template instance with default allocator
using ImageInfo =
  rm_interfaces::msg::ImageInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rm_interfaces

#endif  // RM_INTERFACES__MSG__DETAIL__IMAGE_INFO__STRUCT_HPP_
