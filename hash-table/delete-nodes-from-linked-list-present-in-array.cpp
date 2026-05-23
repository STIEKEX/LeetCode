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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        int n = nums.size() ; 
        unordered_map<int ,int>m ; 
        for(int val : nums){
            m[val]++ ;
        }
        ListNode* prev = NULL ; 
        ListNode* curr = head ;

        while(curr != NULL){
            if(curr  == head && m.find(curr->val) != m.end()){
                head = head->next ; 
                curr = curr->next ; 
            }
            else if (m.find(curr->val) != m.end()){
                prev->next = curr->next ; 
                curr = prev->next ; 
            }
            else{
                prev = curr ; 
                curr = curr->next ; 
            }
           
        }
        return head ; 
        
    }
};