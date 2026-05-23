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
    int maximum =INT_MIN ;
public:
    int  dfs(TreeNode* root){
        if(root == NULL){
            return 0 ;
        }
       int l = dfs(root->left);
       int r = dfs(root->right) ;

        int val = l+r ; 
        if(val > maximum){
            maximum = val ;
        }
       

       return max(l,r)+1 ;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root) ;
        return maximum ;
        
    }
};