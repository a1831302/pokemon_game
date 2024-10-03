#ifndef POKEMON.H
#define POKEMON.H

#include <iostream>
#include <string>

using namespace std;

class Pokemon {

    public:
        int PokemonID;
        string name;
        int HP;
        string attack;
        string sig_attack;
        int[3] strengths;
        string stringStrengths;
        int[2] = weaknesses;
        string stringWeaknesses; //for printing out
        
        Pokemon();
        Pokemon(int new_PokemonID);

        get_Pokemon_info(int PokemonID);



};

#endif