class Solution {
public:
    
    int solve(int n , int w , vector<int>&coins , vector<vector<int>>&dp){
        if(n < 0) return 0 ; 
        if(w == 0) return 1 ; 

        if(dp[n][w] != -1) return dp[n][w] ; 
        int taken = 0 ; 
        if(w >= coins[n]){
            taken= solve(n , w-coins[n] , coins , dp) ; 
        }
        int nottaken  = solve(n-1 , w , coins, dp) ; 

        return dp[n][w] = taken + nottaken ; 
    }
    int change(int a, vector<int>& coins) {
        int n = coins.size() ; 

        vector<vector<int>>dp(n+1 , vector<int>(a+1 , -1)) ; 

        return solve(n-1 , a , coins , dp) ; 
    }
};