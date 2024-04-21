#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        long int original = x;

        if(x < 0){
            return false;
        }

        long int inverso = 0;

        while(x != 0)
        {    
            inverso = (inverso*10) + (x%10);
            x/=10;
        }

        return (original == inverso);
    }
};

int main(){

    Solution solution = Solution();

    cout<<solution.isPalindrome(134);
    
    return 0;   
}