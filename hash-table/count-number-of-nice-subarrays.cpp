class Solution {
public:
        int atmost(vector<int>nums , int k){
            if(k < 0) return 0 ;
            int n = nums.size() ;

            int i = 0 , j = 0 , count = 0 , ans = 0 ; 


            while(j < n){
                if(nums[j] % 2 != 0){
                    count++ ;
                }
                while(count > k){
                    if(nums[i] % 2 != 0){
                        count-- ;
                    }
                    i++ ;
                }
                ans += (j-i+1) ;
                j++ ;
            }
            return ans ;
        }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums , k) - atmost(nums , k-1) ;
        
    }
};