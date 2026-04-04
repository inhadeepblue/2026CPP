#include "pikachu.h"
Pikachu::Pikachu()
    :Pokemon()  // invocation
{
}
Pikachu::Pikachu(int level, int hp, string type)
    :Pokemon(level, hp), type(type)  // invocation
{
}
Pikachu::Pikachu(const Pikachu& pikachu)
   // :Pokemon(pikachu)  // invocation
    :Pokemon(pikachu.level, pikachu.hp)  // invocation
{
}
void Pikachu::electricAttack(double attackPoint)
{
    cout << attackPoint << "만 볼트 공격\n";
}

void Pikachu::attack() {
    cout << "전기 일반 공격\n";
}

void Pikachu::set(int level, int hp, string type)
{
    Pokemon::set(level, hp); // delegation
    this->type = type;
}

string Pikachu::getType() const
{
    return type;
}
