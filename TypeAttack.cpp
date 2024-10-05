
#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include "TypeAttack.h"
#include <random>

using namespace std;

TypeAttack::TypeAttack() {}
TypeAttack::TypeAttack(int chance) {
    cout << name << " used type attack!" << endl;
        if (chance < 50){ //50% chance of missing
            attack_type = pokemon_type; // pokemon type
            damage = 30;
            num_hits++;
        } else {
            cout << "Type Attack missed!" << endl;
            damage = 0;
        }
}








