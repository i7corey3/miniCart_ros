// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sabertooth_msg:msg/SpeedVals.idl
// generated code does not contain a copyright notice

#ifndef SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__TRAITS_HPP_
#define SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__TRAITS_HPP_

#include "sabertooth_msg/msg/detail/speed_vals__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sabertooth_msg::msg::SpeedVals>()
{
  return "sabertooth_msg::msg::SpeedVals";
}

template<>
inline const char * name<sabertooth_msg::msg::SpeedVals>()
{
  return "sabertooth_msg/msg/SpeedVals";
}

template<>
struct has_fixed_size<sabertooth_msg::msg::SpeedVals>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sabertooth_msg::msg::SpeedVals>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sabertooth_msg::msg::SpeedVals>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SABERTOOTH_MSG__MSG__DETAIL__SPEED_VALS__TRAITS_HPP_
