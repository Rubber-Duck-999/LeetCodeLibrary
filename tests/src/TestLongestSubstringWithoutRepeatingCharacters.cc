#include <gtest/gtest.h>
#include "LongestSubstringWithoutRepeatingCharacters.h"

TEST(LongestSubstringWithoutRepeatingCharactersTest, BasicCases) {
    LongestSubstringWithoutRepeatingCharacters longest;

    // 4
    EXPECT_EQ(longest.Calculate("abacaca"), 4);

    // 2
    EXPECT_EQ(longest.Calculate("cheese"), 2);
}
