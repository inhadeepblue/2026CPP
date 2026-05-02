#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon() {
		cout << "포켓몬 기본생성자\n";
	}
	virtual ~Pokemon() {
		cout << "포켓몬 소멸자\n";
	}
	virtual void attack() const = 0; // pure virtual function
};
class Pikachu : public Pokemon
{
public:
	Pikachu() {
		cout << "피카츄 기본생성자\n";
	}
	~Pikachu() {
		cout << "피카츄 소멸자\n";
	}
	void attack() const { cout << "전기 스킬 공격" << endl; }
};
int main()
{
	Pokemon* ptr[3];

	ptr[0] = new Pikachu();
	//ptr[1] = new Pokemon(); // abstract class 
	ptr[2] = new Pikachu();
	
	for (int i = 0; i < 3; i++)
		ptr[i]->attack();

	for (int i = 0; i < 3; i++) {
		delete ptr[i];
		ptr[i] = nullptr;
	}
	return 0;
}