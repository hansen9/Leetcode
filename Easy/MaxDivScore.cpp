#include <vector>
#include <algorithm>

using namespace std;
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int ans = -1, max_count = -1;

        for(auto div : divisors){
            int count = 0;

            for(auto num : nums){
                if(num % div == 0) count++;
            }

            if(count > max_count){
                max_count = count;
                ans = div;
            } else if(count == max_count){
                ans = min(ans, div);
            }
        }
        return ans;
    }
};