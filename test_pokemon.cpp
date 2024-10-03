#include <iostream>
#include "Pokemon.h"

using namespace std;

int main() {
    // Create Pokemon using IDs 
    Pokemon p(1);  // ID no. for pokemon

    // Print their initial information
    p.print_Pokemon_info(1);


    // Update Squirtle's HP to simulate getting hit
    p.set_Pokemon_HP(50);
    p.get_Pokemon_HP();

    p.print_Pokemon_info(1);

    return 0;
}

//compile: g++ test_pokemon.cpp Pokemon.cpp -o test_pokemon