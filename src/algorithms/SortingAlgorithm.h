//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_SORTINGALGORITHM_H
#define ALG2_LEVITIN_SORT_SORTINGALGORITHM_H

#include <vector>
#include <string>

class SortingAlgorithm {
public:
    virtual ~SortingAlgorithm() = default;
    virtual std::vector<int> process(const std::vector<int> &data) = 0;
    virtual std::string getType() = 0;
};


#endif //ALG2_LEVITIN_SORT_SORTINGALGORITHM_H
