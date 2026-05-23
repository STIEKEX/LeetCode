class Solution {
public:
    bool dfs(int idx , int i , int j , int m , int n, vector<vector<char>>&grid , string word , vector<vector<bool>>&seen){
        if(i < 0 || j<0 || i>= m || j>=n || seen[i][j] || grid[i][j] != word[idx])return false ;
        
        if(idx == word.size()-1) return true ; 
        seen[i][j] = true ;
        
       
        bool is = dfs(idx+1 , i-1 , j , m , n , grid ,word , seen) || dfs(idx+1 , i+1 , j , m , n , grid ,word , seen) || dfs(idx+1 , i , j+1 , m , n , grid ,word , seen) || dfs(idx+1 , i , j-1 , m , n , grid , word , seen) ;
         seen[i][j] = false ; 
         return is; 
    }
    bool exist(vector<vector<char>>& grid, string word) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] == word[0]){
                    if(dfs(0 , i , j , m, n , grid ,word , seen)){
                        return true ;
                    }

                }
            }
        }
        return false ;
        
    }
};