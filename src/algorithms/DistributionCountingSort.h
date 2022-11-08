//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H
#define ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H


#include "SortingAlgorithm.h"

class DistributionCountingSort : public SortingAlgorithm {
public:
    ~DistributionCountingSort() override = default;

    std::vector<int> process(const std::vector<int> &data) override;
    std::string getType() override;
};

#endif //ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H
