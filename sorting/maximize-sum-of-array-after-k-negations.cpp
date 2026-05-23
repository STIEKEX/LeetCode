class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()) ;
        int n = nums.size() ; 

        int i = 0 ;
        while(k != 0 && i<n){
            if(nums[i] >=0){
                break ;
            }
            else{
                nums[i] = -nums[i] ;
                k-- ;
                i++ ;

            }
        }
        sort(nums.begin() , nums.end()) ;
        if(k != 0){
            while(k != 0){
                nums[0] =  -nums[0] ;
                k-- ;
            }
        }
       
        
        // 
        int sum = 0 ;
        for(int val : nums){
            sum += val ;
        }
        return sum ;
        
    }
};