#pragma once
#include <iostream>

int fibonacci_iterative(int sequence) {
    int liczbaA = 0;
    int liczbaB = 0;
    int wynik = 0;
    for (int i = 0; i <= sequence; i++) {
        wynik = liczbaB + liczbaA;
        liczbaA = liczbaB;
        liczbaB = wynik;
        if (wynik == 0) {
            liczbaA = 1;
        }
    }
    return wynik;
}

int fibonacci_recursive(int sequence) {
    if (sequence <= 1) {
        return sequence;
    } else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
}
