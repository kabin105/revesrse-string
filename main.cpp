#include "StringReverser.h"
#include <iostream>

using namespace std;

int main() {
    // Prompt user to enter a string to reverse
    cout << "Enter a string that you want to reverse: " << endl;
    string inputString;
    cin >> inputString;

    StringReverser* reverser = new StringReverser(inputString);
    cout << endl << "The string you entered: " << reverser->getOriginalString() << endl;
    cout << "The reversed string: " << reverser->reverseFromTheEnd() << endl;

    cout << endl << "Goodbye." << endl;

    delete reverser; // Delete dynamically allocated memory

    return 0;
}


