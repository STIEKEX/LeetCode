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
    TreeNode* inorder(TreeNode* root){

        while(root != NULL && root->left != NULL)root = root->left ; 
        return root ; 
    }
    TreeNode* solve(TreeNode* root , int key){

        if(root == NULL) return NULL ; 

        if(key > root->val){
           root->right =  solve(root->right , key) ; 
        }
        else if(key < root->val){
           root->left =  solve(root->left ,key);
        }

        else{

            if(root->left == NULL && root->right == NULL) return NULL ; 

            else if(root->left == NULL && root->right != NULL) return root->right ;

            else if(root->left != NULL && root->right == NULL) return root->left ; 


            else{
                TreeNode* curr = inorder(root->right) ; 

                root->val = curr->val ; 
                root->right = solve(root->right , curr->val) ; 

                return root ; 
            }
        }
        return root ;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
        return solve(root  , key)  ;
        
    }
};