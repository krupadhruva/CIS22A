// Krupa Dhruva

/*
Choose rock, paper, scissors, or type anything else to exit: rock
You lose
Choose rock, paper, scissors, or type anything else to exit: paper
Tie
Choose rock, paper, scissors, or type anything else to exit: scissors
Tie
Choose rock, paper, scissors, or type anything else to exit: rock
You win!
Choose rock, paper, scissors, or type anything else to exit: quit
*/

#include <iostream>

using namespace std;

int compSelection() { return rand() % 3 + 1; }

int userSelection() {
    cout << "Choose rock, paper, scissors, or type anything else to exit: ";
    string userInput;
    cin >> userInput;

    if (strcasecmp(userInput.c_str(), "rock") == 0) {
        return 1;
    } else if (strcasecmp(userInput.c_str(), "paper") == 0) {
        return 2;
    } else if (strcasecmp(userInput.c_str(), "scissors") == 0) {
        return 3;
    }

    return -1;
}

int userVsComp(int user, int comp) {
    // Using approach similar to truth table to cover the
    // different possible cases
    static const int gameRuleTable[3][3] = {{0, -1, 1}, {1, 0, -1}, {-1, 1, 0}};
    return gameRuleTable[user - 1][comp - 1];
}

int main() {
    int userEntry;
    while ((userEntry = userSelection()) != -1) {
        switch (userVsComp(userEntry, compSelection())) {
        case 1:
            cout << "You win!" << endl;
            break;
        case -1:
            cout << "You lose" << endl;
            break;
        default:
            cout << "Tie" << endl;
            break;
        }
    }
}
