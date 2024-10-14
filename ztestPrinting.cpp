#include <iostream>
#include <string>
#include "Pokemon.h"

int main() {

    Pokemon Pok1 = Pokemon(1);
    Pokemon Pok2 = Pokemon(2);
    Pokemon Pok3 = Pokemon(3);

    int HP1 = Pok1.get_Pokemon_HP();
    cout << HP1 << endl;
    Pok1.set_Pokemon_HP(250);
    int HP2 = Pok1.get_Pokemon_HP();
    cout << HP2 << endl;
    int hits = Pok1.get_num_hits();
    cout << hits << endl;
    Pok1.HP_drain(24);
    int HP3 = Pok1.get_Pokemon_HP();
    cout << HP3 << endl;


    return 0;
}

//output should be:
//Name: Squirtle
//etc, (all of Pokemon 1,2,3 info)
//200
//250
//0
//226






