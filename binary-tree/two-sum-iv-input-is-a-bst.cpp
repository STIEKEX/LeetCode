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
    vector<int>arr ;
public:
        void inorder(TreeNode* root){
            if(root == NULL){
                return ;
            }
            inorder(root->left) ;
            arr.push_back(root->val) ;

            inorder(root->right) ;
        }
    bool findTarget(TreeNode* root, int k) {
        inorder(root) ;

        int i = 0 , j = arr.size() -1 ;

        while(i < j){
            int sum = arr[i] +arr[j] ;

            if(sum == k){
                return true ;
            }
            else if (sum < k){
                i++ ;
            }else{
                j-- ;
            }
        }
        return false; 
        
        

      
        
    }
};