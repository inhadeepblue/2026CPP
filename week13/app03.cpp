#include <iostream>
using namespace std;

template <typename T>
void exchange(T* first, T* second)
{
	T temp = *first;
	*first = *second;
	*second = temp;
}
int main()
{
	int i1 = 1, i2 = 2;
	double d3 = 3, d4 = 4;
	exchange(&i1, &i2);
	cout << i1 << "  " << i2 << endl;
	exchange(&d3, &d4);	
	cout << d3 << "  " << d4 << endl;
	return 0;
}