#include <iostream>
#include "Base.h"

Base::Base()
{
}
Base::~Base()
{
	delete[] _preArray;
	std::cout << "*** Destructor call~ ***" << std::endl;
}
int* Base::InputData()
{
	std::cout << "total count : ";
	std::cin >> _Max;
	_preArray = new int[_Max];
	memset(_preArray, 0, _Max);

	for (int i = 0; i < _Max; i++)
	{
		std::cout << "input data[" << i << "] = ";
		std::cin >> _preArray[i];
	}
	return _preArray;
}
void Base::Print()
{
	std::cout << "*********************" << std::endl;
	std::cout << "The number to sort : ";
	for (int i = 0; i < _Max; i++)
	{
		std::cout << _preArray[i] << " ";
	}
	std::cout << std::endl;
}
int Base::ArraySize()
{
	return _Max;
}