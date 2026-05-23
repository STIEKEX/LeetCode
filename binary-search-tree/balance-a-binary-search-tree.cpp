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
    vector<int>arr ;
public:
        void inorder(TreeNode* root){
            if(root == NULL) return ; 

            inorder(root->left)  ;
            arr.push_back(root->val) ; 
            inorder(root->right) ; 
        }
        TreeNode* buildTree( int st , int end, vector<int>arr){
            if(st > end) return NULL ;
            int mid = st + (end -st)/2 ; 
            
            TreeNode* newroot = new TreeNode(arr[mid]) ;
            
            newroot->left =buildTree( st , mid-1 , arr) ; 
            newroot->right = buildTree( mid+1 , end , arr) ; 
            return newroot ;
        }
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root) ; 
        
       return buildTree(0  , arr.size() - 1 , arr ) ;
        
       
    }
};