//
// Created by stefx on 7/7/24.
//

#ifndef VECTOROFSHAREDPOINTERS_VECTORFUNCTIONS_HPP
#define VECTOROFSHAREDPOINTERS_VECTORFUNCTIONS_HPP
#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count);
void print(std::vector<std::shared_ptr<int>> printVector);
void add10(std::vector<std::shared_ptr<int>> addVector);
void sub10(int* const subVector);
void sub10(std::vector<std::shared_ptr<int>> przeciazenieVector);

#endif // VECTOROFSHAREDPOINTERS_VECTORFUNCTIONS_HPP
