class Solution {
public:
    vector<vector<int>>dp ; 

    int solve(int i , int prev , vector<int>&nums){
        if(i == nums.size()) return 0 ; 

        if(dp[i][prev+1] != INT_MIN) return dp[i][prev+1] ; 

       int taken = 0 ; 
       if(prev == -1 || nums[i] > nums[prev]){
        taken = 1  + solve(i+1 , i , nums) ; 
       }
        int notTaken = solve(i+1 , prev , nums) ; 

        return max(taken , notTaken) ; 
    }
    int lengthOfLIS(vector<int>& nums) {

        int n = nums.size() ; 
        dp.resize(n+1 , vector<int>(n+1 , INT_MIN)) ; 

        return solve(0 , -1 , nums) ; 
        
    }
};