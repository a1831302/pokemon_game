
#ifndef MULTIPLIER_H
#define MULTIPLIER_H

#include <iostream>
#include <string>

#include "Pokemon.h"


class Multiplier : public Pokemon{
public:
    int multiplier;
    
    Multiplier() ;
    
    Multiplier(Pokemon pok1, Pokemon pok2, int pokemon_type);

};

#endif
