#pragma once
#include <iostream>
using namespace std;

class Pokemon
{
private:
    int level;
    int hp;
    static int count;
public:
    Pokemon();
    Pokemon(int level, int hp);
    Pokemon(const Pokemon& pokemon);
    ~Pokemon();
    static int getCount();
    int getHp() const {  // inline
        return hp;
    }
};