# SimpleML

## 项目简介

这是一个使用 C++ 实现的简单机器学习项目，主要功能包括线性回归和数据可视化。项目旨在提供一个基础的机器学习框架，便于进行进一步扩展和功能开发。

## 功能特性

- 实现线性回归模型
- 从 CSV 文件读取数据
- 输出模型系数
- 预测新数据
- 绘制数据点和拟合线

## 文件结构

SimpleML/
├── CMakeLists.txt
├── src/
│ ├── LinearRegression.h
│ ├── LinearRegression.cpp
│ ├── DataPlotter.h
│ ├── DataPlotter.cpp
│ └── main.cpp
└── data.csv


## 使用说明

1. **克隆项目**

   ```bash
   git clone https://github.com/yourusername/SimpleML.git
   cd SimpleML

2. 构建项目

   使用 CMake 构建项目：
  
   ```base
   mkdir build
   cd build
   c make ..
   make

3. 运行项目

   运行生成的可执行文件

   ```base
   ./Snippet_Manager

## 数据格式

CSV 文件 data.csv 示例：

```
x,y
1,2
2,3
3,5
4,7
5,8
```
每一行代表一个数据点，其中 x 为特征值，y 为目标值。

## 调试
在 CLion 中，您可以设置断点并使用调试工具调试代码。按下 Shift + F9 开始调试，查看变量值和函数调用。

## 贡献
欢迎提交问题和拉取请求，任何反馈都将有助于改进项目。

## 许可证
此项目采用 MIT 许可证，详情请查看 LICENSE 文件。

