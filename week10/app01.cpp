#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	//string a = "ACE";
	string a("ACE");
	//string a("ACE", 2);
	//string a(7, 'A');
	string b(a);
	cout << a << '\n';
	cout << b << '\n';
	cout << b[1] << '\n';
	cout << b.at(1) << '\n';

	return 0;
}