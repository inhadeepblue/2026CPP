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
	delete animal;
	animal = nullptr;

	return 0;
}