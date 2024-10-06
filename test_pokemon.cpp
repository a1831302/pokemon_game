#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Pokemon.h"

int main() {
    // Initialize a Pokemon object with ID 1 (Squirtle) from the file
    Pokemon squirtle(1);

    // Print Squirtle's info
    squirtle.print_Pokemon_info(1);
    return 0;
}
