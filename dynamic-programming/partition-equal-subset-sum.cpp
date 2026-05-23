class Solution {
public:

    bool solve(int n , int target , vector<int>&nums , vector<vector<int>>&dp){
        if(target == 0) return true ; 
        if(n < 0) return false ;

        if(dp[n][target] != -1) return dp[n][target] ; 

        bool taken = false; 
        if(target >= nums[n]){
            taken = solve(n-1 , target-nums[n] , nums , dp) ; 

        }
        bool notTaken = solve(n-1 , target , nums , dp) ; 

        return dp[n][target] = taken || notTaken ; 
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size() ;

        int sum = 0 ;
        for(int val : nums){
            sum += val ; 

        }
        if(sum % 2 == 1 ) return false ;

        int target = sum/2 ; 

        vector<vector<int>>dp(n+1 , vector<int>(target+1 , -1)) ; 

        return solve(n-1 , target , nums , dp) ; 


        
    }
};