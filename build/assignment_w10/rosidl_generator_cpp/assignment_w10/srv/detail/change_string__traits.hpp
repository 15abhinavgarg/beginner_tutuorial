// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from assignment_w10:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__TRAITS_HPP_
#define ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "assignment_w10/srv/detail/change_string__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace assignment_w10
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeString_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input
  {
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input: ";
    rosidl_generator_traits::value_to_yaml(msg.input, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeString_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment_w10

namespace rosidl_generator_traits
{

[[deprecated("use assignment_w10::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment_w10::srv::ChangeString_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment_w10::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment_w10::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment_w10::srv::ChangeString_Request & msg)
{
  return assignment_w10::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment_w10::srv::ChangeString_Request>()
{
  return "assignment_w10::srv::ChangeString_Request";
}

template<>
inline const char * name<assignment_w10::srv::ChangeString_Request>()
{
  return "assignment_w10/srv/ChangeString_Request";
}

template<>
struct has_fixed_size<assignment_w10::srv::ChangeString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assignment_w10::srv::ChangeString_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<assignment_w10::srv::ChangeString_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace assignment_w10
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeString_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: output
  {
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "output: ";
    rosidl_generator_traits::value_to_yaml(msg.output, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeString_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace assignment_w10

namespace rosidl_generator_traits
{

[[deprecated("use assignment_w10::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const assignment_w10::srv::ChangeString_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  assignment_w10::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use assignment_w10::srv::to_yaml() instead")]]
inline std::string to_yaml(const assignment_w10::srv::ChangeString_Response & msg)
{
  return assignment_w10::srv::to_yaml(msg);
}

template<>
inline const char * data_type<assignment_w10::srv::ChangeString_Response>()
{
  return "assignment_w10::srv::ChangeString_Response";
}

template<>
inline const char * name<assignment_w10::srv::ChangeString_Response>()
{
  return "assignment_w10/srv/ChangeString_Response";
}

template<>
struct has_fixed_size<assignment_w10::srv::ChangeString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<assignment_w10::srv::ChangeString_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<assignment_w10::srv::ChangeString_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<assignment_w10::srv::ChangeString>()
{
  return "assignment_w10::srv::ChangeString";
}

template<>
inline const char * name<assignment_w10::srv::ChangeString>()
{
  return "assignment_w10/srv/ChangeString";
}

template<>
struct has_fixed_size<assignment_w10::srv::ChangeString>
  : std::integral_constant<
    bool,
    has_fixed_size<assignment_w10::srv::ChangeString_Request>::value &&
    has_fixed_size<assignment_w10::srv::ChangeString_Response>::value
  >
{
};

template<>
struct has_bounded_size<assignment_w10::srv::ChangeString>
  : std::integral_constant<
    bool,
    has_bounded_size<assignment_w10::srv::ChangeString_Request>::value &&
    has_bounded_size<assignment_w10::srv::ChangeString_Response>::value
  >
{
};

template<>
struct is_service<assignment_w10::srv::ChangeString>
  : std::true_type
{
};

template<>
struct is_service_request<assignment_w10::srv::ChangeString_Request>
  : std::true_type
{
};

template<>
struct is_service_response<assignment_w10::srv::ChangeString_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__TRAITS_HPP_
