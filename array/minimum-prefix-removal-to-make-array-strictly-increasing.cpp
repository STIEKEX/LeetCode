class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {

        int n = nums.size() ; 
        int count = 0 ; 
        int i = 1 ; 
        int st = 0 ; 

        while(i <n){

            if(nums[i-1] < nums[i]){
                count++ ; 
            }
            else if(nums[i-1] >= nums[i]){
                count = 0; 
            }
            i++ ; 
        }
        return n - count - 1 ; 
        
    }
};