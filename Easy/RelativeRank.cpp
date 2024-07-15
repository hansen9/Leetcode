#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end(), greater<int>());
        vector<string> medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        unordered_map<int ,string> scoreRank;

        for(int i = 0; i < n; i++){
            if(i < 3){
                scoreRank[sortedScore[i]] = medals[i];
            } else{
                scoreRank[sortedScore[i]] = to_string(i+1);
            }
        }
        vector<string> rank;
        for(int s: score){
            rank.push_back(scoreRank[s]);
        }

        return rank;
    }
};