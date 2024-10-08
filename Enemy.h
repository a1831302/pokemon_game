#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>
#include <string>

#include "Pokemon.h"

using namespace std;

// Enemy class. Child class of Pokemon
class Enemy : public Pokemon {
    private:
        Pokemon enemy_pokemon;  // opponent has its own pokemon
    public:
        string enemy_name;
        int enemy_HP;
        string enemy_attack;
        string enemy_sig; 
        int enemy_strengths[3];
        int enemy_weakness[2];
        
        Enemy();   // default constructor
        Enemy(Pokemon new_enemy_Pokemon);   // constructor
        void set_pokemon(Pokemon new_enemy_Pokemon);   // used to set the pokemon the opponent has
        
        Pokemon get_pokemon();   // used to get the pokemon the opponent has
        void set_name();   //  opponents implementation of the Battler classes pure virtual function
        
};

#endif //ENEMY_H
