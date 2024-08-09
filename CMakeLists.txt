cmake_minimum_required(VERSION 3.10)
project(MyMLProject)

set(CMAKE_CXX_STANDARD 11)

# 添加源文件
add_executable(Snippet_Manager src/main.cpp src/LinearRegression.cpp)
