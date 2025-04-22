cmake_minimum_required(VERSION 3.8)
project(pid_controller)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(ament_cmake_auto REQUIRED)

ament_auto_find_build_dependencies()

set(SRC_LIST
  src/pid_controller.cpp
)

set(HEAD_LIST
  include/pid_controller/pid_controller.hpp
)

ament_auto_add_library(${PROJECT_NAME} SHARED
  ${SRC_LIST}
  ${HEAD_LIST}
)

ament_auto_package()
