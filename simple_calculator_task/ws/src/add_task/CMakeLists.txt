cmake_minimum_required(VERSION 3.8)
project(add_task)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(my_add_interfaces REQUIRED)

add_executable(task_pub_ser src/task_pub_ser.cpp)
ament_target_dependencies(
  task_pub_ser
  rclcpp
  my_add_interfaces
)

add_executable(task_sub_cli src/task_sub_cli.cpp)
ament_target_dependencies(
  task_sub_cli
  rclcpp
  my_add_interfaces
)

add_executable(my_test src/my_test.cpp)
ament_target_dependencies(
  my_test
  rclcpp
)

install(TARGETS
  task_pub_ser task_sub_cli my_test
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
