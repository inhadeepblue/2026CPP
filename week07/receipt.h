#ifndef RECEIPT_H
#define RECEIPT_H
#include "product.h"
#include "company.h"

class Receipt
{
private:
    int receiptNumber;
    int receiptTotal;
    Company company;  // has-a
public:
    Receipt(int receiptNumber, Company company);  // aggregation, dependency
    ~Receipt();
    void add(int quantity, Product product);  // use-a
    void print() const;
};
#endif