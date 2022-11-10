#include "StringReverser.h"

string StringReverser::getOriginalString() {
    return originalString;
}

string StringReverser::reverseFromTheEnd() {
    // First expression
    string reversedString = "";
    for (int i = 0; i < originalString.size(); ++i) {
        // Reverse the string by extracting each character of the string from the end to the beginning
        reversedString += originalString[originalString.size()-1-i];
    }

    return reversedString;
}

void StringReverser::reverseBySwap(std::string &str) {
    // Second expression
    // Swap the first and the last character of the string, the second and second to the last character, and so on
    for (int i = 0; i < str.size()/2; ++i) {
        swap(str[i], str[str.size()-1-i]);
    }
}

void StringReverser::reverseUsingList() {
    // Prepending each character of a string to a list starting from the beginning will reverse the string
    for (int i = 0; i < originalString.size(); ++i) {
        listOfChars.push_front(originalString[i]);
    }
}

void StringReverser::printString() {
    // Print each character in the list and printed character altogether will look like a string
    for (char c : listOfChars) {
        cout << c;
    }
    cout << endl;
}