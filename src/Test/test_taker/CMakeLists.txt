cmake_minimum_required(VERSION 3.8)
project(test_taker)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(test_taker_interfaces REQUIRED)

add_executable(${PROJECT_NAME} src/test_taker.cpp)

ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  test_taker_interfaces
  std_msgs
)

install(TARGETS
  ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})

ament_package()
