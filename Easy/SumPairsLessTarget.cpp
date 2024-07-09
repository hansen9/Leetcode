#include <vector>

using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int res = 0;

        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                res += ((nums[i] + nums[j]) < target) ? +1 : +0;
            }
        }
        return res;
    }
};