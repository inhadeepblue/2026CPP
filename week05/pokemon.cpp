#include "pokemon.h"

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

void Pokemon::attack()
{
    cout << "일반 공격\n";
}

void Pokemon::attack(int attackPoint)
{
    cout << "일반 공격" << "(" << attackPoint << ") 피격됨\n";
}
