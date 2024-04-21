#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); ++i)
        {
            int complement = target - nums[i];
            if (hash.find(complement) != hash.end()) // se complement existe na hash
                return {hash[complement], i};
            else
                hash[nums[i]] = i;     
        }
        return {};
    }
};