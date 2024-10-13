#include <iostream>
#include <string>
#include <random> 
#include "Enemy.h"
#include "Pokemon.h"
#include "Attack.h"

using namespace std;


// Default Constructor with randomized PokemonID
Enemy::Enemy() : Pokemon() {
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


//constructor with pokemon argument
Enemy::Enemy(Pokemon enemy_Pok) {
    enemy_pokemon = enemy_Pok;
}

// Method to print enemy's Pokemon information
/*
void Enemy::print_enemy_info(enemy_Pokemon) {
    cout << "Enemy Pokemon: " << enemy_Pokemon.name << endl;
    cout << "HP: " << enemy_Pokemon.HP << endl;
    //cout << "Attack: " << enemy_Pokemon.attack << endl;
    cout << "Signature Move: " << enemy_Pokemon.sig_attack << endl;
    cout << "Type: " << enemy_Pokemon.getTypeName() << endl;
}
*/
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
int Enemy::get_enemy_ID() {
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 8);

    // Generate a random number
    int enemyID = dist(rng);

    return enemyID; // Generate random PokemonID
}

void Enemy::set_pokemon(Pokemon new_enemy_pokemon){enemy_pokemon = new_enemy_pokemon;}

// used to get the pokemon the Enemy has
Pokemon Enemy::get_pokemon(){
    return enemy_pokemon;
}

//  enemy implementation of the Battler classes pure virtual function
void Enemy::set_name(Pokemon pok){
    enemy_choice = 4;
    cout << "Which Enemy do you want to verse first? Seb has an extra 20 HP for his first pokemon, and Sachin has an extra 40. " << endl;
    cout << "1 - Kevin (easy)" << endl;
    cout << "2 - Seb (medium)" << endl;
    cout << "3 - Sachin (hard)" << endl;
    
    while (enemy_choice != 1 && enemy_choice != 2 && enemy_choice != 3) {
    cin >> enemy_choice;
    // sets the enemy name to the chosen name
    if(enemy_choice == 1){
        name = "Kevin";
    }
    else if (enemy_choice == 2){
        name = "Seb";
        HP = HP + 20;
    }
    else if (enemy_choice == 3){
        name = "Sachin";
        HP = 40;
    }
    else if (enemy_choice == 0) {
        break;
    }
    else {
        cout << "Error - please pick 1, 2 or 3: ";
    }
}
//check if enemy choice is 0 in main file, and can exit game then
}


