# 导入库
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """launch内容描述函数，由ros2 launch 扫描调用"""
    node_01 = Node(
        package = "add_task",
        executable = "task_pub_ser"
    )
    node_02 = Node(
        package = "add_task",
        executable = "task_sub_cli"
    )
    # 创建LaunchDescription对象launch_description,用于描述launch文件
    launch_description = LaunchDescription(
        [node_01, node_02])
    # 返回让ROS2根据launch描述执行节点
    return launch_description
