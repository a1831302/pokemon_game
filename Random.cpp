#include <iostream>
#include <random>   // Required for random number generation
#include "Random.h"

Random::Random() {
};

int Random::rand(int min, int max) {
    // rng function
    std::random_device dev;  
    std::mt19937 rng(dev()); 
    //min and max for range
    std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);

    int random = dist(rng);

    return random;
}







