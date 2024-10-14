#include <iostream>
#include <string>

// Platform specific includes
#ifdef _WIN32
#else
#include <termios.h>
#include <unistd.h>
#include <stdio.h>

using namespace std;

// Function to simulate getch()
int _getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
#endif

// Menu options
std::string mainMenu[] = {"Exit", "Battle", "Heal"};
std::string battleMenu[] = {"Signature", "Type", "Quick Attack"};
std::string healMenu[] = {"Fentanyl", "Codeine", "Panadol"};

int mainMenuSize = 3;
int battleMenuSize = 3;
int healMenuSize = 3;

// Function to display a menu and get the selected option
int displayMenu(std::string menu[], int menuSize) {
    int highlight = 0;
    int choice = 0;
    char c;

    // Print menu
    while (1) {
        system("clear || cls"); // Clear console screen (cross-platform)
        
        for (int i = 0; i < menuSize; i++) {
            if (i == highlight)
                cout << "> "; // Highlight current selection
            else
                cout << "  ";
            
            cout << menu[i] << endl;
        }

        c = _getch();  // Get user input
        
        if (c == 27) {  // Check for arrow keys (esc sequence starts with 27)
            _getch();    
            switch (_getch()) {
                case 'A':
                    highlight = (highlight == 0) ? menuSize - 1 : highlight - 1;
                    break;
                case 'B':
                    highlight = (highlight == menuSize - 1) ? 0 : highlight + 1;
                    break;
            }
        } else if (c == 10 || c == 13) { // Enter key
            choice = highlight;
            return choice;
        }
    }
}

int main() {
    while (1) {
        int mainChoice = displayMenu(mainMenu, mainMenuSize);
        
        if (mainMenu[mainChoice] == "Exit") {
            system("clear || cls");
            cout << "You chose to Run. Exiting..." << endl;
            break;
        } else if (mainMenu[mainChoice] == "Battle") {
            int battleChoice = displayMenu(battleMenu, battleMenuSize);
            system("clear || cls");
            cout << "You selected: " << battleMenu[battleChoice] << endl;
            cout << "Press any key to continue..." << endl;
            _getch();  // Wait for user input
        } else if (mainMenu[mainChoice] == "Heal") {
            int healChoice = displayMenu(healMenu, healMenuSize);
            system("clear || cls");
            cout << "You selected: " << healMenu[healChoice] << endl;
            cout << "Press any key to continue..." << endl;
            _getch();  // Wait for user input
        }
    }
    return 0;
}
