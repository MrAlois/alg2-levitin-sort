//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_SORTINGALGORITHM_H
#define ALG2_LEVITIN_SORT_SORTINGALGORITHM_H

#include <vector>

template <typename T>
class SortingAlgorithm {
public:
    virtual ~SortingAlgorithm() = default;
    virtual std::vector<T> process(std::vector<T> &data) = 0;
};


#endif //ALG2_LEVITIN_SORT_SORTINGALGORITHM_H
