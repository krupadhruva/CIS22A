/*
 * Name: Krupa Dhruva
 *
 * Program Output:
    Q1: Calculates half of input number
    Enter a number: 2.8
    Half of 2.8 is 1.4

    Q2: Outputs the corresponding ASCII value of a letter
    Enter letter (lowercase or uppercase): b
    The corresponding ASCII code for 'b' is 98

    Q3: Determines if integer is even or odd
    Enter an integer: 4
    4 is even.
 */

#include <iostream>
using namespace std;

/*
 * Midterms Q1:
 * Write C++ code for a program that asks the user to input a
 * number. Then it should output half of that number. Note if the number is 5,
 * it should output 2.5
 */
void question1() {
    double number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Half of " << number << " is " << number / 2.0 << endl;
}

/*
 * Midterms Q2:
 * Write C++ code for a program that asks the user to input a
 * letter (upper or lowercase). Then the program should output the corresponding
 * ASCII code for the letter.
 */
void question2() {
    char letter;

    cout << "Enter letter (lowercase or uppercase): ";
    cin >> letter;

    cout << "The corresponding ASCII code for '" << letter << "' is "
         << (int)letter << endl;
}

/*
 * Midterms Q3:
 * Write complete C++ program that defines and calls a function
 * isEvenOrOdd which takes one parameter and prints even or odd depending on
 * whether the number in the parameter is even or odd. Prompt the user to enter
 * a number and call the function passing the number as an argument. Zero can
 * be classified as even.
 */
void isEvenOrOdd(int);

void question3() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    isEvenOrOdd(number);
}

void isEvenOrOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
}

int main() {
    cout << "Q1: Calculates half of input number" << endl;
    question1();

    cout << endl
         << "Q2: Outputs the corresponding ASCII value of a letter" << endl;
    question2();

    cout << endl << "Q3: Determines if integer is even or odd" << endl;
    question3();

    return 0;
}