#include "StringReverser.h"

string StringReverser::reverseFromTheEnd() {
    string reversedString = "";
    for (int i = 0; i < originalString.size(); ++i) {
        // Reverse the string by extracting each character of the string from the end to the beginning
        reversedString += originalString[originalString.size()-1-i];
    }

    return reversedString;
}

void StringReverser::reverseBySwap(string &str) {
    // Swap the first and the last character of the string, the second and second to the last character, and so on
    for (int i = 0; i < str.size()/2; ++i) {
        swap(str[i], str[str.size()-1-i]);
    }
}

void StringReverser::reverseUsingList() {
    listOfChars.clear(); // Ensure the list does not contain any character from previously
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

void StringReverser::reverseRecursive(string &str, int startIdx, int endIdx) {
    // Using recursion, swap the leftmost and rightmost chars
    swap(str[startIdx], str[endIdx]);
    startIdx += 1; // Leftmost index goes to the right by one
    endIdx -= 1; // Rightmost index goes to the left by one
    // Recurse and swap characters until the indices meets in the middle
    if (startIdx < endIdx) {
        reverseRecursive(str, startIdx, endIdx);
    }
}

string StringReverser::reverseString() {
    string strToReverse = originalString;
    int numSwaps = 0; // This works as index for the string
    // While until number of swaps is less than half of the length of the string
    while (numSwaps < originalString.size()/2) {
        // Swap characters
        char temp = strToReverse[numSwaps];
        strToReverse[numSwaps] = strToReverse[strToReverse.size()-1-numSwaps];
        strToReverse[strToReverse.size()-1-numSwaps] = temp;
        numSwaps++;
    }

    return strToReverse;
}