class Solution {
public:
    int dfs(int i , int j , int m , int n ,vector<vector<int>>&grid , vector<vector<bool>>&seen){
        if(i < 0 || j < 0 || i>= m || j>=n || seen[i][j] || grid[i][j] == 0) return 0 ;
        seen[i][j] = true ;

        int top = dfs(i+1 , j , m , n , grid ,seen) ; 

        int down = dfs(i-1 , j , m , n , grid ,seen) ; 
        int left = dfs(i , j+1 , m , n , grid ,seen) ; 
        int right = dfs(i ,j-1 , m , n , grid ,seen) ; 

        seen[i][j] = false ; 
        return grid[i][j] + max({top , down , left , right}) ; 
    }
    int getMaximumGold(vector<vector<int>>& grid) {

        int m = grid.size() ; 
        int n = grid[0].size();  

        vector<vector<bool>>seen(m , vector<bool>(n , false)) ; 

        int mx = 0 ;

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] != 0){
                mx = max(mx , dfs(i , j , m , n , grid , seen)) ;
                }
            }
        }
        return mx; 
        
    }
};