#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        for(int i = 0; i < mat.size(); i++){
            int j = mat.size() - 1 - i;
            if(j != i)
                res += mat[i][i] + mat[i][j];
            else
                res += mat[i][i];
        }
        return res;
    }
};