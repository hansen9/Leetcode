#include <vector>
#include <string>

using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> counts(26,0);

        for(char ch: chars){
            counts[ch - 'a']++;
        }

        int res = 0;

        for(string word : words){
            if(canForm(word, counts)){
                res += word.length();
            }
        }
        return res;
    }

    bool canForm(string word, vector<int>& counts){
        vector<int> c(26,0);

        for(char ch: word){
            int x = ch - 'a';
            c[x]++;
            if(c[x] > counts[x]){
                return false;
            }
        }
        return true;
    }
};