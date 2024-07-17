#include <vector>
#include <unordered_set>
#include <string>

using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> d = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(auto word : words){
            string code;
            for(auto character : word) code += d[character- 'a'];
            s.insert(code);
        }
        return s.size();

        
    }
};
