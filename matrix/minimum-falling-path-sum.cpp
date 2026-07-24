class Solution {
public:
    vector<vector<int>>dp ; 
    int solve(int idx ,int i , vector<vector<int>>&matrix){
        if(i < 0 || i >= matrix.size()) return INT_MAX ; 
        if(idx == matrix.size() ) return 0 ; 

        if(dp[idx][i] != INT_MAX) return dp[idx][i] ; 

        int below = solve(idx + 1 , i , matrix) ; 
        int left = solve(idx+1 , i-1 , matrix) ; 
        int right = solve(idx+1 , i+1 , matrix) ; 
        
        int mn = min({below , left , right});
        if(mn == INT_MAX){
            return dp[idx][i] = INT_MAX ;
        }
        
        return dp[idx][i] = matrix[idx][i] + mn ; 

    }
    int minFallingPathSum(vector<vector<int>>& matrix) {

        int n = matrix.size() ; 
        dp.resize(n+1 , vector<int>(n+1 , INT_MAX)) ; 
        int ans = INT_MAX ;

        for(int i = 0 ; i<n ; i++){
            ans  = min(solve(0 , i , matrix) ,ans) ; 
        }
        return ans ;
        
    }
};