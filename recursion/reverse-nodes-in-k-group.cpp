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
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        

       vector<int>arr ; 
       ListNode* temp = head ;
       while(temp != NULL){
        arr.push_back(temp->val) ; 
        temp = temp->next ;
       }

       int i = 0 ; 
        int j = k-1;
       while(j< arr.size()){

        reverse(arr.begin() + i , arr.begin() + j+1) ; 
        i = j+1 ; 
        j += k ; 
       }

       ListNode* newNode = new ListNode(0) ; 
        ListNode* newhead = newNode ; 
       for(int val : arr){
        newNode->next =  new ListNode(val) ; 
        newNode = newNode->next ; 
       }
       return newhead->next ; 




    }
};