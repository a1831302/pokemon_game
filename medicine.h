#include <iostream>
#include <string>

using namespace std;

class medicine {
    protected:
    string name;
    int healing;
    public:
    medicine(string name, int healing);
    medicine();
    string getMedicineName();
    int getMedicineHealing();
};
