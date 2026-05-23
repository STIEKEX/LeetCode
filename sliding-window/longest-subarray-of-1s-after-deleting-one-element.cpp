class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        
        int k = 1 ; 
        int zero = 0 ; 
        int n = nums.size() ; 
        int mx = INT_MIN  ; 
        int i = 0 ; 
        int j = 0 ; 

        while(i <n ){
            if(nums[i] == 0){
                zero++ ;
            }

            while(zero > k ) {
                if(nums[j] == 0){
                    zero-- ;
                }
                j++ ;
            }
            mx = max(mx , i-j+1) ; 
            i++ ;
        }
        return mx -1;
    }
};