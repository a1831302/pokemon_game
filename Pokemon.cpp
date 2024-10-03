#include <iostream>
#include <string>
#include "Pokemon.h"


using namespace std;

// strengths: Fire = 1, Water = 2, Ground = 3, Grass = 4, Normal = 5, Electric = 6, Psychic = 7, Fairy = 8, Fighting = 9


// constructor
Pokemon::Pokemon(int new_PokemonID){
    switch(new_PokemonID) {
        case 1:
            name = "Squirtle";
            HP = 200;
            attack = "Water Gun";
            sig_attack = "Hydro Pump";
            strengths = [1,0,0]; //Fire 
            stringStrengths = "Fire";
            weaknesses = [6,4]; //electric and grass
            stringWeaknesses = "Electric, Grass";
            break;
        case 2:
            name = "Bulbasaur";
            HP = 200;
            attack = "Vine Whip";
            sig_attack = "Solar Beam";
            strengths = [2,3,0]; 
            stringStrengths = "Water, Ground";
            weaknesses = [1,0]; 
            stringWeaknesses = "Fire";
            break;
        case 3:
            name = "Charmander";
            HP = 200;
            attack = "Ember";
            sig_attack = "Flamethrower";
            strengths = [4,0,0]; 
            stringStrengths = "Grass";
            weaknesses = [3,2]; 
            stringWeaknesses = "Ground, Water";
            break;
        case 4:
            name = "Pikachu";
            HP = 200;
            attack = "Thunder Shock";
            sig_attack = "Thunder";
            strengths = [2,0,0]; 
            stringStrengths = "Water";
            weaknesses = [3,0]; 
            stringWeaknesses = "Ground";
            break;
        case 5:
            name = "Machop";
            HP = 400;
            attack = "Karate Chop";
            sig_attack = "Sesimic Toss";
            strengths = [5,0,0]; 
            stringStrengths = "Normal";
            weaknesses = [7,8]; 
            stringWeaknesses = "Psychic, Fairy";
            break;
        case 6:
            name = "Rattata";
            HP = 400;
            attack = "Tail Whip";
            sig_attack = "Super Fang";
            strengths = [0,0,0]; 
            stringStrengths = "No Strengths";
            weaknesses = [9,0]; 
            stringWeaknesses = "Fighting";
            break;
        case 7:
            name = "Sandshrew";
            HP = 220;
            attack = "Sand Attack";
            sig_attack = "Fury Swipes";
            strengths = [6,1,0]; 
            stringStrengths = "Electric, Fire";
            weaknesses = [2,4]; 
            stringWeaknesses = "Water, Grass";
            break;   
        case 8:  
            name = "Dragonite";
            HP = 1000;
            attack = "Slam";
            sig_attack = "Dragon Rage";
            strengths = [4,1,2]; 
            stringStrengths = "Grass, Fire, Water";
            weaknesses = [7,8]; 
            stringWeaknesses = "No Weaknesses";
            break; 
        default:
            name = "No Name";
            HP = 0;
            attack = "No Attack";
            sig_attack = "No Signature Attack";
            strengths = [0,0,0];
            stringStrengths = "No Strengths";
            weaknesses = [0,0];
            stringWeaknesses = "No Weaknesses";
            break;
    }
};

//default constructor
Pokemon::Pokemon(){
    name = "No Name";
    HP = 0;
    attack = "No Attack";
    strengths = [0,0,0];
    stringStrengths = "No Strengths";
    weaknesses = [0,0];
    stringWeaknesses = "No Weaknesses";
};


string Pokemon::get_Pokemon_name(){
    return name;
}

void Pokemon::set_Pokemon_HP(int new_HP){
    HP = new_HP;
    };

int Pokemon::get_Pokemon_HP(){
    return HP;
};



void Pokemon::print_Pokemon_info(int PokemonID) {
    cout << "Name: " << name << "\n";
    cout << "HP: " << HP << "\n";
    cout << "TypeMove: " << attack << "\n";
    cout << "SignatureMove: " << sig_attack << "\n";
    cout << "Strengths: " << stringStrengths << "\n";
    cout << "Weaknesses: " << stringWeaknesses << "\n";

}


