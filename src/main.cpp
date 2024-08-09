#include "LinearRegression.h"
#include <iostream> // 添加此行
#include <vector> // 添加此行，如果使用 std::vector

int main() {
    LinearRegression lr;
    std::vector<double> X = {1, 2, 3, 4, 5};
    std::vector<double> y = {2, 4, 6, 8, 10};

    lr.fit(X, y);
    for (auto coeff : lr.getCoefficients()) {
        std::cout << "Coefficient: " << coeff << std::endl; // 输出斜率和截距
    }

    double predicted = lr.predict(6);
    std::cout << "Predicted value for x = 6 is " << predicted << std::endl;

    return 0;
}
