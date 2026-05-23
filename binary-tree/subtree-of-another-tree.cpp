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
        bool issame(TreeNode* root, TreeNode* subRoot){
            if(root == NULL && subRoot == NULL){
                return true ;
            }
            if(root == NULL && subRoot != NULL){
                return false ;
            }
            if(root != NULL && subRoot == NULL){
                return false  ;
            }

            bool left = issame(root->left , subRoot->left) ;
            bool right = issame(root->right , subRoot->right) ;
            return left && right && root->val == subRoot->val ;
        }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL){
            return false ;
        }
        if(root->val == subRoot->val){
            if((issame(root , subRoot))) return true  ;
        }
        return isSubtree(root->left ,subRoot) || isSubtree(root->right , subRoot)  ;

        
    }
};