#include <NeedleInAHaystack.h>

// Check lengths of inputs first
// Loop through haystack to see whether the length of needle exists whilst looping through haystack
// Loop again with new starting point
// When it constantly matches exit

int NeedleInAHaystack::Calculate(std::string haystack, std::string needle) {
    if (needle.length() == 0) return -1;
    if (needle.length() > haystack.length()) return -1;
    
    for (int index = 0; index <= static_cast<int>(haystack.length()); index++) {
        bool match = true;
        for (int j = 0; j < static_cast<int>(needle.length()); j++) {
            if (haystack[index + j] != needle[j]) {
                match = false;
                break;
            }
        }
        if (match) return index;
    }
    return -1;
}
