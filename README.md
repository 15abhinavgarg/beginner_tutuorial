[![License](https://img.shields.io/badge/License-Apache%202.0-blue.svg)](https://opensource.org/licenses/Apache-2.0)

To check cpplint and cppcheck result check result folder

### Dependencies/ Assumptions
- OS : Ubuntu 20.04 
- ROS2 Distro : ROS2 Humble
- Package build type : ```ament_cmake ```
- Package dependencies : ```rclcpp```, ```std_msgs``` 
- ROS2 Humble Installation : [link](https://automaticaddison.com/how-to-install-ros-2-foxy-fitzroy-on-ubuntu-linux/)
# Assignment:1 Week-9 Publisher and Subscriber in ROS2

### Overview

This is a ROS Package that defines a basic publisher and subscriber with custom message.

## How to Run the ROS Package
### Build Instructions
```
git clone https://github.com/15abhinavgarg/beginner_tutuorial.git
cd beginner_tutuorial   
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select cpp_pubsub
source . install/setup.bash
source ~/<your ROS2 installation>/install/local_setup.bash
```

### Run Publisher
To run the publisher node, open a new terminal and run:
```
cd beginner_tutuorial
. install/setup.bash
ros2 run cpp_pubsub talker
```
### Run Subscriber
To run the subscriber node, open a new terminal and run:
```
cd beginner_tutuorial
. install/setup.bash
ros2 run cpp_pubsub listener
```


## Launch
To run the client node, open a new terminal and run:
```
cd beginner_tutuorial/src/cpp_pubsub/launch
ros2 launch nodes.yaml
```

## Results
The results after running the following commands are stored in the <your_package>/results folder.

### cppcheck
Run the following command from the root directory of your ROS package
```
cd beginner_tutuorial/src/cpp_pubsub
cppcheck --enable=all --std=c++17 ./src/*.cpp --suppress=missingIncludeSystem --suppress=unmatchedSuppression --suppress=unusedFunction --suppress=missingInclude --suppress=useInitializationList > results/cppcheck.txt
```
### cpplint
Run the following command from the root directory of your ROS package
```
 cd beginner_tutuorial/src/cpp_pubsub
 cpplint --filter=-build/c++11,+build/c++17,-build/namespaces,-build/include_order ./src/*.cpp > ./results/cpplint.txt
```
--------------------------------------------------------------------------------------------------------------
# Assignment:2 Week 10 ROS Services, Logging, and Launch files

### Overview
This is a ROS Package that defines the following:
- Basic publisher and subscriber with custom message.
- Use of all five logger levels: ```Fatal, Error, Warn, Info and Debug.```
- Custom service to change base output string.

## How to Run the ROS Package
### Build Instructions
```
git clone https://github.com/15abhinavgarg/beginner_tutuorial.git
cd beginner_tutuorial   
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select assignment_w10
source . install/setup.bash
source ~/<your ROS2 installation>/install/local_setup.bash
```

### Run Publisher
To run the publisher node, open a new terminal and run:
```
cd beginner_tutuorial
. install/setup.bash
ros2 assignment_w10 talker
```
### Run Subscriber
To run the subscriber node, open a new terminal and run:
```
cd beginner_tutuorial
. install/setup.bash
ros2 run assignment_w10 listener
```
### Update string using service
Run talker and Listener node by following above steps, Run
```
ros2 service call /update_request assignment_w10/srv/ChangeString "{input: 'myNewInput'}"
```
This will change the string on both nodes to "myNewString".


## Launch
To run the client node, open a new terminal and run:
```
cd beginner_tutuorial
. install/setup.bash
ros2 launch assignment_w10 pub_sub.launch.yaml frequency:=1.0
```
To check whether the value updated to 1.0,open a new terminal and source it. Run:
```
ros2 param list
ros2 param get /minimal_publisher/sim frequency 
```

## Results
The results after running the following commands are stored in the <your_package>/results folder.

### rqt Console
```
 ros2 run rqt_console rqt_console

```
### cppcheck
Run the following command from the root directory of your ROS package
```
cd beginner_tutuorial/src/cpp_pubsub
cppcheck --enable=all --std=c++17 ./src/*.cpp --suppress=missingIncludeSystem --suppress=unmatchedSuppression --suppress=unusedFunction --suppress=missingInclude --suppress=useInitializationList > results/cppcheck.txt
```
### cpplint
Run the following command from the root directory of your ROS package
```
 cd beginner_tutuorial/src/cpp_pubsub
 cpplint --filter=-build/c++11,+build/c++17,-build/namespaces,-build/include_order ./src/*.cpp > ./results/cpplint.txt
```
### Google Styling format
Run the following command from the directory where the .cpp files are present(src in this case)
```
 cpplint --filter=-build/c++11,+build/c++17,-build/namespaces,-build/include_order ./src/*.cpp > ./results/cpplint.txt
```