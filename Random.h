#ifndef RANDOM_H
#define RANDOM_H
#include <iostream>
#include <string>
#include "Pokemon.h"


using namespace std;

// Random class for static rng
class Random : public Pokemon {
  private:
    //constructor - prvitae as never creating Random object, only used for static function
    Random();

  public:
    

    static int rand(int min, int max);

};

#endif
