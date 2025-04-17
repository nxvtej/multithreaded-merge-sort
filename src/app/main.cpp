#include <iostream>
#include <chrono>
#include "sorting/mergeSort.hpp"
#include "sorting/parallelMergeSort.hpp"

int main(int argc, char *argv[])
{
    const int size = 100000000;
    std::vector<int> nums(size);
    std::vector<int> nums1(size);

    for (int i = 0; i < size; i++)
    {
        nums[i] = rand() % 1000;
        nums1[i] = rand() % 1000;
    }

    MergeSort *mergesort = new MergeSort(&nums);
    auto start = std::chrono::high_resolution_clock::now();
    mergesort->sort();
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> mergeSortDuration = end - start;
    std::cout << "Single Threaded Merge Sort Algorithm using Recusrion time taken:- " << mergeSortDuration.count() << std::endl;

    ParallelMergeSort *mergesort_1 = new ParallelMergeSort(&nums1);
    start = std::chrono::high_resolution_clock::now();
    mergesort_1->sort();
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> parallelmergeSortDuration = end - start;
    std::cout << "Multithreaded Threaded Merge Sort Algorithm using Recusrion time taken:- " << parallelmergeSortDuration.count() << std::endl;

    if (mergeSortDuration < parallelmergeSortDuration)
        std::cout << "Single threaded is better\n";
    else
        std::cout << "Multi threaded takes less time \n";

    delete mergesort_1;
}