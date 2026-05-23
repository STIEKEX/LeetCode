class Solution {
public:
        int dfs(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<int>>&dp){
                
                if(dp[i][j] != -1) return dp[i][j] ;

                int ans = 1 ;

                if(i-1 >= 0 && grid[i-1][j] >grid[i][j]){
                    ans = max(ans , 1 +  dfs(i-1 , j , m , n , grid , dp)) ; 
                }

                if(i+1 < m && grid[i+1][j] > grid[i][j]){
                    ans = max(ans,  1 + dfs(i+1 , j , m , n , grid , dp)) ;
                }

                if(j+1 < n && grid[i][j+1] > grid[i][j]){
                    ans = max(ans,  1 + dfs(i , j+1 , m , n , grid , dp)) ;
                }

                 if(j-1 >=0 && grid[i][j-1] > grid[i][j]){
                    ans = max(ans,  1 + dfs(i , j-1 , m , n , grid , dp)) ;
                }

                return dp[i][j] = ans ;
        }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m = matrix.size() ; 
        int n = matrix[0].size() ;

        vector<vector<int>>dp(m , vector<int>(n , -1)) ; 


        int res = 0 ;
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){

                
                    res = max(res ,dfs(i , j , m , n , matrix  , dp)) ; 
                
            }

        }
        return res ;


        
    }
};