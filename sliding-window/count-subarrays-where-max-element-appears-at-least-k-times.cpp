class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

        int mx = INT_MIN  ;
        for(int val : nums){
            mx = max(val , mx) ;
        }
        long long ans = 0 ;
        int i = 0 ;
        int j = 0 ; 
        int n = nums.size() ; 
        int count = 0 ;

        while(j < n){

            if(nums[j] == mx){
                count++ ;
            }
            while(count >= k){
                if(nums[i] == mx){
                    count-- ;
                }
                ans += n-j;
                i++ ;
            }
           
            j++ ;
        }
        return ans ;


        
    }
};