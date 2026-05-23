class Solution {
public:
    bool solve(int i , int j , int m , int n , char ch , int x , int y ,  vector<vector<char>>&grid , vector<vector<bool>>&seen){
        if(i < 0 || j < 0 || i>=m || j>=n ||  grid[i][j] != ch) return false ;

        // if(seen[i][j] == true && x == i && y == j) return true ;

        seen[i][j] = true ;

       bool top = false , bottom = false , left = false , right = false; 
        if(i+1 < m && grid[i+1][j] == ch ){
            if(seen[i+1][j]){
                if(!(i+1 == x && j == y)) return true ;
            }
            else{
           top =  solve(i+1 , j , m , n , ch , i,  j, grid , seen) ; 
            }
        }

        if(i-1 >= 0 && grid[i-1][j] == ch){
            if(seen[i-1][j]){
                if(!(i-1 == x && j == y)) return true ;
            }
            else{
           bottom =  solve(i-1 , j , m , n , ch , i , j , grid , seen) ; 
            }
        }

        if(j+1 < n && grid[i][j+1] == ch){
            if(seen[i][j+1]){
                if(!(i==x && j+1 == y)) return true ;
            }
            else{
          left =   solve(i , j+1 , m , n , ch ,i , j, grid ,seen) ; 
            }
        }

        if(j-1 >= 0 && grid[i][j-1] == ch){
            if(seen[i][j-1]){
                if(!(i == x && j-1 == y)) return true ;
            }
            else{
           right =  solve(i , j-1 , m , n , ch , i , j ,  grid , seen) ; 
            }
        }
        return top || bottom || left || right ; 

    }


    bool containsCycle(vector<vector<char>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 

       vector<vector<bool>>seen(m ,vector<bool>(n , false)) ; 

        for(int i = 0 ; i<m ; i++){
            for(int j = 0; j <n ; j++){
                
                if(!seen[i][j]){
                    if(solve(i , j , m , n , grid[i][j] , i ,  j  , grid ,seen) ) return true ;
                    
                }
            }
        }
        return false ;
        
        
    }
};