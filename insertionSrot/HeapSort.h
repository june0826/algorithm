#include "Base.h"

class Heap : public Base 
{
public:
	Heap(int*arr,int size);
	~Heap();
	void Sorting();
private:
	int *_preArray;
	int _Max;
};