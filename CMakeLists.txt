cmake_minimum_required(VERSION 3.23)
project(alg2_levitin_sort)

set(CMAKE_CXX_STANDARD 23)

add_executable(alg2_levitin_sort main.cpp algorithms/ComparisonCountingSort.cpp algorithms/ComparisonCountingSort.h algorithms/DistributionCountingSort.cpp algorithms/DistributionCountingSort.h algorithms/SortingAlgorithm.h Sorter.cpp Sorter.h)
