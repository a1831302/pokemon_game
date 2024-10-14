
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
    
        if (num_hits > 4){                 //5 hits
            attack_type = pok.pokemon_type; // pokemon type
            damage = 70;
            pok.set_num_hits(0);
            cout << pok.name << " used "<< pok.sig_attack << " attack!" << endl;
        } else {
            cout << "Signature is not ready. You have lost your turn. " << endl;
            damage = 0;
        }
}








