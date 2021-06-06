/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        TreeNode *curr=root;
        vector<int>v;
        stack<TreeNode*>s;
        while(1)
        {
            while(curr!=NULL)
            {
                v.push_back(curr->val);
                s.push(curr);
                curr=curr->left;
            }
            if(s.empty())
                break;
            curr= s.top();
            s.pop();
            curr=curr->right;
        }
        return v; 
    }
};