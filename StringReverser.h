#ifndef REVESRSE_STRING_STRINGREVERSER_H
#define REVESRSE_STRING_STRINGREVERSER_H

#include <iostream>
#include <list>

using namespace std;

class StringReverser{
public:
    StringReverser(string inputString) : originalString(inputString) {}
    string reverseFromTheEnd();
    void reverseBySwap(string& str);
    void reverseUsingList();
    void printString(); // Prints the list of characters as if it's a string

    // Getter
    string getOriginalString();

private:
    string originalString;
    list<char> listOfChars; // This list of chars as a whole will work as a string
};

#endif //REVESRSE_STRING_STRINGREVERSER_H
