//commenting for game file
//player1 = player_user_pok, user_robot = player_pok

#include "Pokemon.h"
#include "Player.h"
#include "Enemy.h"
#include "Attack.h"
#include "QuickAttack.h"
#include "SigAttack.h"
#include "TypeAttack.h"
#include "medicine.h"
#include "Multiplier.h"


#include <limits>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int start_game(){
    
    //game intro
    cout << "Welcome to Pokemon Battles!"<<"\n"
    << "The aim of the game is to defeat as many pokemons as you can." << "\n"
    << "Your chosen Pokemon will have  HP, strengths and weaknesses." << "\n" 
    << "HP is how much health your pokemon still has. There are 3 types of attack: quick attack deals 10 damage with 80% success rate, \n";
    << "type attack deals 30 damage with 50% success rate, and the signature attack deals 70 damage, but requires you to have had 5 successful attacks. \n";
    << "As each Pokemon has a type, the damage to the opponent will be doubled if it is a strength, and halved if it is a weakness. \n";
    << "There also medicines avalible to increase your HP, and can be utilsied instead of an attack. \n";


    //number of enemies beaten
    int num_wins = 0;

    //display first three available Pokemon stats, and get user to select from them and store in chosen_ID
    //initialise first 3 pokemon to print their info. -this has been tested, and it works.
    Pokemon Pok1 = Pokemon(1);
    Pokemon Pok2 = Pokemon(2);
    Pokemon Pok3 = Pokemon(3);
    Pok1.print_Pokemon_info(1);
    Pok2.print_Pokemon_info(2);
    Pok3.print_Pokemon_info(3);

    

    

    //initiate chosen pokemon and assign it to player
    Pokemon player_Pok = Pokemon(chosen_ID);
    Player player_user_Pok = Player(player_Pok);


    //Initialise medicines
    player_user_Pok.set_medicine_bag(3);
    player_user_Pok.add_medicine(1, potion("Panadol", 25));
    player_user_Pok.add_medicine(2, potion("Codeine", 50));
    player_user_Pok.add_medicine(3, potion("Morphine", 75));


    cout << "It's time for your first battle!" << endl;

    while(player_Pok.get_Pokemon_HP() > 0) { 
        //rng to get random pokemon ID Pok_ID
        Pok_ID = rand(1,8);
        
        //initiate pokemon and assign it to enemy. 
        Pokemon enemy_Pok = Pokemon(Pok_ID);
        Enemy enemy_user_Pok = Enemy(enemy_Pok);

        
        while (enemy_Pok.get_Pokemon_HP() > 0){
        cout << "Currently, your HP is: " << player_Pok.get_Pokemon_HP() << "\n The Enemy's HP is: " << enemy_Pok.get_Pokemon_HP() << endl;
        //ask user if they would like to use a medicine or attack
        //either 1 or 2 or do it like highlighted text etc
        int choice = 0;;

        while(choice != 1 && choice != 2){
        if(player_user_Pok.get_medicine_count() == 0){
            cout << "You currently have no medicines in your inventory, so you must attack." << endl;
            choice = 1;
        } 
        else {
            cout << "Would you like to attack(1) or use a medicine(2)?:" << endl;
            cin >> choice;
        }
        if(choice != 1 && choice != 2){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
        }
        }

    //choose medicine
        if (choice == 2){
            int medicine_choice = 0;
            cout << "You have " << player_user_Pok.get_medicine_count() << " medicines. Enter a number to choose which medicine you would like to use:" << endl;
            for (int i = 0; i <= (player_user_Pok.get_medicine_count() - 1); i++){
                cout << (i + 1) << " - " << (*(player_user_Pok.get_medicine_bag_pointer() + i)).getMedicineName() << endl;
            }
            while(medicine_choice <=0 || medicine_choice > player_user_Pok.get_medicine_count()){
                cin >> medicine_choice;
                if(medicine_choice <=0 || medicine_choice > player_user_Pok.get_medicine_count()){
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input.  Try again: "<<endl;
                }
            }
            medicine selected_medicine = *(player_user_Pok.get_medicine_bag_pointer() + (medicine_choice - 1));
            int current_hp = player_Pok.get_Pokemon_HP();
            int hp_gained = selected_medicine.getMedicineHealing();

            player_Pok.set_Pokemon_HP(current_hp + hp_gained);
            cout << "Your Pokemon gained " << hp_gained << "HP. Your total HP is now " << player_Pok.get_Pokemon_HP() << "." << endl;

            player_user_Pok.remove_medicine(medicine_choice);

            choice =0;
        }

        

    //chosen attack
    if (choice == 1) {
        int attack_choice = 0;   
        cout << "Pick an attack: " << endl;
        cout << "Quick attack does 10 damage (80% success rate), Type attack does 30 damage (50% success rate), and can be multiplied. " << endl;
        cout << "Signature attack does 70 damage, but requires five successful previous attacks. Currently, you have " << player_Pok.get_num_Hits() << "previous attacks. " << endl;
        cout << "Quick Attack(1), Type Attack(2), Signature Attack(3)" << endl;

        //again work out redraw functiona d highlighted text instead of 1,2,3
        while(attack_choice !=1 && attack_choice != 2 && attack_choice !=3){
            cout<< "Select move:";
            cin >> attack_choice;
            cout << endl;
            if(attack_choice !=1 && attack_choice != 2 && attack_choice !=3){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input.  Try again: ";
            }
        }        

        //use attack function success rate to find chance for future attack
        Attack rateAttack = Attack();
        chance = rateAttack.success_rate();

        //quick attack
        if (attack_choice = 1) {
            QuickAttack quickattack1 = QuickAttack(chance);

            enemy_Pok.HP_drain(quickattack1.damage);
        }
        
        //type attack
        if (attack_choice = 2) {
            TypeAttack typeattack1 = TypeAttack(chance);

            //multiplier function
                
            enemy_Pok.HP_drain(typeattack1.damage);

        }
        
        //sig attack
        if (attack_choice = 3) {
            SigAttack sigattack1 = SigAttack(player_Pok.get_num_hits());

            //multiplier function
                
            enemy_Pok.HP_drain(sigattack1.damage);

        }

        
        } //end attack section


        //enemy attack
        //random number generator between 1 and 2
        int enemy_attack_choice = rand(1,2);
        //Attack rateAttack2 = Attack();
        chance2 = rateAttack2.success_rate();

        //quick attack
        if (enemy_atttack_choice = 1) {
            QuickAttack quickattack2 = QuickAttack(chance2);
            player_Pok.HP_drain(quickattack2.damage);
            cout << "The enemy attacked you with " << quickattack2.damage << " damage. Your HP is now " << player_Pok.get_Pokemon_HP() << endl;
        }

        //type attack
        if (enemy_atttack_choice = 2) {
            TypeAttack typeattack2 = TypeAttack(chance2);
            player_Pok.HP_drain(typeattack2.damage);
            cout << "The enemy attacked you with " << typeattack2.damage << " damage. Your HP is now " << player_Pok.get_Pokemon_HP() << endl;
        }

            
        //if player has lost
        if (player_Pok.get_Pokemon_HP() <= 0) {
        break;
        }

        if (enemy_Pok.get_Pokemon_HP() <=0) {
            num_wins++;
        }
        }//end enemy while loop
        
    } //end player while loop



//CHECK THAT YOU CAN REDFINE OBJECT E.G. POKEMONS ADN ATTACK EVEYR TIME YOU LOOP WITH SAME CONSTRUCTOR.





    //player has lost as exited while loop

    cout << "You lose! You beat " << num_wins << "enemies. " << endl;

    //save number of enemies beaten to text file

    FileScore(num_wins);
    

return 0;
}
        

















