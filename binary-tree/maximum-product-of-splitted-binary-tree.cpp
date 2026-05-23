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
    static const long long MOD = 1000000007;

    private :
    long long maximum = INT_MIN ;
public:
        long long sum(TreeNode* root){
            if(root == NULL){
                return 0 ;
            }
            long long l = sum(root->left) ;
            long long r = sum(root->right) ;

            return l + r + root->val ;

        }


        long long dfs(TreeNode* root , long long totalSum) {
            if(root == NULL){
                return 0;
            }

            long long l = dfs(root->left , totalSum) ;
            long long r = dfs(root->right , totalSum) ;

            long long subtreeSum = l + r + root->val ;

            long long sum  = subtreeSum * (totalSum - subtreeSum) ;

            maximum = max(sum , maximum) ;
            return subtreeSum ;
        }





    int maxProduct(TreeNode* root) {

        long long totalSum = sum(root) ;

        dfs(root , totalSum) ;

        return maximum %  (long long)(1e9 + 7);
        
    }
};