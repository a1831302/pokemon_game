#include <iostream>
#include "Pokemon.h"
#include "Enemy.h"
#include "Player.h"
#include "medicine.h"
using namespace std;

int main() {
    
    //for enemy
    Pokemon pok1 = Pokemon(1);
    Enemy en_pok1 = Enemy(pok1);

    cout << en_pok1.name << endl;
    cout << en_pok1.get_Pokemon_HP() << endl;

    en_pok1.set_name(pok1);

    cout << en_pok1.name << endl;
    cout << en_pok1.HP << endl;
    cout << endl;
    pok1.HP = en_pok1.HP;
    pok1.name = en_pok1.name;
    cout << pok1.name << endl;
    cout << pok1.HP << endl;

    
    
    //for player
    /*
    Pokemon pok2 = Pokemon(1);
    Player player2 = Player(pok2);

    cout << pok2.name << endl;
    player2.set_name();

    cout << pok2.name << endl;
    cout << pok2.HP << endl;
    int new_HP = pok2.HP + 40;
    pok2.set_Pokemon_HP(new_HP);
    cout << pok2.HP << endl;
    */
    return 0;
}
