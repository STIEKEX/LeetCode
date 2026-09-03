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
    vector<vector<int>>ans ; 

    void bfs(TreeNode* root){
        if(root == NULL) return ; 

        queue<TreeNode*>q ; 
        q.push(root) ; 

        int level = 1 ; 
        while(!q.empty()){
            int l = q.size()  ;

            vector<int>arr ; 

            for(int i = 0 ; i<l ; i++){
                TreeNode* curr = q.front() ; 
                q.pop()  ;

                arr.push_back(curr->val)  ;
                if(curr->left) q.push(curr->left) ; 
                if(curr->right) q.push(curr->right) ; 
            }
            if(level % 2 == 1){
                ans.push_back(arr) ; 
            }
            else{
                reverse(arr.begin() , arr.end()) ; 
                ans.push_back(arr) ; 
            }
            level++  ;
        }

    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        bfs(root)  ;
        return ans ;
        
    }
};