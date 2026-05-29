class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX; 
        for(int i = 0 ; i<nums.size() ; i++){
            int sum = 0 ; 
            int val = nums[i] ; 

            while(val != 0){
                sum += val % 10 ; 
                val = val/10 ; 
            }
            ans = min(ans , sum) ; 


        }
        return ans ;
        
    }
};