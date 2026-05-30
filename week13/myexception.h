#pragma once
#include "dynamicarray.h"

class MyException {
public:
	int errorCode;
	const char* errorDescription;
	const DynamicArray* errorAddress;

	MyException(int errorCode, const char* errorDescription, const DynamicArray* errorAddress);
};