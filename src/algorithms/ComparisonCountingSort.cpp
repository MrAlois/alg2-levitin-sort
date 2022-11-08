//
// Created by asenkyrik on 08.11.2022.
//
#include "ComparisonCountingSort.h"

/**
 * Implementation of Comparison Count Sort algorithm from A. Levitin's book.
 *
 * A sorting algorithm that stores, for each sort-key, the number of keys less than the given key. If Nj denotes
 * the number of keys less than the jth key then (assuming that keys are unique) the jth record should be in position
 * Nj + 1 in a file sorted into ascending order of the keys. This is a simple but inefficient algorithm.
 *
 * @param data Data to sort
 * @return Sorted vector
 */
std::vector<int> ComparisonCountingSort::process(const std::vector<int> &data) {
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
    std::vector<int> result(data.size());
    for(int i = 0; i < data.size(); i++)
        result[count[i]] = data[i];

    return result;
}

/**
 * @return Return name of this algorithm for logging purposes.
 */
std::string ComparisonCountingSort::getType() {
    return "COMPARISON_COUNT";
}

