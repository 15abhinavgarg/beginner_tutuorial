// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from beginner_tutorials:srv/ChangeString.idl
// generated code does not contain a copyright notice

#ifndef BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_
#define BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "beginner_tutorials/srv/detail/change_string__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace beginner_tutorials
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
  ::beginner_tutorials::srv::ChangeString_Request input(::beginner_tutorials::srv::ChangeString_Request::_input_type arg)
  {
    msg_.input = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beginner_tutorials::srv::ChangeString_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beginner_tutorials::srv::ChangeString_Request>()
{
  return beginner_tutorials::srv::builder::Init_ChangeString_Request_input();
}

}  // namespace beginner_tutorials


namespace beginner_tutorials
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
  ::beginner_tutorials::srv::ChangeString_Response output(::beginner_tutorials::srv::ChangeString_Response::_output_type arg)
  {
    msg_.output = std::move(arg);
    return std::move(msg_);
  }

private:
  ::beginner_tutorials::srv::ChangeString_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::beginner_tutorials::srv::ChangeString_Response>()
{
  return beginner_tutorials::srv::builder::Init_ChangeString_Response_output();
}

}  // namespace beginner_tutorials

#endif  // BEGINNER_TUTORIALS__SRV__DETAIL__CHANGE_STRING__BUILDER_HPP_
