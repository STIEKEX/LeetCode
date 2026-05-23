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
    private : 
    int count = 0 ;
public:
        void dfs(TreeNode* root , int maxsize){
            if(root == NULL){
                return ;
            }
            if(root->val >= maxsize){
                maxsize = root->val ;
                count++ ;
            }
            dfs(root->left , maxsize) ;
            dfs(root->right , maxsize) ;
        }
    int goodNodes(TreeNode* root) {
        int maxsize = INT_MIN;
        dfs(root , maxsize) ;
        return count ;

        
    }
};