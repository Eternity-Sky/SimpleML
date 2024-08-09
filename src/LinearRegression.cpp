#include "LinearRegression.h"

void LinearRegression::fit(const std::vector<double>& X, const std::vector<double>& y) {
    size_t n = X.size();
    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;

    for (size_t i = 0; i < n; ++i) {
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

// 实现 getCoefficients 方法
std::vector<double> LinearRegression::getCoefficients() {
    return {slope, intercept}; // 返回斜率和截距
}
