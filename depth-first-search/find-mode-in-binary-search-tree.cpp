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
    unordered_map<int ,int>mp ; 
    int maxcount = 0 ;
   
public:
        void dfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            
            dfs(root->left) ;
            dfs(root->right) ;
            mp[root->val]++ ; 
            maxcount  = max(maxcount , mp[root->val]) ;
           
        }
    vector<int> findMode(TreeNode* root) {
        dfs(root) ;

        vector<int>result ; 

       

        for(auto val : mp){
            if(maxcount == val.second){
                result.push_back(val.first) ;
            }
        }
        return result ; 

        
      
        

    }
};