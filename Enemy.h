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
        int enemy_type;
        int enemy_strength[3];
        int enemy_weaknessess[2];
        
        Enemy();   // default constructor
        Enemy(Pokemon enemy_Pok);   // constructor

        //void print_enemy_info(enemy_Pokemon);

        void set_pokemon(Pokemon new_enemy_Pokemon);   // used to set the pokemon the opponent has
        
        Pokemon get_pokemon();   // used to get the pokemon the opponent has
        void set_name(Pokemon enemy_Pokemon);     //enemy implementation of Pokemon virtual naming function

        //void print_enemy_info();   // Prints enemy's Pokemon info (name, HP, etc.)
        //void print_enemy_strengths_weaknesses();   // Prints strengths and weaknesses

        // Getter methods
        //int get_enemy_HP();
        //int get_enemy_type();
        //string get_enemy_name();

        //int get_enemy_ID() ;
};

#endif //ENEMY_H
