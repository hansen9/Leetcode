#include <vector>

using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        // memory = O(1)
        // store 2 element at 1 index using multiplication and modular tricks
        // int first = 0, second = n, max = 1001;
        // for(int i = 0; i < nums.size(); i++)
        // {
        //     if(i % 2 != 0)
        //     {
        //         //odd
        //         nums[i] = nums[i] + (nums[second++] % max) * max;
        //     }
        //     else
        //     {
        //         //even
        //         nums[i] = nums[i] + (nums[first++] % max) * max;
        //     }
        // }

        // for(int i = 0; i < nums.size(); i++)
        // {
        //     nums[i] /= max;
        // }
        // return nums;
        
        // 0 ms
        vector<int> res(2*n);

        for (int i = 0; i < n; i++)
        {
            res[2*i] = nums[i];
            res[2*i+1] = nums[i+n];
        }
        return res;
    }
};