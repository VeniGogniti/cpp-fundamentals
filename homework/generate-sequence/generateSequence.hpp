#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> wynik{};
    int suma = 0;
    for (int i = 0; i < count; i++) {
        suma += step;
        wynik.push_back(suma);
    }
    return wynik;
}
