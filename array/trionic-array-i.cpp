class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size()  ;

        //For increasing ; 
        int i  ;
        for(i = 0 ; i<n-1 ; i++){
            if(nums[i] >= nums[i+1]){
                 break ;
            }
        }
        if(i == 0 || i == n-1) return false ;

        // For decreasing 
        int j ;
        for( j = i ; j<n-1 ; j++){
            if(nums[j] <= nums[j+1]){
                break ;
            }
        }
        if(j == i || j == n-1) return false ;

        // For increasing 
        for(int i = j ; i<n -1; i++){
            if(nums[i] >= nums[i+1]){
                return false ;
            }
        }
        // if(nums[n-2] >= nums[n-1]){
        //     return false; 
        // }
        
        return true ;


        

    }
};