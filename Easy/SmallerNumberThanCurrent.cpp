#include <vector>
#include <map>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        map<int, int> m;
        vector<int> ans = nums;
        int n = nums.size();

        sort(ans.begin(), ans.end());

        for(int i = n - 1; i >= 0; i--)
        {
            m[ans[i]] = i;
        }

        for(int i = 0; i < n; i++)
        {
            nums[i] = m[nums[i]];
        }
        return nums;
    }
};