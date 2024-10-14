#ifndef SIGATTACK_H
#define SIGATTACK_H

#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Attack.h"

//Signature attack class child class of Attack
class SigAttack : public Attack{
public:
    //constructors
    SigAttack();
    SigAttack(int num_hits, Pokemon pok);
};

#endif
