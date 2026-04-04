#include "pikachu.h"
void Pikachu::electricAttack(double attackPoint)
{
    cout << attackPoint << "만 볼트 공격\n";
}

void Pikachu::attack() {
    cout << "전기 일반 공격\n";
}

void Pikachu::setType(string type)
{
    this->type = type;
}

string Pikachu::getType() const
{
    return type;
}
