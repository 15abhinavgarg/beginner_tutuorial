/************************************************************************************
 * Apache License 2.0
 * Copyright (c) 2021, Abhinav Garg
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 ************************************************************************************/
/**
 *  @file    publisher_member_function.cpp
 *  @author  Abhinav Garg
 *  @date    12/15/2022
 *  @version 1.0
 *
 *  @brief Source file to implement a simple ROS publisher node and a service
 *         server node
 *
 *  @section DESCRIPTION
 *
 *  Source file to implement a simple ROS2 talker node publishing a custom
 *  message and facilitate change in message content upon a request
 *
 */
#include <signal.h>

#include <chrono>
#include <exception>
#include <functional>
#include <memory>
#include <rclcpp/logging.hpp>
#include <string>

#include "beginner_tutorials/srv/change_string.hpp"
#include "geometry_msgs/msg/transform_stamped.hpp"
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include "tf2_ros/transform_broadcaster.h"

using namespace std::chrono_literals;

/**
 * @brief Minimal Publisher Class
 *
 */

class MinimalPublisher : public rclcpp::Node {
 public:
  std::string defaultMessage =
      "Welcome to ROS2 Publisher-Subscriber package!";  // Default output
                                                        // message
  MinimalPublisher() : Node("minimal_publisher"), count_(0) {
    // Setting up parameter for publisher frequency
    auto freq_d = rcl_interfaces::msg::ParameterDescriptor();
    freq_d.description = "Sets Publisher frequency in Hz.";
    this->declare_parameter("frequency", 3.0, freq_d);
    auto frequency = this->get_parameter("frequency")
                         .get_parameter_value()
                         .get<std::float_t>();
    
    // create a Publisher called chatter
    publisher_ = this->create_publisher<std_msgs::msg::String>("chatter", 10);
    
    // create a Service Callback
    auto serviceCallbackPtr =
        std::bind(&MinimalPublisher::changeRequestString, this,
                  std::placeholders::_1, std::placeholders::_2);
    service_ = create_service<beginner_tutorials::srv::ChangeString>(
        "update_request", serviceCallbackPtr);

    if (this->count_subscribers("chatter") == 0) {
      RCLCPP_WARN_STREAM(this->get_logger(), "No subscriber for this topic");
    }
    this->get_logger().set_level(rclcpp::Logger::Level::Debug);

    // creates a broadcaster
    tf_broadcaster_ = std::make_shared<tf2_ros::TransformBroadcaster>(this);
    timer_ = this->create_wall_timer(
        500ms, std::bind(&MinimalPublisher::broadcast_timer_callback, this));
  }

 private:
  /**
   * @brief broadcast timer callback
   *
   */
  void broadcast_timer_callback() {
    auto message = std_msgs::msg::String();
    message.data = defaultMessage + std::to_string(count_++);
    RCLCPP_INFO_STREAM(this->get_logger(), "Publishing:" << message.data);
    publisher_->publish(message);
    
    // Sets Tf values 
    geometry_msgs::msg::TransformStamped t;

    t.header.stamp = this->get_clock()->now();
    t.header.frame_id = "world";
    t.child_frame_id = "talk";
    t.transform.translation.x = 5.0;
    t.transform.translation.y = 2.0;
    t.transform.translation.z = 1.0;
    t.transform.rotation.x = 2.0;
    t.transform.rotation.y = 1.0;
    t.transform.rotation.z = 3.0;
    t.transform.rotation.w = 1.0;

    tf_broadcaster_->sendTransform(t);
  }
 
  /**
   * @brief changes default string to custom string passed
   *
   */
  void changeRequestString(
      const std::shared_ptr<beginner_tutorials::srv::ChangeString::Request>
          request,
      std::shared_ptr<beginner_tutorials::srv::ChangeString::Response>
          response) {
    response->output = request->input;
    RCLCPP_WARN_STREAM(rclcpp::get_logger("rclcpp"),
                       "Input Request: " << request->input);
    RCLCPP_WARN_STREAM(rclcpp::get_logger("rclcpp"),
                       "Response updated: " << response->output);
    defaultMessage =
        response->output;  // changes default message to what was requested
  }

  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
  rclcpp::Service<beginner_tutorials::srv::ChangeString>::SharedPtr service_;
  size_t count_;
  std::shared_ptr<tf2_ros::TransformBroadcaster> tf_broadcaster_;
};

/**
 * @brief called when user terminates program
 *
 */
void terminate_handler(int signum) {
  if (signum == 2) {
    RCLCPP_FATAL_STREAM(rclcpp::get_logger("rclcpp"),
                        "Process terminated by user!");
  }
}


int main(int argc, char* argv[]) {
  /**
   * The rclcpp::init() function needs to see argc and argv so that it can
   * perform any ROS arguments and name remapping that were provided at the
   * command line. For programmatic remappings you can use a different version
   * of init() which takes remappings directly, but for most command-line
   * programs, passing argc and argv is the easiest way to do it.
   *
   * You must call one of the versions of rclcpp::init() before using any other
   * part of the ROS2 system.
   */
  signal(SIGINT, terminate_handler);
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MinimalPublisher>());
  rclcpp::shutdown();
  return 0;
}
