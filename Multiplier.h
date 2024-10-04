
#ifndef MULTIPLIER_H
#define MULTIPLIER_H

#include <iostream>
#include <string>

#include "Pokemon.h"

//Attack Robot class child class of Pokemon
class Attack : public Pokemon{
public:

    int attack_used;
    int damage;
    int attack_type;

    int num_hits;

    //constructor
    Attack();
    Attack(int attack_used);

    int set_numHits(int num_hits);
    int get_numHits();

    //HP drain function
    int HP_drain(int hp_deduct);
};

#endif
