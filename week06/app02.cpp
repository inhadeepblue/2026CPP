#include "person.h"

int main()
{
	Date date1(2026, 4, 11);
	Person person1(111, date1);
	Date  date2(2025, 3, 1);
	Person person2(999, date2);

	person1.print();
	person2.print();
	return 0;
}