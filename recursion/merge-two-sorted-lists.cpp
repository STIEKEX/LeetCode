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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode() ;

        ListNode* newhead = dummy ; 

        ListNode* temp1 = list1 ; 
        ListNode* temp2 = list2 ; 

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val <= temp2->val){
                newhead->next = new ListNode(temp1->val) ;
                temp1 = temp1->next ;
               
            }else{
                newhead->next = new ListNode(temp2->val) ;
                temp2 = temp2->next ;
                
            }
             newhead = newhead->next ;
             
        }

        while(temp2 != NULL){
            newhead->next = new  ListNode(temp2->val) ;
            newhead = newhead->next ;
            temp2 = temp2->next ;
        }
        while(temp1 != NULL){
            newhead->next = new ListNode(temp1->val) ;
            newhead = newhead->next ;
            temp1 = temp1->next ;
        }
        return dummy->next ;
    }
};