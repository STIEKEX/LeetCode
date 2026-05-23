/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp1 = headA ;
        ListNode* temp2 = headB ;

        int sizeA = 0 ;
        int sizeB = 0 ;
        while(temp1 != NULL){
            temp1 = temp1->next ;
            sizeA++ ;
        }

         while(temp2 != NULL){
            temp2 = temp2->next ;
            sizeB++ ;
        }
        temp1 = headA ;
        temp2 = headB ;

        int diff = sizeA - sizeB ;
        if(diff <0){
            diff = -diff ;
        }
        if(sizeA > sizeB){
            for(int i= 0 ; i<diff ; i++){
                temp1 = temp1->next ;
            }
        }

          if(sizeA < sizeB){
            for(int i= 0 ; i<diff ; i++){
                temp2 = temp2->next ;
            }
        }

        while(temp1 != NULL && temp2 != NULL){
            if(temp1 == temp2){
                return temp1 ;
            }
            temp1= temp1->next ;
            temp2 = temp2->next ;
            
        }
        return NULL;
        
    }
};