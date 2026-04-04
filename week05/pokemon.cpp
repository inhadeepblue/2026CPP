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