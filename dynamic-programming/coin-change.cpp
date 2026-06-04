class Solution {
public:
     int solve(int n , vector<int>&coins , vector<vector<int>>&dp  , int a){

        if(a == 0) return 0 ; 
        if(n < 0) return 1e9 ; 

        if(dp[n][a] != -1) return dp[n][a] ; 

        int taken = 1e9 ; 

        if(coins[n] <= a){
            taken = 1 +  solve(n , coins , dp , a-coins[n]) ; 
        }
        int notTaken = solve(n-1 , coins,  dp , a) ; 

        return dp[n][a] = min(taken  ,notTaken) ; 
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size() ; 

        vector<vector<int>>dp(n+1 , vector<int>(amount+1 , -1)) ; 

        int ans = solve(n-1 , coins , dp , amount) ; 
        
        if(ans >= 1e9) return -1 ;
        return ans ;
        
    }
};