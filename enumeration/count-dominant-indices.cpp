class Solution {
public:

    int dominantIndices(vector<int>& nums) {

        int n = nums.size() ; 

        int sum = 0 ; 

        for(int val : nums){
            sum += val ;
        }
        

        int count = 0 ;
        int runsum = 0 ;
        for(int i = 0 ; i<nums.size()-1 ; i++){
            runsum += nums[i] ;
            double avg = double(sum - runsum)/ (n-i-1);
            if(nums[i] > avg){
                count++ ;
            }
        }
        return count  ;
        
    }
};