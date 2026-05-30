#include "dynamicarray.h"
#include "myexception.h"

DynamicArray::DynamicArray() : size(1)
{
	ptr = new int[1];	
}
DynamicArray::DynamicArray(int size) : size(size)
{
	try {
		ptr = new int[size];
		throw 900;
	}
	catch (...) {
		delete[] ptr;
		cout << "객체 생성 오류\n";
		throw;
	}	
}
DynamicArray::~DynamicArray()
{
	delete[] ptr;
	ptr = nullptr;
}

void DynamicArray::setAt(int index, int value)
{
	if (index >= size || index < 0) {
		//throw 9.99f;
		throw MyException(4885, "메모리 할당 오류", this);
	}
	ptr[index] = value;
}

int DynamicArray::getAt(int index) const
{
	if (index >= size || index < 0) {
		throw MyException(1002, "메모리 접근 오류", this);
	}
	return ptr[index];
}

