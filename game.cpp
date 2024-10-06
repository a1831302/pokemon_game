//commenting for game file
#include "game.h"
#include "Pokemon.h"
#include "Player.h"
#include "Enemy.h"

#include <limits>
#include <iostream>
#include <string>

using namespace std;

int game::start_game(){
    
    //game intro
    cout <<"Welcome to Pokemon Battles!"<<"\n"
    <<"The aim of the game is to defeat as many pokemons as you can."<<"\n"
    <<"Your chosen Pokemon will have  HP, strengths and weaknesses." << "\n" 
    <<"HP is how much health your pokemon still has. There are 3 types of attack: quick attack deals 10 damage, \n";
    << "type attack deals 20 damage, and th signature attack deals 70 damage, but requires you to have had 5 successful attacks." << endl;
    << "As each Pokemon has a type, the damage to the opponent will be doubled if it is a strength, and halved if it is a weakness. \n";

    //initiate first pokemon and assign it to opponent. 
    





