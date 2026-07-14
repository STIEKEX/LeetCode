class Solution {
public:
    vector<vector<int>>dp ; 
    vector<int>p ; 
    int solve(int i , int b){

        if(i >= p.size()) return 0 ; 
        if(dp[i][b] != -1) return dp[i][b] ; 

        if(b){

            return dp[i][b] = max((-p[i] + solve(i+1 , 0)) , (solve(i+1 , 1))) ; 

        }
        return dp[i][b] = max((p[i] + solve(i+2 , 1)) , (solve(i+1 ,0 ))) ; 
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size() ; 
        dp.resize(n+1 , vector<int>(2 , -1)) ; 
        p = prices ; 
        return solve(0 , 1) ; 
        
    }
};