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

        void bfs(TreeNode* root , vector<vector<int>>&ans){
            if(root == NULL){
                return ;
            }
            vector<int>val ;

            queue<TreeNode*>q ; 
            q.push(root) ;
            q.push(NULL) ;

            while(q.size() > 0){
                TreeNode* curr = q.front() ;
                q.pop() ;

                if(curr == NULL){
                    
                        ans.push_back(val) ;
                        val.clear() ;
                        if(!q.empty()){
                             q.push(NULL) ;
                        }
                       
                    
                    // else{
                    //     break ;
                    // }
                }else{
                    val.push_back(curr->val) ;

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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans ;
        bfs(root , ans);
        reverse(ans.begin() , ans.end()) ;
        return ans ;
        
    }
};