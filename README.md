# SimpleML

## 项目简介

这是一个使用 C++ 实现的简单机器学习项目，主要功能包括线性回归和数据可视化。项目旨在提供一个基础的机器学习框架，便于进行进一步扩展和功能开发。

## 功能特性

### 1. 实现线性回归模型

线性回归用于建立特征与目标之间的关系。以下是使用线性回归的示例：

```cpp
#include "LinearRegression.h"

// 创建线性回归对象
LinearRegression lr;

// 准备数据
std::vector<double> X = {1, 2, 3, 4, 5};
std::vector<double> Y = {2, 3, 5, 7, 8};

// 拟合模型
lr.fit(X, Y);

// 输出模型系数
for (auto coeff : lr.getCoefficients()) {
    std::cout << "Coefficient: " << coeff << std::endl;
}
```
### 2.从 CSV 文件读取数据
项目可以从 CSV 文件中读取数据，以便用于训练模型。以下是读取 CSV 文件的示例：
```cpp
#include <fstream>
#include <sstream>
#include <vector>

void loadCSV(const std::string& filename, std::vector<double>& X, std::vector<double>& Y) {
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string item;
        double x, y;

        std::getline(ss, item, ','); // 读取 x 值
        x = std::stod(item);
        X.push_back(x);

        std::getline(ss, item, ','); // 读取 y 值
        y = std::stod(item);
        Y.push_back(y);
    }
}

```

### 3.输出模型系数

模型拟合后，可以输出系数以了解特征的影响程度。以下是输出系数的示例：

```cpp
for (auto coeff : lr.getCoefficients()) {
    std::cout << "Coefficient: " << coeff << std::endl;
}
```

### 4.预测新数据

使用训练好的模型进行预测。以下是预测的示例：

```cpp
double predicted = lr.predict(6); // 预测 x = 6 的值
std::cout << "Predicted value for x = 6 is " << predicted << std::endl;
```

### 5. 绘制数据点和拟合线
使用 DataPlotter 类绘制数据点及其拟合线。以下是绘图的示例：

```cpp
#include "DataPlotter.h"

DataPlotter plotter;
plotter.plot(X, Y, lr.getCoefficients()); // 绘制数据点和拟合线
```

## 文件结构

SimpleML/
├── CMakeLists.txt
├── src/
│   ├── LinearRegression.h
│   ├── LinearRegression.cpp
│   ├── DataPlotter.h
│   ├── DataPlotter.cpp
│   └── main.cpp
└── data.csv

## 使用说明

### 1.克隆项目

```base
git clone https://github.com/yourusername/SimpleML.git
cd SimpleML
```

### 2.构建项目

使用 CMake 构建项目：

```base
mkdir build
cd build
cmake ..
make
```

## 3.运行项目

运行生成的可执行文件：

```base
./Snippet_Manager
```

## 数据格式
CSV 文件 `data.csv` 示例:

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