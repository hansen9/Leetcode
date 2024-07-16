#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans((s.size() + k - 1) / k, string(k, fill));

        for(int i = 0; i < s.size(); i++){
            ans[i/k][i%k] = s[i];
            
        }
        return ans;
    }
};