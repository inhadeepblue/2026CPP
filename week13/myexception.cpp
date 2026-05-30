#include "myexception.h"

MyException::MyException(int errorCode, const char* errorDescription,const DynamicArray* errorAddress)
	:errorCode(errorCode), errorDescription(errorDescription), errorAddress(errorAddress)
{
}
