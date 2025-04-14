#include <SubarraySumEqualsK.h>

// Create a hashmap to sum up all the prefixs (um of nums)
// Look though nums
// Check whether hashmap has record of sum -k which is 0
// If so up count and loop again

int SubarraySumEqualsK::Calculate(std::vector<int>& nums, int k) {
    std::unordered_map<int, int> prefixSumCount;
    prefixSumCount[0] = 1; // empty subarray sum is 0

    int currentSum = 0;
    int count = 0;

    for (int num : nums) {
        currentSum += num;

        // Check if there's a prefix sum we can subtract to get k
        if (prefixSumCount.count(currentSum - k)) {
            count += prefixSumCount[currentSum - k];
        }

        // Record the current prefix sum
        prefixSumCount[currentSum]++;
    }

    return count;
}