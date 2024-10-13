#include <iostream>
#include <string>
#include "Pokemon.h"
#include "Multiplier.h"

using namespace std;

// Default constructor
Multiplier::Multiplier() {
    multiplier = 1;
}

double Multiplier::find_mult(Pokemon pok1, Pokemon pok2) {
      multiplier = 1; // Default multiplier

    // Get the strengths and weaknesses of the Pokemon being attacked
    int* strengths = pok2.getStrengths();
    int* weaknesses = pok2.getWeaknesses();

    // Check if the attack type matches any of the strengths (deal less damage)
    for (int i = 0; i < 3; ++i) {
        if (strengths[i] != 0 && pok1.pokemon_type == strengths[i]) {
            multiplier = 0.5;  // Less damage for strengths
            cout << "The attack type matches the enemy's strength. Multiplier is set to 0.5" << endl;
            return multiplier;
        }
    }

    // Check if the attack type matches any of the weaknesses (deal more damage)
    for (int i = 0; i < 2; ++i) {
        if (weaknesses[i] != 0 && pok1.pokemon_type == weaknesses[i]) {
            multiplier = 2;  // More damage for weaknesses
            cout << "The attack type matches the enemy's weakness. Multiplier is set to 2" << endl;
            return multiplier;  // Exit the loop since we found a match
        }
    }

    // If no match is found, multiplier remains 1
    if (multiplier == 1) {
    cout << "No strength or weakness match. Multiplier is set to 1" << endl;
    };
    return multiplier;

}
