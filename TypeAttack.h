#ifndef TYPEATTACK_H
#define TYPEATTACK_H

#include <iostream>
#include <string>

#include "Pokemon.h"
#include "Attack.h"

//Type attack class child class of Attack
class TypeAttack : public Attack{
public:
    //constructor
    TypeAttack();
    TypeAttack(int chance, Pokemon pok);
    


};

#endif
