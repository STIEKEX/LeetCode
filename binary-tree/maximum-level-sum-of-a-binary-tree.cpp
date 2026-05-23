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
    int sum = 0 ;
    int count = 0 ;
    int maximumSum = INT_MIN ;
    int level = 0 ;
public:
    void bfs(TreeNode* root ){
        if(root == NULL){
            return  ;
        }
        queue<TreeNode*>q ;
        q.push(root) ;
        q.push(NULL);

        while(q.size() > 0){
            TreeNode* curr = q.front() ;
            q.pop() ;
            if(curr == NULL){
                count++ ;
                if(sum > maximumSum){
                    maximumSum = sum ;
                    level = count ;
                }
                sum = 0 ;
                if(!q.empty()){
                    q.push(NULL) ;
                }
            }
            else{
                sum += curr->val ;
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
    int maxLevelSum(TreeNode* root) {
        
        bfs(root) ;

        return level  ; 
        
    }
};