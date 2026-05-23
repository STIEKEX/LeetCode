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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head ; 
        ListNode* dummy = new ListNode() ;
        ListNode* newhead = dummy ;

        unordered_map<int , int> m ;
        while(temp != NULL){
            m[temp->val]++ ;
            temp = temp->next ;
        }
        vector<int>arr ;
        for(auto val : m){           
            if(val.second == 1){
                arr.push_back(val.first) ;
            }
        }
        sort(arr.begin() , arr.end()) ;
        for(int val:arr){
            newhead->next = new ListNode(val) ;
            newhead = newhead->next ;
        }
        dummy =dummy->next ;
        return dummy ;
        
    }
};