#ifndef LINEARREGRESSION_H
#define LINEARREGRESSION_H

#include <vector>

class LinearRegression {
public:
    void fit(const std::vector<double>& X, const std::vector<double>& y);
    double predict(double x);
private:
    double slope;
    double intercept;
};

#endif // LINEARREGRESSION_H
