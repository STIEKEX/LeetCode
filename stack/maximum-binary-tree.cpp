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
public :
        TreeNode* dfs(vector<int>& nums , int start , int end){
            if(start > end){
                return NULL ;
            }
            // TreeNode* root ;
            int maximum = INT_MIN ;
            int idx = 0 ;
              for(int i = start ; i<=end  ; i++){
            if(maximum < nums[i]){
                maximum = nums[i] ;
                idx = i ;
             }
            }
        
      

         TreeNode* root  = new TreeNode(maximum) ;

        root->left = dfs(nums , start , idx-1 ) ;
        root->right = dfs(nums , idx+1 , end) ;
       
        
         return root ;

        }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return dfs(nums , 0 , nums.size()-1) ;
        
        
       

        
        
    }
};