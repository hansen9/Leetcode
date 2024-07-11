#include <vector>
using namespace std;
class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        for(int i = 0; i < grid.size(); i++)
        {
            int count = 0;
            for(int j = 0; j < grid.size(); j++)
            {
                if(grid[i][j] == 1)
                {
                    count++;
                }

                if(count == grid.size() - 1)
                {
                    return i;
                }
            }
        }
        return -1;
    }
};