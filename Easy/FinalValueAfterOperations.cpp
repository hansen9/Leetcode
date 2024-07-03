#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        // int x = 0;
        // for(int i = 0; i < operations.size(); i++)
        // {
        //     if(operations[i] == "++X" || operations[i] == "X++")
        //     {
        //         x++;
        //     }
        //     else
        //     {
        //         x--;
        //     }
        // }

        //0 ms
        int x {};
        for(string s : operations)
        {
            x =+ (s[1] == '+') ? 1 : -1;
        }
        return x;
    }
};