//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_COMPARISONCOUNTINGSORT_H
#define ALG2_LEVITIN_SORT_COMPARISONCOUNTINGSORT_H


#include "SortingAlgorithm.h"

template <typename T>
class ComparisonCountingSort : public SortingAlgorithm<T> {
public:
    virtual ~ComparisonCountingSort() = default;

    std::vector<T> process(std::vector<T> &data) override {
        std::vector<int> count(data.size(), 0);

        // Compare values
        for(int i = 0; i < data.size() - 1; i++){
            for(int j = i + 1; j < data.size(); j++){
                if(data[i] < data[j])
                    count[j]++;
                else
                    count[i]++;
            }
        }

        // Reorder items based on computed counts
        std::vector<T> result(data.size());
        for(int i = 0; i < data.size(); i++)
            result[count[i]] = data[i];

        return result;
    };
};


#endif //ALG2_LEVITIN_SORT_COMPARISONCOUNTINGSORT_H
