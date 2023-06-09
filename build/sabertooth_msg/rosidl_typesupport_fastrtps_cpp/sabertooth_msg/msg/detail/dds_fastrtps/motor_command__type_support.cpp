// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sabertooth_msg:msg/MotorCommand.idl
// generated code does not contain a copyright notice
#include "sabertooth_msg/msg/detail/motor_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sabertooth_msg/msg/detail/motor_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace sabertooth_msg
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
cdr_serialize(
  const sabertooth_msg::msg::MotorCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: direction
  cdr << ros_message.direction;
  // Member: drive_speed
  cdr << ros_message.drive_speed;
  // Member: steer_speed
  cdr << ros_message.steer_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sabertooth_msg::msg::MotorCommand & ros_message)
{
  // Member: direction
  cdr >> ros_message.direction;

  // Member: drive_speed
  cdr >> ros_message.drive_speed;

  // Member: steer_speed
  cdr >> ros_message.steer_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
get_serialized_size(
  const sabertooth_msg::msg::MotorCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: direction
  {
    size_t item_size = sizeof(ros_message.direction);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: drive_speed
  {
    size_t item_size = sizeof(ros_message.drive_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: steer_speed
  {
    size_t item_size = sizeof(ros_message.steer_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
max_serialized_size_MotorCommand(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: direction
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: drive_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: steer_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MotorCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sabertooth_msg::msg::MotorCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MotorCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sabertooth_msg::msg::MotorCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MotorCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sabertooth_msg::msg::MotorCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MotorCommand__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MotorCommand(full_bounded, 0);
}

static message_type_support_callbacks_t _MotorCommand__callbacks = {
  "sabertooth_msg::msg",
  "MotorCommand",
  _MotorCommand__cdr_serialize,
  _MotorCommand__cdr_deserialize,
  _MotorCommand__get_serialized_size,
  _MotorCommand__max_serialized_size
};

static rosidl_message_type_support_t _MotorCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MotorCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sabertooth_msg

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sabertooth_msg
const rosidl_message_type_support_t *
get_message_type_support_handle<sabertooth_msg::msg::MotorCommand>()
{
  return &sabertooth_msg::msg::typesupport_fastrtps_cpp::_MotorCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sabertooth_msg, msg, MotorCommand)() {
  return &sabertooth_msg::msg::typesupport_fastrtps_cpp::_MotorCommand__handle;
}

#ifdef __cplusplus
}
#endif
