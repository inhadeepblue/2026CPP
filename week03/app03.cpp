#include <iostream>
int main()
{
    int humans = 0;

    std::cout << "몇 분: ";
    std::cin >> humans;

    int* ages = new int[humans];  // allocate heap memory

    for (int i = 0; i < humans; i++) {
        int age;
        std::cout << "나이: ";
        std::cin >> age;
        *(ages + i) = age;
    }
    for (int i = 0; i < humans; i++) {
        std::cout << *(ages + i) << '\n';
    }
    delete[] ages; // free heap memory
    return 0;
}