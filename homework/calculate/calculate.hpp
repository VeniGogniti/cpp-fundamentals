#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string wynik;
    int result;
    if (command == "add"){
        result = first + second;
    }
    else if (command == "subtract"){
        result = first - second;
    }
    else if (command == "multiply"){
        result = first * second;
    }
    return wynik = std::to_string(result);
}
