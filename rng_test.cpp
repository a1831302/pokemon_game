#include <iostream>
#include <random>   // Required for random number generation

int main() {
    // Initialize a random number engine
    std::random_device dev;  
    std::mt19937 rng(dev()); 

    // Define the distribution range (e.g., between 1 and 100)
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);

    // Generate a random number
    int chance = dist(rng);

    std::cout << "Random Number: " << chance << std::endl;

    return 0;
}
