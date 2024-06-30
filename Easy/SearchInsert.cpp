#include <vector>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // binary search
        // compare the target with nums[high] and nums[mid]
        // if target higher than nums[high] then return high
        // if target == nums[mid] return mid
        // if target < nums[mid] move the high else low
        // return low
        int low = 0;
        int high = nums.size();
        int mid;

        if(target > nums[high-1])
        {
            return high;
        }

        while (low <= high)
        {
            mid = (low + high)/2;
            if (nums[mid] == target)
            {
                return mid;
            }
            
            if(target < nums[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return low;
    }
};