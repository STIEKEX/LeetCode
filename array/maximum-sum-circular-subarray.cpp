class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int curr = 0 ; 
        int maxSum = INT_MIN ; 

        int currMin = 0; 
        int minSum = INT_MAX ;

        int totalSum = 0 ;
        for(int val : nums){

            totalSum += val ;

            curr = max(val , curr+val) ;
            maxSum = max(maxSum , curr) ; 

            currMin = min(val , currMin + val) ;
            minSum = min(minSum , currMin) ;

        }

        if(maxSum < 0) return maxSum ;
        return max(maxSum , totalSum - minSum) ;
        
        
    }
};