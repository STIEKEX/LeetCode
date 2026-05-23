class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size() ; 
        // if(n == 1 && nums[0] != 1){
        //     return 1 ;
        // }
        // if(n == 1 && nums[0] ==1){
        //     return 2 ;
        // }

        for(int i = 0 ; i<n ; i++){
            while(nums[i] < n && nums[i] > 0 && nums[nums[i] -1] != nums[i]){
                swap(nums[i] , nums[nums[i] -1]) ;
            }
        }
        int j = 1 ; 
        for(int k = 0 ; k<nums.size()  ; k++){
            if(nums[k] != j){
                return j ;
            }
            j++ ;
        }
        return j ;
        
    }
};