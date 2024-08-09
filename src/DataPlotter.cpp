#include "DataPlotter.h"
#include <fstream>

void DataPlotter::plot(const std::vector<double>& X, const std::vector<double>& y, const std::vector<double>& predictions) {
    std::ofstream dataFile("data.txt");
    std::ofstream plotFile("plot.gp");

    if (dataFile.is_open() && plotFile.is_open()) {
        // 写入数据点
        for (size_t i = 0; i < X.size(); ++i) {
            dataFile << X[i] << " " << y[i] << "\n";
        }
        dataFile.close();

        // 写入预测数据
        plotFile << "set title 'Linear Regression'\n";
        plotFile << "set xlabel 'X'\n";
        plotFile << "set ylabel 'Y'\n";
        plotFile << "plot 'data.txt' with points title 'Data', '' using 1:($2) with lines title 'Prediction'\n";
        plotFile.close();

        system("gnuplot -p plot.gp"); // 使用 gnuplot 绘图
    }
}
