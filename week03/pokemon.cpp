#include "pokemon.h"

int Pokemon::count = 0;
Pokemon::Pokemon() : level(1), hp(10)
{
    count++;
}
Pokemon::Pokemon(int level, int hp) : level(level), hp(hp)
{
    count++;
}
Pokemon::Pokemon(const Pokemon& pokemon) : level(pokemon.level), hp(pokemon.hp)
{
    count++;
}
Pokemon::~Pokemon()
{
    count--;
}
int Pokemon::getCount()
{
    return count;
}

