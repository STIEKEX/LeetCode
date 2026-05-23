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
    int count = 0  ;
    bool evenOdd = true ;
public:
        void bfs(TreeNode* root){
            if(root == NULL){
                return ;
            }
            vector<int>arr ;
            queue<TreeNode*> q ;
            q.push(root) ;
            q.push(NULL) ;

            while(q.size() > 0){
                
                TreeNode* curr= q.front() ;
                q.pop() ;

                if(curr == NULL){
                    //for level 0 only :
                    // if(count == 0 && arr[0] % 2 == 0){
                    //     evenOdd = false ;
                    //     return ;
                    // }

                    if(arr.size() == 1){
                        if(count % 2 == 0){
                            if(arr[0] % 2 == 0){
                                evenOdd = false; 
                                return ;
                            }
                        }else{
                            if(arr[0] % 2 != 0 ){
                                evenOdd = false ;
                                return ;
                            }
                        }
                    }
                   
                    for(int i = 1 ; i<arr.size()   ; i++){
                        //for odd count ;
                        if(count % 2 !=0){
                            if(arr[i-1] <= arr[i] || arr[i]%2 != 0){
                                evenOdd = false ;
                                return ;
                            }
                        }
                        else{
                            //For even count ;
                            if(arr[i-1] >= arr[i] || arr[i]%2==0){
                                evenOdd= false ;
                                return ;
                            }
                        }
                    }
                    count++ ;
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
    bool isEvenOddTree(TreeNode* root) {
        bfs(root) ;
        return evenOdd ;
    }
};