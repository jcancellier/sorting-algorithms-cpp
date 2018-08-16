#include <iostream>
#include <vector>
#include "algorithms/bubbleSort.cpp"
#include "utils/utils.cpp"

int main()
{
    std::vector<double> arr = {3, 2, 1, 1, 2, 3};
    printValues("Initial Values", arr, arr.size());
    bubbleSort(arr, arr.size());
    printValues("After Sorting", arr, arr.size());

    return 0;
}
