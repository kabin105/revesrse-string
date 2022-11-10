#include "StringReverser.h"

string StringReverser::getOriginalString() {
    return originalString;
}

string StringReverser::reverseFromTheEnd() {
    string reversedString = "";
    for (int i = 0; i < originalString.size(); ++i) {
        reversedString += originalString[originalString.size()-1-i];
    }

    return reversedString;
}