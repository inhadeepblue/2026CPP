#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
public:
    Circle() {
        cout << this <<" 원 객체 생성 (기본생성자)\n";
        radius = 1;
    }
    //Circle(double r) {
    //Circle(double radius) {
    //    cout << this << " 원 객체 생성 (매개변수 생성자)\n";
    //    //radius = radius;
    //    this->radius = radius;
    //}
    Circle(double radius) : radius(radius) {
        cout << this << " 원 객체 생성 (매개변수 생성자)\n";
    }
    //Circle(const Circle& c) {
    //    cout << this << " 원 객체 생성 (복사 생성자)\n";
    //    radius = c.radius;  // radius = c.getRadius();
    //}
    Circle(const Circle& circle) : radius(circle.radius){
        cout << this << " 원 객체 생성 (복사 생성자)\n";        
    }

    ~Circle() {
        cout << this << " 소멸자\n";
    }

    double getRadius() const {
        return radius;
    }
    double getArea() const {
        const double PI = 3.14;
        return (PI * radius * radius);
    }
    double getPerimeter() const {
        const double PI = 3.14;
        return (2 * PI * radius);
    }
    void setRadius(double value);
};
inline void Circle::setRadius(double value)
{
    radius = value;
}

Circle circle5;  // Global variable (static memory)

void test() {
    cout << "Circle 4" << endl;
    Circle circle4;
}
int main()
{
    cout << "Circle 1" << endl;
    Circle circle1(5.0);
    //circle1.setRadius(10.0);
    cout << "반지름: " << circle1.getRadius() << endl;
    cout << "넓이: " << circle1.getArea() << endl;
    cout << "둘레: " << circle1.getPerimeter() << endl << endl;

    cout << "Circle 3" << endl;
    Circle circle3(circle1);
    cout << "반지름: " << circle3.getRadius() << endl;

    test();

    cout << "Circle 2" << endl;
    Circle circle2;
    circle2.setRadius(20.0);
    cout << "반지름: " << circle2.getRadius() << endl;
    cout << "넓이: " << circle2.getArea() << endl;
    cout << "둘레: " << circle2.getPerimeter() << endl;
    return 0;
}