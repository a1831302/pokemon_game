#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>
#include <string>

#include "Pokemon.h"

//Attack Robot class child class of Robot
class Attack : public Pokemon{
public:

    int sig_damage;
    int tackle_damage;
    int type_damage;
    int quick_attack;

    int num_hits;

    bool hit_success;

    //constructor
    Attack();
    Attack(int attack_used);

    bool get_success();

    int get_attack();

    int get_attackType();

    int set_numHits(int num_hits);
    int get_numHits();

    //HP drain function
    void HP_drain(int attack_stat);
};

#endif