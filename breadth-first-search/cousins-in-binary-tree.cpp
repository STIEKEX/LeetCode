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
    vector<pair<int ,int>>arr ;
    
    void solve(TreeNode* root , TreeNode* par , int targ , int depth){
        if(root == NULL) return ; 
        
        if(root->val == targ){
            if(par == NULL){
                arr.push_back({depth , NULL}) ; 
                return ;
            }
            arr.push_back({depth , par->val}) ;
        }
        solve(root->left , root  , targ , depth+1) ; 
        solve(root->right , root  , targ , depth+1) ; 
    }
    bool isCousins(TreeNode* root, int x, int y) {
        
        solve(root , NULL , x , 0) ; 
        solve(root , NULL , y , 0) ;
        
        if(arr[0].first == arr[1].first && arr[0].second != arr[1].second) {
            return true; 
        }
        return false ;
        
    }
};