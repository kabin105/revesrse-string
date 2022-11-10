#include "StringReverser.h"
#include <iostream>

using namespace std;

int main() {
    // Prompt user to enter a string to reverse
    cout << "Enter a string that you want to reverse: " << endl;
    string inputStr;
    cin >> inputStr;

    StringReverser* reverser = new StringReverser(inputStr);
    cout << endl << "The string you entered: " << reverser->getOriginalString() << endl; // Display the string that user entered
    cout << "The reversed string using the first expression: " << reverser->reverseFromTheEnd() << endl; // Display the reversed string using the first expression

    reverser->reverseBySwap(inputStr); // Pass by reference. This will reverse and alter the input string
    cout << "The reversed string using the second expression: " << inputStr << endl;

    reverser->reverseUsingList(); // This reverses the string and store it as a list with each element in the list representing each character in the reversed string
    cout << "The reversed string using the third expression: ";
    reverser->printString(); // Display the reversed string using the third expression
    cout << endl;

    cout << endl << "Goodbye." << endl;

    delete reverser; // Delete dynamically allocated memory to prevent memory leak

    return 0;
}


