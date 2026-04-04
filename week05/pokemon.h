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
    void set(int level, int hp);
    int getLevel() const;
    int getHp() const;
    void attack();
    void attack(int attackPoint);
};