#include <iostream>
#include <string>
#include <random> 
#include "Enemy.h"
#include "Pokemon.h"
#include "Attack.h"

using namespace std;


// Constructor with randomized PokemonID
Enemy::Enemy() : Pokemon(get_random_PokemonID()) {
    enemy_name = this->name;  // Use inherited 'name' from Pokemon
    enemy_HP = this->HP;      // Use inherited 'HP' from Pokemon
    enemy_type = this->pokemon_type;  // Use inherited 'pokemon_type' from Pokemon
    enemy_attack = this->attack;
    enemy_sig = this->sig_attack;
    enemy_strength[0] = this->strengths[0];
    enemy_strength[1] = this->strengths[1];
    enemy_strength[2] = this->strengths[2];
    enemy_weaknessess[0] = this->weaknesses[0];
    enemy_weaknessess[1] = this->weaknesses[1];
}

// Method to print enemy's Pokemon information
void Enemy::print_enemy_info() {
    cout << "Enemy Pokemon: " << enemy_name << endl;
    cout << "HP: " << enemy_HP << endl;
    cout << "Attack: " << enemy_attack << endl;
    cout << "Signature Move: " << enemy_sig << endl;
    cout << "Type: " << getTypeName(enemy_type) << endl;
}

// Method to print strengths and weaknesses
void Enemy::print_enemy_strengths_weaknesses() {
    cout << "Strengths: " << this->stringStrengths << endl;
    cout << "Weaknesses: " << this->stringWeaknesses << endl;
}

// Getter for enemy HP
int Enemy::get_enemy_HP() {
    return enemy_HP;
}

// Getter for enemy type
int Enemy::get_enemy_type() {
    return enemy_type;
}

// Getter for enemy name
string Enemy::get_enemy_name() {
    return enemy_name;
}

// Function to generate random PokemonID
int Enemy::get_random_PokemonID() {
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 8);

    // Generate a random number
    int choice = dist(rng);

    return choice; // Generate random PokemonID
}

void Enemy::set_pokemon(Pokemon new_enemy_pokemon){enemy_pokemon = new_enemy_pokemon;}

// used to get the pokemon the Enemy has
Pokemon Enemy::get_pokemon(){
    return enemy_pokemon;
}

//  enemy implementation of the Battler classes pure virtual function
void Enemy::set_name(){
    bool valid_choice = 0; //to show error if player doesn't pick valid choice
    cout << "Which AI do you want to verse first?" << endl;
    cout << "1 - Sachin" << endl;
    cout << "2 - Kevin" << endl;
    cout << "3 - Seb" << endl;
    while (valid_choice = 0) {
    int choice;
    cin >> choice;
    
    // sets the enemy name to the chosen AI name
    if(choice == 1){
        name = "Sachin";
        valid_choice = 1;
    }
    else if (choice == 2){
        name = "Kevin";
        valid_choice = 1;
    }
    else if (choice == 3){
        name = "Seb";
        valid_choice = 1;
    }
    else {
        cout << "Error - please pick 1, 2 or 3." << endl;
    }
}
}


