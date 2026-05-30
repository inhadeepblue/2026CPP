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
		throw MyException(9000, "객체 생성 오류", this);  // 임의로 예외 발생
	}
	catch (...) {
		delete[] ptr;  // 생성자 안쪽에서 이미 할당된 힙메모리 공간의 누수를 막음
		cout << "힙메모리 해제\n";
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

