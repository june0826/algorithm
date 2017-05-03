#include <iostream>
#include "InsertSort.h"
#include "MergeSort.h"
using namespace std;

int main()
{
	
	MergeSort *Msort = new MergeSort();
	Msort->InputData();
	Msort->Print();
	Msort->Sorting();
	Msort->Print();
	delete Msort;
	/*InsertSort *Isort = new InsertSort();
	Isort->InputData();
	Isort->Print();
	Isort->Sorting();
	Isort->Print();
	delete Isort;*/
	return 0;
}