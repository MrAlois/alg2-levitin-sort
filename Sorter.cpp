//
// Created by asenkyrik on 31.10.2022.
//

#include "Sorter.h"

template<typename T>
std::vector<T> Sorter::sort(std::vector<T> data, SortingAlgorithm<T> *algorithm) {
    auto result = algorithm->process(data);
    delete algorithm;

    return result;
}