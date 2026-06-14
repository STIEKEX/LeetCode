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
    bool solve(TreeNode* root){
        if(root == NULL) return true ;
        if(root->left != NULL && root->left->val >= root->val) return false ;
        if(root->right != NULL && root->right->val =< root->val) return false ;
        
        bool l = solve(root->left) ; 
        bool r= solve(root->right) ; 
        
        return l && r ; 
    }
    bool isValidBST(TreeNode* root) {
        return solve(root) ; 
        
    }
};