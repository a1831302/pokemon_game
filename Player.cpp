#include <iostream>
#include <string>
#include "Player.h"
#include "Pokemon.h"
using namespace std;

// default constructor
Player::Player(){
    player_pokemon = Pokemon();
    num_hits = 0;
};

// constructor
Player::Player(Pokemon new_pokemon){
    player_pokemon = new_pokemon;
    num_hits = 0;
}

//used to get numbr of hits so far
int Player::get_num_hits(){
    return num_hits;
}

// used to get the pokemon the player has
Pokemon Player::get_pokemon(){
    return player_pokemon;

}

// used to set the pokemon the player has
void Player::set_pokemon(Pokemon new_pokemon){
    player_pokemon = new_pokemon;
    return;
}

// creates an empty medicine_bag of a certain length
void Player::set_medicine_bag(int num_medicine){
    medicine_bag = new medicine[num_medicine];
    medicine_count = num_medicine;
    return;
}

// adds a medicine to the medicine bag
void Player::add_medicine(int medicine_number, medicine medicine1){
    medicine_bag[medicine_number - 1] = medicine1;
    return;
}

// When a medicine is used, this function can be called to remove the medicine from the array. It shifts all elements to the left and updates
// the medicine count (length of the array)
void Player::remove_medicine(int medicine_number){

    if (medicine_number < medicine_count){
        for (int i = (medicine_number - 1); i < (medicine_count - 1); i++){
            medicine_bag[i] = medicine_bag[i + 1];   // shifts all element 1 to the left
        }
    }
    medicine_count--;   // de-increments medicine_count
    return;
}

// returns medicine_bag
medicine* Player::get_medicine_bag_pointer(){return medicine_bag;}

// returns medicine_count
int Player::get_medicine_count(){return medicine_count;}

// player implementation.
//void Player::set_name(){
  //  cout << "What's your name?" << endl;   // asks the player for their name
    //cin >> name;
    //cout << "Thanks! \n";
//}
