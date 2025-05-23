#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        vector<long long> dp (n+1);
        if(n<=2){
            return n;
        }
        dp[0] = 1;
        dp[1] = 1; // n = 1
        for(int i = 2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
    }
};

int main(){
    int n = 0;
    cin>>n;
    Solution sol;
    int p = sol.climbStairs(n);
    cout<<"Numero de passos diferentes:"<<p<<endl;

    return 0;
}