#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m;

        for(string word : words1)
            ++m[word];
        for(string word: words2)
            if(m[word] < 2)
                m[word]--;
        return count_if(begin(m), end(m), [](const auto & p){ return p.second == 0;});
    }
};