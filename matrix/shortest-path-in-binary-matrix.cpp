class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size() ; 


        vector<vector<bool>>seen(m , vector<bool>(n ,false)) ;

        queue<pair<pair<int ,int> , int>>q ;
        q.push({{0 , 0} ,0})  ; 

        seen[0][0] = true ; 
        if(grid[0][0] == 1 || grid[m-1][n-1] == 1) return -1 ;

        while(q.size() > 0){
            int i = q.front().first.first ; 
            int j = q.front().first.second ; 
            int dis = q.front().second ; 
            q.pop() ;

            if(i == m-1 && j == n-1) return dis+1; 

            if(i+1 < m && j+1 < n && grid[i+1][j+1] == 0 && !seen[i+1][j+1]){
                seen[i+1][j+1] = true ;
                q.push({{i+1 , j+1} , dis+1}) ;
            }

            if(i-1 >= 0 && j-1 >= 0 && grid[i-1][j-1] == 0 && !seen[i-1][j-1]){
                seen[i-1][j-1] = true ; 
                q.push({{i-1 , j -1} , dis+1}) ;
            }

            if(i-1 >= 0 && grid[i-1][j] == 0 && !seen[i-1][j]){
                seen[i-1][j] = true ; 
                q.push({{i-1 , j} , dis+1}) ;
            }

            if(j-1 >= 0 && grid[i][j-1] == 0 && !seen[i][j-1]){
                seen[i][j-1] = true ; 
                q.push({{i , j-1} , dis+1}) ;
            }

            if(i+1 < m && grid[i+1][j] == 0 && !seen[i+1][j]){
                seen[i+1][j] = true ; 
                q.push({{i+1 , j} , dis+1}) ;
            }

            if(j+1 < n && grid[i][j+1] == 0 && !seen[i][j+1]){
                seen[i][j+1] = true ; 
                q.push({{i , j+1} , dis+1}) ;
            }

            if(i-1 >= 0 && j+1 < n && grid[i-1][j+1] == 0 && !seen[i-1][j+1]){
                seen[i-1][j+1] = true ;
                 q.push({{i-1 , j+1},dis+1}) ;
            }

            if(i+1 < m && j-1 >= 0 && grid[i+1][j-1] == 0 && !seen[i+1][j-1]){
                seen[i+1][j-1] = true ; 
                q.push({{i+1, j-1} , dis+1}) ;
            }




        }

        return -1 ;



        
    }
};