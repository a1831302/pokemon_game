#ifndef RANDOM_H
#define RANDOM_H
#include <iostream>
#include <string>


using namespace std;

// Random class for static rng
class Random : public Pokemon {

  public:
    //constructor
    Random();

    static int rand(int min, int max);

};

#endif
