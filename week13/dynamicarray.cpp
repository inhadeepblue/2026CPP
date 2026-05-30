#include "dynamicarray.h"
#include "myexception.h"

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
		//throw "4885 : 할당에러";
		throw MyException(4885, "메모리 할당 오류", this);
	}
	ptr[index] = value;
}

int DynamicArray::getAt(int index) const
{
	if (index >= size || index < 0) {
		//throw "1002 : 접근에러";
		throw MyException(1002, "메모리 접근 오류", this);
	}
	return ptr[index];
}

