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
    int ans = 0 ;
public:

        pair<int ,int>sumofNodes(TreeNode* root ){
            if(root == NULL){
                return {0,0};
            }
            
            auto l = sumofNodes(root->left) ;
           auto r = sumofNodes(root->right) ;

            
            return {l.first + r.first + root->val , l.second + r.second + 1} ;



        }

        void dfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
           int sum = sumofNodes(root).first ;
           int count = sumofNodes(root).second ;

           int avg = sum/count ; 
           if(root->val == avg){
            ans++ ;
           }
           dfs(root->left) ;
           dfs(root->right) ;

        }



    int averageOfSubtree(TreeNode* root) {
        dfs(root) ;
        return ans ;
        
    }
};