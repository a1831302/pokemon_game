#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>
#include <string>

#include "Pokemon.h"

//Attack Pokemon class child class of Pokemon
class Attack : public Pokemon{
protected:
     //constructor - not used
    Attack(); 

public:
    //variables that will be inherited to each specific attack class
    int damage;
    int attack_type;
    //bool hit_success;
    
    int chance;

    //returns value (chance) between 1 and 100 to use for quick and type attacks
    static int success_rate();


    //int set_numHits(int num_hits);
    //int get_numHits();


};

#endif
