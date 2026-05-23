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
    int count = 0;
public:
        void bfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            queue<TreeNode*>q ; 
            vector<TreeNode*>arr; 
            q.push(root) ; 
            q.push(NULL) ;

            while(q.size() > 0){

                TreeNode* curr = q.front() ; 
                q.pop() ;
                if(curr == NULL){
                   
                    if(count % 2 != 0){
                        int i = 0 , j = arr.size() - 1; 
                        while(i<j){
                            swap(arr[i]->val , arr[j]->val) ;
                            i++ , j-- ;
                        }
                    }

                    arr.clear() ;

                     count++ ; 
                     if(!q.empty()){
                        q.push(NULL) ;
                     }
                    

                }
                else{
                    arr.push_back(curr) ;
                    if(curr->left){
                        q.push(curr->left) ;
                    }
                    if(curr->right){
                        q.push(curr->right) ;
                    }

                }
            }
        }
        
    TreeNode* reverseOddLevels(TreeNode* root) {
        bfs(root) ;
        return root ;

       

        
    }
};