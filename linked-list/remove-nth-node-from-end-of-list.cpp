/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(nex
t) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(head == NULL) return NULL ; 

        int length = 0  ;

        ListNode* temp = head ; 
        while(temp != NULL){
            temp = temp->next  ;
            length++ ;
        }

         length = length - n ; 
         if(length == 0) return head->next ;

        ListNode* temp2 = head ; 

        int i = 0 ; 
        
        while(i < length-1){
            temp2 = temp2->next ; 
            i++ ;
        }

        temp2->next = temp2->next->next ;
        return head ;
        
    }
};