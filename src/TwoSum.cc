#include <TwoSum.h>

// Create a hash map
// Loop of records
// Calculate what number would be required to get to target from current looped value
// Does complement exist in map
// Else add, otherwise return with index

// Could be storing every record in map

std::vector<int> TwoSum::Calculate(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> map;  // value -> index
    for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
        int complement = target - nums[i];
        if (map.count(complement)) {
            return {map[complement], i};
        }
        map[nums[i]] = i;
    }
    return {}; // Not found
}