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
        int dfs(TreeNode* root , int depth){
            if(root == NULL){
                return 0;
            }
            depth++ ;
            int l = dfs(root->left , depth) ;
            int r = dfs(root->right , depth) ;
            return max(l,r) + 1 ;
        }
    int maxDepth(TreeNode* root) {
        int depth = 0 ;
        return dfs(root , depth) ;
    }
};