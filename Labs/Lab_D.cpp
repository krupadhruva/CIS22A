/* Program prompts user to input an int from 1 - 12 representing the month
 * number and program prompts user to enter a year. Using the given information,
 * program outputs number of days in the entered month while taking into account
 * if year entered is a leap year or not.
 */

// Krupa Dhruva

// Program Output:
/*
Enter a month (1-12): 13
Invalid month '13' entered.
Would you like to try again (y|n)? y
Enter a month (1-12): 2
Enter a year: 2100

This month has 28
Would you like to try again (y|n)? y
Enter a month (1-12): 2
Enter a year: 2004

This month has 29
Would you like to try again (y|n)? y
Enter a month (1-12): 0
Invalid month '0' entered.
Would you like to try again (y|n)? n
 */

#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    return ((year % 100 == 0 && year % 400 == 0) ||
            (year % 100 != 0 && year % 4 == 0));
}

char checkYesNo() {
    char response;

    cout << "Would you like to try again (y|n)? ";
    cin >> response;

    return response == 'Y' ? 'y' : response;
}

int main() {
    do {
        cout << "Enter a month (1-12): ";
        int month;
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month '" << month << "' entered." << endl;
            continue;
        }

        cout << "Enter a year: ";
        int year;
        cin >> year;

        int days;
        if (month == 2 && isLeapYear(year)) {
            days = 29;
        } else if (month == 2) {
            days = 28;
        } else if ((month % 2 != 0 && month < 8) ||
                   (month % 2 == 0 && month > 8)) {
            days = 31;
        } else {
            days = 30;
        }

        cout << endl << "This month has " << days << endl;
    } while ('y' == checkYesNo());
}