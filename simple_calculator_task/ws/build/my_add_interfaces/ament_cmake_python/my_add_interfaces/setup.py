from setuptools import find_packages
from setuptools import setup

setup(
    name='my_add_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_add_interfaces', 'my_add_interfaces.*')),
)
