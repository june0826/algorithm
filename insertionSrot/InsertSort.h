
#include "Base.h"
class InsertSort : public Base
{
public:
	InsertSort(int*arr, int size);
	~InsertSort();
	/*void Print();
	void InputData();*/
	void Sorting();
private:
	int *_preArray;
	int _Max;
};
