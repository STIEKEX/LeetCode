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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size() ;
        if(n == 0){
            return NULL ;
        }

        ListNode* dummy = new ListNode() ;
        ListNode* temp = dummy ;
        vector<ListNode*>arr ; 
       for(ListNode* data : lists){
        ListNode* temp1 = data ;
        while(temp1 != NULL){
            arr.push_back(temp1) ;
            temp1 =temp1->next ;
        }
        
       }

        

        for(ListNode* val : arr){
            temp->next = val ;
            temp = temp->next;
        }
        
        ListNode* temp1 = dummy->next ; 
        vector<int>arr2 ; 
        while(temp1 != NULL){
            arr2.push_back(temp1->val) ;
            temp1 = temp1->next ;
        }

        sort(arr2.begin()  , arr2.end()) ;

        temp1 = dummy->next ;
        dummy = dummy->next ;
        
        for(int i = 0 ; i<arr2.size() ; i++){
            temp1->val = arr2[i] ;
            temp1 = temp1->next ;
        }
        return dummy ;

        
    }
};