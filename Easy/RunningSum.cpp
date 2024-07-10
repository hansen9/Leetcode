#include <vector>

using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int total = 0;

        for(int i = 0; i < nums.size(); i++){
            total += nums[i];
            ans.push_back(total);
        }
        return ans;
        // 3 liner code
        // for(int i = 1; i < nums.size(); i++){
        //     nums[i] += nums[i-1];
        // }
        // return nums;
    }
};