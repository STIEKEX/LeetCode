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
        bool dfs(TreeNode* root , int val){


            if(root == NULL){
                return true ;
            }
           

            bool l = dfs(root->left , val) ;
           
             
            bool r = dfs(root->right , val) ;

            
            

            return l&& r && root->val == val  ;
            


            
           
        }
    bool isUnivalTree(TreeNode* root) {
        int val = root->val ;

         return   dfs(root , val) ;



        
    }
};