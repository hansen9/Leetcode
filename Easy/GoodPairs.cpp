#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> pairs;
        int count = 0;

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(pairs.find(nums[i]) != pairs.end())
        //     {
        //         count += pairs[nums[i]];
        //     }
        //     pairs[nums[i]] = pairs[nums[i]] + 1;
        // }

        for(int num : nums)
        {
            count += pairs[num]++;
        }

        return count;
    }
};