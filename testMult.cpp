#include "Pokemon.h"
#include "Multiplier.h"

#include <iostream>
#include <string>

int main() {

    for (int i = 2; i < 6; i++) {
    Pokemon pokemon1 = Pokemon(1);
    Pokemon pokemon2 = Pokemon(i);

    Multiplier mult = Multiplier();

    cout << mult.find_mult(pokemon1, pokemon2) << endl;
    }

    /*output should be:
    0.5, 2, 0.5, 1
    */
    return 0;
}
