#include <vector>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    string oddString(vector<string>& words) {
        map<vector<int>, vector<string>> v;
        for(string word : words){
            vector<int> diff;
            for(int i = 1; i < word.size(); i++)
                diff.push_back(word[i]-word[i-1]);
            v[diff].push_back(word);
        }

        for(auto&[_, ws] : v)
            if(ws.size() == 1)
                return ws[0];
        return words[0];
    }
};