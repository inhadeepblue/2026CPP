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

bool DynamicArray::setAt(int index, int value)
{
	if (index < size && index >= 0) {
		ptr[index] = value;
		return 1;
	}
	return 0;
}

int DynamicArray::getAt(int index) const
{
	return ptr[index];
}

