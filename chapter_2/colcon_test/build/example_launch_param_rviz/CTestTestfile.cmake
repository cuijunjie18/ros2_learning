# CMake generated Testfile for 
# Source directory: /home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/src/example_launch_param_rviz
# Build directory: /home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/build/example_launch_param_rviz
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(cpplint "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/build/example_launch_param_rviz/test_results/example_launch_param_rviz/cpplint.xunit.xml" "--package-name" "example_launch_param_rviz" "--output-file" "/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/build/example_launch_param_rviz/ament_cpplint/cpplint.txt" "--command" "/opt/ros/humble/bin/ament_cpplint" "--xunit-file" "/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/build/example_launch_param_rviz/test_results/example_launch_param_rviz/cpplint.xunit.xml")
set_tests_properties(cpplint PROPERTIES  LABELS "cpplint;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/src/example_launch_param_rviz" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cpplint.cmake;68;ament_add_test;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;39;ament_cpplint;/opt/ros/humble/share/ament_cmake_cpplint/cmake/ament_cmake_cpplint_lint_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/humble/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/humble/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/src/example_launch_param_rviz/CMakeLists.txt;32;ament_package;/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/src/example_launch_param_rviz/CMakeLists.txt;0;")
