//
// Created by asenkyrik on 31.10.2022.
//

#include "ComparisonCountingSort.h"

template<class T>
std::vector<T> ComparisonCountingSort<T>::process(std::vector<T> data) {
    int *count = new int[data.count()];

    // Reset to zero
    for(int i = 0; i < data.size(); i++)
        count[i] = 0;

    // Compare values
    for(int i = 0; i < data.size() - 1; i++){
        for(int j = i + 1; j < data.size(); j++){
            if(data[i] < data[j])
                count[j] = count[j] + 1;
            else
                count[i] = count[i] + 1;
        }
    }

    // Fill the result vector with given information
    std::vector<T> result;
    for(int i = 0; i < data.size(); i++)
        result[count[i]] = data[i];

    delete[] count;
    return result;
}