//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_SORTER_H
#define ALG2_LEVITIN_SORT_SORTER_H

#include <vector>
#include <chrono>
#include "VectorUtils.h"
#include "algorithms/SortingAlgorithm.h"

class Sorter {
public:
    static std::vector<int> sort(const std::vector<int>& data, SortingAlgorithm *algorithm);
};

#endif //ALG2_LEVITIN_SORT_SORTER_H
