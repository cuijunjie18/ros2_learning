from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():
    package_share_directory = get_package_share_directory('example_launch_param_rviz')
    config_file_path = os.path.join(package_share_directory, 'config', 'ball_config.yaml')

    return LaunchDescription([
        # 启动 ball_visualizer 节点并加载 YAML 配置文件
        Node(
            package='example_launch_param_rviz',
            executable='ball_visualizer',
            name='ball_visualizer',
            output='screen',
            parameters=[config_file_path]  # 加载参数文件
        ),

        # 启动 rviz2 并加载自定义配置文件
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', os.path.join(
                package_share_directory,
                'rviz', 'ball_visualizer_config.rviz'
            )],
        ),
    ])
