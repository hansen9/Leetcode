#include <vector>

using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        //3 ms
        // vector<int> mem(n+1);
        // mem[0] = 0;

        // for (int i = 1; i <= n; i++)
        // {
        //     mem[i] = mem[i/2] + i%2;
        // }

        // return mem;

        //using brian kernighan's algorithm
        vector<int> res(n+1, 0);
        for (int i = 1; i <= n; i++) {
            int x = i;
            while (x > 0) {
                res[i]++;
                x = x & (x-1); // ---> this is brian kernighan's algorithm
                // this code substracts n by 1 to invert all the bits after the rightmost set bit of n
                //then use n & (n-1) expression to clear the rightmost set bit.
            }
        }
        return res;
    }
};