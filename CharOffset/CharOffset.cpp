// Brett Wuebben
// CIS 1202 - 101
// July 20, 2022

#include <iostream>

using namespace std;

char character(char start, int offset);

int main()
{
    std::cout << "Hello World!\n";
}

char character(char start, int offset) {
    if (!isalpha(start)) {
        throw invalidCharacterException();
    }
}


