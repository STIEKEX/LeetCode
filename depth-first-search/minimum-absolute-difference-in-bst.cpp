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
    int ans = INT_MAX ; 
    int prevVal = -1 ;

public:
        void dfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            dfs(root->left) ;

            if(prevVal  != -1){
                int val = abs(prevVal - root->val) ;
                ans = min(ans , val) ;
            }
            prevVal = root->val ;
            dfs(root->right) ;
        }
    int getMinimumDifference(TreeNode* root) {
        dfs(root) ;
        return ans ;
        
        
    }
};