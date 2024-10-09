#include <iostream>
#include <fstream>  // for file handling
#include "Enemy.h"
#include "Pokemon.h"

using namespace std;

int main() {
    string filename = "score.txt";  // Name of the file to write to
    ofstream file;

    // Open the file in append mode
    file.open(filename, ios::app);

    // Check if the file was opened successfully
    if (!file) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    // Write to the file (appending content)
    file << "You have now lost!!\n";
    file << "You scored" << num_enemies() << "\n";

    // Close the file
    file.close();

    return 0;
}
