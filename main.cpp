#include <iostream>
#include <vector>
#include "algorithms/bubbleSort.cpp"
#include "utils/utils.cpp"

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    printValues("Initial Values", arr, 5);
    bubbleSort(arr, 5);
    printValues("After Sorting", arr, 5);

    return 0;
}
