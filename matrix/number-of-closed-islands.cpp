class Solution {
public:

    bool dfs(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seen){
        if(i < 0 || j < 0 || i>= m || j>=n || grid[i][j] != 0 || seen[i][j]) return true ;
        bool isClosed = true ;
        seen[i][j] = true; 

        if(i == 0 || j == 0 || i == m-1 || j == n-1){
            isClosed = false ;
        }

        bool top = dfs(i-1 , j , m , n , grid ,seen) ; 
        bool bottom = dfs(i+1 , j , m , n ,grid ,seen) ; 

        bool left = dfs(i , j+1 , m , n ,grid ,seen) ; 
        bool right = dfs(i , j-1 , m , n, grid , seen) ; 

        return isClosed && top && bottom && left && right ;

    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ; 

        int count = 0 ; 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                
                if(i != 0 && j != 0 && i != m-1 && j != n-1){
                    if(grid[i][j] == 0 && !seen[i][j]){
                        if(dfs(i ,j  , m , n , grid , seen)) count++ ; 
                       
                    }
                }
            }
        }
        return count ; 
        
    }
};