#include <iostream>
#include <vector>
using namespace std;

#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;
        
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