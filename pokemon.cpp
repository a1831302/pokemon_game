#include <iostream>
#include <string>
#include "Pokemon.h"


using namespace std;

// strengths: Fire = 1, Water = 2, Ground = 3, Grass = 4, Normal = 5, Electric = 6, Psychic = 7, Fairy = 8, Fighting = 9


// constructor
Pokemon::Pokemon(int new_PokemonID){
    switch(new_PokemonID) {
        case 1:
            name = "Squirtle";
            type = "Water"
            HP = 200;
            attack = "Water Gun";
            sig_attack = "Hydro Pump";
            strengths = [1,0,0]; //Fire 
            weaknesses = [6,4]; //electric and grass
            break;
        case 2:
            name = "Bulbasaur";
            type = "Grass"
            HP = 200;
            attack = "Vine Whip";
            sig_attack = "Solar Beam";
            strengths = [2,3,0]; 
            weaknesses = [1,0]; 
            break;
        case 3:
            name = "Charmander";
            type = "Fire"
            HP = 200;
            attack = "Ember";
            sig_attack = "Flamethrower";
            strengths = [4,0,0]; 
            weaknesses = [3,2]; 
            break;
        case 4:
            name = "Pikachu";
            type = "Electric"
            HP = 200;
            attack = "Thunder Shock";
            sig_attack = "Thunder";
            strengths = [2,0,0]; 
            weaknesses = [3,0]; 
            break;
        case 5:
            name = "Machop";
            type = "Fighting"
            HP = 400;
            attack = "Karate Chop";
            sig_attack = "Sesimic Toss";
            strengths = [5,0,0]; 
            weaknesses = [7,8]; 
            break;
        case 6:
            name = "Rattata";
            type = "Normal"
            HP = 400;
            attack = "Tail Whip";
            sig_attack = "Super Fang";
            strengths = [0,0,0]; 
            weaknesses = [9,0]; 
            break;
        case 7:
            name = "Sandshrew";
            type = "Ground"
            HP = 220;
            attack = "Sand Attack";
            sig_attack = "Fury Swipes";
            strengths = [6,1,0]; 
            weaknesses = [2,4]; 
            break;   
        case 8:  
            name = "Dragonite";
            type = "Dragon"
            HP = 1000;
            attack = "Slam";
            sig_attack = "Dragon Rage";
            strengths = [4,1,2]; 
            weaknesses = [7,8]; 
            break; 
        default:
            name = 
    }
    
    name = new_name;
    HP = new_HP;
    attack = new_attack;
    speed = new_speed;
};
Pokemon::Pokemon(){
    name = "No Name";
    HP = 0;
    attack =0;
    speed =0;
};


string Pokemon::get_Pokemon_name(){
    return name;
}




void Pokemon::HP_drain(int attack_stat){
    HP = HP - attack_stat;
    if(HP < 0){
        HP =0;
    }
}