#pragma once
#include <iostream>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    int max_value = std::numeric_limits<int>::min();
    for (auto it : vec) {
        if (it > max_value) {
            max_value = it;
        }
        std::cout << max_value << ", ";//D
    }   
    return max_value;
}
