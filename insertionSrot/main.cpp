#include <iostream>
#include "InsertSort.h"

using namespace std;

int main()
{
	InsertSort *Isort = new InsertSort();
	Isort->InputData();
	Isort->Print();
	Isort->Sorting();
	Isort->Print();
	delete Isort;
	return 0;
}