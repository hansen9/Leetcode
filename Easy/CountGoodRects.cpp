#include <vector>
#include <algorithm>
#include <map>

using namespace std;
class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        // jawaban sendiri :)
        // int maxSize = 0;
        // int ans = 0;

        // for(int i = 0; i < rectangles.size(); i++){
        //     int square = min(rectangles[i][0], rectangles[i][1]);
        //     if(square > maxSize){
        //         maxSize = square;
        //     }
        // }

        // for(int i = 0; i < rectangles.size(); i++){
        //     int square = min(rectangles[i][0], rectangles[i][1]);
        //     if(square == maxSize)
        //         ans++;
        // }
        // return ans;

        // using a map
        // make a map to map the min side of every rectangle's count
        // while searching for the max of side
        // and then return the map value of max side key
        map<int, int> count;
        int m = 0;
        for(auto& rect: rectangles){
            int side = min(rect[0], rect[1]);
            m = max(m, side);
            count[side]++;
        }
        return count[m];
    }
};