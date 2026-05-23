class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

       priority_queue<pair<int ,int> , vector<pair<int ,int>> , greater<pair<int ,int>>> q ; 


       for(int i = 0 ; i<nums.size() ; i++){
        q.push({nums[i] , i}) ;
       }

       while(k--){
        auto val = q.top() ; 
        q.pop() ; 

        int num = val.first ; 
        int idx = val.second ; 
        num = num * multiplier ; 
        nums[idx] = num ; 
        q.push({num , idx}) ;
       }
       return nums ;


    }
};