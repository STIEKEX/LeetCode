class Solution {
public:
    const int MOD = 1e9 + 7 ;
    
    int dfs(int i , int j , int m , int n ,vector<vector<int>>&grid , vector<vector<int>>&dp ){

        if(dp[i][j] != -1) return dp[i][j] ;
        long long ans = 1 ; 

        if(i+1 < m && grid[i][j] < grid[i+1][j]){
            ans = (ans + dfs(i+1 , j , m , n ,grid , dp)) % MOD ; 
        }

        if(i-1 >= 0 && grid[i][j] < grid[i-1][j]){
            ans = (ans + dfs(i-1 , j , m , n ,grid , dp)) % MOD;
        }

        if(j+1 < n && grid[i][j] < grid[i][j+1]){
            ans =  (ans +dfs(i , j+1  , m , n , grid, dp)) %MOD ;
        }

        if(j-1 >= 0 && grid[i][j] < grid[i][j-1]){
            ans =  (ans + dfs(i , j-1 , m , n ,grid, dp)) %MOD ;
        }

        

        return dp[i][j] = ans % MOD ;

    }
    int countPaths(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<int>>dp(m , vector<int>(n ,-1)) ;
        long long res = 0 ;
       
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                res = (res + dfs(i , j , m , n , grid ,dp))%MOD ;
            }
        }
        return (int)(res % MOD) ;

        



        
    }
};