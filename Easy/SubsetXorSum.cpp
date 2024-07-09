#include <vector>

using namespace std;
class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        // recursion aka brute force
        // doing depth first search for all possible combination(subset)
        // imagine the subset can be a tree
        //                   [5,1,6]
        //                 /         \
        //                5            -
        //              /    \       /   \
        //             1      -     1      -
        //            / \    / \   / \    / \
        //           6   -  6   - 6   -   6  -
        // return dfs(nums, 0, 0);

        //hard solution - combinatiorial
        int res = 0;
        for(auto n : nums){
            res = res | n; // here the bit is bitwise OR the numbs[i] together
        }
        return res * pow(2, nums.size() -1); // then shift it(<<) or power it to 2 to the power of nums.size() -1
    }
    private:
    int dfs(vector<int>& nums, int index, int currXor){
        if( index == nums.size())
            return currXor;
        
        int include = dfs(nums, index + 1, currXor ^ nums[index]);

        int exclude = dfs(nums, index + 1, currXor);

        return include + exclude;
    }
};