#include <gtest/gtest.h>
#include "ContainsDuplicate.h"

TEST(ContainsDuplicateTest, BasicCases) {
    ContainsDuplicate contains_duplicate;

    std::vector<int> nums1 = {1, 2, 3};
    // False
    EXPECT_FALSE(contains_duplicate.Check(nums1));

    std::vector<int> nums2 = {1, 2, 2};
    // True
    EXPECT_TRUE(contains_duplicate.Check(nums2));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
