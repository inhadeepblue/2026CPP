#pragma once
#include "pokemon.h"
class Pikachu : public Pokemon
{
private:
    string type;
public:
    void electricAttack(double gpa);
    void attack();
    void setType(string type);
    string getType() const;
};
