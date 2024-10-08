#include <iostream>
#include <string>
#include <random> 
#include "Enemy.h"
#include "Pokemon.h"
#include "Attack.h"

using namespace std;

// default constructor
Enemy::Enemy(){
    enemy_pokemon = Pokemon();
}

// constructor
Enemy::Enemy(Pokemon new_enemy_pokemon){
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 8);

    // Generate a random number
    int choice = dist(rng);

    Pokemon new_enemy_pokemon(choice);

    //actually not too sure if this is needed. 
    enemy_name = new_enemy_pokemon.name;
    enemy_HP = new_enemy_pokemon.get_Pokemon_HP();
    enemy_type = new_enemy_pokemon.type;
    enemy_attack = new_enemy_pokemon.attack;
    enemy_sig = new_enemy_pokemon.sig_attack; 
    enemy_strengths[0] = new_enemy_pokemon.strengths[0];
    enemy_strengths[1] = new_enemy_pokemon.strengths[1];
    enemy_strengths[2] = new_enemy_pokemon.strengths[2];
    enemy_weakness[0] = new_enemy_pokemon.weaknesses[0];
    enemy_weakness[1] = new_enemy_pokemon.weaknesses[0];
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


int Enemy::enemy_move(){
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 2);

    // Generate a random number
    int move = dist(rng);
    switch(move){
        case 1:
        case 2:
        default:
    };
}