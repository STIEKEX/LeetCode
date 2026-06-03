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
    TreeNode* solve(vector<int>&nums, int st , int end){

        if(st > end){
            return NULL ; 
        }

        int mx = INT_MIN ; 
        int idx = 0 ; 

        for(int i = st ; i<= end ; i++){

            if(mx < nums[i]){
                mx = nums[i] ;
                idx = i ; 
            }
        }

        TreeNode* root = new TreeNode(mx) ; 

        root->left = solve(nums,  st , idx-1) ; 
        root->right = solve(nums , idx+1 , end) ; 

        return root ; 
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return solve(nums,  0 , nums.size() -1) ; 
        
    }
};