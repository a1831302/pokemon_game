
#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include "QuickAttack.h"
#include <random>

using namespace std;

QuickAttack::QuickAttack() {}

QuickAttack::QuickAttack(int chance, Pokemon pok) {
    cout << pok.name << " used quick attack!" << endl;
        if (chance < 80){ //20% chance of missing
            attack_type = 5; // normal type
            damage = 10;
            pok.num_hits++;
        } else {
            cout << pok.name << "'s quick attack missed!" << endl;
            damage = 0;
        }
}







