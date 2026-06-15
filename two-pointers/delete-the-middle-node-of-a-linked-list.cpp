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
    ListNode* deleteMiddle(ListNode* head) {

        int size = 0 ; 
        ListNode* temp = head ; 
        while(temp != NULL){
            temp = temp->next ; 
            size++ ; 
        }
        int mid = size/ 2  ; 

        ListNode* prev = NULL ; 
        temp = head ; 

        int cnt = 0 ;
        while(cnt != mid){
            prev = temp ; 
            temp = temp->next ; 
            cnt++  ;
        }

        prev->next = temp->next ; 
        temp->next = NULL ; 
        return head ; 
        
    }
};