#include <vector>
#include <unordered_set>
#include <string>
#include <map>

using namespace std;
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse_codes[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        // using unordered_set -> can return the array of transformed words
        // unordered_set<string> s;
        // for(auto word : words){
        //     string code;
        //     for(auto character : word) code += morse_codes[character- 'a'];
        //     s.insert(code);
        // }
        // return s.size();

        // using map -> can't return the array of transformed word
        int transformations = 0;
        map<string, bool> vis;
        for (string word : words) {
            string morse_code = "";
            for (char c : word) {
                morse_code += morse_codes[c - 'a'];
            }
            if (!vis[morse_code]) {
                transformations++;
                vis[morse_code] = true;
            }
        }
        return transformations;
        
    }
};
