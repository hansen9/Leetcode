#include <string>
#include <vector>
#include <algorithm> 

using namespace std;
class TrieNode{
public:
    char ch;
    TrieNode* children[26];
    bool isTerminal;
    int childCnt;

    TrieNode(char d){
        this->ch = d;
        this->isTerminal = false;
        for(int i=0;i<26;i++){
            this->children[i] = NULL;
        }
        this->childCnt = 0;
    }
};

class Solution {
public:
    void insertWord(TrieNode* root, string word){
        // base case
        if(word.length() == 0){
            root->isTerminal = true;
            return;
        }

        // ek case solve baaki re sambhaal lega
        char ch = word[0];
        int index = ch-'a';
        TrieNode* child = NULL;

        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            child = new TrieNode(ch);
            root->childCnt++;
            root->children[index] = child;
        }

        insertWord(child,word.substr(1));
    }
    string longestCommonPrefix(vector<string>& strs) {
        // sort method
        // sort the array first and then compare the chars of first element with the last element
        string ans="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0],last=strs[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;

        // tries method
        // make a tries that count the char count of common char from start of string to end of string
        // for every string in array
        // TrieNode* root = new TrieNode('-');

        // for(int i=0;i<strs.size();i++){
        //     insertWord(root,strs[i]);
        // }

        // if(root->isTerminal) return "";

        // string st = strs[0];
        // string ans = "";

        // for(int i=0;i<st.length();i++){
        //     char ch = st[i];
        //     int index = ch-'a';
        //     if(root->childCnt == 1 && root->children[index] != NULL){
        //         ans.push_back(ch);
        //         root = root->children[index];
        //         if(root->isTerminal) break;
        //     }
        //     else{
        //         break;
        //     }
        // }

        // return ans;
    }
};