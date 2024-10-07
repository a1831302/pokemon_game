#include <iostream>
#include <string>
#include "medicine.h"

using namespace std;

medicine::medicine(string name, int healing): name(name), healing(healing){};
medicine::medicine(){medicine("no name", 0);}; 
string medicine::getMedicineName(){return name;};
int medicine::getMedicineHealing(){return healing;};
