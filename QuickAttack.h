#ifndef QUICKATTACK_H
#define QUICKATTACK_H

#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Attack.h"

//Quick attack class child class of Attack
class QuickAttack : public Attack{
public:
    //constructor
    QuickAttack();
    QuickAttack(int chance);
    


};

#endif
