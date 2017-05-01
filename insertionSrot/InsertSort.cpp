#include <iostream>
#include "InsertSort.h"

InsertSort::InsertSort()
{
	std::cout << "*** Insert Sort ***" << std::endl;
}

InsertSort::~InsertSort()
{
	delete[] _preArray;
	std::cout << "*** Destructor call~ ***" << std::endl;
}

void InsertSort::Print()
{
	std::cout << "*********************" << std::endl;
	std::cout << "The number to sort : ";
	for (int i = 0; i < _Max; i++)
	{
		std::cout << _preArray[i] << " ";
	}
	std::cout << std::endl;
}

void InsertSort::InputData()
{
	std::cout << "total count : ";
	std::cin >> _Max;
	_preArray = new int[_Max];
	memset(_preArray, NULL, _Max);
	int number;
	for (int i = 0; i < _Max; i++)
	{
		std::cout << "input data[" << i << "] = ";
		std::cin >> _preArray[i];
	}
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