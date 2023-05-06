// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice
#include "sabertooth_msg/msg/detail/speed_vals__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sabertooth_msg/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sabertooth_msg/msg/detail/speed_vals__struct.h"
#include "sabertooth_msg/msg/detail/speed_vals__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SpeedVals__ros_msg_type = sabertooth_msg__msg__SpeedVals;

static bool _SpeedVals__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SpeedVals__ros_msg_type * ros_message = static_cast<const _SpeedVals__ros_msg_type *>(untyped_ros_message);
  // Field name: front_left_speed
  {
    cdr << ros_message->front_left_speed;
  }

  // Field name: front_right_speed
  {
    cdr << ros_message->front_right_speed;
  }

  // Field name: back_left_speed
  {
    cdr << ros_message->back_left_speed;
  }

  // Field name: back_right_speed
  {
    cdr << ros_message->back_right_speed;
  }

  return true;
}

static bool _SpeedVals__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SpeedVals__ros_msg_type * ros_message = static_cast<_SpeedVals__ros_msg_type *>(untyped_ros_message);
  // Field name: front_left_speed
  {
    cdr >> ros_message->front_left_speed;
  }

  // Field name: front_right_speed
  {
    cdr >> ros_message->front_right_speed;
  }

  // Field name: back_left_speed
  {
    cdr >> ros_message->back_left_speed;
  }

  // Field name: back_right_speed
  {
    cdr >> ros_message->back_right_speed;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sabertooth_msg
size_t get_serialized_size_sabertooth_msg__msg__SpeedVals(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SpeedVals__ros_msg_type * ros_message = static_cast<const _SpeedVals__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name front_left_speed
  {
    size_t item_size = sizeof(ros_message->front_left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name front_right_speed
  {
    size_t item_size = sizeof(ros_message->front_right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_left_speed
  {
    size_t item_size = sizeof(ros_message->back_left_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name back_right_speed
  {
    size_t item_size = sizeof(ros_message->back_right_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SpeedVals__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sabertooth_msg__msg__SpeedVals(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sabertooth_msg
size_t max_serialized_size_sabertooth_msg__msg__SpeedVals(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: front_left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: front_right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: back_left_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: back_right_speed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _SpeedVals__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_sabertooth_msg__msg__SpeedVals(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_SpeedVals = {
  "sabertooth_msg::msg",
  "SpeedVals",
  _SpeedVals__cdr_serialize,
  _SpeedVals__cdr_deserialize,
  _SpeedVals__get_serialized_size,
  _SpeedVals__max_serialized_size
};

static rosidl_message_type_support_t _SpeedVals__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SpeedVals,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sabertooth_msg, msg, SpeedVals)() {
  return &_SpeedVals__type_support;
}

#if defined(__cplusplus)
}
#endif
