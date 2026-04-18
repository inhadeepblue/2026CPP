#include "receipt.h"

int main()
{
	Product product1("Americano", 2000);
	Product product2("Latte", 2500);

	Receipt receipt(100);
	receipt.add(1, product1);
	receipt.add(3, product2);
	receipt.print();
	return 0;
}