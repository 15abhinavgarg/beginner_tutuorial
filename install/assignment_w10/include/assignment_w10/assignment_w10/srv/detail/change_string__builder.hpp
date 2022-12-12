// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from assignment_w10:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_
#define ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "assignment_w10/srv/detail/change_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace assignment_w10
{

namespace srv
{

namespace builder
{

class Init_ChangeString_Request_input
{
public:
  Init_ChangeString_Request_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment_w10::srv::ChangeString_Request input(::assignment_w10::srv::ChangeString_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment_w10::srv::ChangeString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment_w10::srv::ChangeString_Request>()
{
  return assignment_w10::srv::builder::Init_ChangeString_Request_input();
}

}  // namespace assignment_w10


namespace assignment_w10
{

namespace srv
{

namespace builder
{

class Init_ChangeString_Response_output
{
public:
  Init_ChangeString_Response_output()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::assignment_w10::srv::ChangeString_Response output(::assignment_w10::srv::ChangeString_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::assignment_w10::srv::ChangeString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::assignment_w10::srv::ChangeString_Response>()
{
  return assignment_w10::srv::builder::Init_ChangeString_Response_output();
}

}  // namespace assignment_w10

#endif  // ASSIGNMENT_W10__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_
