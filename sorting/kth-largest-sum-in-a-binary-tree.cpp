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
    vector<long long>arr ;
    long long  sum = 0 ;
public:
        void bfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            queue<TreeNode*>q ;
            q.push(root) ;
            q.push(NULL) ;
            while(q.size() > 0){
                TreeNode* curr = q.front() ; 
                q.pop() ;

                if(curr == NULL){
                    arr.push_back(sum) ;
                    sum = 0  ;
                    if(!q.empty()){
                        q.push(NULL) ;
                    }
                }
                else{
                    sum += curr->val ;
                    if(curr->left) {
                        q.push(curr->left) ;
                    }
                    if(curr->right){
                        q.push(curr->right) ;
                    }
                }
            }
        }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        bfs(root) ;
        
        int n = arr.size() ;
        if(k > n){
            return -1 ;
        }
        sort(arr.begin() , arr.end() ) ;
        long long ans = arr[n-k] ;
        return ans ;

        

        
    }
};