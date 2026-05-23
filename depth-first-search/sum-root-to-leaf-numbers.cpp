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
    int dfs(TreeNode* root , int val , int sum){
        if(root == NULL){
            return 0;
        }
        val = val * 10 + root->val ;
        if(root->left == NULL && root->right == NULL){
            sum += val ;
            return sum ; 
        }
       return  dfs(root->left, val , sum ) +  
        dfs(root->right , val , sum) + sum ;

    }



    int sumNumbers(TreeNode* root) {
        int sum = 0 ; 

       return  dfs(root , 0 , sum) ;
        // return sum ;
        
    }
};