#include <iostream>
#include <string>
#include "Enemy.h"
using namespace std;

// default constructor
Enemy::Enemy(){
    opponent_pokemon = Pokemon();
}

// constructor
Enemy::Enemy(Pokemon new_enemy_pokemon){
    
    Enemy_pokemon = new_enemy_pokemon;
}

void Enemy::set_pokemon(Pokemon new_enemy_pokemon){enemy_pokemon = new_enemy_pokemon;}

// used to get the pokemon the Enemy has
Robot Enemy::get_pokemon(){
    return opp_pokemon;
}

//  opponents implementation of the Battler classes pure virtual function
void Enemy::set_name(){
    bool valid_choice = 0; //to show error if player doesn't pick valid choice
    cout << "Which AI do you want to verse first?" << endl;
    cout << "1 - Sachin" << endl;
    cout << "2 - Kevin" << endl;
    cout << "3 - Seb" << endl;
    while (valid_choice = 0) {
    int choice;
    cin >> choice;
    
    // sets the opponents name to the chosen AI name
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
