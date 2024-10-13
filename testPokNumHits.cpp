#include<iostream>
#include "Pokemon.h"
#include<string>

int main() {

    Pokemon pokem = Pokemon(1);

    cout << pokem.get_num_hits() << endl;

    pokem.set_num_hits(pokem.get_num_hits());

    cout << pokem.get_num_hits() << endl;



    return 0;
}
