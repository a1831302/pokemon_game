#include <iostream>
#include "Pokemon.h"

using namespace std;

int main() {
    int pokemonID;

    // Prompt the user to input a Pokemon ID
    cout << "Enter the Pokemon ID: ";
    cin >> pokemonID;

    // Create a Pokemon object using the ID
    Pokemon myPokemon(pokemonID);

    // Display the Pokémon's information
    myPokemon.print_Pokemon_info(pokemonID);

    // Individual access
    cout << "Name: " << myPokemon.name << endl;
    cout << "HP: " << myPokemon.get_Pokemon_HP() << endl;
    cout << "Attack: " << myPokemon.attack << endl;
    cout << "Signature Move: " << myPokemon.sig_attack << endl;
    cout << "Strengths: " << myPokemon.stringStrengths << endl;
    cout << "Weaknesses: " << myPokemon.stringWeaknesses << endl;

    // Example of modifying and displaying updated HP
    cout << "\nLet's change the Pokemon's HP. Enter a new HP value: ";
    int newHP;
    cin >> newHP;
    myPokemon.set_Pokemon_HP(newHP);

    cout << "Updated HP: " << myPokemon.get_Pokemon_HP() << endl;

    return 0;
}
