// Name: Krupa Dhruva on 6/22/21.

/*
Write complete C++ code to display numbers larger than n in an array. In your
code, write a function that accepts three arguments: an array, the size of the
array, and a number n . Assume that the array contains integers. Call the
function from main in your code. The function should display all of the numbers
in the array that are greater than the number n . You could use a named constant
for the value of n or collect it from the user. In main declare an array using
an initialization list.

Sample output is: Numbers greater than 4 in the array
are: 5, 17, 10, 12
 */

#include <iostream>

using namespace std;
void printNumbersGreaterThan(int numbers[], int size, int cmp) {
    bool first = true;
    cout << "Numbers greater than " << cmp << " in the array are:";

    for (int ii = 0; ii < size; ++ii) {
        if (numbers[ii] > cmp) {
            if (first) {
                first = false;
                cout << " ";
            } else {
                cout << ", ";
            }
            cout << numbers[ii];
        }
    }

    cout << endl;
}

int main_1() {
    int numbers[] = {5, 17, 10, 12};
    printNumbersGreaterThan(numbers, 4, 4);
    return 0;
}

const string &yesNoResponse() {
    static string responses[] = {"Yes, of course!",
                                 "Without a doubt, yes.",
                                 "You can count on it.",
                                 "For sure!",
                                 "Ask me later.",
                                 "I'm not sure.",
                                 "I can't tell you right now.",
                                 "I'll tell you afterwards.",
                                 "No way!",
                                 "I don't think so.",
                                 "Without a doubt, no.",
                                 "The answer is clearly, NO."};

    return responses[rand() % 12];
}

int main_2() {
    // Seed the random value using time as seed
    srand(time(0));

    cout << "Enter a yes or no question: ";
    string question;
    cin >> question;
    cout << yesNoResponse() << endl;

    return 0;
}

#include <fstream>
int main_3() {
    ofstream output("numbers.txt");
    if (!output.is_open()) {
        cerr << "failed to open \"numbers.txt\" for write" << endl;
        return -1;
    }

    for (int num = 1; num <= 10; ++num) {
        output << num * num << endl;
    }
    output.close();
    return 0;
}
