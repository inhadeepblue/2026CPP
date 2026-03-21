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
        ages[i] = age;
    }
    int total = 0;
    for (int i = 0; i < humans; i++) {
        //std::cout << ages[i] << '\n';
        int adult = 10000, senior = 6000, kid = 5000;        
        if (ages[i] > 65) total = total + senior;
        else if (ages[i] > 18) total = total + adult;
        else  total = total + kid;
    }
    std::cout << "총 금액 : " << total << " (" << humans << "명)";
    delete[] ages; // free heap memory
    return 0;
}