class Solution {
public:
        void dfs(int i , int j , int m , int n , vector<vector<bool>>&seen , vector<vector<char>>&grid){
            if(i < 0 || j < 0 || i>= m || j>= n || seen[i][j] || grid[i][j] != '1')return ; 
            seen[i][j] = true ;
            dfs(i-1 , j , m , n , seen , grid) ; 
            dfs(i+1 , j , m , n , seen , grid) ; 
            dfs(i , j+1 , m , n , seen , grid) ; 
            dfs( i , j-1 , m  , n , seen , grid) ;
        }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n , false)) ;
        int count = 0 ; 
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j< n ; j++){
                if(grid[i][j] == '1' && !seen[i][j]){
                    dfs(i , j , m , n , seen , grid) ; 
                    count++ ;
                }
            }
        }
        return count ;
        
    }
};