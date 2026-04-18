#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	virtual void attack() const { cout << "평타 공격" << endl; }
};
class Pikachu : public Pokemon
{
public:
	void attack() const { cout << "전기 스킬 공격" << endl; }
};
int main()
{
	Pokemon* ptr = new Pokemon();
	ptr->attack();
	delete ptr;
	ptr = nullptr;

	ptr = new Pikachu();
	ptr->attack();
	delete ptr;
	ptr = nullptr;
	return 0;
}