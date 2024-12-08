import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/colcon_test/install/examples_rclpy_minimal_client'
