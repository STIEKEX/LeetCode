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
    int sum = 0 ;
public:
        void revInorder(TreeNode* root){
            if(root == NULL){
                return ;
            }
            revInorder(root->right) ;
            
            sum += root->val ;
            root->val = sum ;
            revInorder(root->left) ;


        }
        
    TreeNode* bstToGst(TreeNode* root) {
        revInorder(root) ;
        return root ;
        

        
    }
};