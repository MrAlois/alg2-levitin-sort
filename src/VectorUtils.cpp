//
// Created by asenkyrik on 08.11.2022.
//

#include <sstream>
#include <iostream>
#include "VectorUtils.h"

/**
 * Utility function. Creates a string representation of a vector using string stream. Is overloaded.
 */
std::string VectorUtils::toString(const std::vector<int> &data) {
    std::stringstream str;
    str << "Vector[";

    for(const auto& i: data)
        str << " " << i;

    str << "]";
    return str.str();
}

/**
 * Generates randomly distributed vector of integers. This method uses mt19937 engine, which is available from C++11
 * standard.
 * @param count How many items should this vector have
 * @param from Starting range of the randomized integer
 * @param to Ending range of the randomized integer
 */
std::vector<int> VectorUtils::generateVector(int count, int from, int to) {
    std::random_device os_seed;
    const u32 seed = os_seed();

    engine generator( seed );
    std::uniform_int_distribution<u32> distribute( from, to );

    std::vector<int> result(count);
    for(int i = 0; i < count; i++)
        result[i] = distribute(generator);

    return result;
}