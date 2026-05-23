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

        void dfs(TreeNode* root , int targetSum , vector<vector<int>>&ans , vector<int>&arr){
            if(root == NULL){
                return  ;
            }
            arr.push_back(root->val) ;
            if(root->left == NULL && root->right == NULL){
                int sum = 0 ;
                for(int i = 0 ; i<arr.size() ; i++){
                    sum += arr[i] ;
                }
                if(sum == targetSum){
                    ans.push_back(arr) ;
                }
                 
            }
            else{
                
                dfs(root->left , targetSum , ans , arr) ;
                dfs(root->right , targetSum , ans , arr) ;
               

            }
            arr.pop_back() ;
           
            return ; 
        }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans ;
        vector<int>arr ;
        dfs(root , targetSum , ans , arr) ;
        return ans ;
        
        
    }
};