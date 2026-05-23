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
    unordered_map<int ,int>m; 
    
public:
        TreeNode* helper(vector<int>& inorder, vector<int>& postorder, int& idx , int st , int end){
            if(st > end){
                return NULL ;
            }
            TreeNode* root = new TreeNode(postorder[idx--]) ; 
            int mid = m[root->val] ;
            root->right = helper(inorder , postorder , idx , mid+1 , end) ;
            root->left = helper(inorder , postorder , idx , st , mid-1) ; 
            
            return root ; 

        }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int idx = postorder.size() - 1 ;
        for(int i = 0 ; i<inorder.size() ; i++){
            m[inorder[i]] = i ;
        }
       return  helper(inorder , postorder ,idx , 0 , inorder.size()-1) ; 
        
    }
};