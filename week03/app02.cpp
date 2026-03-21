#include <iostream>
void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    std::cout << *a << " " << *b << '\n';
}
int main()
{
    int a = 1, b = 2;

    std::cout << a << " " << b << '\n';
    //std::cout << &a << '\n';
    swap(&a, &b);  // pass by pointer (call by pointer)
    //std::cout << &a << '\n';
    std::cout << a << " " << b << '\n';

    return 0;
}