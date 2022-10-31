cmake_minimum_required(VERSION 3.23)
project(alg2_levitin_sort)

set(CMAKE_CXX_STANDARD 23)

add_executable(alg2_levitin_sort src/main.cpp src/algorithms/ComparisonCountingSort.h src/algorithms/DistributionCountingSort.h src/algorithms/SortingAlgorithm.h src/Sorter.h)
