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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head ; 
        ListNode* dummy = new ListNode() ; 
        ListNode* newhead = dummy ; 

        while(temp != NULL){
            if(temp->val != val){
                newhead->next = new ListNode(temp->val) ;
                newhead = newhead->next ;
               
            }
             temp = temp->next ;
        }
        dummy = dummy->next ;
        return dummy ;

        

    }
};