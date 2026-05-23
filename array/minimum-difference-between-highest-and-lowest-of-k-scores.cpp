class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end() , greater<int>()) ;
        

        int i = 0 ; 
        int diff =  INT_MAX ; 
        while(i<=nums.size()-k){
            diff = min(diff , (nums[i] - nums[i+k-1])) ;
            i++ ;
        }
        
        
        return diff ; 
        
        
        
       
        
    }
};