//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_SORTER_H
#define ALG2_LEVITIN_SORT_SORTER_H

#include <vector>
#include "algorithms/SortingAlgorithm.h"

class Sorter {
public:
    template <typename T>
    static std::vector<T> sort(std::vector<T> data, SortingAlgorithm<T> *algorithm);
};

#endif //ALG2_LEVITIN_SORT_SORTER_H
