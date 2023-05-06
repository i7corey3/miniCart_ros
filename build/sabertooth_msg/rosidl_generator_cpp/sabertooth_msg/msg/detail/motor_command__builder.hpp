// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sabertooth_msg:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
#define SABERTOOTH_MSG__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_

#include "sabertooth_msg/msg/detail/motor_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace sabertooth_msg
{

namespace msg
{

namespace builder
{

class Init_MotorCommand_steer_speed
{
public:
  explicit Init_MotorCommand_steer_speed(::sabertooth_msg::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  ::sabertooth_msg::msg::MotorCommand steer_speed(::sabertooth_msg::msg::MotorCommand::_steer_speed_type arg)
  {
    msg_.steer_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sabertooth_msg::msg::MotorCommand msg_;
};

class Init_MotorCommand_drive_speed
{
public:
  explicit Init_MotorCommand_drive_speed(::sabertooth_msg::msg::MotorCommand & msg)
  : msg_(msg)
  {}
  Init_MotorCommand_steer_speed drive_speed(::sabertooth_msg::msg::MotorCommand::_drive_speed_type arg)
  {
    msg_.drive_speed = std::move(arg);
    return Init_MotorCommand_steer_speed(msg_);
  }

private:
  ::sabertooth_msg::msg::MotorCommand msg_;
};

class Init_MotorCommand_direction
{
public:
  Init_MotorCommand_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorCommand_drive_speed direction(::sabertooth_msg::msg::MotorCommand::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_MotorCommand_drive_speed(msg_);
  }

private:
  ::sabertooth_msg::msg::MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sabertooth_msg::msg::MotorCommand>()
{
  return sabertooth_msg::msg::builder::Init_MotorCommand_direction();
}

}  // namespace sabertooth_msg

#endif  // SABERTOOTH_MSG__MSG__DETAIL__MOTOR_COMMAND__BUILDER_HPP_
