#include <vector>

using namespace std;
class Solution {
public:
    int largestLocalUtil(vector<vector<int>>& grid, int x, int y)
    {
        int localMax = 0;

        for(int i = x; i < x + 3; i++)
        {
            for(int j = y; j < y + 3; j++)
            {
                localMax = max(localMax, grid[i][j]);
            }
        }
        return localMax;
    }

    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = n - 2;
        vector<vector<int>> ans(m, vector<int>(m,0));

        for(int i = 0; i < m ; i++)
        {
            for(int j = 0; j < m; j++)
            {
                ans[i][j] = largestLocalUtil(grid, i, j);
            }
        }
        return ans;
    }
};