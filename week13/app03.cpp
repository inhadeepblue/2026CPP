#include <iostream>
using namespace std;

template <typename T>
T bigger(T first, T second)
{
	if (first > second)
		return first;
	return second;
}
int main()
{
	int i1 = 1, i2 = 2;
	double d3 = 3.7;	
	cout << bigger(i1, i2) << endl;
	//cout << bigger(i2, d3) << endl;
	cout << bigger<int>(i2, d3) << endl;  // 2.0
	return 0;
}