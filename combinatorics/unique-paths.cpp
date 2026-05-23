class Solution {
public:
    int count = 0 ; 
    int dfs(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seen , vector<vector<int>>&dp ){
        if(i < 0 || j < 0 || i>=m || j >=n || grid[i][j]) return 0 ; 
        if(i == m-1 && j == n-1){
           return 1 ; 
        }

        if(dp[i][j] != -1) return dp[i][j] ; 
        

        int right = dfs(i , j+1 , m , n , grid , seen ,dp) ; 
        int down  = dfs(i+1 , j , m , n , grid ,seen , dp) ; 

        return dp[i][j] =  right + down ; 
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>grid(m , vector<int>(n , 0)) ; 
        vector<vector<bool>>seen(m ,vector<bool>(n , false)) ; 
        vector<vector<int>>dp(m , vector<int>(n , -1)) ; 

       return  dfs(0 , 0 , m , n , grid , seen , dp) ; 
         
        
    }
};