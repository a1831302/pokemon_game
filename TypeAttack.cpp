
#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include "TypeAttack.h"
#include <random>

using namespace std;

TypeAttack::TypeAttack() {}
TypeAttack::TypeAttack(int chance, Pokemon pok) {
    cout << pok.name << " used type attack!" << endl;
        if (chance < 50){ //50% chance of missing
            attack_type = pok.pokemon_type; // pokemon type
            damage = 30;
            pok.inc_num_hits(pok.get_num_hits());
        } else {
            cout << pok.name << "'s type attack missed!" << endl;
            damage = 0;
        }
}








