from setuptools import find_packages
from setuptools import setup

setup(
    name='robocar_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('robocar_interfaces', 'robocar_interfaces.*')),
)
