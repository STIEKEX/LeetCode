class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>grid(n , vector<int>(n , 0)) ; 


        int srow = 0 , scol = 0 , erow = n-1 , ecol = n-1 ; 
        int cnt = 1 ;
        while(srow <= erow && scol <= ecol){

            //top  

            for(int i = scol ; i<=ecol ; i++){
                grid[srow][i] = cnt;
                cnt++ ; 
            }

            //right ; 
            for(int i = srow+1 ; i<=erow ; i++){
                grid[i][ecol] = cnt ; 
                cnt++ ; 
            }

            // bottom ; 

            for(int i = ecol-1 ; i>=scol ; i--){
                if(srow == erow){
                    break ; 
                }
                grid[erow][i] = cnt ; 
                cnt++ ;  
            }

            //left ; 
            for(int i = erow -1 ; i>=srow+1 ; i--){
                if(scol == ecol){
                    break ;
                }
                grid[i][scol] = cnt ; 
                cnt++ ; 
            }
            srow++ , scol++ , erow-- , ecol-- ; 
        }
        return grid ; 
    }
};