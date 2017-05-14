#include <iostream>
#include "QuickSort.h"

Quick::Quick(int * arr, int size)
{
	std::cout << "*** Quick Sort ***" << std::endl;
	_preArray = arr;
	_Max = size;
}
Quick::~Quick()
{
	_preArray = NULL;
	std::cout << "*** Destructor call~ ***" << std::endl;
}

void Quick::Sorting()
{
	QuickSorting(_preArray, 0, _Max - 1);
}

void Quick::QuickSorting(int *arr, int startP, int endP)
{
	if (startP < endP)
	{
		int divideP = Partitioning(arr, startP, endP);
		QuickSorting(arr, startP, divideP-1);
		QuickSorting(arr, divideP + 1, endP);
	}
}
void Swap(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
int Quick::Partitioning(int *arr, int startP, int endP)
{
	int *Bigvalue = new int[endP]; // �񱳰����� ū���� ������ �迭�� �ε��� ����
	int sp = startP, ep = startP;
	int pivot = endP;
	int index=0;
	for (int i = startP; i < endP; i++)//pivot�� ������ ����
	{
		if (arr[i] > arr[pivot])
		{
			Bigvalue[ep++] = i;
		}
		else if (arr[i] < arr[pivot])
		{
			if (ep != startP)
			{
				int j = Bigvalue[sp++];
				Swap(&arr[i], &arr[j]);
				Bigvalue[ep++] = i;
			}
		}
	}
	if (ep != startP)
	{
		index = Bigvalue[sp];
		Swap(&arr[index], &arr[pivot]);
	}
	else//�ٲ�°� ���� �� 
		index = endP - 1;

	delete[] Bigvalue;
	return index;
}
