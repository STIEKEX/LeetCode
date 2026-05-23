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
    long long  secondMin = LLONG_MAX;
    long long  min = LLONG_MAX ;
public:
        void dfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            if(root->val < min){
                secondMin = min ;
                min = root->val ;
            }else if(root->val < secondMin && root->val != min){
                    secondMin = root->val ;
            }
            dfs(root->left) ;
            dfs(root->right) ;
        }
    int findSecondMinimumValue(TreeNode* root) {
        dfs(root) ;
        if(secondMin == LLONG_MAX  || secondMin == 0) return -1 ;
        return secondMin ;
        
    }
};