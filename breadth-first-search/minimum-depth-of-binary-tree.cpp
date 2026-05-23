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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0 ;
        }
        int count = 0 ;
        count++ ;
        int l = 0 ; 
        int r = 0 ; 
        if(root->left != NULL){
           l =  minDepth(root->left) ;

        }
        if(root->right != NULL){
            r = minDepth(root->right) ;
        }
        if(l == 0){
            return r + count ;
        }
        if(r == 0){
            return l + count ;


        }
        return min(l, r) + count ;
        
    }
};