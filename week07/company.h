#ifndef COMPANY_H
#define COMPANY_H
#include <string>
#include <iostream>
using namespace std;
class Company
{
private:
    string name;
    string telephone;
public:
    Company(string name, string telephone);
    ~Company();
    string getName() const;
    string getTelephone() const;
};
#endif