#include <string>
#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;
public:
    friend Complex operator+(const Complex& left, const Complex& right);

    Complex() : real(0), imaginary(0) {
    }
    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
    }
    void setReal(int real) {
        this->real = real;
    }
    void setImaginary(int imaginary) {
        this->imaginary = imaginary;
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
    int r = left.real + right.real;
    int i = left.imaginary + right.imaginary;
    return Complex(r, i);
}
ostream& operator<<(ostream& o, const Complex& right) {
    o << right.getReal() << "+" << right.getImaginary() << "i\n";
    return o;
}
istream& operator>>(istream& i, Complex& right) {
    int real, imaginary;
    cout << "Input Real Number : ";
    cin >> real;
    cout << "Input Imaginary Number : ";
    cin >> imaginary;
    right.setReal(real);
    right.setImaginary(imaginary);
    return i;
}
int main()
{
    Complex c1;
    cin >> c1;
    cout << c1;

    return 0;
}