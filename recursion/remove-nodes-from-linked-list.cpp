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
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp = head ;

        vector<int>arr ; 
        while(temp != NULL){
            arr.push_back(temp->val) ;
            temp = temp->next ;
        }

        int n = arr.size() ; 
        ListNode* dummy = new ListNode() ;
        ListNode* newhead = dummy ; 
        stack<int>s ; 
        
        vector<int>ans ;
        for(int i = n-1 ; i>=0 ; i--){

            while(s.size()>0 && s.top() <= arr[i]){
                s.pop() ;
            }
            if(s.empty()){
                ans.push_back(arr[i]) ;
            }
            s.push(arr[i]) ;

        }

        reverse(ans.begin() , ans.end()) ; 
        for(int i = 0 ; i<ans.size() ; i++){
            newhead->next = new ListNode(ans[i]) ;
            newhead = newhead->next ;
        }
        return dummy->next ;

        
        

        return dummy->next ;





    }
};