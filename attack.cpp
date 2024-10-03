#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include <random>

using namespace std;

Attack::Attack() : num_hits(0) {}

Attack::Attack(int attack_used) {
    // Initialize a random number engine
    std::random_device dev;  // Seed generator (for true random seed)
    std::mt19937 rng(dev()); // Mersenne Twister random number engine

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);

    // Generate a random number
    int chance = dist(rng);

    // quick attack
    if (attack_used == 1){
        if (chance < 80){ //20% chance of missing
            attack_type = 5; // normal type
            damage = 10;
            num_hits++; //increase succesful hit increment
            cout << "Attack Hit!";
        } 
        else{
            damage = 0; 
            cout << "Attack Missed!";
        }
    }

    //Type attack
    if (attack_used == 2){
        if (chance < 50){
            attack_type = pokemon_type; // pokemon type
            damage = 30;
            num_hits++; //increase succesful hit increment
            cout << "Attack Hit!";
        }else{
            damage = 0; 
            cout << "Attack Missed!";
        }
    }

    // Signature Attack
    if (attack_used == 3 && num_hits > 4){
        attack_type = pokemon_type; // if available
        damage = 70;
        num_hits = 0; // reset counter
    }
    if (attack_used == 3 && num_hits < 5){
        cin.clear(); // if signature unavailable for use
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Signature is not ready. Try Again: ";
    }
    // Invalid input
    else{
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
}


int Attack::set_numHits(int num_hits){
    this -> num_hits;
};

int Attack::get_numHits(){
    return num_hits;
}
