#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int z = nums.size();
        int k = 0;
        while (i<z){
            if(nums[i] == val){
                nums[i] = nums[z-1];
                z--;
            }
            else{
                i++;
                k++;
            }
        }
        return k;
    }
};

int main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    Solution sol;
    int k = sol.removeElement(nums, val);

    cout << "k = " << k << endl;
    cout << "Modified nums: ";
    for (int i = 0; i < k; ++i) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}