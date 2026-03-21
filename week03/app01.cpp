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
Pokemon pokemon6;  // static memory (data memory)

void test() {
    Pokemon pokemon7(pokemon6);
    cout << "포켓몬 객체의 수: " << pokemon7.getCount() << endl;
}

int main()
{
    {
        // stack memory
        Pokemon pokemon1(3, 100);
        cout << pokemon1.getHp() << endl;
        Pokemon pokemon2(5, 300);

        test();
        cout << "포켓몬 객체의 수: " << Pokemon::getCount() << endl;

        Pokemon pokemon3;
        Pokemon pokemon4(pokemon1);
        Pokemon pokemon5(pokemon2);
        cout << "포켓몬 객체의 수: " << pokemon5.getCount() << endl;
    }
    cout << "포켓몬 객체의 수: " << Pokemon::getCount();
    return 0;
}