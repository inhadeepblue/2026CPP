#include <iostream>
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b << '\n';
}
int main()
{
    int a = 1, b = 2;

    std::cout << a << " " << b << '\n';
    swap(a, b);  // pass by value (call by value)
    std::cout << a << " " << b << '\n';

    return 0;
}