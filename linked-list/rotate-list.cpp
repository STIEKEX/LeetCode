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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head ; 
        }
        
        int count = 0 ; 

        ListNode* temp = head ; 
        while(temp != NULL){
            count++ ; 
            temp = temp->next ; 
        }
         k = k % count ; 

        while(k != 0){

            ListNode* prev = NULL ;
            ListNode* curr = head ; 

            while(curr->next != NULL){
                prev = curr ; 
                curr = curr->next ; 
            }
            curr->next = head ; 
            prev->next = NULL ; 
            head = curr ; 
            k-- ; 
        }

        return head ; 


    }
};