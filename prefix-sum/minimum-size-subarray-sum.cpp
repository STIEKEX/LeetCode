class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int currsum = 0  ;
        int minlength = INT_MAX ; 
        

        int left = 0 ; 
        int right = 0 ; 

        while(right < nums.size()){
            currsum += nums[right] ;
           
            while(currsum >= target){
                int currlength =( right - left ) +1 ; 
                minlength = min(minlength , currlength) ;
                currsum -= nums[left] ;
                left++ ;
            }
            right++ ;
            
        }
        return minlength == INT_MAX ? 0 : minlength ;
        
    }
};