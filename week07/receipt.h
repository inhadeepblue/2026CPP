#ifndef RECEIPT_H
#define RECEIPT_H
#include "product.h"

class Receipt
{
private:
    int receiptNumber;
    int receiptTotal;
public:
    Receipt(int receiptNumber);
    ~Receipt();
    void add(int quantity, Product product);
    void print() const;
};
#endif