//
// Created by asenkyrik on 08.11.2022.
//

#ifndef ALG2_LEVITIN_SORT_VECTORUTILS_H
#define ALG2_LEVITIN_SORT_VECTORUTILS_H

#include <string>
#include <vector>
#include <random>

using u32    = uint_least32_t;
using engine = std::mt19937;

class VectorUtils {
public:
    static std::string toString(const std::vector<int>& data);
    static std::vector<int> generateVector(int count, int from, int to);
};


#endif //ALG2_LEVITIN_SORT_VECTORUTILS_H
