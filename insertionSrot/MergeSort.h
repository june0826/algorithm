#include "Base.h"
class MergeSort : public Base
{
public:
	MergeSort(int *arr, int size);
	~MergeSort();
	void Sorting();
	void Divide(int arr[],int startP, int endP);//�迭 �޴¹� Ȯ��
	void MSorting(int arr[], int startP, int divideP, int endP);
private:
	int *_preArray;
	int *_fArray;
	int _Max;
};
