//#include "pokemon.h"
#include "pikachu.h"

int main()
{
    Pokemon Pokemon;
    Pokemon.setLevel(1);
    cout << "포켓몬 레벨 : " << Pokemon.getLevel();
    cout << endl << endl;

    Pikachu Pikachu;
    Pikachu.setLevel(20);
    Pikachu.electricAttack(100000);
    cout << "포켓몬 레벨 : " << Pikachu.getLevel() << endl;
    return 0;
}

