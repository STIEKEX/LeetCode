class Solution {
public:
    vector<vector<bool>>seen ; 
    void dfs(int i , int j , int m , int n , vector<vector<char>>&grid){
        
        if(i < 0 || j < 0 || i >= m || j >=n|| grid[i][j] == '0' || seen[i][j] ) return ; 


        seen[i][j] = true ;
        dfs(i+1 , j , m , n , grid) ; 
        dfs(i , j+1 , m , n , grid)  ;
        dfs(i-1 , j , m,  n , grid) ; 
        dfs(i , j-1 , m , n , grid) ; 



    }
    int numIslands(vector<vector<char>>& grid) {
        

        int cnt = 0 ; 

        int m = grid.size()  ;
        int n = grid[0].size() ; 

        seen.resize(m , vector<bool>(n , false)) ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){

                if(grid[i][j] == '1'&& !seen[i][j]){
                    cnt++ ; 
                    dfs(i , j  , m , n , grid) ; 
                }
            }
        }
        return cnt ; 

    }
};