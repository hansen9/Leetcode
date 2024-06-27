#include <vector>
#include <unordered_map>

using namespace std;

// Definition for a binary tree node.
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };

class Solution {
public:

    unordered_map<int, vector<TreeNode*>> dp;
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2 == 0)
            return {};
        if(n == 1)
            return {new TreeNode()};
        if(dp.find(n) != dp.end())
            return dp[n];
        
        vector<TreeNode*> ans;

        for(int i = 1; i < n; i++)
        {
            vector<TreeNode*> left = allPossibleFBT(i);
            vector<TreeNode*> right = allPossibleFBT(n-i-1);

            for(TreeNode* l: left)
            {
                for(TreeNode* r: right)
                {
                    TreeNode* node = new TreeNode(0);
                    node->left = l;
                    node->right = r;
                    ans.push_back(node);
                }
            }
        }
        return dp[n] = ans;
    }
};