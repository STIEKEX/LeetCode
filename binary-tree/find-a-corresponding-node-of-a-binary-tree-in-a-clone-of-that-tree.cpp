/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
    TreeNode* ans ;

public:
       void dfs(TreeNode* root , TreeNode* target){
            if(root == NULL){
                return ;
            }
            if(root->val == target->val) {
                ans = root ;
                return ;
            }
            dfs(root->left , target) ;
            dfs(root->right , target) ;

        }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        dfs(cloned , target) ;
        return ans; 

        
        
        
    }
};