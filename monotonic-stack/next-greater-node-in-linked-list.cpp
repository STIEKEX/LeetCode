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
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
       vector<int>arr ; 
       vector<int>ans ;

       ListNode* temp = head; 
       while(temp != NULL){
        arr.push_back(temp->val) ;
        temp = temp->next ;
       }

       int n = arr.size() ; 
       for(int i = 0  ; i<n ; i++){
        bool isfound = false ;
        int val = arr[i] ; 
        for(int j = i+1 ; j<n ; j++){
            if(val < arr[j]) {
                ans.push_back(arr[j]) ;
                isfound = true ;
                break ;
            }
        }
         if(!isfound){
            ans.push_back(0) ;
         }
       }

       return ans ;


        
    }
};