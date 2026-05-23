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
        TreeNode* deleteNode(TreeNode* root, int target){
            if(root == NULL){
                return NULL;
            }
            // if(root->val == target && root->left == NULL && root->right == NULL){
            //     return NULL ;
            // }

           root->left  =  deleteNode(root->left , target) ;
           root->right = deleteNode(root->right , target) ;

           if(root->val == target && root->left == NULL && root->right == NULL){
                return NULL ;
            }
            return root  ;

           
           

        }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
       return  deleteNode(root , target) ;
        
    }
};