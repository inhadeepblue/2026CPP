#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
public:
	Pokemon() {
		cout << "포켓몬 기본생성자\n";
	}
	//virtual ~Pokemon() {
	~Pokemon() {
		cout << "포켓몬 소멸자\n";
	}
	virtual void attack() const { cout << "평타 공격" << endl; }
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