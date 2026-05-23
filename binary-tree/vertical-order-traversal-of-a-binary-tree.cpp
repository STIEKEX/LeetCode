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
    private :
    vector<tuple<int ,int, int>>nodes  ;

public:
        void dfs(TreeNode* root, int col , int row ){
            if(root == NULL){
                return  ;
            }
            nodes.push_back({col , row , root->val}) ;
            dfs(root->left , col-1 , row+1 ) ; 
            dfs(root->right , col+1 , row+1) ;
        }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        dfs(root , 0 , 0) ;
        sort(nodes.begin() , nodes.end()) ;
        vector<vector<int>>ans ; 
        vector<int>arr ;
        int prevCol = INT_MIN ;
        for(auto [col ,row ,val] : nodes){
            if(col != prevCol){
                ans.push_back({}) ; 
                prevCol = col ;
            }
            ans.back().push_back(val) ;
        }
        return ans ;
        
    }
};