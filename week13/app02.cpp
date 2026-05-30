#include <iostream>
#include <stdexcept>
#include <new>
using namespace std;

int main() {
	try {
		int* p = new int[0xfffffffff];
		delete[] p;
		p = nullptr;
	}
	catch (bad_alloc msg) {
		cout << msg.what() << '\n';
	}

	return 0;
}