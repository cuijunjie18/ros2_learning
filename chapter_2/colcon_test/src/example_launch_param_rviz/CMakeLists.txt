cmake_minimum_required(VERSION 3.8)
project(example_launch_param_rviz)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(visualization_msgs REQUIRED)

add_executable(ball_visualizer src/ball_visualizer.cpp)

ament_target_dependencies(ball_visualizer rclcpp geometry_msgs tf2 tf2_ros visualization_msgs)

install(TARGETS
  ball_visualizer
  DESTINATION lib/${PROJECT_NAME})

install(DIRECTORY launch rviz config
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
