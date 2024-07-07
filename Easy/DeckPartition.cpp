#include <vector>
#include <unordered_map>
#include <numeric> // for greatest common divisor(gcd)

using namespace std;

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> partition;
        int res = 0;
        for(int i : deck)
        {
            partition[i]++;
        }
        for(auto i : partition)
        {
            res = gcd(i.second, res);
        }
        return res > 1;
    }
};