#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H

#include <vector>
#include <cstddef>

class LinearRegression {
public:
    void fit(const std::vector<double>& X, const std::vector<double>& y);
    double predict(double x);
    std::vector<double> getCoefficients(); // 添加此行
private:
    double slope;
    double intercept;
};

#endif // LINEARREGRESSION_H
