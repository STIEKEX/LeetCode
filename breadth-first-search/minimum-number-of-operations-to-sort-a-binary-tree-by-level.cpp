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
    int count = 0 ;
public:
        void bfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            queue<TreeNode*>q ;
            vector<int>arr ;
            q.push(root) ;
            q.push(NULL) ;

            while(q.size() > 0){
                TreeNode* curr = q.front() ; 
                q.pop() ;

                if(curr == NULL){

                    for(int i = 0 ; i<arr.size() -1 ; i++){
                        int minI = i ; 

                        for(int j = i+1 ; j<arr.size() ; j++){
                            if(arr[j] < arr[minI]){
                                minI = j ;
                                
                            }
                        }
                        if(minI != i){
                            count++ ;
                        }
                        swap(arr[i], arr[minI]) ;
                    }
                    arr.clear() ;

                    if(!q.empty()){
                        q.push(NULL) ;
                    }

                }
                else{   
                    arr.push_back(curr->val) ;
                    if(curr->left){
                        q.push(curr->left) ;
                    }
                    if(curr->right){
                        q.push(curr->right) ;
                    }

                }
            }
        }
    int minimumOperations(TreeNode* root) {
        bfs(root) ;
        return count ;
        
    }
};