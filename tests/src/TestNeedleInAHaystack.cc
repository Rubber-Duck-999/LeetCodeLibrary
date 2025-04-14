#include <gtest/gtest.h>
#include "NeedleInAHaystack.h"

TEST(NeedleInAHaystackTest, BasicCases) {
    NeedleInAHaystack needle_in_a_haystack;

    // 0
    EXPECT_EQ(needle_in_a_haystack.Calculate("sadbutsad", "sad"), 0);

    // -1
    EXPECT_EQ(needle_in_a_haystack.Calculate("cheese", "salad"), -1);

    // 3
    EXPECT_EQ(needle_in_a_haystack.Calculate("pwwkew", "kew"), 3);
}

TEST(NeedleInAHaystackTest, EdgeCases) {
    NeedleInAHaystack needle_in_a_haystack;

    // -1
    EXPECT_EQ(needle_in_a_haystack.Calculate("hello", ""), -1);

    // -1
    EXPECT_EQ(needle_in_a_haystack.Calculate("a", "ah"), -1);

    // 0
    EXPECT_EQ(needle_in_a_haystack.Calculate("hello", "hello"), 0);
}