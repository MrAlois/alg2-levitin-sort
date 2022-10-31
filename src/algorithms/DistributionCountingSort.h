//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H
#define ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H


#include "SortingAlgorithm.h"

class DistributionCountingSort : public SortingAlgorithm {
public:
    ~DistributionCountingSort() override = default;

    std::vector<int> process(std::vector<int> &data) override {
        auto l = *std::min_element(data.begin(), data.end());
        auto u = *std::max_element(data.begin(), data.end());
        std::vector<int> frequencies(u - l, 0);

        // Compute frequencies
        for(int i : data)
            frequencies[i - l]++;

        // Reuse for distribution
        for(int j = 1; j < u - l; j++)
            frequencies[j] = frequencies[j - 1] + frequencies[j];

        // Sort
        std::vector<int> sorted(data.size());
        for(int i = data.size() - 1; i >= 0; i--){
            int j = data[i] - l;
            sorted[frequencies[j] - 1] = data[i];
            frequencies[j]--;
        }

        return sorted;
    };
};

#endif //ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H
