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
    private: 
    int preval = -1 ;
    int minDiff = INT_MAX ; 

public:

        void dfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            dfs(root->left) ;

            if(preval != -1){
                minDiff = min(minDiff , root->val - preval) ;
            }
            preval = root->val ; 

            dfs(root->right) ;
        }
    int minDiffInBST(TreeNode* root) {

        dfs(root) ;
        return minDiff ; 

        
    }
};