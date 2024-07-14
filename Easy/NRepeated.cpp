#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_set<int> seen;
        for(int a: nums){
            if(seen.count(a))
                return a;
            seen.insert(a);
        }
        return -1;
    }
    
};