#include "ValidAnagram.h"

// First check they even match length
// Create a map for lower case characters
// Loop through string and then assign higher value if found for s
// In p loop reduce if found 
// This means only values of 0 will be left if an anagram if not the others will be -1 or 1

bool ValidAnagram::Calculate(std::string s, std::string p) {
    if (s.length() != p.length()) return false;

    std::unordered_map<char, int> map;
    for (char s_letter : s) {
        map[s_letter]++;
    }

    for (char p_letter : p) {
        map[p_letter]--;
    }

    for (auto& pair : map) {
        if (pair.second != 0) {
            return false;
        }
    }
    return true;
}