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
        vector<int>arr ;
        while(temp != NULL){
            arr.push_back(temp->val);
            temp = temp->next ;
        }

        int i = 0 , j = arr.size()-1 ;
        int sum = 0 ;
        int maxsum = 0 ; 
        vector<int>ans ;
        while(i <= j){
            sum += arr[i++] + arr[j--] ;
            if(sum > maxsum){
                maxsum = sum ; 

            }
           
            sum = 0 ;
        }
        
        // for(int i=0 ; i<ans.size() ; i++){
        //     if(maxsum < ans[i]){
        //         maxsum = ans[i] ;
        //     }
        // }
        return maxsum ;
        
    }
};