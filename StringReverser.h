#ifndef REVESRSE_STRING_STRINGREVERSER_H
#define REVESRSE_STRING_STRINGREVERSER_H

#include <string>
using namespace std;

class StringReverser{
public:
    StringReverser(string inputString) : originalString(inputString) {}
    string reverseFromTheEnd();
    string getOriginalString();

private:
    string originalString;
};

#endif //REVESRSE_STRING_STRINGREVERSER_H
