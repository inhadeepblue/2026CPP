//#include "pokemon.h"
#include "pikachu.h"

int main()
{
    Pokemon pokemon;
    pokemon.setLevel(1);
    cout << "포켓몬 레벨 : " << pokemon.getLevel();
    cout << endl << endl;

    Pikachu pikachu;
    pikachu.setLevel(20);
    pikachu.electricAttack(100000);
    cout << "포켓몬 레벨 : " << pikachu.getLevel() << endl;
    pikachu.attack();
    //pikachu.attack(50);
    pikachu.setType("전기");
    cout << pikachu.getType() << '\n';
    
    return 0;
}

