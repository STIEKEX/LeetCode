class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n = nums.size() ; 
        if(n==1){
            return nums[0] ;
        }
        int i = 0 , j = 1 ;
        while(nums.size() !=1){

            if(j<n){
                nums[i] = (nums[i] + nums[j])%10  ;
                i++ ;
                j++ ;
            }else{
                i = 0 ;
                j = 1 ;
                nums.pop_back() ;
            }
            
        }
        return nums[0] ;
        
    }
};