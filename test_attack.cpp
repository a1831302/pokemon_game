#include <iostream>
#include "Pokemon.h"
#include "QuickAttack.h"
#include "TypeAttack.h"
#include "SigAttack.h"
#include "Attack.h"

using namespace std;

int main() {
    // Create a Pokémon
    Pokemon pikachu;
    pikachu.name = "Pikachu";
    pikachu.pokemon_type = 6;  // Electric type for example
    pikachu.HP = 200;

    // Print initial Pokémon info
    cout << "Starting Test for " << pikachu.name << " (HP: " << pikachu.HP << ")" << endl;

    // Test Quick Attack
    cout << "\n---Testing Quick Attack---" << endl;
    QuickAttack quickAtk(pikachu.success_rate());  // Generates a random chance
    pikachu.HP -= quickAtk.damage;  // Deduct damage from Pokémon's HP if hit was successful
    cout << pikachu.name << "'s HP after Quick Attack: " << pikachu.HP << endl;

    // Test Type Attack
    cout << "\n---Testing Type Attack---" << endl;
    TypeAttack typeAtk(pikachu.success_rate());  // Generates a random chance
    pikachu.HP -= typeAtk.damage;  // Deduct damage from Pokémon's HP if hit was successful
    cout << pikachu.name << "'s HP after Type Attack: " << pikachu.HP << endl;

    // Simulate multiple hits to enable Signature Attack
    cout << "\nSimulating hits for Signature Attack..." << endl;
    pikachu.num_hits = 5;  // Simulate that 5 successful hits have occurred

    // Test Signature Attack
    cout << "\n---Testing Signature Attack---" << endl;
    SigAttack sigAtk(pikachu.num_hits);  // Signature Attack should be ready after 5 hits
    pikachu.HP -= sigAtk.damage;  // Deduct damage from Pokémon's HP if signature attack hits
    cout << pikachu.name << "'s HP after Signature Attack: " << pikachu.HP << endl;

    // Print final Pokémon info
    cout << "\nFinal HP of " << pikachu.name << ": " << pikachu.HP << endl;

    return 0;
}
