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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        vector<int>ans(2 , -1) ; 
        vector<int>arr ; 
        ListNode* temp = head ;

        while(temp != NULL){
            arr.push_back(temp->val) ; 
            temp = temp->next ; 
        }

        vector<int>point ;  
        int n = arr.size() ; 
        for(int i = 1 ; i<n-1 ; i++){

            if(arr[i-1] < arr[i] && arr[i] > arr[i+1]){
                point.push_back(i) ; 
            }

            if(arr[i-1] > arr[i] && arr[i] < arr[i+1]){
                point.push_back(i) ; 
            }
        }

        sort(point.begin() , point.end()) ;

        if(point.size() <= 1) return ans ;

        if(point.size() == 2){
            ans[0] = abs(point[0] - point[1]) ; 
            ans[1] = ans[0] ; 
            return ans ; 
        }


        ans[0] = point[point.size()-1] - point[point.size() - 2] ; 
        ans[1] = point[point.size()-1] - point[0] ;
         return ans ;

    }
};