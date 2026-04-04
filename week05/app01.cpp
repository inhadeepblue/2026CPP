//#include "pokemon.h"
#include "pikachu.h"

int main()
{
    Pokemon pokemon;
    pokemon.set(1, 5);
    cout << "포켓몬 레벨 : " << pokemon.getLevel();
    cout << endl << endl;

    Pikachu pikachu;
    pikachu.set(20, 200, "전기");
    pikachu.electricAttack(100000);
    cout << "포켓몬 레벨 : " << pikachu.getLevel() << endl;
    pikachu.attack();
    //pikachu.attack(50);
    cout << pikachu.getType() << '\n';
    
    return 0;
}

