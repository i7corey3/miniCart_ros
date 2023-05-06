// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__STRUCT_H_
#define SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/SpeedVals in the package sabertooth_msg.
typedef struct sabertooth_msg__msg__SpeedVals
{
  int32_t front_left_speed;
  int32_t front_right_speed;
  int32_t back_left_speed;
  int32_t back_right_speed;
} sabertooth_msg__msg__SpeedVals;

// Struct for a sequence of sabertooth_msg__msg__SpeedVals.
typedef struct sabertooth_msg__msg__SpeedVals__Sequence
{
  sabertooth_msg__msg__SpeedVals * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sabertooth_msg__msg__SpeedVals__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__STRUCT_H_
