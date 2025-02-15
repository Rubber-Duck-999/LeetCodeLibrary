#include <gtest/gtest.h>
#include "TwoSum.h"

TEST(Tests, FirstTry) {
    TwoSum two_sum;
    std::vector<int> test_data = {2,7,11,15};
    std::vector<int> return_data = two_sum.Calculate(test_data, 9);
    EXPECT_NE(return_data.at(0), 0);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
