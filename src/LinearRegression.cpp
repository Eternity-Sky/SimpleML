#include "LinearRegression.h"
#include <cstddef> // 确保包含这个头文件

void LinearRegression::fit(const std::vector<double>& X, const std::vector<double>& y) {
    std::size_t n = X.size();
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;

    for (std::size_t i = 0; i < n; ++i) {
        sum_x += X[i];
        sum_y += y[i];
        sum_xy += X[i] * y[i];
        sum_x2 += X[i] * X[i];
    }

    slope = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    intercept = (sum_y - slope * sum_x) / n;
}

double LinearRegression::predict(double x) {
    return slope * x + intercept;
}
