#include "utils.h"
#include <iostream>
#include <vector>

template <class T>
void printValues(const char *display, T &arr, int size)
{
    std::cout << display << ": ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

template <class T>
void swap(T &first, T &second) 
{
	T temp = first;
	first = second;
	second = temp;
}