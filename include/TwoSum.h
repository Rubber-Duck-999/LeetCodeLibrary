#ifndef TWOSUM_h
#define TWOSUM_h

#include <vector>
#include <unordered_map>
#include <bits/stdc++.h>

class TwoSum
{
public:
    TwoSum() {};
    std::vector<int> Calculate(std::vector<int>& nums, int target);
    std::vector<int> CalculateValues(std::vector<int>& nums, int target);
};

#endif