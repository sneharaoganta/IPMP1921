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
    
    bool check(TreeNode* root, int targetSum, int currentsum)
    {
        if(root==NULL){
            return false;
        }
        
        currentsum+=root->val;
        
        if(root->left==NULL&&root->right==NULL&&targetSum==currentsum){
            return true;
        }
        
        bool l = check(root->left,targetSum,currentsum);
        bool r = check(root->right,targetSum,currentsum);
        
        return l||r;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
       return check(root,targetSum,0);
        
    }
};