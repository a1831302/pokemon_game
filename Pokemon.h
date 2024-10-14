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
        int strengths[3]; // maximum of 3 strengths
        string stringStrengths;
        int weaknesses[2]; // maximum of 2 weaknesses
        string stringWeaknesses; // for printing out
        int type;
        int num_hits;
        
        
        Pokemon();
        Pokemon(int new_PokemonID);

        int get_num_hits();
        void inc_num_hits(int x);
        void set_num_hits(int y);

        void print_Pokemon_info(int PokemonID);

        string getTypeName(int type);
        
        int get_Pokemon_HP();
        void set_Pokemon_HP(int new_HP);

        int* getStrengths();
        int* getWeaknesses();
        int getPokemonType();

        void HP_drain(int damage);

        virtual void set_name();

};

#endif
