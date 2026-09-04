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
    int mx = INT_MIN ; 

    void solve(TreeNode* root){
        if(root == NULL) return ; 

        queue<pair<TreeNode* , long long >>q ; 
        q.push({root , 0}) ; 
        while(!q.empty()){
            int size = q.size() ; 

            int st = q.front().second ; 
            int end = q.back().second ; 
            
            mx = max(mx , (int)(end-st+1)) ; 
            for(int i = 0 ; i<size ; i++){
                TreeNode* curr = q.front().first ; 
                int pos = q.front().second ; 
                q.pop() ; 


                if(curr->left) q.push({curr->left , pos*2+1}) ; 
                if(curr->right) q.push({curr->right , pos*2+2}) ; 
            }
        }
    }
    int widthOfBinaryTree(TreeNode* root) {

        solve(root) ; 
        return mx ; 
        
    }
};