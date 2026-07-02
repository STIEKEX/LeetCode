class Solution {
public:
    bool dfs(int i , int j , int m , int n , vector<vector<int>>&grid , vector<vector<bool>>&seen , int h ){

        if( i < 0 || j < 0 || i >= m || j>=n || seen[i][j]) return false; 


        if(i == m-1 && j == n-1 && h >= 1) return true ;

        seen[i][j] = true ; 
        if(grid[i][j] ==  1){
            h-- ; 
        }

        bool top = dfs(i-1 , j , m , n , grid , seen , h) ; 
        bool down = dfs(i+1 , j, m , n , grid , seen , h) ; 
        bool right = dfs(i , j+1 , m , n , grid ,seen , h) ; 
        bool left = dfs(i , j-1 , m , n , grid ,seen , h) ; 


        seen[i][j] = false ;

        return top || down || right || left ; 
    }
    bool findSafeWalk(vector<vector<int>>& grid, int h) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ; 


        return dfs(0 , 0 , m , n , grid , seen , h) ; 



    }
};