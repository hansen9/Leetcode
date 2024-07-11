#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> ans;

        vector<int> tmp(arr);

        sort(tmp.begin(), tmp.end());

        for(int& a : tmp)
            ans.emplace(a, ans.size() + 1);
        for(int i =0; i < arr.size(); i++){
            tmp[i] = ans[arr[i]];
        }
        return tmp;
    }
};