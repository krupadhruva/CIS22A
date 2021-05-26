/* Program prints the corresponding character for the inputted
 * ASCII code/value. The function takes a starting value, an
 * ending value, and the number of characters printed per line.
 */

// Krupa Dhruva

/* Program Output:
 !"#$%&'()*+,-./
0123456789:;<=>?
@ABCDEFGHIJKLMNO
PQRSTUVWXYZ[\]^_
`abcdefghijklmno
pqrstuvwxyz{|}~
 */

#include <cctype>
#include <iostream>

using namespace std;

void printChar(int, int, int, bool);

int main() { printChar(0, 127, 16, true); }

void printChar(int startingNum, int endingNum, int lineBreakNum,
               bool skipNonPrintable) {
    for (int ii = startingNum, printCount = 0; ii <= endingNum; ++ii) {
        if (!skipNonPrintable || isprint(ii)) {
            cout << char(ii);
            ++printCount;
        }

        if (printCount > 0 && printCount % lineBreakNum == 0) {
            cout << endl;
        }
    }
}