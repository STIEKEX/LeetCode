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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        unordered_map<int , TreeNode*>m ; 
        unordered_map<int ,int>m1 ; 
        
        for(auto val : d){

            if(m[val[0]] == 0){
                TreeNode* root = new TreeNode(val[0]) ; 
                m[val[0]] = root ; 
            }
            if(m[val[1]] == 0){
                TreeNode* root = new TreeNode(val[1]) ; 
                m[val[1]] = root ; 
            }
            if(val[2] == 1){
                m[val[0]]->left = m[val[1]] ; 
            }
            else{
                m[val[0]]->right = m[val[1]]  ;
            }

            if(m1[val[0]] != -1){
                m1[val[0]] = 1 ; 
            }
            m1[val[1]] = -1 ; 




        }
        int x = 0 ;
        for(auto val : m1){
            if(val.second == 1){
                x= val.first ;
                break ;
            }
        }
        return m[x];
        


    }
};