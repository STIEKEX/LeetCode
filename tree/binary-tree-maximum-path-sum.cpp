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
    private:
    int maximum = INT_MIN ;
public:
        int dfs(TreeNode* root){
            if(root == NULL){
                return 0 ;
            }

            int l = max(0 , dfs(root->left)) ;
            int r = max(0 , dfs(root->right)) ;

            int val = l + r + root->val ;

            maximum = max(maximum ,val) ;

            return max(l,r) + root->val ;
        }
    int maxPathSum(TreeNode* root) {
        dfs(root) ;
        return maximum ;
    }
};