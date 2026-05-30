#include "dynamicarray.h"

DynamicArray::DynamicArray() : size(1)
{
	ptr = new int[1];
}
DynamicArray::DynamicArray(int size) : size(size)
{
	ptr = new int[size];
	//this->size = size;
	//(*this).size = size;
}
DynamicArray::~DynamicArray()
{
	delete[] ptr;
}

