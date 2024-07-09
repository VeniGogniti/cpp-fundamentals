//
// Created by stefx on 7/7/24.
//

#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> value;

    for (int i = 0; i < count; i++) {
        value.push_back(std::make_shared<int>(i));
    }

    for (int it = 0; it < count; it++) {
        std::cout << "wynik to: " << *(value[it]);
    }
    return value;
}

void print(std::vector<std::shared_ptr<int>> printVector) {
    for (const auto& it : printVector) {
        std::cout << "Print: " << *it << std::endl;
    }
}

void add10(std::vector<std::shared_ptr<int>> addVector) {
    for (auto it : addVector) {
        if (it != nullptr) {
            *it += 10;
        }
    }
}

void sub10(int* const subVector) {
    if (subVector != nullptr) {
        *subVector -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> przeciazenieVector) {
    for (auto it : przeciazenieVector) {
        sub10(it.get());
    }
}
