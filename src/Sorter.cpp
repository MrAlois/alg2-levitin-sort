//
// Created by asenkyrik on 08.11.2022.
//
#include <iostream>
#include "Sorter.h"

/**
 * Sorts input data based with provided algorithm.
 *
 * @param data Address to sorted data.
 * @param algorithm Used algorithm for sorting.
 * @return New vector of sorted items.
 */
std::vector<int> Sorter::sort(const std::vector<int> &data, SortingAlgorithm *algorithm) {
    std::cout << "[INFO] Starting sorting of " << data.size() << " items using [" << algorithm->getType() << "] algorithm.." << std::endl;

    auto const& start = std::chrono::steady_clock::now();
    auto const& result = algorithm->process(data);

    std::cout << "[INFO] Sorting successful! Operation took " << std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - start).count() << "us." << std::endl;

    delete algorithm;
    return result;
}

