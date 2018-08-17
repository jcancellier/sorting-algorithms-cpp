#include <iostream>
#include <vector>
#include "../utils/utils.h"

template <class T>
void bubbleSort(T &arr, int size)
{
	//decreases pass range through each iteration
	int passes = 1;

	bool didSwap;

	do {
		didSwap = false;
		for (int i = 0; i < (size - passes); i++) {
			if (arr[i] > arr[i+1]) {
				swap(arr[i], arr[i + 1]);
				didSwap = true;
			}
		}
		passes++;
	} while(didSwap);
}
