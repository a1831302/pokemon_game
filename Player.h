#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include "medicine.h"
#include "Pokemon.h"


using namespace std;

// Player class. Child class of Pokemon
class Player : public Pokemon {
    protected:
        Pokemon player_pokemon;  // the player is a pokemon
        medicine* medicine_bag;   // the player has a medicine bag filled with different medicines they can use
        int medicine_count;   // the number of medicines in the potion bag
        
    public:
        Player();   // default constructor
        Player(Pokemon new_pokemon);   // constructor
        Pokemon get_pokemon();   // used to get the pokemon the player has
        void set_pokemon(Pokemon new_pokemon);    // used to set the pokemon the player has

        

        void set_medicine_bag(int num_medicines);   // creates an empty potion_bag of a certain length
        void add_medicine(int medicine_number, medicine medicine1);   // adds a medicine to the potion bag
        void remove_medicine(int medicine_number);   // removes a medicine from the potion bag
        medicine* get_medicine_bag_pointer();   // returns medicine_bag
        int get_medicine_count();   // returns medicine count
        
        //void set_name();   // player implementation of Battlers pure virtual function
};

#endif //PLAYER_H
