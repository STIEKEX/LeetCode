class Solution {
public:

        void dfs(int i , int j , int m , int n , vector<vector<char>>& grid ,vector<vector<bool>>&seen ){
            if(i < 0 || j < 0 || i >= m || j>=n || grid[i][j] != 'O' || seen[i][j]) return ; 

            seen[i][j] = true ;

            dfs(i-1 , j , m , n , grid ,seen) ; 
            dfs(i+1 , j , m , n , grid ,seen) ; 

            dfs(i , j+1 , m , n , grid ,seen) ; 
            dfs(i , j-1 , m , n , grid ,seen) ; 
        }
    void solve(vector<vector<char>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 


        vector<vector<bool>>seen( m , vector<bool>(n ,false)) ; 


        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ;j<n ; j++){

                if(i == 0 || j == 0 || i == m-1 || j == n-1){
                    if(grid[i][j] == 'O'){
                        dfs(i , j , m , n , grid , seen) ; 
                    }
                }
            }

        }

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){

                if(grid[i][j] == 'O' && !seen[i][j]){
                    grid[i][j] = 'X' ; 
                }
            }
        }
        
    }
};