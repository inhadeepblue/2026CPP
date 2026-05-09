#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	//string a = "ACE";
	string a("ACE");
	cout << a.size() << '\n';
	cout << a.capacity() << '\n';
	a = "12345";
	cout << a.size() << '\n';
	cout << a.capacity() << '\n';
	a = "1234567890123456";
	cout << a.size() << '\n';
	cout << a.capacity() << '\n';


	return 0;
}