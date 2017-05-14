#include "Base.h"

class Quick : public Base
{
public:
	Quick(int * arr, int size);
	~Quick();
	void Sorting();
	int Partitioning(int *arr, int startP, int endP);
	void QuickSorting(int *arr, int startP, int endP);
private:
	int *_preArray;
	int _Max;
};

