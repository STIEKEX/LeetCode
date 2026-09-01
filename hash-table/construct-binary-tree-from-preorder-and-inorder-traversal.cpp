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
    unordered_map<int ,int>m ; 

    int idx = 0 ;

    TreeNode* solve(vector<int>&preorder , vector<int>&inorder , int st , int end){
        if(st > end) return NULL ; 
        TreeNode* root = new TreeNode(preorder[idx++]) ; 
        int mid = m[root->val] ; 
        root->left = solve(preorder , inorder , st , mid-1)  ;
        root->right = solve(preorder , inorder , mid+1 , end) ; 
        return root ;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size() ; 

        for(int i = 0 ; i<n ; i++){
            m[inorder[i]] = i ; 
        }
        return solve(preorder , inorder , 0 , n-1) ; 
        
    }
};