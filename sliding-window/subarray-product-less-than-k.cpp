class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int p = 1 ; 
        int i = 0  ;
        int j = 0 ; 

        int count = 0 ; 
        if(k <= 1) return 0 ;

        while(j < nums.size()){

            p *= nums[j] ;

            while(p >= k){
                p = p/nums[i] ;
                i++ ;
            }
            count += j-i+1 ;
            j++ ;
        }
        
        return count ; 
        
    }
};