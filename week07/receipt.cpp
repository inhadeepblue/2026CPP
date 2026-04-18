#include "receipt.h"

Receipt::Receipt(int receiptNumber, Company company) 
	: receiptNumber(receiptNumber), receiptTotal(0), company(company)
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
	cout << "회사명 : " << company.getName() << '\n';
	cout << "전화번호 : " << company.getTelephone() << '\n';
	cout << "영수증 번호 : " << receiptNumber << '\n';
	cout << "총 금액 : " << receiptTotal << '\n';
}
