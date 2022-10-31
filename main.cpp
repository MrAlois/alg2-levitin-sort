#include <iostream>
#include <vector>
#include "algorithms/ComparisonCountingSort.h"
#include "Sorter.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::vector<std::string> data {"SAFDA", "FDSAA"};
    Sorter::sort(data, new ComparisonCountingSort<std::string>());

    return 0;
}
