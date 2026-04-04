#pragma once
#include "pokemon.h"
class Pikachu : public Pokemon
{
private:
    string type;
public:
    Pikachu();
    Pikachu(int level, int hp, string type);
    Pikachu(const Pikachu& pikachu);
    void electricAttack(double gpa);
    void attack();
    void set(int level, int hp, string type);
    string getType() const;
};
