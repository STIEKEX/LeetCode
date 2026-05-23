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
    int count = 0 ;
public:
        void dfs(TreeNode* root , vector<int>&arr , vector<vector<int>>&ans){
            if(root == NULL){
                return ;
            }
            queue<TreeNode*>q ;
            q.push(root) ;
            q.push(NULL) ;

            while(q.size() > 0){
                TreeNode* curr = q.front() ;
                q.pop() ;

                if(curr == NULL){
                    count++ ;
                    if(count % 2 == 0){
                        reverse(arr.begin() , arr.end()) ;
                        ans.push_back(arr) ;     
                    }
                    else{
                        ans.push_back(arr) ;
                    }
                    arr.clear() ;
                    if(!q.empty()){
                        q.push(NULL) ;
                    }
                }
                else{
                    arr.push_back(curr->val) ;
                    if(curr->left){
                        q.push(curr->left) ;
                    }
                    if(curr->right){
                        q.push(curr->right) ;
                    }
                }
            }
            return ;
        }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>arr ;
        vector<vector<int>>ans ;

        dfs(root , arr ,ans) ;
        return ans ;
        
    }
};