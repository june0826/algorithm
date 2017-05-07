#include <iostream>
#include "InsertSort.h"
#include "MergeSort.h"

using namespace std;
#define heapSort
int main()
{
	
	Base *base = new Base();
	int *arr;
	arr = base->InputData();
	base->Print();
#if defined(insertSort)
	cout << "insertSort~!" << endl;
	InsertSort *Isort = new InsertSort(arr,base->ArraySize());
	Isort->Sorting();
#elif defined(mergeSort)
	cout << "mergeSort~!" << endl;
	MergeSort *Msort = new MergeSort(arr, base->ArraySize());
	Msort->Sorting();
#elif defined(heapSort)
#endif 
	
	base->Print();
	
	return 0;
}