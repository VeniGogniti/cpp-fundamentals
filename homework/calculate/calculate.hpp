#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string wynik;
    int result;
    if (command == "add"){
        result = first + second;
        wynik = std::to_string(result);
    }


    
    return wynik;
}
