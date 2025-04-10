#include <TwoSum.h>

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