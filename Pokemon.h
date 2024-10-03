#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

using namespace std;

class Pokemon {

    public:
        int PokemonID;
        string name;
        int pokemon_type;
        int HP;
        string attack;
        string sig_attack;
        int strengths[3]; // maximum of 4 strengths
        string stringStrengths;
        int weaknesses[2]; // maximum of 3 weaknesses
        string stringWeaknesses; // for printing out
        
        Pokemon();
        Pokemon(int new_PokemonID);

        void print_Pokemon_info(int PokemonID);
        void set_Pokemon_HP(int new_HP);
        int get_Pokemon_HP();
        string get_Pokemon_name();
};

#endif
