class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) { 
        int top = x ; 
        int botton = x + k -1 ; 

        while(top < botton){
            for(int col = y ; col < y+k ; col++){
                swap(grid[top][col] , grid[botton][col]) ; 
            }
            top++ , botton-- ;
        } 
        return grid ;    
            
        
    }
};