class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int n = nums.size();
       int cursum = 0 ;
       int maxsum = INT_MIN ;
      
        for(int i =0 ; i<n ; i++){
            cursum = max(nums[i] , cursum + nums[i]) ; 
            maxsum = max(cursum , maxsum);

        }
        return maxsum ;
        
    }
};