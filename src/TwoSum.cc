#include <TwoSum.h>

std::vector<int> TwoSum::Calculate(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_map; 
    // Stores {number, index}

    for (std::size_t i = 0; i < nums.size(); i++) {
        // Loop through vector
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            return {static_cast<int>(num_map[complement]), static_cast<int>(i)}; 
            // Found the pair
        }
        num_map[nums[i]] = i; 
        // Store the index of the current number
    }
    return {};
    // Should never reach here as per problem constraints
}

std::vector<int> TwoSum::CalculateValues(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_map; 
    // Stores {number, index}

    for (std::size_t i = 0; i < nums.size(); i++) {
        // Loop through vector
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            return {static_cast<int>(complement), static_cast<int>(nums[i])}; 
            // Found the pair
        }
        num_map[nums[i]] = i; 
        // Store the index of the current number
    }
    return {};
    // Should never reach here as per problem constraints
}