#ifndef POKEMON.H
#define POKEMON.H


#include <iostream>
#include <string>


using namespace std;

class Pokemon {

    public:
        int PokemonID;
        string type;
        string name;
        int HP;
        string attack;
        string sig_attack;
        int[2] strengths;
        int[2] = weaknesses;
        
        Pokemon();
        Pokemon(int new_PokemonID);

        get_Pokemon_info(int PokemonID);



};

#endif