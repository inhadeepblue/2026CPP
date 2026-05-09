#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int myStrlen(char* ps) {
	int i = 0;

	while (ps[i] != NULL) {
		i++;
	}
	return i;
}
int main()
{
	char a[] = "ACE";
	cout << a << '\n';
	cout << strlen(a) << '\n';
	cout << myStrlen(a) << '\n';

	return 0;
}