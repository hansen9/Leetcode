#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans = -1;
        // unordered_map<int, vector<int>> mp;

        // for(auto n : nums){
        //     int t = n, maxDigit = 0;
        //     while(t){
        //         maxDigit = max(t%10, maxDigit);
        //         t /= 10;
        //     }
        //     mp[maxDigit].push_back(n);
        // }

        // for(auto [k, v]:mp){
        //     sort(v.rbegin(), v.rend());
        //     if(v.size() >= 2) ans = max(ans, v[0] + v[1]);
        // }
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(getMaxDigit(nums[i]) == getMaxDigit(nums[j]))
                    ans = max(ans, nums[i]+nums[j]);
            }
        }
        return ans;
    }
    private:
    int getMaxDigit(int num){
        int maxD = 0;
        while(num > 0){
            maxD = max(maxD, num%10);
            num /= 10;
        }
        return maxD;
    }
};