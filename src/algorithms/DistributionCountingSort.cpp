//
// Created by asenkyrik on 08.11.2022.
//
#include "DistributionCountingSort.h"

/**
 * Implementation of Distribution Count Sort algorithm from A. Levitin's book.
 *
 * A sorting algorithm that stores, for each sort-key, the number of records with the given sort-key (thus anticipating
 * that keys might not be unique). With this information it is possible to place the records correctly into a sorted
 * file. The algorithm is useful when the keys fall into a small range and many of them are equal.
 *
 * @param data Data to sort
 * @return Sorted vector
 */
std::vector<int> DistributionCountingSort::process(const std::vector<int> &data) {
    const auto& l = *std::min_element(data.begin(), data.end());
    const auto& u = *std::max_element(data.begin(), data.end());

    // Initialize frequencies
    std::vector<int> frequencies(u - l + 1, 0);

    // Compute frequencies
    for(int i : data)
        frequencies[i - l]++;

    // Reuse for distribution
    for(int j = 1; j < u - l + 1; j++)
        frequencies[j] = frequencies[j - 1] + frequencies[j];

    // Sort
    std::vector<int> sorted(data.size());
    for(int i = data.size() - 1; i >= 0; i--){
        const int j = data[i] - l;
        sorted[frequencies[j] - 1] = data[i];
        frequencies[j]--;
    }

    return sorted;
}

/**
 * @return Return name of this algorithm for logging purposes.
 */
std::string DistributionCountingSort::getType() {
    return "DISTRIBUTION_COUNT";
}
