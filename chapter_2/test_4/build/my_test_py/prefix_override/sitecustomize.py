import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/cjj/Desktop/RM_work/ROS2_learning/chapter_2/test_4/install/my_test_py'
