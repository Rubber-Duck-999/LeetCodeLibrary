#include <ContainsDuplicate.h>

// Sort the list from smallest to largest
// Loop through vector and if two indexed data match then return true

bool ContainsDuplicate::Check(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    int n = nums.size();
    for(int i = 0; i < n-1; i++){
        if(nums[i] == nums[i+1]) return true;
    }
    return false;
}
