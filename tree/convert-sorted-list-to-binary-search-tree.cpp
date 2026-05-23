/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
        TreeNode* buildTree(vector<int>&arr , int st , int end){
            if(st > end){
                return NULL ;
            }

            int mid = st + (end-st)/2 ;

            TreeNode* root = new TreeNode(arr[mid]) ;
            root->left = buildTree(arr , st , mid-1) ;
            root->right = buildTree(arr , mid+1 , end) ;
            return root ; 

            
        }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>arr ; 
        ListNode* temp = head ;

        while(temp != NULL){
            arr.push_back(temp->val) ;
            temp = temp->next ;
        }

        int st = 0 ;
        int end = arr.size()-1 ;

        return buildTree(arr, st , end) ;
        


        
    }
};