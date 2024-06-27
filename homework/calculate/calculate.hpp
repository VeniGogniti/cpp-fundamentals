#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int result;
    if (command == "add") {
        result = first + second;
    } else if (command == "subtract") {
        result = first - second;
    } else if (command == "multiply") {
        result = first * second;
    } else if (command == "divide") {
        if (first == 0 || second == 0) {
            return "Division by 0";
        } else {
            result = first / second;
    } else {
        return "Invalid data";
    }

    return std::to_string(result);
}
