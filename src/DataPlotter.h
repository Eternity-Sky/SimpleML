#ifndef DATAPLOTTER_H
#define DATAPLOTTER_H

#include <vector>
#include <string>

class DataPlotter {
public:
    void plot(const std::vector<double>& X, const std::vector<double>& y, const std::vector<double>& predictions);
};

#endif
