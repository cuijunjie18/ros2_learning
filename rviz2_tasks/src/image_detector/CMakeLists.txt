cmake_minimum_required(VERSION 3.8)
project(image_detector)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rm_interfaces REQUIRED)
find_package(OpenCV REQUIRED)
include_directories(${PROJECT_SOURCE_DIR}/include/image_detector)
## add_executable(image_detector src/image_detector_node.cpp)
## ament_target_dependencies(
##   image_detector
##   "rclcpp"
##   "rm_interfaces"
##   "OpenCV"
## )

## install(TARGETS
##   image_detector
##   DESTINATION lib/${PROJECT_NAME}
## )

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
add_executable(objective_track ${SRC})
ament_target_dependencies(
  objective_track
  "OpenCV"
  "rclcpp"
  "rm_interfaces"
)
install(TARGETS
  objective_track
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
