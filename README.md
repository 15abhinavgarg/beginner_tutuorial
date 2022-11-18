
# Publisher and Subscriber in ROS2

### Overview

This is a ROS Package that defines a basic publisher and subscriber with custom message.

To check cpplint and cppcheck result check src/cpp_pubsub/results

### Dependencies/ Assumptions
- OS : Ubuntu 20.04 
- ROS2 Distro : ROS2 Humble
- Package build type : ```ament_cmake ```
- Package dependencies : ```rclcpp```, ```std_msgs``` 
- ROS2 Humble Installation : [link](https://automaticaddison.com/how-to-install-ros-2-foxy-fitzroy-on-ubuntu-linux/)

## How to Run the ROS Package
### Build Instructions
```
cd <your_ROS2_ws>/src
git clone https://github.com/15abhinavgarg/beginner_tutuorial.git
cd ..   
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select beginner_tutorials
source . install/setup.bash
source ~/<your ROS2 installation>/install/local_setup.bash
```

### Run Publisher
To run the publisher node, open a new terminal and run:
```
cd <your_ROS2_ws>
. install/setup.bash
ros2 run cpp_pubsub talker
```
### Run Subscriber
To run the subscriber node, open a new terminal and run:
```
cd <your_ROS2_ws>
. install/setup.bash
ros2 run cpp_pubsub listener
```


## Launch
To run the client node, open a new terminal and run:
```
cd <your_ROS2_ws>/src/cpp_pubsub/launch
ros2 launch nodes.yaml
```

## Results
The results after running the following commands are stored in the <your_package>/results folder.

### cppcheck
Run the following command from the root directory of your ROS package
```
cd src/cpp_pubsub
cppcheck --enable=all --std=c++17 ./src/*.cpp --suppress=missingIncludeSystem --suppress=unmatchedSuppression --suppress=unusedFunction --suppress=missingInclude --suppress=useInitializationList > results/cppcheck.txt
```
### cpplint
Run the following command from the root directory of your ROS package
```
 cd src/cpp_pubsub
 cpplint --filter=-build/c++11,+build/c++17,-build/namespaces,-build/include_order ./src/*.cpp > ./results/cpplint.txt
```
