#include <iostream>
#include <vector>
#include "algorithms/ComparisonCountingSort.h"
#include "Sorter.h"
#include "algorithms/DistributionCountingSort.h"

void printVector(const std::string& prefix, const std::vector<int>& data){
    std::cout << prefix << " = [";

    for(const auto& i: data)
        std::cout << i << ", ";


    std::cout << "]" << std::endl;
}

int main() {
    std::vector<int> integer_data {1, 5, 67, 8, 156, 3, 5, 1, 153, 43};
    printVector("               Pure",integer_data);
    printVector("  Comparison_Sorted",Sorter::sort(integer_data, new ComparisonCountingSort()));
    printVector("Distribution_Sorted",Sorter::sort(integer_data, new DistributionCountingSort()));
    return 0;
}

