#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
//private:
protected:
    int level;
    int hp;
public:
    Pokemon();
    Pokemon(int level, int hp);
    Pokemon(const Pokemon& pokemon);

    void set(int level, int hp);
    int getLevel() const;
    int getHp() const;
    void attack();
    void attack(int attackPoint);
};