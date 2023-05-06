// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__STRUCT_HPP_
#define SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__sabertooth_msg__msg__SpeedVals __attribute__((deprecated))
#else
# define DEPRECATED__sabertooth_msg__msg__SpeedVals __declspec(deprecated)
#endif

namespace sabertooth_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SpeedVals_
{
  using Type = SpeedVals_<ContainerAllocator>;

  explicit SpeedVals_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left_speed = 0l;
      this->front_right_speed = 0l;
      this->back_left_speed = 0l;
      this->back_right_speed = 0l;
    }
  }

  explicit SpeedVals_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_left_speed = 0l;
      this->front_right_speed = 0l;
      this->back_left_speed = 0l;
      this->back_right_speed = 0l;
    }
  }

  // field types and members
  using _front_left_speed_type =
    int32_t;
  _front_left_speed_type front_left_speed;
  using _front_right_speed_type =
    int32_t;
  _front_right_speed_type front_right_speed;
  using _back_left_speed_type =
    int32_t;
  _back_left_speed_type back_left_speed;
  using _back_right_speed_type =
    int32_t;
  _back_right_speed_type back_right_speed;

  // setters for named parameter idiom
  Type & set__front_left_speed(
    const int32_t & _arg)
  {
    this->front_left_speed = _arg;
    return *this;
  }
  Type & set__front_right_speed(
    const int32_t & _arg)
  {
    this->front_right_speed = _arg;
    return *this;
  }
  Type & set__back_left_speed(
    const int32_t & _arg)
  {
    this->back_left_speed = _arg;
    return *this;
  }
  Type & set__back_right_speed(
    const int32_t & _arg)
  {
    this->back_right_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sabertooth_msg::msg::SpeedVals_<ContainerAllocator> *;
  using ConstRawPtr =
    const sabertooth_msg::msg::SpeedVals_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sabertooth_msg::msg::SpeedVals_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sabertooth_msg::msg::SpeedVals_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sabertooth_msg__msg__SpeedVals
    std::shared_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sabertooth_msg__msg__SpeedVals
    std::shared_ptr<sabertooth_msg::msg::SpeedVals_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SpeedVals_ & other) const
  {
    if (this->front_left_speed != other.front_left_speed) {
      return false;
    }
    if (this->front_right_speed != other.front_right_speed) {
      return false;
    }
    if (this->back_left_speed != other.back_left_speed) {
      return false;
    }
    if (this->back_right_speed != other.back_right_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const SpeedVals_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SpeedVals_

// alias to use template instance with default allocator
using SpeedVals =
  sabertooth_msg::msg::SpeedVals_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sabertooth_msg

#endif  // SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__STRUCT_HPP_
