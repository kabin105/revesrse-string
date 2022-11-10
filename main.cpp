#include "StringReverser.h"
#include <iostream>

using namespace std;

void reverseBySwap(string& str) {
    // Second expression
    // Swap the first and the last character of the string, the second and second to the last character, and so on
    for (int i = 0; i < str.size()/2; ++i) {
        swap(str[i], str[str.size()-1-i]);
    }
}

int main() {
    string inputForSwapMethod;
    cout << "Enter a string you want to reverse using \"reverseBySwap\" method: " <<endl;
    cin >> inputForSwapMethod;
    reverseBySwap(inputForSwapMethod); // Pass by reference.
    cout << "Reversed string  after the \"reverseBySwap\" method: " << inputForSwapMethod << endl << endl;


    // Prompt user to enter a string to reverse
    cout << "Enter a string that you want to reverse: " << endl;
    string inputStr;
    cin >> inputStr;

    StringReverser* reverser = new StringReverser(inputStr);
    cout << endl << "The string you entered: " << reverser->getOriginalString() << endl; // Display the string that user entered
    cout << "The reversed string using the first expression: " << reverser->reverseFromTheEnd() << endl; // Display the reversed string using the first expression

    cout << "The second expression was \"reverseBySwap\" method that previously saw." << endl;

    reverser->reverseUsingList(); // This reverses the string and store it as a list with each element in the list representing each character in the reversed string
    cout << "The reversed string using the third expression: ";
    reverser->printString(); // Display the reversed string using the third expression
    cout << endl;

    cout << endl << "Goodbye." << endl;

    delete reverser; // Delete dynamically allocated memory to prevent memory leak

    return 0;
}


