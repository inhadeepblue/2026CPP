#include <iostream>
#include <string>
using namespace std;

//class Pokemon final
class Pokemon
{
    //private:
protected:
    string name;
    int level;
    int hp;
public:
    Pokemon() : level(1), hp(10), name("nameless")
    {
    }
    Pokemon(int level, int hp, string name) :level(level), hp(hp), name(name)
    {
    }
    Pokemon(const Pokemon& pokemon) :level(pokemon.level), hp(pokemon.hp), name(pokemon.name)
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
    string getName() const {
        return name;
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
    Pikachu(int level, int hp, string name, string type) : Pokemon(level, hp, name), type(type)  // invocation
    {
    }
    Pikachu(const Pikachu& pikachu)// :Pokemon(pikachu)  // invocation
        :Pokemon(pikachu.level, pikachu.hp, pikachu.name)  // invocation
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

class Squirtle : public Pokemon
{
private:
    string type;
public:
    Squirtle() : Pokemon()
    {
    }
    Squirtle(int level, int hp, string name, string type) : Pokemon(level, hp, name), type(type)
    {
    }
    Squirtle(const Squirtle& squirtle)
        :Pokemon(squirtle.level, squirtle.hp, squirtle.name)
    {
    }
    void hydroAttack(double attackPoint) {
        cout << attackPoint << "만 물대포 공격\n";
    }
    void hydroAttack(double attackPoint, Pokemon targetPokemon) {
        cout << attackPoint << "만 물대포 공격을 " << targetPokemon.getName() << "에게 시전합니다\n";
    }
    void attack() {
        cout << "물속성 일반 공격\n";
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

    Squirtle squirtle(1, 7, "우리꼬부기", "물");
    squirtle.hydroAttack(75);


    Pikachu pikachu(20, 200, "야생의 피카츄", "전기");
    //pikachu.set(20, 200, "전기");
    pikachu.electricAttack(100000);
    cout << "포켓몬 레벨 : " << pikachu.getLevel() << endl;
    pikachu.attack();
    //pikachu.attack(50);
    cout << pikachu.getType() << '\n';

    squirtle.hydroAttack(3000, pikachu);
	return 0;
}
