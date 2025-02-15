#include <TwoSum.h>

std::vector<int> TwoSum::Calculate(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> num_map; 
    // Stores {number, index}
    // std::vector<int>::iterator first = nums.begin();
    // std::vector<int>::iterator last = nums.end();
    // while(first != last) {
    //     int complement = target - nums[*first];
    //     if (num_map.find(complement) != num_map.end()) {
    //         return {num_map[complement], *first}; 
    //         // Found the pair
    //     }
    //     num_map[nums[*first]] = *first; 
    //     // Store the index of the current number
    //     first++;
    // }
    return {};
    // Should never reach here as per problem constraints
}