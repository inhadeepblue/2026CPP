#include "pokemon.h"

Pokemon pokemon6;  // static memory (data memory)

void test() {
    Pokemon pokemon7(pokemon6);
    Pokemon* pokemon8 = new Pokemon(50, 20000);

    cout << "포켓몬 객체의 수: " << pokemon7.getCount() << endl;
    delete pokemon8;
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