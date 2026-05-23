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
        void traverse(TreeNode* root , vector<string>&str , string path){
            if(root->left == NULL && root->right == NULL){
                str.push_back(path) ;
                return ;
            }
            if(root->left) {
                traverse(root->left , str , path + "->" + to_string(root->left->val)) ;
            }
            if(root->right) {
                traverse(root->right , str , path + "->" + to_string(root->right->val)) ;
            }
        }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>str ; 
        string path = to_string(root->val) ;

        traverse(root , str , path) ;
        return str ;
        
    }
};