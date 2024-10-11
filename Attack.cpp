
#include <iostream>
#include <string>
#include <algorithm> // for std::fill
#include "Pokemon.h"
#include "Attack.h"
#include <random>

using namespace std;

Attack::Attack() {
    //empty default constructor
}

static int Attack::success_rate() {
    // Initialize a random number engine
    std::random_device dev;  // Seed generator (for true random seed)
    std::mt19937 rng(dev()); // Mersenne Twister random number engine

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);

    // Generate a random number
    int chance = dist(rng);
    return chance;
}








