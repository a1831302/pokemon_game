
#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include "QuickAttack.h"
#include <random>

using namespace std;

QuickAttack::QuickAttack() {}

QuickAttack::QuickAttack(int chance) {
    cout << name << " used quick attack!" << endl;
        if (chance < 80){ //20% chance of missing
            attack_type = 5; // normal type
            damage = 10;
            num_hits++;
        } else {
            cout << "Quick Attack missed!" << endl;
            damage = 0;
        }
}







