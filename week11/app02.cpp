#include <string>
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
    }
    int getReal() const {
        return real;
    }
    int getImaginary() const {
        return imaginary;
    }
    Complex operator+(const Complex& right) {
        int r = this->real + right.real;
        int i = this->imaginary + right.imaginary;
        return Complex(r, i);
    }
};
//Complex operator+(const Complex& left, const Complex& right) {
//    int r = left.getReal() + right.getReal();
//    int i = left.getImaginary() + right.getImaginary();
//    return Complex(r, i);
//}
int main()
{  
    Complex c1(9, 2), c2(3, 5);
    cout << c2.getImaginary() << '\n';
    Complex c3 = c1.operator+(c2); //Complex c3 = c1 + c2;
    cout << c3.getReal() << '\n';
    cout << c3.getImaginary() << '\n';
    return 0;
}