#include <iostream>
#include <random>   // Required for random number generation
#include "Random.h"

Random::Random() {
};

int Random::rand(int min, int max) {
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);

    // Generate a random number
    int random = dist(rng);

    return random;
}



//other random number generator function

/*
int Random::rand(int offset, int range) {
    //rand number with offset and range
    //range of 10 = 0 - 9
    //thus, offset = 1, range = 10 -> 1-10
    
    int random =  offset + rand() % range;

    return random;
}
*/








