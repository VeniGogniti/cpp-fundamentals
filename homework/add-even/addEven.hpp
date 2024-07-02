#pragma once
#include <vector>
#include <iostream>
int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for (auto it : numbers) {
        if (it % 2 == 0) {
            std::cout << it << ", ";
            sum += it;
        }
    }
    return sum;
}
