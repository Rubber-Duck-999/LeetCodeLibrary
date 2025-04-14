#include <gtest/gtest.h>
#include "SubarraySumEqualsK.h"

TEST(SubarraySumEqualsKTest, BasicCases) {
    SubarraySumEqualsK subarray_sum_equals_k;

    std::vector<int> nums1 = {1, 1, 1};
    // 2
    EXPECT_EQ(subarray_sum_equals_k.Calculate(nums1, 2), 2);

    std::vector<int> nums2 = {1, 2, 3};
    // 2
    EXPECT_EQ(subarray_sum_equals_k.Calculate(nums2, 3), 2);
}

TEST(SubarraySumEqualsKTest, EdgeCases) {
    SubarraySumEqualsK subarray_sum_equals_k;

    std::vector<int> nums1 = {};
    // 0
    EXPECT_EQ(subarray_sum_equals_k.Calculate(nums1, 0), 0);

    std::vector<int> nums2 = {0};
    // 1
    EXPECT_EQ(subarray_sum_equals_k.Calculate(nums2, 0), 1);
}