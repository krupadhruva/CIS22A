/* Program generates a random number (in the range 1 through 10) and asks the
 * user to guess what the number is. If the user’s guess is higher than the
 * random number, the program displays “Too high, try again.” If the user’s
 * guess is lower than the random number, the program displays “Too low, try
 * again.” The program repeats until the user correctly guesses the random
 * number. Tracks the number of attempts taken.
 */

// Krupa Dhruva

/* Program Output:
 Guess a number between 1 and 10:
1
Too low. Try again.

Guess a number between 1 and 10:
3
Too low. Try again.

Guess a number between 1 and 10:
8
You got it in 3 attempts!
 */

#include <iostream>
using namespace std;

int main() {
    int guess;
    int count = 0;
    const int randNum = (rand() % 10) + 1;

    do {
        cout << "Guess a number between 1 and 10: " << endl;
        cin >> guess;
        ++count;

        if (guess < randNum) {
            cout << "Too low. Try again." << endl;
            cout << endl;
        } else if (guess > randNum) {
            cout << "Too high. Try again." << endl;
            cout << endl;
        }
    } while (guess != randNum);

    cout << "You got it in " << count << " attempts!" << endl;
}
