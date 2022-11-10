#ifndef REVESRSE_STRING_STRINGREVERSER_H
#define REVESRSE_STRING_STRINGREVERSER_H

#include <iostream>
#include <list>

using namespace std;

class StringReverser{
public:
    StringReverser(string inputString) : originalString(inputString) {}
    string reverseFromTheEnd(); // 1st expression
    void reverseBySwap(string& str); // 2nd expression
    void reverseUsingList(); // 3rd expression
    void printString(); // Prints the list of characters as if it's a string
    void reverseRecursive(string& str, int startIdx, int endIdx); // 4th expression
    string reverseString(); // 5th expression

    // Getter
    string getOriginalString();

private:
    string originalString;
    list<char> listOfChars; // This list of chars as a whole will work as a string
};

#endif //REVESRSE_STRING_STRINGREVERSER_H
