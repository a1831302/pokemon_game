#include <iostream>
#include <random>   // Required for random number generation

int rand(int min, int max) {
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);

    // Generate a random number
    int random = dist(rng);

    return random;
}