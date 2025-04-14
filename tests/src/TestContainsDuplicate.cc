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

TEST(ContainsDuplicateTest, EdgeCases) {
    ContainsDuplicate contains_duplicate;

    // Empty vector, no duplicates, expect False
    std::vector<int> nums_empty = {};
    EXPECT_FALSE(contains_duplicate.Check(nums_empty));

    // Single element vector, no duplicates, expect False
    std::vector<int> nums_single = {42};
    EXPECT_FALSE(contains_duplicate.Check(nums_single));

    // All elements are the same, expect True
    std::vector<int> nums_identical = {7, 7, 7, 7};
    EXPECT_TRUE(contains_duplicate.Check(nums_identical));

    // Multiple elements, no duplicates, expect False
    std::vector<int> nums_no_duplicates = {1, 2, 3, 4, 5};
    EXPECT_FALSE(contains_duplicate.Check(nums_no_duplicates));
}
