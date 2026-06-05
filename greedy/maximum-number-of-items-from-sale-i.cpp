class Solution {
public:
    int mn = INT_MAX ; 
    int solve(int n , vector<int>&copy , vector<vector<int>>&items, int amount , vector<vector<int>>&dp){
        if(amount == 0) return 0  ;
        if(n < 0) {
            return amount / mn ;
        } 

        if(dp[n][amount] != -1) return dp[n][amount] ; 
        int taken = 0 ;
        if(items[n][1] <= amount){
            taken  =  1 + copy[n]+ solve(n-1 , copy , items , amount - items[n][1] , dp) ; 
        }
        int notTaken  = solve(n-1 , copy , items , amount , dp) ; 

        return dp[n][amount]= max(taken , notTaken) ; 
    }
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n = items.size() ; 
        vector<int>copy(n) ; 
        
        for(int i = 0 ; i<n ; i++){

            int fac = items[i][0]; 
            mn = min(mn , items[i][1]) ; 

            for(int j = 0 ; j<n ; j++){

                if(i != j && items[j][0] % fac == 0){
                    copy[i]++  ;
                }
            }
        }
        vector<vector<int>>dp(n+1 , vector<int>(budget+1 , -1)) ; 
        return  solve(n-1 , copy , items , budget , dp) ; 
        
        

        
    }
};