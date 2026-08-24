class Solution {
public:
    vector<int>dp ; 
    int solve(int i  , vector<int>&nums){
        
        if(i == nums.size()-1) return nums[i] ; 

        if(dp[i] != INT_MIN )return dp[i] ; 

        return dp[i] = max(solve(i+1 , nums), nums[i] -solve(i+1 , nums)) ; 
    }
    int stoneGameVIII(vector<int>& stones) {

        int n = stones.size() ; 
        dp.resize(n+1 , INT_MIN) ; 

        vector<int>prefix(n) ;  

        prefix[0] = stones[0] ; 



        for(int i = 1 ;i <n ; i++){
            prefix[i] = prefix[i-1] + stones[i] ; 
        }
        return solve(1 , prefix) ; 


        
    }
};