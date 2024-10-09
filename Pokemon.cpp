#include <iostream>
#include <string>
#include <fstream>   // for file handling
#include <sstream>   // for string stream
#include <algorithm> // for std::fill
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon(int new_PokemonID) {
    ifstream file("pokemon.txt");

    if (!file) {
        cerr << "Error opening file." << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        istringstream ss(line);

        int id, HP, type;
        string name, attack, sig_attack;
        int strengths[3], weaknesses[2];

        // Extract data from the line
        ss >> id >> name >> HP >> type >> attack >> sig_attack 
           >> strengths[0] >> strengths[1] >> strengths[2] 
           >> weaknesses[0] >> weaknesses[1];

        // If the ID matches the one requested, initialize the object
        if (id == new_PokemonID) {
            this->name = name;
            this->HP = HP;
            this->pokemon_type = type;
            this->attack = attack;
            this->sig_attack = sig_attack;
            
            // Fill strengths array and convert to string
            fill(begin(this->strengths), end(this->strengths), 0);
            for (int i = 0; i < 3; ++i) {
                this->strengths[i] = strengths[i];
            }
            this->stringStrengths = getTypeName(strengths[0]);
            if (strengths[1] != 0) this->stringStrengths += ", " + getTypeName(strengths[1]);
            if (strengths[2] != 0) this->stringStrengths += ", " + getTypeName(strengths[2]);

            // Fill weaknesses array and convert to string
            fill(begin(this->weaknesses), end(this->weaknesses), 0);
            for (int i = 0; i < 2; ++i) {
                this->weaknesses[i] = weaknesses[i];
            }
            this->stringWeaknesses = getTypeName(weaknesses[0]);
            if (weaknesses[1] != 0) this->stringWeaknesses += ", " + getTypeName(weaknesses[1]);

            break; // Once the Pokémon is found, exit the loop
        }
    }

    if (file.eof() && name.empty()) {
        cerr << "Pokemon ID not found in file." << endl;
    }

    file.close();
}

// Function to convert type integer to string for strengths and weaknesses
string Pokemon::getTypeName(int type) {
    switch(type) {
        case 1: return "Fire";
        case 2: return "Water";
        case 3: return "Ground";
        case 4: return "Grass";
        case 5: return "Normal";
        case 6: return "Electric";
        case 7: return "Psychic";
        case 8: return "Fairy";
        case 9: return "Fighting";
        case 10: return "Dragon";
        default: return "None";
    }
}

int Pokemon::get_num_hits() {
    return num_hits;
}

int Pokemon::get_Pokemon_HP() {
    return HP;
}

void Pokemon::set_Pokemon_HP(int new_HP) {
    HP = new_HP;
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

//get function for strengths array
int* Pokemon::getStrengths() {
    return strengths;
}

//getfunction for weaknesses array
int* Pokemon::getWeaknesses() {
    return weaknesses;
}

int Pokemon::getPokemonType() {
    return pokemon_type;
}

void Pokemon::HP_drain(int damage) {
    HP = HP - damage;
    if (HP < 0) {
    HP = 0;
    }
}
