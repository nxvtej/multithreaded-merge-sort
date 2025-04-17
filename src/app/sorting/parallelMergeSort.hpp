#ifndef parallelMergeSort_hpp
#define parallelMergeSort_hpp

#include <vector>
#include <mutex>
#include <thread>
#include <iostream>
#include <algorithm>

class ParallelMergeSort
{
private:
    std::vector<int> *nums;

public:
    ParallelMergeSort(std::vector<int> *nums);
    ~ParallelMergeSort();
    void sort();
    void recursiveSort(int left, int right);
};

#endif