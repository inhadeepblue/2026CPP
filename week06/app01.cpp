#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
    //private:
protected:
    int level;
    int hp;
public:
    Pokemon() : level(1), hp(10)
    {
    }
    Pokemon(int level, int hp) :level(level), hp(hp)
    {
    }
    Pokemon(const Pokemon& pokemon) :level(pokemon.level), hp(pokemon.hp)
    {
    }
    void set(int level, int hp) {
        this->level = level;
        (*this).hp = hp;
    }
    int getLevel() const {
        return level;
    }
    int getHp() const {
        return hp;
    }
    void attack() {
        cout << "일반 공격\n";
    }
    void attack(int attackPoint) {
        cout << "일반 공격" << "(" << attackPoint << ") 피격됨\n";
    }
};

class Pikachu : public Pokemon
{
private:
    string type;
public:
    Pikachu() : Pokemon()  // invocation
    {
    }
    Pikachu(int level, int hp, string type) : Pokemon(level, hp), type(type)  // invocation
    {
    }
    Pikachu(const Pikachu& pikachu)// :Pokemon(pikachu)  // invocation
        :Pokemon(pikachu.level, pikachu.hp)  // invocation
    {
    }
    void electricAttack(double attackPoint) {
        cout << attackPoint << "만 볼트 공격\n";
    }
    void attack() {
        cout << "전기 일반 공격\n";
    }
    void set(int level, int hp, string type) {
        Pokemon::set(level, hp); // delegation
        this->type = type;
    }
    string getType() const {
        return type;
    }
};

int main() {
    Pokemon pokemon;
    pokemon.set(1, 5);
    cout << "포켓몬 레벨 : " << pokemon.getLevel();
    cout << endl << endl;

    Pikachu pikachu;
    pikachu.set(20, 200, "전기");
    pikachu.electricAttack(100000);
    cout << "포켓몬 레벨 : " << pikachu.getLevel() << endl;
    pikachu.attack();
    //pikachu.attack(50);
    cout << pikachu.getType() << '\n';
	return 0;
}
