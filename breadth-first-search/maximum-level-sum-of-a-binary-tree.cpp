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
    int maxLevelSum(TreeNode* root) {

        int cnt = 1 ; 
        int mx = INT_MIN ; 


        queue<TreeNode*>q ; 
        q.push(root) ; 
        int ans = 0 ;
        while(q.size()) {
            int size = q.size() ; 

            int sum = 0 ;

            for(int i = 0 ; i<size; i++){
                TreeNode* node = q.front() ; 
                q.pop()  ;

                sum += node->val ; 
                if(node->left) q.push(node->left) ; 
                if(node->right) q.push(node->right) ; 

            }
            if(sum > mx){
                mx = sum ; 
                ans = cnt ; 
            }
            cnt++ ; 
        }
        return ans ;
    }
};