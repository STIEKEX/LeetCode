class Solution {
public: 
        void dfs(int i , int j , int m , int n , vector<vector<int>>& grid , vector<vector<bool>>&seen){
            if(i >= m || j >= n || i < 0 || j < 0 || grid[i][j] != 1 || seen[i][j])return ;

            seen[i][j] = true ;

            dfs(i-1 , j , m , n , grid ,seen) ; 
            dfs(i+1 , j , m , n , grid ,seen) ; 
            dfs(i , j+1 , m , n , grid , seen) ; 
            dfs(i , j-1 , m , n , grid ,seen) ; 
        }

    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){


                if(i == 0 || j == 0 || i == m-1 || j == n-1){
                    if(grid[i][j] == 1 && !seen[i][j]){
                    dfs(i , j , m , n , grid ,seen) ;
                    }
                }
            }
        }








        int count = 0 ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] == 1 && !seen[i][j]){
                    count++ ;
                }
            }
        }
        return count ; 





        
    }
};