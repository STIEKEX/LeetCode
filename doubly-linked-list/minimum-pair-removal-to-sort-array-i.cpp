class Solution {
public:

        int pos(vector<int>&nums){
             int sum = 1e9 ; 
            int pos = -1 ;
             for(int i = 0 ; i<nums.size() - 1 ; i++){
                if(nums[i] + nums[i+1] < sum){
                    sum = nums[i]+nums[i+1] ; 
                    pos = i ;
                }
             }
             return pos ;
        }
        void mergePair(vector<int>&nums , int idx) {
            nums[idx] += nums[idx+1] ; 
            nums.erase(nums.begin() + idx+1) ;

        }
    int minimumPairRemoval(vector<int>& nums) {
        int count = 0 ;
        while(!is_sorted(nums.begin() , nums.end())) {
            mergePair(nums , pos(nums));
            count++ ;

        }
        return count ;
        
    }
};