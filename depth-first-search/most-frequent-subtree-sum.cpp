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
        int dfs(TreeNode* root){
            if(root == NULL){
                return 0 ;
            }

            int sum = dfs(root->left) + dfs(root->right) + root->val ;
            mp[sum]++ ;

            maxcount = max(maxcount , mp[sum]) ;
            return sum ;

        }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root) ;

        vector<int>ans ;
        
        for(auto val : mp){
            if(val.second == maxcount){
                ans.push_back(val.first) ;
            }
        }
        return ans  ;
        
    }
};