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

	//Cat* cat = (Cat*)animal; // downcast, old style (c style)  // danger
	Cat* cat = dynamic_cast<Cat*>(animal); // downcast, modern style (c++ 11)
	cout << animal << '\n';
	cout << cat << '\n';

	//dog->makeSound();
	cat->makeSound();
	
	delete animal;
	animal = nullptr;

	return 0;
}