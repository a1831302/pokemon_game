#ifndef MEDICINE_H
#define MEDICINE_H

#include <iostream>
#include <string>

using namespace std;

class medicine {
    protected:
    string name; //hi, low, med
    int healing; //amount
    public:
    medicine(string name, int healing);
    medicine();
    string getMedicineName();
    int getMedicineHealing();
};

#endif
