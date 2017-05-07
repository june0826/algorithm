#include <iostream>
#include "MergeSort.h"

MergeSort::MergeSort(int *arr, int size)
{
	std::cout << "*** Merge Sort ***" << std::endl;
	_preArray = arr;
	_Max = size;
	_fArray = new int[_Max];
}
MergeSort::~MergeSort()
{
	_preArray = NULL;
	delete[] _fArray;
	std::cout << "*** Destructor call~ ***" << std::endl;
}
void MergeSort::Divide(int arr[], int startP, int endP)
{
	int divideP = 0;
	if (startP < endP)
	{
		divideP = (startP + endP) / 2;
		Divide(arr, startP, divideP);
		Divide(arr, divideP + 1, endP);
		MSorting(arr, startP, divideP, endP);
	}
}

void MergeSort::MSorting(int arr[], int startP, int divideP, int endP)
{
	int n1_startP = startP;
	int n2_startP = divideP + 1;
	int t_P = startP;
	int i, j;

	for (i = n1_startP; i <= divideP;)
	{
		for (j = n2_startP; j <= endP;)
		{
			if (i > divideP) break;
			
			if (arr[i] > arr[j])
			{
				_fArray[t_P++] = arr[j];
				j++;
			}
			else if (arr[i] < arr[j])
			{
				_fArray[t_P++] = arr[i];
				i++;
			}
		}
		if (j > endP) break;
	}

	if (i > divideP && j <= endP)
	{
		for (; j <= endP; j++)
		{
			_fArray[t_P++] = arr[j];
		}
	}

	else if (i <= divideP && j >endP)
	{
		for (; i <= divideP; i++)
		{
			_fArray[t_P++] = arr[i];
		}
	}

	for (int k = startP; k < t_P; k++)
	{
		arr[k] = _fArray[k];
	}

}
void MergeSort::Sorting()
{
	Divide(_preArray, 0, _Max-1);
}