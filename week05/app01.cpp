#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
private:
    int level;
    int hp;
public:
    void setLevel(int level);
    int getLevel() const;
    void setHp(int hp);
    int getHp() const;
};

void Pokemon::setLevel(int level)
{
    this->level = level;
}

int Pokemon::getLevel() const
{
    return level;
}

void Pokemon::setHp(int hp)
{
    this->hp = hp;
}

int Pokemon::getHp() const
{
    return hp;
}

class Pikachu : public Pokemon
{
private:

public:
    void electricAttack(double gpa);
};

void Pikachu::electricAttack(double attackPoint)
{
    cout << attackPoint << "만 볼트 공격\n";
}


int main()
{
    Pokemon Pokemon;
    Pokemon.setLevel(1);
    cout << "포켓몬 레벨 : " << Pokemon.getLevel();
    cout << endl << endl;

    Pikachu Pikachu;
    Pikachu.setLevel(20);
    Pikachu.electricAttack(100000);
    cout << "포켓몬 레벨 : " << Pikachu.getLevel() << endl;
    return 0;
}

