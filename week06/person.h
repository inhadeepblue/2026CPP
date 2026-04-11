#pragma once
#include "date.h"

class Person
{
  private:
    long identity;
    Date birthDate;  // has-a
  public: 
    Person(long identity, Date birthDate);  // aggregation
    ~Person(); 
    void print() const; 
};