//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_COMPARISONCOUNTINGSORT_H
#define ALG2_LEVITIN_SORT_COMPARISONCOUNTINGSORT_H


#include "SortingAlgorithm.h"

template <class T>
class ComparisonCountingSort : public SortingAlgorithm<T> {
public:
    std::vector<T> process(std::vector<T> data) override;
};


#endif //ALG2_LEVITIN_SORT_COMPARISONCOUNTINGSORT_H
