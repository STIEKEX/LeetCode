class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& grid) {
        int m = grid.size() ; 
        int n = grid[0].size()  ;

        for(int i = 0 ; i<m ; i++){
                int emp = n-1 ; 

            for(int j = n-1 ; j>=0 ; j--){

                
                if(grid[i][j] == '*'){
                    emp = j-1 ; 
                }

                else if(grid[i][j] == '#'){
                    swap(grid[i][j] , grid[i][emp]) ; 
                    emp-- ; 
                }
            }
        }

      
        vector<vector<char>>ans(n , vector<char>(m)) ; 

        for(int i = 0 ; i<m ; i++){

            for(int j = 0 ; j<n ; j++){

                ans[j][m-1-i] = grid[i][j]  ;
            }
        }
        return ans ;

        
        
    }
};