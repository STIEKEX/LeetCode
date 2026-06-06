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
    int ans = 0; 
    void solve(TreeNode* root , int dir , int len){

        if(root == NULL) return  ;
        ans = max(ans , len) ; 
        int left  = 0 , right = 0 ;

        if(dir == 0){
            solve(root->left , 1 , len+1) ; 

            solve(root->right , 0 , 1) ; 
        }
        if(dir == 1){
            solve(root->right , 0 , len+1) ; 

            solve(root->left , 1 , 1) ; 
        }
        
    }
    int longestZigZag(TreeNode* root) {

      
        int dir = -1 ; 

        solve(root->left , 1 , 1) ; 
        solve(root->right,  0 , 1) ; 
        return ans; 
        
    }
};