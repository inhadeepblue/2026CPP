#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pokemon
{
private:
    int level;
    int hp;
public:
    void setLevel(int level);
    int getLevel() const;
    void setHp(int hp);
    int getHp() const;
    void attack();
    void attack(int attackPoint);
};