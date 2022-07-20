// Brett Wuebben
// CIS 1202 - 101
// July 20, 2022

#include <iostream>

using namespace std;

char character(char start, int offset);

int main()
{
    int i = 1;
    cout << "Character offsets!\n\n";
    try {
        cout << "Trying test " << i << "!\n";
        i++;
        cout << character('a', 1) << endl;

    }
    catch (exception e) {
        cout << e.what() << endl;
    }

    try {
        cout << "Trying test " << i << "!\n";
        i++;
        cout << character('a', -1) << endl;

    }
    catch (exception e) {
        cout << e.what() << endl;
    }

    try {
        cout << "Trying test " << i << "!\n";
        i++;
        cout << character('Z', -1) << endl;
    }
    catch (exception e) {
        cout << e.what() << endl;
    }

    try {
        cout << "Trying test " << i << "!\n";
        i++;
        cout << character('?', 5) << endl;
    }
    catch (exception e) {
        cout << e.what() << endl;
    }
}

char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalid_argument("Must use a character for the starting character!");
    }
    char target = start + offset;
    if (!isalpha(target))
        throw out_of_range("Offset must be within alphabet range!");
    return target;
}


