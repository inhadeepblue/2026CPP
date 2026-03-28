#include "pokemon.h"

int Pokemon::count = 0;
Pokemon::Pokemon() : level(1), hp(10)
{
    cout << this << '\n';
    count++;
}
Pokemon::Pokemon(int level, int hp) : level(level), hp(hp)
{
    cout << this << '\n';
    count++;
}
Pokemon::Pokemon(const Pokemon& pokemon) : level(pokemon.level), hp(pokemon.hp)
{
    cout << this << '\n';
    count++;
}
Pokemon::~Pokemon()
{
    cout << this << '\n';
    count--;
}
int Pokemon::getCount()
{
    return count;
}

