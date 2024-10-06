#include <iostream>
#include "Pokemon.h"
#include "QuickAttack.h"
#include "TypeAttack.h"
#include "SigAttack.h"
#include "Attack.h"

using namespace std;

int main() {
    // Create Pokémon objects
    Pokemon squirtle(1);  // Squirtle
    Pokemon charmander(3);  // Charmander
    Pokemon pikachu(4);  // Pikachu

    // Print out their initial information
    cout << "\n--- Testing Squirtle ---" << endl;
    squirtle.print_Pokemon_info(1);

    cout << "\n--- Testing Charmander ---" << endl;
    charmander.print_Pokemon_info(3);

    cout << "\n--- Testing Pikachu ---" << endl;
    pikachu.print_Pokemon_info(4);

    // Quick Attack on Squirtle
    cout << "\n--- Squirtle Quick Attack Simulation ---" << endl;
    QuickAttack quickAtk(squirtle.success_rate());  // Generates a random chance
    squirtle.set_Pokemon_HP(squirtle.get_Pokemon_HP() - quickAtk.damage);  // Deduct HP if hit
    cout << squirtle.get_Pokemon_name() << "'s HP after Quick Attack: " << squirtle.get_Pokemon_HP() << endl;

    // Type Attack on Charmander
    cout << "\n--- Charmander Type Attack Simulation ---" << endl;
    TypeAttack typeAtk(charmander.success_rate());
    charmander.set_Pokemon_HP(charmander.get_Pokemon_HP() - typeAtk.damage);  // Deduct HP if hit
    cout << charmander.get_Pokemon_name() << "'s HP after Type Attack: " << charmander.get_Pokemon_HP() << endl;

    // Signature Attack Simulation for Pikachu
    cout << "\n--- Pikachu Signature Attack Simulation ---" << endl;
    pikachu.num_hits = 5;  // Simulate 5 successful hits
    SigAttack sigAtk(pikachu.num_hits);
    pikachu.set_Pokemon_HP(pikachu.get_Pokemon_HP() - sigAtk.damage);  // Deduct HP if hit
    cout << pikachu.get_Pokemon_name() << "'s HP after Signature Attack: " << pikachu.get_Pokemon_HP() << endl;

    return 0;
}
