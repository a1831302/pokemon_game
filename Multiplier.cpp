#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include "Enemy.h"
#include "Player.h"
#include "Multiplier.h"
#include <random>

using namespace std;

Multiplier::Multiplier() {
    //empty default constructor
}

Multiplier::Multiplier(int pokemon_type) {
    

    //looking for strength (so if a strength is the type of attack, then deals less damage)
    for (int i = 0; i < 2; i++){
        if (type = strength[i]){
            multiplier = 0.5;
        }
        else{
            multiplier = 1;
        }
    }

    //looking for weakness
        for (int i = 0; i < 1; i++){
        if (type = weaknessess[i]){
            multiplier = 2;
        }
        else{
            multiplier = 1;
        }
    }
}






