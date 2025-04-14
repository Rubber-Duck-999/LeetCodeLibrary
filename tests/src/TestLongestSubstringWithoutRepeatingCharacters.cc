#include <gtest/gtest.h>
#include "LongestSubstringWithoutRepeatingCharacters.h"

TEST(LongestSubstringWithoutRepeatingCharactersTest, BasicCases) {
    LongestSubstringWithoutRepeatingCharacters longest;

    // 2
    EXPECT_EQ(longest.Calculate("abacaca"), 3);

    // 3
    EXPECT_EQ(longest.Calculate("cheese"), 3);

    // 3
    EXPECT_EQ(longest.Calculate("pwwkew"), 3);
}

TEST(LongestSubstringWithoutRepeatingCharactersTest, EdgeCases) {
    LongestSubstringWithoutRepeatingCharacters longest;

    // Empty string, length 0
    EXPECT_EQ(longest.Calculate(""), 0);

    // All same characters, length 1
    EXPECT_EQ(longest.Calculate("aaaa"), 1);

    // No repeating characters, length 6
    EXPECT_EQ(longest.Calculate("abcdef"), 6);
}