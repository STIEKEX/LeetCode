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
    int sum = 0 ;
public:
        int hieght(TreeNode* root){
            if(root == NULL){
                return 0 ;
            }
            int l = hieght(root->left) ;
            int r = hieght(root->right) ;

            return max(l,r) + 1 ;
        }


        void dfs(TreeNode* root,int count , int h){
            if(root == NULL){
                return ;
            }
            count++ ;
            if(count == h){
                sum += root->val ;
            }

            dfs(root->left , count  ,h);
            dfs(root->right , count , h) ;

        }
        
    int deepestLeavesSum(TreeNode* root) {
        int maxHieght = hieght(root) ;

        int count = 0 ;
        dfs(root , count, maxHieght) ;
        return sum ;



        
    }
};