#include <iostream>
#include "HeapSort.h"
Heap::Heap(int *arr, int size)
{
	std::cout << "*** heap Sort ***" << std::endl;
	_preArray = arr;
	_Max = size;
}
Heap::~Heap()
{
	_preArray = NULL;
	std::cout << "*** Destructor call~ ***" << std::endl;
}
void swap(int &a, int &b)
{
	int swap = a;
	a = b;
	b = swap;
}
void Heap::Sorting()
{
	int heapSize = _Max;
	for (int i = 0; i < _Max; i++)
	{
		for (int j = heapSize / 2; j > 0; j--)
		{
			if (_preArray[j - 1] < _preArray[2 * j - 1])
				swap(_preArray[j - 1], _preArray[2 * j - 1]);
			if (2*j+1 <=heapSize)
			{
				if (_preArray[j-1] < _preArray[2 * j])
					swap(_preArray[j - 1], _preArray[2 * j]);
			}
		}
		swap(_preArray[0], _preArray[heapSize - 1]);
		heapSize -= 1;
	}
}