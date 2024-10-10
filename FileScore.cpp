#include <iostream>
#include <fstream>  // for file handling
#include "Enemy.h"
#include "Pokemon.h"

using namespace std;

void FileScore(int currentScore) {
    //read section

    ifstream scoreIn("score.txt");

    if (!scoreIn) {
        cerr << "Error: Unable to open file " << endl;
        return;
    }
    string line;
    int previousBest;

    if (scoreIn.is_open()) {
        // skip first line 
        getline(scoreIn, line);
        
        //skip line 2        
        getline(scoreIn, line);

        // read val in prev best
        getline(scoreIn, line);
        size_t pos = line.find(": ");
        previousBest = stoi(line.substr(pos + 2));

        scoreIn.close();
    }

    //write section

    ofstream scoreOut("score.txt");
    //update
    if (currentScore > previousBest) {
        previousBest = currentScore;
    }    

    //check if the file was opened
    if (!scoreOut) {
        cerr << "Error: Unable to open file " << endl;
        return;
    }
    
    
    if (scoreOut.is_open()) {
        scoreOut << "You have now lost!!" << endl;
        scoreOut << "You scored: " << currentScore << endl;
        scoreOut << "Your previous best is: " << previousBest << endl;
        scoreOut.close();
    }

}
