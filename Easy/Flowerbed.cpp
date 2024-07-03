#include <vector>

using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // 3 pointer
        // for (int i = 0; i < flowerbed.size(); i++)
        // {
        //     bool left = i == 0 || flowerbed[i - 1] == 0;
        //     bool right = i == flowerbed.size() - 1 || flowerbed[i + 1] == 0;

        //     if (left && right && flowerbed[i] == 0)
        //     {
        //         flowerbed[i] = 1;
        //         n--;
        //     }
            
        // }
        // return n <= 0;

        // optimized approach
        // find max count of flowers that can be planted in flowerbed
        // then stop when count >= n

        int count = 0;
        for (int i = 0; i < flowerbed.size(); i++) {
            // Check if the current plot is empty.
            if (flowerbed[i] == 0) {
                // Check if the left and right plots are empty.
                bool emptyLeftPlot = (i == 0) || (flowerbed[i - 1] == 0);
                bool emptyRightPlot = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
                
                // If both plots are empty, we can plant a flower here.
                if (emptyLeftPlot && emptyRightPlot) {
                    flowerbed[i] = 1;
                    count++;
                    if (count >= n) {
                        return true;
                    }
                }
            }
        }
        return count >= n;
    }
};