#include <iostream>
#include <vector>
#include "algorithms/ComparisonCountingSort.h"
#include "Sorter.h"

void printVector(std::vector<int> data){
    std::cout << "P = [";

    for(const auto& i: data){
        std::cout << i << ", ";
    }

    std::cout << "]" << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<int> integer_data {1, 5, 67, 8, 156, 3, 5, 1, 153, 43};
    printVector(integer_data);

    printVector(Sorter::sort<int>(integer_data, new ComparisonCountingSort<int>()));

    return 0;
}

