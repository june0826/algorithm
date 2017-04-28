#include <iostream>

using namespace std;

#define MAX 30
void PrintString();
void InputData(int * arr);
void Sorting(int *arr);
int main()
{
	int sortArray[MAX] = {8,4,15,5,79,54,10};
	PrintString();
	InputData(sortArray);
	Sorting(sortArray);
	return 0;
}

void PrintString()
{
	cout << "*********************" << endl;
	cout << "The number to sort : ";
}
void InputData(int *arr)
{
	memset(arr, NULL, MAX); // 0일때 null일때 찍어볼것
}

void Sorting(int *arr)
{
	int tmp;

	for (int i = 1; i < MAX; i++)//4732
	{
		tmp= arr[i];
		for (int j = i-1; j >= 0; j--)
		{
			if (arr[j] > tmp)
			{
				int swap = arr[j];
				arr[j] = tmp;
				arr[j+1] = swap;
			}
		}
	}
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] != 0)
			cout << arr[i] << " ";
	}

}