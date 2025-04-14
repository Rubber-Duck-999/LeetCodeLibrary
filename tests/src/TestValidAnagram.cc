#include <gtest/gtest.h>
#include "ValidAnagram.h"

TEST(ValidAnagramTest, BasicCases) {
    ValidAnagram valid_anagram;

    // False
    EXPECT_FALSE(valid_anagram.Calculate("cheese", "pizza"));

    // True
    EXPECT_TRUE(valid_anagram.Calculate("dog", "god"));
}