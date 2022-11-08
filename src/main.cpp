#include <vector>
#include <iostream>
#include "algorithms/ComparisonCountingSort.h"
#include "algorithms/DistributionCountingSort.h"
#include "Sorter.h"

int main() {
    std::cout << "[DEBUG] -- SORT SMALL VECTOR --" << std::endl;
    std::vector<int> small_vec {195, 128, 88, 224, 58, 136, 200, 188, 93, 217, 192, 99, 227, 23164, 225, -20};
    const auto& small_vec_sorted1 = Sorter::sort(small_vec, new ComparisonCountingSort());
    const auto& small_vec_sorted2 = Sorter::sort(small_vec, new DistributionCountingSort());

    std::cout << "[DEBUG]     Without sorting -> " << VectorUtils::toString(small_vec) << std::endl;
    std::cout << "[DEBUG]   Comparison sorted -> " << VectorUtils::toString(small_vec_sorted1) << std::endl;
    std::cout << "[DEBUG] Distribution sorted -> " << VectorUtils::toString( small_vec_sorted2) << std::endl;

    std::cout << "[DEBUG] -- SORT LARGE VECTOR -- " << std::endl;
    const auto& large_vec = VectorUtils::generateVector(15000, -100, 1000);
    const auto& large_vec_sorted1 = Sorter::sort(large_vec, new ComparisonCountingSort());
    const auto& large_vec_sorted2 = Sorter::sort(large_vec, new DistributionCountingSort());

//    std::cout << "[DEBUG]     Without sorting -> " << VectorUtils::toString( large_vec ) << std::endl;
//    std::cout << "[DEBUG]   Comparison sorted -> " << VectorUtils::toString( Sorter::sort(large_vec, new DistributionCountingSort())) << std::endl;
//    std::cout << "[DEBUG] Distribution sorted -> " << VectorUtils::toString( Sorter::sort(large_vec, new DistributionCountingSort())) << std::endl;

    return 0;
}

