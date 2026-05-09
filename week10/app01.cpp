#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char a[] = "ACE";
	char b[] = "ACE";
	string c = "ACE";
	string d = "ACE";
	cout << strcmp(a, b) << '\n';	
	cout << (c == d) << '\n';

	return 0;
}