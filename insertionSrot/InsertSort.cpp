#include <iostream>
#include "InsertSort.h"

InsertSort::InsertSort(int *arr, int size)
{
	std::cout << "*** Insert Sort ***" << std::endl;
	_preArray = arr;
	_Max = size;
}

InsertSort::~InsertSort()
{
	_preArray = NULL;
	std::cout << "*** Destructor call~ ***" << std::endl;
}

void InsertSort::Sorting()
{
	int tmp;
	
	for (int i = 1; i < _Max; i++)//4732
	{
		tmp = _preArray[i];
		for (int j = i-1; j >= 0; j--)
		{
			if (_preArray[j] > tmp)
			{
				int swap = _preArray[j];
				_preArray[j] = tmp;
				_preArray[j + 1] = swap;
			}
		}
	}
}