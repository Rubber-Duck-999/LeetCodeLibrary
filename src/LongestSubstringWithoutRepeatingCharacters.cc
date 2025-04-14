#include <LongestSubstringWithoutRepeatingCharacters.h>

// Create a hashmap of the characters
// Loop through string char
// Check whether duplicates exist in map of string char
// If so restart start after last seen index in map + 1
// Add to map char found at which index
// Reupdate count if less than current - start

int LongestSubstringWithoutRepeatingCharacters::Calculate(std::string s) {
    std::unordered_map<char, int> map;
    int start = 0;
    int count = 0;
    for(int index = 0; index < static_cast<int>(s.size()); index++) {
        if (map.count(s[index])) {
            int current = map[s[index]] + 1;
            if (current > start) {
                start = current;
            }
        }
        map[s[index]] = index;
        int current_len = index - start + 1;
        if (current_len > count) {
            count = current_len;
        }
    }
    return count;
}
