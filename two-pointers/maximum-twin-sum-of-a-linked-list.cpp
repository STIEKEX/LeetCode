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
    int pairSum(ListNode* head) {

        ListNode* temp = head ; 
        int size = 0 ;

        while(temp != NULL){
            temp = temp->next ; 
            size++ ;
        }
        int half = size / 2 ; 

        ListNode* curr = head ; 
        ListNode* prev = NULL ; 
        int cnt = 0 ; 
        while(cnt != half){
            prev = curr ; 
            curr = curr->next ; 
            cnt++ ; 
        }
        prev->next = NULL ; 
        ListNode* next = NULL ; 
        while(curr != NULL){
            next = curr->next ; 
            curr->next = prev ; 
            prev = curr ; 
            curr = next ; 

        }


        ListNode* front = head ; 
        int mx = 0 ; 
        while(front != NULL && prev != NULL){
            int sum = 0 ; 
            sum += front->val + prev->val ; 
            mx = max(mx , sum) ; 
            front = front->next  ;
            prev = prev->next ; 
        }
        return mx ; 


        
    }
};