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
    void reorderList(ListNode* head) {

        ListNode* temp = head; 

        int count = 0 ; 
        while(temp != NULL){ // counting the total number of nodes ; 
            temp = temp->next ; 
            count++ ;
        }

        // now we will store last half of the list in stack 
        int n = count / 2 ;  

        stack<ListNode*>s ; 

        ListNode* temp2 = head ;

        while(n--){
            temp2 = temp2->next ;
            
            
        }
        while(temp2 != NULL){ // here we storing it in stack :
            
            s.push(temp2) ;
            temp2 = temp2->next ;
            


        }
        // now we have two half of the list half in on stack are we will traverse  : and merge then accordingly 

        ListNode* temp3 = head ;
        int steps = count/2 ;  // why this ? because our half list is on stack so we don't need to traverse the full linked list we will traverse only half part of the list ;

        while( steps-- ){
            ListNode* next = temp3->next ; // preserving the next pointer other wise we can mis it like we are on the node 1 if we don't do this 2 will get lost 
            ListNode* nextNode= s.top() ;  // from here we can get a last node 
            s.pop() ; // we are poping out it from stack 
             temp3->next = nextNode ;  // we connect front with end ; 
             nextNode->next = next ;  // here we can connect last node from front second node for example 1->4 now we don't connect  we get lost now so we are connnect it with next node 1->4->2-> 
             temp3 = next  ; // here out curr pointer is at point 2 
        }
        temp3->next = NULL ;
        

        


        
    }
};