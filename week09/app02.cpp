#include <iostream>
#include <string>
#include <typeinfo> 
using namespace std;

class Animal { 
public:
	virtual void makeSound() { 
		cout << "µ¿¹°ÀÌ ¿ïÀ½¼Ò¸®¸¦ ³À´Ï´Ù\n"; 
	}
};
class Dog : public Animal {
public:
	void makeSound() {
		cout << "¸Û¸Û!\n";
	}
};
class Cat : public Animal {
public:
	void makeSound() {
		cout << "³Ä¿Ë~\n";
	}
};

int main()
{
	Animal* animal = new Dog();  // upcast
	animal->makeSound();

	//Dog* dog = (Dog*)animal; // downcast, old style (c style)
	Dog* dog = dynamic_cast<Dog*>(animal); // downcast, modern style (c++ 11)
	dog->makeSound();

	delete animal;
	animal = nullptr;

	return 0;
}