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
    //Complex operator+(const Complex& right) {
    //    int r = this->real + right.real;
    //    int i = this->imaginary + right.imaginary;
    //    return Complex(r, i);
    //}
    Complex operator++(int) {  // postfix
        Complex backup(this->real, this->imaginary);
        this->real = this->real + 1;
        return backup;
    }
    Complex operator++() {  // prefix        
        this->real = this->real + 1;
        return Complex(this->real, this->imaginary);
    }
};
Complex operator+(const Complex& left, const Complex& right) {
    int r = left.getReal() + right.getReal();
    int i = left.getImaginary() + right.getImaginary();
    return Complex(r, i);
}
ostream& operator<<(ostream& o, const Complex& right) {
    o << right.getReal() << "+" << right.getImaginary() << "i\n";
    return o;
}
int main()
{  
    Complex c1(9, 2), c2(3, 5);
    cout << c2.getReal() << "+" << c2.getImaginary() << "i\n";
    cout << c2 << '\n';

    return 0;
}