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
        void bfs(TreeNode* root , vector<double>&ans){
            if(root == NULL){
                return ;
            }
            vector<int>val ;
            double sum = 0  ;
            queue<TreeNode*>q ; 
            q.push(root) ;
            q.push(NULL);
            int count = 1 ;
            while(q.size() > 0){
                TreeNode* curr = q.front() ;
                q.pop() ;

                if(curr == NULL){
                    double sum = 0 ;
                    double size = val.size() ;
                    for(int i =0 ; i<val.size() ; i++){
                        sum += val[i];
                    }
                    ans.push_back(sum/size) ;
                    
                    // sum = 0 ;
                    // count = ++ 
                    val.clear() ;
                    if(!q.empty()){
                        q.push(NULL) ;
                        
                    }

                }
                else{
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans ;
        bfs(root , ans) ;
        return  ans ;
        
    }
};