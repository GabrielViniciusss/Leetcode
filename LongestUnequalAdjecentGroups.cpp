#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;
        int n = words.size();

         if (n == 0) 
            return result;

        result.push_back(words[0]);
        int lastGroup = groups[0];

        for(int i = 1;i<n;i++){
            if(groups[i]!=lastGroup){
                result.push_back(words[i]);
                lastGroup = groups[i];
            }
        }
        return result;
    }
};

int main() {
    vector<string> words = {"a","b","c","d"};
    vector<int> groups = {1,0,1,1};
    Solution sol;

    vector<string> result = sol.getLongestSubsequence(words, groups);

    cout << "Maior subsequência alternante: [";
    for (int i = 0; i < result.size(); ++i) {
        cout << "\"" << result[i] << "\"";
        if (i != result.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}