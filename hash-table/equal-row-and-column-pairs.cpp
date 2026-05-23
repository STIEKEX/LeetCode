class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size() ; 

        unordered_map<int , vector<int>>row , col ; 
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                row[i].push_back(grid[i][j]) ; 

            }
        }

        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<n ; j++){
                col[i].push_back(grid[j][i]) ; 
            }
        }

        int count = 0 ;
        for(auto val : row){
            vector<int>v1 = val.second ; 

            for(auto it : col){
              
              if(it.second == v1) count++ ; 
              

                
            }
        }
        return count ;

        
    }
};