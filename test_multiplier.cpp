#include <iostream>
#include "Enemy.h"
#include "Multiplier.h"

using namespace std;

int main() {
    // Create a random enemy with a random PokemonID
    Enemy randomEnemy;

    // Print the enemy's information
    cout << "Enemy Pokemon Details:" << endl;
    randomEnemy.print_enemy_info();
    randomEnemy.print_enemy_strengths_weaknesses();

    // Now calculate the multiplier for this enemy's Pokemon
    // We pass the enemy's type to the Multiplier class
    Multiplier damageMultiplier(randomEnemy.get_enemy_type());

    // Display the multiplier value
    cout << "Damage multiplier based on enemy's type: " << damageMultiplier.multiplier << endl;

    return 0;
}
