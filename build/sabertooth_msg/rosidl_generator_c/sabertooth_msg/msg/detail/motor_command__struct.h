// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sabertooth_msg:msg/MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
#define SABERTOOTH_MSG__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/MotorCommand in the package sabertooth_msg.
typedef struct sabertooth_msg__msg__MotorCommand
{
  int32_t direction;
  int32_t drive_speed;
  int32_t steer_speed;
} sabertooth_msg__msg__MotorCommand;

// Struct for a sequence of sabertooth_msg__msg__MotorCommand.
typedef struct sabertooth_msg__msg__MotorCommand__Sequence
{
  sabertooth_msg__msg__MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sabertooth_msg__msg__MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SABERTOOTH_MSG__MSG__DETAIL__MOTOR_COMMAND__STRUCT_H_
