#include <string>
#include <iostream>
using namespace std;

class Complex {
private:
    //mutable int real;
    int real;
    int imaginary;
public:
    friend Complex operator+(const Complex& left, const Complex& right);

    Complex(int real, int imaginary) : real(real), imaginary(imaginary) {
    }
    void setReal(int real) {
        this->real = real;
    }
    int getReal() const {
        //real = 11;  // private
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
int main()
{
    Complex c1(9, 2), c2(3, 5);
    cout << c2.getReal() << "+" << c2.getImaginary() << "i\n";
    cout << c2 << '\n';
    c1.setReal(77);  // ok
    Complex c3 = c1 + c2;  // operator+
    cout << c3 << '\n';
    const Complex c4(3, 7);
    cout << c4 << '\n';
    cout << c4.getImaginary() << '\n';
    // c4.setReal(111); 

    return 0;
}