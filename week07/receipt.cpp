#include "receipt.h"

Receipt::Receipt(int receiptNumber) 
	: receiptNumber(receiptNumber), receiptTotal(0)
{
}
Receipt::~Receipt()
{
}
void Receipt::add(int quantity, Product product)
{
	receiptTotal = receiptTotal + (quantity * product.getPrice());
}
void Receipt::print() const
{
	cout << "영수증 번호 : " << receiptNumber << '\n';
	cout << "총 금액 : " << receiptTotal << '\n';
}
