#include <iostream>
#include "Pokemon.h"
#include "Attack.h"

using namespace std;

int main() {
    Pokemon p(1); 

    cout << "Testing with Pokémon: " << p.get_Pokemon_name() << "\n";
    p.print_Pokemon_info(1);
    
    // Create an Attack object
    Attack h;

    // Test Quick Attack (attack_used = 1)
    cout << "\nPerforming Quick Attack (Attack type 1): \n";
    h = Attack(1);  // Using attack type 1
    cout << "Damage dealt: " << h.damage << "\n";
    cout << "Number of successful hits: " << h.get_numHits() << "\n";

    // Test Type Attack (attack_used = 2)
    cout << "\nPerforming Type Attack (Attack type 2): \n";
    h = Attack(2);  // Using attack type 2
    cout << "Damage dealt: " << h.damage << "\n";
    cout << "Number of successful hits: " << h.get_numHits() << "\n";

    // Simulate several attacks to build up hits
    for (int i = 0; i < 5; ++i) {
        cout << "\nPerforming attack #" << i + 1 << ": \n";
        h = Attack(1);  // Keep using attack type 2
        cout << "Damage dealt: " << h.damage << "\n";
        cout << "Number of successful hits: " << h.get_numHits() << "\n";
    }

    // Test Signature Attack (attack_used = 3)
    cout << "\nAttempting Signature Attack (Attack type 3): \n";
    h = Attack(3);  // Using attack type 3
    cout << "Damage dealt: " << h.damage << "\n";
    cout << "Number of successful hits (should reset): " << h.get_numHits() << "\n";

    return 0;
}
