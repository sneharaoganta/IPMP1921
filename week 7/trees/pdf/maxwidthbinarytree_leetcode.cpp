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
    
    int findHeight(TreeNode* root){
    if(!root)
        return 0;
    return max(findHeight(root->left), findHeight(root->right)) + 1;
}
void preorderUtil(TreeNode* root, size_t label,vector<size_t> &leftMost,vector<size_t> &rightMost, int height){
    if(!root)
        return;
    if(leftMost[height] == 0)
        leftMost[height] = label;
    
    rightMost[height] = max(rightMost[height], label);
    preorderUtil(root->left, 2*label, leftMost, rightMost, height+1);
    preorderUtil(root->right, 2*label+1, leftMost, rightMost, height+1);
    return;
        
}
    
    int widthOfBinaryTree(TreeNode* root) {
        int height = findHeight(root); //PENDING
        vector<size_t> leftMost(height, 0);
        vector<size_t> rightMost(height, 0);
        
        preorderUtil(root, 1, leftMost, rightMost, 0);
        int ans = 0;
        for(int i = 0; i < height; i++){
            ans = max(rightMost[i] - leftMost[i] + 1, (size_t)ans);
        }
        return ans;
    }
};