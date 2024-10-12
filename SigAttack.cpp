
#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include "SigAttack.h"
#include <random>

using namespace std;

SigAttack::SigAttack() {
    //empty
}

SigAttack::SigAttack(int num_hits) {
    
        if (num_hits > 4){ //5 hits
            attack_type = pokemon_type; // pokemon type
            damage = 70;
            num_hits = 0;
            cout << name << " used signature attack!" << endl;
        } else {
            cout << "Signature is not ready. Try Again: " << endl;
        }
}








