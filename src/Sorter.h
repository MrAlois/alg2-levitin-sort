//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_SORTER_H
#define ALG2_LEVITIN_SORT_SORTER_H

#include <vector>
#include "algorithms/SortingAlgorithm.h"

namespace Sorter {
    static std::vector<int> sort(std::vector<int> data, SortingAlgorithm *algorithm){
        auto const& result = algorithm->process(data);
        delete algorithm;

        return result;
    };
};

#endif //ALG2_LEVITIN_SORT_SORTER_H
