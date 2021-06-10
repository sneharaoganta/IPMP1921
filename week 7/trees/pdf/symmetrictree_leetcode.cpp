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
    
    bool check(TreeNode* p, TreeNode* r){
        if(!p && !r){
            return true;
        }
        
        if(!p||!r){
            return false;
        }
        
        if(p->val!=r->val){
            return false;
        }
        
        return (check(p->left,r->right) && check(p->right,r->left));
    }
    
    
    bool isSymmetric(TreeNode* root) {
    return check(root->left,root->right);
    }
    
};