#include <iostream>
#include <fstream>  // for file handling
#include "Enemy.h"
#include "Pokemon.h"

using namespace std;

int FileScore(int num_wins) {
    string filename = "score.txt";  // Name of the file to write to
    ofstream file;

    // Open the file in append mode
    file.open(filename);

    // Check if the file was opened successfully
    if (!file) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }
    
    int prev_best;
    if (prev_best <= num_wins){
        prev_best = num_wins;
    }

    // Write to the file (appending content)
    file << "You have now lost!!\n";
    file << "You scored: " << num_wins << "\n";
    file << "Your previous best is: "<< prev_best << "\n";

    // Close the file
    file.close();

    return 0;
}
