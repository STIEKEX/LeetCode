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
    bool isPalindrome(ListNode* head) {
        vector<int>LL ;
        ListNode* temp = head; 

        while(temp != NULL){
            LL.push_back(temp->val) ;
            temp = temp->next ;
        }
        int n = LL.size() ;
        int st = 0 , end = n-1 ; 

        while(st<end){
            if(LL[st] == LL[end]){
                st++ , end-- ;
            }else{
                return false ;
            }


        }
        return true ;
    }
};