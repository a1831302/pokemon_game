
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

int Attack::success_rate() {
    //rng
    std::random_device dev;  
    std::mt19937 rng(dev()); //mrsenne twister random number engine

    //define the distribution range
    std::uniform_int_distribution<std::mt19937::result_type> dist(1, 100);

    int chance = dist(rng);
    return chance;
}








