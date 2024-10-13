
#ifndef MULTIPLIER_H
#define MULTIPLIER_H

#include <iostream>
#include <string>

#include "Pokemon.h"


class Multiplier : public Pokemon{
public:
    double multiplier;
    
    Multiplier() ;
    
    //Multiplier(Pokemon pok1, Pokemon pok2);

    double find_mult(Pokemon pok1, Pokemon pok2);
};

#endif
