#pragma once
#include <iostream>
#include <cstdlib>

int NWD(int lhs, int rhs) {
    lhs = std::abs(lhs);
    rhs = std::abs(rhs);

    if (lhs == 0) {
        return rhs;
    }

    if (rhs == 0) {
        return lhs;
    }

    while (lhs != rhs) {
        if (lhs > rhs) {
            lhs = lhs - rhs;
        } else {
            rhs = rhs - lhs;
        }
        std::cout << rhs << ", " << lhs << std::endl;
    }

    return lhs;
}

int NWW(int lhs, int rhs) {
    if (lhs == 0 || rhs == 0) {
        return 0;
    }
    return std::abs(lhs / NWD (lhs, rhs)) * std::abs(rhs);
}
