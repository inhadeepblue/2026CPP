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

void DynamicArray::setAt(int index, int value)
{
	if (index >= size || index < 0) {
		throw 4885;
	}
	ptr[index] = value;
}

int DynamicArray::getAt(int index) const
{
	if (index >= size || index < 0) {
		throw 1002;
	}
	return ptr[index];
}

