#include "StringReverser.h"

string StringReverser::getOriginalString() {
    return originalString;
}

string StringReverser::reverseFromTheEnd() {
    string reversedString = "";
    for (int i = 0; i < originalString.size(); ++i) {
        // Reverse the string by extracting each character of the string from the end to the beginning
        reversedString += originalString[originalString.size()-1-i];
    }

    return reversedString;
}