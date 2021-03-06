/* Lab_C focuses on if-else statements and logical operators. Program prompts
 * user to input two primary colors and in turn, outputs the secondary color
 * produced.
 */

// Krupa Dhruva

// Program Output:
/*
OUTPUT #1:
In lowercase, enter first primary color (red, blue, or yellow): red
In lowercase, enter second primary color (red, blue, or yellow): blue

When you mix red and blue, you get purple

OUTPUT #2:
In lowercase, enter first primary color (red, blue, or yellow): red
In lowercase, enter second primary color (red, blue, or yellow): red

When you mix red and red, you get red

OUTPUT #3:
In lowercase, enter first primary color (red, blue, or yellow): pink

Invalid entry. Please try again.
 */

#include <iostream> // for C++ input & output
using namespace std;

int main() {
    string color1;
    string color2;

    cout << "In lowercase, enter first primary color (red, blue, or yellow): ";
    cin >> color1;

    // validating entry
    if (color1 != "red" && color1 != "blue" && color1 != "yellow") {
        cout << endl << "Invalid entry. Please try again." << endl;
        return -1;
    }

    cout << "In lowercase, enter second primary color (red, blue, or yellow): ";
    cin >> color2;

    // validating entry
    if (color2 != "red" && color2 != "blue" && color2 != "yellow") {
        cout << endl << "Invalid entry. Please try again." << endl;
        return -1;
    }

    cout << endl;

    // logic for color wheel
    if ((color1 == "blue" && color2 == "red") ||
        (color1 == "red" && color2 == "blue")) {
        cout << "When you mix " << color1 << " and " << color2
             << ", you get purple" << endl;
    } else if ((color1 == "blue" && color2 == "yellow") ||
               (color1 == "yellow" && color2 == "blue")) {
        cout << "When you mix " << color1 << " and " << color2
             << ", you get green" << endl;
    } else if ((color1 == "red" && color2 == "yellow") ||
               (color1 == "yellow" && color2 == "red")) {
        cout << "When you mix " << color1 << " and " << color2
             << ", you get orange" << endl;
    } else if (color1 == color2 && color1 == "blue") {
        cout << "When you mix " << color1 << " and " << color2
             << ", you get blue" << endl;
    } else if (color1 == color2 && color1 == "red") {
        cout << "When you mix " << color1 << " and " << color2
             << ", you get red" << endl;
    } else if (color1 == color2 && color1 == "yellow") {
        cout << "When you mix " << color1 << " and " << color2
             << ", you get yellow" << endl;
    }

    return 0;
}
