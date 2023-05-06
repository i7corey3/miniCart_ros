// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice
#include "sabertooth_msg/msg/detail/speed_vals__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sabertooth_msg/msg/detail/speed_vals__struct.hpp"

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
  const sabertooth_msg::msg::SpeedVals & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: front_left_speed
  cdr << ros_message.front_left_speed;
  // Member: front_right_speed
  cdr << ros_message.front_right_speed;
  // Member: back_left_speed
  cdr << ros_message.back_left_speed;
  // Member: back_right_speed
  cdr << ros_message.back_right_speed;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sabertooth_msg::msg::SpeedVals & ros_message)
{
  // Member: front_left_speed
  cdr >> ros_message.front_left_speed;

  // Member: front_right_speed
  cdr >> ros_message.front_right_speed;

  // Member: back_left_speed
  cdr >> ros_message.back_left_speed;

  // Member: back_right_speed
  cdr >> ros_message.back_right_speed;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
get_serialized_size(
  const sabertooth_msg::msg::SpeedVals & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: front_left_speed
  {
    size_t item_size = sizeof(ros_message.front_left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: front_right_speed
  {
    size_t item_size = sizeof(ros_message.front_right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_left_speed
  {
    size_t item_size = sizeof(ros_message.back_left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: back_right_speed
  {
    size_t item_size = sizeof(ros_message.back_right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sabertooth_msg
max_serialized_size_SpeedVals(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: front_left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: front_right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: back_left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: back_right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _SpeedVals__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const sabertooth_msg::msg::SpeedVals *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SpeedVals__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sabertooth_msg::msg::SpeedVals *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SpeedVals__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sabertooth_msg::msg::SpeedVals *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SpeedVals__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_SpeedVals(full_bounded, 0);
}

static message_type_support_callbacks_t _SpeedVals__callbacks = {
  "sabertooth_msg::msg",
  "SpeedVals",
  _SpeedVals__cdr_serialize,
  _SpeedVals__cdr_deserialize,
  _SpeedVals__get_serialized_size,
  _SpeedVals__max_serialized_size
};

static rosidl_message_type_support_t _SpeedVals__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SpeedVals__callbacks,
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
get_message_type_support_handle<sabertooth_msg::msg::SpeedVals>()
{
  return &sabertooth_msg::msg::typesupport_fastrtps_cpp::_SpeedVals__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sabertooth_msg, msg, SpeedVals)() {
  return &sabertooth_msg::msg::typesupport_fastrtps_cpp::_SpeedVals__handle;
}

#ifdef __cplusplus
}
#endif
