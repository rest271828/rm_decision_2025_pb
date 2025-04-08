cmake_minimum_required(VERSION 3.8)
project(coordinate_marker)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)

add_executable(${PROJECT_NAME} src/coordinate_marker.cpp)

ament_target_dependencies(${PROJECT_NAME}
  rclcpp
  geometry_msgs
)

install(TARGETS
  ${PROJECT_NAME}
  DESTINATION lib/${PROJECT_NAME})

ament_package()
