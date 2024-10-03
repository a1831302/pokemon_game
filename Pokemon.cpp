#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"

using namespace std;

// strengths: Fire = 1, Water = 2, Ground = 3, Grass = 4, Normal = 5, Electric = 6, Psychic = 7, Fairy = 8, Fighting = 9

// constructor
Pokemon::Pokemon(int new_PokemonID) {
    // Initialize strengths and weaknesses arrays with zeros
    fill(begin(strengths), end(strengths), 0);
    fill(begin(weaknesses), end(weaknesses), 0);
    
    switch(new_PokemonID) {
        case 1:
            name = "Squirtle";
            HP = 200;
            attack = "Water Gun";
            sig_attack = "Hydro Pump";
            strengths[0] = 1; // Fire
            strengths[1] = 0; // None
            strengths[2] = 0; //None
            stringStrengths = "Fire";
            weaknesses[0] = 6; // Electric
            weaknesses[1] = 4; // Grass
            stringWeaknesses = "Electric, Grass";
            break;
        case 2:
            name = "Bulbasaur";
            HP = 200;
            attack = "Vine Whip";
            sig_attack = "Solar Beam";
            strengths[0] = 2; // Water
            strengths[1] = 3; // Ground
            strengths[2] = 0; // None
            stringStrengths = "Water, Ground";
            weaknesses[0] = 1; // Fire
            weaknesses[1] = 0; // None
            stringWeaknesses = "Fire";
            break;
        case 3:
            name = "Charmander";
            HP = 200;
            attack = "Ember";
            sig_attack = "Flamethrower";
            strengths[0] = 4; // Grass
            strengths[1] = 0; // None
            strengths[2] = 0; // None
            stringStrengths = "Grass";
            weaknesses[0] = 3; // Ground
            weaknesses[1] = 2; // Water
            stringWeaknesses = "Ground, Water";
            break;
        case 4:
            name = "Pikachu";
            HP = 200;
            attack = "Thunder Shock";
            sig_attack = "Thunder";
            strengths[0] = 2; // Water
            strengths[1] = 0; // None
            strengths[2] = 0; // None
            stringStrengths = "Water";
            weaknesses[0] = 3; // Ground
            weaknesses[1] = 0; // None
            stringWeaknesses = "Ground";
            break;
        case 5:
            name = "Machop";
            HP = 400;
            attack = "Karate Chop";
            sig_attack = "Seismic Toss";
            strengths[0] = 5; // Normal
            strengths[1] = 0; // None
            strengths[2] = 0; // None
            stringStrengths = "Normal";
            weaknesses[0] = 0; // None
            weaknesses[1] = 0; // None
            stringWeaknesses = "Psychic, Fairy";
            break;
        case 6:
            name = "Rattata";
            HP = 400;
            attack = "Tail Whip";
            sig_attack = "Super Fang";
            stringStrengths = "No Strengths";
            strengths[0] = 0; // None
            strengths[1] = 0; // None
            strengths[2] = 0; // None
            weaknesses[0] = 9; // Fighting
            weaknesses[1] = 0; // None
            stringWeaknesses = "Fighting";
            break;
        case 7:
            name = "Sandshrew";
            HP = 220;
            attack = "Sand Attack";
            sig_attack = "Fury Swipes";
            strengths[0] = 6; // Electric
            strengths[1] = 1; // Fire
            strengths[2] = 0; // None
            stringStrengths = "Electric, Fire";
            weaknesses[0] = 2; // Water
            weaknesses[1] = 4; // Grass
            stringWeaknesses = "Water, Grass";
            break;   
        case 8:  
            name = "Dragonite";
            HP = 1000;
            attack = "Slam";
            sig_attack = "Dragon Rage";
            strengths[0] = 4; // Grass
            strengths[1] = 1; // Fire
            strengths[2] = 2; // Water
            stringStrengths = "Grass, Fire, Water";
            weaknesses[0] = 0; // None
            weaknesses[1] = 0; // None
            stringWeaknesses = "Psychic, Fairy";
            break; 
        default:
            name = "";
            HP = 0;
            attack = "";
            sig_attack = "";
            stringStrengths = "";
            stringWeaknesses = "";
            break;
    }
}

// default constructor
Pokemon::Pokemon() {
    name = "No Name";
    HP = 0;
    attack = "No Attack";
    sig_attack = "No Signature Attack";
    fill(begin(strengths), end(strengths), 0);
    stringStrengths = "No Strengths";
    fill(begin(weaknesses), end(weaknesses), 0);
    stringWeaknesses = "No Weaknesses";
}

// Get the Pokemon's name
string Pokemon::get_Pokemon_name() {
    return name;
}

// Set the Pokemon's HP
void Pokemon::set_Pokemon_HP(int new_HP) {
    HP = new_HP;
}

// Get the Pokemon's HP
int Pokemon::get_Pokemon_HP() {
    return HP;
}

// Print Pokemon info
void Pokemon::print_Pokemon_info(int PokemonID) {
    cout << "Name: " << name << "\n";
    cout << "HP: " << HP << "\n";
    cout << "TypeMove: " << attack << "\n";
    cout << "SignatureMove: " << sig_attack << "\n";
    cout << "Strengths: " << stringStrengths << "\n";
    cout << "Weaknesses: " << stringWeaknesses << "\n";
}
