#include <iostream>
#include "InsertSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "QuickSort.h"

using namespace std;
#define quickSort
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
	cout << "heapSort~!" << endl;
	Heap *heap = new Heap(arr, base->ArraySize());
	heap->Sorting();
#elif defined(quickSort)
	cout << "quickSort~!" << endl;
	Quick *quick = new Quick(arr,base->ArraySize());
	quick->Sorting();
#endif 
	
	base->Print();
	
	return 0;
}