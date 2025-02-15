#include <gtest/gtest.h>
#include "TwoSum.h"

TEST(TwoSumTest, BasicCases) {
    TwoSum two_sum;

    std::vector<int> nums1 = {2, 7, 11, 15};
    // 2 + 7
    EXPECT_EQ(two_sum.Calculate(nums1, 9), (std::vector<int>{0, 1}));

    std::vector<int> nums2 = {3, 2, 4};
    // 2 + 4
    EXPECT_EQ(two_sum.Calculate(nums2, 6), (std::vector<int>{1, 2}));

    std::vector<int> nums3 = {3, 3};
    // 3 + 3
    EXPECT_EQ(two_sum.Calculate(nums3, 6), (std::vector<int>{0, 1}));
}

TEST(TwoSumTest, NegativeNumbers) {
    TwoSum two_sum;

    std::vector<int> nums1 = {-1, -2, -3, -4, -5};
    // - 3 - 5
    EXPECT_EQ(two_sum.Calculate(nums1, -8), (std::vector<int>{2, 4}));

    std::vector<int> nums2 = {-10, 15, 5, -5};
    // 15 - 5
    EXPECT_EQ(two_sum.Calculate(nums2, 10), (std::vector<int>{1, 3}));
}

TEST(TwoSumTest, EdgeCases) {
    TwoSum two_sum;

    std::vector<int> nums1 = {1000000000, 500, 500000000, 1500};
    // 1 billion + 1500
    EXPECT_EQ(two_sum.Calculate(nums1, 1000001500), (std::vector<int>{0, 3}));

    std::vector<int> nums2 = {10};
    // 10
    EXPECT_EQ(two_sum.Calculate(nums2, 10), std::vector<int>{});

    std::vector<int> nums3 = {1, 2, 3, 4, 5};
    // None
    EXPECT_EQ(two_sum.Calculate(nums3, 10), std::vector<int>{});
}

TEST(TwoSumTest, Duplicates) {
    TwoSum two_sum;

    std::vector<int> nums = {1, 5, 5, 10};
    // 5 + 5
    EXPECT_EQ(two_sum.Calculate(nums, 10), (std::vector<int>{1, 2}));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
