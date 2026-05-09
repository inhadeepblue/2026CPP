#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	//char a[] = { 'A', 'C', 'E', '\0' };	
	//char a[] = { 'A', 'C', 'E'};
	char a[] = { 'A', 0, 'C', 'E'};
	//char a[] = { 'A', 'C', 'E', NULL};
	//char a[] = { 'A', 'C', 'E', 0 };
	//char a[] = "ACE";
	//const char a[] = "ACE";
	//char* b = "XYZ";
	const char* b = "XYZ";

	cout << a << '\n';
	//a[0] = 'X';
	//cout << a << '\n';
	//b[0] = 'K';

	return 0;
}