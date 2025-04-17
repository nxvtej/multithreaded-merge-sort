#ifndef mergeSort_hpp
#define mergeSort_hpp

#include <vector>

class MergeSort
{
private:
    std::vector<int> *nums;

public:
    MergeSort(std::vector<int> *nums);
    ~MergeSort();
    void sort();
    void recursiveSort(int left, int right);
};

#endif