// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__BUILDER_HPP_
#define SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__BUILDER_HPP_

#include "sabertooth_msg/msg/detail/speed_vals__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sabertooth_msg
{

namespace msg
{

namespace builder
{

class Init_SpeedVals_back_right_speed
{
public:
  explicit Init_SpeedVals_back_right_speed(::sabertooth_msg::msg::SpeedVals & msg)
  : msg_(msg)
  {}
  ::sabertooth_msg::msg::SpeedVals back_right_speed(::sabertooth_msg::msg::SpeedVals::_back_right_speed_type arg)
  {
    msg_.back_right_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sabertooth_msg::msg::SpeedVals msg_;
};

class Init_SpeedVals_back_left_speed
{
public:
  explicit Init_SpeedVals_back_left_speed(::sabertooth_msg::msg::SpeedVals & msg)
  : msg_(msg)
  {}
  Init_SpeedVals_back_right_speed back_left_speed(::sabertooth_msg::msg::SpeedVals::_back_left_speed_type arg)
  {
    msg_.back_left_speed = std::move(arg);
    return Init_SpeedVals_back_right_speed(msg_);
  }

private:
  ::sabertooth_msg::msg::SpeedVals msg_;
};

class Init_SpeedVals_front_right_speed
{
public:
  explicit Init_SpeedVals_front_right_speed(::sabertooth_msg::msg::SpeedVals & msg)
  : msg_(msg)
  {}
  Init_SpeedVals_back_left_speed front_right_speed(::sabertooth_msg::msg::SpeedVals::_front_right_speed_type arg)
  {
    msg_.front_right_speed = std::move(arg);
    return Init_SpeedVals_back_left_speed(msg_);
  }

private:
  ::sabertooth_msg::msg::SpeedVals msg_;
};

class Init_SpeedVals_front_left_speed
{
public:
  Init_SpeedVals_front_left_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedVals_front_right_speed front_left_speed(::sabertooth_msg::msg::SpeedVals::_front_left_speed_type arg)
  {
    msg_.front_left_speed = std::move(arg);
    return Init_SpeedVals_front_right_speed(msg_);
  }

private:
  ::sabertooth_msg::msg::SpeedVals msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sabertooth_msg::msg::SpeedVals>()
{
  return sabertooth_msg::msg::builder::Init_SpeedVals_front_left_speed();
}

}  // namespace sabertooth_msg

#endif  // SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__BUILDER_HPP_
