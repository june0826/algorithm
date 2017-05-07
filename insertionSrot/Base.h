#ifndef _BASE
#define _BASE

class Base
{
public:
	
	Base();
	~Base();
	void Print();
	int* InputData();
	int ArraySize();
private:
	int _Max;
	int *_preArray;

};
#endif