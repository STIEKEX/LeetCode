class Solution {
public:
        void dfs(int i , int j , int m ,int n , vector<vector<int>>&grid ,int& fish , vector<vector<bool>>&seen){
            if(i >= m || j>=n || i<0 || j<0 || grid[i][j] == 0 || seen[i][j]) return  ; 
            fish += grid[i][j] ; 
            seen[i][j] = true ;

            dfs(i -1 , j , m , n , grid ,fish ,seen ) ;
            dfs(i+1 , j , m , n , grid ,fish , seen) ;
            dfs(i , j+1, m , n , grid ,fish , seen);
            dfs(i , j-1 , m , n ,grid ,fish ,seen) ;

            
        }
    int findMaxFish(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ; 
        int mx = 0 ; 
        for(int i = 0  ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] > 0){
                    int fish = 0 ; 
                    dfs(i , j , m , n , grid , fish , seen) ; 
                    mx = max(mx , fish) ; 
                }
            }
        }
        return mx ;
        
    }
};