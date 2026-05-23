class Solution {
public:
    int dfs(int i , int j , int m  , int n , vector<vector<int>>&grid , vector<vector<long long >>&dp){
        if(i>=m || j >= n || grid[i][j] == 1) return 0 ; 

        if(i == m-1 && j == n-1) return 1 ; 

        if(dp[i][j] != -1) return (int)dp[i][j] ; 

        int right = dfs(i , j+1 , m , n , grid , dp) ; 
        int down = dfs(i+1 , j , m , n , grid ,dp) ; 

        return dp[i][j] = right + down ; 

    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {

        int m = grid.size() ; 
        int n = grid[0].size() ;
        if(grid[m-1][n-1] == 1) return 0 ; 

        vector<vector<long long >>dp(m , vector<long long>(n , -1)) ; 

       return  dfs(0 , 0 , m , n , grid , dp) ; 
         
         // 0 1 0 0 
    }
};