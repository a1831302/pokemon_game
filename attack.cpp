#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include <random>

using namespace std;

Attack::Attack() : num_hits(0){}

Attack::Attack(int attack_used){

    n = get_numHits();
    // quick attack
    if (attack_used == 1){
        cout<<name<<" used quick attack!";
        if (chance < 80){ //20% chance of missing
            attack_type = 5; // normal type
            damage = 10;
        } 
    }

    //Type attack
    if (attack_used == 2){
        cout<<name<<"used "<< attack <<"! ";
        if (chance < 50){
            attack_type = pokemon_type; // pokemon type
            damage = 30;
        }
    }

    // Signature Attack
    if (attack_used == 3 && n > 4){
        attack_type = pokemon_type; // if available
        damage = 70;
        set_numHits(0); // reset counter
    }
    if (attack_used == 3 && n < 5){
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
    return damage;
}

bool Attack::hit_success(int attack_used){
    // Initialize a random number engine
    std::random_device dev;  // Seed generator (for true random seed)
    std::mt19937 rng(dev()); // Mersenne Twister random number engine

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);

    // Generate a random number
    int chance = dist(rng);
    hit_success = 0;

    if (attack_used == 1 && chance > 20){
        hit_success = 1;
    }
    if (attack_used == 1 && chance < 20){
        hit_success = 0;
    }
    if (attack_used == 2 && chance > 50){
        hit_success = 1;
    }
    if (attack_used == 2 && chance < 50){
        hit_success = 0;
    }
    return hit_success;
}

int Attack::set_numHits(int num_hits){
    this -> num_hits = num_hits;
    return this -> num_hits;
}

int Attack::get_numHits(){
    return num_hits;
}

//int Attack::HP_drain(int damage){}
