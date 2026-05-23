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
    int maximum = INT_MIN ;
public:
        void bfs(TreeNode* root , vector<int>&ans){
            if(root == NULL){
                return ;
            }

            queue<TreeNode*>q ;
            
            q.push(root) ;
            while(q.size() >0){
                int size = q.size() ; 

                maximum = INT_MIN ;
                for(int i = 0 ; i<size ; i++){
                    TreeNode* curr = q.front() ;
                    q.pop() ;

                    if(maximum < curr->val){
                        maximum = curr->val ;
                    }
                    if(curr->left){
                        q.push(curr->left) ;
                    }
                    if(curr->right){
                        q.push(curr->right) ;
                    }
                }
                ans.push_back(maximum) ;

            }
           
        }

    vector<int> largestValues(TreeNode* root) {
        vector<int>ans ;
        bfs(root , ans) ;
        return ans ;
        
    }
};