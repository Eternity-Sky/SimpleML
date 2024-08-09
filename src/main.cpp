#include <iostream>
#include <vector>
#include "LinearRegression.h"

int main() {
    LinearRegression model;
    std::vector<double> X = {1, 2, 3, 4, 5};
    std::vector<double> y = {2, 3, 5, 7, 11};

    model.fit(X, y);

    double x_test = 6;
    double prediction = model.predict(x_test);
    std::cout << "Predicted value for x = " << x_test << " is " << prediction << std::endl;

    return 0;
}
