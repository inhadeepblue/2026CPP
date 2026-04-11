#include "employee.h"

Employee::Employee(string last,  string first, int salary)
: name(last, first), salary(salary)
{
}
Employee::~Employee()
{
}
void Employee::print() const
{
  name.print();
  cout << "급여: " << salary << "만원\n";
} 