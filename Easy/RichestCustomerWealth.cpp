#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // int m = accounts.size();
        // int max;
        // int j = 0;
        // for(int i = 0; i < m; i++)
        // {
        //     int n = accounts[i].size();
        //     int curr = 0;
        //     for(int j = 0; j < n; j++)
        //     {
        //         curr += accounts[i][j];
        //     }

        //     if(curr > max)
        //     {
        //         max = curr;
        //     }
        // }
        // return max;
        int richest = 0;
        for (auto &customer : accounts)
            richest = max (richest, accumulate(customer.begin(), customer.end(), 0));
        
        return richest;
    }
};