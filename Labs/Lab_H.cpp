/*
 * Name: Krupa Dhruva
 *
 * Program to read numbers from a file named 'numbers.txt' into
 * an array and find lowest, highest, average and count of numbers
 * read. Prints the output to console and to a file named 'output.txt'
 */

/*
The smallest number in the array is 1
The largest number in the array is 7
The total of the numbers in the array is 7
The average of the numbers in the array is 4
 */

#include <fstream>
#include <iostream>

int smallest(int[], int);
int largest(int[], int);
double average(int[], int);

using namespace std;

int smallest(int numbers[], int count) {
    int ret = numbers[0];
    for (int ii = 1; ii < count; ++ii) {
        ret = min(ret, numbers[ii]);
    }

    return ret;
}

int largest(int numbers[], int count) {
    int ret = numbers[0];
    for (int ii = 1; ii < count; ++ii) {
        ret = max(ret, numbers[ii]);
    }

    return ret;
}

double average(int numbers[], int count) {
    double total = numbers[0];
    for (int ii = 1; ii < count; ++ii) {
        total += numbers[ii];
    }

    return total / count;
}

int main() {
    const int MAX_NUMBERS = 10;
    int numbers[MAX_NUMBERS];
    int count = 0;

    ifstream input("numbers.txt");

    // Read file till end of file or array capacity
    while (!input.eof() && count < MAX_NUMBERS) {
        input >> numbers[count++];
    }
    input.close();

    // If there are no numbers or file is missing, return error
    if (count == 0) {
        return -1;
    }

    ofstream output("output.txt");

    int lowest = smallest(numbers, count);
    cout << "The smallest number in the array is " << lowest << endl;
    output << "The smallest number in the array is " << lowest << endl;

    int highest = largest(numbers, count);
    cout << "The largest number in the array is " << highest << endl;
    output << "The largest number in the array is " << highest << endl;

    cout << "The total of the numbers in the array is " << count << endl;
    output << "The total of the numbers in the array is " << count << endl;

    double avg = average(numbers, count);
    cout << "The average of the numbers in the array is " << avg << endl;
    output << "The average of the numbers in the array is " << avg << endl;

    output.close();
    return 0;
}