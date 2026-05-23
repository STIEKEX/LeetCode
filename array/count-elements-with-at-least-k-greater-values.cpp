class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin()  , nums.end()) ;
        if(k == 0 ) return nums.size() ; 

        int threshold = nums[nums.size() - k] ;
        int ans = 0 ; 
        for(int val : nums){
            if(val < threshold){
                ans++ ;
            }
        }
        return ans ;
        
    }
};