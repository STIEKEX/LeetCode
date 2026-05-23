class Solution {
public:
        int count = 0 ; 
        int  dfs(int i  , int j ,int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seen){
                if(i < 0 || j < 0) return 1 ; 
                if(i >= m || j>= n) return 1 ; 
                if(grid[i][j] == 0) return 1 ; 

                if(seen[i][j]) return 0   ;
                seen[i][j] = true ;

                return dfs(i+1 , j , m , n , grid , seen) + dfs(i-1 , j , m , n , grid ,seen) + dfs(i , j+1 , m , n , grid , seen) + dfs(i , j-1 , m , n , grid , seen) ; 
        }
    int islandPerimeter(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n , false)) ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ;j++){
                if(grid[i][j] == 1 && !seen[i][j]){
                    return dfs(i , j , m , n , grid , seen) ; 
                }
            }
        }
        return -1 ;
        
    }
};