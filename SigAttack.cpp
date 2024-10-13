
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

SigAttack::SigAttack(int num_hits, Pokemon pok) {
    
        if (pok.num_hits > 4){ //5 hits
            attack_type = pok.pokemon_type; // pokemon type
            damage = 70;
            pok.num_hits = pok.num_hits - 5;
            cout << pok.name << " used signature attack!" << endl;
        } else {
            cout << "Signature is not ready. Try Again: " << endl;
            damage = 0;
        }
}








