# 导入库
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """launch内容描述函数，由ros2 launch 扫描调用"""
    parameter_basic1 = Node(
        package = "my_parameters_rclcpp",
        executable = "parameters_basic",
        parameters = [{'rcl_log_level':0}],
        output = "screen"
    )
    # 创建LaunchDescription对象launch_description,用于描述launch文件
    launch_description = LaunchDescription(
        [parameter_basic1])
    # 返回让ROS2根据launch描述执行节点
    return launch_description


# def generate_launch_description():
#     """launch内容描述函数，由ros2 launch 扫描调用"""
#     parameters_basic1 = Node(
#         package="example_parameters_rclcpp",
#         namespace="rclcpp",
#         executable="parameters_basic",
#         parameters=[{'rcl_log_level': 40}]
#     )
#     parameters_basic2 = Node(
#         package="example_parameters_rclpy",
#         namespace="rclpy",
#         executable="parameters_basic",
#         parameters=[{'rcl_log_level': 50}]
#     )
#     # 创建LaunchDescription对象launch_description,用于描述launch文件
#     launch_description = LaunchDescription(
#         [parameters_basic1, parameters_basic2])
#     # 返回让ROS2根据launch描述执行节点
#     return launch_description