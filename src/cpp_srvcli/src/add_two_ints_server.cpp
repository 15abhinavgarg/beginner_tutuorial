/**
 * @file add_two_ints_server.cpp
 * @author Abhinav Garg (agarg125@umd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-11-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "rclcpp/rclcpp.hpp" // package dependencies
#include "example_interfaces/srv/add_two_ints.hpp" // package dependencies

#include <memory>

/**
 * @brief The function adds two integers
 * 
 * @param request 
 * @param response 
 */
void add(const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> request, // request type
          std::shared_ptr<example_interfaces::srv::AddTwoInts::Response>      response) // response type
{
  response->sum = request->a + request->b;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld",
                request->a, request->b);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv); // initialising ros2 C++ client library

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_server"); // node creation

  rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service =
    node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add); // create_service named add_two_ints

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints."); // printing message on log

  rclcpp::spin(node); // making service available
  rclcpp::shutdown();
}