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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next; 
        ListNode* newll = new ListNode(0) ;
        ListNode* newhead = newll ;

        int sum = 0 ; 
        while(temp != NULL){
            if(temp->val != 0 ){
                sum += temp->val ;
            }else{
                newhead->next = new ListNode(sum) ;
                sum = 0 ;
                newhead = newhead->next ;

            }
            temp = temp->next ;


        }
        return newll->next ;

       

   
    }
};