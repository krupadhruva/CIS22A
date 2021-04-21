/* Lab_B uses cin to take input from users via the console. Program prompts
 * users to input their name, liking, and favorite subject. Two word entries
 * should be separated by an '_' and not a ' '
 */

// Krupa Dhruva

// Program Output:
/*
What is your name (one_word)? Krupa
What is something you like (one_word)? dancing
What is your favorite subject (one_word)? APES

Hi, I am Krupa and I like dancing. My favorite subject is APES.
*/

#include <iostream> // for C++ input & output
using namespace std;

int main() {
    string name;
    string liking;
    string favSubj;

    cout << "What is your name (one_word)? ";
    cin >> name;

    cout << "What is something you like (one_word)? ";
    cin >> liking;

    cout << "What is your favorite subject (one_word)? ";
    cin >> favSubj;

    cout << endl
         << "Hi, I am " << name << " and I like " << liking
         << ". My favorite subject is " << favSubj << "." << endl;

    return 0;
}
