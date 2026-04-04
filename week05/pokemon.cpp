#include "pokemon.h"

Pokemon::Pokemon() : level(1), hp(10)
{    
}

Pokemon::Pokemon(int level, int hp)
    :level(level), hp(hp)
{
}

Pokemon::Pokemon(const Pokemon& pokemon)
    :level(pokemon.level), hp(pokemon.hp)
{
}

void Pokemon::set(int level, int hp)
{
    this->level = level;
    (*this).hp = hp;
}

int Pokemon::getLevel() const
{
    return level;
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
