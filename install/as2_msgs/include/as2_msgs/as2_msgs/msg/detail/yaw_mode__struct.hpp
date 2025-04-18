// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from as2_msgs:msg/YawMode.idl
// generated code does not contain a copyright notice

#ifndef AS2_MSGS__MSG__DETAIL__YAW_MODE__STRUCT_HPP_
#define AS2_MSGS__MSG__DETAIL__YAW_MODE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__as2_msgs__msg__YawMode __attribute__((deprecated))
#else
# define DEPRECATED__as2_msgs__msg__YawMode __declspec(deprecated)
#endif

namespace as2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YawMode_
{
  using Type = YawMode_<ContainerAllocator>;

  explicit YawMode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->angle = 0.0f;
    }
  }

  explicit YawMode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = 0;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t KEEP_YAW =
    0u;
  static constexpr uint8_t PATH_FACING =
    1u;
  static constexpr uint8_t FIXED_YAW =
    2u;
  static constexpr uint8_t YAW_FROM_TOPIC =
    3u;
  static constexpr uint8_t YAW_FROM_ORIENTATION =
    4u;
  static constexpr uint8_t YAW_TO_FRAME =
    5u;

  // pointer types
  using RawPtr =
    as2_msgs::msg::YawMode_<ContainerAllocator> *;
  using ConstRawPtr =
    const as2_msgs::msg::YawMode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<as2_msgs::msg::YawMode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<as2_msgs::msg::YawMode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      as2_msgs::msg::YawMode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::msg::YawMode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      as2_msgs::msg::YawMode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<as2_msgs::msg::YawMode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<as2_msgs::msg::YawMode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<as2_msgs::msg::YawMode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__as2_msgs__msg__YawMode
    std::shared_ptr<as2_msgs::msg::YawMode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__as2_msgs__msg__YawMode
    std::shared_ptr<as2_msgs::msg::YawMode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YawMode_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const YawMode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YawMode_

// alias to use template instance with default allocator
using YawMode =
  as2_msgs::msg::YawMode_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawMode_<ContainerAllocator>::KEEP_YAW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawMode_<ContainerAllocator>::PATH_FACING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawMode_<ContainerAllocator>::FIXED_YAW;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawMode_<ContainerAllocator>::YAW_FROM_TOPIC;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawMode_<ContainerAllocator>::YAW_FROM_ORIENTATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t YawMode_<ContainerAllocator>::YAW_TO_FRAME;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace as2_msgs

#endif  // AS2_MSGS__MSG__DETAIL__YAW_MODE__STRUCT_HPP_
